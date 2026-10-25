// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14367cd0e FUN_14367cd0e body=282 status=ok
// SIG undefined FUN_14367cd0e(void)

undefined8 * FUN_14367cd0e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367ce28 FUN_14367ce28 body=423 status=ok
// SIG undefined FUN_14367ce28(void)

void FUN_14367ce28(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  local_30 = 0;
  local_38 = 0;
  FUN_14570d169(&local_28,param_1[0x16],*(undefined4 *)(param_1 + 0x17),param_1[0x18]);
  plVar8 = (longlong *)param_1[0x15];
  if (plVar8 != &local_28) {
    lVar5 = *plVar8;
    *plVar8 = local_28;
    local_28 = 0;
    if (lVar5 == 0) goto LAB_14367cf57;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar5 = local_28;
  if (local_28 != 0) {
    LOCK();
    puVar1 = (uint *)(local_28 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_28 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(local_28 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
LAB_14367cf57:
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14367cfd0 FUN_14367cfd0 body=245 status=ok
// SIG undefined FUN_14367cfd0(void)

void FUN_14367cfd0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x2ac);
  iVar2 = (int)param_1[1];
  if (iVar1 != iVar2) {
    *(int *)(lVar3 + 0x2ac) = iVar2;
    (**(code **)(**(longlong **)(lVar3 + 0x210) + 0x4c0))
              (*(longlong **)(lVar3 + 0x210),*(undefined8 *)(lVar3 + 0x218));
    (**(code **)(**(longlong **)(lVar3 + 0x210) + 0x4b8))
              (*(longlong **)(lVar3 + 0x210),*(undefined8 *)(lVar3 + 0x218),8);
    if (iVar1 == 0 || iVar2 == 0) {
      if (DAT_14cad8310 == 0) {
        FUN_1446f470e(&local_28,L"Renderer",1);
        uVar4 = FUN_144a52528();
        DAT_14cad8310 = FUN_14493e38c(uVar4,local_28);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367d0e4 FUN_14367d0e4 body=12 status=ok
// SIG undefined FUN_14367d0e4(void)

void FUN_14367d0e4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014367d0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14367d0f0 FUN_14367d0f0 body=29 status=ok
// SIG undefined FUN_14367d0f0(void)

undefined8 FUN_14367d0f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367d10e FUN_14367d10e body=282 status=ok
// SIG undefined FUN_14367d10e(void)

undefined8 * FUN_14367d10e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367d228 FUN_14367d228 body=285 status=ok
// SIG undefined FUN_14367d228(void)

void FUN_14367d228(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar4 = *(longlong *)(param_1 + 0xa8);
  iVar2 = *(int *)(lVar4 + 0x2ac);
  iVar3 = *(int *)(param_1 + 0xb0);
  if (iVar2 != iVar3) {
    *(int *)(lVar4 + 0x2ac) = iVar3;
    (**(code **)(**(longlong **)(lVar4 + 0x210) + 0x4c0))
              (*(longlong **)(lVar4 + 0x210),*(undefined8 *)(lVar4 + 0x218));
    (**(code **)(**(longlong **)(lVar4 + 0x210) + 0x4b8))
              (*(longlong **)(lVar4 + 0x210),*(undefined8 *)(lVar4 + 0x218),8);
    if (iVar2 == 0 || iVar3 == 0) {
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(&local_30,L"Renderer",1);
        uVar5 = FUN_144a52528();
        DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar5,local_30);
      }
      (**(code **)(*DAT_14cad8310 + 0x220))(DAT_14cad8310,*(undefined8 *)(lVar4 + 0x218));
    }
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367d35c FUN_14367d35c body=29 status=ok
// SIG undefined FUN_14367d35c(void)

undefined8 FUN_14367d35c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367d38e FUN_14367d38e body=85 status=ok
// SIG undefined FUN_14367d38e(void)

void FUN_14367d38e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa688e0;
  return;
}



// FUNCTION 14367d3e4 FUN_14367d3e4 body=85 status=ok
// SIG undefined FUN_14367d3e4(void)

void FUN_14367d3e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa688e0;
  return;
}



// FUNCTION 14367d43a FUN_14367d43a body=118 status=ok
// SIG undefined FUN_14367d43a(void)

void FUN_14367d43a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa688e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014367d4a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14367d4c2 FUN_14367d4c2 body=19 status=ok
// SIG undefined FUN_14367d4c2(void)

void FUN_14367d4c2(undefined8 *param_1,int param_2)

{
  do {
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 4;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 14367d4d6 FUN_14367d4d6 body=243 status=ok
// SIG undefined FUN_14367d4d6(void)

void FUN_14367d4d6(longlong param_1)

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



// FUNCTION 14367d5ca FUN_14367d5ca body=158 status=ok
// SIG undefined FUN_14367d5ca(void)

void FUN_14367d5ca(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  void *_Dst;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = (longlong *)(*(longlong *)*param_1 + (longlong)*param_2 * 0x20);
  _Dst = *(void **)(*(longlong *)*param_1 + 8 + (longlong)*param_2 * 0x20);
  if (_Dst != (void *)0x0) {
    memcpy(_Dst,(void *)plVar1[2],(ulonglong)*(uint *)(plVar1 + 3));
  }
  plVar2 = *(longlong **)(*plVar1 + 8);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  *(undefined8 *)(*plVar1 + 8) = 0;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x10);
  if (UNRECOVERED_JUMPTABLE == (code *)&LAB_141067ecc) {
    plVar1 = (longlong *)plVar2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x10);
    if (UNRECOVERED_JUMPTABLE == (code *)&LAB_1401bbf4a) {
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (plVar1 == (longlong *)0x0 || (int)*plVar2 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014367d65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*plVar1)(plVar1,1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014367d665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// FUNCTION 14367d668 FUN_14367d668 body=481 status=ok
// SIG undefined FUN_14367d668(void)

void FUN_14367d668(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147cd5206(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367d84a FUN_14367d84a body=232 status=ok
// SIG undefined FUN_14367d84a(void)

void FUN_14367d84a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14367d932 FUN_14367d932 body=81 status=ok
// SIG undefined FUN_14367d932(void)

void FUN_14367d932(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147cd52a9(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14367d984 FUN_14367d984 body=282 status=ok
// SIG undefined FUN_14367d984(void)

undefined8 * FUN_14367d984(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367da9e FUN_14367da9e body=1700 status=ok
// SIG undefined FUN_14367da9e(void)

void FUN_14367da9e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined2 local_100;
  undefined1 local_fe;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  int local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined4 local_a8;
  undefined4 uStack_a4;
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
  undefined1 local_78;
  undefined *local_68 [2];
  longlong *local_58 [2];
  longlong local_48 [4];
  ulonglong local_28;
  
  lVar12 = DAT_14caffdd8;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (0 < (longlong)DAT_14caffde0) {
    iVar18 = 0;
    lVar16 = 0;
    while (*(longlong *)(DAT_14caffdd8 + 0x48 + lVar16) != param_1) {
      lVar16 = lVar16 + 0x50;
      iVar18 = iVar18 + 1;
      if ((longlong)DAT_14caffde0 * 0x50 == lVar16) goto LAB_14367e054;
    }
    local_ae = *(undefined1 *)(DAT_14caffdd8 + 2 + lVar16);
    local_b0 = *(undefined2 *)(DAT_14caffdd8 + lVar16);
    lVar5 = *(longlong *)(DAT_14caffdd8 + 8 + lVar16);
    if ((DAT_14c950c29 == 1) && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    local_78 = *(undefined1 *)(lVar12 + 0x40 + lVar16);
    puVar10 = (undefined4 *)(lVar12 + 0x10 + lVar16);
    local_a8 = *puVar10;
    uStack_a4 = puVar10[1];
    uStack_a0 = puVar10[2];
    uStack_9c = puVar10[3];
    puVar10 = (undefined4 *)(lVar12 + 0x20 + lVar16);
    local_98 = *puVar10;
    uStack_94 = puVar10[1];
    uStack_90 = puVar10[2];
    uStack_8c = puVar10[3];
    puVar10 = (undefined4 *)(lVar12 + 0x30 + lVar16);
    local_88 = *puVar10;
    uStack_84 = puVar10[1];
    uStack_80 = puVar10[2];
    uStack_7c = puVar10[3];
    local_fe = local_ae;
    local_100 = local_b0;
    local_f8 = lVar5;
    if (((DAT_14c950c29 & 1) != 0) && (lVar5 != 0)) {
      FUN_1456cec3c(lVar5);
    }
    local_c0 = local_78;
    local_d0 = local_88;
    uStack_cc = uStack_84;
    uStack_c8 = uStack_80;
    uStack_c4 = uStack_7c;
    local_e0 = local_98;
    uStack_dc = uStack_94;
    uStack_d8 = uStack_90;
    uStack_d4 = uStack_8c;
    local_f0 = local_a8;
    uStack_ec = uStack_a4;
    uStack_e8 = uStack_a0;
    uStack_e4 = uStack_9c;
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar4 = *(int *)(lVar12 + 0xc60);
    local_b8 = iVar18;
    if (DAT_14c86a9fc == 0) {
      if (iVar4 == 2) goto LAB_14367e00e;
      if (iVar4 != 1) goto LAB_14367dbd7;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14367e00e;
    }
    else {
LAB_14367dbd7:
      if (iVar4 == 0x10) goto LAB_14367e00e;
    }
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar18 = *(int *)(lVar12 + 0xc60), iVar18 == 2))
      goto LAB_14367e00e;
      if (iVar18 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_14367e00e;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_14367dcc3;
      while( true ) {
        uVar7 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar7 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar7 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar12 + 0x310);
        *(undefined8 *)(lVar12 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_14367dcc3:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x1f);
        uVar7 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar7 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar7) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x1f);
          uVar7 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar7 = 1;
            goto LAB_14367dd43;
          }
        }
      }
      uVar7 = uVar7 + 1;
LAB_14367dd43:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar7;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14aa68a58;
      *(undefined1 *)((longlong)puVar17 + 0xaa) = local_fe;
      *(undefined2 *)(puVar17 + 0x15) = local_100;
      puVar17[0x16] = local_f8;
      if ((local_f8 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(undefined1 *)(puVar17 + 0x1d) = local_c0;
      *(undefined4 *)(puVar17 + 0x1b) = local_d0;
      *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_cc;
      *(undefined4 *)(puVar17 + 0x1c) = uStack_c8;
      *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_c4;
      *(undefined4 *)(puVar17 + 0x19) = local_e0;
      *(undefined4 *)((longlong)puVar17 + 0xcc) = uStack_dc;
      *(undefined4 *)(puVar17 + 0x1a) = uStack_d8;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_d4;
      *(undefined4 *)(puVar17 + 0x17) = local_f0;
      *(undefined4 *)((longlong)puVar17 + 0xbc) = uStack_ec;
      *(undefined4 *)(puVar17 + 0x18) = uStack_e8;
      *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_e4;
      *(int *)(puVar17 + 0x1e) = local_b8;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar7 = DAT_14c7585c8 >> 10 & 3;
        iVar18 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar7 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
          iVar18 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar12 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar12 == 0) {
        uVar6 = 1;
        if ((char)uVar19 != '\x06') {
          uVar6 = uVar19;
        }
        uVar19 = uVar6;
        uVar13 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar12 + 0x30);
      }
      puVar17[0xf] = uVar13;
      puVar17[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar18;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4();
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4();
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_68[0] = (undefined *)0x0;
      local_58[0] = (longlong *)0x0;
      lVar12 = FUN_147cd5686(local_58,&local_100);
      if (lVar12 != 0) {
        local_68[0] = &DAT_147cd5712;
      }
      local_108 = local_68;
      FUN_14005a792(&DAT_14ca9a440,L"RemoveNeuralProfile",&DAT_14cb00328);
      if (local_68[0] != (undefined *)0x0) {
        plVar14 = local_58[0];
        if (local_58[0] == (longlong *)0x0) {
          plVar14 = local_48;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
    }
LAB_14367e00e:
    *(undefined8 *)(DAT_14caffdd8 + 0x48 + lVar16) = 0;
    lVar12 = DAT_14caffdd8;
    *(undefined2 *)(DAT_14caffdd8 + lVar16) = 0;
    *(undefined1 *)(lVar12 + 2 + lVar16) = 0;
    puVar2 = (undefined8 *)(lVar12 + 8 + lVar16);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar12 + 0x18 + lVar16);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar12 + 0x28 + lVar16) = 0;
    *(undefined4 *)(lVar12 + 0x30 + lVar16) = 1;
    *(undefined1 *)(lVar12 + 0x34 + lVar16) = 0;
    *(undefined8 *)(lVar12 + 0x38 + lVar16) = 0;
    *(undefined1 *)(lVar12 + 0x40 + lVar16) = 0;
  }
LAB_14367e054:
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367e144 FUN_14367e144 body=282 status=ok
// SIG undefined FUN_14367e144(void)

undefined8 * FUN_14367e144(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367e29a FUN_14367e29a body=12 status=ok
// SIG undefined FUN_14367e29a(void)

void FUN_14367e29a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014367e2a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14367e2a6 FUN_14367e2a6 body=29 status=ok
// SIG undefined FUN_14367e2a6(void)

undefined8 FUN_14367e2a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367e2c4 FUN_14367e2c4 body=282 status=ok
// SIG undefined FUN_14367e2c4(void)

undefined8 * FUN_14367e2c4(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367e3de FUN_14367e3de body=94 status=ok
// SIG undefined FUN_14367e3de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14367e3de(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14367da9e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14367da9e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014367e41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14367e43c FUN_14367e43c body=76 status=ok
// SIG undefined FUN_14367e43c(void)

void FUN_14367e43c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c(lVar1);
  return;
}



// FUNCTION 14367e492 FUN_14367e492 body=29 status=ok
// SIG undefined FUN_14367e492(void)

void FUN_14367e492(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14367e4b0 FUN_14367e4b0 body=29 status=ok
// SIG undefined FUN_14367e4b0(void)

undefined8 FUN_14367e4b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367e4ce FUN_14367e4ce body=282 status=ok
// SIG undefined FUN_14367e4ce(void)

undefined8 * FUN_14367e4ce(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367e5e8 FUN_14367e5e8 body=131 status=ok
// SIG undefined FUN_14367e5e8(void)

void FUN_14367e5e8(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x16];
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014367e646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14367e66c FUN_14367e66c body=29 status=ok
// SIG undefined FUN_14367e66c(void)

undefined8 FUN_14367e66c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367e69e FUN_14367e69e body=85 status=ok
// SIG undefined FUN_14367e69e(void)

void FUN_14367e69e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa68b00;
  return;
}



// FUNCTION 14367e6f4 FUN_14367e6f4 body=85 status=ok
// SIG undefined FUN_14367e6f4(void)

void FUN_14367e6f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa68b00;
  return;
}



// FUNCTION 14367e74a FUN_14367e74a body=118 status=ok
// SIG undefined FUN_14367e74a(void)

void FUN_14367e74a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa68b00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014367e7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14367e7c6 FUN_14367e7c6 body=16 status=ok
// SIG undefined FUN_14367e7c6(void)

undefined1 FUN_14367e7c6(void)

{
  FUN_14367e7d6();
  return 1;
}



// FUNCTION 14367e7d6 FUN_14367e7d6 body=1210 status=ok
// SIG undefined FUN_14367e7d6(void)

void FUN_14367e7d6(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined1 local_c8 [96];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14165273a(local_c8);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14367e81e;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14367e823;
      goto LAB_14367e84a;
    }
  }
  else {
LAB_14367e81e:
    if (iVar6 != 0x10) {
LAB_14367e84a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14367e823;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14367e823;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14367e9bd;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143679e2b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14367e9bd:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14367ea3d;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14367ea3d:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa68b98;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_d8 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2b3190;
        local_40 = &LAB_14367ec92;
        local_68[0] = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"RayTracingToggledCmd",&DAT_14cb00334);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14367e8ee;
    }
  }
LAB_14367e823:
  DAT_14caffe69 = 1;
LAB_14367e8ee:
  FUN_1416525c2(local_c8);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367ec9a FUN_14367ec9a body=282 status=ok
// SIG undefined FUN_14367ec9a(void)

undefined8 * FUN_14367ec9a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367edec FUN_14367edec body=29 status=ok
// SIG undefined FUN_14367edec(void)

undefined8 FUN_14367edec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367ee1e FUN_14367ee1e body=85 status=ok
// SIG undefined FUN_14367ee1e(void)

void FUN_14367ee1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa68bb0;
  return;
}



// FUNCTION 14367ee74 FUN_14367ee74 body=85 status=ok
// SIG undefined FUN_14367ee74(void)

void FUN_14367ee74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa68bb0;
  return;
}



// FUNCTION 14367eeca FUN_14367eeca body=118 status=ok
// SIG undefined FUN_14367eeca(void)

void FUN_14367eeca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa68bb0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014367ef31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14367ef46 FUN_14367ef46 body=16 status=ok
// SIG undefined FUN_14367ef46(void)

undefined1 FUN_14367ef46(void)

{
  FUN_14367ef56();
  return 1;
}



// FUNCTION 14367ef56 FUN_14367ef56 body=1210 status=ok
// SIG undefined FUN_14367ef56(void)

void FUN_14367ef56(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined1 local_c8 [96];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14165273a(local_c8);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14367ef9e;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14367efa3;
      goto LAB_14367efca;
    }
  }
  else {
LAB_14367ef9e:
    if (iVar6 != 0x10) {
LAB_14367efca:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14367efa3;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14367efa3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14367f13d;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143679e2b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14367f13d:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14367f1bd;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14367f1bd:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa68c18;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_d8 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2b3190;
        local_40 = &LAB_14367f412;
        local_68[0] = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"RayTracingToggledCmd",&DAT_14cb00338);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14367f06e;
    }
  }
LAB_14367efa3:
  DAT_14caffe69 = 1;
LAB_14367f06e:
  FUN_1416525c2(local_c8);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367f41a FUN_14367f41a body=282 status=ok
// SIG undefined FUN_14367f41a(void)

undefined8 * FUN_14367f41a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367f56c FUN_14367f56c body=29 status=ok
// SIG undefined FUN_14367f56c(void)

undefined8 FUN_14367f56c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14367f59e FUN_14367f59e body=85 status=ok
// SIG undefined FUN_14367f59e(void)

void FUN_14367f59e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa68c30;
  return;
}



// FUNCTION 14367f5f4 FUN_14367f5f4 body=85 status=ok
// SIG undefined FUN_14367f5f4(void)

void FUN_14367f5f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa68c30;
  return;
}



// FUNCTION 14367f64a FUN_14367f64a body=118 status=ok
// SIG undefined FUN_14367f64a(void)

void FUN_14367f64a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa68c30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014367f6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14367f6c6 FUN_14367f6c6 body=16 status=ok
// SIG undefined FUN_14367f6c6(void)

undefined1 FUN_14367f6c6(void)

{
  FUN_14367f6d6();
  return 1;
}



// FUNCTION 14367f6d6 FUN_14367f6d6 body=1172 status=ok
// SIG undefined FUN_14367f6d6(void)

void FUN_14367f6d6(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14367f711;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14367f716;
      goto LAB_14367f73d;
    }
  }
  else {
LAB_14367f711:
    if (iVar6 != 0x10) {
LAB_14367f73d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14367f716;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14367f716;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14367f89d;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143679e2b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14367f89d:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14367f91d;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14367f91d:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa68cf8;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2b3190;
        local_40 = &LAB_14367fb6c;
        local_68[0] = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"RefreshAlwaysResidentRayTracingGeometriesCmd",&DAT_14cb0033c)
        ;
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14367f7db;
    }
  }
LAB_14367f716:
  DAT_14caffe68 = 1;
LAB_14367f7db:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14367fb74 FUN_14367fb74 body=282 status=ok
// SIG undefined FUN_14367fb74(void)

undefined8 * FUN_14367fb74(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143679e2b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14367fd0e FUN_14367fd0e body=56 status=ok
// SIG undefined FUN_14367fd0e(void)

int FUN_14367fd0e(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x4000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 6;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0x40);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14367fdeb FUN_14367fdeb body=4553 status=ok
// SIG undefined FUN_14367fdeb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14367fdeb(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined *local_78;
  undefined *local_70;
  code *local_68;
  uint local_54;
  char *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = (char *)CONCAT44(local_50._4_4_,0xffffffff);
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14caff118,L"r.SkinCache.RayTracing.MaxUpdatePrimitivesPerFrame",&local_50,
                L"Sets the skinned ray tracing acceleration structure build budget in terms of maximum number of updated triangles per frame (<= 0 then disabled and all acceleration structures are updated - default)"
               );
  atexit(FUN_143665e4c);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x20);
  FUN_141471170(&DAT_14caff130,L"r.SkinCache.MaxRayTracingPrimitivesPerCmdList",&DAT_14c76195c,
                L"Maximum amount of primitives which are batched together into a single command list to fix potential TDRs."
               );
  atexit(FUN_143665e91);
  local_88 = (wchar_t *)0x0;
  ppuStack_80 = (undefined **)0x0;
  local_78 = (undefined *)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa5b580,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14caff158);
  if (cVar2 == '\0') {
    _DAT_14caff158 = 0;
    uRam000000014caff160 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_80 = &PTR_FUN_14aa61640;
  local_88 = (wchar_t *)0x0;
  local_78 = (undefined *)0x13;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa618a0,2,0);
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14caff360,L"r.SSProfiles.Transmission.UseLegacy",&local_50,
                L"0. Use more physically correct transmission profile.\n1. Use legacy transmission profile (default)."
               );
  atexit(FUN_1436672e4);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14caff390,L"r.MotionVectorSimulation",&DAT_14caff38c,
                L"Controls whether to allow simulated motion vectors on scene components, geometry caches and skinned meshes on camera cut frames."
               );
  atexit(FUN_14366915d);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff430,L"r.Nanite.CoarseStreamingMeshMemoryPoolSizeInMB",&DAT_14c761960,
                L"Pool size for streaming in the render mesh & blas data for the coarse nanite meshes (default 200MB)\nThis budget will be part of the mesh streaming pool size.\nOn consoles the actual BLAS memory will be part of this, on PC only the vertex data because the BLAS is dependent on the GPU & driver.\n"
               );
  atexit(FUN_1436691b2);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff440,L"r.Nanite.CoarseMeshStreamingMode",&DAT_14caff450,
                L"Streaming mode:\n0: Use TLAS proxies to drive what to stream within the budget (default)\n1: Stream in all registered meshes\n2: Don\'t stream in any coarse LODs\n"
               );
  atexit(FUN_1436691f7);
  local_50 = "SMInstance";
  local_48 = (code *)CONCAT35(local_48._5_3_,10);
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14caff458 = (ulonglong)uVar3;
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_88._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14caff460,L"r.Nanite.AllowWorkGraphMaterials",&local_50,
                L"Whether to enable support for Nanite work graph materials");
  atexit(FUN_14366aaf6);
  local_50._0_4_ = 1;
  local_88._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14caff478,L"r.Nanite.AllowSplineMeshes",&local_50,
                L"Whether to enable support for Nanite spline meshes");
  atexit(FUN_14366ab3b);
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x24);
  FUN_14078dbce(&DAT_14caff490,L"r.Nanite.AllowSkinnedMeshes",&local_50,
                L"Whether to enable support for Nanite skinned meshes");
  atexit(FUN_14366ab80);
  local_50 = (char *)0x0;
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14aa68670;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x20);
  local_88 = (wchar_t *)&local_50;
  FUN_141703554(&DAT_14caff4a8,L"r.Nanite.AllowMaskedMaterials",&DAT_14c761964,
                L"Whether to allow meshes using masked materials to render using Nanite.");
  if ((int)local_48 == 0) {
LAB_143680180:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_143680180;
  }
  atexit(FUN_14366abc5);
  local_50._0_4_ = 1;
  local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caff4b8,L"r.RayTracing.Geometry.NaniteProxies",&local_50,
                L"Include Nanite proxy meshes in ray tracing effects (default = 1 (Nanite proxy meshes enabled in ray tracing))"
               );
  atexit(FUN_14366ac0a);
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caff4d0,L"r.RayTracing.Geometry.NaniteSkinnedProxies",&local_50,
                L"Include Nanite skinned proxy meshes in ray tracing effects (default = 1 (Nanite proxy meshes enabled in ray tracing))"
               );
  atexit(FUN_14366ac4f);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14aa686e0;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x20);
  local_88 = (wchar_t *)&local_50;
  FUN_141703554(&DAT_14caff4e8,L"r.RayTracing.Nanite.Mode",&DAT_14caff4f8,
                L"0 - fallback mesh (default);\n1 - streamed out mesh;");
  if ((int)local_48 == 0) {
LAB_1436802ca:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_1436802ca;
  }
  atexit(FUN_14366ac94);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff500,L"r.Nanite.CustomDepth",&DAT_14c761968,
                L"Whether to allow Nanite to render in the CustomDepth pass");
  atexit(FUN_14366acd9);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_88._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14caff510,L"r.gbx.Nanite.GlobalWPODisableDistance",&local_50,
                L"Fallback distance from the camera at which we disable the evaluation of WPO on the Nanite objects"
               );
  atexit(FUN_14366ad1e);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x60);
  FUN_14078dbce(&DAT_14caff528,L"r.gbx.Nanite.GlobalShadowWPODisableDistance",&local_50,
                L"Fallback distance from the camera at which we disable the evaluation of WPO on the Nanite objects for shadow pass"
               );
  atexit(FUN_14366ad63);
  DAT_14caff568 = 0xffffffff;
  _DAT_14caff56c = 0x105;
  DAT_14caff56e = 0;
  DAT_14caff570 = 0;
  DAT_14caff560 = &PTR_FUN_14aa688b0;
  FUN_1463fcc54();
  atexit(FUN_14366c4ed);
  local_68 = FUN_1406ae742;
  local_70 = &DAT_147ad7216;
  local_78 = &DAT_14366c553;
  ppuStack_80 = (undefined **)&LAB_14366c554;
  local_88 = (wchar_t *)&LAB_14366c557;
  FUN_141585c60(&DAT_14cb00c58,L"FNaniteVertexFactory",
                L"/Engine/Private/Nanite/NaniteVertexFactory.ush",0xe6386);
  atexit((_func_5014 *)&LAB_14366c55a);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff5b0,L"r.Nanite.Streaming.Async",&DAT_14c76197c,
                L"Perform most of the Nanite streaming on an asynchronous worker thread instead of the rendering thread."
               );
  atexit(FUN_14366c566);
  local_88._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14caff5c0,L"r.Nanite.Streaming.BandwidthLimit",&DAT_14c761980,
                L"Streaming bandwidth limit in megabytes per second. Negatives values are interpreted as unlimited. "
               );
  atexit(FUN_14366c5ab);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff5d0,L"r.Nanite.Streaming.StreamingPoolSize",&DAT_14c761984,
                L"Size of streaming pool in MB. Does not include memory used for root pages.Be careful with setting this close to the GPU resource size limit (typically 2-4GB) as root pages are allocated from the same physical buffer."
               );
  atexit(FUN_14366c5f0);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff5e0,L"r.Nanite.Streaming.NumInitialRootPages",&DAT_14c761988,
                L"Number of root pages in initial allocation. Allowed to grow on demand if r.Nanite.Streaming.DynamicallyGrowAllocations is enabled."
               );
  atexit(FUN_14366c635);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff5f0,L"r.Nanite.Streaming.NumInitialImposters",&DAT_14c76198c,
                L"Number of imposters in initial allocation. Allowed to grow on demand if r.Nanite.Streaming.DynamicallyGrowAllocations is enabled."
               );
  atexit(FUN_14366c67a);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff600,L"r.Nanite.Streaming.DynamicallyGrowAllocations",&DAT_14c761990,
                L"Determines if root page and imposter allocations are allowed to grow dynamically from initial allocation set by r.Nanite.Streaming.NumInitialRootPages and r.Nanite.Streaming.NumInitialImposters"
               );
  atexit(FUN_14366c6bf);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff610,L"r.Nanite.Streaming.MaxPendingPages",&DAT_14c761994,
                L"Maximum number of pages that can be pending for installation.");
  atexit(FUN_14366c704);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff620,L"r.Nanite.Streaming.Imposters",&DAT_14c761998,
                L"Load imposters used for faster rendering of distant objects. Requires additional memory and might not be worthwhile for scenes with HLOD or no distant objects."
               );
  atexit(FUN_14366c749);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff630,L"r.Nanite.Streaming.MaxPageInstallsPerFrame",&DAT_14c76199c,
                L"Maximum number of pages that can be installed per frame. Limiting this can limit the overhead of streaming."
               );
  atexit(FUN_14366c78e);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff640,L"r.Nanite.Streaming.GPURequestsBufferMinSize",&DAT_14c7619a0,
                L"The minimum number of elements in the buffer used for GPU feedback.Setting Min=Max disables any dynamic buffer size adjustment."
               );
  atexit(FUN_14366c7d3);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff650,L"r.Nanite.Streaming.GPURequestsBufferMaxSize",&DAT_14c7619a4,
                L"The maximum number of elements in the buffer used for GPU feedback.Setting Min=Max disables any dynamic buffer size adjustment."
               );
  atexit(FUN_14366c818);
  local_88._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14caff660,L"r.Nanite.Streaming.QualityScale.MinPoolPercentage",&DAT_14c7619a8,
                L"Adjust quality up whenever the streaming pool load percentage goes below this threshold."
               );
  atexit(FUN_14366c85d);
  local_88._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14caff670,L"r.Nanite.Streaming.QualityScale.MaxPoolPercentage",&DAT_14c7619ac,
                L"Adjust quality down whenever the streaming pool load percentage goes above this threshold."
               );
  atexit(FUN_14366c8a2);
  local_88._0_4_ = 0x20;
  FUN_1415c789c(&DAT_14caff680,L"r.Nanite.Streaming.QualityScale.MinQuality",&DAT_14c7619b0,
                L"Quality scaling will never go below this limit. 1.0 disables any scaling.");
  atexit(FUN_14366c8e7);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff690,L"r.Nanite.Streaming.AsyncCompute",&DAT_14c7619b4,
                L"Schedule GPU work in async compute queue.");
  atexit(FUN_14366c92c);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff6a0,L"r.Nanite.Streaming.Debug.ExplicitRequests",&DAT_14c7619b8,
                L"Process requests coming from explicit calls to RequestNanitePages().");
  atexit(FUN_14366c971);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff6b0,L"r.Nanite.Streaming.Debug.GPURequests",&DAT_14c7619bc,
                L"Process requests coming from GPU rendering feedback");
  atexit(FUN_14366c9b6);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff6c0,L"r.Nanite.Streaming.Debug.Prefetch",&DAT_14c7619c0,
                L"Process resource prefetch requests from calls to PrefetchResource().");
  atexit(FUN_14366c9fb);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff6d0,L"r.Nanite.Streaming.Debug.StreamingPoolResize",&DAT_14c7619c4,
                L"Allow streaming pool to be resized at runtime.");
  atexit(FUN_14366ca40);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff6e0,
                L"r.Nanite.Streaming.Debug.ReservedResourceIgnoreInitialRootAllocation",
                &DAT_14c7619c8,L"Ignore root page initial allocation size for reserved resources.");
  atexit(FUN_14366ca85);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff6f0,L"r.Nanite.Streaming.Debug.ReservedResourceRootPageGrowOnly",
                &DAT_14caff700,L"Root page allocator only grows.");
  atexit(FUN_14366caca);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_88._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14caff708,L"r.Nanite.Streaming.TranscodeWaveSize",&local_50,
                L"Overrides the wave size to use for transcoding.\n 0: Automatic (default);\n 4: Wave size 4;\n 8: Wave size 8;\n 16: Wave size 16;\n 32: Wave size 32;\n 64: Wave size 64;\n 128: Wave size 128;\n"
               );
  atexit(FUN_14366cb0f);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caff720,L"r.Nanite.Streaming.DynamicPageUploadBuffer",&DAT_14caff730,
                L"Set Dynamic flag on the page upload buffer. This can eliminate a buffer copy on some platforms, but potentially also make the transcode shader slower."
               );
  atexit(FUN_14366cb54);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14caff738,L"r.Nanite.Streaming.ReservedResources",&DAT_14caff748,
                L"Allow allocating Nanite GPU resources as reserved resources for better memory utilization and more efficient resizing (EXPERIMENTAL)"
               );
  atexit(FUN_14366cb99);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14aa688e0;
  local_88 = (wchar_t *)((ulonglong)local_88._4_4_ << 0x20);
  FUN_1415c7246(&DAT_14caff750,L"r.Nanite.Streaming.ResetStreamingPool",
                L"Resets the Nanite streaming pool on next update.",&local_50);
  if ((int)local_48 == 0) {
LAB_14368099d:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_14368099d;
  }
  atexit(FUN_14366cbde);
  local_48 = FUN_1402aa9ec;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caff878,&local_50);
  local_48 = FUN_1415a6536;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caff9a0,&local_50);
  local_48 = FUN_141573162;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caffac8,&local_50);
  local_48 = FUN_145e638b0;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caffbf0,&local_50);
  local_48 = FUN_145e63e1a;
  local_50 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14caffd18,&local_50);
  FUN_147ccca8c();
  DAT_14cb00cc8 = &PTR_FUN_14aa68980;
  FUN_1463fcf7e();
  atexit(FUN_143672857);
  ppuStack_80 = &PTR_FUN_14aa65fa0;
  local_88 = (wchar_t *)0x1;
  local_78 = (undefined *)0x4;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa66050,1,&PTR_FUN_14aa66020);
  _DAT_14caffdd0 = 0xffffffff;
  _DAT_14caffdd4 = 0x105;
  DAT_14caffdd6 = 0;
  DAT_14caffdd8 = 0;
  _DAT_14caffde0 = 0;
  DAT_14caffdc8 = &PTR_FUN_14aa689b0;
  FUN_1463fcfc6();
  atexit((_func_5014 *)&LAB_143672962);
  local_50 = (char *)0x0;
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14aa68b00;
  local_54 = 1;
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x20);
  FUN_14078dbce(&DAT_14caffde8,L"r.RayTracing.Enable",&local_54,
                L"Whether ray tracing is enabled at runtime.\nIf r.RayTracing.EnableOnDemand is enabled, ray tracing can be toggled on/off at runtime. Otherwise this is only checked during initialization."
               );
  (**(code **)(*DAT_14caffdf0 + 200))(DAT_14caffdf0,&local_50);
  if ((int)local_48 == 0) {
LAB_143680be5:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_143680be5;
  }
  atexit(FUN_1436734c6);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14aa68bb0;
  local_54 = local_54 & 0xffffff00;
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x20);
  FUN_140bd5914(&DAT_14caffe00,L"r.RayTracing.UseReferenceBasedResidency",&local_54,
                L"(EXPERIMENTAL) Whether raytracing geometries should be resident or evicted based on whether they\'re referenced in TLAS"
               );
  (**(code **)(*DAT_14caffe08 + 200))(DAT_14caffe08,&local_50);
  if ((int)local_48 == 0) {
LAB_143680cd8:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_143680cd8;
  }
  atexit(FUN_14367350b);
  local_88._0_4_ = 4;
  FUN_141471170(&DAT_14caffe18,L"r.RayTracing.Streaming.MaxPendingRequests",&DAT_14c7619cc,
                L"Maximum number of requests that can be pending streaming.");
  atexit(FUN_143673550);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x20);
  FUN_141471170(&DAT_14caffe28,L"r.RayTracing.ResidentGeometryMemoryPoolSizeInMB",&DAT_14c7619d0,
                L"Size of the ray tracing geometry pool.\nIf pool size is larger than the requested geometry size, some unreferenced geometries will stay resident to reduce build overhead when they are requested again."
               );
  atexit(FUN_143673595);
  local_50 = (char *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_50 + 0x10) = lVar4;
  *(undefined ***)local_50 = &PTR_FUN_14aa68c30;
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x20);
  local_88 = (wchar_t *)&local_50;
  FUN_141703554(&DAT_14caffe38,L"r.RayTracing.NumAlwaysResidentLODs",&DAT_14c7619d4,
                L"Number of LODs per ray tracing geometry group to always keep resident (even when not referenced by TLAS).\nDoesn\'t apply when ray tracing is disabled, in which case all ray tracing geometry is evicted."
               );
  if ((int)local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_143680e2f;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143680e2f:
  atexit(FUN_1436735da);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14caffe48,L"r.RayTracing.Geometry.MaxBuiltPrimitivesPerFrame",&DAT_14c7619d8,
                L"Sets the ray tracing acceleration structure build budget in terms of maximum number of triangles per frame (<= 0 then disabled and all acceleration structures are build immediatly - default)"
               );
  atexit(FUN_14367361f);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x20);
  FUN_1415c789c(&DAT_14caffe58,L"r.RayTracing.Geometry.PendingBuildPriorityBoostPerFrame",
                &DAT_14c7619dc,
                L"Increment the priority for all pending build requests which are not scheduled that frame (0.001 - default)"
               );
  atexit(FUN_143673664);
  local_88 = L"Whether to enable the SkeletalMesh Render Command Pipe 0: off; 1: on (default)";
  FUN_145d706a8(&DAT_14cb00c08,L"SkeletalMesh",0,L"r.RenderCommandPipe.SkeletalMesh");
  atexit((_func_5014 *)&LAB_1436782ca);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143680fb8 FUN_143680fb8 body=55 status=ok
// SIG undefined FUN_143680fb8(void)

void FUN_143680fb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb01420 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb01420 = FUN_14171c317(FUN_1463fd00d,uVar1,L"ESpecularProfileFormat");
  }
  return;
}



// FUNCTION 143680fef FUN_143680fef body=69 status=ok
// SIG undefined FUN_143680fef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143680fef(void)

{
  _DAT_14cb01460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143681031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01468,1);
  return;
}



// FUNCTION 14368104c FUN_14368104c body=47 status=ok
// SIG undefined FUN_14368104c(void)

void FUN_14368104c(void)

{
  DAT_14cb016c8 = &PTR_FUN_14aa6e260;
  FUN_144725486(&DAT_14cb016c8);
  FUN_145c38bae(&DAT_14cb016c8);
  return;
}



// FUNCTION 143681090 FUN_143681090 body=110 status=ok
// SIG undefined FUN_143681090(void)

void FUN_143681090(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_143698414(param_1,iVar1);
    }
    FUN_143698400((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_14369856e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 143681100 FUN_143681100 body=433 status=ok
// SIG undefined FUN_143681100(void)

void FUN_143681100(ushort *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fVar2 = ABS(*param_2);
  if ((uint)fVar2 < 0x47800000) {
    if ((uint)fVar2 < 0x38800000) {
      fVar1 = fVar2 + 0.5;
    }
    else {
      fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
  }
  iVar3 = movmskps(fVar2,ZEXT416((uint)*param_2));
  *param_1 = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
  fVar2 = ABS(param_2[1]);
  if ((uint)fVar2 < 0x47800000) {
    if ((uint)fVar2 < 0x38800000) {
      fVar1 = fVar2 + 0.5;
    }
    else {
      fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
  }
  iVar3 = movmskps(fVar2,ZEXT416((uint)param_2[1]));
  param_1[1] = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
  fVar2 = ABS(param_2[2]);
  if ((uint)fVar2 < 0x47800000) {
    if ((uint)fVar2 < 0x38800000) {
      fVar1 = fVar2 + 0.5;
    }
    else {
      fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
  }
  iVar3 = movmskps(fVar2,ZEXT416((uint)param_2[2]));
  param_1[2] = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
  fVar2 = ABS(param_2[3]);
  if ((uint)fVar2 < 0x47800000) {
    if ((uint)fVar2 < 0x38800000) {
      fVar1 = fVar2 + 0.5;
    }
    else {
      fVar2 = (float)((int)fVar2 + 0x8000fff + (uint)(((uint)fVar2 >> 0xd & 1) != 0) >> 0xd);
      fVar1 = fVar2;
    }
  }
  else {
    fVar1 = (float)((0x7f800000 < (uint)fVar2 | 0x3e) << 9);
  }
  iVar3 = movmskps(fVar2,ZEXT416((uint)param_2[3]));
  param_1[3] = (ushort)(iVar3 << 0xf) | SUB42(fVar1,0);
  return;
}



// FUNCTION 1436812b2 FUN_1436812b2 body=1214 status=ok
// SIG undefined FUN_1436812b2(void)

void FUN_1436812b2(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1436812f3;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1436816d5;
      goto LAB_1436812fc;
    }
  }
  else {
LAB_1436812f3:
    if (iVar6 != 0x10) {
LAB_1436812fc:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1436816d5;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1436816d5;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143681464;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143698d57);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143681464:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1436814e4;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1436814e4:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14aa6e330;
        puVar15[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa6e2e0;
        local_68[0] = &LAB_143698d1c;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"RemoveSpecularProfile",&DAT_14cb02040);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14368139b;
    }
  }
LAB_1436816d5:
  FUN_147cdb552(param_1);
LAB_14368139b:
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143681772 FUN_143681772 body=1577 status=ok
// SIG undefined FUN_143681772(void)

void FUN_143681772(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint uVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_cc8 [32];
  code **local_ca8;
  undefined8 local_c98 [132];
  undefined8 local_878;
  undefined8 uStack_870;
  undefined1 local_868 [1048];
  longlong local_450;
  code *local_448 [2];
  longlong *local_438;
  longlong local_428 [129];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_cc8;
  FUN_147bc57d6(local_868,param_1 + 0x28);
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(local_c98,L"Renderer",1);
    uVar12 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar12,local_c98[0]);
  }
  (**(code **)(*DAT_14cad8310 + 0x1f8))();
  if (local_450 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(local_450 + 0x128);
  }
  FUN_147bc57d6(local_c98,local_868);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_878 = param_1;
  uStack_870 = uVar12;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143681818;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143681821;
      goto LAB_1436818af;
    }
LAB_143681821:
    uVar12 = uStack_870;
    FUN_147bc57d6(local_448,local_c98);
  }
  else {
LAB_143681818:
    if (iVar6 == 0x10) goto LAB_143681821;
LAB_1436818af:
    if (DAT_14ca9a438 != '\0') {
LAB_1436818e0:
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143681995;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_143698d57);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143681995:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x9b);
          uVar13 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x9b);
            uVar13 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar13 = 1;
              goto LAB_143681a15;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143681a15:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar13;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa6e390;
        FUN_147bc57d6(puVar16 + 0x15,local_c98);
        *(undefined4 *)(puVar16 + 0x99) = (undefined4)local_878;
        *(undefined4 *)((longlong)puVar16 + 0x4cc) = local_878._4_4_;
        *(undefined4 *)(puVar16 + 0x9a) = (undefined4)uStack_870;
        *(undefined4 *)((longlong)puVar16 + 0x4d4) = uStack_870._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_448[0] = (code *)CONCAT71(local_448[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_448[0] = (code *)CONCAT71(local_448[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_448[0] = (code *)0x0;
        plVar11 = (longlong *)FUN_14001cc68(0x438,8);
        *plVar11 = (longlong)&PTR_LAB_14aa6e340;
        local_438 = plVar11;
        FUN_147bc57d6(plVar11 + 1,local_c98);
        *(undefined4 *)(plVar11 + 0x85) = (undefined4)local_878;
        *(undefined4 *)((longlong)plVar11 + 0x42c) = local_878._4_4_;
        *(undefined4 *)(plVar11 + 0x86) = (undefined4)uStack_870;
        *(undefined4 *)((longlong)plVar11 + 0x434) = uStack_870._4_4_;
        if (plVar11 != (longlong *)&DAT_fffffffffffffff8) {
          local_448[0] = FUN_143698ef6;
        }
        local_ca8 = local_448;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateSpecularProfile",&DAT_14cb02044);
        if (local_448[0] != (code *)0x0) {
          plVar11 = local_438;
          if (local_438 == (longlong *)0x0) {
            plVar11 = local_428;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      goto LAB_14368184b;
    }
    if ((DAT_14c86a9f8 == '\x01') && (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 != 2)) {
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143681d61;
      }
      goto LAB_1436818e0;
    }
LAB_143681d61:
    uVar12 = uStack_870;
    FUN_147bc57d6(local_448,local_c98);
  }
  FUN_147cdb626(local_878,local_448,uVar12);
LAB_14368184b:
  FUN_14599ed1e(local_c98);
  FUN_14599ed1e(local_868);
  if ((local_20 ^ (ulonglong)auStack_cc8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143681d9c FUN_143681d9c body=49 status=ok
// SIG undefined FUN_143681d9c(void)

void FUN_143681d9c(void)

{
  FUN_144760e21(DAT_14cb016f0,DAT_14cb016f8);
  if (DAT_14cb016f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143681dcd FUN_143681dcd body=49 status=ok
// SIG undefined FUN_143681dcd(void)

void FUN_143681dcd(void)

{
  FUN_144760e21(DAT_14cb01708,DAT_14cb01710);
  if (DAT_14cb01708 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143681dfe FUN_143681dfe body=49 status=ok
// SIG undefined FUN_143681dfe(void)

void FUN_143681dfe(void)

{
  FUN_144760e21(DAT_14cb01720,DAT_14cb01728);
  if (DAT_14cb01720 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143681e2f FUN_143681e2f body=49 status=ok
// SIG undefined FUN_143681e2f(void)

void FUN_143681e2f(void)

{
  FUN_144760e21(DAT_14cb01738,DAT_14cb01740);
  if (DAT_14cb01738 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143681e60 FUN_143681e60 body=49 status=ok
// SIG undefined FUN_143681e60(void)

void FUN_143681e60(void)

{
  FUN_144760e21(DAT_14cb01750,DAT_14cb01758);
  if (DAT_14cb01750 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143681e91 FUN_143681e91 body=49 status=ok
// SIG undefined FUN_143681e91(void)

void FUN_143681e91(void)

{
  FUN_144760e21(DAT_14cb01768,DAT_14cb01770);
  if (DAT_14cb01768 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143681ec2 FUN_143681ec2 body=59 status=ok
// SIG undefined FUN_143681ec2(void)

void FUN_143681ec2(void)

{
  FUN_144760e21(DAT_14cb017a8,DAT_14cb017b0);
  if (DAT_14cb017a8 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000143681eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb01780);
  return;
}



// FUNCTION 143681efd FUN_143681efd body=49 status=ok
// SIG undefined FUN_143681efd(void)

void FUN_143681efd(void)

{
  FUN_144760e21(DAT_14cb017c0,DAT_14cb017c8);
  if (DAT_14cb017c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143681f2e FUN_143681f2e body=484 status=ok
// SIG undefined FUN_143681f2e(void)

void FUN_143681f2e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x78),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x7c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x80);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x80) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x80) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x81);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    bVar3 = local_24 != 0;
    *(byte *)(param_1 + 0x81) = bVar3;
  }
  else {
    *(bool *)(param_1 + 0x81) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    bVar3 = *(byte *)(param_1 + 0x81);
  }
  *(uint *)(param_1 + 0x70) = (bVar3 & 1) * 8 + 8;
  *(uint *)(param_1 + 0x74) = (uint)*(byte *)(param_1 + 0x80) * 4 + 4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143682114 FUN_143682114 body=166 status=ok
// SIG undefined FUN_143682114(void)

void FUN_143682114(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_4 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_4 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_4 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_4 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x20);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(param_4 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_4 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_4 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_4 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x38);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_3;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 1436821ba FUN_1436821ba body=146 status=ok
// SIG undefined FUN_1436821ba(void)

void FUN_1436821ba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x10);
  lVar4 = (longlong)iVar2;
  *(uint *)(param_2 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x14) < iVar2 + 1U) {
    FUN_14742d27e(plVar1,iVar2);
  }
  lVar3 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x10 + lVar4 * 0x18) = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  lVar4 = (longlong)iVar2;
  *(uint *)(param_2 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x14) < iVar2 + 1U) {
    FUN_14742d27e(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + lVar4 * 0x18) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar3 + 8 + lVar4 * 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x10 + lVar4 * 0x18) = 0;
  return;
}



// FUNCTION 14368224c FUN_14368224c body=1667 status=ok
// SIG undefined FUN_14368224c(void)

void FUN_14368224c(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  ulonglong *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  longlong local_60;
  ulonglong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1 + 0x40) == (longlong *)0x0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x58))();
  }
  local_68 = L"TangentsRHIBuffer";
  local_78 = (ulonglong *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x7c));
  local_70 = 0x101;
  FUN_1402b31d8(param_1,local_58,param_2,param_1 + 0x40);
  uVar11 = local_58[0];
  puVar1 = (ulonglong *)(param_1 + 0x20);
  if (puVar1 == local_58) {
LAB_143682338:
    uVar11 = local_58[0];
    if (local_58[0] != 0) {
      LOCK();
      puVar2 = (uint *)(local_58[0] + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_58[0] + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(local_58[0] + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = uVar11;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    uVar11 = *puVar1;
  }
  else {
    uVar4 = *puVar1;
    *puVar1 = local_58[0];
    local_58[0] = 0;
    if (uVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(uVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(uVar4 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(uVar4 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = uVar4;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
      goto LAB_143682338;
    }
  }
  if (uVar11 != 0) {
    if ((cVar6 == '\0') &&
       ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) == 0)) {
      cVar6 = FUN_147430c75();
      if (cVar6 != '\0') {
        uVar11 = *(ulonglong *)(param_1 + 0x20);
        bVar7 = *(char *)(param_1 + 0x81) * '\x02' | 0x3d;
        if (uVar11 != 0) goto LAB_1436823d3;
        uVar11 = 0;
        goto LAB_1436823da;
      }
    }
    else {
      bVar7 = *(char *)(param_1 + 0x81) * '\x02' | 0x3d;
LAB_1436823d3:
      if ((*(byte *)(uVar11 + 0x28) & 0x10) == 0) {
LAB_1436823da:
        local_58[0]._0_2_ = (ushort)bVar7 << 8;
        local_58[0]._0_3_ = CONCAT12(1,(short)local_58[0]);
      }
      else {
        local_58[0]._0_3_ = 0x40000;
      }
      local_58[0] = (ulonglong)(uint3)local_58[0];
      local_58[1] = 0;
      local_78 = local_58;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2,uVar11);
      plVar10 = (longlong *)(param_1 + 0x48);
      if (plVar10 != &local_60) {
        lVar5 = *plVar10;
        *plVar10 = local_60;
        local_60 = 0;
        if (lVar5 == 0) goto LAB_1436824fe;
        LOCK();
        puVar2 = (uint *)(lVar5 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar5 + 8);
          LOCK();
          uVar3 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar7 = *(byte *)(lVar5 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar5;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar7 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar12 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar12) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar12) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
      lVar5 = local_60;
      if (local_60 != 0) {
        LOCK();
        puVar2 = (uint *)(local_60 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(local_60 + 8);
          LOCK();
          uVar3 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar7 = *(byte *)(local_60 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar5;
            plVar10 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar7 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar12 = plVar10 != DAT_14ca843c0;
                plVar9 = plVar8;
                if (bVar12) {
                  plVar10 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar12);
            }
            else {
              do {
                *plVar8 = (longlong)plVar9;
                LOCK();
                bVar12 = plVar9 != DAT_14ca843c8;
                plVar10 = plVar8;
                if (bVar12) {
                  plVar9 = DAT_14ca843c8;
                  plVar10 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar10;
                UNLOCK();
              } while (bVar12);
            }
          }
        }
      }
    }
  }
LAB_1436824fe:
  if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x58))();
  }
  local_68 = L"TexCoordRHIBuffer";
  local_78 = (ulonglong *)
             CONCAT44(local_78._4_4_,*(int *)(param_1 + 0x78) * *(int *)(param_1 + 0x7c));
  local_70 = 0x101;
  FUN_1402b31d8(param_1,local_58,param_2,param_1 + 0x50);
  uVar11 = local_58[0];
  puVar1 = (ulonglong *)(param_1 + 0x38);
  if (puVar1 == local_58) {
LAB_1436825c6:
    uVar11 = local_58[0];
    if (local_58[0] != 0) {
      LOCK();
      puVar2 = (uint *)(local_58[0] + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(local_58[0] + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(local_58[0] + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = uVar11;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    uVar11 = *puVar1;
  }
  else {
    uVar4 = *puVar1;
    *puVar1 = local_58[0];
    local_58[0] = 0;
    if (uVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(uVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(uVar4 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)(uVar4 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = uVar4;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
      goto LAB_1436825c6;
    }
  }
  if (uVar11 == 0) goto LAB_143682786;
  if ((cVar6 == '\0') &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) == 0)) {
    cVar6 = FUN_147430c75();
    if (cVar6 == '\0') goto LAB_143682786;
    uVar11 = *(ulonglong *)(param_1 + 0x38);
    bVar7 = *(char *)(param_1 + 0x80) * '\x02' + 0xf;
    if (uVar11 != 0) goto LAB_143682661;
    uVar11 = 0;
LAB_143682668:
    local_58[0]._0_2_ = (ushort)bVar7 << 8;
    local_58[0]._0_3_ = CONCAT12(1,(short)local_58[0]);
  }
  else {
    bVar7 = *(char *)(param_1 + 0x80) * '\x02' + 0xf;
LAB_143682661:
    if ((*(byte *)(uVar11 + 0x28) & 0x10) == 0) goto LAB_143682668;
    local_58[0]._0_3_ = 0x40000;
  }
  local_58[0] = (ulonglong)(uint3)local_58[0];
  local_58[1] = 0;
  local_78 = local_58;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2,uVar11);
  plVar10 = (longlong *)(param_1 + 0x58);
  if (plVar10 != &local_60) {
    lVar5 = *plVar10;
    *plVar10 = local_60;
    local_60 = 0;
    if (lVar5 == 0) goto LAB_143682786;
    LOCK();
    puVar2 = (uint *)(lVar5 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar5 = local_60;
  if (local_60 != 0) {
    LOCK();
    puVar2 = (uint *)(local_60 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(local_60 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(local_60 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
LAB_143682786:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436828d0 FUN_1436828d0 body=69 status=ok
// SIG undefined FUN_1436828d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436828d0(void)

{
  _DAT_14cb017d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143682912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb017e0,1);
  return;
}



// FUNCTION 143682915 FUN_143682915 body=69 status=ok
// SIG undefined FUN_143682915(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143682915(void)

{
  _DAT_14cb01830 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143682957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01838,1);
  return;
}



// FUNCTION 14368295a FUN_14368295a body=69 status=ok
// SIG undefined FUN_14368295a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368295a(void)

{
  _DAT_14cb01848 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368299c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01850,1);
  return;
}



// FUNCTION 1436829e0 FUN_1436829e0 body=1214 status=ok
// SIG undefined FUN_1436829e0(void)

void FUN_1436829e0(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143682a21;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143682e03;
      goto LAB_143682a2a;
    }
  }
  else {
LAB_143682a21:
    if (iVar6 != 0x10) {
LAB_143682a2a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143682e03;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143682e03;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143682b92;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143698d57);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_143682b92:
          puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar15 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143682c12;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143682c12:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14aa6e6d0;
        puVar15[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
        }
        puVar15[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar15[9] = puVar15;
        puVar15[10] = puVar15;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar15[0xf] = uVar11;
        puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar6;
        if (puVar15 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar15);
          LOCK();
          piVar1 = (int *)(puVar15 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar15)(puVar15,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa6e680;
        local_68[0] = &LAB_143699876;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"RemoveSubsurfaceProfile",&DAT_14cb02698);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143682ac9;
    }
  }
LAB_143682e03:
  FUN_145de5d10(param_1);
LAB_143682ac9:
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143682ea0 FUN_143682ea0 body=1454 status=ok
// SIG undefined FUN_143682ea0(void)

void FUN_143682ea0(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_198 [32];
  code **local_178;
  undefined1 local_168 [160];
  code *local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [17];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  memcpy(local_168,(void *)(param_1 + 0x28),0x9c);
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(local_c8,L"Renderer",1);
    pcVar5 = local_c8[0];
    uVar13 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar13,pcVar5);
  }
  (**(code **)(*DAT_14cad8310 + 0x1f8))();
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143682f12;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143683350;
      goto LAB_143682f1b;
    }
  }
  else {
LAB_143682f12:
    if (iVar7 != 0x10) {
LAB_143682f1b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
        goto LAB_143683350;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_143683350;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_1436830c4;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143698d57);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_1436830c4:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x2a);
          uVar14 = puVar12[0x12];
          if (puVar15 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x2a);
            uVar14 = 0;
            if (puVar15 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_143683144;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143683144:
        *(uint **)(puVar12 + 0x10) = puVar15;
        puVar12[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aa6e730;
        memcpy(puVar17 + 0x15,local_168,0xa0);
        puVar17[0x29] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_c8[0] = (code *)CONCAT71(local_c8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_c8[0] = (code *)CONCAT71(local_c8[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_c8[0] = (code *)0x0;
        plVar10 = (longlong *)FUN_14001cc68(0xb0,8);
        *plVar10 = (longlong)&PTR_LAB_14aa6e6e0;
        local_b8 = plVar10;
        memcpy(plVar10 + 1,local_168,0xa0);
        plVar10[0x15] = param_1;
        if (plVar10 != (longlong *)&DAT_fffffffffffffff8) {
          local_c8[0] = FUN_143699a2a;
        }
        local_178 = local_c8;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateSubsurfaceProfile",&DAT_14cb0269c);
        if (local_c8[0] != (code *)0x0) {
          plVar10 = local_b8;
          if (local_b8 == (longlong *)0x0) {
            plVar10 = local_a8;
          }
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      goto LAB_143682fff;
    }
  }
LAB_143683350:
  memcpy(local_c8,local_168,0x9c);
  FUN_147ce7474(local_c8,param_1);
LAB_143682fff:
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143683450 FUN_143683450 body=1238 status=ok
// SIG undefined FUN_143683450(void)

void FUN_143683450(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong uVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong _Size;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_128 [32];
  int local_108;
  uint local_100;
  ulonglong *local_f8;
  undefined1 local_f0;
  uint local_dc;
  longlong *local_d8;
  void *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 local_88;
  ulonglong local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  byte local_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = *(byte *)(param_1 + 0x5e);
  local_b8 = *(longlong *)
              ((ulonglong)*(byte *)(param_1 + 0x5c) * 8 +
               *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) +
              ((ulonglong)*(byte *)(param_1 + 0x5b) - (ulonglong)local_78) * 8);
  local_75 = *(undefined1 *)(param_1 + 0x84);
  local_7a = *(undefined2 *)(local_b8 + 0x4c);
  local_8c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_84 = (ulonglong)*(ushort *)(local_b8 + 0x4a) << 0x20 |
             (ulonglong)*(ushort *)(local_b8 + 0x48);
  local_a8 = *(ulonglong *)(param_1 + 0x88);
  local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x10);
  local_74 = 0xff00;
  local_7c = 1;
  local_77 = 0x101;
  local_a0 = 1;
  local_9c = 0;
  uStack_94 = 0;
  local_68 = L"FTexture2DArrayResource";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_70 = FUN_1431edf91(local_a8,0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  local_d8 = (longlong *)(param_1 + 0x10);
  if (local_d8 != &local_b0) {
    lVar15 = *local_d8;
    *local_d8 = local_b0;
    local_b0 = 0;
    if (lVar15 == 0) goto LAB_143683641;
    LOCK();
    puVar1 = (uint *)(lVar15 + 8);
    uVar19 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar15 + 8);
      LOCK();
      uVar19 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar15 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar15;
        plVar11 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar21) {
              plVar11 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar21 = plVar7 != DAT_14ca843c8;
            plVar11 = plVar6;
            if (bVar21) {
              plVar7 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
  lVar15 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar19 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar19 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_b0 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar15;
        plVar11 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar21) {
              plVar11 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar21 = plVar7 != DAT_14ca843c8;
            plVar11 = plVar6;
            if (bVar21) {
              plVar7 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
LAB_143683641:
  iVar14 = *(int *)(param_1 + 0x120);
  if (0 < iVar14) {
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x70);
    local_c8 = param_1 + 0xa0;
    lVar15 = 0;
    local_c0 = param_1;
    do {
      iVar5 = (int)uVar8;
      uVar8 = 0;
      if (iVar5 != 0) {
        uVar20 = 0;
        do {
          local_a8 = local_a8 & 0xffffffff00000000;
          local_f8 = &local_a8;
          local_f0 = 0;
          local_100 = 1;
          local_108 = (int)lVar15;
          pvVar9 = (void *)(**(code **)(*DAT_14ca83900 + 0x440))
                                     (DAT_14ca83900,&DAT_14ca85100,*local_d8,uVar20 & 0xffffffff);
          if (pvVar9 != (void *)0x0) {
            uVar3 = *(ushort *)(local_b8 + 0x4a);
            uVar4 = *(ushort *)(local_b8 + 0x48);
            uVar19 = *(uint *)(param_1 + 0x70);
            lVar17 = *(longlong *)(param_1 + 0x118);
            if (*(longlong *)(param_1 + 0x118) == 0) {
              lVar17 = local_c8;
            }
            plVar11 = *(longlong **)(lVar17 + lVar15 * 8);
            local_d0 = pvVar9;
            uVar18 = (uint)local_a8;
            if (plVar11 == (longlong *)0x0) {
              uVar8 = 0;
LAB_143683824:
              lVar17 = 0;
            }
            else {
              if ((plVar11[3] & 0x4000000000000000U) == 0) {
                local_dc = (uint)local_a8;
                (**(code **)(*plVar11 + 8))(plVar11);
                uVar18 = local_dc;
              }
              uVar8 = plVar11[2];
              plVar11 = *(longlong **)(lVar17 + lVar15 * 8);
              if (plVar11 == (longlong *)0x0) goto LAB_143683824;
              if ((plVar11[3] & 0x4000000000000000U) == 0) {
                local_dc = uVar18;
                (**(code **)(*plVar11 + 8))(plVar11);
                uVar18 = local_dc;
              }
              lVar17 = plVar11[1];
            }
            param_1 = local_c0;
            uVar10 = uVar8 / uVar19;
            uVar13 = uVar8;
            if (uVar10 * uVar20 <= uVar8) {
              uVar13 = uVar10 * uVar20;
            }
            if (uVar18 == 0) {
              _Size = uVar8 - uVar13;
              if (uVar10 <= uVar8 - uVar13) {
                _Size = uVar10;
              }
              memcpy(local_d0,(void *)(lVar17 + uVar13),_Size);
            }
            else {
              uVar8 = (ulonglong)((uint)*(byte *)(local_c0 + 0x84) * 0x30);
              uVar19 = (uint)(uVar4 >> ((byte)lVar15 & 0x1f));
              iVar14 = *(int *)((longlong)&DAT_14c87341c + uVar8);
              uVar16 = (uint)(uVar3 >> ((byte)lVar15 & 0x1f));
              uVar19 = (int)(uVar19 + iVar14 + (uint)(uVar19 == 0) + -1) / iVar14;
              uVar12 = uVar19;
              if (uVar19 < 3) {
                uVar12 = 2;
              }
              if ((*(byte *)(local_c0 + 0x84) & 0xfe) == 0x1e) {
                uVar19 = uVar12;
              }
              local_108 = uVar19 * *(int *)((longlong)&DAT_14c873428 + uVar8);
              local_100 = uVar18;
              FUN_144b1cc87((void *)(lVar17 + uVar13),local_d0,uVar16 + (uVar16 == 0));
            }
          }
          local_100 = local_100 & 0xffffff00;
          local_108 = (int)lVar15;
          (**(code **)(*DAT_14ca83900 + 0x448))
                    (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),
                     uVar20 & 0xffffffff);
          uVar20 = uVar20 + 1;
          uVar8 = (ulonglong)*(uint *)(param_1 + 0x70);
        } while (uVar20 < uVar8);
        iVar14 = *(int *)(param_1 + 0x120);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar14);
  }
  lVar15 = *(longlong *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar15 = param_1 + 0xa0;
  }
  FUN_14125ff98(lVar15);
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_143699cd8(param_1 + 0xa0);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143683927 FUN_143683927 body=69 status=ok
// SIG undefined FUN_143683927(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143683927(void)

{
  _DAT_14cb019b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143683969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb019c0,1);
  return;
}



// FUNCTION 14368396c FUN_14368396c body=1103 status=ok
// SIG undefined FUN_14368396c(void)

void FUN_14368396c(longlong param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  char *pcVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  size_t sVar13;
  longlong *plVar14;
  int iVar15;
  char **ppcVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_108 [32];
  char *local_e8;
  char **local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  char **local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  char *local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 local_88;
  ulonglong local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar17 = (ulonglong)*(byte *)(param_1 + 0x5e);
  local_b8 = (ulonglong)*(byte *)(param_1 + 0x5b);
  lVar18 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) +
            ((ulonglong)*(byte *)(param_1 + 0x5c) + (local_b8 - uVar17)) * 8);
  uVar4 = *(undefined1 *)(param_1 + 0x84);
  uVar5 = *(ushort *)(lVar18 + 0x4a);
  uVar6 = *(ushort *)(lVar18 + 0x48);
  bVar9 = (byte)DAT_14c760da4 & 0x1f;
  pcVar8 = *(char **)(param_1 + 0x88);
  uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x10);
  lVar18 = *(longlong *)(param_1 + 0x98);
  if ((longlong)DAT_14cb019a8 < 0) {
    local_a8 = (char *)(DAT_14cb019a8 & 0x7fffffffffffffff);
    local_c0 = uVar17;
    if (DAT_14cb019b4 == '\x01') {
      ppcVar16 = &local_a8;
      FUN_1446f470e(ppcVar16,local_a8,1);
    }
    else {
      if (local_a8 == (char *)0x0) {
        local_a0 = 0;
      }
      else {
        sVar13 = strlen(local_a8);
        local_a0 = (undefined4)sVar13;
      }
      ppcVar16 = &local_b0;
      FUN_14001c09c(ppcVar16,&local_a8,1);
    }
    DAT_14cb019a8 = (ulonglong)*(uint *)ppcVar16;
    local_58 = CONCAT44(DAT_14cb019b0,*(uint *)ppcVar16);
    uVar17 = local_c0;
  }
  else {
    local_58 = DAT_14cb019a8 & 0xffffffff | (ulonglong)DAT_14cb019b0 << 0x20;
  }
  local_50 = 0;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_78 = (undefined1)uVar17;
  local_77 = 1;
  local_a0 = 1;
  local_9c = 0;
  uStack_94 = 0;
  local_68 = L"FTexture2DResource";
  local_a8 = pcVar8;
  local_8c = ~(-1 << bVar9);
  local_88 = uVar7;
  local_84 = (ulonglong)uVar5 << 0x20 | (ulonglong)uVar6;
  local_75 = uVar4;
  local_60 = lVar18;
  local_70 = FUN_1431edf91(pcVar8,lVar18 != 0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  ppcVar16 = (char **)(param_1 + 0x10);
  if (ppcVar16 != &local_b0) {
    pcVar8 = *ppcVar16;
    *ppcVar16 = local_b0;
    local_b0 = (char *)0x0;
    if (pcVar8 == (char *)0x0) goto LAB_143683b78;
    LOCK();
    puVar1 = (uint *)(pcVar8 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(pcVar8 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar9 = pcVar8[0xd];
        plVar10 = (longlong *)FUN_14001cc68(0x10);
        plVar10[1] = (longlong)pcVar8;
        plVar14 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar9 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar14;
            LOCK();
            bVar21 = plVar14 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar21) {
              plVar14 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c8;
            plVar14 = plVar10;
            if (bVar21) {
              plVar11 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
  pcVar8 = local_b0;
  if (local_b0 != (char *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar9 = local_b0[0xd];
        plVar10 = (longlong *)FUN_14001cc68(0x10);
        plVar10[1] = (longlong)pcVar8;
        plVar14 = DAT_14ca843c0;
        plVar11 = DAT_14ca843c8;
        if ((bVar9 & 2) == 0) {
          do {
            *plVar10 = (longlong)plVar14;
            LOCK();
            bVar21 = plVar14 != DAT_14ca843c0;
            plVar11 = plVar10;
            if (bVar21) {
              plVar14 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar11;
            UNLOCK();
          } while (bVar21);
        }
        else {
          do {
            *plVar10 = (longlong)plVar11;
            LOCK();
            bVar21 = plVar11 != DAT_14ca843c8;
            plVar14 = plVar10;
            if (bVar21) {
              plVar11 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar21);
        }
      }
    }
  }
LAB_143683b78:
  if (*(longlong *)(param_1 + 0x98) == 0) {
    bVar9 = *(byte *)(param_1 + 0x5e);
    if (bVar9 != 0) {
      local_c0 = (longlong)-(int)uVar17 + local_b8;
      iVar15 = (int)local_b8;
      uVar20 = 0;
      do {
        lVar18 = *(longlong *)(param_1 + 0x120);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          lVar18 = param_1 + 0xa8;
        }
        if (*(longlong *)
             (lVar18 + (ulonglong)(uint)(iVar15 << 3) + (longlong)-(int)uVar17 * 8 + uVar20 * 8) !=
            0) {
          uVar2 = local_c0 + uVar20;
          local_b0 = (char *)CONCAT44(local_b0._4_4_,0xffffffff);
          local_a8 = (char *)0xffffffffffffffff;
          local_c8 = &local_a8;
          local_d0 = 1;
          local_d8 = 0;
          local_e0 = &local_b0;
          local_e8 = (char *)CONCAT44(local_e8._4_4_,1);
          uVar12 = (**(code **)(*DAT_14ca83900 + 0x430))
                             (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),
                              uVar20 & 0xffffffff);
          local_e8 = local_a8;
          FUN_143683dbc(param_1,uVar2 & 0xffffffff,uVar12,(ulonglong)local_b0 & 0xffffffff);
          local_e0 = (char **)CONCAT71(local_e0._1_7_,1);
          local_e8 = (char *)((ulonglong)local_e8 & 0xffffffffffffff00);
          (**(code **)(*DAT_14ca83900 + 0x438))
                    (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),
                     uVar20 & 0xffffffff);
          bVar9 = *(byte *)(param_1 + 0x5e);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < bVar9);
    }
  }
  else if (0 < *(int *)(param_1 + 0x128)) {
    lVar18 = 0;
    do {
      lVar19 = *(longlong *)(param_1 + 0x120);
      if (*(longlong *)(param_1 + 0x120) == 0) {
        lVar19 = param_1 + 0xa8;
      }
      *(undefined8 *)(lVar19 + lVar18 * 8) = 0;
      lVar19 = *(longlong *)(param_1 + 0x1a8);
      if (*(longlong *)(param_1 + 0x1a8) == 0) {
        lVar19 = param_1 + 0x130;
      }
      *(undefined8 *)(lVar19 + lVar18 * 8) = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x128));
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143683dbc FUN_143683dbc body=329 status=ok
// SIG undefined FUN_143683dbc(void)

void FUN_143683dbc(longlong param_1,int param_2,void *param_3,int param_4,ulonglong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar8 = (longlong)param_2;
  lVar4 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) +
           ((ulonglong)*(byte *)(param_1 + 0x5c) + lVar8) * 8);
  bVar1 = *(byte *)(param_1 + 0x84);
  uVar9 = (ulonglong)((uint)bVar1 * 0x30);
  uVar3 = *(uint *)((longlong)&DAT_14c87341c + uVar9);
  uVar3 = ((*(ushort *)(lVar4 + 0x48) + uVar3) - 1) / uVar3;
  uVar6 = 2;
  if (2 < uVar3) {
    uVar6 = uVar3;
  }
  if ((bVar1 & 0xfe) != 0x1e) {
    uVar6 = uVar3;
  }
  lVar5 = *(longlong *)(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    lVar5 = param_1 + 0x130;
  }
  uVar2 = *(ulonglong *)(lVar5 + lVar8 * 8);
  if (uVar2 < param_5) {
    param_5 = uVar2;
  }
  if ((param_4 == 0) ||
     (iVar7 = uVar6 * *(int *)((longlong)&DAT_14c873428 + uVar9), iVar7 == param_4)) {
    lVar4 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x120);
    }
    memcpy(param_3,*(void **)(lVar4 + lVar8 * 8),param_5);
  }
  else {
    lVar5 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x120);
    }
    FUN_144b1cc87(*(undefined8 *)(lVar5 + lVar8 * 8),param_3,*(undefined2 *)(lVar4 + 0x4a),
                  (uint)bVar1,iVar7,param_4);
  }
  FUN_1400020a8();
  lVar4 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar4 = param_1 + 0xa8;
  }
  *(undefined8 *)(lVar4 + lVar8 * 8) = 0;
  lVar4 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1a8);
  }
  *(undefined8 *)(lVar4 + lVar8 * 8) = 0;
  return;
}



// FUNCTION 143683f06 FUN_143683f06 body=1015 status=ok
// SIG undefined FUN_143683f06(void)

void FUN_143683f06(longlong param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char **ppcVar10;
  size_t sVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  char *pcVar17;
  bool bVar18;
  undefined1 auStack_108 [32];
  char *local_e8;
  char **local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  char **local_c8;
  byte local_b9;
  undefined8 local_b8;
  char *local_b0;
  char *local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  byte local_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar2 = *(byte *)(param_1 + 0x5e);
  local_78 = *(byte *)(param_1 + 0x5b);
  uVar14 = (uint)local_78;
  uVar3 = *(undefined1 *)(param_1 + 0x84);
  local_84 = *(undefined8 *)(param_1 + 0x68);
  bVar5 = (byte)DAT_14c760da4 & 0x1f;
  pcVar17 = (char *)(*(ulonglong *)(param_1 + 0x88) | 0x800000);
  uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x10);
  lVar16 = *(longlong *)(param_1 + 0x98);
  if ((longlong)DAT_14cb019a8 < 0) {
    local_a8 = (char *)(DAT_14cb019a8 & 0x7fffffffffffffff);
    local_b9 = local_78;
    local_b8 = local_84;
    if (DAT_14cb019b4 == '\x01') {
      FUN_1446f470e(&local_a8,local_a8,1);
      ppcVar10 = &local_a8;
    }
    else {
      if (local_a8 == (char *)0x0) {
        local_a0 = 0;
      }
      else {
        sVar11 = strlen(local_a8);
        local_a0 = (undefined4)sVar11;
      }
      FUN_14001c09c(&local_b0,&local_a8,1);
      ppcVar10 = &local_b0;
    }
    DAT_14cb019a8 = (ulonglong)*(uint *)ppcVar10;
    local_58 = CONCAT44(DAT_14cb019b0,*(uint *)ppcVar10);
    local_84 = local_b8;
    local_78 = local_b9;
  }
  else {
    local_58 = DAT_14cb019a8 & 0xffffffff | (ulonglong)DAT_14cb019b0 << 0x20;
  }
  iVar15 = uVar14 - bVar2;
  local_50 = 0;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_77 = 1;
  local_a0 = 1;
  local_9c = 0;
  uStack_94 = 0;
  local_68 = L"FTexture2DResource-PRT";
  local_a8 = pcVar17;
  local_8c = ~(-1 << bVar5);
  local_88 = uVar4;
  local_75 = uVar3;
  local_60 = lVar16;
  local_70 = FUN_1431edf91(pcVar17,lVar16 != 0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  ppcVar10 = (char **)(param_1 + 0x10);
  if (ppcVar10 != &local_b0) {
    pcVar17 = *ppcVar10;
    *ppcVar10 = local_b0;
    local_b0 = (char *)0x0;
    if (pcVar17 == (char *)0x0) goto LAB_1436840fc;
    LOCK();
    puVar1 = (uint *)(pcVar17 + 8);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(pcVar17 + 8);
      LOCK();
      uVar14 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar14 >> 0x1e & 1) == 0) {
        bVar2 = pcVar17[0xd];
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = (longlong)pcVar17;
        plVar12 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar12;
            LOCK();
            bVar18 = plVar12 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar18) {
              plVar12 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar18);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar18 = plVar7 != DAT_14ca843c8;
            plVar12 = plVar6;
            if (bVar18) {
              plVar7 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar18);
        }
      }
    }
  }
  pcVar17 = local_b0;
  if (local_b0 != (char *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar14 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar14 >> 0x1e & 1) == 0) {
        bVar2 = local_b0[0xd];
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = (longlong)pcVar17;
        plVar12 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar12;
            LOCK();
            bVar18 = plVar12 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar18) {
              plVar12 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar18);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar18 = plVar7 != DAT_14ca843c8;
            plVar12 = plVar6;
            if (bVar18) {
              plVar7 = DAT_14ca843c8;
              plVar12 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar12;
            UNLOCK();
          } while (bVar18);
        }
      }
    }
  }
LAB_1436840fc:
  (**(code **)(*DAT_14ca83900 + 0x3a8))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),iVar15);
  (**(code **)(*DAT_14ca83900 + 0x3b0))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),iVar15);
  uVar9 = (ulonglong)*(byte *)(param_1 + 0x5b);
  if (iVar15 < (int)(uint)*(byte *)(param_1 + 0x5b)) {
    lVar16 = (longlong)iVar15;
    do {
      lVar13 = *(longlong *)(param_1 + 0x120);
      if (*(longlong *)(param_1 + 0x120) == 0) {
        lVar13 = param_1 + 0xa8;
      }
      if (*(longlong *)(lVar13 + lVar16 * 8) != 0) {
        local_b0 = (char *)CONCAT44(local_b0._4_4_,0xffffffff);
        local_a8 = (char *)0xffffffffffffffff;
        local_d0 = 1;
        local_d8 = 0;
        local_e0 = &local_b0;
        local_e8 = (char *)CONCAT44(local_e8._4_4_,1);
        local_c8 = &local_a8;
        uVar8 = (**(code **)(*DAT_14ca83900 + 0x430))
                          (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),iVar15);
        local_e8 = local_a8;
        FUN_143683dbc(param_1,iVar15,uVar8,(ulonglong)local_b0 & 0xffffffff);
        local_e0 = (char **)CONCAT71(local_e0._1_7_,1);
        local_e8 = (char *)((ulonglong)local_e8 & 0xffffffffffffff00);
        (**(code **)(*DAT_14ca83900 + 0x438))
                  (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x10),iVar15);
        uVar9 = (ulonglong)*(byte *)(param_1 + 0x5b);
      }
      lVar16 = lVar16 + 1;
      iVar15 = iVar15 + 1;
    } while (lVar16 < (longlong)uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436842fe FUN_1436842fe body=674 status=ok
// SIG undefined FUN_1436842fe(void)

undefined8 * FUN_1436842fe(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  uint local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined2 local_6a;
  char local_68;
  undefined2 local_67;
  byte local_65;
  undefined1 local_64;
  undefined1 local_63;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffffffffff00);
  FUN_14066da9c(param_1,param_2,*(undefined8 *)(param_2 + 0x138),param_3);
  *param_1 = &PTR_FUN_14aa6b3f0;
  param_1[0x13] = 0;
  bVar4 = *(byte *)(param_3 + 6);
  bVar1 = *(byte *)(param_3 + 3);
  param_1[0x14] = &PTR_FUN_14aa6ec40;
  *(uint *)(param_1 + 0x33) = (uint)bVar1 - (uint)bVar4;
  memset(param_1 + 0x15,0,0xf0);
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    iVar5 = (uint)*(byte *)(param_3 + 3) - (uint)*(byte *)(param_3 + 6);
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    FUN_1401031ac(param_2,0,&local_98);
    lVar10 = (longlong)iVar5;
    local_c8 = local_a8;
    cVar3 = FUN_143736206(lVar2,(uint)*(byte *)(param_3 + 4) + iVar5,param_1 + 0x15 + lVar10,
                          param_1 + lVar10 + 0x24);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (((cVar3 != '\0') && (DAT_14ca84e1a == '\x01')) &&
       (iVar5 < (int)(uint)*(byte *)(param_3 + 3))) {
      do {
        local_68 = *(char *)((longlong)param_1 + 0x5e);
        bVar4 = *(char *)((longlong)param_1 + 0x5b) - local_68;
        local_65 = *(byte *)((longlong)param_1 + 0x84);
        uVar7 = *(uint *)(param_1 + 0xd) >> (bVar4 & 0x1f);
        uVar9 = (ulonglong)((uint)local_65 * 0x30);
        if (uVar7 < *(uint *)((longlong)&DAT_14c87341c + uVar9)) {
          uVar7 = *(uint *)((longlong)&DAT_14c87341c + uVar9);
        }
        uVar8 = *(uint *)((longlong)param_1 + 0x6c) >> (bVar4 & 0x1f);
        if (uVar8 < *(uint *)((longlong)&DAT_14c873420 + uVar9)) {
          uVar8 = *(uint *)((longlong)&DAT_14c873420 + uVar9);
        }
        uVar6 = *(uint *)(param_1 + 0xe) >> (bVar4 & 0x1f);
        if (uVar6 < *(uint *)(&DAT_14c873424 + uVar9)) {
          uVar6 = *(uint *)(&DAT_14c873424 + uVar9);
        }
        local_7c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_74 = CONCAT44(uVar8,uVar7);
        local_98 = param_1[0x11];
        local_78 = *(undefined4 *)(param_1[10] + 0x10);
        local_64 = 0;
        local_6c = (undefined2)uVar6;
        local_6a = 1;
        local_67 = 0x201;
        uStack_90 = 1;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_63 = 0xff;
        cVar3 = FUN_14490ad04(&local_98,&DAT_149dfb77a,0);
        if (cVar3 != '\0') {
          (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_b8,&local_98,0);
        }
        local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,(int)lVar10);
        FUN_146819286((longlong)&DAT_14c873410 +
                      (ulonglong)((uint)*(byte *)((longlong)param_1 + 0x84) * 0x30),
                      *(undefined4 *)(param_1 + 0xd),*(undefined4 *)((longlong)param_1 + 0x6c),
                      *(undefined4 *)(param_1 + 0xe));
        lVar10 = lVar10 + 1;
      } while (lVar10 < (longlong)(ulonglong)*(byte *)(param_3 + 3));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436845a2 FUN_1436845a2 body=1520 status=ok
// SIG undefined FUN_1436845a2(void)

void FUN_1436845a2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 uVar10;
  byte bVar11;
  longlong *plVar12;
  longlong *plVar13;
  size_t sVar14;
  longlong *plVar15;
  char *_Str;
  longlong lVar16;
  int iVar17;
  undefined1 uVar18;
  int iVar19;
  char **ppcVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_148 [32];
  char **local_128;
  int local_120;
  int local_118;
  longlong local_110;
  int local_104;
  char **local_100;
  ulonglong local_f8;
  longlong local_f0;
  int local_e8;
  int local_e4;
  longlong local_e0;
  ulonglong local_d8;
  char *local_d0;
  char *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  ulonglong local_a4;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  undefined2 local_94;
  undefined4 local_90;
  wchar_t *local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e0 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18);
  local_d8 = (ulonglong)*(byte *)(param_1 + 0x5c);
  local_f0 = (longlong)*(int *)(param_1 + 0x198);
  lVar16 = *(longlong *)(local_e0 + local_d8 * 8 + local_f0 * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb019f0) && (FUN_144b3d300(&DAT_14cb019f0), DAT_14cb019f0 == -1)) {
    DAT_14cb019e0 = 0x800000014aa6b4a8;
    local_c8 = (char *)CONCAT44(local_c8._4_4_,0x12);
    DAT_14cb019e8 = FUN_14577453c();
    DAT_14cb019ec = '\x01';
    _Init_thread_footer(&DAT_14cb019f0);
  }
  uVar3 = *(undefined2 *)(lVar16 + 0x4c);
  uVar4 = *(ushort *)(lVar16 + 0x4a);
  bVar11 = (byte)DAT_14c760da4 & 0x1f;
  uVar5 = *(ushort *)(lVar16 + 0x48);
  pcVar7 = *(char **)(param_1 + 0x88);
  local_a8 = *(uint *)(*(longlong *)(param_1 + 0x50) + 0x10);
  if ((longlong)DAT_14cb019e0 < 0) {
    local_f8 = CONCAT71(local_f8._1_7_,*(undefined1 *)(param_1 + 0x5e));
    local_100 = (char **)CONCAT44(local_100._4_4_,local_a8);
    local_104 = CONCAT31(local_104._1_3_,*(undefined1 *)(param_1 + 0x84));
    _Str = (char *)(DAT_14cb019e0 & 0x7fffffffffffffff);
    if (DAT_14cb019ec == '\x01') {
      ppcVar20 = &local_c8;
      FUN_1446f470e(ppcVar20,_Str,1);
    }
    else {
      local_c8 = _Str;
      if (_Str == (char *)0x0) {
        uStack_c0 = 0;
      }
      else {
        sVar14 = strlen(_Str);
        uStack_c0 = (undefined4)sVar14;
      }
      ppcVar20 = &local_d0;
      FUN_14001c09c(ppcVar20,&local_c8,1);
    }
    DAT_14cb019e0 = (ulonglong)*(uint *)ppcVar20;
    uVar21 = CONCAT44(DAT_14cb019e8,*(uint *)ppcVar20);
    local_98 = (undefined1)local_f8;
    local_a8 = (uint)local_100;
    uVar18 = (undefined1)local_104;
  }
  else {
    uVar21 = DAT_14cb019e0 & 0xffffffff | (ulonglong)DAT_14cb019e8 << 0x20;
    local_98 = *(undefined1 *)(param_1 + 0x5e);
    uVar18 = *(undefined1 *)(param_1 + 0x84);
  }
  uVar10 = CONCAT11((char)(uVar5 >> 8),DAT_14ca84e1a);
  if (DAT_14ca84e1a == '\x01') {
    lVar16 = param_1 + 0xa0;
    local_100 = (char **)CONCAT44(local_100._4_4_,local_a8);
    local_104 = CONCAT22(local_104._2_2_,uVar3);
    local_f8 = CONCAT71(local_f8._1_7_,local_98);
    FUN_147cdca48(lVar16,*(undefined1 *)(param_1 + 0x5b));
    local_98 = (undefined1)local_f8;
    local_a8 = (uint)local_100;
    local_9c = (undefined2)local_104;
  }
  else {
    lVar16 = 0;
    local_9c = uVar3;
  }
  local_94 = 0xff00;
  local_9a = 1;
  local_97 = 0x201;
  uStack_c0 = 1;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_88 = L"FTexture3DResource";
  local_70 = 0;
  local_c8 = pcVar7;
  local_ac = ~(-1 << bVar11);
  local_a4 = (ulonglong)uVar4 << 0x20 | (ulonglong)uVar5;
  local_95 = uVar18;
  local_80 = lVar16;
  local_78 = uVar21;
  local_90 = FUN_1431edf91(pcVar7,uVar10);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_d0,&DAT_14ca85100,&local_c8);
  local_100 = (char **)(param_1 + 0x10);
  if (local_100 != &local_d0) {
    pcVar7 = *local_100;
    *local_100 = local_d0;
    local_d0 = (char *)0x0;
    if (pcVar7 == (char *)0x0) goto LAB_143684808;
    LOCK();
    puVar1 = (uint *)(pcVar7 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(pcVar7 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar11 = pcVar7[0xd];
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = (longlong)pcVar7;
        plVar15 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar11 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar15;
            LOCK();
            bVar22 = plVar15 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar22) {
              plVar15 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar22 = plVar13 != DAT_14ca843c8;
            plVar15 = plVar12;
            if (bVar22) {
              plVar13 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  pcVar7 = local_d0;
  if (local_d0 != (char *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_d0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_d0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar11 = local_d0[0xd];
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = (longlong)pcVar7;
        plVar15 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar11 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar15;
            LOCK();
            bVar22 = plVar15 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar22) {
              plVar15 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar22 = plVar13 != DAT_14ca843c8;
            plVar15 = plVar12;
            if (bVar22) {
              plVar13 = DAT_14ca843c8;
              plVar15 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar15;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
LAB_143684808:
  if (DAT_14ca84e1a == '\0') {
    bVar11 = *(byte *)(param_1 + 0x5e);
    if (bVar11 != 0) {
      uVar21 = (ulonglong)((uint)*(byte *)(param_1 + 0x84) * 0x30);
      local_f8 = (ulonglong)*(uint *)((longlong)&DAT_14c87341c + uVar21);
      iVar6 = *(int *)((longlong)&DAT_14c873420 + uVar21);
      local_104 = *(int *)((longlong)&DAT_14c873428 + uVar21);
      local_e4 = *(uint *)((longlong)&DAT_14c87341c + uVar21) - 1;
      local_e8 = iVar6 + -1;
      local_e0 = local_e0 + local_d8 * 8 + local_f0 * 8;
      lVar16 = param_1 + local_f0 * 8 + 0xa8;
      uVar21 = 0;
      local_f0 = lVar16;
      do {
        lVar8 = *(longlong *)(lVar16 + uVar21 * 8);
        if (lVar8 != 0) {
          lVar9 = *(longlong *)(local_e0 + uVar21 * 8);
          local_c8 = (char *)0x0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_b0 = (uint)*(ushort *)(lVar9 + 0x48);
          local_ac = (uint)*(ushort *)(lVar9 + 0x4a);
          local_a8 = (uint)*(ushort *)(lVar9 + 0x4c);
          iVar17 = ((int)(uStack_b0 + local_e4) / (int)local_f8) * local_104;
          iVar19 = ((int)(local_ac + local_e8) / iVar6) * iVar17;
          pcVar7 = *local_100;
          if (DAT_14ca85169 == '\0') {
            FUN_14002049c(&DAT_14ca85100,
                          CONCAT71((uint7)((ulonglong)
                                           ((longlong)(int)(local_ac + local_e8) % (longlong)iVar6)
                                          >> 8) & 0xffffff,1));
            local_128 = &local_c8;
            local_120 = iVar17;
            local_118 = iVar19;
            local_110 = lVar8;
            (**(code **)(*DAT_14ca83900 + 0x220))
                      (DAT_14ca83900,&DAT_14ca85100,pcVar7,uVar21 & 0xffffffff);
            lVar16 = local_f0;
            FUN_14002049c(&DAT_14ca85100,0);
          }
          else {
            local_128 = &local_c8;
            local_120 = iVar17;
            local_118 = iVar19;
            local_110 = lVar8;
            (**(code **)(*DAT_14ca83900 + 0x220))
                      (DAT_14ca83900,&DAT_14ca85100,pcVar7,uVar21 & 0xffffffff);
          }
          bVar11 = *(byte *)(param_1 + 0x5e);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < bVar11);
    }
    lVar16 = -0x78;
    do {
      if (*(longlong *)(param_1 + 0x120 + lVar16) != 0) {
        FUN_1400020a8();
        *(undefined8 *)(param_1 + 0x120 + lVar16) = 0;
      }
      *(undefined8 *)(param_1 + 0x198 + lVar16) = 0;
      lVar16 = lVar16 + 8;
    } while (lVar16 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143684b94 FUN_143684b94 body=891 status=ok
// SIG undefined FUN_143684b94(void)

void FUN_143684b94(longlong param_1,ulonglong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  uint local_58;
  int local_54;
  undefined8 local_50;
  uint *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((param_2 != 0) && ((*(byte *)(param_2 + 0x242) & 1) == 0)) &&
      (cVar1 = FUN_1447ffd82(param_1 + 0x148,param_3), cVar1 != '\0')) &&
     ((*(longlong *)(param_3 + 0x108) != 0 && (cVar1 = FUN_147a5faf8(), cVar1 != '\0')))) {
    if (*(char *)(param_1 + 0x17f) == '\x01') {
      uVar3 = *(uint *)(param_2 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar4 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar7;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar7;
        }
      }
      local_50 = (undefined8 *)CONCAT44(uVar4,uVar3);
      iVar2 = FUN_147a70c0a(param_1 + 0x6b8,uVar3 ^ uVar4);
      if (iVar2 == -1) {
        if (*(int *)(param_1 + 0x848) != *(int *)(param_1 + 0x874)) {
          uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          lVar9 = param_1 + 0x878;
          if (*(longlong *)(param_1 + 0x880) != 0) {
            lVar9 = *(longlong *)(param_1 + 0x880);
          }
          iVar2 = *(int *)(lVar9 + (ulonglong)
                                   (*(int *)(param_1 + 0x888) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          if (iVar2 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)(param_1 + 0x840) + (longlong)iVar2 * 0x10) == param_2
                 ) goto LAB_143684d7f;
              iVar2 = *(int *)((longlong)iVar2 * 0x10 + *(longlong *)(param_1 + 0x840) + 8);
            } while (iVar2 != -1);
          }
        }
        lVar9 = FUN_147a6176e(param_1,param_2);
        if (*(char *)(lVar9 + 0x15) == '\0') {
          *(undefined1 *)(lVar9 + 0x14) = 1;
        }
        else if (*(char *)(lVar9 + 0x14) == '\0') {
          uVar3 = *(uint *)(param_2 + 0xc);
          local_50 = (undefined8 *)(ulonglong)uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar2 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar2 = *(int *)(lVar9 + 0x10);
            bVar10 = iVar2 == 0;
            if (bVar10) {
              *(int *)(lVar9 + 0x10) = iVar6;
              iVar2 = 0;
            }
            UNLOCK();
            uVar3 = (uint)local_50;
            if (bVar10) {
              iVar2 = iVar6;
            }
          }
          local_50._0_4_ = uVar3;
          local_50 = (undefined8 *)CONCAT44(iVar2,(uint)local_50);
          FUN_147cea6b2(param_1 + 0x6b8,&local_58,&local_50,0);
        }
      }
    }
LAB_143684d7f:
    local_54 = 0;
    local_58 = *(uint *)(param_2 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((local_58 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar2 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar2 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar2 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar6;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar2 = iVar6;
      }
    }
    local_54 = iVar2;
LAB_143684dc6:
    uVar8 = param_2;
    uVar5 = uVar8;
    if (*(ulonglong *)(uVar8 + 0x20) != 0) goto code_r0x000143684dd5;
    goto LAB_143684de6;
  }
LAB_143684be5:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143684dd5:
  param_2 = *(ulonglong *)(uVar8 + 0x20);
  if ((*(uint *)(uVar8 + 8) >> 0x1c & 1) == 0) goto LAB_143684dc6;
  uVar5 = FUN_142840154(uVar8);
LAB_143684de6:
  if (uVar5 == 0) {
    param_2 = *(ulonglong *)(uVar8 + 0x20);
    goto LAB_143684dc6;
  }
  local_60 = *(undefined8 *)(uVar5 + 0x18);
  local_50 = &local_60;
  local_48 = &local_58;
  FUN_147ce86d8(param_1 + 0x7d8,local_3c,&local_50,0);
  goto LAB_143684be5;
}



// FUNCTION 143684f10 FUN_143684f10 body=278 status=ok
// SIG undefined FUN_143684f10(void)

void FUN_143684f10(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_1 + 0x17d) = 0;
  bVar5 = *(int *)(param_2 + 8) == 0;
  *(bool *)(param_1 + 0x17c) = bVar5;
  if (bVar5) {
    plVar2 = *(longlong **)(param_1 + 0x138);
    if (plVar2 == (longlong *)0x0) goto LAB_143684f48;
    (**(code **)(*plVar2 + 0x130))(plVar2,local_48);
    if (*(int *)(param_1 + 0x14c) == 0) {
LAB_143685023:
      uVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x148);
      uVar3 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar4 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar4 == (undefined8 *)0x0) ||
           ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 0x14c) ||
            ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_143685023;
        uVar3 = *puVar4;
      }
    }
    FUN_146211ac0(&DAT_14cb0f1a0,uVar3,local_48);
  }
  else {
    FUN_147a60036(local_48,8);
    FUN_146efbfa6(param_1 + 0x8a0,local_48);
    local_48[0] = local_30;
    if (local_20 != 0) {
      (**(code **)(local_20 + -0x10))(local_20 + -0x10);
      local_48[0] = local_30;
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_143684f48:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143685028 FUN_143685028 body=467 status=ok
// SIG undefined FUN_143685028(void)

void FUN_143685028(longlong param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  
  if ((param_1 != 0) && (lVar4 = *(longlong *)(param_1 + 0x58), lVar4 != 0)) {
    FUN_147bd7130(*(undefined8 *)(lVar4 + 0x858));
    if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1b8) != 0) {
      FUN_147be980e();
    }
    iVar3 = *(int *)(lVar4 + 0x698);
    if (iVar3 == 0) {
      uVar12 = 1;
      uVar10 = 0;
      iVar5 = 0;
      iVar6 = 0;
    }
    else {
      puVar11 = *(uint **)(lVar4 + 0x690);
      if (*(uint **)(lVar4 + 0x690) == (uint *)0x0) {
        puVar11 = (uint *)(lVar4 + 0x680);
      }
      uVar14 = *puVar11;
      if (uVar14 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        uVar10 = 0;
        uVar12 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar12 = uVar10;
        }
        iVar5 = 0;
        do {
          if (uVar12 == uVar10) {
            return;
          }
          iVar5 = iVar5 + 0x20;
          uVar14 = puVar11[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar10 = 0;
        iVar5 = 0;
      }
      uVar12 = (ulonglong)(-uVar14 & uVar14);
      uVar2 = uVar12 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar6 = (iVar5 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar6) {
        iVar6 = iVar3;
      }
    }
    if (iVar6 != iVar3) {
      uVar14 = 0xffffffff;
      iVar13 = iVar3;
      do {
        lVar15 = *(longlong *)(*(longlong *)(lVar4 + 0x670) + (longlong)iVar6 * 0x10);
        if (lVar15 != 0) {
          pbVar1 = (byte *)(lVar15 + 0xc);
          *pbVar1 = *pbVar1 | 0x80;
          iVar13 = *(int *)(lVar4 + 0x698);
        }
        uVar14 = uVar14 & ~(uint)uVar12;
        puVar11 = *(uint **)(lVar4 + 0x690);
        if (*(uint **)(lVar4 + 0x690) == (uint *)0x0) {
          puVar11 = (uint *)(lVar4 + 0x680);
        }
        iVar6 = (int)uVar10;
        lVar15 = (longlong)iVar6;
        uVar7 = puVar11[lVar15] & uVar14;
        if (uVar7 == 0) {
          iVar8 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar8 = iVar13 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar5 = iVar5 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar6 < iVar8) {
            lVar16 = 0;
            do {
              uVar7 = puVar11[lVar15 + lVar16 + 1];
              if (uVar7 != 0) {
                uVar10 = (ulonglong)(iVar6 + (int)lVar16 + 1);
                uVar14 = 0xffffffff;
                goto LAB_1436851b0;
              }
              iVar5 = iVar5 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar9 - lVar15 != lVar16);
            uVar14 = 0xffffffff;
            iVar6 = iVar9;
          }
          uVar10 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar13;
        }
        else {
LAB_1436851b0:
          uVar12 = (ulonglong)(-uVar7 & uVar7);
          uVar2 = uVar12 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar6 = (iVar5 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar13 <= iVar6) {
            iVar6 = iVar13;
          }
        }
      } while (iVar6 != iVar3);
    }
  }
  return;
}



// FUNCTION 1436851fc FUN_1436851fc body=1674 status=ok
// SIG undefined FUN_1436851fc(void)

void FUN_1436851fc(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  GUID *local_160;
  undefined1 *local_158;
  code *local_150;
  GUID local_148;
  void *local_138;
  int local_130;
  undefined8 local_128;
  undefined4 local_120;
  void *local_118;
  int local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_f0 [4];
  ulong local_ec;
  undefined8 local_e4;
  void *local_d8;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  ulong local_a8;
  ushort uStack_a4;
  ushort uStack_a2;
  uchar auStack_a0 [4];
  uchar auStack_9c [4];
  undefined2 local_98;
  undefined8 local_90;
  undefined4 local_88;
  void *local_80;
  int local_78;
  int local_74;
  byte local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
  if (plVar10 == (longlong *)0x0) goto LAB_143685235;
  FUN_145c3c0a0(local_f0);
  FUN_147cdd8d2(local_f0);
  FUN_147a6032c(local_68,param_1 + 0x150);
  FUN_1457ba5da(&DAT_14cb0f1e8,local_58);
  if ((((((*(int *)(param_1 + 0x14c) != 0) && (uVar2 = *(uint *)(param_1 + 0x148), -1 < (int)uVar2))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       ((plVar13 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0x14c))))) &&
      (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
       ((*plVar13 != 0 && (plVar13 = *(longlong **)(*plVar13 + 0x38), plVar13 != (longlong *)0x0))))
      )) && (cVar6 = (**(code **)(*plVar13 + 0x3c0))(), lVar11 = DAT_14cad6e68, cVar6 == '\0')) {
    local_70 = local_70 | 1;
    iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar7 == 0x40000002) {
      uVar12 = 0;
    }
    else {
      bVar14 = true;
      if ((DAT_14c86a9f8 == 1) && (iVar7 != 2)) {
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          bVar14 = DVar8 == DVar9;
        }
        else {
          bVar14 = false;
        }
      }
      uVar12 = (ulonglong)(bVar14 ^ 1);
    }
    if (0 < *(int *)(lVar11 + uVar12 * 4)) {
      local_70 = local_70 | 0x80;
    }
  }
  if (*(char *)(param_1 + 0x17f) == '\x01') {
    local_70 = local_70 | 2;
  }
  if (*(char *)(param_1 + 0x180) == '\x01') {
    local_70 = local_70 | 4;
  }
  if (*(char *)(param_1 + 0x181) == '\x01') {
    local_70 = local_70 | 8;
  }
  if (param_2 != 0) {
    lVar11 = FUN_145b598ec();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
      local_70 = local_70 | 0x10;
    }
    lVar11 = *(longlong *)(param_2 + 0x58);
    if (lVar11 != 0) {
      if (DAT_14cad5cd8 == 0) {
        local_160 = &local_148;
        local_148.Data1 = 0x414bb1f4;
        local_148.Data2 = 1;
        local_148.Data3 = 0;
        local_150 = FUN_14081d0ea;
        local_158 = &LAB_1463c345a;
        local_168 = &LAB_147a5f179;
        local_170 = &LAB_145c3bbe3;
        local_178 = L"Engine";
        local_180 = 0;
        local_188 = 0x1000000c;
        local_190 = 0x10;
        local_198 = 0x15b0;
        FUN_14081cfa3(L"/Script/Engine",L"DemoNetDriver",&DAT_14cad5cd8,&DAT_147a5f178);
      }
      if ((*(int *)(DAT_14cad5cd8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cad5cd8 + 0x38) * 8) == DAT_14cad5cd8 + 0x30)) {
        if ((*(byte *)(lVar11 + 0x9ab) & 8) != 0) {
          local_70 = local_70 | 0x20;
        }
        local_b0 = *(undefined4 *)(lVar11 + 0xa58);
      }
    }
  }
  lVar3 = DAT_14cad6e80;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar11 + 0xc60);
  if (iVar7 == 0x40000002) {
    uVar12 = 0;
  }
  else {
    bVar14 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar7 != 2)) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar14 = DVar8 == DVar9;
      }
      else {
        bVar14 = false;
      }
    }
    uVar12 = (ulonglong)(bVar14 ^ 1);
  }
  piVar1 = (int *)(lVar11 + 0xc60);
  if (0 < *(int *)(lVar3 + uVar12 * 4)) {
    local_70 = local_70 | 0x40;
  }
  local_148.Data1 = 0;
  local_148.Data2 = 0;
  local_148.Data3 = 0;
  local_148.Data4[0] = '\0';
  local_148.Data4[1] = '\0';
  local_148.Data4[2] = '\0';
  local_148.Data4[3] = '\0';
  local_148.Data4[4] = '\0';
  local_148.Data4[5] = '\0';
  local_148.Data4[6] = '\0';
  local_148.Data4[7] = '\0';
  CoCreateGuid(&local_148);
  puVar4 = DAT_14cad6e98;
  local_c8 = CONCAT44(local_148._4_4_,local_148.Data1);
  uStack_c0 = CONCAT44(local_148.Data4._4_4_,local_148.Data4._0_4_);
  local_ac = *(undefined4 *)(param_1 + 0x184);
  iVar7 = *piVar1;
  if (iVar7 == 0x40000002) {
    local_b8 = *DAT_14cad6e98;
LAB_14368552d:
    uVar12 = 0;
    lVar11 = DAT_14cad6eb0;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      local_b8 = *DAT_14cad6e98;
    }
    else if (iVar7 == 2) {
      local_b8 = *DAT_14cad6e98;
      iVar7 = 2;
    }
    else {
      uVar12 = 1;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar12 = (ulonglong)(DVar8 != DVar9);
        iVar7 = *piVar1;
      }
      local_b8 = puVar4[uVar12];
      if (iVar7 == 0x40000002) goto LAB_14368552d;
    }
    lVar11 = DAT_14cad6eb0;
    if (((DAT_14c86a9f8 & 1) == 0) || (iVar7 == 2)) goto LAB_14368552d;
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar12 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar12 = 1;
    }
  }
  local_b4 = *(undefined4 *)(lVar11 + uVar12 * 4);
  FUN_1400b22c2(&local_148,"Windows");
  if (CONCAT44(_uStack_a4,local_a8) != 0) {
    FUN_1400020a8();
  }
  local_a8 = local_148.Data1;
  uStack_a4 = local_148.Data2;
  uStack_a2 = local_148.Data3;
  auStack_a0[0] = local_148.Data4[0];
  auStack_a0[1] = local_148.Data4[1];
  auStack_a0[2] = local_148.Data4[2];
  auStack_a0[3] = local_148.Data4[3];
  auStack_9c[0] = local_148.Data4[4];
  auStack_9c[1] = local_148.Data4[5];
  auStack_9c[2] = local_148.Data4[6];
  auStack_9c[3] = local_148.Data4[7];
  local_98 = 0x104;
  if ((DAT_14cb0f200 != (longlong *)0x0 && DAT_14cb0f208 != 0) &&
     (cVar6 = (**(code **)(*DAT_14cb0f200 + 0x30))(), cVar6 != '\0')) {
    FUN_147cdd968(&local_148,local_f0);
    plVar13 = DAT_14cb0f200;
    if (DAT_14cb0f208 == 0) {
      plVar13 = (longlong *)0x0;
    }
    (**(code **)(*plVar13 + 0x58))(plVar13,&local_148);
    pvVar5 = local_138;
    local_ec = local_148.Data1;
    local_e4 = CONCAT44(local_148.Data4._0_4_,local_148._4_4_);
    local_d0 = local_130;
    if (local_130 == 0 && local_cc == 0) {
      local_cc = 0;
    }
    else {
      FUN_1401254a2(&local_d8,local_130);
      if (local_130 != 0) {
        memcpy(local_d8,pvVar5,(longlong)local_130 * 0x28);
      }
    }
    pvVar5 = local_118;
    local_88 = local_120;
    local_90 = local_128;
    local_78 = local_110;
    if (local_110 == 0 && local_74 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_110);
      if (local_110 != 0) {
        memcpy(local_80,pvVar5,(longlong)local_110 * 2);
      }
    }
    local_48 = local_108;
    local_40 = local_100;
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_138 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_143685887(plVar10,local_f0);
  (**(code **)(*plVar10 + 0x1f0))(plVar10);
  FUN_145ad5df2(local_f0);
LAB_143685235:
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143685887 FUN_143685887 body=1893 status=ok
// SIG undefined FUN_143685887(void)

longlong * FUN_143685887(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  longlong local_248;
  int local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *piVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (*param_2 == 0x2cf5a13d) {
    puVar1 = (uint *)(param_2 + 1);
    puVar3 = *(uint **)param_1[1];
    if ((uint *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar1,4);
      }
      else {
        FUN_14572512c(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    uVar8 = *puVar1;
    if (0xc < uVar8) {
      if (((*(byte *)(param_1 + 5) & 1) != 0) && (param_2[8] = 0, param_2[9] != 0)) {
        FUN_1401255f0(param_2 + 6,0);
      }
      if (0x12 < (int)uVar8) {
        local_1c0 = &local_1c8;
        local_1d8 = &PTR_FUN_149e37810;
        local_1c8 = &local_1d8;
        local_1d0 = param_1;
        FUN_14682568e(param_2 + 6,local_1c0,3);
        if ((*(byte *)(param_1 + 5) & 1) == 0) {
          (**(code **)(*param_1 + 0x218))(param_1,&DAT_14aa6b530);
          (**(code **)(*param_1 + 0x218))(param_1,&DAT_14c8733f4);
          (**(code **)(*param_1 + 0x218))(param_1,&DAT_14c8733e4);
        }
        else {
          (**(code **)(*param_1 + 0x60))(param_1,param_2 + 6);
          uVar8 = FUN_1448332aa(param_1,&DAT_14aa6b530);
        }
      }
      piVar2 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        param_2[2] = *piVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      piVar2 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        param_2[3] = *piVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      piVar2 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        param_2[4] = *piVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      bVar6 = *(byte *)(param_1 + 5) & 1;
      if (bVar6 != 0 && (int)uVar8 < 0x13) {
        FUN_1446f470e(&local_1e0,L"Replay",1);
        FUN_1414dd3d2(param_1,&DAT_14aa6b530,param_2[1],local_1e0);
        FUN_1446f470e(&local_1e8,L"EngineNetwork",1);
        FUN_1414dd3d2(param_1,&DAT_14c8733f4,param_2[3],local_1e8);
        FUN_1446f470e(&local_1f0,L"GameNetwork",1);
        FUN_1414dd3d2(param_1,&DAT_14c8733e4,param_2[4],local_1f0);
        piVar2 = param_2 + 6;
        FUN_1446f470e(&local_1f8,L"Replay",1);
        FUN_1459476e6(piVar2,&DAT_14aa6b530,param_2[1],local_1f8);
        FUN_1446f470e(&local_200,L"EngineNetwork",1);
        local_218 = DAT_14c8733f4;
        uStack_214 = DAT_14c8733f8;
        uStack_210 = DAT_14c8733fc;
        uStack_20c = DAT_14c873400;
        FUN_1459476e6(piVar2,&local_218,param_2[3],local_200);
        FUN_1446f470e(&local_220,L"GameNetwork",1);
        local_238 = DAT_14c8733e4;
        uStack_234 = DAT_14c8733e8;
        uStack_230 = DAT_14c8733ec;
        uStack_22c = DAT_14c8733f0;
        FUN_1459476e6(piVar2,&local_238,param_2[4],local_220);
        bVar6 = *(byte *)(param_1 + 5) & 1;
      }
      if (bVar6 != 0) {
        FUN_1468254f0(&local_248,param_2 + 6,L"Replay");
        bVar5 = true;
        if ((longlong)local_240 != 0) {
          lVar9 = 0;
          do {
            iVar7 = *(int *)(local_248 + lVar9);
            if ((iVar7 == 0) || (iVar7 == 3)) {
LAB_143685f98:
              FUN_14572541c(param_1);
              bVar5 = false;
              break;
            }
            if (iVar7 == 1) {
              FUN_140191ac2(&local_1d8,*(undefined8 *)(local_248 + 8 + lVar9));
              goto LAB_143685f98;
            }
            lVar9 = lVar9 + 0x10;
          } while ((longlong)local_240 * 0x10 != lVar9);
        }
        if (local_248 != 0) {
          FUN_1400020a8();
        }
        if (!bVar5) goto LAB_14368595b;
      }
      FUN_1402ac1b3(param_1,param_2 + 10);
      FUN_146810015(param_1,param_2 + 0x18);
      iVar7 = FUN_1448332aa(param_1,&DAT_14aa6b530);
      if (iVar7 < 0x11) {
        if (((*(byte *)(param_1 + 5) & 1) != 0) &&
           (uVar8 = (**(code **)(*param_1 + 0x48))(param_1), uVar8 < 0x16)) {
          param_2[0x2a] = 0x20a;
          param_2[0x2b] = 0x3eb;
        }
      }
      else {
        FUN_142791dd5(param_1,param_2 + 0x2a);
        piVar2 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x2c,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          param_2[0x2c] = *piVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
      }
      FUN_147cec078(param_1,param_2 + 0x22);
      piVar2 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x20,4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        param_2[0x20] = *piVar2;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      FUN_1405d0c38(param_1,param_2 + 0x26);
      iVar7 = FUN_1448332aa(param_1,&DAT_14aa6b530);
      if (0x11 < iVar7) {
        piVar2 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xe,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          param_2[0xe] = *piVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        piVar2 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xf,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          param_2[0xf] = *piVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        piVar2 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x10,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          param_2[0x10] = *piVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        piVar2 = *(int **)param_1[1];
        if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x11,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          param_2[0x11] = *piVar2;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_14021219d(param_1,param_2 + 0x12);
        puVar4 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0x16,1);
        }
        else {
          *(undefined1 *)(param_2 + 0x16) = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        puVar4 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 0x59),1);
        }
        else {
          *(undefined1 *)((longlong)param_2 + 0x59) = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
      }
      goto LAB_14368595b;
    }
  }
  FUN_14572541c(param_1);
LAB_14368595b:
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143685fee FUN_143685fee body=2201 status=ok
// SIG undefined FUN_143685fee(void)

longlong * FUN_143685fee(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  double dVar14;
  longlong lVar15;
  double *pdVar16;
  uint uVar17;
  longlong *plVar18;
  undefined *puVar19;
  uint *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined2 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  code **local_190;
  undefined1 *local_188;
  code *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  code *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined2 local_108;
  byte local_106;
  undefined1 local_105;
  undefined4 local_104;
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar18 = (longlong *)0x0;
  lVar11 = FUN_14045d4ce(param_1 + 0xc0,L"SkipSpawnSpectatorController",0);
  if (lVar11 != 0) goto LAB_1436861d5;
  puVar1 = (uint *)(param_1 + 0x148);
  plVar18 = (longlong *)0x0;
  cVar9 = FUN_140317ca6(puVar1,0);
  if (cVar9 == '\0') {
    if (*(int *)(param_1 + 0x14c) == 0) {
LAB_14368655c:
      lVar11 = 0;
    }
    else {
      uVar17 = *puVar1;
      lVar11 = 0;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
        plVar18 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((plVar18 == (longlong *)0x0) ||
           (((int)plVar18[2] != *(int *)(param_1 + 0x14c) ||
            ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) goto LAB_14368655c;
        lVar11 = *plVar18;
      }
    }
    if (*(longlong *)(lVar11 + 0x178) == 0) {
LAB_14368610b:
      plVar18 = (longlong *)0x0;
      goto LAB_14368610e;
    }
    plVar18 = *(longlong **)(*(longlong *)(lVar11 + 0x178) + 0x390);
    if ((DAT_14c950c29 == '\x01') && (plVar18 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar18);
    }
    else if (plVar18 == (longlong *)0x0) goto LAB_14368610b;
    lVar11 = FUN_14117928e();
    if (((lVar11 == 0) || ((int)plVar18[7] < *(int *)(lVar11 + 0x38))) ||
       (*(longlong *)(plVar18[6] + (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30))
    goto LAB_14368610e;
LAB_143686168:
    lVar11 = plVar18[0x22];
    if (lVar11 == 0) {
      (**(code **)(*plVar18 + 1000))(plVar18);
      lVar11 = plVar18[0x22];
      if (lVar11 == 0) goto LAB_1436861d2;
    }
    lVar11 = *(longlong *)(lVar11 + 0x3d8);
    if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) {
      FUN_1456cec3c(lVar11);
    }
    else if (lVar11 == 0) goto LAB_1436861d2;
    if (DAT_14caf9cd0 == 0) {
      local_190 = &local_138;
      local_138 = FUN_141030f22;
      local_180 = FUN_14081d0ea;
      local_188 = &LAB_1463c0cc2;
      local_198 = &LAB_147c9db5b;
      local_1a0 = &LAB_1463f9c44;
      local_1a8 = &DAT_149e063b2;
      local_1b0 = 0x2000000000;
      local_1b8 = 0x10000004;
      local_1c0 = CONCAT44(local_1c0._4_4_,8);
      local_1c8 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      if (DAT_14caf9cd0 == 0) goto LAB_1436861d2;
    }
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
        == DAT_14caf9cd0 + 0x30)) {
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = (code *)0x0;
      uStack_130 = 0;
      local_108 = 0x100;
      local_106 = local_106 & 0xe0;
      local_105 = 0;
      local_f8 = 0;
      local_e8 = (longlong *)0x0;
      local_104 = 0x48;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_9c = 0x3ff00000;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_74 = 0x3ff00000;
      uStack_70 = 0;
      uStack_6c = 0x3ff00000;
      local_68 = 0x3ff0000000000000;
      uStack_60 = 0;
      plVar18 = (longlong *)FUN_141037e38(0,lVar11,&local_b8,&local_138);
      if (plVar18 != (longlong *)0x0) {
        *(byte *)(plVar18 + 0xb4) = *(byte *)(plVar18 + 0xb4) & 0xf7;
        *(byte *)((longlong)plVar18 + 0x634) = *(byte *)((longlong)plVar18 + 0x634) & 0x7f;
        if (*(longlong *)(param_2 + 0x58) != 0) {
          FUN_1478c1472(plVar18,*(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x200));
        }
        lVar11 = plVar18[0x73];
        if (lVar11 == 0) {
          cVar9 = FUN_140317ca6(puVar1,0);
          if (cVar9 == '\0') {
            if (*(int *)(param_1 + 0x14c) == 0) {
LAB_14368671c:
              lVar11 = 0;
            }
            else {
              uVar17 = *puVar1;
              lVar11 = 0;
              if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
                plVar21 = (longlong *)
                          ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
                if ((plVar21 == (longlong *)0x0) ||
                   (((int)plVar21[2] != *(int *)(param_1 + 0x14c) ||
                    ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)))) goto LAB_14368671c;
                lVar11 = *plVar21;
              }
            }
            plVar21 = *(longlong **)(lVar11 + 0x38);
            if (plVar21 != (longlong *)0x0) {
              if (*(code **)(*plVar21 + 0x3c0) == (code *)&LAB_1448ff5f6) {
                if (plVar21[0x1e] != 0) {
LAB_143686856:
                  if ((*(longlong **)(lVar11 + 0x108) != (longlong *)0x0) &&
                     (cVar9 = (**(code **)(**(longlong **)(lVar11 + 0x108) + 0x3c0))(),
                     cVar9 != '\0')) {
                    (**(code **)(*plVar18 + 0x708))();
                  }
                }
              }
              else {
                cVar9 = (**(code **)(*plVar21 + 0x3c0))();
                if (cVar9 == '\0') goto LAB_143686856;
              }
            }
          }
          lVar11 = plVar18[0x73];
          if (lVar11 != 0) goto LAB_1436863e2;
        }
        else {
LAB_1436863e2:
          uVar2 = *(ulonglong *)(lVar11 + 0x28);
          if (uVar2 < 0xffffffff00000000) {
            plVar21 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              plVar21 = (longlong *)0x0;
            }
            (**(code **)(*plVar21 + 0x58))(plVar21,lVar11,uVar2,0xf);
          }
          else {
            uVar17 = (uint)uVar2;
            if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c998088)) {
              puVar19 = &DAT_14c998070;
              if (DAT_14c998080 != (undefined *)0x0) {
                puVar19 = DAT_14c998080;
              }
              if ((*(uint *)(puVar19 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar17 & 0x1f) & 1) !=
                  0) {
                lVar15 = DAT_14c998060 + (ulonglong)(uVar17 & 0x7fffffff) * 0x68;
                puVar20 = *(uint **)(lVar15 + 0x18);
                if (*(uint **)(lVar15 + 0x18) == (uint *)0x0) {
                  puVar20 = (uint *)(lVar15 + 8);
                }
                *puVar20 = *puVar20 | 0x8000;
                *(byte *)(lVar15 + 0x60) = *(byte *)(lVar15 + 0x60) | 1;
              }
            }
          }
          *(byte *)(lVar11 + 0x39a) = *(byte *)(lVar11 + 0x39a) | 4;
        }
        if (*(int *)(param_1 + 0x14c) == 0) {
LAB_143686577:
          uVar12 = 0;
        }
        else {
          uVar17 = *puVar1;
          uVar12 = 0;
          if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
            puVar22 = (undefined8 *)
                      ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
            if ((puVar22 == (undefined8 *)0x0) ||
               ((*(int *)(puVar22 + 2) != *(int *)(param_1 + 0x14c) ||
                ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)))) goto LAB_143686577;
            uVar12 = *puVar22;
          }
        }
        FUN_1405f0e9c(&local_b8,uVar12,5);
        if (local_98._4_1_ == '\0') {
          do {
            lVar11 = local_88;
            lVar13 = FUN_145983792();
            lVar15 = local_88;
            if (*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) {
              dVar14 = (double)(lVar13 + 0x30);
              lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30);
              if (*(double *)(lVar11 + (longlong)*(int *)(lVar13 + 0x38) * 8) == dVar14) {
                lVar13 = *(longlong *)(local_88 + 0x1c8);
                if (lVar13 == 0) {
                  local_148 = DAT_14c846508;
                  local_158 = DAT_14c8464f8;
                  dStack_150 = DAT_14c846500;
LAB_1436866e3:
                  local_168 = (double)DAT_14c8464f0;
                  local_178 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  uStack_170 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                }
                else {
                  dVar5 = *(double *)(lVar13 + 0x240);
                  dVar6 = *(double *)(lVar13 + 0x248);
                  dVar7 = *(double *)(lVar13 + 0x250);
                  dVar8 = *(double *)(lVar13 + 600);
                  pdVar16 = *(double **)(lVar13 + 0x228);
                  local_178 = dVar5;
                  uStack_170 = dVar6;
                  local_168 = dVar7;
                  uStack_160 = dVar8;
                  if (pdVar16 == (double *)0x0) {
                    lVar11 = 0x40;
                    pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
                    dVar14 = DAT_14c8463d8;
                    *pdVar16 = DAT_14c8463d0;
                    pdVar16[1] = dVar14;
                    dVar14 = DAT_14c8463e8;
                    pdVar16[2] = DAT_14c8463e0;
                    pdVar16[3] = dVar14;
                    dVar14 = DAT_14c846500;
                    pdVar16[4] = DAT_14c8464f8;
                    pdVar16[5] = dVar14;
                    dVar14 = DAT_14c846508;
                    pdVar16[6] = DAT_14c846508;
                    *(double **)(lVar13 + 0x228) = pdVar16;
                  }
                  auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar16[1]);
                  auVar3._0_8_ = -(ulonglong)(dVar5 != *pdVar16);
                  auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar16[1]) >> 0x20);
                  iVar10 = movmskpd(SUB84(dVar14,0),auVar3);
                  auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar16[3]);
                  auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar16[2]);
                  auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar16[3]) >> 0x20);
                  uVar17 = movmskpd((int)lVar11,auVar4);
                  if ((uVar17 & 0x3fffffff) != 0 || iVar10 != 0) {
                    *(undefined4 *)(pdVar16 + 2) = (undefined4)local_168;
                    *(undefined4 *)((longlong)pdVar16 + 0x14) = local_168._4_4_;
                    *(undefined4 *)(pdVar16 + 3) = (undefined4)uStack_160;
                    *(undefined4 *)((longlong)pdVar16 + 0x1c) = uStack_160._4_4_;
                    *(undefined4 *)pdVar16 = (undefined4)local_178;
                    *(undefined4 *)((longlong)pdVar16 + 4) = local_178._4_4_;
                    *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_170;
                    *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_170._4_4_;
                    FUN_1448052ee(&local_178,&local_158);
                    pdVar16[6] = local_148;
                    pdVar16[4] = local_158;
                    pdVar16[5] = dStack_150;
                    lVar15 = local_88;
                  }
                  local_148 = pdVar16[6];
                  local_158 = pdVar16[4];
                  dStack_150 = pdVar16[5];
                  lVar11 = *(longlong *)(lVar15 + 0x1c8);
                  if (lVar11 == 0) goto LAB_1436866e3;
                  local_178 = *(double *)(lVar11 + 0x260);
                  uStack_170 = *(double *)(lVar11 + 0x268);
                  local_168 = *(double *)(lVar11 + 0x270);
                }
                (**(code **)(*plVar18 + 0x690))(plVar18,&local_178,&local_158);
                break;
              }
            }
            FUN_14059e512(&local_b8);
          } while (local_98._4_1_ != '\x01');
        }
        if ((char)uStack_60 == '\x01') {
          FUN_14024445c(&uStack_b0);
        }
        FUN_140c7ce82(plVar18,1);
        FUN_14140e92e(plVar18,1,1);
        (**(code **)(*plVar18 + 0xd30))(plVar18,param_2);
      }
      if (local_f8 != 0) {
        plVar21 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar21 = local_d8;
        }
        (**(code **)(*plVar21 + 0x10))();
      }
      goto LAB_1436861d5;
    }
  }
  else {
LAB_14368610e:
    lVar11 = FUN_14045d4ce(param_1 + 0xc0,L"game=",0);
    if (lVar11 != 0) {
      uVar12 = FUN_14117928e();
      local_1c0 = 0;
      local_1c8 = 0;
      plVar18 = (longlong *)FUN_141433b6f(uVar12,0,lVar11,0);
      if ((plVar18 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar18);
        goto LAB_143686168;
      }
    }
    if (plVar18 != (longlong *)0x0) goto LAB_143686168;
  }
LAB_1436861d2:
  plVar18 = (longlong *)0x0;
LAB_1436861d5:
  if ((local_50 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar18;
}



// FUNCTION 143686888 FUN_143686888 body=1043 status=ok
// SIG undefined FUN_143686888(void)

undefined8 FUN_143686888(longlong param_1,longlong *param_2)

{
  void **ppvVar1;
  void *pvVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  void *local_d8;
  int local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_145c3c0a0(&local_e8);
  lVar11 = param_1 + 0x188;
  FUN_147cddab6(lVar11,&local_e8);
  FUN_145ad5df2(&local_e8);
  FUN_147cdd8d2(lVar11);
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
  if (lVar6 == 0) {
    if (*(int *)(param_1 + 0xf0) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = *(undefined2 **)(param_1 + 0xe8);
    }
    FUN_140002266(&local_e8,L"Couldn\'t open demo file %s for reading",puVar10);
    if (&local_e8 == param_2) {
      if (local_e8 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_e8;
      local_e8 = 0;
      *(undefined4 *)(param_2 + 1) = local_e0;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_dc;
    }
    uVar9 = 1;
  }
  else {
    *(byte *)(lVar6 + 0x2b) = *(byte *)(lVar6 + 0x2b) | 0x80;
    *(undefined8 *)(lVar6 + 0x38) = 0x1000000;
    FUN_143685887(lVar6,lVar11);
    if ((*(byte *)(lVar6 + 0x29) & 2) == 0) {
      bVar4 = (byte)*(uint *)(param_1 + 0x208);
      *(byte *)(param_1 + 0x17f) = bVar4 >> 1 & 1;
      uVar7 = *(uint *)(param_1 + 0x208) & 4;
      *(char *)(param_1 + 0x180) = (char)(uVar7 >> 2);
      if (uVar7 != 0) {
        cVar5 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x48))
                          (*(longlong **)(param_1 + 0x138),1);
        if (cVar5 == '\0') {
          uVar9 = 3;
          goto LAB_143686ad5;
        }
        bVar4 = *(byte *)(param_1 + 0x208);
      }
      *(byte *)(param_1 + 0x181) = bVar4 >> 3 & 1;
      FUN_147ce7b6e(param_1 + 0x220,param_2);
      if ((DAT_14cb0f228 != (longlong *)0x0 && DAT_14cb0f230 != 0) &&
         (cVar5 = (**(code **)(*DAT_14cb0f228 + 0x30))(), cVar5 != '\0')) {
        FUN_147cdd968(&local_e8,lVar11);
        plVar8 = DAT_14cb0f228;
        if (DAT_14cb0f230 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))(plVar8,&local_e8);
        iVar3 = local_d0;
        pvVar2 = local_d8;
        *(undefined4 *)(param_1 + 0x18c) = (undefined4)local_e8;
        *(undefined4 *)(param_1 + 0x194) = local_e8._4_4_;
        *(undefined4 *)(param_1 + 0x198) = local_e0;
        ppvVar1 = (void **)(param_1 + 0x1a0);
        if (ppvVar1 != &local_d8) {
          lVar11 = (longlong)local_d0;
          *(int *)(param_1 + 0x1a8) = local_d0;
          if (local_d0 == 0 && *(int *)(param_1 + 0x1ac) == 0) {
            *(undefined4 *)(param_1 + 0x1ac) = 0;
          }
          else {
            FUN_1401254a2(ppvVar1,local_d0);
            if (iVar3 != 0) {
              memcpy(*ppvVar1,pvVar2,lVar11 * 0x28);
            }
          }
        }
        pvVar2 = local_b8;
        *(undefined4 *)(param_1 + 0x1f0) = local_c0;
        *(undefined8 *)(param_1 + 0x1e8) = local_c8;
        ppvVar1 = (void **)(param_1 + 0x1f8);
        if (ppvVar1 != &local_b8) {
          *(int *)(param_1 + 0x200) = local_b0;
          if (local_b0 == 0 && *(int *)(param_1 + 0x204) == 0) {
            *(undefined4 *)(param_1 + 0x204) = 0;
          }
          else {
            FUN_1446dd670(ppvVar1,local_b0);
            if (local_b0 != 0) {
              memcpy(*ppvVar1,pvVar2,(longlong)local_b0 * 2);
            }
          }
        }
        *(undefined8 *)(param_1 + 0x230) = local_a8;
        *(undefined4 *)(param_1 + 0x238) = local_a0;
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_d8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar9 = 1;
      if ((int)param_2[1] < 2) goto LAB_143686b0d;
      uVar9 = 4;
    }
    else {
      FUN_140056680(&local_e8,L"Demo file is corrupt");
      if (&local_e8 == param_2) {
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_e8;
        local_e8 = 0;
        *(undefined4 *)(param_2 + 1) = local_e0;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_dc;
      }
      uVar9 = 2;
    }
  }
LAB_143686ad5:
  FUN_147a60036(&local_e8,uVar9);
  FUN_146efbfa6(param_1 + 0x8a0,&local_e8);
  lVar11 = CONCAT44(uStack_bc,local_c0);
  if (lVar11 != 0) {
    (**(code **)(lVar11 + -0x10))(lVar11 + -0x10);
  }
  if (CONCAT44(uStack_cc,local_d0) != 0) {
    FUN_1400020a8();
  }
  uVar9 = 0;
LAB_143686b0d:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143686c9c FUN_143686c9c body=1167 status=ok
// SIG undefined FUN_143686c9c(void)

void FUN_143686c9c(longlong param_1,float param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  uint local_a4;
  longlong local_a0;
  undefined8 local_98 [3];
  longlong local_80;
  longlong local_70;
  uint local_68;
  uint uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x17c) != '\x01') || (*(char *)(param_1 + 0x17d) != '\0'))
  goto LAB_143687117;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x170))
                    (*(longlong **)(param_1 + 0x138),param_1 + 0x8a0);
  if (cVar2 == '\x01') {
    uVar11 = 8;
  }
  else {
    if (*(char *)(param_1 + 0x182) != '\0') goto LAB_143687117;
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
    if (lVar7 != 0) {
      if (*(int *)(param_1 + 0x14c) == 0) {
LAB_14368714a:
        lVar7 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x148);
        lVar7 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             (((int)plVar9[2] != *(int *)(param_1 + 0x14c) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_14368714a;
          lVar7 = *plVar9;
        }
      }
      if (*(longlong *)(lVar7 + 0x30) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)(*(longlong *)(lVar7 + 0x30) + 0x2b0);
      }
      fVar15 = (float)(**(code **)(*plVar9 + 0x668))(plVar9);
      fVar15 = (float)(**(code **)(*plVar9 + 0x670))(plVar9,fVar15 * param_2,param_2);
      fVar15 = fVar15 + *(float *)(param_1 + 0x168);
      *(float *)(param_1 + 0x168) = fVar15;
      (**(code **)(**(longlong **)(param_1 + 0x138) + 0x50))
                (*(longlong **)(param_1 + 0x138),(longlong)(fVar15 * 1000.0));
      if (*(int *)(param_1 + 0x240) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
      }
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
      if (lVar7 != 0) {
        if (*(char *)(param_1 + 0x17f) == '\0') {
          if (*(int *)(param_1 + 0x14c) == 0) {
LAB_143687151:
            lVar8 = 0;
          }
          else {
            uVar3 = *(uint *)(param_1 + 0x148);
            lVar8 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              plVar9 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((plVar9 == (longlong *)0x0) ||
                 (((int)plVar9[2] != *(int *)(param_1 + 0x14c) ||
                  ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_143687151;
              lVar8 = *plVar9;
            }
          }
          iVar1 = *(int *)(lVar8 + 0x90);
          if ((longlong)iVar1 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x88);
            local_a0 = param_1 + 0x6b8;
            lVar13 = 0;
            do {
              plVar9 = *(longlong **)(lVar8 + lVar13);
              if (((plVar9 != (longlong *)0x0) &&
                  (cVar2 = (**(code **)(*plVar9 + 0x2d8))(plVar9), cVar2 != '\0')) &&
                 (cVar2 = (**(code **)(*plVar9 + 0x2f0))(plVar9), cVar2 == '\0')) {
                uStack_64 = 0;
                local_68 = *(uint *)((longlong)plVar9 + 0xc);
                if ((int)local_68 < DAT_14c9647dc) {
                  lVar12 = (ulonglong)((local_68 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8);
                }
                else {
                  lVar12 = 0;
                }
                uVar3 = *(uint *)(lVar12 + 0x10);
                if (*(uint *)(lVar12 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  local_a4 = DAT_14c964868 + 1;
                  bVar14 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar14) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,local_a4);
                  }
                  LOCK();
                  uVar3 = *(uint *)(lVar12 + 0x10);
                  bVar14 = uVar3 == 0;
                  if (bVar14) {
                    *(uint *)(lVar12 + 0x10) = local_a4;
                    uVar3 = 0;
                  }
                  UNLOCK();
                  if (bVar14) {
                    uVar3 = local_a4;
                  }
                }
                local_98[0] = CONCAT44(uVar3,local_68);
                uStack_64 = uVar3;
                iVar4 = FUN_147a70c0a(param_1 + 0x668,uVar3 ^ local_68,local_98);
                if (iVar4 == -1) {
                  FUN_147a70cc4(param_1 + 0x668,local_98,&local_68,0);
                  FUN_147a70cc4(local_a0,local_98,&local_68);
                }
              }
              lVar13 = lVar13 + 8;
            } while ((longlong)iVar1 * 8 != lVar13);
          }
        }
        (**(code **)(*param_3 + 0x2f8))(param_3,0);
        local_b8 = *(undefined4 *)(param_1 + 0x168);
        local_b0 = 0;
        FUN_14368964c(param_1,param_3,lVar7,param_1 + 0x708);
      }
      lVar7 = DAT_14cad6ec8;
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar10 = 0;
      }
      else if (iVar1 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar5 != DVar6);
      }
      else {
        uVar10 = 1;
      }
      if ((*(int *)(lVar7 + uVar10 * 4) == 1) && (cVar2 = FUN_147cddbfa(param_1), cVar2 != '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
      }
      goto LAB_143687117;
    }
    uVar11 = 10;
  }
  FUN_147a60036(local_98,uVar11);
  FUN_146efbfa6(param_1 + 0x8a0,local_98);
  if (local_70 != 0) {
    (**(code **)(local_70 + -0x10))(local_70 + -0x10);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_143687117:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143687178 FUN_143687178 body=3060 status=ok
// SIG undefined FUN_143687178(void)

void FUN_143687178(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  DWORD *pDVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  double dVar11;
  char cVar12;
  char cVar13;
  undefined4 uVar14;
  DWORD DVar15;
  DWORD DVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  uint *puVar26;
  longlong *plVar27;
  longlong *plVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  undefined8 unaff_R13;
  ulonglong *puVar32;
  code *pcVar33;
  float fVar34;
  undefined4 uVar35;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  undefined4 local_1b0;
  char local_19f;
  char local_19e;
  undefined1 local_19d;
  uint local_19c;
  undefined4 *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  double local_108;
  double local_100;
  LARGE_INTEGER local_f8;
  DWORD DStack_f0;
  DWORD DStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((*(int *)(param_1 + 0x240) == 0) ||
     (plVar17 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))(),
     plVar17 == (longlong *)0x0)) goto LAB_143687ce1;
  QueryPerformanceCounter(&local_f8);
  lVar20 = DAT_14cad6ef8;
  dVar9 = (double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_108 = dVar9;
  if ((iVar5 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar5 == 2)))) {
    uVar25 = 0;
  }
  else if (iVar5 == 1) {
    DVar15 = FUN_140ad26c0();
    DVar16 = GetCurrentThreadId();
    uVar25 = (ulonglong)(DVar15 != DVar16);
  }
  else {
    uVar25 = 1;
  }
  fVar34 = *(float *)(lVar20 + uVar25 * 4);
  if (fVar34 < 0.0) {
    fVar34 = *(float *)(param_1 + 0x184);
  }
  local_100 = (double)fVar34 / 1000.0;
  uVar25 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),(char)plVar17[5]);
  (**(code **)(*plVar17 + 0xe8))(plVar17,1);
  *(int *)(param_1 + 0x3ac) = *(int *)(param_1 + 0x3ac) + 1;
  (**(code **)(*param_2 + 0x2f8))(param_2,0);
  lVar20 = 0;
  if (param_2[0xd] != 0) {
    lVar18 = FUN_1413dbcfa();
    lVar19 = param_2[0xd];
    if (lVar19 == 0) {
LAB_143687d4c:
      lVar20 = 0;
    }
    else {
      lVar20 = 0;
      if ((lVar18 != 0) && (lVar6 = *(longlong *)(lVar19 + 0x10), lVar6 != 0)) {
        if (*(int *)(lVar6 + 0x38) < *(int *)(lVar18 + 0x38)) goto LAB_143687d4c;
        lVar20 = 0;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8) ==
            lVar18 + 0x30) {
          lVar20 = lVar19;
        }
      }
    }
  }
  local_19e = *(char *)(param_1 + 0x180);
  local_170 = (longlong *)(param_1 + 0x3b8);
  local_128 = param_1 + 0x718;
  local_160 = param_1 + 0x3c8;
  local_158 = param_1 + 0x428;
  local_178 = param_1 + 0x478;
  local_180 = param_1 + 0x4c8;
  local_120 = param_1 + 0x4e8;
  local_150 = param_1 + 0x338;
  local_140 = param_1 + 0x348;
  local_198 = (undefined4 *)(param_1 + 0x160);
  local_190 = (longlong *)(param_1 + 0x4d8);
  local_148 = param_2 + 0x335;
  pcVar33 = QueryPerformanceCounter_exref;
  do {
    dVar11 = local_108;
    uVar14 = SUB84(local_108,0);
    uVar35 = (undefined4)((ulonglong)local_108 >> 0x20);
    if ((*(int *)(param_1 + 0x240) == 9) ||
       ((dVar8 = dVar9 - local_108, 0.0 < local_100 && (local_100 < dVar8)))) goto LAB_143687c6b;
    bVar10 = true;
    switch(*(int *)(param_1 + 0x240)) {
    case 1:
      (*pcVar33)(&local_f8);
      local_118 = *(longlong *)(param_1 + 0x338);
      local_110 = *(undefined4 *)(param_1 + 0x340);
      local_1b8 = &local_108;
      FUN_143689c32(param_1,param_2,&local_118,local_120);
      (*pcVar33)(&local_f8);
      (*pcVar33)(&local_f8);
      *(double *)(param_1 + 0x3a0) =
           (((double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0) - dVar11) +
           *(double *)(param_1 + 0x3a0);
      if (*(int *)(param_1 + 0x4e8) == *(int *)(param_1 + 0x340)) {
        *(undefined4 *)(param_1 + 0x340) = 0;
        if (*(int *)(param_1 + 0x344) != 0) {
          FUN_147ce7c34(local_150,0);
        }
        FUN_147ce8240(local_140);
        *(undefined2 *)(param_2 + 0x33f) = 0;
        FUN_14068ded2(local_148,0);
        *(undefined4 *)(param_1 + 0x240) = 2;
        *(char *)(param_1 + 0x3a8) = *(char *)(param_1 + 0x17f);
        if (*(char *)(param_1 + 0x17f) == '\x01') {
          lVar19 = (**(code **)(*plVar17 + 0x28))(plVar17);
          *local_170 = lVar19;
          FUN_1408383eb(plVar17);
        }
        puVar7 = *(undefined4 **)plVar17[1];
        if ((undefined4 *)((undefined8 *)plVar17[1])[1] < puVar7 + 1) {
          if ((*(byte *)((longlong)plVar17 + 0x2a) & 2) == 0) {
            (**(code **)(*plVar17 + 0x170))(plVar17,local_198,4);
          }
          else {
            FUN_14572512c(plVar17,local_198);
          }
        }
        else {
          *local_198 = *puVar7;
          *(longlong *)plVar17[1] = *(longlong *)plVar17[1] + 4;
        }
        *(undefined4 *)(param_1 + 0x4e8) = 0;
        *(undefined4 *)(param_1 + 0x240) = 2;
      }
      break;
    case 2:
      cVar13 = FUN_147cdde4c(param_1,param_2,&local_108,plVar17);
      if (cVar13 == '\0') goto LAB_1436876ef;
      if (local_19e == '\0') goto LAB_143687c00;
      *(undefined4 *)(param_1 + 0x4e8) = 0;
      *(undefined4 *)(param_1 + 0x240) = 3;
      break;
    case 3:
      cVar13 = FUN_147cde064(param_1,&local_108,plVar17);
      if (cVar13 == '\0') goto LAB_1436876ef;
      *(undefined4 *)(param_1 + 0x4e8) = 0;
      FUN_147cde21a(local_178,local_180);
      *(undefined4 *)(param_1 + 0x240) = 4;
      break;
    case 4:
      cVar13 = FUN_147cde356(param_1,&local_108,plVar17);
      if (cVar13 == '\0') goto LAB_1436876ef;
      FUN_1447a1747(*(undefined8 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3d0));
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      if (*(int *)(param_1 + 0x3d4) != 0) {
        FUN_1408be2c4(local_160,0);
      }
      FUN_144958770(local_158,0);
      FUN_147ce83c8(local_178);
      *(undefined4 *)(param_1 + 0x4d0) = 0;
      if (*(int *)(param_1 + 0x4d4) != 0) {
        FUN_1417c3e4a(local_180,0);
      }
LAB_143687c00:
      *(undefined4 *)(param_1 + 0x240) = 5;
      break;
    case 5:
      if ((0.0 < local_100) && (1.0 - dVar8 / local_100 <= 0.6)) goto LAB_1436876ef;
      local_19d = (undefined1)uVar25;
      local_188 = param_2;
      local_138 = lVar20;
      local_130 = plVar17;
      if ((param_2 != (longlong *)0x0) && (param_2[0xb] != 0)) {
        local_19f = *(char *)(param_1 + 0x180);
        (*pcVar33)();
        *(undefined4 *)(param_1 + 0x4e0) = 0;
        if (*(int *)(param_1 + 0x4e4) < 0) {
          FUN_147ce9400();
        }
        *(undefined8 *)(param_1 + 0x4e8) = 0;
        plVar17 = *(longlong **)(local_188[0xb] + 0x1b8);
        puVar1 = (uint *)(plVar17 + 2);
        iVar5 = (int)plVar17[5];
        if (iVar5 == 0) {
          uVar30 = 1;
          uVar29 = 0;
          uVar25 = 0;
          iVar21 = 0;
        }
        else {
          puVar26 = (uint *)plVar17[4];
          if ((uint *)plVar17[4] == (uint *)0x0) {
            puVar26 = puVar1;
          }
          uVar31 = *puVar26;
          if (uVar31 == 0) {
            iVar21 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar21 = iVar5 + -1;
            }
            uVar29 = 0;
            uVar30 = (ulonglong)(uint)(iVar21 >> 5);
            if (iVar21 >> 5 < 1) {
              uVar30 = uVar29;
            }
            uVar25 = 0;
            do {
              if (uVar30 == uVar29) goto LAB_143687a71;
              uVar25 = (ulonglong)((int)uVar25 + 0x20);
              uVar31 = puVar26[uVar29 + 1];
              uVar29 = uVar29 + 1;
            } while (uVar31 == 0);
          }
          else {
            uVar29 = 0;
            uVar25 = 0;
          }
          uVar30 = (ulonglong)(-uVar31 & uVar31);
          uVar2 = uVar30 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar21 = ((int)uVar25 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar21) {
            iVar21 = iVar5;
          }
        }
        if (iVar21 < iVar5) {
          uVar31 = 0xffffffff;
          cVar13 = local_19f;
          do {
            local_19c = (uint)uVar25;
            lVar20 = *plVar17 + (longlong)iVar21 * 0x40;
            if ((cVar13 == '\0') || ((*(byte *)(lVar20 + 0x30) & 0x10) != 0)) {
              puVar32 = (ulonglong *)(*plVar17 + (longlong)iVar21 * 0x40);
              uVar25 = *puVar32;
              if ((((uVar25 != 0) &&
                   (((*(int *)(lVar20 + 0xc) != 0 &&
                     (uVar22 = ((_struct_19 *)(lVar20 + 8))->LowPart, -1 < (int)uVar22)) &&
                    ((int)uVar22 < DAT_14c9647dc)))) &&
                  (((plVar28 = (longlong *)
                               ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
                    plVar28 != (longlong *)0x0 && ((int)plVar28[2] == *(int *)(lVar20 + 0xc))) &&
                   ((*(uint *)(plVar28 + 1) & 0x10200000) == 0)))) &&
                 (plVar27 = (longlong *)*plVar28, plVar27 != (longlong *)0x0)) {
                if ((uVar25 & 1) == 0) {
                  if ((*(uint *)(plVar28 + 1) & 0x10200000) != 0) {
                    plVar27 = (longlong *)0x0;
                  }
                  cVar12 = (**(code **)(*plVar27 + 0x1f8))();
                  cVar13 = local_19f;
                  if (cVar12 == '\0') goto LAB_143687989;
                  uVar25 = *puVar32;
                }
                local_f8.s = *(_struct_19 *)(lVar20 + 8);
                DStack_f0 = *(DWORD *)(lVar20 + 0x10);
                DStack_ec = *(DWORD *)(lVar20 + 0x14);
                local_e8 = *(undefined4 *)(lVar20 + 0x18);
                uStack_e4 = *(undefined4 *)(lVar20 + 0x1c);
                uStack_e0 = *(undefined4 *)(lVar20 + 0x20);
                uStack_dc = *(undefined4 *)(lVar20 + 0x24);
                local_d8 = *(undefined4 *)(lVar20 + 0x28);
                uStack_d4 = *(undefined4 *)(lVar20 + 0x2c);
                uStack_d0 = *(undefined4 *)(lVar20 + 0x30);
                uStack_cc = *(undefined4 *)(lVar20 + 0x34);
                iVar5 = *(int *)(param_1 + 0x4e0);
                *(uint *)(param_1 + 0x4e0) = iVar5 + 1U;
                if (*(uint *)(param_1 + 0x4e4) < iVar5 + 1U) {
                  local_168 = plVar17;
                  FUN_147ce9430(local_190,iVar5);
                  cVar13 = local_19f;
                  plVar17 = local_168;
                }
                lVar19 = *local_190;
                lVar18 = (longlong)iVar5 * 0x38;
                *(ulonglong *)(lVar19 + lVar18) = uVar25;
                pDVar3 = (DWORD *)(lVar19 + 8 + lVar18);
                *pDVar3 = local_f8.s.LowPart;
                pDVar3[1] = local_f8.s.HighPart;
                pDVar3[2] = DStack_f0;
                pDVar3[3] = DStack_ec;
                puVar4 = (undefined8 *)(lVar19 + 0x18 + lVar18);
                *puVar4 = CONCAT44(uStack_e4,local_e8);
                puVar4[1] = CONCAT44(uStack_dc,uStack_e0);
                puVar4 = (undefined8 *)(lVar19 + 0x28 + lVar18);
                *puVar4 = CONCAT44(uStack_d4,local_d8);
                puVar4[1] = CONCAT44(uStack_cc,uStack_d0);
                *(byte *)(lVar20 + 0x30) = *(byte *)(lVar20 + 0x30) & 0xef;
              }
            }
LAB_143687989:
            uVar31 = uVar31 & ~(uint)uVar30;
            puVar26 = (uint *)plVar17[4];
            if ((uint *)plVar17[4] == (uint *)0x0) {
              puVar26 = puVar1;
            }
            iVar5 = (int)plVar17[5];
            iVar21 = (int)uVar29;
            lVar20 = (longlong)iVar21;
            uVar22 = puVar26[lVar20] & uVar31;
            pcVar33 = QueryPerformanceCounter_exref;
            if (uVar22 == 0) {
              iVar23 = iVar5 + 0x1e;
              if (-1 < iVar5 + -1) {
                iVar23 = iVar5 + -1;
              }
              iVar23 = iVar23 >> 5;
              iVar24 = iVar23;
              if (iVar23 < iVar21) {
                iVar24 = iVar21;
              }
              uVar25 = (ulonglong)local_19c;
              if (iVar23 <= iVar21) break;
              uVar25 = (ulonglong)(local_19c + 0x20);
              lVar19 = 0;
              while (uVar22 = puVar26[lVar19 + lVar20 + 1], uVar22 == 0) {
                uVar25 = (ulonglong)((int)uVar25 + 0x20);
                lVar19 = lVar19 + 1;
                if (iVar24 - lVar20 == lVar19) goto LAB_143687a71;
              }
              uVar29 = (ulonglong)(iVar21 + (int)lVar19 + 1);
              uVar31 = 0xffffffff;
            }
            else {
              uVar25 = (ulonglong)local_19c;
            }
            uVar30 = (ulonglong)(-uVar22 & uVar22);
            uVar2 = uVar30 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar21 = ((int)uVar25 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          } while (iVar21 < iVar5);
        }
      }
LAB_143687a71:
      *(undefined4 *)(param_1 + 0x240) = 6;
      uVar25 = CONCAT71((int7)(uVar25 >> 8),local_19d);
      plVar17 = local_130;
      param_2 = local_188;
      lVar20 = local_138;
LAB_143687a95:
      bVar10 = true;
      break;
    case 6:
      cVar13 = FUN_147cde5c2(param_1,param_2,&local_108,plVar17);
      if (cVar13 == '\0') goto LAB_1436876ef;
      *(undefined4 *)(param_1 + 0x240) = 7;
      break;
    case 7:
      if ((0.0 < local_100) && (1.0 - dVar8 / local_100 <= 0.6)) goto LAB_1436876ef;
      if (local_19e == '\0') {
        FUN_1435afe66(lVar20,plVar17,1);
      }
      else {
        FUN_147be7e64(lVar20,plVar17);
      }
      *(undefined4 *)(param_1 + 0x240) = 8;
      break;
    case 8:
      if ((local_100 <= 0.0) || (0.8 < 1.0 - dVar8 / local_100)) {
        if (*(char *)(param_1 + 0x3a8) == '\x01') {
          lVar19 = (**(code **)(*plVar17 + 0x28))(plVar17);
          local_f8.QuadPart = (lVar19 - *local_170) + -8;
          (**(code **)(*plVar17 + 0x1a0))(plVar17);
          FUN_1408383eb(plVar17,&local_f8);
          uVar25 = uVar25 & 0xffffffff;
          (**(code **)(*plVar17 + 0x1a0))(plVar17,lVar19);
        }
        uVar14 = (**(code **)(*plVar17 + 0x30))(plVar17);
        *(undefined4 *)(param_1 + 0x3c0) = uVar14;
        uVar14 = *(undefined4 *)(param_1 + 0x838);
        *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0x730);
        local_1b8 = (double *)CONCAT44(local_1b8._4_4_,(float)*(double *)(param_1 + 0x170));
        local_1b0 = 1;
        FUN_14368964c(param_1,param_2,plVar17,local_128);
        *(undefined4 *)(param_1 + 0x240) = 9;
        *(undefined4 *)(param_1 + 0x838) = uVar14;
        goto LAB_143687a95;
      }
LAB_1436876ef:
      bVar10 = false;
    }
    (*pcVar33)(&local_f8);
    dVar9 = (double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0;
  } while (bVar10);
  uVar14 = SUB84(local_108,0);
  uVar35 = (undefined4)((ulonglong)local_108 >> 0x20);
LAB_143687c6b:
  (**(code **)(*plVar17 + 0xe8))
            (plVar17,CONCAT71((int7)(uVar25 >> 8),(byte)uVar25 >> 7) & 0xffffffff);
  *(double *)(param_1 + 0x398) =
       (dVar9 - (double)CONCAT44(uVar35,uVar14)) + *(double *)(param_1 + 0x398);
  if (*(int *)(param_1 + 0x240) == 9) {
    (**(code **)(*plVar17 + 0x30))(plVar17);
    lVar20 = (**(code **)(*plVar17 + 0x30))(plVar17);
    if (0 < lVar20) {
      (**(code **)(**(longlong **)(param_1 + 0x138) + 0x30))
                (*(longlong **)(param_1 + 0x138),(longlong)(*(double *)(param_1 + 0x170) * 1000.0));
    }
    *(undefined4 *)(param_1 + 0x240) = 0;
  }
LAB_143687ce1:
  if ((local_c0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143687d6e FUN_143687d6e body=6365 status=ok
// SIG undefined FUN_143687d6e(void)

void FUN_143687d6e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  code **ppcVar18;
  longlong *plVar19;
  code *pcVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  code *pcVar24;
  int iVar25;
  uint uVar26;
  code *pcVar27;
  ulonglong uVar28;
  code *pcVar29;
  longlong lVar30;
  uint uVar31;
  code *pcVar32;
  code *pcVar33;
  int iVar34;
  code *pcVar35;
  code *pcVar36;
  int iVar37;
  code *pcVar38;
  longlong lVar39;
  uint uVar40;
  ulonglong uVar41;
  bool bVar42;
  float fVar43;
  undefined1 auStack_438 [32];
  undefined4 local_418;
  undefined4 local_410;
  undefined4 local_408;
  undefined8 local_400;
  wchar_t *local_3f8;
  undefined1 *local_3f0;
  undefined1 *local_3e8;
  code **local_3e0;
  code *local_3d8;
  code *local_3d0;
  char local_3b9;
  longlong *local_3b8;
  uint local_3ac;
  longlong local_3a8;
  uint *local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong local_388;
  ulonglong local_380;
  longlong *local_378;
  int local_36c;
  code *local_368;
  undefined8 uStack_360;
  code *local_358;
  code *local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar11 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))();
  if (lVar11 == 0) goto LAB_143687e83;
  plVar15 = *(longlong **)(*(longlong *)(param_2 + 0x58) + 0x858);
  local_3b9 = *(char *)(param_1 + 0x180);
  local_3b8 = plVar15;
  local_388 = param_1;
  if (*(char *)(param_1 + 0x17f) == '\x01') {
    local_368 = (code *)0x0;
    uStack_360 = 0;
    iVar25 = *(int *)(param_2 + 0x1460);
    iVar37 = *(int *)(param_2 + 0x148c);
    local_3a8 = param_2;
    iVar16 = FUN_147bd6f5e(plVar15);
    iVar16 = iVar16 + (iVar25 - iVar37);
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar16);
    }
    if (iVar16 != 0) {
      FUN_143699ee8(&local_368);
    }
    puVar12 = (uint *)(local_3b8 + 2);
    uVar40 = *(uint *)(local_3b8 + 5);
    if (uVar40 == 0) {
      uVar28 = 1;
      iVar25 = 0;
      uVar41 = 0;
      uVar8 = 0;
    }
    else {
      puVar13 = (uint *)local_3b8[4];
      if ((uint *)local_3b8[4] == (uint *)0x0) {
        puVar13 = puVar12;
      }
      uVar8 = *puVar13;
      if (uVar8 == 0) {
        iVar25 = uVar40 + 0x1e;
        if (-1 < (int)(uVar40 - 1)) {
          iVar25 = uVar40 - 1;
        }
        uVar41 = 0;
        uVar28 = (ulonglong)(uint)(iVar25 >> 5);
        if (iVar25 >> 5 < 1) {
          uVar28 = uVar41;
        }
        iVar25 = 0;
        do {
          if (uVar28 == uVar41) goto LAB_14368878b;
          iVar25 = iVar25 + 0x20;
          uVar8 = puVar13[uVar41 + 1];
          uVar41 = uVar41 + 1;
        } while (uVar8 == 0);
      }
      else {
        iVar25 = 0;
        uVar41 = 0;
      }
      uVar28 = (ulonglong)(-uVar8 & uVar8);
      uVar23 = uVar28 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar8 = (iVar25 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar40 <= (int)uVar8) {
        uVar8 = uVar40;
      }
    }
    if (uVar8 != uVar40) {
      local_380 = local_3a8 + 0x1490;
      uVar26 = 0xffffffff;
      plVar15 = local_3b8;
      lVar11 = local_3a8;
      local_3a0 = puVar12;
      local_390 = (longlong *)(ulonglong)uVar40;
LAB_143688e73:
      plVar1 = *(longlong **)(*plVar15 + (longlong)(int)uVar8 * 0x18);
      if ((plVar1 != (longlong *)0x0) &&
         ((local_3b9 == '\0' || ((*(byte *)(plVar1 + 0x1a) & 2) != 0)))) {
        plVar19 = (longlong *)(*plVar15 + (longlong)(int)uVar8 * 0x18);
        lVar30 = *plVar1;
        if ((lVar30 != 0) &&
           (((*(uint *)(lVar30 + 8) >> 0x1e & 1) == 0 &&
            ((*(char *)(lVar30 + 0x68) != '\0' || ((*(byte *)(lVar30 + 0x61) & 1) != 0)))))) {
          if (*(longlong *)(lVar11 + 0x30) != lVar30) {
            if (DAT_14caf9cd0 == 0) {
              local_358 = FUN_141030f22;
              local_3d0 = FUN_14081d0ea;
              local_3d8 = (code *)&LAB_1463c0cc2;
              local_3e0 = &local_358;
              local_3e8 = &LAB_147c9db5b;
              local_3f0 = &LAB_1463f9c44;
              local_3f8 = L"Game";
              local_400 = 0x2000000000;
              local_408 = 0x10000004;
              local_410 = 8;
              local_418 = 0x958;
              FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
              plVar15 = local_3b8;
              lVar11 = local_3a8;
            }
            if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar30 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30))
            goto LAB_143688fb4;
          }
          if (*(longlong *)*plVar19 == 0) {
            uVar23 = 0;
            uVar40 = 0;
          }
          else {
            uVar40 = *(uint *)(*(longlong *)*plVar19 + 0xc);
            uVar23 = (ulonglong)uVar40;
            if ((int)uVar40 < DAT_14c9647dc) {
              lVar30 = (ulonglong)((uVar40 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar40 >> 0x10) * 8);
            }
            else {
              lVar30 = 0;
            }
            puVar12 = local_3a0;
            uVar40 = *(uint *)(lVar30 + 0x10);
            if (*(uint *)(lVar30 + 0x10) == 0) {
              LOCK();
              iVar37 = DAT_14c964868 + 1;
              UNLOCK();
              uVar8 = DAT_14c964868 + 1;
              bVar42 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar37;
              if (bVar42) {
                local_398 = plVar19;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar8);
                plVar19 = local_398;
                plVar15 = local_3b8;
                lVar11 = local_3a8;
              }
              LOCK();
              uVar40 = *(uint *)(lVar30 + 0x10);
              bVar42 = uVar40 == 0;
              if (bVar42) {
                *(uint *)(lVar30 + 0x10) = uVar8;
                uVar40 = 0;
              }
              UNLOCK();
              puVar12 = local_3a0;
              if (bVar42) {
                uVar40 = uVar8;
              }
            }
          }
          if (*(int *)(lVar11 + 0x1460) != *(int *)(lVar11 + 0x148c)) {
            uVar21 = *(ulonglong *)(lVar11 + 0x1498);
            if (*(ulonglong *)(lVar11 + 0x1498) == 0) {
              uVar21 = local_380;
            }
            iVar37 = *(int *)(uVar21 + (ulonglong)
                                       (*(int *)(lVar11 + 0x14a0) - 1U & (uVar40 ^ (uint)uVar23)) *
                                       4);
            if (iVar37 != -1) {
              do {
                if (*(ulonglong *)(*(longlong *)(lVar11 + 0x1458) + (longlong)iVar37 * 0x18) ==
                    (uVar23 | (ulonglong)uVar40 << 0x20)) goto LAB_143689118;
                iVar37 = *(int *)(*(longlong *)(lVar11 + 0x1458) + (longlong)iVar37 * 0x18 + 0x10);
              } while (iVar37 != -1);
            }
          }
        }
LAB_143688fb4:
        plVar1 = (longlong *)*plVar19;
        if (*(char *)(*plVar1 + 0x179) != '\x04') {
          if (lVar11 == 0) {
            uVar8 = 0;
            uVar40 = 0;
          }
          else {
            uVar8 = *(uint *)(lVar11 + 0xc);
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar30 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar30 = 0;
            }
            puVar12 = local_3a0;
            uVar40 = *(uint *)(lVar30 + 0x10);
            if (*(uint *)(lVar30 + 0x10) == 0) {
              LOCK();
              iVar37 = DAT_14c964868 + 1;
              UNLOCK();
              uVar31 = DAT_14c964868 + 1;
              bVar42 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar37;
              if (bVar42) {
                local_398 = plVar19;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar31);
                plVar19 = local_398;
                plVar15 = local_3b8;
                lVar11 = local_3a8;
              }
              LOCK();
              uVar40 = *(uint *)(lVar30 + 0x10);
              bVar42 = uVar40 == 0;
              if (bVar42) {
                *(uint *)(lVar30 + 0x10) = uVar31;
                uVar40 = 0;
              }
              UNLOCK();
              puVar12 = local_3a0;
              if (bVar42) {
                uVar40 = uVar31;
              }
            }
          }
          if ((int)plVar1[7] != *(int *)((longlong)plVar1 + 100)) {
            plVar22 = plVar1 + 0xd;
            if ((longlong *)plVar1[0xe] != (longlong *)0x0) {
              plVar22 = (longlong *)plVar1[0xe];
            }
            iVar37 = *(int *)((longlong)plVar22 +
                             (ulonglong)((int)plVar1[0xf] - 1U & (uVar40 ^ uVar8)) * 4);
            if (iVar37 != -1) {
              lVar30 = plVar1[6];
              do {
                lVar14 = (longlong)iVar37 * 0x10;
                if ((*(uint *)(lVar30 + lVar14) == uVar8) &&
                   (*(uint *)(lVar30 + 4 + lVar14) == uVar40)) goto LAB_143689118;
                iVar37 = *(int *)(lVar14 + lVar30 + 8);
              } while (iVar37 != -1);
            }
          }
          lVar30 = *plVar19;
          if (lVar11 == 0) {
            uVar8 = 0;
            uVar40 = 0;
          }
          else {
            uVar8 = *(uint *)(lVar11 + 0xc);
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            puVar12 = local_3a0;
            uVar40 = *(uint *)(lVar14 + 0x10);
            if (*(uint *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar37 = DAT_14c964868 + 1;
              UNLOCK();
              uVar31 = DAT_14c964868 + 1;
              bVar42 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar37;
              if (bVar42) {
                local_398 = plVar19;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar31);
                plVar19 = local_398;
                plVar15 = local_3b8;
                lVar11 = local_3a8;
              }
              LOCK();
              uVar40 = *(uint *)(lVar14 + 0x10);
              bVar42 = uVar40 == 0;
              if (bVar42) {
                *(uint *)(lVar14 + 0x10) = uVar31;
                uVar40 = 0;
              }
              UNLOCK();
              puVar12 = local_3a0;
              if (bVar42) {
                uVar40 = uVar31;
              }
            }
          }
          if (*(int *)(lVar30 + 0x88) != *(int *)(lVar30 + 0xb4)) {
            lVar14 = lVar30 + 0xb8;
            if (*(longlong *)(lVar30 + 0xc0) != 0) {
              lVar14 = *(longlong *)(lVar30 + 0xc0);
            }
            iVar37 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar30 + 200) - 1U & (uVar40 ^ uVar8)) *
                                       4);
            if (iVar37 != -1) {
              lVar30 = *(longlong *)(lVar30 + 0x80);
              do {
                lVar14 = (longlong)iVar37 * 0x10;
                if ((*(uint *)(lVar30 + lVar14) == uVar8) &&
                   (*(uint *)(lVar30 + 4 + lVar14) == uVar40)) goto LAB_143689118;
                iVar37 = *(int *)(lVar14 + lVar30 + 8);
              } while (iVar37 != -1);
            }
          }
        }
      }
      goto LAB_1436891dd;
    }
LAB_14368878b:
    pcVar32 = local_368;
    iVar25 = (uint)uStack_360;
    uVar28 = (ulonglong)(int)(uint)uStack_360;
    if (1 < (longlong)uVar28) {
      memset(local_348,0,0x2f0);
      local_358 = pcVar32;
      local_350 = pcVar32 + uVar28 * 0x10 + -0x10;
      fVar43 = logf((float)iVar25);
      local_348[0] = (int)(longlong)(fVar43 + fVar43);
      ppcVar18 = &local_358;
      do {
        pcVar20 = *ppcVar18;
        pcVar27 = ppcVar18[1];
        iVar25 = *(int *)(ppcVar18 + 2);
        iVar37 = (int)((ulonglong)((longlong)pcVar27 - (longlong)pcVar20) >> 4);
        uVar28 = (ulonglong)(iVar37 + 1);
        pcVar29 = pcVar20;
        pcVar24 = pcVar20;
        pcVar32 = pcVar27;
        if (iVar25 != 0) {
LAB_14368881f:
          if (8 < (int)(uint)uVar28) {
            uVar28 = (ulonglong)((uint)uVar28 >> 1);
            uVar3 = *(undefined8 *)(pcVar24 + uVar28 * 0x10);
            uVar5 = *(undefined8 *)(pcVar24 + uVar28 * 0x10 + 8);
            uVar6 = *(undefined8 *)(pcVar24 + 8);
            *(undefined8 *)(pcVar24 + uVar28 * 0x10) = *(undefined8 *)pcVar24;
            *(undefined8 *)(pcVar24 + uVar28 * 0x10 + 8) = uVar6;
            *(undefined8 *)pcVar24 = uVar3;
            *(undefined8 *)(pcVar24 + 8) = uVar5;
            pcVar35 = pcVar32 + 0x10;
            pcVar20 = pcVar24;
            do {
              pcVar7 = pcVar20 + 0x10;
              pcVar33 = pcVar20 + 0x10;
              do {
                pcVar20 = pcVar33;
                pcVar38 = pcVar7;
                if (pcVar32 < pcVar20) break;
                pcVar7 = pcVar38 + 0x10;
                pcVar33 = pcVar20 + 0x10;
              } while (*(ulonglong *)(pcVar24 + 8) <= *(ulonglong *)(pcVar20 + 8));
              pcVar7 = pcVar35 + -0x20;
              do {
                pcVar33 = pcVar35;
                pcVar36 = pcVar7;
                pcVar35 = pcVar33 + -0x10;
                if (pcVar35 <= pcVar24) break;
                pcVar7 = pcVar36 + -0x10;
              } while (*(ulonglong *)(pcVar33 + -8) <= *(ulonglong *)(pcVar24 + 8));
              if (pcVar35 < pcVar20) goto LAB_1436888cd;
              uVar3 = *(undefined8 *)pcVar20;
              uVar5 = *(undefined8 *)(pcVar20 + 8);
              uVar6 = *(undefined8 *)(pcVar33 + -8);
              *(undefined8 *)pcVar20 = *(undefined8 *)pcVar35;
              *(undefined8 *)(pcVar20 + 8) = uVar6;
              *(undefined8 *)pcVar35 = uVar3;
              *(undefined8 *)(pcVar33 + -8) = uVar5;
            } while( true );
          }
          for (; pcVar20 = pcVar24, pcVar27 = pcVar24, pcVar24 < pcVar32; pcVar32 = pcVar32 + -0x10)
          {
            while (pcVar29 = pcVar20, pcVar20 = pcVar27 + 0x10, pcVar20 <= pcVar32) {
              pcVar35 = pcVar27 + 0x18;
              pcVar27 = pcVar20;
              if (*(ulonglong *)(pcVar29 + 8) <= *(ulonglong *)pcVar35) {
                pcVar20 = pcVar29;
              }
            }
            local_58 = *(undefined8 *)pcVar29;
            uStack_50 = *(undefined8 *)(pcVar29 + 8);
            uVar5 = local_58;
            uVar6 = uStack_50;
            uVar3 = *(undefined8 *)(pcVar32 + 8);
            *(undefined8 *)pcVar29 = *(undefined8 *)pcVar32;
            *(undefined8 *)(pcVar29 + 8) = uVar3;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)pcVar32 = (undefined4)local_58;
            *(undefined4 *)(pcVar32 + 4) = local_58._4_4_;
            *(undefined4 *)(pcVar32 + 8) = (undefined4)uStack_50;
            *(undefined4 *)(pcVar32 + 0xc) = uStack_50._4_4_;
            local_58 = uVar5;
            uStack_50 = uVar6;
          }
          goto LAB_143688b97;
        }
LAB_143688977:
        iVar25 = (int)uVar28;
        if (iVar25 != 0) {
          iVar37 = (iVar37 - (iVar37 + -1 >> 0x1f)) + -1 >> 1;
          iVar16 = iVar37;
joined_r0x00014368899e:
          do {
            iVar17 = iVar37 * 2 + 1;
            if (iVar17 < iVar25) {
              iVar34 = iVar37 * 2 + 2;
              if ((iVar34 < iVar25) &&
                 (*(ulonglong *)(pcVar20 + ((longlong)iVar34 * 2 + 1) * 8) <=
                  *(ulonglong *)(pcVar20 + ((longlong)iVar17 * 2 + 1) * 8))) {
                iVar17 = iVar34;
              }
              if (*(ulonglong *)(pcVar20 + ((longlong)iVar17 * 2 + 1) * 8) <
                  *(ulonglong *)(pcVar20 + ((longlong)iVar37 * 2 + 1) * 8)) {
                pcVar32 = pcVar20 + (longlong)iVar37 * 0x10;
                pcVar27 = pcVar20 + (longlong)iVar17 * 0x10;
                local_58 = *(undefined8 *)pcVar32;
                uStack_50 = *(undefined8 *)(pcVar32 + 8);
                uVar5 = local_58;
                uVar6 = uStack_50;
                uVar3 = *(undefined8 *)(pcVar27 + 8);
                *(undefined8 *)pcVar32 = *(undefined8 *)pcVar27;
                *(undefined8 *)(pcVar32 + 8) = uVar3;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                *(undefined4 *)pcVar27 = (undefined4)local_58;
                *(undefined4 *)(pcVar27 + 4) = local_58._4_4_;
                *(undefined4 *)(pcVar27 + 8) = (undefined4)uStack_50;
                *(undefined4 *)(pcVar27 + 0xc) = uStack_50._4_4_;
                iVar37 = iVar17;
                local_58 = uVar5;
                uStack_50 = uVar6;
                goto joined_r0x00014368899e;
              }
            }
            bVar42 = iVar16 != 0;
            iVar37 = iVar16 + -1;
            iVar16 = iVar37;
          } while (bVar42);
          if (1 < iVar25) {
            uVar28 = uVar28 - 1;
            local_58 = *(undefined8 *)pcVar20;
            uStack_50 = *(undefined8 *)(pcVar20 + 8);
            uVar5 = local_58;
            uVar6 = uStack_50;
            uVar3 = *(undefined8 *)(pcVar20 + uVar28 * 0x10 + 8);
            *(undefined8 *)pcVar20 = *(undefined8 *)(pcVar20 + uVar28 * 0x10);
            *(undefined8 *)(pcVar20 + 8) = uVar3;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            pcVar32 = pcVar20 + uVar28 * 0x10;
            *(undefined4 *)pcVar32 = (undefined4)local_58;
            *(undefined4 *)(pcVar32 + 4) = local_58._4_4_;
            *(undefined4 *)(pcVar32 + 8) = (undefined4)uStack_50;
            *(undefined4 *)(pcVar32 + 0xc) = uStack_50._4_4_;
            local_58 = uVar5;
            uStack_50 = uVar6;
            if (iVar25 != 2) {
              do {
                iVar25 = 0;
                iVar16 = 1;
                iVar37 = 0;
                do {
                  iVar25 = iVar25 + 2;
                  iVar17 = iVar16;
                  if (((longlong)iVar25 < (longlong)uVar28) &&
                     (*(ulonglong *)(pcVar20 + ((longlong)iVar25 * 2 + 1) * 8) <=
                      *(ulonglong *)(pcVar20 + ((longlong)iVar16 * 2 + 1) * 8))) {
                    iVar17 = iVar25;
                  }
                  if (*(ulonglong *)(pcVar20 + ((longlong)iVar37 * 2 + 1) * 8) <=
                      *(ulonglong *)(pcVar20 + ((longlong)iVar17 * 2 + 1) * 8)) break;
                  pcVar32 = pcVar20 + (longlong)iVar37 * 0x10;
                  pcVar27 = pcVar20 + (longlong)iVar17 * 0x10;
                  uVar3 = *(undefined8 *)pcVar32;
                  uVar5 = *(undefined8 *)(pcVar32 + 8);
                  uVar6 = *(undefined8 *)(pcVar27 + 8);
                  *(undefined8 *)pcVar32 = *(undefined8 *)pcVar27;
                  *(undefined8 *)(pcVar32 + 8) = uVar6;
                  *(undefined8 *)pcVar27 = uVar3;
                  *(undefined8 *)(pcVar27 + 8) = uVar5;
                  iVar25 = iVar17 * 2;
                  iVar16 = iVar17 * 2 + 1;
                  iVar37 = iVar17;
                } while ((longlong)iVar16 < (longlong)uVar28);
                uVar41 = uVar28 - 1;
                local_58 = *(undefined8 *)pcVar20;
                uStack_50 = *(undefined8 *)(pcVar20 + 8);
                uVar5 = local_58;
                uVar6 = uStack_50;
                uVar3 = *(undefined8 *)(pcVar20 + uVar41 * 0x10 + 8);
                *(undefined8 *)pcVar20 = *(undefined8 *)(pcVar20 + uVar41 * 0x10);
                *(undefined8 *)(pcVar20 + 8) = uVar3;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                pcVar32 = pcVar20 + uVar41 * 0x10;
                *(undefined4 *)pcVar32 = (undefined4)local_58;
                *(undefined4 *)(pcVar32 + 4) = local_58._4_4_;
                *(undefined4 *)(pcVar32 + 8) = (undefined4)uStack_50;
                *(undefined4 *)(pcVar32 + 0xc) = uStack_50._4_4_;
                bVar42 = 2 < uVar28;
                uVar28 = uVar41;
                local_58 = uVar5;
                uStack_50 = uVar6;
              } while (bVar42);
            }
          }
        }
LAB_143688b97:
        ppcVar18 = ppcVar18 + -3;
      } while (&local_358 <= ppcVar18);
      uVar28 = uStack_360 & 0xffffffff;
    }
    uVar40 = (uint)uVar28;
    if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar28 & 0xffffffff);
    }
    local_390 = (longlong *)(local_388 + 0x338);
    if (*(int *)(local_388 + 0x344) < (int)uVar40) {
      FUN_147ce7c34(local_390,uVar28 & 0xffffffff);
      uVar40 = (uint)uStack_360;
    }
    local_3a0 = (uint *)(local_388 + 0x348);
    if ((uint)(*(int *)(local_388 + 0x350) - *(int *)(local_388 + 0x37c)) < uVar40) {
      if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar40);
      }
      FUN_147ce7ca4(local_3a0,uVar40);
      iVar25 = 1;
      if (3 < uVar40) {
        uVar40 = (uVar40 | 1) + 0xe;
        iVar25 = 0x1f;
        if (uVar40 != 0) {
          for (; uVar40 >> iVar25 == 0; iVar25 = iVar25 + -1) {
          }
        }
        iVar25 = 1 << ((byte)iVar25 & 0x1f);
      }
      if ((*(int *)(local_388 + 0x390) == 0) || (*(int *)(local_388 + 0x390) < iVar25)) {
        *(int *)(local_388 + 0x390) = iVar25;
        FUN_147ce7e40(local_3a0);
      }
    }
    iVar25 = (uint)uStack_360;
    if ((longlong)(int)(uint)uStack_360 != 0) {
      local_398 = (longlong *)-(longlong)(int)(uint)uStack_360;
      uVar28 = 0;
      do {
        iVar37 = (int)uVar28;
        lVar30 = (longlong)iVar37 * 0x10;
        lVar11 = *(longlong *)(local_368 + lVar30 + 8);
        if (lVar11 == 0) {
LAB_143688c71:
          lVar14 = 0;
        }
        else {
          if (DAT_14cae8b20 == 0) {
            local_358 = (code *)&LAB_14355090c;
            local_3d0 = FUN_14081d0ea;
            local_3d8 = FUN_14081d0ea;
            local_3e0 = &local_358;
            local_3e8 = &LAB_147b8e16d;
            local_3f0 = &LAB_140810a38;
            local_3f8 = L"Engine";
            local_400 = 0x800000000;
            local_408 = 0x10000000;
            local_410 = 8;
            local_418 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cae8b20 + 0x38)) ||
             (lVar14 = lVar11,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cae8b20 + 0x38) * 8) != DAT_14cae8b20 + 0x30))
          goto LAB_143688c71;
        }
        plVar15 = (longlong *)FUN_147a6176e(local_388,lVar14);
        if (iVar37 < iVar25) {
          lVar39 = (longlong)iVar37 + (longlong)local_398;
          lVar14 = 0;
          local_3b8 = plVar15;
          local_380 = uVar28;
          while (lVar11 == *(longlong *)(local_368 + lVar30 + 8)) {
            uVar3 = *(undefined8 *)(local_368 + lVar30);
            lVar2 = local_3b8[2];
            iVar37 = *(int *)(local_388 + 0x340);
            *(uint *)(local_388 + 0x340) = iVar37 + 1U;
            if (*(uint *)(local_388 + 0x344) < iVar37 + 1U) {
              FUN_147ce7ff6(local_390,iVar37);
            }
            lVar4 = *local_390;
            *(undefined8 *)(lVar4 + (longlong)iVar37 * 0xc) = uVar3;
            *(int *)(lVar4 + 8 + (longlong)iVar37 * 0xc) = (int)lVar2;
            local_358 = local_368 + lVar30;
            local_350 = (code *)&local_36c;
            local_36c = iVar37;
            FUN_147ce808a(local_3a0,&local_58,&local_358);
            lVar14 = lVar14 + -1;
            lVar30 = lVar30 + 0x10;
            if (lVar39 == lVar14) goto LAB_143688e2f;
          }
          uVar28 = (ulonglong)(uint)((int)local_380 - (int)lVar14);
        }
      } while ((int)uVar28 != iVar25);
    }
LAB_143688e2f:
    param_2 = local_3a8;
    if (local_368 != (code *)0x0) {
      FUN_1400020a8();
      param_2 = local_3a8;
    }
  }
  else {
    local_3a0 = (uint *)(plVar15 + 2);
    uVar40 = *(uint *)(plVar15 + 5);
    if (uVar40 == 0) {
      uVar41 = 1;
      uVar28 = 0;
      iVar25 = 0;
      uVar8 = 0;
    }
    else {
      puVar12 = (uint *)plVar15[4];
      if ((uint *)plVar15[4] == (uint *)0x0) {
        puVar12 = local_3a0;
      }
      uVar8 = *puVar12;
      if (uVar8 == 0) {
        iVar25 = uVar40 + 0x1e;
        if (-1 < (int)(uVar40 - 1)) {
          iVar25 = uVar40 - 1;
        }
        uVar28 = 0;
        uVar41 = (ulonglong)(uint)(iVar25 >> 5);
        if (iVar25 >> 5 < 1) {
          uVar41 = uVar28;
        }
        iVar25 = 0;
        do {
          if (uVar41 == uVar28) goto LAB_143687e6d;
          iVar25 = iVar25 + 0x20;
          uVar8 = puVar12[uVar28 + 1];
          uVar28 = uVar28 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar28 = 0;
        iVar25 = 0;
      }
      uVar41 = (ulonglong)(-uVar8 & uVar8);
      uVar23 = uVar41 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar8 = (iVar25 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar40 <= (int)uVar8) {
        uVar8 = uVar40;
      }
    }
    if (uVar8 != uVar40) {
      local_398 = (longlong *)(param_2 + 0x1490);
      local_378 = (longlong *)(param_1 + 0x338);
      uVar26 = 0xffffffff;
      local_380 = (ulonglong)uVar40;
LAB_143687ee4:
      local_390 = (longlong *)CONCAT44(local_390._4_4_,iVar25);
      lVar11 = *plVar15;
      plVar1 = *(longlong **)(lVar11 + (longlong)(int)uVar8 * 0x18);
      lVar30 = *plVar1;
      if ((local_3b9 == '\0') || ((*(byte *)(plVar1 + 0x1a) & 2) != 0)) {
        if (lVar30 == 0) {
          uVar23 = 0;
          uVar40 = 0;
        }
        else {
          uVar40 = *(uint *)(lVar30 + 0xc);
          uVar23 = (ulonglong)uVar40;
          if ((int)uVar40 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar40 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar40 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          uVar40 = *(uint *)(lVar14 + 0x10);
          if (*(uint *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar25 = DAT_14c964868 + 1;
            UNLOCK();
            uVar31 = DAT_14c964868 + 1;
            bVar42 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar25;
            if (bVar42) {
              local_3ac = uVar31;
              local_3a8 = param_2;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar31);
              plVar15 = local_3b8;
              param_2 = local_3a8;
              uVar31 = local_3ac;
            }
            LOCK();
            uVar40 = *(uint *)(lVar14 + 0x10);
            bVar42 = uVar40 == 0;
            if (bVar42) {
              *(uint *)(lVar14 + 0x10) = uVar31;
              uVar40 = 0;
            }
            UNLOCK();
            if (bVar42) {
              uVar40 = uVar31;
            }
          }
        }
        plVar1 = (longlong *)(lVar11 + (longlong)(int)uVar8 * 0x18);
        if (*(int *)(param_2 + 0x1460) != *(int *)(param_2 + 0x148c)) {
          plVar19 = *(longlong **)(param_2 + 0x1498);
          if (*(longlong **)(param_2 + 0x1498) == (longlong *)0x0) {
            plVar19 = local_398;
          }
          iVar25 = *(int *)((longlong)plVar19 +
                           (ulonglong)(*(int *)(param_2 + 0x14a0) - 1U & (uVar40 ^ (uint)uVar23)) *
                           4);
          if (iVar25 != -1) {
            do {
              if (*(ulonglong *)(*(longlong *)(param_2 + 0x1458) + (longlong)iVar25 * 0x18) ==
                  (uVar23 | (ulonglong)uVar40 << 0x20)) goto LAB_143688115;
              iVar25 = *(int *)(*(longlong *)(param_2 + 0x1458) + (longlong)iVar25 * 0x18 + 0x10);
            } while (iVar25 != -1);
          }
        }
        if (*(char *)(lVar30 + 0x179) != '\x04') {
          lVar11 = *plVar1;
          if (param_2 == 0) {
            uVar8 = 0;
            uVar40 = 0;
          }
          else {
            uVar8 = *(uint *)(param_2 + 0xc);
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            uVar40 = *(uint *)(lVar14 + 0x10);
            if (*(uint *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar25 = DAT_14c964868 + 1;
              UNLOCK();
              uVar31 = DAT_14c964868 + 1;
              bVar42 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar25;
              if (bVar42) {
                local_3ac = uVar31;
                local_3a8 = param_2;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar31);
                plVar15 = local_3b8;
                param_2 = local_3a8;
                uVar31 = local_3ac;
              }
              LOCK();
              uVar40 = *(uint *)(lVar14 + 0x10);
              bVar42 = uVar40 == 0;
              if (bVar42) {
                *(uint *)(lVar14 + 0x10) = uVar31;
                uVar40 = 0;
              }
              UNLOCK();
              if (bVar42) {
                uVar40 = uVar31;
              }
            }
          }
          if (*(int *)(lVar11 + 0x38) != *(int *)(lVar11 + 100)) {
            lVar14 = lVar11 + 0x68;
            if (*(longlong *)(lVar11 + 0x70) != 0) {
              lVar14 = *(longlong *)(lVar11 + 0x70);
            }
            iVar25 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar11 + 0x78) - 1U & (uVar40 ^ uVar8))
                                       * 4);
            if (iVar25 != -1) {
              lVar11 = *(longlong *)(lVar11 + 0x30);
              do {
                lVar14 = (longlong)iVar25 * 0x10;
                if ((*(uint *)(lVar11 + lVar14) == uVar8) &&
                   (*(uint *)(lVar11 + 4 + lVar14) == uVar40)) goto LAB_143688115;
                iVar25 = *(int *)(lVar14 + lVar11 + 8);
              } while (iVar25 != -1);
            }
          }
          lVar11 = *plVar1;
          if (param_2 == 0) {
            uVar8 = 0;
            uVar40 = 0;
          }
          else {
            uVar8 = *(uint *)(param_2 + 0xc);
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            uVar40 = *(uint *)(lVar14 + 0x10);
            if (*(uint *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar25 = DAT_14c964868 + 1;
              UNLOCK();
              uVar31 = DAT_14c964868 + 1;
              bVar42 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar25;
              if (bVar42) {
                local_3ac = uVar31;
                local_3a8 = param_2;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar31);
                plVar15 = local_3b8;
                param_2 = local_3a8;
                uVar31 = local_3ac;
              }
              LOCK();
              uVar40 = *(uint *)(lVar14 + 0x10);
              bVar42 = uVar40 == 0;
              if (bVar42) {
                *(uint *)(lVar14 + 0x10) = uVar31;
                uVar40 = 0;
              }
              UNLOCK();
              if (bVar42) {
                uVar40 = uVar31;
              }
            }
          }
          if (*(int *)(lVar11 + 0x88) != *(int *)(lVar11 + 0xb4)) {
            lVar14 = lVar11 + 0xb8;
            if (*(longlong *)(lVar11 + 0xc0) != 0) {
              lVar14 = *(longlong *)(lVar11 + 0xc0);
            }
            iVar25 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar11 + 200) - 1U & (uVar40 ^ uVar8)) *
                                       4);
            if (iVar25 != -1) {
              lVar11 = *(longlong *)(lVar11 + 0x80);
              do {
                lVar14 = (longlong)iVar25 * 0x10;
                if ((*(uint *)(lVar11 + lVar14) == uVar8) &&
                   (*(uint *)(lVar11 + 4 + lVar14) == uVar40)) goto LAB_143688115;
                iVar25 = *(int *)(lVar14 + lVar11 + 8);
              } while (iVar25 != -1);
            }
          }
        }
      }
      goto LAB_1436881aa;
    }
  }
LAB_143687e6d:
  lVar11 = local_388;
  if (*(int *)(local_388 + 0x340) == 0) goto LAB_143687e83;
  if (*(longlong *)(param_2 + 0x68) == 0) {
LAB_1436885c6:
    lVar39 = 0;
  }
  else {
    lVar14 = FUN_1413dbcfa();
    lVar30 = *(longlong *)(param_2 + 0x68);
    if (lVar30 == 0) goto LAB_1436885c6;
    lVar39 = 0;
    if ((lVar14 != 0) && (lVar2 = *(longlong *)(lVar30 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar14 + 0x38)) goto LAB_1436885c6;
      lVar39 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) ==
          lVar14 + 0x30) {
        lVar39 = lVar30;
      }
    }
  }
  FUN_147be878e(lVar39,lVar11 + 0x248);
  *(undefined1 *)(param_2 + 0x19f9) = 1;
  FUN_14068ded2(param_2 + 0x19a8,0);
  *(undefined1 *)(param_2 + 0x19f8) = 1;
  *(undefined4 *)(lVar11 + 0x240) = 1;
  *(undefined4 *)(lVar11 + 0x4e8) = 0;
  *(undefined4 *)(lVar11 + 0x3ac) = 0;
  *(undefined8 *)(lVar11 + 0x398) = 0;
  *(undefined8 *)(lVar11 + 0x3a0) = 0;
  *(undefined4 *)(lVar11 + 0x3b0) = *(undefined4 *)(lVar11 + 0x340);
  iVar25 = *(int *)(lVar11 + 0x504);
  FUN_1447a1747(*(undefined8 *)(lVar11 + 0x4f8),*(undefined4 *)(lVar11 + 0x500));
  *(undefined4 *)(lVar11 + 0x500) = 0;
  if ((iVar25 < 0) && (*(int *)(lVar11 + 0x504) != 0)) {
    FUN_1408be2c4(lVar11 + 0x4f8,0);
  }
  *(double *)(lVar11 + 0x170) = (double)*(float *)(lVar11 + 0x168);
  *(undefined1 *)(lVar11 + 0x890) = 0;
  if (local_3b9 == '\0') {
    FUN_145a00676(lVar11 + 0x508,0);
    FUN_140b7fa3a(lVar11 + 0x4f8,lVar11 + 0x9e0);
  }
  else {
    FUN_147cddc66(lVar11 + 0x3c8,lVar11 + 0x558);
  }
  lVar30 = DAT_14cad6ef8;
  iVar25 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar25 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar25 == 2)) {
    uVar28 = 0;
  }
  else if (iVar25 == 1) {
    DVar9 = FUN_140ad26c0(ThreadLocalStoragePointer,param_2);
    DVar10 = GetCurrentThreadId();
    uVar28 = (ulonglong)(DVar9 != DVar10);
  }
  else {
    uVar28 = 1;
  }
  fVar43 = *(float *)(lVar30 + uVar28 * 4);
  if (fVar43 < 0.0) {
    fVar43 = *(float *)(lVar11 + 0x184);
  }
  if (fVar43 <= 0.0) {
    FUN_143687178(lVar11,param_2);
  }
LAB_143687e83:
  if ((local_48 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143689118:
  if (*(longlong *)*plVar19 == 0) {
    uVar40 = 0;
    iVar37 = 0;
  }
  else {
    uVar40 = *(uint *)(*(longlong *)*plVar19 + 0xc);
    if ((int)uVar40 < DAT_14c9647dc) {
      lVar30 = (ulonglong)((uVar40 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar40 >> 0x10) * 8);
    }
    else {
      lVar30 = 0;
    }
    iVar37 = *(int *)(lVar30 + 0x10);
    if (*(int *)(lVar30 + 0x10) == 0) {
      LOCK();
      iVar37 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar42 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar37;
      if (bVar42) {
        local_398 = plVar19;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
        plVar19 = local_398;
        plVar15 = local_3b8;
        lVar11 = local_3a8;
      }
      LOCK();
      iVar37 = *(int *)(lVar30 + 0x10);
      bVar42 = iVar37 == 0;
      if (bVar42) {
        *(int *)(lVar30 + 0x10) = iVar16;
        iVar37 = 0;
      }
      UNLOCK();
      if (bVar42) {
        iVar37 = iVar16;
      }
    }
  }
  uVar23 = uStack_360;
  uVar3 = *(undefined8 *)(*(longlong *)*plVar19 + 0x20);
  lVar30 = (longlong)(int)(uint)uStack_360;
  uVar8 = (uint)uStack_360 + 1;
  uStack_360 = CONCAT44(uStack_360._4_4_,uVar8);
  if (uStack_360._4_4_ < uVar8) {
    local_398 = (longlong *)CONCAT44(local_398._4_4_,iVar37);
    FUN_143699fb0(&local_368,uVar23 & 0xffffffff);
    plVar15 = local_3b8;
    lVar11 = local_3a8;
    iVar37 = (int)local_398;
  }
  lVar30 = lVar30 * 0x10;
  *(uint *)(local_368 + lVar30) = uVar40;
  *(int *)(local_368 + lVar30 + 4) = iVar37;
  *(undefined8 *)(local_368 + lVar30 + 8) = uVar3;
  *(byte *)(*plVar19 + 0xd0) = *(byte *)(*plVar19 + 0xd0) & 0xfd;
  puVar12 = local_3a0;
LAB_1436891dd:
  uVar26 = uVar26 & ~(uint)uVar28;
  puVar13 = (uint *)plVar15[4];
  if ((uint *)plVar15[4] == (uint *)0x0) {
    puVar13 = puVar12;
  }
  uVar40 = *(uint *)(plVar15 + 5);
  iVar37 = (int)uVar41;
  lVar30 = (longlong)iVar37;
  uVar8 = puVar13[lVar30] & uVar26;
  if (uVar8 == 0) {
    iVar16 = uVar40 + 0x1e;
    if (-1 < (int)(uVar40 - 1)) {
      iVar16 = uVar40 - 1;
    }
    iVar16 = iVar16 >> 5;
    iVar25 = iVar25 + 0x20;
    iVar17 = iVar16;
    if (iVar16 < iVar37) {
      iVar17 = iVar37;
    }
    plVar15 = local_3b8;
    if (iVar37 < iVar16) {
      lVar14 = 0;
      do {
        uVar8 = puVar13[lVar30 + lVar14 + 1];
        if (uVar8 != 0) {
          uVar41 = (ulonglong)(iVar37 + (int)lVar14 + 1);
          uVar26 = 0xffffffff;
          goto LAB_143689273;
        }
        iVar25 = iVar25 + 0x20;
        lVar14 = lVar14 + 1;
      } while (iVar17 - lVar30 != lVar14);
      uVar26 = 0xffffffff;
      iVar37 = iVar17;
    }
    uVar41 = (ulonglong)(iVar37 + 1);
    puVar12 = local_3a0;
    lVar11 = local_3a8;
    uVar8 = uVar40;
  }
  else {
LAB_143689273:
    uVar28 = (ulonglong)(-uVar8 & uVar8);
    uVar23 = uVar28 * 2 + 1;
    lVar30 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    uVar8 = (iVar25 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
    if ((int)uVar40 <= (int)uVar8) {
      uVar8 = uVar40;
    }
  }
  if (uVar8 == (uint)local_390) goto LAB_14368878b;
  goto LAB_143688e73;
LAB_1436888cd:
  local_58 = *(undefined8 *)pcVar24;
  uStack_50 = *(undefined8 *)(pcVar24 + 8);
  uVar5 = local_58;
  uVar6 = uStack_50;
  uVar3 = *(undefined8 *)(pcVar33 + -8);
  *(undefined8 *)pcVar24 = *(undefined8 *)pcVar35;
  *(undefined8 *)(pcVar24 + 8) = uVar3;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)pcVar35 = (undefined4)local_58;
  *(undefined4 *)(pcVar33 + -0xc) = local_58._4_4_;
  *(undefined4 *)(pcVar33 + -8) = (undefined4)uStack_50;
  *(undefined4 *)(pcVar33 + -4) = uStack_50._4_4_;
  iVar25 = iVar25 + -1;
  pcVar33 = pcVar33 + -0x20;
  local_58 = uVar5;
  uStack_50 = uVar6;
  if ((longlong)pcVar36 - (longlong)pcVar29 < (longlong)pcVar27 - (longlong)pcVar38) {
    if (pcVar20 < pcVar32) {
      *ppcVar18 = pcVar20;
      ppcVar18[1] = pcVar32;
      *(int *)(ppcVar18 + 2) = iVar25;
      ppcVar18 = ppcVar18 + 3;
    }
    pcVar20 = pcVar24;
    pcVar27 = pcVar36;
    if (pcVar35 <= pcVar24 + 0x10) goto LAB_143688b97;
  }
  else {
    if (pcVar24 + 0x10 < pcVar35) {
      *ppcVar18 = pcVar24;
      ppcVar18[1] = pcVar33;
      *(int *)(ppcVar18 + 2) = iVar25;
      ppcVar18 = ppcVar18 + 3;
    }
    pcVar24 = pcVar38;
    pcVar33 = pcVar32;
    pcVar27 = pcVar32;
    if (pcVar32 <= pcVar20) goto LAB_143688b97;
  }
  iVar37 = (int)((ulonglong)((longlong)pcVar27 - (longlong)pcVar24) >> 4);
  uVar28 = (ulonglong)(iVar37 + 1);
  pcVar29 = pcVar24;
  pcVar24 = pcVar20;
  pcVar32 = pcVar33;
  if (iVar25 == 0) goto LAB_143688977;
  goto LAB_14368881f;
LAB_143688115:
  if (lVar30 == 0) {
    uVar40 = 0;
    iVar25 = 0;
  }
  else {
    uVar40 = *(uint *)(lVar30 + 0xc);
    if ((int)uVar40 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar40 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar40 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar25 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar25 = DAT_14c964868 + 1;
      UNLOCK();
      iVar37 = DAT_14c964868 + 1;
      bVar42 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar25;
      if (bVar42) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar37);
        plVar15 = local_3b8;
      }
      LOCK();
      iVar25 = *(int *)(lVar11 + 0x10);
      bVar42 = iVar25 == 0;
      if (bVar42) {
        *(int *)(lVar11 + 0x10) = iVar37;
        iVar25 = 0;
      }
      UNLOCK();
      if (bVar42) {
        iVar25 = iVar37;
      }
    }
  }
  iVar37 = *(int *)(local_388 + 0x340);
  lVar11 = (longlong)iVar37;
  *(uint *)(local_388 + 0x340) = iVar37 + 1U;
  if (*(uint *)(local_388 + 0x344) < iVar37 + 1U) {
    FUN_147ce7ff6(local_378,iVar37);
    plVar15 = local_3b8;
  }
  lVar30 = *local_378;
  *(uint *)(lVar30 + lVar11 * 0xc) = uVar40;
  *(int *)(lVar30 + 4 + lVar11 * 0xc) = iVar25;
  *(undefined4 *)(lVar30 + 8 + lVar11 * 0xc) = 0xffffffff;
  *(byte *)(*plVar1 + 0xd0) = *(byte *)(*plVar1 + 0xd0) & 0xfd;
LAB_1436881aa:
  uVar26 = uVar26 & ~(uint)uVar41;
  puVar12 = (uint *)plVar15[4];
  if ((uint *)plVar15[4] == (uint *)0x0) {
    puVar12 = local_3a0;
  }
  uVar40 = *(uint *)(plVar15 + 5);
  iVar37 = (int)uVar28;
  lVar11 = (longlong)iVar37;
  uVar8 = puVar12[lVar11] & uVar26;
  iVar25 = (int)local_390;
  if (uVar8 == 0) {
    iVar16 = uVar40 + 0x1e;
    if (-1 < (int)(uVar40 - 1)) {
      iVar16 = uVar40 - 1;
    }
    iVar16 = iVar16 >> 5;
    iVar25 = (int)local_390 + 0x20;
    iVar17 = iVar16;
    if (iVar16 < iVar37) {
      iVar17 = iVar37;
    }
    plVar15 = local_3b8;
    if (iVar37 < iVar16) {
      lVar30 = 0;
      do {
        uVar8 = puVar12[lVar11 + lVar30 + 1];
        if (uVar8 != 0) {
          uVar28 = (ulonglong)(iVar37 + (int)lVar30 + 1);
          uVar26 = 0xffffffff;
          goto LAB_143688243;
        }
        iVar25 = iVar25 + 0x20;
        lVar30 = lVar30 + 1;
      } while (iVar17 - lVar11 != lVar30);
      uVar26 = 0xffffffff;
      lVar11 = (longlong)iVar17;
    }
    uVar28 = lVar11 + 1U & 0xffffffff;
    uVar8 = uVar40;
  }
  else {
LAB_143688243:
    uVar41 = (ulonglong)(-uVar8 & uVar8);
    uVar23 = uVar41 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar8 = (iVar25 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar40 <= (int)uVar8) {
      uVar8 = uVar40;
    }
  }
  if (uVar8 == (uint)local_380) goto LAB_143687e6d;
  goto LAB_143687ee4;
}



// FUNCTION 14368964c FUN_14368964c body=1508 status=ok
// SIG undefined FUN_14368964c(void)

void FUN_14368964c(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,uint param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0 [2];
  uint local_9c;
  ulonglong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar2 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)(param_1 + 0x160),4);
    }
    else {
      FUN_14572512c(param_3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x160) = *puVar2;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  puVar3 = (ulonglong *)param_3[1];
  puVar2 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar2) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,&param_5,4);
    }
    else {
      FUN_14572512c(param_3,&param_5);
    }
  }
  else {
    param_5 = *(undefined4 *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  if (*(longlong *)(param_2 + 0x68) != 0) {
    lVar8 = FUN_1413dbcfa();
    lVar7 = *(longlong *)(param_2 + 0x68);
    if (lVar7 != 0) {
      lVar9 = 0;
      if ((lVar8 == 0) || (lVar4 = *(longlong *)(lVar7 + 0x10), lVar4 == 0)) goto LAB_14368975b;
      if (*(int *)(lVar8 + 0x38) <= *(int *)(lVar4 + 0x38)) {
        lVar9 = 0;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30) {
          lVar9 = lVar7;
        }
        goto LAB_14368975b;
      }
    }
  }
  lVar9 = 0;
LAB_14368975b:
  FUN_147be7d66(lVar9,param_3);
  if (*(char *)(param_1 + 0x17f) == '\x01') {
    uVar13 = *(uint *)(param_1 + 0x730);
    (**(code **)(*param_3 + 0x188))(param_3,(undefined4 *)(param_1 + 0x838));
    if (uVar13 - *(int *)(param_1 + 0x838) < uVar13) {
      iVar12 = -*(int *)(param_1 + 0x838);
      do {
        FUN_14021219d(param_3,(longlong)(int)(uVar13 + iVar12) * 0x18 +
                              *(longlong *)(param_1 + 0x728));
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0);
    }
    *(undefined4 *)(param_1 + 0x838) = 0;
  }
  else {
    local_9c = *(int *)(param_1 + 0x6c0) - *(int *)(param_1 + 0x6ec);
    local_c0 = param_1 + 0x6b8;
    local_b8 = param_2;
    (**(code **)(*param_3 + 0x188))(param_3);
    if (local_9c != 0) {
      uVar13 = 0;
      do {
        if ((*(int *)(param_1 + 0x14c) == 0) || (uVar1 = *(uint *)(param_1 + 0x148), (int)uVar1 < 0)
           ) {
LAB_143689c04:
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar11 == (longlong *)0x0) || ((int)plVar11[2] != *(int *)(param_1 + 0x14c))) ||
               ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_143689c04;
            lVar7 = *plVar11;
          }
        }
        plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x88) + (longlong)(int)uVar13 * 8);
        (**(code **)(*plVar11 + 0x2d0))(plVar11,local_b0);
        FUN_1400021e4(local_b0,local_98);
        FUN_1400021e4((longlong)plVar11 + 0x54,local_b0);
        FUN_14021219d(param_3,local_98);
        FUN_14021219d(param_3,local_b0);
        FUN_1400f4f7e(param_3,plVar11 + 0x10);
        FUN_14480c34d(param_3,plVar11 + 0x14);
        FUN_14480c34d(param_3);
        if ((*(byte *)(param_3 + 5) & 1) != 0) {
          plVar11[0x17] = 0;
          plVar11[0x1b] = 0;
        }
        if (local_b0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_98[0] != 0) {
          FUN_1400020a8();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < local_9c);
    }
    FUN_147a61e96(local_c0,0);
    param_2 = local_b8;
  }
  if (*(char *)(param_1 + 0x17f) == '\0') {
    FUN_143689e46(param_1,param_2,param_3);
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar5 = param_3;
    uVar6 = (**(code **)(*param_3 + 0x28))(param_3);
    puVar5[1] = uVar6;
    local_98[0] = 0;
    FUN_1408383eb(param_3);
    FUN_143689e46(param_1,param_2,param_3);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_147cdec80(puVar5);
      FUN_1400020a8(puVar5);
    }
  }
  uVar13 = param_6;
  if (*(char *)(param_1 + 0x181) == '\x01') {
    lVar7 = (**(code **)(*param_3 + 0x28))(param_3);
    local_98[0] = 0;
    FUN_1408383eb();
    if ((uVar13 & 1) == 0) {
      uVar6 = 0;
      local_78 = 0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      if (*(int *)(param_1 + 0x14c) != 0) {
        uVar13 = *(uint *)(param_1 + 0x148);
        uVar6 = 0;
        if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
          if ((puVar5 == (undefined8 *)0x0) ||
             ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x14c) ||
              ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) {
            uVar6 = 0;
          }
          else {
            uVar6 = *puVar5;
          }
        }
      }
      FUN_147ce8bf8(uVar6,param_5,local_98);
      FUN_147ce8cd2(param_3,local_98);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_145c4086e(local_98);
    }
    lVar8 = (**(code **)(*param_3 + 0x28))(param_3);
    local_98[0] = (lVar8 - lVar7) - 8;
    (**(code **)(*param_3 + 0x1a0))(param_3,lVar7);
    FUN_1408383eb(param_3,local_98);
    (**(code **)(*param_3 + 0x1a0))(param_3,lVar8);
  }
  lVar7 = *param_4;
  uVar10 = 0;
  if ((longlong)(int)param_4[1] != 0) {
    lVar8 = (longlong)(int)param_4[1] * 0x28;
    lVar7 = lVar7 + 0x24;
    do {
      if (*(char *)(param_1 + 0x17f) == '\x01') {
        (**(code **)(*param_3 + 0x188))(param_3,lVar7);
      }
      FUN_147cdecfe(param_3,*(undefined8 *)(lVar7 + -0x24),*(undefined4 *)(lVar7 + -0x1c));
      lVar7 = lVar7 + 0x28;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
    uVar10 = (undefined4)param_4[1];
    lVar7 = *param_4;
  }
  FUN_145ad5728(lVar7,uVar10);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_147ce8fde(param_4);
  }
  if (*(char *)(param_1 + 0x17f) != '\0') {
    local_98[0] = local_98[0] & 0xffffffff00000000;
    (**(code **)(*param_3 + 0x188))(param_3);
  }
  local_98[0] = local_98[0] & 0xffffffff00000000;
  puVar3 = (ulonglong *)param_3[1];
  if (puVar3[1] < *puVar3 + 4) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,local_98,4);
    }
    else {
      FUN_14572512c(param_3,local_98);
    }
  }
  else {
    *puVar3 = *puVar3 + 4;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143689c32 FUN_143689c32 body=531 status=ok
// SIG undefined FUN_143689c32(void)

void FUN_143689c32(longlong param_1,longlong *param_2,longlong *param_3,int *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (param_2[0xd] == 0) {
LAB_143689c98:
    lVar12 = 0;
  }
  else {
    lVar7 = FUN_1413dbcfa();
    lVar8 = param_2[0xd];
    if (lVar8 == 0) goto LAB_143689c98;
    lVar12 = 0;
    if ((lVar7 != 0) && (lVar4 = *(longlong *)(lVar8 + 0x10), lVar4 != 0)) {
      if (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38)) goto LAB_143689c98;
      lVar12 = 0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        lVar12 = lVar8;
      }
    }
  }
  *(longlong *)(lVar12 + 0x2e8) = param_1 + 0x248;
  *(undefined1 *)(param_2 + 0x33f) = 0;
  plVar9 = (longlong *)0x0;
  cVar6 = FUN_140317ca6((uint *)(param_1 + 0x148),0);
  bVar5 = true;
  uVar13 = 0;
  uVar14 = 0xbff00000;
  if (cVar6 != '\0') goto LAB_143689d58;
  if (*(int *)(param_1 + 0x14c) == 0) {
LAB_143689e3e:
    lVar8 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x148);
    lVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(param_1 + 0x14c) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_143689e3e;
      lVar8 = *plVar9;
    }
  }
  plVar9 = *(longlong **)(lVar8 + 0x178);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar13 = (undefined4)plVar9[0x78];
    uVar14 = (undefined4)((ulonglong)plVar9[0x78] >> 0x20);
    (**(code **)(*plVar9 + 0x6b8))(plVar9);
    bVar5 = false;
  }
LAB_143689d58:
  lVar8 = param_2[0x2d8];
  *(char *)(param_2 + 0x2d8) = *(char *)(param_1 + 0x180) + '\x01';
  do {
    iVar2 = *param_4;
    if ((int)param_3[1] <= iVar2) break;
    iVar3 = *(int *)(*param_3 + 4 + (longlong)iVar2 * 0xc);
    if ((iVar3 == 0) || (uVar1 = *(uint *)(*param_3 + (longlong)iVar2 * 0xc), (int)uVar1 < 0)) {
LAB_143689dec:
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      if ((int)uVar1 < DAT_14c9647dc) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != iVar3)) ||
           ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143689dec;
        uVar10 = *puVar11;
      }
    }
    *param_4 = iVar2 + 1;
    cVar6 = FUN_147cddcac(uVar10,param_2,param_5);
  } while (cVar6 != '\0');
  if (!bVar5) {
    plVar9[0x78] = CONCAT44(uVar14,uVar13);
  }
  (**(code **)(*param_2 + 0x2f8))(param_2,0);
  *(char *)(param_2 + 0x2d8) = (char)lVar8;
  *(undefined1 *)(param_2 + 0x33f) = 1;
  *(longlong *)(lVar12 + 0x2e8) = lVar12 + 0x1f8;
  return;
}



// FUNCTION 143689e46 FUN_143689e46 body=1455 status=ok
// SIG undefined FUN_143689e46(void)

void FUN_143689e46(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  longlong *local_98;
  longlong local_90;
  uint local_84;
  uint *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar16 = (longlong *)(param_1 + 0x20);
  puVar10 = (uint *)(param_1 + 0x30);
  uVar17 = *(uint *)(param_1 + 0x48);
  uVar15 = (ulonglong)uVar17;
  local_78 = param_3;
  local_70 = param_2;
  if (uVar17 == 0) {
    uVar11 = 1;
    uVar19 = 0;
    iVar20 = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar3 = puVar10;
    }
    uVar7 = *puVar3;
    if (uVar7 == 0) {
      iVar20 = uVar17 + 0x1e;
      if (-1 < (int)(uVar17 - 1)) {
        iVar20 = uVar17 - 1;
      }
      uVar19 = 0;
      uVar6 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar6 = uVar19;
      }
      iVar20 = 0;
      do {
        if (uVar6 == uVar19) goto LAB_143689f07;
        iVar20 = iVar20 + 0x20;
        uVar7 = puVar3[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar19 = 0;
      iVar20 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar6 = uVar11 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar7 = (iVar20 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)uVar17 <= (int)uVar7) {
      uVar7 = uVar17;
    }
  }
  if (uVar7 == uVar17) {
LAB_143689f07:
    FUN_147ce900e(plVar16);
    if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
      FUN_147ce9196(param_1 + 0x70);
      FUN_147ce92de(param_1 + 0x70);
    }
    local_50 = local_50 & 0xffffffff00000000;
    (**(code **)(*local_78 + 0x188))();
    if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_68 = param_1 + 0xa8;
  uVar17 = 0xffffffff;
  local_a0 = uVar15;
  local_98 = plVar16;
  local_80 = puVar10;
LAB_143689f86:
  iVar18 = *(int *)(*plVar16 + 4 + (longlong)(int)uVar7 * 0x18);
  if (((((iVar18 != 0) &&
        (uVar7 = *(uint *)(*plVar16 + (longlong)(int)uVar7 * 0x18), -1 < (int)uVar7)) &&
       ((int)uVar7 < DAT_14c9647dc)) &&
      ((plVar14 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar14 != (longlong *)0x0 && ((int)plVar14[2] == iVar18)))) &&
     (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 && (lVar12 = *plVar14, lVar12 != 0)))) {
    uVar7 = *(uint *)(lVar12 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar2 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar18 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar18;
      if (bVar21) {
        local_90 = CONCAT44(local_90._4_4_,uVar13);
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
        uVar15 = local_a0;
        plVar16 = local_98;
        uVar13 = (uint)local_90;
      }
      LOCK();
      uVar2 = *(uint *)(lVar9 + 0x10);
      bVar21 = uVar2 == 0;
      if (bVar21) {
        *(uint *)(lVar9 + 0x10) = uVar13;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar21) {
        uVar2 = uVar13;
      }
    }
    puVar10 = local_80;
    if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
      lVar9 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar9 = local_68;
      }
      iVar18 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & (uVar2 ^ uVar7)) * 4);
      if (iVar18 != -1) {
        do {
          lVar9 = *(longlong *)(param_1 + 0x70) + (longlong)iVar18 * 0x30;
          if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar18 * 0x30) ==
              CONCAT44(uVar2,uVar7)) {
            if (((longlong *)(lVar9 + 8) != (longlong *)0x0 && lVar9 != 0) &&
               (0 < *(int *)(lVar9 + 0x20))) {
              local_60 = *(longlong *)(lVar9 + 8);
              if (local_60 != 0) goto LAB_14368a0c2;
              uVar7 = *(uint *)(lVar12 + 0xc);
              if ((int)uVar7 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              local_90 = *(longlong *)(*(longlong *)(local_70 + 0x58) + 0x1b8);
              uVar2 = *(uint *)(lVar12 + 0x10);
              if (*(uint *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar18 = DAT_14c964868 + 1;
                UNLOCK();
                uVar13 = DAT_14c964868 + 1;
                bVar21 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar18;
                if (bVar21) {
                  local_84 = uVar13;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar13);
                  uVar15 = local_a0;
                  plVar16 = local_98;
                  uVar13 = local_84;
                }
                LOCK();
                uVar2 = *(uint *)(lVar12 + 0x10);
                bVar21 = uVar2 == 0;
                if (bVar21) {
                  *(uint *)(lVar12 + 0x10) = uVar13;
                  uVar2 = 0;
                }
                UNLOCK();
                if (bVar21) {
                  uVar2 = uVar13;
                }
              }
              puVar10 = local_80;
              if (*(int *)(local_90 + 0x58) != *(int *)(local_90 + 0x84)) {
                lVar12 = local_90 + 0x88;
                if (*(longlong *)(local_90 + 0x90) != 0) {
                  lVar12 = *(longlong *)(local_90 + 0x90);
                }
                iVar18 = *(int *)(lVar12 + (ulonglong)
                                           (*(int *)(local_90 + 0x98) - 1U & (uVar2 ^ uVar7)) * 4);
                if (iVar18 != -1) {
                  lVar12 = *(longlong *)(local_90 + 0x50);
                  goto LAB_14368a266;
                }
              }
            }
            break;
          }
          iVar18 = *(int *)(lVar9 + 0x28);
        } while (iVar18 != -1);
      }
    }
  }
  goto LAB_14368a113;
  while (iVar18 = *(int *)(lVar12 + 0x10 + lVar8 * 0x18), iVar18 != -1) {
LAB_14368a266:
    lVar8 = (longlong)iVar18;
    local_50 = *(ulonglong *)(lVar12 + lVar8 * 0x18);
    local_58 = CONCAT44(uVar2,uVar7);
    cVar1 = FUN_14472ecf8(&local_50,&local_58);
    lVar12 = *(longlong *)(local_90 + 0x50);
    puVar10 = local_80;
    uVar15 = local_a0;
    plVar16 = local_98;
    if (cVar1 != '\0') {
      lVar12 = lVar12 + lVar8 * 0x18;
      if ((lVar12 != 0) && (local_60 = *(longlong *)(lVar12 + 8), local_60 != 0)) {
LAB_14368a0c2:
        plVar16 = local_78;
        local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar9 + 0x20));
        (**(code **)(*local_78 + 0x188))(local_78,&local_50);
        (**(code **)(*plVar16 + 400))(plVar16,&local_60);
        (**(code **)(*plVar16 + 0x170))
                  (plVar16,*(undefined8 *)(lVar9 + 0x10),(longlong)*(int *)(lVar9 + 0x18));
        puVar10 = local_80;
        uVar15 = local_a0;
        plVar16 = local_98;
      }
      break;
    }
  }
LAB_14368a113:
  uVar17 = uVar17 & ~(uint)uVar11;
  puVar3 = *(uint **)(param_1 + 0x40);
  if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
    puVar3 = puVar10;
  }
  uVar2 = *(uint *)(param_1 + 0x48);
  iVar18 = (int)uVar19;
  lVar12 = (longlong)iVar18;
  uVar7 = puVar3[lVar12] & uVar17;
  if (uVar7 == 0) {
    iVar4 = uVar2 + 0x1e;
    if (-1 < (int)(uVar2 - 1)) {
      iVar4 = uVar2 - 1;
    }
    iVar4 = iVar4 >> 5;
    iVar20 = iVar20 + 0x20;
    iVar5 = iVar4;
    if (iVar4 < iVar18) {
      iVar5 = iVar18;
    }
    uVar15 = local_a0;
    if (iVar18 < iVar4) {
      lVar9 = 0;
      do {
        uVar7 = puVar3[lVar12 + lVar9 + 1];
        if (uVar7 != 0) {
          uVar19 = (ulonglong)(iVar18 + (int)lVar9 + 1);
          uVar17 = 0xffffffff;
          goto LAB_14368a198;
        }
        iVar20 = iVar20 + 0x20;
        lVar9 = lVar9 + 1;
      } while (iVar5 - lVar12 != lVar9);
      uVar17 = 0xffffffff;
      iVar18 = iVar5;
    }
    uVar19 = (ulonglong)(iVar18 + 1);
    puVar10 = local_80;
    plVar16 = local_98;
    uVar7 = uVar2;
  }
  else {
LAB_14368a198:
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar6 = uVar11 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar7 = (iVar20 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar7) {
      uVar7 = uVar2;
    }
  }
  if (uVar7 == (uint)uVar15) goto LAB_143689f07;
  goto LAB_143689f86;
}



// FUNCTION 14368a3f6 FUN_14368a3f6 body=1321 status=ok
// SIG undefined FUN_14368a3f6(void)

ulonglong FUN_14368a3f6(undefined8 param_1,ulonglong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong unaff_RBP;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == (ulonglong *)0x0) {
    puVar8 = (ulonglong *)param_3[0xb];
    puVar11 = (ulonglong *)0x0;
    FUN_144adf12a(0,puVar8);
  }
  else {
    cVar2 = FUN_1449e2a3e(param_2);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_2 + 0x179) == '\x04')) {
      uVar10 = 0;
      goto LAB_14368a6bb;
    }
    puVar8 = (ulonglong *)param_3[0xb];
    FUN_144adf12a(param_2,puVar8);
    if ((char)param_2[0xd] == '\x03') {
      FUN_1478c0b8c(param_2);
      puVar11 = param_2;
    }
    else {
      puVar11 = (ulonglong *)0x0;
    }
  }
  if (((char)param_2[0xd] == '\0') && ((*(byte *)((longlong)param_2 + 0x61) & 1) == 0)) {
LAB_14368a6ac:
    uVar10 = 0;
  }
  else {
    if ((param_2 != (ulonglong *)0x0) && ((ulonglong *)param_3[6] != param_2)) {
      if (DAT_14caf9cd0 == 0) {
        local_60 = &local_48;
        local_48 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = (code *)&LAB_1463c0cc2;
        local_68 = &LAB_147c9db5b;
        local_70 = (code *)&LAB_1463f9c44;
        local_78 = L"Game";
        local_80 = 0x2000000000;
        local_88 = 0x10000004;
        local_90 = 8;
        local_98 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      }
      puVar8 = (ulonglong *)(longlong)*(int *)(DAT_14caf9cd0 + 0x38);
      if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)puVar8 * 8) ==
          DAT_14caf9cd0 + 0x30)) goto LAB_14368a6ac;
    }
    uVar10 = 0;
    cVar2 = '\0';
    if ((*(byte *)((longlong)param_2 + 0x61) & 0x21) == 0x20) {
      cVar3 = FUN_1449e2a3e(param_2);
      cVar2 = '\x01';
      if (cVar3 != '\0') {
        if (DAT_14cae8b20 == 0) {
          local_60 = &local_48;
          local_48 = (code *)&LAB_14355090c;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_147b8e16d;
          local_70 = (code *)&LAB_140810a38;
          local_78 = L"Engine";
          local_80 = 0x800000000;
          local_88 = 0x10000000;
          local_90 = 8;
          local_98 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar12 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_60 = &local_48;
          local_48 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_1468c5283;
          local_70 = FUN_142809da0;
          local_78 = L"Engine";
          local_80 = 0x400000000;
          local_88 = 0x10000000;
          local_90 = 8;
          local_98 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        puVar5 = (ulonglong *)param_2[4];
        if (puVar5 == (ulonglong *)0x0) {
          puVar8 = (ulonglong *)0x0;
        }
        else {
          iVar1 = *(int *)(lVar12 + 0x38);
          do {
            if ((*(int *)(puVar5[2] + 0x38) < iVar1) ||
               (puVar8 = puVar5,
               *(longlong *)(*(longlong *)(puVar5[2] + 0x30) + (longlong)iVar1 * 8) != lVar12 + 0x30
               )) {
              puVar8 = (ulonglong *)0x0;
            }
          } while ((puVar8 == (ulonglong *)0x0) &&
                  (puVar5 = (ulonglong *)puVar5[4], puVar5 != (ulonglong *)0x0));
        }
        cVar2 = (**(code **)(*param_3 + 0x388))(param_3,puVar8);
      }
    }
    uVar6 = 0;
    if (param_2 != (ulonglong *)0x0) {
      uVar9 = *(uint *)((longlong)param_2 + 0xc);
      uVar10 = (ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        puVar8 = (ulonglong *)(ulonglong)(uVar9 >> 0x10);
        lVar12 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (longlong)puVar8 * 8);
      }
      else {
        lVar12 = 0;
      }
      uVar6 = (ulonglong)*(uint *)(lVar12 + 0x10);
      if (*(uint *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar9 = DAT_14c964868 + 1;
        unaff_RBP = (ulonglong)uVar9;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar13) {
          puVar8 = (ulonglong *)0x23d;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        unaff_RBP);
        }
        LOCK();
        uVar4 = *(uint *)(lVar12 + 0x10);
        bVar13 = uVar4 == 0;
        if (bVar13) {
          *(uint *)(lVar12 + 0x10) = uVar9;
          uVar4 = 0;
        }
        UNLOCK();
        uVar6 = (ulonglong)uVar4;
        if (bVar13) {
          uVar6 = unaff_RBP;
        }
      }
    }
    if ((int)param_3[0x28c] == *(int *)((longlong)param_3 + 0x148c)) {
LAB_14368a712:
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = param_3 + 0x292;
      if ((longlong *)param_3[0x293] != (longlong *)0x0) {
        plVar7 = (longlong *)param_3[0x293];
      }
      uVar9 = *(uint *)((longlong)plVar7 +
                       (ulonglong)((int)param_3[0x294] - 1U & ((uint)uVar6 ^ (uint)uVar10)) * 4);
      puVar8 = (ulonglong *)(ulonglong)uVar9;
      if (uVar9 == 0xffffffff) goto LAB_14368a712;
      plVar7 = (longlong *)0x0;
      do {
        puVar8 = (ulonglong *)(param_3[0x28b] + (longlong)(int)puVar8 * 0x18);
        if (*puVar8 == (uVar10 | uVar6 << 0x20)) {
          if (puVar8 == (ulonglong *)0x0) goto LAB_14368a712;
          plVar7 = (longlong *)puVar8[1];
          goto LAB_14368a606;
        }
        puVar5 = puVar8 + 2;
        puVar8 = (ulonglong *)(ulonglong)(uint)*puVar5;
      } while ((uint)*puVar5 != 0xffffffff);
      puVar8 = (ulonglong *)&DAT_ffffffff;
    }
LAB_14368a606:
    if (cVar2 != '\x01' || plVar7 != (longlong *)0x0) {
      if (plVar7 != (longlong *)0x0) goto LAB_14368a671;
      goto LAB_14368a6ac;
    }
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_48 = (code *)(ulonglong)DAT_14c892cd8;
    plVar7 = (longlong *)FUN_141364a4a(param_3,&local_48,2,0xffffffff);
    if (plVar7 == (longlong *)0x0) goto LAB_14368a6ac;
    puVar8 = param_2;
    FUN_1434aa0b0(plVar7,param_2,0);
LAB_14368a671:
    if ((*(byte *)(plVar7 + 6) & 2) != 0) goto LAB_14368a6ac;
    lVar12 = FUN_1434ae400(plVar7);
    uVar10 = CONCAT71((int7)(unaff_RBP >> 8),0 < lVar12);
    if ((cVar2 == '\0') && ((char)param_3[0x2d8] == '\0')) {
      (**(code **)(*plVar7 + 0x2b8))
                (plVar7,CONCAT71((int7)((ulonglong)puVar8 >> 8),
                                 *(char *)((longlong)param_2 + 0x61) << 2) & 0xffffffffffffff04);
    }
  }
  if (puVar11 != (ulonglong *)0x0) {
    FUN_1478c0b8c(puVar11);
  }
LAB_14368a6bb:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14368a920 FUN_14368a920 body=1052 status=ok
// SIG undefined FUN_14368a920(void)

undefined8
FUN_14368a920(longlong param_1,longlong param_2,longlong param_3,void *param_4,int param_5)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  void *local_98;
  undefined8 *local_90;
  undefined8 **local_88;
  ulonglong uStack_80;
  int local_78;
  undefined8 *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x1b8);
  local_98 = param_4;
  local_68 = param_3;
  if (param_3 == 0) {
    uVar10 = 0;
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(param_3 + 0xc);
    uVar10 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar9 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar9 = *(uint *)(lVar12 + 0x10);
      bVar13 = uVar9 == 0;
      if (bVar13) {
        *(uint *)(lVar12 + 0x10) = uVar6;
        uVar9 = 0;
      }
      UNLOCK();
      if (bVar13) {
        uVar9 = uVar6;
      }
    }
  }
  uVar6 = 0;
  if (*(int *)(lVar11 + 0x58) == *(int *)(lVar11 + 0x84)) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    lVar12 = lVar11 + 0x88;
    if (*(longlong *)(lVar11 + 0x90) != 0) {
      lVar12 = *(longlong *)(lVar11 + 0x90);
    }
    iVar4 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar11 + 0x98) - 1U & (uVar9 ^ (uint)uVar10)) * 4
                    );
    local_a0 = param_1;
    if (iVar4 == -1) {
LAB_14368aa48:
      puVar8 = (undefined8 *)0x0;
      param_1 = local_a0;
    }
    else {
      lVar12 = *(longlong *)(lVar11 + 0x50);
      puVar8 = (undefined8 *)0x0;
      do {
        lVar2 = (longlong)iVar4;
        local_90 = *(undefined8 **)(lVar12 + lVar2 * 0x18);
        local_60 = (longlong *)(uVar10 | (ulonglong)uVar9 << 0x20);
        cVar1 = FUN_14472ecf8(&local_90,&local_60);
        lVar12 = *(longlong *)(lVar11 + 0x50);
        param_1 = local_a0;
        if (cVar1 != '\0') {
          lVar12 = lVar12 + lVar2 * 0x18;
          if (lVar12 == 0) goto LAB_14368aa48;
          puVar8 = *(undefined8 **)(lVar12 + 8);
          break;
        }
        iVar4 = *(int *)(lVar12 + 0x10 + lVar2 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_70 = puVar8;
  uVar9 = 0;
  if (param_3 != 0) {
    uVar6 = *(uint *)(param_3 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar9 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar9 = *(uint *)(lVar11 + 0x10);
      bVar13 = uVar9 == 0;
      if (bVar13) {
        *(uint *)(lVar11 + 0x10) = uVar7;
        uVar9 = 0;
      }
      UNLOCK();
      if (bVar13) {
        uVar9 = uVar7;
      }
    }
  }
  _Src = local_98;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar11 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xb0);
    }
    iVar4 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & (uVar9 ^ uVar6)) * 4);
    if (iVar4 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x70);
      do {
        if (*(longlong *)(lVar11 + (longlong)iVar4 * 0x30) == CONCAT44(uVar9,uVar6)) {
          uVar3 = 0;
          goto LAB_14368abac;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x30 + lVar11 + 0x28);
      } while (iVar4 != -1);
    }
  }
  if (param_3 == 0) {
    local_60._0_4_ = 0;
    iVar4 = 0;
    uVar9 = (uint)local_60;
  }
  else {
    uVar9 = *(uint *)(param_3 + 0xc);
    local_60 = (longlong *)(ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar4 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar4 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      uVar9 = (uint)local_60;
      if (bVar13) {
        iVar4 = iVar5;
      }
    }
  }
  local_60._0_4_ = uVar9;
  local_90 = &local_60;
  local_60 = (longlong *)CONCAT44(iVar4,(uint)local_60);
  local_88 = &local_70;
  FUN_147ce9892(param_1 + 0x20,local_4c,&local_90);
  local_88 = (undefined8 **)0x0;
  local_90 = local_70;
  local_78 = param_5;
  uVar9 = (int)(param_5 + 7U) >> 3;
  uStack_80 = (ulonglong)uVar9;
  if (7 < param_5 + 7U) {
    FUN_1447403be(&local_88,0);
  }
  memcpy(local_88,_Src,(longlong)(int)uVar9);
  local_60 = &local_68;
  local_58 = &local_90;
  FUN_147ce9bfc((longlong *)(param_1 + 0x70),local_4c);
  if (local_88 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  uVar3 = 1;
LAB_14368abac:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14368ad3e FUN_14368ad3e body=3515 status=ok
// SIG undefined FUN_14368ad3e(void)

/* WARNING: Removing unreachable block (ram,0x00014368b88d) */

ulonglong FUN_14368ad3e(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       byte param_5,longlong param_6,float *param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ushort uVar13;
  undefined2 *puVar14;
  float *pfVar15;
  undefined8 uVar16;
  uint uVar17;
  bool bVar18;
  byte bVar19;
  undefined ***pppuVar20;
  undefined7 uVar21;
  byte bVar22;
  ushort uVar23;
  ulonglong uVar24;
  longlong lVar25;
  float fVar26;
  undefined1 auStack_208 [47];
  byte local_1d9;
  longlong local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  uint local_1bc;
  float *local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0 [4];
  undefined8 local_190;
  undefined8 *local_188;
  int local_180;
  ulonglong local_178;
  int local_170;
  undefined2 *local_168;
  undefined8 uStack_160;
  uint local_154;
  float local_150;
  undefined4 local_14c;
  undefined **local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  int iStack_114;
  undefined8 uStack_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  longlong local_d0;
  longlong local_b8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1c8 = param_4;
  if ((*(byte *)((longlong)param_3 + 0x29) & 2) == 0) {
    cVar6 = (**(code **)(*param_3 + 0x38))(param_3);
    if (cVar6 == '\0') {
      local_1d0 = param_1 + 0x8a0;
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x170))();
      if (cVar6 == '\x01') {
        uVar16 = 8;
      }
      else {
        if ((*(char *)(param_1 + 0x17e) == '\0') &&
           (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x68))(), cVar6 == '\0'))
        goto LAB_14368adab;
        local_14c = 0;
        puVar3 = (ulonglong *)param_3[1];
        puVar1 = (undefined4 *)*puVar3 + 1;
        if ((undefined4 *)puVar3[1] < puVar1) {
          if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
            (**(code **)(*param_3 + 0x170))(param_3,&local_14c);
          }
          else {
            FUN_14572512c(param_3,&local_14c);
          }
        }
        else {
          local_14c = *(undefined4 *)*puVar3;
          *puVar3 = (ulonglong)puVar1;
        }
        local_150 = 0.0;
        puVar3 = (ulonglong *)param_3[1];
        pfVar15 = (float *)*puVar3 + 1;
        if ((float *)puVar3[1] < pfVar15) {
          if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
            (**(code **)(*param_3 + 0x170))(param_3,&local_150);
          }
          else {
            FUN_14572512c(param_3,&local_150);
          }
        }
        else {
          local_150 = *(float *)*puVar3;
          *puVar3 = (ulonglong)pfVar15;
        }
        if (param_7 != (float *)0x0) {
          *param_7 = local_150;
        }
        uVar16 = *(undefined8 *)(param_2 + 0x68);
        FUN_1435b0440(uVar16,param_3);
        FUN_1435b0946(uVar16,param_3);
        fVar26 = *(float *)(param_1 + 0x178);
        local_1d9 = fVar26 < local_150 | *(byte *)(param_1 + 0x17e) | param_5;
        if (fVar26 <= local_150) {
          fVar26 = local_150;
        }
        *(float *)(param_1 + 0x178) = fVar26;
        local_1d8 = param_1;
        if (*(char *)(param_1 + 0x17f) == '\x01') {
          local_1b8 = (float *)((ulonglong)local_1b8 & 0xffffffff00000000);
          (**(code **)(*param_3 + 0x188))(param_3,&local_1b8);
          bVar19 = local_1d9;
          if ((uint)local_1b8 != 0) {
            plVar11 = (longlong *)(param_1 + 0x828);
            uVar17 = 0;
            do {
              local_148 = (undefined **)0x0;
              uStack_140 = 0;
              FUN_14021219d(param_3,&local_148);
              if (bVar19 != param_5) {
                lVar10 = FUN_147a67c9c(param_1,&local_148);
                iVar7 = *(int *)(param_1 + 0x830);
                *(uint *)(param_1 + 0x830) = iVar7 + 1U;
                if (*(uint *)(param_1 + 0x834) < iVar7 + 1U) {
                  FUN_1446f48e2(plVar11,iVar7);
                }
                *(undefined4 *)(*plVar11 + (longlong)iVar7 * 4) = *(undefined4 *)(lVar10 + 0x10);
                param_1 = local_1d8;
              }
              if (local_148 != (undefined **)0x0) {
                FUN_1400020a8();
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < (uint)local_1b8);
          }
        }
        else {
          local_154 = 0;
          (**(code **)(*param_3 + 0x188))(param_3,&local_154);
          if (local_154 != 0) {
            uVar17 = 0;
            do {
              local_1b8 = (float *)0x0;
              uStack_1b0 = (undefined ***)0x0;
              local_168 = (undefined2 *)0x0;
              uStack_160 = 0;
              local_148 = (undefined **)0x0;
              uStack_140 = 0;
              local_138 = 0;
              uStack_134 = 0;
              uStack_130 = 0;
              uStack_12c = 0x3ff00000;
              local_118 = 0;
              iStack_114 = 0;
              uStack_110 = 0;
              local_128 = 0;
              uStack_120 = 0;
              uStack_11c = 0;
              local_108 = 0x3ff0000000000000;
              uStack_100 = 0x3ff0000000000000;
              local_f8 = 0x3ff0000000000000;
              plStack_f0 = (longlong *)0x0;
              FUN_14021219d(param_3,&local_1b8);
              FUN_14021219d(param_3,&local_168);
              FUN_1400f4f7e(param_3,&local_148);
              FUN_14480c34d(param_3,&local_128);
              FUN_14480c34d(param_3);
              if ((*(byte *)(param_3 + 5) & 1) != 0) {
                uStack_110 = 0;
                plStack_f0 = (longlong *)0x0;
              }
              iVar7 = *(int *)(param_1 + 0x14c);
              if ((iVar7 == 0) || (uVar2 = *(uint *)(param_1 + 0x148), (int)uVar2 < 0)) {
LAB_14368b47e:
                lVar10 = 0;
              }
              else {
                lVar10 = 0;
                if ((int)uVar2 < DAT_14c9647dc) {
                  plVar11 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                  if (((plVar11 == (longlong *)0x0) || ((int)plVar11[2] != iVar7)) ||
                     ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_14368b47e;
                  lVar10 = *plVar11;
                }
              }
              if ((longlong)*(int *)(lVar10 + 0x90) == 0) {
LAB_14368b319:
                if (iVar7 == 0) {
LAB_14368b485:
                  uVar16 = 0;
                }
                else {
                  uVar2 = *(uint *)(param_1 + 0x148);
                  if ((int)uVar2 < 0) goto LAB_14368b485;
                  uVar16 = 0;
                  if ((int)uVar2 < DAT_14c9647dc) {
                    puVar12 = (undefined8 *)
                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                    if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != iVar7)) ||
                       ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_14368b485;
                    uVar16 = *puVar12;
                  }
                }
                plVar9 = (longlong *)FUN_147cdfb45(uVar16);
                (**(code **)(*plVar9 + 0x2c0))(plVar9,1);
                FUN_14039914a(plVar9,1);
                *(byte *)((longlong)plVar9 + 0x10a) = *(byte *)((longlong)plVar9 + 0x10a) & 0xfb;
                *(byte *)(plVar9 + 0x37) = *(byte *)(plVar9 + 0x37) | 3;
                pppuVar20 = &local_148;
                plVar11 = plVar9 + 0x10;
                for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *plVar11 = (longlong)*pppuVar20;
                  pppuVar20 = pppuVar20 + 1;
                  plVar11 = plVar11 + 1;
                }
                puVar14 = &DAT_149dfb77a;
                if ((int)uStack_160 != 0) {
                  puVar14 = local_168;
                }
                FUN_1446f470e(&local_178,puVar14,1);
                *(ulonglong *)((longlong)plVar9 + 0x54) = local_178;
                pfVar15 = (float *)&DAT_149dfb77a;
                if ((int)uStack_1b0 != 0) {
                  pfVar15 = local_1b8;
                }
                FUN_1446f470e(&local_190,pfVar15);
                FUN_147b98faa(plVar9,local_190);
                if ((*(int *)(local_1d8 + 0x14c) == 0) ||
                   (uVar2 = *(uint *)(local_1d8 + 0x148), (int)uVar2 < 0)) {
LAB_14368b48c:
                  uVar16 = 0;
                }
                else {
                  uVar16 = 0;
                  if ((int)uVar2 < DAT_14c9647dc) {
                    puVar12 = (undefined8 *)
                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                    if (((puVar12 == (undefined8 *)0x0) ||
                        (*(int *)(puVar12 + 2) != *(int *)(local_1d8 + 0x14c))) ||
                       ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_14368b48c;
                    uVar16 = *puVar12;
                  }
                }
                FUN_140831bbe(uVar16,plVar9);
              }
              else {
                plVar9 = *(longlong **)(lVar10 + 0x88);
                plVar11 = plVar9 + *(int *)(lVar10 + 0x90);
                local_1bc = uVar17;
                bVar5 = false;
                do {
                  plVar4 = (longlong *)*plVar9;
                  (**(code **)(*plVar4 + 0x2d0))(plVar4,&local_188);
                  FUN_1400021e4(&local_188,&local_178);
                  FUN_1400021e4((longlong)plVar4 + 0x54,&local_188);
                  if (local_170 == (int)uStack_1b0) {
                    if (1 < local_170) {
                      lVar10 = 0;
                      while( true ) {
                        uVar13 = *(ushort *)(local_178 + lVar10);
                        uVar8 = (ulonglong)uVar13;
                        uVar23 = *(ushort *)((longlong)local_1b8 + lVar10);
                        if (uVar13 != uVar23) break;
                        if (uVar13 == 0) goto LAB_14368b201;
LAB_14368b1be:
                        lVar10 = lVar10 + 2;
                      }
                      if ((uVar23 | uVar13) < 0x80) {
                        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                        uVar24 = (ulonglong)uVar23;
                        uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar24]) goto LAB_14368b1be;
                      }
                      if (uVar13 != uVar23) goto LAB_14368b284;
                    }
LAB_14368b201:
                    if (local_180 == (int)uStack_160) {
                      bVar18 = true;
                      if (1 < local_180) {
                        lVar10 = 0;
                        while( true ) {
                          uVar13 = *(ushort *)((longlong)local_188 + lVar10);
                          uVar8 = (ulonglong)uVar13;
                          uVar23 = *(ushort *)((longlong)local_168 + lVar10);
                          if (uVar13 != uVar23) {
                            if ((uVar23 | uVar13) < 0x80) {
                              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                              uVar24 = (ulonglong)uVar23;
                              uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
                              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar24])
                              goto LAB_14368b242;
                            }
                            bVar19 = 1;
                            if (uVar13 == uVar23) goto LAB_14368b28d;
                            goto LAB_14368b284;
                          }
                          if (uVar13 == 0) break;
LAB_14368b242:
                          lVar10 = lVar10 + 2;
                        }
                      }
                      bVar19 = 1;
                    }
                    else {
                      bVar18 = true;
                      bVar19 = 1;
                      if ((int)uStack_160 + local_180 != 1) goto LAB_14368b284;
                    }
                  }
                  else {
                    if ((int)uStack_1b0 + local_170 == 1) goto LAB_14368b201;
LAB_14368b284:
                    bVar19 = 0;
                    bVar18 = bVar5;
                  }
LAB_14368b28d:
                  if (local_188 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_178 != 0) {
                    FUN_1400020a8();
                  }
                  plVar9 = plVar9 + 1;
                  bVar5 = bVar18;
                } while (!(bool)(bVar19 | plVar9 == plVar11));
                uVar17 = local_1bc;
                if (!bVar18) {
                  iVar7 = *(int *)(local_1d8 + 0x14c);
                  param_1 = local_1d8;
                  goto LAB_14368b319;
                }
              }
              param_1 = local_1d8;
              if (local_168 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_1b8 != (float *)0x0) {
                FUN_1400020a8();
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < local_154);
          }
        }
        if ((*(byte *)((longlong)param_3 + 0x29) & 2) == 0) {
          local_168 = (undefined2 *)0x0;
          if (*(char *)(param_1 + 0x17f) == '\x01') {
            FUN_1408383eb(param_3,&local_168);
          }
          fVar26 = local_150;
          if (param_5 == 0) {
            (**(code **)(*param_3 + 0x188))(param_3,&local_178);
            if ((int)local_178 != 0) {
              lVar10 = param_1 + 0x940;
              do {
                local_1b8 = (float *)0x0;
                (**(code **)(*param_3 + 400))(param_3,&local_1b8);
                uVar8 = local_178 & 0xffffffff;
                FUN_144a99d0c(&local_148,0);
                (**(code **)(*param_3 + 0x170))(param_3,local_b8,uVar8 + 7 >> 3);
                FUN_147cdd036(param_1,&local_148);
                plVar11 = (longlong *)
                          FUN_147ce94c0(lVar10,(int)((ulonglong)local_1b8 >> 0x20) * 0x17 +
                                               (int)local_1b8,&local_1b8);
                lVar25 = FUN_14001cc68(0xb8,0x10);
                FUN_146821c8a(lVar25,&local_148);
                *(float *)(lVar25 + 0xb0) = fVar26;
                iVar7 = (int)plVar11[1];
                *(uint *)(plVar11 + 1) = iVar7 + 1U;
                if (*(uint *)((longlong)plVar11 + 0xc) < iVar7 + 1U) {
                  FUN_1456bd870(plVar11,iVar7);
                }
                *(longlong *)(*plVar11 + (longlong)iVar7 * 8) = lVar25;
                local_148 = &PTR_FUN_149e37220;
                if (local_b8 != 0) {
                  FUN_1400020a8();
                }
                plVar11 = plStack_f0;
                param_1 = local_1d8;
                local_148 = &PTR__purecall_149e35f70;
                if (plStack_f0 != (longlong *)0x0) {
                  if (*plStack_f0 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(plVar11);
                }
                lVar25 = local_d0;
                if (local_d0 != 0) {
                  if (*(longlong *)(local_d0 + 0x40) != 0) {
                    FUN_1400020a8();
                  }
                  FUN_1400020a8(lVar25);
                }
                (**(code **)(*param_3 + 0x188))(param_3,&local_178);
              } while ((int)local_178 != 0);
            }
          }
          else {
            lVar10 = (**(code **)(*param_3 + 0x28))(param_3);
            (**(code **)(*param_3 + 0x1a0))(param_3,lVar10 + (longlong)local_168);
          }
          local_178 = 0;
          if (*(char *)(param_1 + 0x181) == '\x01') {
            FUN_1408383eb(param_3,&local_178);
            if ((longlong)local_178 < 1 || param_5 != 0) {
              lVar10 = (**(code **)(*param_3 + 0x28))(param_3);
              (**(code **)(*param_3 + 0x1a0))(param_3,lVar10 + local_178);
            }
            else {
              local_128 = 0;
              uStack_120 = 0;
              local_148 = (undefined **)0x0;
              uStack_140 = 0;
              uStack_11c = 0x80;
              local_118 = 0xffffffff;
              iStack_114 = 0;
              local_108 = 0;
              uStack_100 = uStack_100 & 0xffffffff00000000;
              FUN_147ce8cd2(param_3,&local_148);
              if (iStack_114 < (int)uStack_140) {
                local_1b8 = &local_150;
                uStack_1b0 = &local_148;
                FUN_147cea134(param_1 + 0x990,&local_188);
              }
              uStack_100 = uStack_100 & 0xffffffff00000000;
              if (local_108 != 0) {
                FUN_1400020a8();
              }
              FUN_145c4086e(&local_148);
            }
          }
          local_1b8 = (float *)0x0;
          uStack_1b0 = (undefined ***)0x0;
          local_1a8 = local_150;
          uStack_1a4 = local_14c;
          local_1a0[0] = 0xffffffff;
          do {
            while( true ) {
              if ((param_6 != 0) &&
                 (lVar10 = (**(code **)(*param_3 + 0x28))(param_3), param_6 <= lVar10)) {
                bVar22 = 1;
                bVar19 = 0;
                uVar21 = 0;
                goto LAB_14368b974;
              }
              if (*(char *)(param_1 + 0x17f) == '\x01') {
                (**(code **)(*param_3 + 0x188))(param_3,local_1a0);
              }
              uVar8 = (ulonglong)local_148 >> 0x20;
              local_148 = (undefined **)((ulonglong)local_148 & 0xffffffff00000000);
              puVar3 = (ulonglong *)param_3[1];
              puVar1 = (undefined4 *)*puVar3 + 1;
              if ((undefined4 *)puVar3[1] < puVar1) {
                if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_3 + 0x170))(param_3,&local_148,4);
                }
                else {
                  FUN_14572512c(param_3,&local_148);
                }
              }
              else {
                local_148 = (undefined **)CONCAT44((int)uVar8,*(undefined4 *)*puVar3);
                *puVar3 = (ulonglong)puVar1;
              }
              if ((*(byte *)((longlong)param_3 + 0x29) & 2) != 0) goto LAB_14368b92b;
              if ((uint)local_148 == 0) {
                uVar21 = (undefined7)((ulonglong)local_1a0 >> 8);
                bVar19 = 1;
                bVar22 = 1;
                goto LAB_14368b974;
              }
              if (0x800 < (uint)local_148) goto LAB_14368b92b;
              if (local_1d9 == 0) break;
              FUN_140393c76(&local_1b8,(ulonglong)local_148 & 0xffffffff,0);
              (**(code **)(*param_3 + 0x170))(param_3,local_1b8);
              if ((*(byte *)((longlong)param_3 + 0x29) & 2) != 0) goto LAB_14368b92b;
              iVar7 = (int)local_1c8[1];
              *(uint *)(local_1c8 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)local_1c8 + 0xc) < iVar7 + 1U) {
                FUN_147cea62c(local_1c8,iVar7);
              }
              lVar10 = *local_1c8;
              lVar25 = (longlong)iVar7 * 0x20;
              *(undefined8 *)(lVar10 + lVar25) = 0;
              *(float **)(lVar10 + lVar25) = local_1b8;
              *(int *)(lVar10 + 8 + lVar25) = (int)uStack_1b0;
              *(undefined4 *)(lVar10 + 0xc + lVar25) = uStack_1b0._4_4_;
              *(undefined4 *)(lVar10 + 0x18 + lVar25) = local_1a0[0];
              *(ulonglong *)(lVar10 + 0x10 + lVar25) = CONCAT44(uStack_1a4,local_1a8);
              local_1b8 = (float *)0x0;
              uStack_1b0 = (undefined ***)0x0;
              param_1 = local_1d8;
            }
            lVar10 = (**(code **)(*param_3 + 0x28))(param_3);
            (**(code **)(*param_3 + 0x1a0))(param_3,(int)(uint)local_148 + lVar10);
          } while ((*(byte *)((longlong)param_3 + 0x29) & 2) == 0);
LAB_14368b92b:
          FUN_147a60036(&local_148,7);
          FUN_146efbfa6(local_1d0,&local_148);
          lVar10 = CONCAT44(uStack_11c,uStack_120);
          if (lVar10 != 0) {
            (**(code **)(lVar10 + -0x10))(lVar10 + -0x10);
          }
          if (CONCAT44(uStack_12c,uStack_130) != 0) {
            FUN_1400020a8();
          }
          uVar21 = (undefined7)((ulonglong)&local_148 >> 8);
          bVar19 = 1;
          bVar22 = 0;
LAB_14368b974:
          if (local_1b8 != (float *)0x0) {
            FUN_1400020a8();
          }
          uVar8 = CONCAT71(uVar21,bVar19 & bVar22);
          goto LAB_14368b986;
        }
        uVar16 = 7;
      }
      FUN_147a60036(&local_148,uVar16);
      param_1 = local_1d0;
      goto LAB_14368ba04;
    }
  }
  else {
    FUN_147a60036(&local_148,7);
    param_1 = param_1 + 0x8a0;
LAB_14368ba04:
    FUN_146efbfa6(param_1,&local_148);
    lVar10 = CONCAT44(uStack_11c,uStack_120);
    if (lVar10 != 0) {
      (**(code **)(lVar10 + -0x10))(lVar10 + -0x10);
    }
    if (CONCAT44(uStack_12c,uStack_130) != 0) {
      FUN_1400020a8();
    }
  }
LAB_14368adab:
  uVar8 = 0;
LAB_14368b986:
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14368bafa FUN_14368bafa body=1142 status=ok
// SIG undefined FUN_14368bafa(void)

void FUN_14368bafa(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_98 [32];
  LARGE_INTEGER *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 local_5c;
  LARGE_INTEGER local_58;
  double local_50;
  undefined1 local_48 [4];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x240) == 1) {
    if (param_3 == 0) {
      uVar9 = 0;
      uVar1 = 0;
    }
    else {
      uVar9 = *(uint *)(param_3 + 0xc);
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar1 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar1 = *(uint *)(lVar10 + 0x10);
        bVar12 = uVar1 == 0;
        if (bVar12) {
          *(uint *)(lVar10 + 0x10) = uVar7;
          uVar1 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar1 = uVar7;
        }
      }
    }
    if (*(int *)(param_2 + 0x1460) != *(int *)(param_2 + 0x148c)) {
      lVar10 = param_2 + 0x1490;
      if (*(longlong *)(param_2 + 0x1498) != 0) {
        lVar10 = *(longlong *)(param_2 + 0x1498);
      }
      iVar4 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_2 + 0x14a0) - 1U & (uVar1 ^ uVar9)) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)(*(longlong *)(param_2 + 0x1458) + (longlong)iVar4 * 0x18);
          if (*plVar5 == CONCAT44(uVar1,uVar9)) {
            if (((plVar5 != (longlong *)0x0) && (lVar10 = plVar5[1], lVar10 != 0)) &&
               (*(int *)(lVar10 + 0x34) != -1)) {
              if (param_3 == 0) {
                uVar9 = 0;
                uVar1 = 0;
              }
              else {
                uVar9 = *(uint *)(param_3 + 0xc);
                if ((int)uVar9 < DAT_14c9647dc) {
                  lVar8 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
                }
                else {
                  lVar8 = 0;
                }
                uVar1 = *(uint *)(lVar8 + 0x10);
                if (*(uint *)(lVar8 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar7 = DAT_14c964868 + 1;
                  bVar12 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar12) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar7);
                  }
                  LOCK();
                  uVar1 = *(uint *)(lVar8 + 0x10);
                  bVar12 = uVar1 == 0;
                  if (bVar12) {
                    *(uint *)(lVar8 + 0x10) = uVar7;
                    uVar1 = 0;
                  }
                  UNLOCK();
                  if (bVar12) {
                    uVar1 = uVar7;
                  }
                }
              }
              if (*(int *)(param_1 + 0x350) != *(int *)(param_1 + 0x37c)) {
                lVar8 = param_1 + 0x380;
                if (*(longlong *)(param_1 + 0x388) != 0) {
                  lVar8 = *(longlong *)(param_1 + 0x388);
                }
                iVar4 = *(int *)(lVar8 + (ulonglong)
                                         (*(int *)(param_1 + 0x390) - 1U & (uVar1 ^ uVar9)) * 4);
                if (iVar4 != -1) {
                  goto LAB_14368bca0;
                }
              }
            }
            break;
          }
          iVar4 = (int)plVar5[2];
        } while (iVar4 != -1);
      }
    }
  }
  goto LAB_14368bedb;
  while (iVar4 = *(int *)((longlong)plVar5 + 0xc), iVar4 != -1) {
LAB_14368bca0:
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x348) + (longlong)iVar4 * 0x14);
    if (*plVar5 == CONCAT44(uVar1,uVar9)) {
      plVar11 = plVar5 + 1;
      if (plVar11 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
        iVar4 = (int)*plVar11;
        lVar8 = (longlong)iVar4;
        if (((-1 < lVar8) && (iVar4 < *(int *)(param_1 + 0x340))) &&
           (*(int *)(param_1 + 0x4e8) <= iVar4)) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x338) + 4 + lVar8 * 0xc);
          if (iVar4 == 0) {
LAB_14368bf01:
            lVar8 = 0;
          }
          else {
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0x338) + lVar8 * 0xc);
            lVar8 = 0;
            if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
              plVar5 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if ((plVar5 == (longlong *)0x0) ||
                 (((int)plVar5[2] != iVar4 || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
              goto LAB_14368bf01;
              lVar8 = *plVar5;
            }
          }
          if (lVar8 == param_3) {
            QueryPerformanceCounter(&local_58);
            lVar8 = DAT_14cad6ef8;
            local_58 = (LARGE_INTEGER)((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0);
            iVar4 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60);
            if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
              uVar6 = 0;
            }
            else if (iVar4 == 1) {
              DVar2 = FUN_140ad26c0();
              DVar3 = GetCurrentThreadId();
              uVar6 = (ulonglong)(DVar2 != DVar3);
            }
            else {
              uVar6 = 1;
            }
            fVar13 = *(float *)(lVar8 + uVar6 * 4);
            if (fVar13 < 0.0) {
              fVar13 = *(float *)(param_1 + 0x184);
            }
            local_50 = (double)fVar13 / 1000.0;
            local_5c = 0;
            local_70 = *(longlong *)(param_1 + 0x338) + (longlong)(int)*plVar11 * 0xc;
            local_68 = 1;
            local_78 = &local_58;
            FUN_143689c32(param_1,param_2);
            *(undefined8 *)(*(longlong *)(param_1 + 0x338) + (longlong)(int)*plVar11 * 0xc) = 0;
            local_44 = *(undefined4 *)(lVar10 + 0x34);
            FUN_1447cbafe(param_2 + 0x19a8,local_48,&local_44,0);
          }
        }
      }
      break;
    }
  }
LAB_14368bedb:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14368bf72 FUN_14368bf72 body=760 status=ok
// SIG undefined FUN_14368bf72(void)

void FUN_14368bf72(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_1449e2a3e(param_3);
  cVar5 = *(char *)(param_1 + 0x180);
  if (cVar4 == '\0') {
    if (cVar5 != '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x1b8);
      if (param_3 == 0) {
        uVar8 = 0;
        uVar6 = 0;
      }
      else {
        uVar8 = *(uint *)(param_3 + 0xc);
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar6 = *(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          uVar10 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar10);
          }
          LOCK();
          uVar6 = *(uint *)(lVar9 + 0x10);
          bVar12 = uVar6 == 0;
          if (bVar12) {
            *(uint *)(lVar9 + 0x10) = uVar10;
            uVar6 = 0;
          }
          UNLOCK();
          if (bVar12) {
            uVar6 = uVar10;
          }
        }
      }
      if (*(int *)(lVar2 + 0x58) != *(int *)(lVar2 + 0x84)) {
        lVar9 = lVar2 + 0x88;
        if (*(longlong *)(lVar2 + 0x90) != 0) {
          lVar9 = *(longlong *)(lVar2 + 0x90);
        }
        iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & (uVar6 ^ uVar8)) * 4);
        if (iVar7 != -1) {
          lVar9 = *(longlong *)(lVar2 + 0x50);
          do {
            lVar11 = (longlong)iVar7;
            local_58 = *(void **)(lVar9 + lVar11 * 0x18);
            local_48 = CONCAT44(uVar6,uVar8);
            cVar5 = FUN_14472ecf8(&local_58,&local_48);
            lVar9 = *(longlong *)(lVar2 + 0x50);
            if (cVar5 != '\0') {
              lVar9 = lVar9 + lVar11 * 0x18;
              if ((lVar9 != 0) && (local_58 = *(void **)(lVar9 + 8), local_58 != (void *)0x0)) {
                FUN_140325a06(param_1 + 0x5b8,&local_48,&local_58,0);
              }
              break;
            }
            iVar7 = *(int *)(lVar9 + 0x10 + lVar11 * 0x18);
          } while (iVar7 != -1);
        }
      }
    }
  }
  else {
    FUN_144750a86(param_3,&local_58,0,0);
    iVar7 = *(int *)(param_1 + 0x9e8);
    *(uint *)(param_1 + 0x9e8) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x9ec) < iVar7 + 1U) {
      FUN_1447a1bd6((longlong *)(param_1 + 0x9e0),iVar7);
    }
    pvVar3 = local_58;
    lVar2 = *(longlong *)(param_1 + 0x9e0);
    lVar11 = (longlong)iVar7 * 0x10;
    puVar1 = (undefined8 *)(lVar2 + lVar11);
    *(undefined8 *)(lVar2 + lVar11) = 0;
    lVar9 = (longlong)local_50;
    *(int *)(lVar2 + 8 + lVar11) = local_50;
    if (lVar9 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,local_50,0);
      memcpy((void *)*puVar1,pvVar3,lVar9 * 2);
    }
    if (cVar5 != '\0') {
      iVar7 = *(int *)(param_1 + 0x560);
      *(uint *)(param_1 + 0x560) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x564) < iVar7 + 1U) {
        FUN_1447a1bd6((longlong *)(param_1 + 0x558),iVar7);
      }
      pvVar3 = local_58;
      lVar2 = *(longlong *)(param_1 + 0x558);
      lVar9 = (longlong)iVar7 * 0x10;
      puVar1 = (undefined8 *)(lVar2 + lVar9);
      *(undefined8 *)(lVar2 + lVar9) = 0;
      *(int *)(lVar2 + 8 + lVar9) = local_50;
      if ((longlong)local_50 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,local_50,0);
        memcpy((void *)*puVar1,pvVar3,(longlong)local_50 * 2);
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14368c26c FUN_14368c26c body=97 status=ok
// SIG undefined FUN_14368c26c(void)

undefined8 FUN_14368c26c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_2 != 0) &&
      (lVar1 = *(longlong *)(param_2 + 0x10), lVar3 = FUN_147be3f33(), lVar1 == lVar3)) &&
     (puVar2 = *(undefined8 **)(param_1 + 0x10), puVar2 != (undefined8 *)0x0)) {
    if (*(char *)(puVar2 + 0x14a) == '\x01') {
      if (*(int *)(puVar2 + 1) == 0) {
        return 1;
      }
      plVar4 = (longlong *)*puVar2;
    }
    else {
      if (*(int *)(puVar2 + 3) == 0) {
        return 1;
      }
      plVar4 = (longlong *)puVar2[2];
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
    }
  }
  return 1;
}



// FUNCTION 14368c2ce FUN_14368c2ce body=300 status=ok
// SIG undefined FUN_14368c2ce(void)

void FUN_14368c2ce(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  
  if (0xe < param_3 + 0xeU) {
    uVar4 = param_3 + 7U;
    if ((int)(param_3 + 7U) < 0) {
      uVar4 = param_3 + 0xeU;
    }
    if (0x800 < (uint)((int)uVar4 >> 3)) {
      FUN_140033559(".\\Runtime/Engine/Private/ReplayNetConnection.cpp",0x78,
                    L"UReplayNetConnection::LowLevelSend: CountBytes > MAX_REPLAY_PACKET.");
    }
    cVar1 = *(char *)(param_1 + 0x16c0);
    lVar3 = (ulonglong)(cVar1 != '\0') * 0x10 + param_1;
    plVar5 = (longlong *)(lVar3 + 0x24f8);
    iVar2 = *(int *)(lVar3 + 0x2500);
    *(uint *)(lVar3 + 0x2500) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x2504) < iVar2 + 1U) {
      FUN_147a73f5a(plVar5,iVar2);
    }
    FUN_147a73ef2((longlong)iVar2 * 0x28 + *plVar5,param_2,param_3,param_4);
    if (*(longlong *)(param_1 + 0x1d40) != 0) {
      lVar3 = FUN_147a6176e(param_1 + 0x1df0);
      *(int *)(*plVar5 + 0x24 + (longlong)iVar2 * 0x28) = *(int *)(lVar3 + 0x10) + 1;
      if (((*(longlong *)(param_1 + 0x1d38) != 0 && cVar1 == '\0') &&
          (*(char *)(param_1 + 0x1f70) == '\x01')) && (*(longlong *)(param_1 + 0x58) != 0)) {
        FUN_147bd708a(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x858));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14368c3fa FUN_14368c3fa body=69 status=ok
// SIG undefined FUN_14368c3fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c3fa(void)

{
  _DAT_14cb01a18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01a20,1);
  return;
}



// FUNCTION 14368c43f FUN_14368c43f body=69 status=ok
// SIG undefined FUN_14368c43f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c43f(void)

{
  _DAT_14cb01a30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01a38,1);
  return;
}



// FUNCTION 14368c484 FUN_14368c484 body=69 status=ok
// SIG undefined FUN_14368c484(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c484(void)

{
  _DAT_14cb01a40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c4c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01a48,1);
  return;
}



// FUNCTION 14368c4c9 FUN_14368c4c9 body=69 status=ok
// SIG undefined FUN_14368c4c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c4c9(void)

{
  _DAT_14cb01a58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c50b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01a60,1);
  return;
}



// FUNCTION 14368c50e FUN_14368c50e body=69 status=ok
// SIG undefined FUN_14368c50e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c50e(void)

{
  _DAT_14cb01a68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01a70,1);
  return;
}



// FUNCTION 14368c553 FUN_14368c553 body=69 status=ok
// SIG undefined FUN_14368c553(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c553(void)

{
  _DAT_14cb01a78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01a80,1);
  return;
}



// FUNCTION 14368c598 FUN_14368c598 body=69 status=ok
// SIG undefined FUN_14368c598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c598(void)

{
  _DAT_14cb01a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c5da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01a90,1);
  return;
}



// FUNCTION 14368c5dd FUN_14368c5dd body=69 status=ok
// SIG undefined FUN_14368c5dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c5dd(void)

{
  _DAT_14cb01aa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01aa8,1);
  return;
}



// FUNCTION 14368c622 FUN_14368c622 body=69 status=ok
// SIG undefined FUN_14368c622(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c622(void)

{
  _DAT_14cb01ab8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01ac0,1);
  return;
}



// FUNCTION 14368c667 FUN_14368c667 body=69 status=ok
// SIG undefined FUN_14368c667(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c667(void)

{
  _DAT_14cb01ad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01ad8,1);
  return;
}



// FUNCTION 14368c6ac FUN_14368c6ac body=69 status=ok
// SIG undefined FUN_14368c6ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c6ac(void)

{
  _DAT_14cb01ae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c6ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01ae8,1);
  return;
}



// FUNCTION 14368c6f1 FUN_14368c6f1 body=69 status=ok
// SIG undefined FUN_14368c6f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c6f1(void)

{
  _DAT_14cb01af8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01b00,1);
  return;
}



// FUNCTION 14368c736 FUN_14368c736 body=69 status=ok
// SIG undefined FUN_14368c736(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368c736(void)

{
  _DAT_14cb01b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014368c778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01b18,1);
  return;
}



// FUNCTION 14368c77c FUN_14368c77c body=252 status=ok
// SIG undefined FUN_14368c77c(void)

ulonglong FUN_14368c77c(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4,
                       int param_5,uint *param_6,char param_7)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  uint *local_38;
  char local_30;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb01a98 == 0) {
    if ((((DAT_14c7619e8 == 0 || param_7 != '\0') || ((*param_6 & 2) != 0)) ||
        (*(int *)(param_2 + 0x14) < 2)) || (*param_3 != param_5)) goto LAB_14368c827;
  }
  else {
    if (((param_7 != '\0') || (DAT_14c7619e8 == 0)) ||
       ((*param_3 != param_5 || ((uVar1 = *param_6, (uVar1 & 2) != 0 && (param_3[1] != param_5))))))
    {
LAB_14368c827:
      local_30 = param_7;
      local_38 = param_6;
      uVar1 = FUN_14368c87a(param_1,param_2,param_3 + 2);
      uVar2 = 3;
      if (uVar1 != 3) {
        *param_3 = param_5;
        if ((DAT_14cb01a98 != 0) && ((*param_6 & 2) != 0)) {
          param_3[1] = param_5;
        }
        uVar2 = (ulonglong)uVar1;
      }
      goto LAB_14368c85a;
    }
    if (((uVar1 & 2) != 0) || (*(int *)(param_2 + 0x14) == 0)) {
      local_24 = uVar1 | 0x80;
      local_38 = &local_24;
      local_30 = param_7;
      uVar2 = FUN_14368c87a(param_1,param_2,param_3 + 2);
      goto LAB_14368c85a;
    }
  }
  uVar2 = 0;
LAB_14368c85a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14368c87a FUN_14368c87a body=1752 status=ok
// SIG undefined FUN_14368c87a(void)

int FUN_14368c87a(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 uint *param_5,undefined1 param_6)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  int *local_a8;
  byte local_a0;
  byte local_9f;
  byte local_9e;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  longlong local_60;
  undefined2 local_58;
  byte local_56;
  byte local_55;
  undefined1 local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  bVar17 = *(byte *)(param_1 + 0x20);
  iVar11 = 1;
  if (((bVar17 & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    *(int *)(param_3 + 0x810) = *(int *)(param_3 + 0x810) + 1;
    lVar16 = param_3 + (longlong)(*(int *)(param_3 + 0x80c) % 0x40) * 0x20;
    plVar18 = (longlong *)(lVar16 + 8);
    *(undefined4 *)(lVar16 + 0x10) = 0;
    local_e8 = param_4;
    local_e0 = param_3;
    if (*(int *)(lVar16 + 0x14) != 1) {
      FUN_1448759c8(plVar18,1);
      bVar17 = *(byte *)(param_1 + 0x20);
    }
    local_4c = 0;
    uVar15 = *param_5;
    bVar14 = (byte)uVar15 >> 1;
    local_a0 = bVar14 & 1;
    bVar10 = (byte)(uVar15 >> 8) & 1;
    if ((uVar15 & 2) == 0) {
      bVar10 = 0;
    }
    local_98 = (longlong *)(param_1 + 0x28);
    local_90 = param_1 + 0x38;
    if (param_2 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = *(longlong *)(param_2 + 0x20);
    }
    lVar16 = param_1 + 200;
    local_70 = param_1 + 0xe8;
    local_d8 = plVar18;
    local_9f = bVar10;
    local_9e = bVar17;
    local_88 = param_2;
    local_80 = local_e0;
    if (*(ulonglong *)(local_e0 + 0x878) < 0xffffffff00000000) {
      puVar4 = (uint *)FUN_144b07724();
      uVar15 = *param_5;
    }
    else {
      puVar4 = (uint *)0x0;
    }
    local_58 = 0;
    if (param_2 == 0) {
      local_56 = 0;
    }
    else {
      local_56 = ((byte)*(undefined4 *)(param_2 + 0x1c) ^ (byte)uVar15) & 1;
    }
    local_55 = (byte)(uVar15 >> 0xb) & 1;
    local_54 = param_6;
    local_b8 = *(undefined8 *)(local_e0 + 0x818);
    local_b0 = local_d8;
    local_a8 = &local_4c;
    local_c0 = local_e8;
    local_68 = puVar4;
    local_60 = lVar16;
    if ((char)(byte)uVar15 < '\0') {
      if ((bVar17 & 1) != 0 && param_2 != 0) {
        FUN_143697bcf(&local_a0,&local_c0,4,param_2 + 1);
        FUN_143697bcf(&local_a0,&local_c0,9,param_2 + 2);
      }
    }
    else if (puVar4 == (uint *)0x0) {
      if (0 < *(int *)(param_1 + 0x30)) {
        iVar11 = 0;
        do {
          FUN_143697c48(iVar11,&local_a0,&local_c0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_98[1]);
      }
    }
    else {
      uVar15 = puVar4[8];
      uVar13 = CONCAT71((int7)((ulonglong)lVar16 >> 8),(byte)uVar15);
      if (((bVar17 & 1) != 0) && (((bVar14 & 1) != 0 || (local_56 != 0)))) {
        puVar5 = *(uint **)(puVar4 + 4);
        if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
          puVar5 = puVar4;
        }
        *puVar5 = *puVar5 | 0x10;
        *(byte *)(puVar4 + 8) = (byte)puVar4[8] | 2;
        puVar5 = *(uint **)(puVar4 + 4);
        if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
          puVar5 = puVar4;
        }
        *puVar5 = *puVar5 | 0x200;
        *(byte *)(puVar4 + 8) = (byte)puVar4[8] | 2;
      }
      if (bVar10 == 0) {
        if ((bVar14 & 0x3f < bVar17) == 1) {
          if (0 < (int)local_98[1]) {
            lVar16 = 0x20;
            uVar19 = 0;
            plVar18 = local_98;
            do {
              iVar11 = *(int *)(*plVar18 + lVar16);
              if (((iVar11 == 1) ||
                  (cVar3 = FUN_143697d78(uVar19 & 0xffffffff,uVar13 & 0xffffff01,&local_a0),
                  cVar3 != '\0')) ||
                 ((iVar11 == 0xe && ((local_78 != 0 && (iVar11 = FUN_146efd72c(), iVar11 == 1))))))
              {
                FUN_143697c48(uVar19 & 0xffffffff,&local_a0,&local_c0);
                plVar18 = local_98;
              }
              uVar19 = uVar19 + 1;
              lVar16 = lVar16 + 0x30;
            } while ((longlong)uVar19 < (longlong)(int)plVar18[1]);
          }
        }
        else if (((bVar17 & 0x20) == 0) || (((byte)uVar15 & 1) != 0)) {
          if (0 < (int)local_98[1]) {
            iVar11 = 0;
            plVar18 = local_98;
            do {
              cVar3 = FUN_143697d78(iVar11,uVar13 & 0xffffff01,&local_a0);
              if (cVar3 != '\0') {
                FUN_143697c48(iVar11,&local_a0,&local_c0);
                plVar18 = local_98;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)plVar18[1]);
          }
        }
        else {
          uVar15 = puVar4[6];
          if (uVar15 == 0) {
            uVar19 = 1;
            iVar11 = 0;
            uVar13 = 0;
            uVar7 = 0;
          }
          else {
            puVar5 = *(uint **)(puVar4 + 4);
            if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
              puVar5 = puVar4;
            }
            uVar7 = *puVar5;
            if (uVar7 == 0) {
              iVar11 = uVar15 + 0x1e;
              if (-1 < (int)(uVar15 - 1)) {
                iVar11 = uVar15 - 1;
              }
              uVar13 = 0;
              uVar19 = (ulonglong)(uint)(iVar11 >> 5);
              if (iVar11 >> 5 < 1) {
                uVar19 = uVar13;
              }
              iVar11 = 0;
              do {
                if (uVar19 == uVar13) goto LAB_14368cddb;
                iVar11 = iVar11 + 0x20;
                uVar7 = puVar5[uVar13 + 1];
                uVar13 = uVar13 + 1;
              } while (uVar7 == 0);
            }
            else {
              iVar11 = 0;
              uVar13 = 0;
            }
            uVar19 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar19 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar7 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if ((int)uVar15 <= (int)uVar7) {
              uVar7 = uVar15;
            }
          }
          if ((int)uVar7 < (int)uVar15) {
            uVar15 = 0xffffffff;
            do {
              FUN_143697c48(uVar7,&local_a0,&local_c0);
              uVar15 = ~(uint)uVar19 & uVar15;
              puVar5 = *(uint **)(puVar4 + 4);
              if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
                puVar5 = puVar4;
              }
              uVar2 = puVar4[6];
              iVar12 = (int)uVar13;
              lVar16 = (longlong)iVar12;
              uVar7 = puVar5[lVar16] & uVar15;
              if (uVar7 == 0) {
                iVar8 = uVar2 + 0x1e;
                if (-1 < (int)(uVar2 - 1)) {
                  iVar8 = uVar2 - 1;
                }
                iVar8 = iVar8 >> 5;
                iVar9 = iVar8;
                if (iVar8 < iVar12) {
                  iVar9 = iVar12;
                }
                if (iVar8 <= iVar12) break;
                lVar6 = 0;
                while( true ) {
                  iVar11 = iVar11 + 0x20;
                  uVar7 = puVar5[lVar16 + lVar6 + 1];
                  if (uVar7 != 0) break;
                  lVar6 = lVar6 + 1;
                  if (iVar9 - lVar16 == lVar6) goto LAB_14368cddb;
                }
                uVar13 = (ulonglong)(iVar12 + (int)lVar6 + 1);
                uVar15 = 0xffffffff;
              }
              uVar19 = (ulonglong)(-uVar7 & uVar7);
              uVar1 = uVar19 * 2 + 1;
              lVar16 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              uVar7 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            } while ((int)uVar7 < (int)uVar2);
          }
        }
      }
      else if (0 < (int)local_98[1]) {
        iVar11 = 0;
        do {
          FUN_143697c48(iVar11,&local_a0,&local_c0);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)local_98[1]);
      }
LAB_14368cddb:
      puVar4 = local_68;
      puVar5 = *(uint **)(local_68 + 4);
      if (*(uint **)(local_68 + 4) == (uint *)0x0) {
        puVar5 = local_68;
      }
      memset(puVar5,0,(longlong)(int)((int)(local_68[6] + 0x1f) >> 3 & 0xfffffffc));
      *(byte *)(puVar4 + 8) = (byte)puVar4[8] & 0xfc;
    }
    plVar18 = local_d8;
    iVar11 = local_4c;
    if (local_4c == 0) {
      iVar11 = (int)local_d8[1];
      if ((longlong)iVar11 == 0) {
        iVar11 = 1;
      }
      else {
        *(uint *)(local_d8 + 1) = iVar11 + 1U;
        if (*(uint *)((longlong)local_d8 + 0xc) < iVar11 + 1U) {
          FUN_14488eebe(local_d8,iVar11);
        }
        lVar16 = local_e0;
        *(undefined2 *)(*plVar18 + (longlong)iVar11 * 2) = 0;
        *(int *)(local_e0 + 0x80c) = *(int *)(local_e0 + 0x80c) + 1;
        FUN_1402a6ae6(local_e0 + 0x838);
        iVar12 = *(int *)(lVar16 + 0x808);
        iVar11 = local_4c;
        if (*(int *)(lVar16 + 0x80c) - iVar12 == 0x40) {
          uVar15 = iVar12 + 1;
          uVar7 = iVar12 + 0x40;
          if (-1 < (int)uVar15) {
            uVar7 = uVar15;
          }
          *(uint *)(lVar16 + 0x808) = uVar15;
          lVar6 = (longlong)(int)((iVar12 - (uVar7 & 0xffffffc0)) + 1) * 0x20 + lVar16;
          local_f8 = (longlong *)(lVar6 + 8);
          local_d0 = *local_f8;
          *local_f8 = 0;
          local_c8 = *(undefined4 *)(lVar6 + 0x10);
          local_c4 = *(undefined4 *)(lVar6 + 0x14);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          FUN_14039244a(param_1,local_e8,lVar16 + (longlong)(iVar12 % 0x40) * 0x20 + 8,&local_d0);
          iVar11 = local_4c;
          if (local_d0 != 0) {
            FUN_1400020a8();
            iVar11 = local_4c;
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 14368cf54 FUN_14368cf54 body=3109 status=ok
// SIG undefined FUN_14368cf54(void)

ulonglong FUN_14368cf54(longlong param_1,char *param_2,longlong *****param_3,longlong *****param_4,
                       undefined8 param_5,longlong param_6,longlong *****param_7,uint *****param_8)

{
  char *pcVar1;
  longlong ****pppplVar2;
  longlong ****pppplVar3;
  longlong ***ppplVar4;
  undefined8 *puVar5;
  uint ****ppppuVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  uint *****pppppuVar12;
  uint *****pppppuVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *****ppppplVar16;
  longlong *****ppppplVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_198 [32];
  uint ****local_178;
  uint ****local_170;
  uint ****local_168;
  undefined1 local_160;
  uint ****local_150;
  uint ****local_148;
  uint ****local_140;
  uint ****local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 uStack_120;
  uint ***local_118;
  undefined4 local_110;
  undefined4 local_10c;
  uint ***local_108;
  undefined8 uStack_100;
  longlong ****local_f8;
  undefined8 uStack_f0;
  uint ***local_e8;
  uint **local_e0;
  char *local_d8;
  longlong ****local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  int local_a0;
  undefined8 local_88;
  undefined4 local_80;
  uint ****local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((*(byte *)(param_1 + 0x20) & 0x10) != 0) || (*(int *)(param_1 + 0x30) == 0)) {
    uVar15 = 0;
    goto LAB_14368d8a4;
  }
  lVar14 = *(longlong *)(param_6 + 0x28);
  cVar7 = *(char *)(lVar14 + 0x16c0);
  local_108 = (uint ***)0x0;
  uStack_100 = 0;
  local_148 = (uint ****)CONCAT71(local_148._1_7_,cVar7);
  pppppuVar12 = param_8;
  if (*(uint *)(param_2 + 0x1c) != *(uint *)param_8) {
    local_150 = (uint ****)param_4;
    FUN_140a02e1c(param_1,param_2);
    ppppplVar17 = (longlong *****)(param_2 + 0x460);
    pppppuVar13 = *(uint ******)(param_2 + 0x460);
    param_2[0x460] = '\0';
    param_2[0x461] = '\0';
    param_2[0x462] = '\0';
    param_2[0x463] = '\0';
    param_2[0x464] = '\0';
    param_2[0x465] = '\0';
    param_2[0x466] = '\0';
    param_2[0x467] = '\0';
    lVar14 = *(longlong *)(param_2 + 0x468);
    uVar11 = *(undefined4 *)(param_2 + 0x46c);
    uStack_c0 = *(longlong *)(param_2 + 0x468);
    param_2[0x468] = '\0';
    param_2[0x469] = '\0';
    param_2[0x46a] = '\0';
    param_2[0x46b] = '\0';
    param_2[0x46c] = '\0';
    param_2[0x46d] = '\0';
    param_2[0x46e] = '\0';
    param_2[0x46f] = '\0';
    local_f8 = (longlong ****)0x0;
    uStack_f0 = (longlong *****)0x0;
    local_178 = &local_108;
    local_c8 = (longlong ****)pppppuVar13;
    FUN_144875696(param_1,&local_c8,param_2 + 0x470,&local_f8);
    param_4 = (longlong *****)local_150;
    if ((char)local_148 == '\0') {
      if (ppppplVar17 != &local_f8) {
        if (*ppppplVar17 != (longlong ****)0x0) {
          FUN_1400020a8();
        }
        puVar10 = &uStack_f0;
        puVar5 = &uStack_f0;
        *(longlong *****)(param_2 + 0x460) = local_f8;
        local_f8 = (longlong ****)0x0;
        *(undefined4 *)(param_2 + 0x468) = (undefined4)uStack_f0;
        uVar11 = uStack_f0._4_4_;
        goto LAB_14368d0e4;
      }
    }
    else {
      if (*ppppplVar17 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      puVar10 = &uStack_c0;
      puVar5 = &uStack_c0;
      *(uint ******)(param_2 + 0x460) = pppppuVar13;
      local_c8 = (longlong ****)0x0;
      *(int *)(param_2 + 0x468) = (int)lVar14;
      pppppuVar13 = (uint *****)0x0;
      param_4 = (longlong *****)local_150;
LAB_14368d0e4:
      *(undefined4 *)(param_2 + 0x46c) = uVar11;
      *(undefined4 *)puVar10 = 0;
      *(undefined4 *)((longlong)puVar5 + 4) = 0;
    }
    pppppuVar12 = (uint *****)local_f8;
    if ((uint *****)local_f8 != (uint *****)0x0) {
      FUN_1400020a8();
    }
    if (pppppuVar13 != (uint *****)0x0) {
      FUN_1400020a8();
      pppppuVar12 = pppppuVar13;
    }
    lVar14 = *(longlong *)(param_6 + 0x28);
    cVar7 = *(char *)(lVar14 + 0x16c0);
  }
  if (cVar7 == '\x01') {
    ppppplVar17 = (longlong *****)(param_2 + 0x450);
    iVar18 = *(int *)(param_2 + 0x458);
    if (iVar18 == 0) {
      iVar18 = *(int *)(param_3 + 0x101);
      if (*(int *)((longlong)param_3 + 0x80c) <= iVar18) goto LAB_14368d890;
      do {
        local_c8 = *(longlong *****)(param_2 + 0x450);
        param_2[0x450] = '\0';
        param_2[0x451] = '\0';
        param_2[0x452] = '\0';
        param_2[0x453] = '\0';
        param_2[0x454] = '\0';
        param_2[0x455] = '\0';
        param_2[0x456] = '\0';
        param_2[0x457] = '\0';
        uStack_c0 = *(longlong *)(param_2 + 0x458);
        param_2[0x458] = '\0';
        param_2[0x459] = '\0';
        param_2[0x45a] = '\0';
        param_2[0x45b] = '\0';
        param_2[0x45c] = '\0';
        param_2[0x45d] = '\0';
        param_2[0x45e] = '\0';
        param_2[0x45f] = '\0';
        local_178 = (uint ****)ppppplVar17;
        FUN_14039244a(param_1,param_4,param_3 + (longlong)(iVar18 % 0x40) * 4 + 1,&local_c8);
        if ((uint *****)local_c8 != (uint *****)0x0) {
          FUN_1400020a8();
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(int *)((longlong)param_3 + 0x80c));
      iVar18 = *(int *)(param_2 + 0x458);
    }
    if (0 < iVar18) {
      local_c8 = (longlong ****)0x0;
      uStack_c0 = 0;
      FUN_147ce0b34(param_1,param_4,ppppplVar17,&local_c8);
      if (ppppplVar17 != &local_c8) {
        if (*(longlong *)(param_2 + 0x450) != 0) {
          FUN_1400020a8();
        }
        *(longlong *****)(param_2 + 0x450) = local_c8;
        local_c8 = (longlong ****)0x0;
        *(int *)(param_2 + 0x458) = (int)uStack_c0;
        *(undefined4 *)(param_2 + 0x45c) = uStack_c0._4_4_;
        uStack_c0 = 0;
      }
      FUN_147ce0c36(param_1,ppppplVar17,param_2 + 0x470,&local_c8);
      if (0 < (int)uStack_c0) {
        local_178 = *(uint *****)(param_6 + 0x28);
        local_170 = (uint ****)param_7;
        local_168 = (uint ****)&local_c8;
        FUN_14368db7a(param_1);
        if ((uint *****)local_c8 != (uint *****)0x0) {
          FUN_1400020a8();
        }
        uVar15 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
        goto LAB_14368d892;
      }
      if ((uint *****)local_c8 != (uint *****)0x0) {
        FUN_1400020a8();
      }
    }
LAB_14368d890:
    uVar15 = 0;
  }
  else {
    if (*param_2 == '\x01') {
      uVar11 = (undefined4)
               CONCAT71((int7)((ulonglong)pppppuVar12 >> 8),0 < *(int *)(param_2 + 0x448));
    }
    else {
      uVar11 = 0;
    }
    iVar18 = *(int *)(param_3 + 0x102);
    iVar9 = *(int *)(param_2 + 0x14);
    *(int *)(param_2 + 0x14) = iVar18;
    if ((iVar9 == iVar18) ||
       (iVar18 = *(int *)(param_2 + 0x10), iVar18 == *(int *)((longlong)param_3 + 0x80c))) {
      if ((*(int *)(param_2 + 0xc) != 0 || (char)uVar11 != '\0') || ((int)uStack_100 != 0)) {
        iVar18 = *(int *)(param_2 + 0x10);
        goto LAB_14368d331;
      }
LAB_14368d879:
      local_178 = (uint ****)0x0;
      FUN_14368de66(param_1,param_2,param_4,lVar14);
      goto LAB_14368d890;
    }
LAB_14368d331:
    local_150 = (uint ****)CONCAT44(local_150._4_4_,uVar11);
    iVar9 = *(int *)(param_3 + 0x101);
    if (iVar18 <= iVar9) {
      *(int *)(param_2 + 0x10) = iVar9;
      iVar18 = iVar9;
    }
    iVar8 = *(int *)(param_2 + 8) % 0x20;
    ppppplVar17 = (longlong *****)(param_2 + (longlong)iVar8 * 0x20 + 0x38);
    iVar9 = *(int *)((longlong)param_3 + 0x80c);
    if (iVar18 < iVar9) {
      do {
        local_c8 = *ppppplVar17;
        *ppppplVar17 = (longlong ****)0x0;
        uStack_c0 = *(longlong *)(param_2 + (longlong)iVar8 * 0x20 + 0x40);
        pcVar1 = param_2 + (longlong)iVar8 * 0x20 + 0x40;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        local_178 = (uint ****)ppppplVar17;
        FUN_14039244a(param_1,param_4,param_3 + (longlong)(iVar18 % 0x40) * 4 + 1,&local_c8);
        if ((uint *****)local_c8 != (uint *****)0x0) {
          FUN_1400020a8();
        }
        iVar18 = iVar18 + 1;
        iVar9 = *(int *)((longlong)param_3 + 0x80c);
      } while (iVar18 < iVar9);
    }
    ppppuVar6 = local_150;
    if (0 < (int)uStack_100) {
      local_c8 = *ppppplVar17;
      *ppppplVar17 = (longlong ****)0x0;
      uStack_c0 = *(longlong *)(param_2 + (longlong)iVar8 * 0x20 + 0x40);
      pcVar1 = param_2 + (longlong)iVar8 * 0x20 + 0x40;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      local_178 = (uint ****)ppppplVar17;
      FUN_14039244a(param_1,param_4,&local_108,&local_c8);
      if ((uint *****)local_c8 != (uint *****)0x0) {
        FUN_1400020a8();
      }
      iVar9 = *(int *)((longlong)param_3 + 0x80c);
    }
    *(int *)(param_2 + 0x10) = iVar9;
    if (*(int *)(param_2 + (longlong)iVar8 * 0x20 + 0x40) < 1) {
      lVar14 = *(longlong *)(param_6 + 0x28);
      if ((~(byte)ppppuVar6 & *(int *)(param_2 + 0xc) < 1) != 0) goto LAB_14368d879;
    }
    else {
      lVar14 = *(longlong *)(param_6 + 0x28);
    }
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    local_178 = (uint ****)ppppplVar17;
    FUN_14368de66(param_1,param_2,param_4,lVar14);
    if ((byte)ppppuVar6 != 0) {
      if (0 < *(int *)(param_2 + 0x448)) {
        lVar19 = 8;
        lVar14 = 0;
        local_150 = (uint ****)param_3;
        do {
          local_c8 = *ppppplVar17;
          *ppppplVar17 = (longlong ****)0x0;
          uStack_c0 = *(longlong *)(param_2 + (longlong)iVar8 * 0x20 + 0x40);
          pcVar1 = param_2 + (longlong)iVar8 * 0x20 + 0x40;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          local_178 = (uint ****)ppppplVar17;
          FUN_14039244a(param_1,param_4,*(longlong *)(param_2 + 0x440) + lVar19,&local_c8);
          if ((uint *****)local_c8 != (uint *****)0x0) {
            FUN_1400020a8();
          }
          lVar14 = lVar14 + 1;
          lVar19 = lVar19 + 0x20;
          param_3 = (longlong *****)local_150;
        } while (lVar14 < *(int *)(param_2 + 0x448));
      }
      FUN_1404426db(*(undefined8 *)(param_2 + 0x440));
      param_2[0x448] = '\0';
      param_2[0x449] = '\0';
      param_2[0x44a] = '\0';
      param_2[1099] = '\0';
      if (*(int *)(param_2 + 0x44c) != 0) {
        FUN_1417ecfac(param_2 + 0x440);
      }
    }
    if ((((*(byte *)(*(longlong *)(param_6 + 0x28) + 0xa4) & 2) == 0) && (DAT_14c7619e0 != 0)) &&
       (*(char *)(param_3 + 0x10e) == '\0')) {
      local_140 = (uint ****)(param_3 + 0x107);
      pppppuVar12 = *(uint ******)(*(longlong *)(*(longlong *)(param_6 + 0x28) + 0x58) + 0x838);
      local_150 = (uint ****)CONCAT71(local_150._1_7_,DAT_14cb01a10 == 1);
      local_c8 = (longlong ****)&local_78;
      local_70 = 0;
      uStack_c0 = param_1 + 0x38;
      local_a0 = *(int *)(param_1 + 0x40) + -1;
      local_b8 = param_1 + 0x48;
      local_88 = *(undefined8 *)(param_1 + 0x60);
      local_b0 = *(undefined4 *)(param_1 + 0x50);
      local_ac = 0x100000000;
      local_a4 = 0;
      local_80 = 0xffffffff;
      local_78 = (uint ****)ppppplVar17;
      FUN_140c3778e();
      uStack_f0 = param_3 + 0x10a;
      local_e8 = (uint ***)param_3[0x109];
      local_e0 = local_e8[0x18];
      local_d8 = "BuildSharedSerialization";
      local_e8[0x18] = (uint **)&local_f8;
      local_170 = local_140;
      local_178 = (uint ****)((ulonglong)local_178 & 0xffffffff00000000);
      local_f8 = (longlong ****)pppppuVar12;
      FUN_144899f78(param_1,&local_c8,param_4,(ulonglong)local_150 & 0xff);
      *(char *)(param_3 + 0x10e) = '\x01';
      local_e8[0x18] = local_e0;
    }
    pppplVar2 = param_7[0x14];
    local_118 = (uint ***)*ppppplVar17;
    *ppppplVar17 = (longlong ****)0x0;
    local_110 = *(undefined4 *)(param_2 + (longlong)iVar8 * 0x20 + 0x40);
    local_10c = *(undefined4 *)(param_2 + (longlong)iVar8 * 0x20 + 0x44);
    pcVar1 = param_2 + (longlong)iVar8 * 0x20 + 0x40;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    local_128 = 0;
    uStack_120 = 0;
    local_178 = (uint ****)ppppplVar17;
    FUN_144875696(param_1,&local_118,param_2 + 0x470);
    if (((char)local_148 == '\0') && (1 < (int)uStack_120)) {
      local_178 = (uint ****)(param_2 + 0x460);
      local_c8 = *(longlong *****)(param_2 + 0x460);
      param_2[0x460] = '\0';
      param_2[0x461] = '\0';
      param_2[0x462] = '\0';
      param_2[0x463] = '\0';
      param_2[0x464] = '\0';
      param_2[0x465] = '\0';
      param_2[0x466] = '\0';
      param_2[0x467] = '\0';
      uStack_c0 = *(longlong *)(param_2 + 0x468);
      param_2[0x468] = '\0';
      param_2[0x469] = '\0';
      param_2[0x46a] = '\0';
      param_2[0x46b] = '\0';
      param_2[0x46c] = '\0';
      param_2[0x46d] = '\0';
      param_2[0x46e] = '\0';
      param_2[0x46f] = '\0';
      FUN_14039244a(param_1,param_4,&local_128,&local_c8);
      if ((uint *****)local_c8 != (uint *****)0x0) {
        FUN_1400020a8();
      }
    }
    ppppplVar16 = param_4;
    if (((*(byte *)(*(longlong *)(param_6 + 0x28) + 0xa4) & 2) == 0) ||
       (((ulonglong)*param_8 & 0x200) != 0)) {
      if (0 < *(int *)(param_2 + (longlong)iVar8 * 0x20 + 0x40)) {
        if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
          ppppplVar16 = (longlong *****)((ulonglong)(*(uint *)param_8 >> 9) & 0xffffffffffffff01);
          local_148 = (uint ****)(param_3 + 0x107);
          local_140 = (uint ****)CONCAT44(local_140._4_4_,DAT_14cb01a10);
          uVar15 = CONCAT71((int7)((ulonglong)param_7 >> 8),DAT_14cb01a10 == 1);
          uStack_f0 = (longlong *****)param_7[0x14];
          local_f8 = (longlong ****)
                     (CONCAT71(local_f8._1_7_,*(byte *)((longlong)param_7 + 0x29) >> 1) &
                     0xffffffffffffff01);
          local_150 = (uint ****)param_4;
          FUN_1400748c2(param_7,uVar15 & 0xffffffff);
          iVar18 = *(int *)(param_7 + 0x14);
          local_c8 = (longlong ****)&local_78;
          local_70 = 0;
          uStack_c0 = param_1 + 0x38;
          local_a0 = *(int *)(param_1 + 0x40) + -1;
          local_b8 = param_1 + 0x48;
          local_88 = *(undefined8 *)(param_1 + 0x60);
          local_b0 = *(undefined4 *)(param_1 + 0x50);
          local_ac = 0x100000000;
          local_a4 = 0;
          local_80 = 0xffffffff;
          local_160 = SUB81(ppppplVar16,0);
          local_168 = local_148;
          local_170 = (uint ****)((ulonglong)local_170 & 0xffffffff00000000);
          local_178 = local_150;
          local_78 = (uint ****)ppppplVar17;
          FUN_14368e744(param_1,param_7,uVar15 & 0xffffffff);
          if ((longlong ****)(longlong)iVar18 == param_7[0x14]) {
            FUN_14278fe74(&local_f8,param_7);
          }
          else {
            local_68 = 0;
            (*(code *)(*param_7)[0x31])(param_7);
            if ((int)local_140 == 1) {
              local_64 = 0xabadf00d;
              pppplVar3 = param_7[1];
              if (pppplVar3[1] < (longlong ***)((longlong)*pppplVar3 + 4U)) {
                if ((*(byte *)((longlong)param_7 + 0x2a) & 2) == 0) {
                  (*(code *)(*param_7)[0x2e])(param_7,&local_64,4);
                }
                else {
                  FUN_14572512c(param_7,&local_64);
                }
              }
              else {
                *pppplVar3 = (longlong ***)((longlong)*pppplVar3 + 4U);
              }
            }
          }
        }
        if ((param_7[0x18] != (longlong ****)0x0 & *(byte *)(param_3 + 0x10e)) == 1) {
          local_138 = (uint ****)(param_3 + 0x10a);
          if ((longlong *****)param_3[0x10c] != (longlong *****)0x0) {
            local_138 = (uint ****)param_3[0x10c];
          }
          local_130 = *(undefined4 *)(param_3 + 0x10d);
          ppplVar4 = param_7[0x18][1];
          if (ppplVar4 != (longlong ***)0x0) {
            FUN_1400dacfe(ppplVar4,&local_138);
          }
        }
      }
    }
    else {
      local_178 = (uint ****)(param_2 + 0x450);
      local_c8 = *(longlong *****)(param_2 + 0x450);
      param_2[0x450] = '\0';
      param_2[0x451] = '\0';
      param_2[0x452] = '\0';
      param_2[0x453] = '\0';
      param_2[0x454] = '\0';
      param_2[0x455] = '\0';
      param_2[0x456] = '\0';
      param_2[0x457] = '\0';
      uStack_c0 = *(longlong *)(param_2 + 0x458);
      param_2[0x458] = '\0';
      param_2[0x459] = '\0';
      param_2[0x45a] = '\0';
      param_2[0x45b] = '\0';
      param_2[0x45c] = '\0';
      param_2[0x45d] = '\0';
      param_2[0x45e] = '\0';
      param_2[0x45f] = '\0';
      FUN_14039244a(param_1,param_4,&local_118);
      if (0 < *(int *)(param_2 + (longlong)iVar8 * 0x20 + 0x40)) {
        local_178 = *(uint *****)(param_6 + 0x28);
        local_170 = (uint ****)param_7;
        local_168 = (uint ****)ppppplVar17;
        FUN_14368db7a(param_1);
      }
      if ((uint *****)local_c8 != (uint *****)0x0) {
        FUN_1400020a8();
      }
    }
    bVar20 = (longlong ****)(longlong)(int)pppplVar2 != param_7[0x14];
    uVar15 = CONCAT71((int7)((ulonglong)ppppplVar16 >> 8),bVar20);
    if (!bVar20) {
      pcVar1 = param_2 + (longlong)iVar8 * 0x20 + 0x40;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      if (*(int *)(param_2 + (longlong)iVar8 * 0x20 + 0x44) != 0) {
        FUN_1448759c8(ppppplVar17,0);
      }
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if ((longlong ****)local_118 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14368d892:
  if ((longlong ****)local_108 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
LAB_14368d8a4:
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14368db7a FUN_14368db7a body=746 status=ok
// SIG undefined FUN_14368db7a(void)

void FUN_14368db7a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  int local_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [2];
  byte local_58 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  iVar6 = DAT_14cb01a10;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_50 = *(undefined8 *)(param_6 + 0xa0);
  local_58[0] = *(byte *)(param_6 + 0x29) >> 1 & 1;
  FUN_1400748c2(param_6,DAT_14cb01a10 == 1);
  uVar4 = *(undefined8 *)(param_5 + 0x68);
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1401031ac(*(undefined8 *)(param_1 + 0x60),0,local_68);
  FUN_147be7a80(uVar4,&local_78,local_68);
  if (local_78 != (longlong *)0x0) goto LAB_14368dc30;
  FUN_147ce1156(param_1,&local_e8);
  plVar1 = local_70;
  plVar3 = local_e0;
  local_78 = local_e8;
  local_e8 = (longlong *)0x0;
  if (local_e0 == local_70) {
LAB_14368ddfa:
    plVar3 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e0)(local_e0);
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
  else {
    local_e0 = (longlong *)0x0;
    local_70 = plVar3;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar1 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
      goto LAB_14368ddfa;
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  local_88 = local_78;
  local_80 = local_70;
  FUN_147be7b06(uVar4,local_68,&local_88);
LAB_14368dc30:
  uVar5 = *(undefined8 *)(param_6 + 0xa0);
  if (*(int *)(param_7 + 8) == 0) {
    local_f8 = CONCAT44(local_f8._4_4_,*(int *)(param_1 + 0x40) + -1);
    local_108 = local_78;
    local_100 = (longlong **)((ulonglong)local_100._4_4_ << 0x20);
    local_f0 = param_4;
    FUN_14368f404(param_1,param_6,iVar6 == 1,uVar4);
  }
  else {
    local_e8 = &local_98;
    local_98 = param_7;
    local_90 = 0;
    local_e0 = (longlong *)(param_1 + 0x38);
    local_c0 = *(int *)(param_1 + 0x40) + -1;
    local_d8 = param_1 + 0x48;
    local_a8 = *(undefined8 *)(param_1 + 0x60);
    local_100 = &local_e8;
    local_d0 = *(undefined4 *)(param_1 + 0x50);
    local_cc = 0x100000000;
    local_c4 = 0;
    local_a0 = 0xffffffff;
    local_108 = (longlong *)CONCAT71(local_108._1_7_,iVar6 == 1);
    local_f8 = param_4;
    FUN_14368ed88(param_1,uVar4,local_78,param_6);
  }
  if ((longlong)(int)uVar5 == *(longlong *)(param_6 + 0xa0)) {
    FUN_14278fe74(local_58,param_6);
  }
  plVar3 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14368de66 FUN_14368de66 body=490 status=ok
// SIG undefined FUN_14368de66(void)

void FUN_14368de66(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *(uint *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 8);
  local_60 = param_3;
  if (*(char *)(param_4 + 0x16c0) == '\x02') {
    if ((int)uVar2 < iVar3 + -1) {
      uVar5 = uVar2;
      do {
        lVar4 = (longlong)((int)uVar5 % 0x20) * 0x20;
        lVar7 = param_2 + 0x30 + lVar4;
        *(undefined8 *)(param_2 + 0x30 + lVar4) = 0xffffffffffffffff;
        *(undefined4 *)(param_2 + 0x40 + lVar4) = 0;
        if (*(int *)(param_2 + 0x44 + lVar4) != 0) {
          FUN_1448759c8(lVar7 + 8,0);
          uVar2 = *(uint *)(param_2 + 4);
        }
        *(undefined1 *)(lVar7 + 0x18) = 0;
        uVar2 = uVar2 + 1;
        *(uint *)(param_2 + 4) = uVar2;
        uVar5 = uVar5 + 1;
        iVar3 = *(int *)(param_2 + 8);
      } while ((int)uVar5 < iVar3 + -1);
    }
  }
  else if ((int)uVar2 < iVar3) {
    iVar6 = iVar3 - uVar2;
    iVar1 = *(int *)(param_4 + 0x13e0);
    uVar5 = uVar2;
    do {
      lVar7 = (longlong)((int)uVar5 % 0x20) * 0x20;
      if (*(int *)(param_2 + 0x30 + lVar7) == -1) break;
      puVar8 = (undefined8 *)(lVar7 + param_2 + 0x30);
      if ((iVar6 == 0x20 || (*(byte *)(puVar8 + 3) & 1) != 0) ||
          *(int *)((longlong)puVar8 + 4) <= iVar1) {
        if ((*(byte *)(puVar8 + 3) & 1) != 0 || iVar6 == 0x20) {
          local_58 = *param_5;
          *param_5 = 0;
          local_50 = (undefined4)param_5[1];
          local_4c = *(undefined4 *)((longlong)param_5 + 0xc);
          param_5[1] = 0;
          local_68 = param_5;
          FUN_14039244a(param_1,local_60,puVar8 + 1,&local_58);
          if (*(char *)(puVar8 + 3) == '\x01') {
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        *puVar8 = 0xffffffffffffffff;
        *(undefined4 *)(puVar8 + 2) = 0;
        if (*(int *)((longlong)puVar8 + 0x14) != 0) {
          FUN_1448759c8(puVar8 + 1,0);
        }
        *(undefined1 *)(puVar8 + 3) = 0;
        iVar3 = *(int *)(param_2 + 8);
        uVar2 = *(int *)(param_2 + 4) + 1;
        *(uint *)(param_2 + 4) = uVar2;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3);
  }
  uVar5 = uVar2 + 0x1f;
  if (-1 < (int)uVar2) {
    uVar5 = uVar2;
  }
  *(int *)(param_2 + 4) = (int)uVar2 % 0x20;
  *(uint *)(param_2 + 8) = iVar3 - (uVar5 & 0xffffffe0);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14368e05e FUN_14368e05e body=209 status=ok
// SIG undefined FUN_14368e05e(void)

undefined8 FUN_14368e05e(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  puVar1 = (undefined8 *)*param_1;
  uVar4 = (uint)*(ushort *)(*(longlong *)*puVar1 + (longlong)*(int *)(puVar1 + 1) * 2);
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  if (uVar4 != 0) {
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    iVar3 = (int)((longlong *)*param_1)[1];
    if (-1 < iVar3) {
      iVar2 = 0;
      if (*(int *)(*(longlong *)*param_1 + 8) <= iVar3) {
        return 0;
      }
      iVar3 = *(int *)((longlong)param_1 + 0x2c) + -1;
      if ((0 < *(int *)((longlong)param_1 + 0x1c)) && (0 < (int)param_1[3])) {
        iVar2 = iVar3 / (int)param_1[3];
      }
      *(int *)((longlong)param_1 + 0x34) = iVar2;
      if (iVar2 < (int)param_1[4]) {
        *(int *)(param_1 + 7) = *(int *)((longlong)param_1 + 0x1c) * iVar2;
        uVar4 = iVar3 - iVar2 * (int)param_1[3];
        if ((-1 < (int)uVar4) && ((int)uVar4 < (int)((longlong *)param_1[2])[1])) {
          iVar3 = *(int *)(*(longlong *)param_1[2] + (ulonglong)uVar4 * 0x10);
          *(int *)(param_1 + 6) = iVar3;
          if ((*(int *)((longlong)param_1 + 0x24) <= iVar3) && (iVar3 < (int)param_1[5])) {
            if (*(ushort *)(*(longlong *)param_1[1] + 0x14 + (longlong)iVar3 * 0x20) - 1 != uVar4) {
              return 0;
            }
            if (*(char *)(*(longlong *)param_1[1] + 0x1c + (longlong)iVar3 * 0x20) == '\x01') {
              return 0;
            }
            *(int *)(param_1 + 9) = iVar3;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14368e12f FUN_14368e12f body=1555 status=ok
// SIG undefined FUN_14368e12f(void)

void FUN_14368e12f(longlong *param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  ushort uVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  longlong *plVar8;
  uint uVar9;
  size_t _Size;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  code *local_1d0;
  undefined **local_1c8 [11];
  longlong *local_170;
  longlong local_150;
  longlong local_138;
  void *local_118;
  ulonglong uStack_110;
  undefined **local_108;
  int local_100;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  longlong local_68;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_44 = param_2;
  if (*param_1 == 0) {
    FUN_140056680(&local_108,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(*param_1 + 0x20,&local_108);
  }
  uVar9 = 0;
  iVar5 = local_100 + -1;
  if (local_100 == 0) {
    iVar5 = 0;
  }
  if (0 < iVar5) {
    ppuVar6 = (undefined **)&DAT_149dfb77a;
    if (local_100 != 0) {
      ppuVar6 = local_108;
    }
    lVar10 = 0;
    uVar12 = 0;
    do {
      uVar2 = *(ushort *)((longlong)ppuVar6 + lVar10 * 2);
      uVar9 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
      uVar11 = (uint)(uVar12 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar12 ^ uVar9) & 0xff) * 4);
      uVar9 = uVar11 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar11 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
      uVar12 = (ulonglong)uVar9;
      lVar10 = lVar10 + 1;
    } while (iVar5 != (int)lVar10);
  }
  if (local_108 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_48 = uVar9;
  uVar4 = FUN_1448eb174(&local_48,4,0);
  uVar4 = FUN_1448eb174((longlong)param_1 + 0xc,4,uVar4);
  iVar5 = FUN_1448eb174(&local_44,4,uVar4);
  puVar3 = (ulonglong *)param_4[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    local_4c = iVar5;
    if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
      (**(code **)(*param_4 + 0x170))(param_4,&local_4c,4);
    }
    else {
      FUN_14572512c(param_4,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if (local_4c != iVar5) {
    FUN_14689aefa(*param_1,&local_108);
    ppuVar6 = local_108;
    if (local_100 == 0) {
      ppuVar6 = (undefined **)&DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x360,
                  L"SerializeReadWritePropertyChecksum: Property checksum marker failed! [%s]",
                  ppuVar6);
    if (local_108 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  lVar10 = *param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_1d8 = FUN_1446ddbd2();
    local_1d0 = FUN_1468d96f0;
    local_1e0 = 0;
    local_1e8 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  puVar7 = *(undefined **)(lVar10 + 8);
  if (DAT_14c951c80 == 0) {
    bVar13 = puVar7 != (undefined *)0x0;
    if (puVar7 != &DAT_14c951c78 && bVar13) {
      do {
        puVar7 = *(undefined **)(puVar7 + 0x30);
        bVar13 = puVar7 != (undefined *)0x0;
        if (puVar7 == &DAT_14c951c78) break;
      } while (puVar7 != (undefined *)0x0);
    }
    if (bVar13) goto LAB_14368e5aa;
  }
  else if ((*(ulonglong *)(puVar7 + 0x18) & DAT_14c951c80) != 0) goto LAB_14368e5aa;
  FUN_1447400e4(&local_108,0,1);
  local_1e8 = 0;
  (**(code **)(*(longlong *)*param_1 + 0xd8))((longlong *)*param_1,&local_108,0,param_3);
  if ((*(byte *)(param_4 + 5) & 4) != 0) {
    uVar4 = *(undefined4 *)(*param_1 + 0x30);
    *(undefined4 *)(*param_1 + 0x30) = 1;
    local_118 = (void *)0x0;
    _Size = (longlong)*(int *)(*param_1 + 0x34) + 4;
    uStack_110 = _Size & 0xffffffff;
    if ((int)_Size != 0) {
      FUN_1447403be(&local_118);
    }
    memset(local_118,0,_Size);
    *(undefined4 *)((longlong)local_118 + (longlong)(int)uStack_110 + -4) = 0xabadf00d;
    plVar8 = (longlong *)*param_1;
    if ((*(byte *)((longlong)plVar8 + 0x39) & 2) == 0) {
      (**(code **)(*plVar8 + 0x160))();
    }
    else {
      memset(local_118,0,(longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
    }
    FUN_144a99d0c(local_1c8,local_78,local_68);
    local_1e8 = 0;
    (**(code **)(*(longlong *)*param_1 + 0xd8))((longlong *)*param_1,local_1c8,0,local_118);
    FUN_14493765a(&local_108);
    local_1e8 = 0;
    (**(code **)(*(longlong *)*param_1 + 0xd8))((longlong *)*param_1,&local_108,0,local_118);
    plVar8 = (longlong *)*param_1;
    if ((*(byte *)((longlong)plVar8 + 0x3c) & 0x10) == 0) {
      (**(code **)(*plVar8 + 0x148))(plVar8,local_118);
      plVar8 = (longlong *)*param_1;
    }
    *(undefined4 *)(plVar8 + 6) = uVar4;
    local_1c8[0] = &PTR_FUN_149e37220;
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    local_1c8[0] = &PTR__purecall_149e35f70;
    if (local_170 != (longlong *)0x0) {
      if (*local_170 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_170);
    }
    if (local_150 != 0) {
      if (*(longlong *)(local_150 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_150);
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar4 = FUN_1448eb174(local_78,local_68 + 7U >> 3,0);
  local_1c8[0] = (undefined **)CONCAT44(local_1c8[0]._4_4_,uVar4);
  puVar3 = (ulonglong *)param_4[1];
  if (puVar3[1] < *puVar3 + 4) {
    if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
      (**(code **)(*param_4 + 0x170))(param_4,local_1c8,4);
    }
    else {
      FUN_14572512c(param_4,local_1c8);
    }
  }
  else {
    *puVar3 = *puVar3 + 4;
  }
  local_108 = &PTR_FUN_149e37560;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_108 = &PTR__purecall_149e35f70;
  if (local_b0 != (longlong *)0x0) {
    if (*local_b0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_b0);
  }
  if (local_90 != 0) {
    if (*(longlong *)(local_90 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_90);
  }
LAB_14368e5aa:
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14368e744 FUN_14368e744 body=1447 status=ok
// SIG undefined FUN_14368e744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14368e744(longlong param_1,longlong *param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5,uint param_6,undefined8 *param_7,char param_8)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  longlong *plVar12;
  char cVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int local_d0;
  undefined8 *local_c8;
  char local_c0;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  int local_80;
  longlong local_68;
  undefined4 local_60;
  ushort local_52;
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar17 = DAT_14c7619e0 != 0;
  *(undefined4 *)(param_4 + 6) = 0xffffffff;
  puVar14 = (undefined8 *)*param_4;
  uVar2 = *(ushort *)(*(longlong *)*puVar14 + (longlong)*(int *)(puVar14 + 1) * 2);
  plVar12 = (longlong *)(ulonglong)uVar2;
  *(uint *)((longlong)param_4 + 0x2c) = (uint)uVar2;
  local_b0 = param_1;
  if (uVar2 != 0) {
    local_b4 = param_6 + 1;
    while( true ) {
      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
      iVar8 = (int)((longlong *)*param_4)[1];
      if ((iVar8 < 0) || (*(int *)(*(longlong *)*param_4 + 8) <= iVar8)) break;
      uVar9 = *(uint *)((longlong)param_4 + 0x2c);
      iVar8 = uVar9 - 1;
      uVar7 = 0;
      if ((0 < *(int *)((longlong)param_4 + 0x1c)) && (iVar15 = (int)param_4[3], 0 < iVar15)) {
        uVar7 = iVar8 / iVar15;
        plVar12 = (longlong *)((longlong)iVar8 % (longlong)iVar15 & 0xffffffff);
      }
      *(uint *)((longlong)param_4 + 0x34) = uVar7;
      if ((int)param_4[4] <= (int)uVar7) break;
      iVar15 = *(int *)((longlong)param_4 + 0x1c) * uVar7;
      *(int *)(param_4 + 7) = iVar15;
      uVar11 = (int)param_4[3] * uVar7;
      plVar12 = (longlong *)(ulonglong)uVar11;
      uVar11 = iVar8 - uVar11;
      if (((int)uVar11 < 0) || (plVar12 = (longlong *)param_4[2], (int)plVar12[1] <= (int)uVar11))
      break;
      uVar3 = *(uint *)(*plVar12 + (ulonglong)uVar11 * 0x10);
      plVar12 = (longlong *)(ulonglong)uVar3;
      *(uint *)(param_4 + 6) = uVar3;
      if (((int)uVar3 < *(int *)((longlong)param_4 + 0x24)) || ((int)param_4[5] <= (int)uVar3))
      break;
      lVar16 = (longlong)(int)uVar3 * 0x20;
      if ((*(ushort *)(*(longlong *)param_4[1] + 0x14 + lVar16) - 1 != uVar11) ||
         (*(char *)(*(longlong *)param_4[1] + 0x1c + lVar16) == '\x01')) break;
      *(uint *)(param_4 + 9) = uVar3;
      lVar4 = *(longlong *)(param_1 + 0x38);
      plVar12 = (longlong *)(lVar4 + lVar16);
      puVar14 = (undefined8 *)(iVar15 + param_5 + (longlong)*(int *)(lVar4 + 0xc + lVar16));
      cVar13 = (char)param_3;
      if (*(char *)(lVar4 + 0x1c + lVar16) == '\0') {
        if (param_8 == '\0') {
          local_4c = uVar9 & 0xffff;
          (**(code **)(*param_2 + 0x188))(param_2,&local_4c);
          if (cVar13 != '\0') {
            local_a8 = CONCAT44(local_a8._4_4_,0xabadf00d);
            puVar5 = (ulonglong *)param_2[1];
            if (puVar5[1] < *puVar5 + 4) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_a8,4);
              }
              else {
                FUN_14572512c(param_2,&local_a8);
              }
            }
            else {
              *puVar5 = *puVar5 + 4;
            }
          }
        }
        else {
          if (*plVar12 == 0) {
            local_a8 = 0;
          }
          else {
            local_a8 = *(longlong *)(*plVar12 + 0x20);
          }
          FUN_14368ecec(param_2,&local_a8,param_3);
        }
        uVar6 = *puVar14;
        local_52 = *(ushort *)(puVar14 + 1);
        puVar5 = (ulonglong *)param_2[1];
        puVar1 = (ushort *)*puVar5 + 1;
        if ((ushort *)puVar5[1] < puVar1) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_52,2);
          }
          else {
            FUN_1457251a8(param_2,&local_52);
          }
        }
        else {
          local_52 = *(ushort *)*puVar5;
          *puVar5 = (ulonglong)puVar1;
        }
        *(int *)(*param_4 + 8) = *(int *)(*param_4 + 8) + 1;
        local_98 = *(longlong *)
                    (*(longlong *)param_4[2] + -8 +
                    (ulonglong)*(ushort *)((longlong)plVar12 + 0x14) * 0x10);
        local_80 = *(ushort *)(plVar12 + 1) - 1;
        local_84 = (int)param_4[6] + 1;
        local_a8 = *param_4;
        local_68 = param_4[8];
        local_90 = *(undefined4 *)(local_98 + 8);
        local_8c = (uint)*(ushort *)((longlong)plVar12 + 10);
        local_88 = (uint)local_52;
        local_60 = 0xffffffff;
        local_c0 = param_8;
        local_c8 = param_7;
        local_d0 = local_b4;
        local_d8 = uVar6;
        local_a0 = (longlong *)(param_1 + 0x38);
        FUN_14368e744(local_b0,param_2,param_3,&local_a8);
        *(int *)(*param_4 + 8) = *(int *)(*param_4 + 8) + 1;
        local_50 = 0;
        (**(code **)(*param_2 + 0x188))(param_2,&local_50);
        if (cVar13 != '\0') {
          local_4c = 0xabadf00d;
          puVar5 = (ulonglong *)param_2[1];
          if (puVar5[1] < *puVar5 + 4) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
            }
            else {
              FUN_14572512c(param_2,&local_4c);
            }
          }
          else {
            *puVar5 = *puVar5 + 4;
          }
        }
      }
      else {
        if (((param_7 != (undefined8 *)0x0 && bVar17) &&
            ((*(byte *)((longlong)plVar12 + 0x1d) & 1) != 0)) &&
           ((longlong)*(int *)(param_7 + 1) != 0)) {
          puVar10 = (uint *)*param_7;
          lVar16 = (longlong)*(int *)(param_7 + 1) * 0x28;
          do {
            if (((*puVar10 == uVar3) && (puVar10[1] == uVar7)) &&
               ((puVar10[2] == param_6 && (*(undefined8 **)(puVar10 + 4) == puVar14)))) {
              if (puVar10 != (uint *)0x0) {
                _DAT_14caf2780 = _DAT_14caf2780 + 1;
                (**(code **)(*param_2 + 0x260))
                          (param_2,*(undefined8 *)(param_7[2] + 0x90),puVar10[6],
                           (longlong)(int)puVar10[7]);
                goto LAB_14368ebf9;
              }
              break;
            }
            puVar10 = puVar10 + 10;
            lVar16 = lVar16 + -0x28;
          } while (lVar16 != 0);
        }
        _DAT_14caf2784 = _DAT_14caf2784 + 1;
        if (param_8 == '\0') {
          local_4c = uVar9 & 0xffff;
          (**(code **)(*param_2 + 0x188))(param_2,&local_4c);
          if (cVar13 != '\0') {
            local_a8 = CONCAT44(local_a8._4_4_,0xabadf00d);
            puVar5 = (ulonglong *)param_2[1];
            if (puVar5[1] < *puVar5 + 4) {
              if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                (**(code **)(*param_2 + 0x170))(param_2,&local_a8,4);
              }
              else {
                FUN_14572512c(param_2,&local_a8);
              }
            }
            else {
              *puVar5 = *puVar5 + 4;
            }
          }
        }
        else {
          if (*plVar12 == 0) {
            local_a8 = 0;
          }
          else {
            local_a8 = *(longlong *)(*plVar12 + 0x20);
          }
          FUN_14368ecec(param_2,&local_a8,param_3);
        }
        local_d8 = 0;
        (**(code **)(*(longlong *)*plVar12 + 0xd8))
                  ((longlong *)*plVar12,param_2,param_2[0x17],puVar14);
        if (cVar13 != '\0') {
          FUN_14368e12f(plVar12,(int)param_4[6],puVar14,param_2);
        }
      }
LAB_14368ebf9:
      *(undefined4 *)(param_4 + 6) = 0xffffffff;
      puVar14 = (undefined8 *)*param_4;
      plVar12 = (longlong *)(longlong)*(int *)(puVar14 + 1);
      uVar9 = (uint)*(ushort *)(*(longlong *)*puVar14 + (longlong)plVar12 * 2);
      *(uint *)((longlong)param_4 + 0x2c) = uVar9;
      if (uVar9 == 0) break;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8,plVar12);
  }
  return;
}



// FUNCTION 14368ecec FUN_14368ecec body=154 status=ok
// SIG undefined FUN_14368ecec(void)

void FUN_14368ecec(longlong *param_1,undefined8 *param_2,char param_3)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  (**(code **)(*param_1 + 0x160))();
  if (param_3 != '\0') {
    local_1c = 0xabadf00d;
    puVar1 = (ulonglong *)param_1[1];
    if (puVar1[1] < *puVar1 + 4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      *puVar1 = *puVar1 + 4;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14368ed88 FUN_14368ed88 body=1659 status=ok
// SIG undefined FUN_14368ed88(void)

void FUN_14368ed88(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  char param_5,longlong *param_6,longlong param_7)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined ***local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined **local_1e0 [11];
  longlong *local_188;
  longlong local_168;
  longlong local_150;
  undefined4 local_140;
  undefined **local_118;
  longlong *local_110;
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  longlong local_d8;
  undefined4 local_d0;
  longlong *local_c0;
  longlong local_a0;
  longlong local_88;
  int local_78;
  undefined8 local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_200 = param_1;
  local_1f8 = param_2;
  local_1f0 = param_3;
  FUN_144a679e2(local_1e0,param_4[0x17],0);
  *(undefined4 *)(param_6 + 6) = 0xffffffff;
  puVar9 = (undefined8 *)*param_6;
  uVar8 = (uint)*(ushort *)(*(longlong *)*puVar9 + (longlong)*(int *)(puVar9 + 1) * 2);
  *(uint *)((longlong)param_6 + 0x2c) = uVar8;
  if (uVar8 != 0) {
    plVar1 = (longlong *)(local_200 + 0x38);
    iVar10 = -1;
    while( true ) {
      *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
      iVar6 = (int)((longlong *)*param_6)[1];
      if ((iVar6 < 0) || (*(int *)(*(longlong *)*param_6 + 8) <= iVar6)) break;
      iVar7 = *(int *)((longlong)param_6 + 0x2c) + -1;
      iVar6 = 0;
      if ((0 < *(int *)((longlong)param_6 + 0x1c)) && (0 < (int)param_6[3])) {
        iVar6 = iVar7 / (int)param_6[3];
      }
      *(int *)((longlong)param_6 + 0x34) = iVar6;
      if ((int)param_6[4] <= iVar6) break;
      iVar12 = *(int *)((longlong)param_6 + 0x1c) * iVar6;
      *(int *)(param_6 + 7) = iVar12;
      uVar8 = iVar7 - iVar6 * (int)param_6[3];
      if (((int)uVar8 < 0) || ((int)((longlong *)param_6[2])[1] <= (int)uVar8)) break;
      iVar6 = *(int *)(*(longlong *)param_6[2] + (ulonglong)uVar8 * 0x10);
      *(int *)(param_6 + 6) = iVar6;
      if ((iVar6 < *(int *)((longlong)param_6 + 0x24)) || ((int)param_6[5] <= iVar6)) break;
      lVar11 = (longlong)iVar6 * 0x20;
      if ((*(ushort *)(*(longlong *)param_6[1] + 0x14 + lVar11) - 1 != uVar8) ||
         (*(char *)(*(longlong *)param_6[1] + 0x1c + lVar11) == '\x01')) break;
      *(int *)(param_6 + 9) = iVar6;
      lVar2 = *plVar1;
      iVar6 = *(int *)(lVar2 + 0xc + lVar11);
      FUN_147be7c12(local_1f8,local_1f0);
      iVar7 = *(int *)((longlong)param_6 + 0x34);
      if (iVar7 != iVar10 && 0 < *(int *)((longlong)param_6 + 0x1c)) {
        if (iVar10 != -1) {
          local_4c = 0;
          (**(code **)(*param_4 + 0x188))(param_4,&local_4c);
          if (param_5 != '\0') {
            local_118 = (undefined **)CONCAT44(local_118._4_4_,0xabadf00d);
            puVar3 = (ulonglong *)param_4[1];
            if (puVar3[1] < *puVar3 + 4) {
              if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
                (**(code **)(*param_4 + 0x170))(param_4,&local_118,4);
              }
              else {
                FUN_14572512c(param_4,&local_118);
              }
            }
            else {
              *puVar3 = *puVar3 + 4;
            }
          }
          iVar7 = *(int *)((longlong)param_6 + 0x34);
        }
        local_118 = (undefined **)CONCAT44(local_118._4_4_,iVar7 + 1);
        (**(code **)(*param_4 + 0x188))(param_4,&local_118);
        iVar10 = *(int *)((longlong)param_6 + 0x34);
      }
      local_4c = (int)param_6[6] + 1;
      (**(code **)(*param_4 + 0x188))(param_4,&local_4c);
      if (param_5 != '\0') {
        local_118 = (undefined **)CONCAT44(local_118._4_4_,0xabadf00d);
        puVar3 = (ulonglong *)param_4[1];
        if (puVar3[1] < *puVar3 + 4) {
          if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
            (**(code **)(*param_4 + 0x170))(param_4,&local_118,4);
          }
          else {
            FUN_14572512c(param_4,&local_118);
          }
        }
        else {
          *puVar3 = *puVar3 + 4;
        }
      }
      puVar9 = (undefined8 *)(lVar2 + lVar11);
      puVar13 = (undefined8 *)(iVar12 + param_7 + (longlong)iVar6);
      if (*(char *)((longlong)puVar9 + 0x1c) == '\0') {
        uVar4 = *puVar13;
        local_f8 = *(int *)(puVar13 + 1);
        *(int *)(*param_6 + 8) = *(int *)(*param_6 + 8) + 1;
        local_108 = *(longlong *)
                     (*(longlong *)param_6[2] + -8 +
                     (ulonglong)*(ushort *)((longlong)puVar9 + 0x14) * 0x10);
        local_f0 = *(ushort *)(puVar9 + 1) - 1;
        local_f4 = (int)param_6[6] + 1;
        local_118 = (undefined **)*param_6;
        local_d8 = param_6[8];
        local_100 = *(undefined4 *)(local_108 + 8);
        local_fc = (uint)*(ushort *)((longlong)puVar9 + 10);
        local_d0 = 0xffffffff;
        local_110 = plVar1;
        local_4c = local_f8;
        FUN_14493765a(local_1e0);
        FUN_14031d518(local_1e0,&local_4c);
        if (local_4c != 0) {
          local_210 = &local_118;
          local_218 = CONCAT71(local_218._1_7_,param_5);
          local_208 = uVar4;
          FUN_14368ed88(local_200,local_1f8,local_1f0,local_1e0);
        }
        local_1e4 = 0;
        FUN_14031d518(local_1e0,&local_1e4);
        local_1e8 = local_140;
        (**(code **)(*param_4 + 0x188))(param_4,&local_1e8);
        (**(code **)(*param_4 + 0x178))(param_4,local_150,local_1e8);
        *(int *)(*param_6 + 8) = *(int *)(*param_6 + 8) + 1;
      }
      else {
        lVar11 = param_6[6];
        FUN_144a679e2(&local_118,param_4[0x17],0);
        local_218 = 0;
        (**(code **)(*(longlong *)*puVar9 + 0xd8))((longlong *)*puVar9,&local_118,local_60,puVar13);
        local_4c = local_78;
        (**(code **)(*param_4 + 0x188))(param_4,&local_4c);
        (**(code **)(*param_4 + 0x178))(param_4,local_88,local_4c);
        if (param_5 != '\0') {
          FUN_14368e12f(puVar9,(int)lVar11,puVar13,param_4);
        }
        local_118 = &PTR_FUN_149e37560;
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        plVar5 = local_c0;
        local_118 = &PTR__purecall_149e35f70;
        if (local_c0 != (longlong *)0x0) {
          if (*local_c0 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar5);
        }
        lVar11 = local_a0;
        if (local_a0 != 0) {
          if (*(longlong *)(local_a0 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar11);
        }
      }
      *(undefined4 *)(param_6 + 6) = 0xffffffff;
      puVar9 = (undefined8 *)*param_6;
      uVar8 = (uint)*(ushort *)(*(longlong *)*puVar9 + (longlong)*(int *)(puVar9 + 1) * 2);
      *(uint *)((longlong)param_6 + 0x2c) = uVar8;
      if (uVar8 == 0) break;
    }
  }
  local_4c = 0;
  (**(code **)(*param_4 + 0x188))(param_4);
  if (param_5 != '\0') {
    local_118 = (undefined **)CONCAT44(local_118._4_4_,0xabadf00d);
    puVar3 = (ulonglong *)param_4[1];
    if (puVar3[1] < *puVar3 + 4) {
      if ((*(byte *)((longlong)param_4 + 0x2a) & 2) == 0) {
        (**(code **)(*param_4 + 0x170))(param_4,&local_118,4);
      }
      else {
        FUN_14572512c(param_4,&local_118);
      }
    }
    else {
      *puVar3 = *puVar3 + 4;
    }
  }
  local_1e0[0] = &PTR_FUN_149e37560;
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  local_1e0[0] = &PTR__purecall_149e35f70;
  if (local_188 != (longlong *)0x0) {
    if (*local_188 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_188);
  }
  if (local_168 != 0) {
    if (*(longlong *)(local_168 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_168);
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14368f404 FUN_14368f404 body=1246 status=ok
// SIG undefined FUN_14368f404(void)

void FUN_14368f404(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7,longlong param_8)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  int local_230;
  int local_228;
  longlong local_220;
  char local_211;
  longlong *local_210;
  int local_204;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined4 local_1e4;
  undefined **local_1e0 [11];
  longlong *local_188;
  longlong local_168;
  longlong local_150;
  undefined4 local_140;
  int local_114;
  undefined **local_110 [11];
  longlong *local_b8;
  longlong local_98;
  longlong local_80;
  int local_70;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_211 = param_3;
  local_210 = param_2;
  FUN_144a679e2(local_1e0,param_2[0x17],0);
  uVar9 = param_4;
  lVar10 = param_1;
  plVar5 = local_210;
  lVar6 = local_200;
  uVar7 = local_1f8;
  for (; local_200 = lVar10, local_1f8 = uVar9, local_210 = plVar5, param_6 < param_7;
      param_6 = param_6 + 1) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_6 * 0x20);
    cVar3 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x1c + (longlong)param_6 * 0x20);
    if ((cVar3 == '\0') && ((*(byte *)((longlong)puVar2 + 0x1d) & 4) != 0)) {
      param_6 = *(ushort *)(puVar2 + 1) - 1;
    }
    else {
      FUN_147be7c12(param_4,param_5,param_6);
      local_204 = param_6 + 1;
      local_114 = local_204;
      (**(code **)(*local_210 + 0x188))(local_210,&local_114);
      if (local_211 != '\0') {
        local_110[0] = (undefined **)CONCAT44(local_110[0]._4_4_,0xabadf00d);
        puVar4 = (ulonglong *)local_210[1];
        if (puVar4[1] < *puVar4 + 4) {
          if ((*(byte *)((longlong)local_210 + 0x2a) & 2) == 0) {
            (**(code **)(*local_210 + 0x170))(local_210,local_110,4);
          }
          else {
            FUN_14572512c(local_210,local_110);
          }
        }
        else {
          *puVar4 = *puVar4 + 4;
        }
      }
      plVar5 = local_210;
      plVar11 = (longlong *)(*(int *)((longlong)puVar2 + 0xc) + param_8);
      if (cVar3 == '\0') {
        local_1f0 = *plVar11;
        FUN_14493765a();
        local_110[0] = (undefined **)CONCAT44(local_110[0]._4_4_,(int)plVar11[1]);
        FUN_14031d518(local_1e0,local_110);
        iVar8 = local_204;
        uVar12 = CONCAT71((int7)((ulonglong)plVar11 >> 8),local_211);
        if (0 < (int)plVar11[1]) {
          iVar13 = 0;
          do {
            iVar1 = iVar13 + 1;
            local_114 = iVar1;
            FUN_14031d518(local_1e0,&local_114);
            local_220 = (ulonglong)((uint)*(ushort *)((longlong)puVar2 + 10) * iVar13) + local_1f0;
            local_228 = *(ushort *)(puVar2 + 1) - 1;
            local_230 = iVar8;
            local_238 = param_5;
            FUN_14368f404(local_200,local_1e0,uVar12 & 0xffffffff,local_1f8);
            iVar13 = iVar1;
          } while (iVar1 < (int)plVar11[1]);
        }
        local_114 = 0;
        FUN_14031d518(local_1e0,&local_114);
        plVar5 = local_210;
        local_1e4 = local_140;
        (**(code **)(*local_210 + 0x188))(local_210,&local_1e4);
        (**(code **)(*plVar5 + 0x178))(plVar5,local_150,local_1e4);
        param_6 = *(ushort *)(puVar2 + 1) - 1;
        param_1 = local_200;
        param_4 = local_1f8;
      }
      else {
        FUN_144a679e2(local_110,local_210[0x17],0);
        local_238 = 0;
        (**(code **)(*(longlong *)*puVar2 + 0xd8))((longlong *)*puVar2,local_110,local_58,plVar11);
        local_114 = local_70;
        (**(code **)(*plVar5 + 0x188))(plVar5,&local_114);
        (**(code **)(*plVar5 + 0x178))(plVar5,local_80,local_114);
        if (local_211 != '\0') {
          FUN_14368e12f(puVar2,param_6,plVar11,local_210);
        }
        local_110[0] = &PTR_FUN_149e37560;
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        plVar5 = local_b8;
        local_110[0] = &PTR__purecall_149e35f70;
        if (local_b8 != (longlong *)0x0) {
          if (*local_b8 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar5);
        }
        lVar6 = local_98;
        if (local_98 != 0) {
          if (*(longlong *)(local_98 + 0x40) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(lVar6);
        }
      }
    }
    uVar9 = local_1f8;
    lVar10 = local_200;
    plVar5 = local_210;
    lVar6 = local_200;
    uVar7 = local_1f8;
  }
  local_114 = 0;
  local_200 = lVar6;
  local_1f8 = uVar7;
  (**(code **)(*plVar5 + 0x188))(plVar5);
  if (local_211 != '\0') {
    local_110[0] = (undefined **)CONCAT44(local_110[0]._4_4_,0xabadf00d);
    puVar4 = (ulonglong *)plVar5[1];
    if (puVar4[1] < *puVar4 + 4) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,local_110,4);
      }
      else {
        FUN_14572512c(plVar5,local_110);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
  }
  local_1e0[0] = &PTR_FUN_149e37560;
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  local_1e0[0] = &PTR__purecall_149e35f70;
  if (local_188 != (longlong *)0x0) {
    if (*local_188 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_188);
  }
  if (local_168 != 0) {
    if (*(longlong *)(local_168 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_168);
  }
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14368f8e4 FUN_14368f8e4 body=701 status=ok
// SIG undefined FUN_14368f8e4(void)

ulonglong FUN_14368f8e4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                       undefined8 param_5,longlong *param_6,undefined1 *param_7,undefined8 param_8,
                       byte param_9)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined1 *local_140;
  byte local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  int local_fc;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined4 local_e8;
  undefined4 local_e4;
  char local_e0;
  byte local_df;
  longlong *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  short local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(byte *)(*(longlong *)(param_2 + 0x28) + 0xa4) & 2) != 0) {
    local_128 = param_5;
    local_130 = param_8;
    local_140 = param_7;
    local_148 = param_6;
    local_138 = param_9 & 1;
    FUN_147ce12c8(param_1,*(longlong *)(param_2 + 0x28),param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  if ((*(byte *)((longlong)param_6 + 0x29) & 2) == 0) {
    uVar1 = param_6[0x15];
    if ((longlong)uVar1 < param_6[0x14]) {
      bVar3 = *(byte *)(param_6[0x12] + (longlong)(int)(uVar1 >> 3));
      param_6[0x15] = uVar1 + 1;
      local_e0 = (bVar3 >> ((uint)uVar1 & 7) & 1) != 0;
      goto LAB_14368f998;
    }
    FUN_1405d09b8(param_6,1);
  }
  local_e0 = false;
LAB_14368f998:
  *param_7 = 0;
  local_df = 1;
  if ((param_9 & 2) == 0) {
    local_df = ~*(byte *)(param_1 + 0x20) & 1;
  }
  local_d8 = param_6;
  local_d0 = param_7;
  local_c8 = param_8;
  local_c0 = param_1 + 0x28;
  local_b8 = param_1 + 0x38;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_1417ecbe6(&local_b0,param_1 + 0xe8);
  local_60 = param_5;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0xffffffff;
  local_118 = param_5;
  local_110 = *param_4;
  local_108 = param_4 + 4;
  local_100 = 0;
  local_fc = *(int *)(param_1 + 0x40) + -1;
  local_f8 = param_4 + 0xe;
  if ((param_9 & 1) == 0) {
    local_f8 = (undefined8 *)0x0;
  }
  local_f0 = 0;
  local_ec = 0;
  local_ea = 0;
  local_e8 = 0;
  (**(code **)(*local_d8 + 0x188))();
  if (local_e0 == '\x01') {
    local_e4 = 0xabadf00d;
    puVar2 = (ulonglong *)local_d8[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)local_d8 + 0x2a) & 2) == 0) {
        (**(code **)(*local_d8 + 0x170))(local_d8,&local_e4,4);
      }
      else {
        FUN_14572512c(local_d8,&local_e4);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  local_50 = (short)local_e8;
  bVar3 = FUN_14368fba4(&local_e0,&local_118);
  bVar4 = local_50 == 0;
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_140442ac6(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)param_1 >> 8),bVar4 & bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14368fba4 FUN_14368fba4 body=1460 status=ok
// SIG undefined FUN_14368fba4(void)

undefined4 FUN_14368fba4(char *param_1,ulonglong *param_2)

{
  undefined2 *puVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  short sVar12;
  undefined *puVar13;
  longlong *plVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  int local_110;
  undefined4 uStack_10c;
  ulonglong *puStack_108;
  ulonglong *local_100;
  ulonglong local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined4 local_c4;
  char *local_c0;
  longlong local_b8;
  undefined2 local_aa;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  int local_80;
  int local_7c;
  ulonglong local_78;
  uint local_70;
  undefined2 local_6c;
  undefined1 local_6a [2];
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar16 = (int)param_2[3];
  iVar17 = *(int *)((longlong)param_2 + 0x1c);
  local_c4 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (iVar16 < iVar17) {
    local_c0 = param_1 + 0x30;
    do {
      lVar19 = (longlong)iVar16 * 0x20 + **(longlong **)(param_1 + 0x28);
      sVar12 = (short)*(undefined4 *)((longlong)param_2 + 0x2c) + 1;
      *(short *)((longlong)param_2 + 0x2c) = sVar12;
      if (sVar12 == *(short *)(param_1 + 0x90)) {
        uVar3 = *(ushort *)(lVar19 + 0x16);
        if (*(uint *)(param_1 + 0x94) != (uint)uVar3) {
          *(uint *)(param_1 + 0x94) = (uint)uVar3;
          plVar5 = *(longlong **)(param_1 + 0x80);
          uVar10 = (**(code **)(*plVar5 + 0x280))(plVar5);
          if (uVar10 < 0xffffffff00000000) {
            plVar14 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              plVar14 = (longlong *)0x0;
            }
            (**(code **)(*plVar14 + 0x58))(plVar14,plVar5,uVar10,uVar3);
          }
          else {
            uVar9 = (uint)uVar10;
            if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
              puVar13 = DAT_14c998080;
              if (DAT_14c998080 == (undefined *)0x0) {
                puVar13 = &DAT_14c998070;
              }
              if ((*(uint *)(puVar13 + ((uint)(uVar10 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) !=
                  0) {
                lVar11 = (ulonglong)(uVar9 & 0x7fffffff) * 0x68 + DAT_14c998060;
                lVar18 = *(longlong *)(lVar11 + 0x18);
                if (*(longlong *)(lVar11 + 0x18) == 0) {
                  lVar18 = lVar11 + 8;
                }
                puVar2 = (uint *)(lVar18 + (ulonglong)(uVar3 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
                *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
              }
            }
          }
        }
        if (*(char *)(lVar19 + 0x1c) == '\0') {
          uVar10 = *param_2;
          uVar6 = param_2[1];
          iVar17 = *(int *)(lVar19 + 0x10);
          iVar4 = *(int *)(lVar19 + 0xc);
          local_80 = iVar16 + 1;
          local_98 = 0;
          lStack_90 = 0;
          local_88 = 0;
          local_7c = *(ushort *)(lVar19 + 8) - 1;
          local_78 = param_2[4];
          local_70 = 0;
          local_6c = 0;
          local_6a[0] = *(undefined1 *)((longlong)param_2 + 0x2e);
          local_aa = 0;
          plVar5 = *(longlong **)(param_1 + 8);
          puVar7 = (ulonglong *)plVar5[1];
          puVar1 = (undefined2 *)*puVar7 + 1;
          local_a8 = uVar6;
          local_a0 = uVar10;
          if ((undefined2 *)puVar7[1] < puVar1) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_aa,2);
            }
            else {
              FUN_1457251a8(plVar5,&local_aa);
            }
          }
          else {
            local_aa = *(undefined2 *)*puVar7;
            *puVar7 = (ulonglong)puVar1;
          }
          local_b8 = uVar6 + (longlong)iVar17;
          lVar18 = uVar10 + (longlong)iVar4;
          local_e8 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0);
          local_f8 = param_2[4];
          local_120 = (ulonglong)((uint)*(ushort *)(lVar19 + 0x16) * 0x30) +
                      **(longlong **)(param_1 + 0x20);
          local_f0 = local_6a;
          local_100 = &local_a0;
          puStack_108 = &local_a8;
          local_128 = CONCAT44(local_128._4_4_,*(int *)(lVar19 + 0xc) + (int)param_2[5]);
          local_118 = lVar19;
          local_110 = iVar16;
          local_88 = FUN_143690ae0(local_aa,local_b8,lVar18,param_2[2]);
          local_68 = 0;
          (**(code **)(**(longlong **)(param_1 + 8) + 0x188))(*(longlong **)(param_1 + 8),&local_68)
          ;
          if (*param_1 == '\x01') {
            plVar5 = *(longlong **)(param_1 + 8);
            local_64 = 0xabadf00d;
            puVar7 = (ulonglong *)plVar5[1];
            if (puVar7[1] < *puVar7 + 4) {
              if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
                (**(code **)(*plVar5 + 0x170))(plVar5,&local_64,4);
              }
              else {
                FUN_14572512c(plVar5,&local_64);
              }
            }
            else {
              *puVar7 = *puVar7 + 4;
            }
          }
          uVar6 = local_a0;
          uVar10 = local_a8;
          *(short *)(param_1 + 0x90) = (short)local_68;
          if ((short)local_68 == 0) {
LAB_14368ffb0:
            iVar16 = *(ushort *)(lVar19 + 8) - 1;
            goto LAB_14368ffb8;
          }
          iVar16 = *(int *)(lVar18 + 8);
          if (0 < iVar16) {
            bVar15 = false;
            iVar17 = 0;
            do {
              local_70 = (uint)*(ushort *)(lVar19 + 10) * iVar17;
              local_98 = uVar6 + local_70;
              if (uVar10 == 0) {
                lStack_90 = 0;
              }
              else {
                lStack_90 = local_70 + uVar10;
                if (*(int *)(local_b8 + 8) <= iVar17) {
                  lStack_90 = 0;
                }
              }
              local_78 = 0;
              if (lStack_90 != 0) {
                local_78 = param_2[4];
              }
              cVar8 = FUN_14368fba4(param_1,&local_98);
              if (cVar8 == '\0') break;
              iVar17 = iVar17 + 1;
              bVar15 = iVar16 <= iVar17;
            } while (iVar17 != iVar16);
            if ((bVar15) && (*(short *)(param_1 + 0x90) == 0)) goto LAB_14368ffb0;
          }
        }
        else {
          local_d8 = *(undefined8 *)(param_1 + 0x80);
          local_f0 = *(undefined1 **)(param_1 + 0x18);
          local_110 = *(int *)(param_1 + 0x20);
          uStack_10c = *(undefined4 *)(param_1 + 0x24);
          puStack_108 = *(ulonglong **)(param_1 + 0x28);
          local_120 = param_2[4];
          local_128 = *param_2;
          local_e0 = local_c0;
          local_e8 = CONCAT71(local_e8._1_7_,param_1[1]);
          local_f8 = CONCAT71(local_f8._1_7_,*param_1);
          local_100 = (ulonglong *)CONCAT44(local_100._4_4_,iVar16);
          local_118 = CONCAT71(local_118._1_7_,*(undefined1 *)((longlong)param_2 + 0x2e));
          cVar8 = FUN_143690edd(*(undefined8 *)(param_1 + 8),param_2[2],(int)param_2[5],param_2[1]);
          if (cVar8 != '\0') {
            **(undefined1 **)(param_1 + 0x10) = 1;
          }
LAB_14368ffb8:
          plVar5 = *(longlong **)(param_1 + 8);
          if ((*(byte *)((longlong)plVar5 + 0x29) & 2) == 0) {
            local_a0 = local_a0 & 0xffffffff00000000;
            (**(code **)(*plVar5 + 0x188))(plVar5,&local_a0);
            if (*param_1 == '\x01') {
              plVar5 = *(longlong **)(param_1 + 8);
              local_98 = CONCAT44(local_98._4_4_,0xabadf00d);
              puVar7 = (ulonglong *)plVar5[1];
              if (puVar7[1] < *puVar7 + 4) {
                if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
                  (**(code **)(*plVar5 + 0x170))(plVar5,&local_98,4);
                }
                else {
                  FUN_14572512c(plVar5,&local_98);
                }
              }
              else {
                *puVar7 = *puVar7 + 4;
              }
            }
            *(undefined2 *)(param_1 + 0x90) = (undefined2)local_a0;
            iVar17 = *(int *)((longlong)param_2 + 0x1c);
            goto LAB_14369003b;
          }
        }
        local_c4 = 0;
        break;
      }
      if (*(char *)(lVar19 + 0x1c) == '\0') {
        iVar16 = *(ushort *)(lVar19 + 8) - 1;
      }
LAB_14369003b:
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar17);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_c4;
}



// FUNCTION 14369015a FUN_14369015a body=2437 status=ok
// SIG undefined FUN_14369015a(void)

ulonglong FUN_14369015a(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                       int param_5,int param_6,longlong param_7,int param_8,longlong *param_9,
                       undefined8 param_10,undefined1 *param_11,undefined1 *param_12,
                       longlong param_13)

{
  byte bVar1;
  char cVar2;
  undefined8 unaff_RDI;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined1 *local_1f0;
  ulonglong local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong **local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  byte local_196;
  char local_195;
  uint local_194;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong *local_178;
  undefined1 *local_170;
  ulonglong local_168;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  longlong **local_140;
  ulonglong local_138;
  longlong local_130;
  undefined1 local_121;
  longlong local_120;
  longlong *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined **local_108 [5];
  byte local_df;
  longlong *local_b0;
  longlong local_90;
  longlong local_78;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_3 == 0) {
    local_108[0] = (undefined **)((ulonglong)local_108[0] & 0xffffffff00000000);
    (**(code **)(*param_4 + 0x188))(param_4);
    if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((int)local_108[0] == 0) goto LAB_143690a78;
      FUN_14572541c(param_4);
    }
    uVar4 = 0;
  }
  else {
    FUN_1448fcc30(local_108,0,0,0);
    local_58 = param_4[0x16];
    local_10c = 0;
    (**(code **)(*param_4 + 0x188))(param_4);
    if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
      local_160 = (longlong *)(param_1 + 0x38);
      local_168 = (ulonglong)(uint)((int)param_9 - param_8);
      local_130 = param_1 + 0xe8;
      local_170 = (undefined1 *)(param_2 + 0x70);
      if (param_7 == 0) {
        local_170 = (undefined1 *)0x0;
      }
      local_178 = (longlong *)(param_1 + 0x28);
LAB_143690244:
      if (local_10c == 0) {
        uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        goto LAB_1436909bc;
      }
      local_10c = local_10c - 1;
      if ((local_10c < *(uint *)(param_3 + 0x20)) &&
         (iVar5 = *(int *)(*(longlong *)(param_3 + 0x18) + 4 + (longlong)(int)local_10c * 0x14),
         iVar5 != 0)) {
        local_110 = 0;
        (**(code **)(*param_4 + 0x188))(param_4,&local_110);
        if (((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) &&
           (FUN_1400ec332(local_108,param_4,local_110,0),
           (*(byte *)((longlong)param_4 + 0x29) & 2) == 0)) {
          if (*(char *)(*(longlong *)(param_3 + 0x18) + 0x12 + (longlong)(int)local_10c * 0x14) ==
              '\0') {
            if (param_5 < param_6) {
              iVar11 = param_5;
              do {
                uVar4 = *local_160 + (longlong)iVar11 * 0x20;
                if (*(int *)(*local_160 + 0x18 + (longlong)iVar11 * 0x20) == iVar5) {
                  if (iVar11 != -1) {
                    if (*(char *)(uVar4 + 0x1c) == '\0') {
                      local_196 = local_df;
                      local_190 = param_1;
                      local_188 = param_2;
                      local_180 = param_3;
                      if ((local_df & 2) != 0) {
                        local_194 = 0;
                        goto LAB_143690574;
                      }
                      pbVar9 = (byte *)(((longlong)local_60 >> 3) + local_78);
                      uVar8 = local_60 & 7;
                      bVar1 = (byte)local_60 & 7;
                      local_194 = 0;
                      iVar5 = 0;
                      goto LAB_1436904e7;
                    }
                    local_1a8 = param_13;
                    local_1b0 = local_130;
                    local_1b8 = CONCAT71(local_1b8._1_7_,(*(byte *)(param_1 + 0x20) & 1) == 0);
                    local_1c0 = param_12;
                    local_1c8 = (undefined1 *)((ulonglong)local_1c8 & 0xffffffffffffff00);
                    local_1d0 = (longlong **)CONCAT44(local_1d0._4_4_,iVar11);
                    local_1d8 = local_160;
                    local_1e0 = local_178;
                    local_1e8 = local_1e8 & 0xffffffffffffff00;
                    local_1f0 = local_170;
                    local_1f8 = param_9;
                    cVar2 = FUN_143690edd(local_108,param_10,local_168);
                    if (cVar2 != '\0') {
                      *param_11 = 1;
                    }
                    if ((local_68 != local_60) || ((local_df & 2) != 0)) goto LAB_1436909ba;
                    goto LAB_143690422;
                  }
                  break;
                }
                if (*(char *)(uVar4 + 0x1c) == '\0') {
                  iVar11 = *(ushort *)(uVar4 + 8) - 1;
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < param_6);
            }
            *(undefined1 *)(*(longlong *)(param_3 + 0x18) + (longlong)(int)local_10c * 0x14 + 0x12)
                 = 1;
          }
          goto LAB_143690422;
        }
      }
    }
LAB_1436909ba:
    uVar4 = 0;
LAB_1436909bc:
    local_108[0] = &PTR_FUN_149e73df0;
    if (local_50 != 0) {
      (**(code **)(local_50 + -0x10))(local_50 + -0x10);
    }
    local_108[0] = &PTR_FUN_149e37220;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    local_108[0] = &PTR__purecall_149e35f70;
    if (local_b0 != (longlong *)0x0) {
      if (*local_b0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_b0);
    }
    if (local_90 != 0) {
      if (*(longlong *)(local_90 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_90);
    }
  }
LAB_143690a78:
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
  while( true ) {
    uVar10 = ((uint)pbVar9[uVar8 != 0] & ~(-1 << bVar1)) << (8 - bVar1 & 7) & 0xff |
             (uint)(*pbVar9 >> bVar1) & (~(-1 << (8 - bVar1 & 0x1f)) | 0xffffff01U);
    local_194 = local_194 | (uVar10 >> 1) << ((byte)iVar5 & 0x1f);
    local_60 = uVar7;
    if ((uVar10 & 1) == 0) break;
    pbVar9 = pbVar9 + 1;
    iVar5 = iVar5 + 7;
    if (iVar5 == 0x23) break;
LAB_1436904e7:
    uVar7 = local_60 + 8;
    if ((longlong)local_68 < (longlong)uVar7) {
      FUN_1405d09b8(local_108,8);
      break;
    }
  }
LAB_143690574:
  local_196 = local_df;
  if (((local_df & 2) == 0) && (local_194 < 0x10000)) {
    if (param_7 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(int *)(uVar4 + 0x10) + param_7;
    }
    local_118 = param_9;
    local_120 = param_7;
    local_121 = 0;
    local_1f0 = (undefined1 *)((ulonglong)((uint)*(ushort *)(uVar4 + 0x16) * 0x30) + *local_178);
    local_1b8 = local_58;
    local_1c0 = &local_121;
    local_1c8 = local_170;
    local_1d0 = &local_118;
    local_1d8 = &local_120;
    local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,iVar11);
    local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,(int)local_168 + *(int *)(uVar4 + 0xc));
    local_1e8 = uVar4;
    local_140 = (longlong **)
                FUN_143690ae0(local_194,lVar3,(longlong)*(int *)(uVar4 + 0xc) + (longlong)param_9,
                              param_10);
    local_148 = local_118;
    local_158 = local_120;
    local_195 = lVar3 == 0 || local_120 == 0;
    local_150 = lVar3;
    do {
      local_196 = local_df;
      if ((local_df & 2) != 0) break;
      pbVar9 = (byte *)(((longlong)local_60 >> 3) + local_78);
      uVar8 = local_60 & 7;
      bVar1 = (byte)local_60 & 7;
      uVar10 = 0;
      iVar5 = 0;
      local_138 = local_68;
      do {
        uVar7 = local_60 + 8;
        if ((longlong)local_68 < (longlong)uVar7) {
          FUN_1405d09b8(local_108,8);
          break;
        }
        uVar6 = ((uint)pbVar9[uVar8 != 0] & ~(-1 << bVar1)) << (8 - bVar1 & 7) & 0xff |
                (uint)(*pbVar9 >> bVar1) & (~(-1 << (8 - bVar1 & 0x1f)) | 0xffffff01U);
        uVar10 = uVar10 | (uVar6 >> 1) << ((byte)iVar5 & 0x1f);
        local_60 = uVar7;
        if ((uVar6 & 1) == 0) break;
        pbVar9 = pbVar9 + 1;
        iVar5 = iVar5 + 7;
      } while (iVar5 != 0x23);
      local_196 = local_df;
      if ((local_df & 2) != 0) break;
      if (uVar10 == 0) goto LAB_1436908ab;
      uVar10 = uVar10 - 1;
      if (local_194 <= uVar10) break;
      lVar3 = (longlong)(int)(*(ushort *)(uVar4 + 10) * uVar10);
      if (local_195 == '\0') {
        local_1e8 = local_158 + lVar3;
        if (*(uint *)(local_150 + 8) <= uVar10) {
          local_1e8 = 0;
        }
      }
      else {
        local_1e8 = 0;
      }
      local_1d8 = (longlong *)(lVar3 + (longlong)local_148);
      local_1b8 = param_13;
      local_1c0 = param_12;
      local_1c8 = param_11;
      local_1d0 = local_140;
      local_1e0 = local_148;
      local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,*(ushort *)(uVar4 + 8) - 1);
      local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,iVar11 + 1);
      cVar2 = FUN_14369015a(local_190,local_188,local_180,local_108);
      if ((cVar2 == '\0') || ((local_df & 2) != 0)) break;
    } while( true );
  }
  goto LAB_1436909ba;
LAB_1436908ab:
  if (local_68 - local_60 == 8) {
    pbVar9 = (byte *)(((longlong)local_60 >> 3) + local_78);
    uVar4 = local_60 & 7;
    bVar1 = (byte)local_60 & 7;
    uVar10 = 0;
    iVar5 = 0;
    do {
      uVar8 = local_60 + 8;
      if ((longlong)local_68 < (longlong)uVar8) {
        FUN_1405d09b8(local_108,8);
        break;
      }
      uVar6 = ((uint)pbVar9[uVar4 != 0] & ~(-1 << bVar1)) << (8 - bVar1 & 7) & 0xff |
              (uint)(*pbVar9 >> bVar1) & (~(-1 << (8 - bVar1 & 0x1f)) | 0xffffff01U);
      uVar10 = uVar10 | (uVar6 >> 1) << ((byte)iVar5 & 0x1f);
      local_60 = uVar8;
      if ((uVar6 & 1) == 0) break;
      pbVar9 = pbVar9 + 1;
      iVar5 = iVar5 + 7;
    } while (iVar5 != 0x23);
    if (uVar10 != 0) goto LAB_1436909ba;
  }
  param_3 = local_180;
  param_1 = local_190;
  param_2 = local_188;
  if (local_68 != local_60) goto LAB_1436909ba;
LAB_143690422:
  local_10c = 0;
  (**(code **)(*param_4 + 0x188))(param_4,&local_10c);
  if ((*(byte *)((longlong)param_4 + 0x29) & 2) != 0) goto LAB_1436909ba;
  goto LAB_143690244;
}



// FUNCTION 143690ae0 FUN_143690ae0 body=1020 status=ok
// SIG undefined FUN_143690ae0(void)

undefined8
FUN_143690ae0(int param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,uint param_5,
             longlong param_6,longlong *param_7,undefined4 param_8,undefined8 *param_9,
             undefined8 *param_10,longlong param_11,char *param_12,longlong param_13)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_158 [40];
  undefined4 *local_130;
  undefined8 *local_128;
  int local_11c;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  lVar14 = param_13;
  uVar7 = param_8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_4 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
      plVar10 = param_4 + 7;
      if ((longlong *)param_4[8] != (longlong *)0x0) {
        plVar10 = (longlong *)param_4[8];
      }
      iVar9 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_4[9] - 1U & param_5) * 4);
      if (iVar9 != -1) {
        do {
          lVar13 = *param_4 + (longlong)iVar9 * 0xe0;
          if (*(uint *)(*param_4 + (longlong)iVar9 * 0xe0) == param_5) {
            if (lVar13 != 0) {
              lVar13 = lVar13 + 8;
              goto LAB_143690d01;
            }
            break;
          }
          iVar9 = *(int *)(lVar13 + 0xd8);
        } while (iVar9 != -1);
      }
    }
    uVar2 = *(ushort *)((longlong)param_7 + 0x16);
    local_58 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    local_58[4] = 0;
    *(undefined4 *)(local_58 + 5) = 0;
    *local_58 = 0;
    local_58[1] = 0;
    *(undefined8 *)((longlong)local_58 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)local_58 + 0x34) = 0;
    local_58[8] = 0;
    *(undefined4 *)(local_58 + 9) = 0;
    local_118 = CONCAT44(uVar7,(uint)uVar2);
    local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
    local_e8 = 0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_50._0_4_ = 0;
    iVar9 = 0;
    uVar3 = (uint)local_50;
    if (lVar14 != 0) {
      uVar3 = *(uint *)(lVar14 + 0xc);
      local_50 = (ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar9 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar9 = *(int *)(lVar14 + 0x10);
        bVar15 = iVar9 == 0;
        if (bVar15) {
          *(int *)(lVar14 + 0x10) = iVar11;
          iVar9 = 0;
        }
        UNLOCK();
        uVar3 = (uint)local_50;
        if (bVar15) {
          iVar9 = iVar11;
        }
      }
    }
    local_50._0_4_ = uVar3;
    local_50 = CONCAT44(iVar9,(uint)local_50);
    local_130 = &param_5;
    local_128 = &local_118;
    FUN_14041f10e(param_4,&local_11c);
    lVar13 = *param_4 + (longlong)local_11c * 0xe0 + 8;
    FUN_14041f8ca(&local_118);
  }
LAB_143690d01:
  pcVar6 = param_12;
  puVar5 = param_9;
  plVar10 = param_7;
  lVar14 = param_6;
  if ((param_11 == 0) || (*(int *)(param_6 + 0x28) == -1)) {
    uVar8 = 0;
    puVar12 = param_10;
  }
  else {
    if ((*(int *)(param_3 + 1) != param_1) || (*(int *)(param_6 + 0x24) == 1)) {
      FUN_1417c47ea(param_11,param_6);
    }
    puVar12 = param_10;
    if (*pcVar6 == '\0') {
      if (*(int *)(lVar14 + 0x28) < 1) {
        if (*(int *)(param_2 + 1) != *(int *)(param_3 + 1)) {
          lVar14 = *plVar10;
          uVar1 = *(undefined1 *)(lVar14 + 0x70);
          uVar7 = (**(code **)(**(longlong **)(lVar14 + 0x78) + 0x178))();
          local_118 = *(longlong *)(lVar14 + 0x78);
          local_108 = CONCAT44(uVar7,*(undefined4 *)(local_118 + 0x34));
          uStack_100 = CONCAT71(uStack_100._1_7_,uVar1);
          local_110 = param_2;
          FUN_144a8a902(&local_118,*(undefined4 *)(param_3 + 1));
          plVar10 = param_7;
        }
      }
      else {
        if (param_2 != param_3) {
          plVar4 = (longlong *)*plVar10;
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,param_2,param_3,(int)plVar4[6]);
          }
          else {
            memcpy(param_2,param_3,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
        *pcVar6 = '\x01';
      }
    }
    uVar8 = *param_2;
  }
  *puVar5 = uVar8;
  lVar14 = *plVar10;
  uVar1 = *(undefined1 *)(lVar14 + 0x70);
  uVar7 = (**(code **)(**(longlong **)(lVar14 + 0x78) + 0x178))();
  local_118 = *(longlong *)(lVar14 + 0x78);
  local_108 = CONCAT44(uVar7,*(undefined4 *)(local_118 + 0x34));
  uStack_100 = CONCAT71(uStack_100._1_7_,uVar1);
  local_110 = param_3;
  FUN_144a8a902(&local_118,param_1);
  *puVar12 = *param_3;
  if (lVar13 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar13 + 0xc0);
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 143690edd FUN_143690edd body=3161 status=ok
// SIG undefined FUN_143690edd(void)

ulonglong FUN_143690edd(longlong param_1,longlong *param_2,undefined4 param_3,longlong param_4,
                       longlong param_5,longlong param_6,char param_7,longlong *param_8,
                       longlong *param_9,int param_10,char param_11,char *param_12,char param_13,
                       longlong *param_14,undefined8 param_15)

{
  ulonglong uVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  void *_Src;
  ulonglong uVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  void *_Dst;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ushort uVar17;
  ushort uVar18;
  int iVar19;
  int iVar20;
  double *pdVar21;
  double *pdVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint *puVar27;
  longlong lVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_1b8 [32];
  double *local_198;
  uint local_190;
  undefined4 local_188;
  longlong local_180;
  undefined8 local_178;
  double *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  uint *local_150;
  longlong local_148;
  uint local_13c;
  undefined8 local_138;
  uint *local_130;
  double **local_128;
  undefined1 local_11c [4];
  double *local_118;
  int local_110;
  ulonglong local_48;
  
  local_170 = (double *)CONCAT44(local_170._4_4_,param_3);
  local_148 = (longlong)param_10;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar13 = *param_9;
  plVar12 = (longlong *)(lVar13 + local_148 * 0x20);
  uVar17 = *(ushort *)(lVar13 + 0x16 + local_148 * 0x20);
  lVar25 = *param_8;
  plVar7 = plVar12;
  if (param_13 == '\0') {
    if (uVar17 == 4) {
      lVar11 = 0x1cc;
    }
    else {
      if (uVar17 != 9) goto LAB_143690f7b;
      lVar11 = 0xdc;
    }
    plVar7 = (longlong *)(lVar13 + (ulonglong)*(ushort *)(lVar25 + lVar11) * 0x20);
  }
LAB_143690f7b:
  if (param_2 != (longlong *)0x0) {
    lVar13 = *(longlong *)(param_1 + 0xb0);
    FUN_144958770(lVar13 + 0x30,0);
    FUN_144958770(lVar13 + 0x80,0);
    *(undefined1 *)(lVar13 + 0x28) = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x308))();
  local_138 = *(undefined8 *)(param_1 + 0xa8);
  if ((param_6 == 0) ||
     (lVar25 = lVar25 + (ulonglong)((uint)uVar17 * 0x30), *(int *)(lVar25 + 0x28) == -1)) {
    local_198 = (double *)0x0;
    (**(code **)(*(longlong *)*plVar12 + 0xd8))
              ((longlong *)*plVar12,param_1,*(undefined8 *)(param_1 + 0xb0),
               *(int *)((longlong)plVar7 + 0xc) + param_5);
    goto LAB_14369109a;
  }
  if (param_7 == '\0') {
    _Src = (void *)(*(int *)((longlong)plVar7 + 0xc) + param_5);
    _Dst = (void *)((int)plVar12[2] + param_4);
    if (_Dst != _Src) {
      plVar10 = (longlong *)*plVar12;
      if ((*(byte *)((longlong)plVar10 + 0x3b) & 0x40) == 0) {
        (**(code **)(*plVar10 + 0x100))(plVar10,_Dst,_Src,1);
      }
      else {
        memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar10 + 0x34));
      }
    }
  }
  local_198 = (double *)0x0;
  (**(code **)(*(longlong *)*plVar12 + 0xd8))
            ((longlong *)*plVar12,param_1,*(undefined8 *)(param_1 + 0xb0),
             *(int *)((longlong)plVar7 + 0xc) + param_5);
  if (*(int *)(lVar25 + 0x24) == 1) goto LAB_14369108a;
  if (0x17 < *(byte *)((longlong)plVar12 + 0x1c) - 2) {
    if (*plVar12 == 0) {
      FUN_140056680(&local_118,&DAT_149e01fe8);
    }
    else {
      FUN_1400021e4(*plVar12 + 0x20,&local_118);
    }
    local_198 = local_118;
    if (local_110 == 0) {
      local_198 = (double *)&DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                  L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                  *(undefined1 *)((longlong)plVar12 + 0x1c));
    if (local_118 != (double *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14369108a;
  }
  pdVar21 = (double *)(*(int *)((longlong)plVar7 + 0xc) + param_5);
  pdVar22 = (double *)(param_4 + (int)plVar12[2]);
  switch((uint)*(byte *)((longlong)plVar12 + 0x1c)) {
  case 2:
  case 3:
  case 0x16:
  case 0x18:
    cVar3 = (**(code **)(*(longlong *)*plVar12 + 200))((longlong *)*plVar12,pdVar22,pdVar21,0);
    goto LAB_14369156d;
  case 4:
    bVar29 = NAN(*(float *)pdVar22) || NAN(*(float *)pdVar21);
    bVar30 = *(float *)pdVar22 == *(float *)pdVar21;
LAB_14369179b:
    if ((!bVar30) || (bVar29)) goto LAB_14369108a;
    break;
  case 5:
  case 9:
    if (*(float *)pdVar22 != *(float *)pdVar21) goto LAB_14369108a;
    break;
  case 6:
  case 0x15:
    if (*(char *)pdVar22 != *(char *)pdVar21) goto LAB_14369108a;
    break;
  case 7:
  case 0x14:
  case 0x17:
    if (*pdVar22 != *pdVar21) goto LAB_14369108a;
    break;
  case 8:
    local_168 = (longlong *)*plVar12;
    lVar13 = (**(code **)(*local_168 + 0x210))(local_168,pdVar22);
    lVar11 = (**(code **)(*local_168 + 0x210))(local_168,pdVar21);
    if (lVar13 != lVar11) goto LAB_14369108a;
    break;
  default:
    if ((*pdVar22 == *pdVar21) && (!NAN(*pdVar22) && !NAN(*pdVar21))) {
      if ((pdVar22[1] == pdVar21[1]) && (!NAN(pdVar22[1]) && !NAN(pdVar21[1]))) {
        bVar29 = NAN(pdVar22[2]) || NAN(pdVar21[2]);
        bVar30 = pdVar22[2] == pdVar21[2];
        goto LAB_14369179b;
      }
    }
    goto LAB_14369108a;
  case 0xc:
    if ((*pdVar22 == *pdVar21) && (!NAN(*pdVar22) && !NAN(*pdVar21))) {
      if ((pdVar22[1] == pdVar21[1]) && (!NAN(pdVar22[1]) && !NAN(pdVar21[1]))) {
        if ((pdVar22[2] == pdVar21[2]) && (!NAN(pdVar22[2]) && !NAN(pdVar21[2]))) {
          bVar29 = NAN(pdVar22[3]) || NAN(pdVar21[3]);
          bVar30 = pdVar22[3] == pdVar21[3];
          goto LAB_14369179b;
        }
      }
    }
    goto LAB_14369108a;
  case 0xe:
    cVar3 = FUN_140ba41f1(pdVar22,pdVar21);
    goto LAB_14369156d;
  case 0xf:
    cVar3 = FUN_1436982e0(pdVar22,pdVar21);
    goto LAB_14369156d;
  case 0x13:
    fVar2 = *(float *)(pdVar22 + 1);
    if (fVar2 == *(float *)(pdVar21 + 1)) {
      if (1 < (int)fVar2) {
        lVar13 = 0;
        while( true ) {
          uVar17 = *(ushort *)((longlong)*pdVar22 + lVar13);
          uVar14 = (ulonglong)uVar17;
          uVar18 = *(ushort *)((longlong)*pdVar21 + lVar13);
          if (uVar17 != uVar18) break;
          if (uVar17 == 0) goto LAB_14369109a;
LAB_143691810:
          lVar13 = lVar13 + 2;
        }
        if ((uVar18 | uVar17) < 0x80) {
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          uVar8 = (ulonglong)uVar18;
          uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar8]) goto LAB_143691810;
        }
        if (uVar17 != uVar18) goto LAB_14369108a;
      }
    }
    else if ((int)*(float *)(pdVar21 + 1) + (int)fVar2 != 1) goto LAB_14369108a;
    break;
  case 0x19:
    if ((int)param_14[1] != *(int *)((longlong)param_14 + 0x34)) {
      uVar16 = ((uint)((ulonglong)plVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar12 >> 4)) *
               -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      plVar10 = param_14 + 7;
      if ((longlong *)param_14[8] != (longlong *)0x0) {
        plVar10 = (longlong *)param_14[8];
      }
      iVar19 = *(int *)((longlong)plVar10 +
                       (ulonglong)((int)param_14[9] - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
      if (iVar19 != -1) {
        do {
          lVar13 = *param_14 + (longlong)iVar19 * 0x20;
          if (*(longlong **)(*param_14 + (longlong)iVar19 * 0x20) == plVar12) goto LAB_143691919;
          iVar19 = *(int *)(lVar13 + 0x18);
        } while (iVar19 != -1);
      }
    }
    lVar13 = 0;
LAB_143691919:
    local_198 = pdVar21;
    cVar3 = FUN_143697dfb(lVar13 + 8,param_14,0xffffffff,pdVar22);
LAB_14369156d:
    if (cVar3 == '\0') {
LAB_14369108a:
      FUN_1417c47ea(param_6,lVar25);
    }
  }
LAB_14369109a:
  if (param_11 != '\0') {
    FUN_14368e12f(plVar12,local_148,*(int *)((longlong)plVar7 + 0xc) + param_5,param_1);
  }
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x310))
            (*(longlong **)(param_1 + 0xb0),*plVar12,param_15);
  if (param_2 == (longlong *)0x0) {
    uVar14 = 0;
    goto LAB_1436916a4;
  }
  uVar8 = (longlong)(int)local_170 + (longlong)*(int *)((longlong)plVar7 + 0xc);
  local_13c = (uint)uVar8;
  lVar13 = *(longlong *)(param_1 + 0xb0);
  iVar19 = *(int *)(lVar13 + 0x38);
  iVar5 = *(int *)(lVar13 + 100);
  uVar14 = CONCAT71((int7)((ulonglong)param_5 >> 8),iVar5 < iVar19);
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    iVar20 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_2[9] - 1U & local_13c) * 4);
    if (iVar20 != -1) {
      do {
        lVar25 = *param_2 + (longlong)iVar20 * 0xe0;
        if (*(uint *)(*param_2 + (longlong)iVar20 * 0xe0) == local_13c) goto LAB_14369115f;
        iVar20 = *(int *)(lVar25 + 0xd8);
      } while (iVar20 != -1);
    }
  }
  lVar25 = 0;
LAB_14369115f:
  lVar11 = lVar25 + 8;
  if (lVar25 == 0) {
    lVar11 = 0;
  }
  if ((iVar5 < iVar19) || (*(int *)(lVar13 + 0xb4) < *(int *)(lVar13 + 0x88))) {
    pdVar21 = (double *)(lVar13 + 0x80);
    if (lVar11 != 0) {
      local_168 = (longlong *)CONCAT44(local_168._4_4_,(int)uVar14);
      if (*(int *)(lVar11 + 0x18) - *(int *)(lVar11 + 0x44) == iVar19 - iVar5) {
        puVar27 = (uint *)(lVar11 + 0x20);
        iVar20 = *(int *)(lVar11 + 0x38);
        local_178 = puVar27;
        if (iVar20 == 0) {
          uVar26 = 1;
          iVar4 = 0;
          uVar8 = 0;
          iVar23 = 0;
        }
        else {
          puVar9 = *(uint **)(lVar11 + 0x30);
          if (*(uint **)(lVar11 + 0x30) == (uint *)0x0) {
            puVar9 = puVar27;
          }
          uVar16 = *puVar9;
          if (uVar16 == 0) {
            iVar23 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar23 = iVar20 + -1;
            }
            uVar8 = 0;
            uVar26 = (ulonglong)(uint)(iVar23 >> 5);
            if (iVar23 >> 5 < 1) {
              uVar26 = uVar8;
            }
            iVar4 = 0;
            do {
              if (uVar26 == uVar8) goto LAB_143691345;
              iVar4 = iVar4 + 0x20;
              uVar16 = puVar9[uVar8 + 1];
              uVar8 = uVar8 + 1;
            } while (uVar16 == 0);
          }
          else {
            iVar4 = 0;
            uVar8 = 0;
          }
          uVar26 = (ulonglong)(-uVar16 & uVar16);
          uVar1 = uVar26 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar23 = (iVar4 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar23) {
            iVar23 = iVar20;
          }
        }
        if (iVar23 != iVar20) {
          iVar15 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar15 = iVar20 + -1;
          }
          if (iVar19 == iVar5) goto LAB_1436915f4;
          iVar15 = iVar15 >> 5;
          local_150 = (uint *)(lVar13 + 0x68);
          if (*(uint **)(lVar13 + 0x70) != (uint *)0x0) {
            local_150 = *(uint **)(lVar13 + 0x70);
          }
          local_158 = *(longlong *)(lVar11 + 0x10);
          uVar16 = *(int *)(lVar13 + 0x78) - 1;
          local_160 = CONCAT44(local_160._4_4_,uVar16);
          uVar6 = 0xffffffff;
          do {
            lVar25 = *(longlong *)(local_158 + (longlong)iVar23 * 0x10);
            uVar24 = local_150[(int)lVar25 + (int)((ulonglong)lVar25 >> 0x20) * 0x17 & uVar16];
            if (uVar24 == 0xffffffff) goto LAB_1436915f4;
            while (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)(int)uVar24 * 0x10) !=
                   lVar25) {
              uVar24 = *(uint *)((longlong)(int)uVar24 * 0x10 + *(longlong *)(lVar13 + 0x30) + 8);
              if (uVar24 == 0xffffffff) goto LAB_1436915f4;
            }
            uVar6 = uVar6 & ~(uint)uVar26;
            puVar9 = *(uint **)(lVar11 + 0x30);
            if (*(uint **)(lVar11 + 0x30) == (uint *)0x0) {
              puVar9 = puVar27;
            }
            iVar19 = (int)uVar8;
            lVar25 = (longlong)iVar19;
            uVar24 = puVar9[lVar25] & uVar6;
            if (uVar24 == 0) {
              iVar5 = iVar15;
              if (iVar15 < iVar19) {
                iVar5 = iVar19;
              }
              if (iVar15 <= iVar19) break;
              lVar28 = 0;
              while( true ) {
                iVar4 = iVar4 + 0x20;
                uVar24 = puVar9[lVar25 + lVar28 + 1];
                if (uVar24 != 0) break;
                lVar28 = lVar28 + 1;
                if (iVar5 - lVar25 == lVar28) goto LAB_143691345;
              }
              uVar8 = (ulonglong)(iVar19 + (int)lVar28 + 1);
              uVar6 = 0xffffffff;
            }
            uVar26 = (ulonglong)(-uVar24 & uVar24);
            uVar1 = uVar26 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            iVar23 = (iVar4 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          } while (iVar23 < iVar20);
        }
LAB_143691345:
        if (*(int *)(lVar11 + 0x68) - *(int *)(lVar11 + 0x94) !=
            *(int *)(lVar13 + 0x88) - *(int *)(lVar13 + 0xb4)) goto LAB_1436915f4;
        local_150 = (uint *)(lVar11 + 0x70);
        iVar19 = *(int *)(lVar11 + 0x88);
        local_178._4_4_ = (uint)((ulonglong)puVar27 >> 0x20);
        if (iVar19 == 0) {
          uVar26 = 1;
          uVar8 = 0;
          local_178 = (uint *)((ulonglong)local_178._4_4_ << 0x20);
          iVar5 = 0;
        }
        else {
          puVar9 = *(uint **)(lVar11 + 0x80);
          if (*(uint **)(lVar11 + 0x80) == (uint *)0x0) {
            puVar9 = local_150;
          }
          uVar16 = *puVar9;
          if (uVar16 == 0) {
            iVar5 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar5 = iVar19 + -1;
            }
            uVar8 = 0;
            uVar26 = (ulonglong)(uint)(iVar5 >> 5);
            if (iVar5 >> 5 < 1) {
              uVar26 = uVar8;
            }
            local_178 = (uint *)((ulonglong)puVar27 & 0xffffffff00000000);
            do {
              if (uVar26 == uVar8) goto LAB_143691600;
              local_178 = (uint *)CONCAT44(local_178._4_4_,(int)local_178 + 0x20);
              uVar16 = puVar9[uVar8 + 1];
              uVar8 = uVar8 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar8 = 0;
            local_178 = (uint *)((ulonglong)local_178._4_4_ << 0x20);
          }
          uVar26 = (ulonglong)(-uVar16 & uVar16);
          uVar1 = uVar26 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar5 = ((int)local_178 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar19 <= iVar5) {
            iVar5 = iVar19;
          }
        }
        if (iVar5 != iVar19) {
          iVar20 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar20 = iVar19 + -1;
          }
          if (*(int *)(lVar13 + 0x88) == *(int *)(lVar13 + 0xb4)) goto LAB_1436915f4;
          iVar20 = iVar20 >> 5;
          local_158 = lVar13 + 0xb8;
          if (*(longlong *)(lVar13 + 0xc0) != 0) {
            local_158 = *(longlong *)(lVar13 + 0xc0);
          }
          local_160 = *(longlong *)(lVar11 + 0x60);
          uVar16 = 0xffffffff;
          do {
            lVar25 = *(longlong *)(local_160 + (longlong)iVar5 * 0x10);
            iVar5 = *(int *)(local_158 +
                            (ulonglong)
                            ((int)lVar25 + (int)((ulonglong)lVar25 >> 0x20) * 0x17 &
                            *(int *)(lVar13 + 200) - 1U) * 4);
            if (iVar5 == -1) goto LAB_1436915f4;
            while (*(longlong *)((longlong)*pdVar21 + (longlong)iVar5 * 0x10) != lVar25) {
              iVar5 = *(int *)((longlong)iVar5 * 0x10 + (longlong)*pdVar21 + 8);
              if (iVar5 == -1) goto LAB_1436915f4;
            }
            uVar16 = uVar16 & ~(uint)uVar26;
            puVar27 = *(uint **)(lVar11 + 0x80);
            if (*(uint **)(lVar11 + 0x80) == (uint *)0x0) {
              puVar27 = local_150;
            }
            iVar5 = (int)uVar8;
            lVar25 = (longlong)iVar5;
            uVar6 = puVar27[lVar25] & uVar16;
            if (uVar6 == 0) {
              iVar23 = iVar20;
              if (iVar20 < iVar5) {
                iVar23 = iVar5;
              }
              if (iVar20 <= iVar5) break;
              local_178 = (uint *)CONCAT44(local_178._4_4_,(int)local_178 + 0x20);
              lVar28 = 0;
              while (uVar6 = puVar27[lVar25 + lVar28 + 1], uVar6 == 0) {
                local_178 = (uint *)CONCAT44(local_178._4_4_,(int)local_178 + 0x20);
                lVar28 = lVar28 + 1;
                if (iVar23 - lVar25 == lVar28) goto LAB_143691600;
              }
              uVar8 = (ulonglong)(iVar5 + (int)lVar28 + 1);
              uVar16 = 0xffffffff;
            }
            uVar26 = (ulonglong)(-uVar6 & uVar6);
            uVar1 = uVar26 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            iVar5 = ((int)local_178 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          } while (iVar5 < iVar19);
        }
      }
      else {
LAB_1436915f4:
        *param_12 = '\x01';
      }
LAB_143691600:
      local_170 = pdVar21;
      if (*param_12 != '\x01') {
        uVar14 = uVar14 & 0xffffffff;
        if ((DAT_14cb01b20 == '\x01') && (*(char *)((longlong)plVar12 + 0x1c) == '\x19')) {
          local_180 = *(longlong *)(param_1 + 0xb0);
          local_190 = (uint)*(ushort *)((longlong)plVar12 + 0x16);
          local_198 = pdVar21;
          local_188 = (int)local_148;
          FUN_140491e6e(&local_118,param_1,&local_138);
          local_130 = &local_13c;
          local_128 = &local_118;
          FUN_14041f10e(param_2,local_11c);
          FUN_14041f8ca(&local_118);
        }
        goto LAB_143691680;
      }
      lVar13 = *(longlong *)(param_1 + 0xb0);
      uVar14 = uVar14 & 0xffffffff;
    }
    local_190 = (uint)*(ushort *)((longlong)plVar12 + 0x16);
    local_198 = pdVar21;
    local_188 = (int)local_148;
    local_180 = lVar13;
    FUN_140491e6e(&local_118,param_1,&local_138);
    local_130 = &local_13c;
    local_128 = &local_118;
    FUN_14041f10e(param_2,local_11c);
    FUN_14041f8ca(&local_118);
LAB_14369167c:
    *param_12 = '\x01';
  }
  else if (lVar11 != 0) {
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      plVar12 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar12 = (longlong *)param_2[8];
      }
      iVar19 = *(int *)((longlong)plVar12 + ((longlong)(int)param_2[9] - 1U & uVar8) * 4);
      if (iVar19 != -1) {
        do {
          if (*(uint *)(*param_2 + (longlong)iVar19 * 0xe0) == local_13c) {
            FUN_1417ecdba(param_2);
            break;
          }
          iVar19 = *(int *)((longlong)iVar19 * 0xe0 + *param_2 + 0xd8);
        } while (iVar19 != -1);
      }
    }
    goto LAB_14369167c;
  }
LAB_143691680:
  lVar13 = *(longlong *)(param_1 + 0xb0);
  FUN_144958770(lVar13 + 0x30,0);
  FUN_144958770(lVar13 + 0x80,0);
  *(undefined1 *)(lVar13 + 0x28) = 0;
LAB_1436916a4:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143691b38 FUN_143691b38 body=784 status=ok
// SIG undefined FUN_143691b38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143691b38(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c873400 == -0x662bf3f &&
      ((DAT_14c8733f8 == 0 && DAT_14c8733f4 == 0) && DAT_14c8733fc == 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c87e490) && (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1)) {
      FUN_1446f470e(&local_60,L"Unused custom version",1);
      _DAT_14c87e468 = 0;
      uRam000000014c87e46c = 0;
      uRam000000014c87e470 = 0;
      uRam000000014c87e474 = 0xf99d40c1;
      _DAT_14c87e478 = 0x100000000;
      _DAT_14c87e480 = 0;
      DAT_14c87e488 = local_60;
      _Init_thread_footer(&DAT_14c87e490);
    }
    piVar7 = (int *)&DAT_14c87e468;
LAB_143691be3:
    if (((uint)piVar7[4] < 0xb) ||
       (lVar8 = *(longlong *)(param_3 + 8), (*(byte *)(lVar8 + 0x29) & 2) != 0)) goto LAB_143691c3a;
    uVar6 = *(ulonglong *)(lVar8 + 0xa8);
    if (*(longlong *)(lVar8 + 0xa0) <= (longlong)uVar6) {
      FUN_1405d09b8(lVar8,1);
      goto LAB_143691c3a;
    }
    bVar1 = *(byte *)(*(longlong *)(lVar8 + 0x90) + (longlong)(int)(uVar6 >> 3));
    *(ulonglong *)(lVar8 + 0xa8) = uVar6 + 1;
    bVar9 = (bVar1 >> ((uint)uVar6 & 7) & 1) != 0;
  }
  else {
    lVar8 = (longlong)*(int *)(*(longlong *)(param_3 + 0x28) + 0x1440);
    if (lVar8 != 0) {
      piVar7 = *(int **)(*(longlong *)(param_3 + 0x28) + 0x1438);
      lVar8 = lVar8 * 0x28;
      do {
        if ((((*piVar7 == DAT_14c8733f4) && (piVar7[1] == DAT_14c8733f8)) &&
            (piVar7[2] == DAT_14c8733fc)) && (piVar7[3] == DAT_14c873400)) {
          if (piVar7 != (int *)0x0) goto LAB_143691be3;
          break;
        }
        piVar7 = piVar7 + 10;
        lVar8 = lVar8 + -0x28;
      } while (lVar8 != 0);
    }
LAB_143691c3a:
    bVar9 = false;
  }
  *(bool *)(param_3 + 0x4f) = bVar9;
  local_4c = 0;
  if ((*(int *)(param_4 + 0x30) == 1) ||
     ((**(code **)(**(longlong **)(param_3 + 8) + 0x188))(*(longlong **)(param_3 + 8),&local_4c),
     local_4c < *(uint *)(param_4 + 0x30))) {
    lVar8 = (longlong)(int)(*(ushort *)(param_4 + 0x40) + local_4c) * 0x30;
    if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x2c + lVar8) & 8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x28) + lVar8;
      lVar2 = *(longlong *)(param_4 + 0x70);
      plVar3 = *(longlong **)(lVar2 + 0xb8);
      FUN_1400021e4(lVar8 + 8,&local_60);
      if ((longlong *)(param_3 + 0x88) == &local_60) {
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_3 + 0x88) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_3 + 0x88) = local_60;
        local_60 = 0;
        *(undefined4 *)(param_3 + 0x90) = local_58;
        *(undefined4 *)(param_3 + 0x94) = local_54;
      }
      *(longlong *)(param_3 + 0x38) = lVar2;
      *(undefined2 *)(param_3 + 0x80) =
           *(undefined2 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x10) +
            (ulonglong)(ushort)(*(short *)(param_4 + 0x40) + (short)local_4c) * 2);
      *(longlong *)(param_3 + 0x30) =
           (longlong)*(int *)(lVar8 + 0x14) + *(longlong *)(param_3 + 0x58);
      cVar5 = (**(code **)(*plVar3 + 0x48))(plVar3,param_3);
      if (((cVar5 != '\0') &&
          (lVar4 = *(longlong *)(param_3 + 8), (*(byte *)(lVar4 + 0x29) & 2) == 0)) &&
         (*(longlong *)(lVar4 + 0xa0) == *(longlong *)(lVar4 + 0xa8))) {
        uVar6 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        if (*(int *)(lVar8 + 0x28) != -1) {
          FUN_140f2f56e(param_2,param_3,param_4,local_4c);
        }
        goto LAB_143691d81;
      }
    }
  }
  uVar6 = 0;
LAB_143691d81:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 143691e49 FUN_143691e49 body=1458 status=ok
// SIG undefined FUN_143691e49(void)

undefined4 FUN_143691e49(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  undefined *local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined4 local_144;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_134;
  longlong local_130;
  undefined8 local_128;
  undefined1 local_120;
  longlong *local_118;
  longlong lStack_110;
  undefined4 local_108;
  longlong local_100;
  undefined2 local_f8;
  longlong local_f0;
  longlong local_e8 [3];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined4 *local_78;
  longlong *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = *param_2;
  if (lVar10 == 0) goto LAB_143692112;
  puVar9 = *(undefined **)(lVar10 + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951ae0) {
    FUN_144b3d300(&DAT_14c951ae0);
    if (DAT_14c951ae0 == -1) {
      FUN_1446ddbd2();
      local_180 = FUN_140b31576;
      local_188 = &DAT_14c951a38;
      local_190 = 0;
      local_198 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
  }
  if (DAT_14c951a98 == 0) {
    bVar11 = puVar9 != (undefined *)0x0;
    if (puVar9 != &DAT_14c951a90 && bVar11) {
      do {
        puVar9 = *(undefined **)(puVar9 + 0x30);
        bVar11 = puVar9 != (undefined *)0x0;
        if (puVar9 == &DAT_14c951a90) break;
      } while (puVar9 != (undefined *)0x0);
    }
    if (!bVar11) goto LAB_143692054;
LAB_143691ecb:
    iVar3 = *(int *)(*param_1 + 8);
    *(uint *)(param_1[3] + 0x2c) = *(uint *)(param_1[3] + 0x2c) | 0x400;
    *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
    *(int *)(param_2 + 1) = (int)param_2[1] + *(int *)(lVar10 + 0x44);
    local_88 = param_2[4];
    local_98 = param_2[2];
    lStack_90 = param_2[3];
    local_a8 = (undefined4)*param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_a0 = (undefined4)param_2[1];
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar5 = (longlong *)*param_1;
    iVar4 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
      FUN_14001faa0(plVar5,iVar4);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)iVar4 * 0x20;
    *(undefined8 *)(lVar8 + 0x18 + lVar7) = 0;
    puVar1 = (undefined8 *)(lVar8 + 8 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(longlong *)(lVar8 + lVar7) = CONCAT44(uStack_a4,local_a8);
    *(undefined4 *)(lVar8 + 0xc + lVar7) = uStack_a0;
    *(undefined2 *)(lVar8 + 10 + lVar7) =
         *(undefined2 *)(*(longlong *)(CONCAT44(uStack_a4,local_a8) + 0x78) + 0x34);
    *(undefined2 *)(lVar8 + 0x14 + lVar7) = (undefined2)uStack_9c;
    *(short *)(lVar8 + 0x16 + lVar7) = (short)param_1[2];
    local_c0 = FUN_14369bd2d(param_1);
    *(undefined4 *)(lVar8 + 0x18 + lVar7) = local_c0;
    local_d0 = *(undefined8 *)(lVar10 + 0x78);
    local_b8 = param_2[3];
    local_c8 = 0;
    local_bc = 0;
    local_b0 = 0;
    FUN_143691e49(param_1);
    plVar5 = (longlong *)*param_1;
    iVar4 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
      FUN_14001faa0(plVar5,iVar4);
    }
    lVar10 = *plVar5;
    lVar8 = (longlong)iVar4 * 0x20;
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar10 + lVar8) = 0;
    ((undefined8 *)(lVar10 + lVar8))[1] = 0;
    *(undefined1 *)(lVar10 + 0x1c + lVar8) = 1;
    iVar4 = (int)((longlong *)*param_1)[1];
    lVar10 = (longlong)iVar3 * 0x20;
    *(short *)(*(longlong *)*param_1 + 8 + lVar10) = (short)iVar4;
    if (iVar4 - iVar3 < 3) {
      pbVar2 = (byte *)(*(longlong *)*param_1 + 0x1d + lVar10);
      *pbVar2 = *pbVar2 | 4;
    }
  }
  else {
    if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951a98) != 0) goto LAB_143691ecb;
LAB_143692054:
    lVar10 = *param_2;
    if (lVar10 == 0) {
LAB_143692112:
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
      *(int *)(param_2 + 1) = (int)param_2[1] + *(int *)(*param_2 + 0x44);
      FUN_14369ad4e(param_1,param_2);
      if ((param_2[3] != 0) &&
         (*(char *)(*(longlong *)*param_1 + 0x1c +
                   (longlong)((int)((longlong *)*param_1)[1] + -1) * 0x20) == '\x02')) {
        local_118 = (longlong *)0x0;
        lStack_110 = 0;
        (**(code **)(*(longlong *)*param_2 + 0x180))((longlong *)*param_2,&local_118,1);
        if (local_118 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      puVar9 = *(undefined **)(lVar10 + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c952a58) {
        FUN_144b3d300(&DAT_14c952a58);
        if (DAT_14c952a58 == -1) {
          local_188 = (undefined *)FUN_1446ddbd2();
          local_180 = FUN_1403a682c;
          local_190 = 0;
          local_198 = 0x108001;
          FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
          atexit(FUN_142818c9e);
          _Init_thread_footer(&DAT_14c952a58);
        }
      }
      if (DAT_14c952a10 == 0) {
        bVar11 = puVar9 != (undefined *)0x0;
        if (puVar9 != &DAT_14c952a08 && bVar11) {
          do {
            puVar9 = *(undefined **)(puVar9 + 0x30);
            bVar11 = puVar9 != (undefined *)0x0;
            if (puVar9 == &DAT_14c952a08) break;
          } while (puVar9 != (undefined *)0x0);
        }
        if (!bVar11) goto LAB_143692112;
      }
      else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c952a10) == 0) goto LAB_143692112;
      lVar8 = *(longlong *)(lVar10 + 0x70);
      *(int *)(param_2 + 1) = (int)param_2[1] + *(int *)(lVar10 + 0x44);
      if ((*(byte *)(lVar8 + 0xb1) & 4) == 0) {
        local_158 = param_2[4];
        local_178 = (undefined4)*param_2;
        uStack_174 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_170 = (undefined4)param_2[1];
        uStack_16c = *(undefined4 *)((longlong)param_2 + 0xc);
        local_168 = (undefined4)param_2[2];
        uStack_164 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_160 = (undefined4)param_2[3];
        uStack_15c = *(undefined4 *)((longlong)param_2 + 0x1c);
        uVar6 = FUN_14369a0b6(param_1);
        goto LAB_143692287;
      }
      *(undefined1 *)((longlong)param_1 + 0x21) = 1;
      if (((DAT_14cb01ab0 == '\x01') && (param_1[5] != 0)) && ((*(byte *)(lVar8 + 0xb0) & 2) == 0))
      {
        lVar8 = ((longlong *)*param_1)[1];
        local_e8[0] = 0;
        local_e8[1] = 0;
        local_140 = *param_2;
        local_130 = param_2[2];
        local_134 = 0;
        if (param_2[3] == 0) {
          local_134 = *(undefined4 *)((longlong)param_2 + 0xc);
        }
        local_128 = *(undefined8 *)(lVar10 + 0x20);
        local_118 = (longlong *)*param_1;
        if (param_2[3] == 0) {
          local_118 = local_e8;
        }
        lStack_110 = param_1[1];
        local_108 = (undefined4)param_1[2];
        local_100 = param_1[3];
        local_f8 = 0;
        local_138 = 0;
        local_120 = 0;
        local_f0 = param_1[5];
        uVar6 = FUN_14369a0b6(&local_118);
        if (param_2[3] == 0) {
          if ((char)local_f8 != '\0') {
            local_144 = *(undefined4 *)(*param_1 + 8);
            local_78 = &local_144;
            local_70 = local_e8;
            FUN_147cead54(param_1[5],local_64);
            *(undefined1 *)(param_2 + 4) = 1;
          }
        }
        else {
          if ((char)local_f8 != '\0') {
            if (local_e8[0] != 0) {
              FUN_1400020a8();
            }
            goto LAB_143692287;
          }
          FUN_147cead0c(*param_1,(int)lVar8);
        }
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
      }
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
      FUN_14369ad4e(param_1,param_2);
    }
  }
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
LAB_143692287:
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436923fc FUN_1436923fc body=968 status=ok
// SIG undefined FUN_1436923fc(void)

ulonglong FUN_1436923fc(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  code *local_e0;
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar10 = *param_2;
  if (lVar10 == 0) goto LAB_143692694;
  puVar9 = *(undefined **)(lVar10 + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951ae0) {
    FUN_144b3d300(&DAT_14c951ae0);
    if (DAT_14c951ae0 == -1) {
      FUN_1446ddbd2();
      local_e0 = FUN_140b31576;
      local_e8 = &DAT_14c951a38;
      local_f0 = 0;
      local_f8 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
  }
  if (DAT_14c951a98 == 0) {
    bVar11 = puVar9 != (undefined *)0x0;
    if (puVar9 != &DAT_14c951a90 && bVar11) {
      do {
        puVar9 = *(undefined **)(puVar9 + 0x30);
        bVar11 = puVar9 != (undefined *)0x0;
        if (puVar9 == &DAT_14c951a90) break;
      } while (puVar9 != (undefined *)0x0);
    }
    if (!bVar11) goto LAB_143692603;
LAB_14369247d:
    iVar3 = *(int *)(*param_1 + 8);
    *(uint *)(param_1[3] + 0x2c) = *(uint *)(param_1[3] + 0x2c) | 0x400;
    *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
    *(int *)(param_2 + 1) = (int)param_2[1] + *(int *)(lVar10 + 0x44);
    local_58 = param_2[4];
    local_68 = param_2[2];
    lStack_60 = param_2[3];
    local_78 = (undefined4)*param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = (undefined4)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    plVar5 = (longlong *)*param_1;
    iVar4 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
      FUN_14001faa0(plVar5,iVar4);
    }
    lVar8 = *plVar5;
    lVar7 = (longlong)iVar4 * 0x20;
    *(undefined8 *)(lVar8 + 0x18 + lVar7) = 0;
    puVar1 = (undefined8 *)(lVar8 + 8 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(longlong *)(lVar8 + lVar7) = CONCAT44(uStack_74,local_78);
    *(undefined4 *)(lVar8 + 0xc + lVar7) = uStack_70;
    *(undefined2 *)(lVar8 + 10 + lVar7) =
         *(undefined2 *)(*(longlong *)(CONCAT44(uStack_74,local_78) + 0x78) + 0x34);
    *(undefined2 *)(lVar8 + 0x14 + lVar7) = (undefined2)uStack_6c;
    *(short *)(lVar8 + 0x16 + lVar7) = (short)param_1[2];
    local_90 = FUN_14369bd2d(param_1);
    *(undefined4 *)(lVar8 + 0x18 + lVar7) = local_90;
    local_a0 = *(undefined8 *)(lVar10 + 0x78);
    local_88 = param_2[3];
    local_98 = 0;
    local_8c = 0;
    local_80 = 0;
    FUN_1436923fc(param_1);
    plVar5 = (longlong *)*param_1;
    iVar4 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
      FUN_14001faa0(plVar5,iVar4);
    }
    lVar10 = *plVar5;
    lVar8 = (longlong)iVar4 * 0x20;
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar10 + lVar8) = 0;
    ((undefined8 *)(lVar10 + lVar8))[1] = 0;
    *(undefined1 *)(lVar10 + 0x1c + lVar8) = 1;
    iVar4 = (int)((longlong *)*param_1)[1];
    lVar10 = (longlong)iVar3 * 0x20;
    *(short *)(*(longlong *)*param_1 + 8 + lVar10) = (short)iVar4;
    if (iVar4 - iVar3 < 3) {
      pbVar2 = (byte *)(*(longlong *)*param_1 + 0x1d + lVar10);
      *pbVar2 = *pbVar2 | 4;
    }
  }
  else {
    if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951a98) != 0) goto LAB_14369247d;
LAB_143692603:
    lVar10 = *param_2;
    if (lVar10 == 0) {
LAB_143692694:
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
      *(int *)(param_2 + 1) = (int)param_2[1] + *(int *)(*param_2 + 0x44);
      FUN_14369ad4e(param_1,param_2);
      if ((param_2[3] != 0) &&
         (*(char *)(*(longlong *)*param_1 + 0x1c +
                   (longlong)((int)((longlong *)*param_1)[1] + -1) * 0x20) == '\x02')) {
        local_d8[0] = 0;
        local_d8[1] = 0;
        (**(code **)(*(longlong *)*param_2 + 0x180))((longlong *)*param_2,local_d8,1);
        if (local_d8[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      lVar8 = *(longlong *)(lVar10 + 8);
      lVar7 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar7 + 8) == 0) {
        bVar11 = lVar8 != 0;
        if (lVar8 != lVar7 && bVar11) {
          do {
            lVar8 = *(longlong *)(lVar8 + 0x30);
            bVar11 = lVar8 != 0;
            if (lVar8 == lVar7) break;
          } while (lVar8 != 0);
        }
        if (!bVar11) goto LAB_143692694;
      }
      else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar7 + 8)) == 0) goto LAB_143692694;
      lVar8 = *(longlong *)(lVar10 + 0x70);
      *(int *)(param_2 + 1) = (int)param_2[1] + *(int *)(lVar10 + 0x44);
      if ((*(byte *)(lVar8 + 0xb1) & 4) == 0) {
        local_a8 = param_2[4];
        local_c8 = (undefined4)*param_2;
        uStack_c4 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_c0 = (undefined4)param_2[1];
        uStack_bc = *(undefined4 *)((longlong)param_2 + 0xc);
        local_b8 = (undefined4)param_2[2];
        uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_b0 = (undefined4)param_2[3];
        uStack_ac = *(undefined4 *)((longlong)param_2 + 0x1c);
        uVar6 = FUN_14369d508(param_1);
        goto LAB_14369270f;
      }
      *(undefined1 *)((longlong)param_1 + 0x21) = 1;
      *(int *)((longlong)param_2 + 0xc) = *(int *)((longlong)param_2 + 0xc) + 1;
      FUN_14369ad4e(param_1,param_2);
    }
  }
  uVar6 = (ulonglong)*(uint *)((longlong)param_2 + 0xc);
LAB_14369270f:
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436927c6 FUN_1436927c6 body=1049 status=ok
// SIG undefined FUN_1436927c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436927c6(longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined1 *param_6,undefined8 param_7)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code *local_80;
  ulonglong local_78;
  undefined *local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) {
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar5 = 0;
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x28);
        if ((*(int *)(lVar2 + 0x10 + lVar5) == 0) && ((*(byte *)(lVar2 + 0x2c + lVar5) & 0x40) == 0)
           ) {
          plVar3 = *(longlong **)(lVar2 + lVar5);
          if ((*(byte *)((longlong)plVar3 + 0x39) & 2) == 0) {
            (**(code **)(*plVar3 + 0x160))();
          }
          else {
            memset(param_6 + *(int *)(lVar2 + 0x14 + lVar5),0,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x30;
      } while (lVar6 < *(int *)(param_1 + 0x30));
    }
    if ((*(byte *)(*(longlong *)(param_4 + 0x28) + 0xa4) & 2) == 0) {
      lVar5 = *(longlong *)(param_5 + 0xb0);
      FUN_144958770(lVar5 + 0x30,0);
      FUN_144958770(lVar5 + 0x80,0);
      *(undefined1 *)(lVar5 + 0x28) = 1;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb01c10) && (FUN_144b3d300(&DAT_14cb01c10), DAT_14cb01c10 == -1))
      {
        _DAT_14cb01bf8 = 0;
        _DAT_14cb01c00 = 0x400000000;
        _DAT_14cb01bd0 = 0;
        uRam000000014cb01bd8 = 0;
        _DAT_14cb01be0 = 0;
        DAT_14cb01c08 = 0;
        atexit((_func_5014 *)&LAB_143692be0);
        _Init_thread_footer(&DAT_14cb01c10);
      }
      if (0 < *(int *)(param_1 + 0x30)) {
        lVar5 = 0;
        do {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar5 * 0x30);
          if (lVar6 == 0) {
LAB_143692958:
            if ((*(byte *)(param_5 + 0x29) & 2) == 0) {
              uVar4 = *(ulonglong *)(param_5 + 0xa8);
              if ((longlong)uVar4 < *(longlong *)(param_5 + 0xa0)) {
                bVar1 = *(byte *)(*(longlong *)(param_5 + 0x90) + (longlong)(int)(uVar4 >> 3));
                *(ulonglong *)(param_5 + 0xa8) = uVar4 + 1;
                if ((bVar1 >> ((uint)uVar4 & 7) & 1) != 0) goto LAB_14369299f;
              }
              else {
                FUN_1405d09b8(param_5,1);
              }
            }
          }
          else {
            puVar7 = *(undefined8 **)(lVar6 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
            {
              local_88 = (undefined1 *)FUN_1446ddbd2();
              local_80 = FUN_14067a048;
              local_90 = (undefined1 *)0x0;
              local_98 = 0x28001;
              FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
              atexit(FUN_142811fe5);
              _Init_thread_footer(&DAT_14c951d20);
            }
            if (DAT_14c951cd8 == 0) {
              bVar8 = puVar7 != (undefined8 *)0x0;
              if (puVar7 != &DAT_14c951cd0 && bVar8) {
                do {
                  puVar7 = (undefined8 *)puVar7[6];
                  bVar8 = puVar7 != (undefined8 *)0x0;
                  if (puVar7 == &DAT_14c951cd0) break;
                } while (puVar7 != (undefined8 *)0x0);
              }
              if (!bVar8) goto LAB_143692958;
            }
            else if ((puVar7[3] & DAT_14c951cd8) == 0) goto LAB_143692958;
LAB_14369299f:
            local_70 = &DAT_14cb01bd0;
            local_78 = local_78 & 0xffffffff00000000;
            local_80 = (code *)((ulonglong)local_80 & 0xffffffff00000000);
            local_88 = &local_4b;
            local_90 = param_6;
            local_98 = CONCAT44(local_98._4_4_,
                                (uint)*(ushort *)
                                       (*(longlong *)(param_1 + 0x28) + 0x1e + lVar5 * 0x30));
            local_68 = 0;
            local_60 = param_2;
            FUN_1404e55aa(param_1,param_5,*(undefined8 *)(param_5 + 0xb0));
            if ((*(byte *)(param_5 + 0x29) & 2) != 0) goto LAB_143692b50;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_1 + 0x30));
      }
    }
    else {
      local_49 = 0;
      local_4a = (code)0x0;
      lVar5 = *(longlong *)(param_5 + 0xb0);
      FUN_144958770(lVar5 + 0x30,0);
      FUN_144958770(lVar5 + 0x80,0);
      *(undefined1 *)(lVar5 + 0x28) = 1;
      local_88 = (undefined1 *)((ulonglong)local_88 & 0xffffffffffffff00);
      local_98 = param_5;
      local_90 = &local_49;
      local_80 = (code *)&local_4a;
      local_78 = param_2;
      FUN_147ce12c8(param_1,*(undefined8 *)(param_4 + 0x28),0,param_6);
    }
    lVar5 = *(longlong *)(param_5 + 0xb0);
    if (*(int *)(lVar5 + 100) < *(int *)(lVar5 + 0x38)) {
      FUN_140492002(param_7,lVar5 + 0x30);
      lVar5 = *(longlong *)(param_5 + 0xb0);
    }
    FUN_144958770(lVar5 + 0x30,0);
    FUN_144958770(lVar5 + 0x80,0);
    *(undefined1 *)(lVar5 + 0x28) = 0;
  }
LAB_143692b50:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143692bf8 FUN_143692bf8 body=73 status=ok
// SIG undefined FUN_143692bf8(void)

void FUN_143692bf8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar4);
  }
  return;
}



// FUNCTION 143692c41 FUN_143692c41 body=1990 status=ok
// SIG undefined FUN_143692c41(void)

uint FUN_143692c41(longlong param_1,longlong *param_2,ushort param_3,ushort param_4,ushort param_5)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  double dVar4;
  float fVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ushort uVar12;
  uint uVar13;
  double *_Dst;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  int iVar17;
  ushort uVar18;
  ulonglong uVar19;
  uint uVar20;
  float fVar21;
  double *_Src;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_128 [32];
  double *local_108;
  uint local_f4;
  longlong local_f0;
  float local_e8;
  float local_e4;
  longlong *local_e0;
  longlong *local_d8;
  uint local_d0;
  uint local_cc;
  longlong *local_c8;
  double local_c0;
  longlong local_b8;
  longlong local_b0;
  void **local_a8;
  undefined4 *local_a0;
  void *local_98;
  ulonglong uStack_90;
  double *local_80;
  double *local_78;
  float local_70;
  undefined4 local_6c;
  undefined1 local_68;
  ulonglong local_60;
  
  uVar13 = (uint)param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_3 < param_4) {
    local_cc = (uint)param_4;
    uVar10 = (ulonglong)param_3;
    local_f0 = param_1;
    local_e0 = param_2;
    do {
      lVar22 = **(longlong **)(param_1 + 0x10);
      uVar20 = (uint)uVar10;
      lVar9 = uVar10 * 0x20;
      plVar15 = (longlong *)(lVar22 + lVar9);
      uVar13 = uVar13 + 1;
      _Src = (double *)((longlong)*(int *)(lVar22 + 0xc + lVar9) + *param_2);
      _Dst = (double *)((longlong)*(int *)(lVar22 + 0x10 + lVar9) + param_2[1]);
      cVar6 = *(char *)(lVar22 + 0x1c + lVar9);
      if (cVar6 == '\0') {
        uVar10 = (ulonglong)((uVar20 & 0xffff) << 5);
        if ((*(byte *)(lVar22 + 0x1d + uVar10) & 4) == 0) {
          local_c8 = (longlong *)param_2[2];
          puVar3 = (undefined4 *)param_2[3];
          plVar14 = (longlong *)(lVar22 + uVar10);
          fVar16 = *(float *)(_Src + 1);
          local_e8 = *(float *)(_Dst + 1);
          local_d8 = plVar15;
          local_d0 = uVar20;
          cVar6 = FUN_1414dfa45(fVar16,*plVar14);
          if (cVar6 == '\0') {
            *puVar3 = 3;
            param_1 = local_f0;
            plVar15 = local_d8;
          }
          else {
            lVar22 = *plVar14;
            uVar1 = *(undefined1 *)(lVar22 + 0x70);
            local_f4 = uVar13;
            local_6c = (**(code **)(**(longlong **)(lVar22 + 0x78) + 0x178))();
            local_80 = *(double **)(lVar22 + 0x78);
            local_70 = *(float *)((longlong)local_80 + 0x34);
            local_78 = _Dst;
            local_68 = uVar1;
            FUN_144a8a902(&local_80,fVar16);
            fVar5 = local_e8;
            lVar22 = local_f0;
            local_98 = (void *)0x0;
            uStack_90 = 0;
            if ((int)fVar16 < 1) {
LAB_143692fc1:
              plVar15 = local_c8;
              param_2 = local_e0;
              param_1 = local_f0;
              uVar13 = local_f4;
              if (fVar16 != local_e8) {
                iVar17 = (int)local_c8[1];
                *(uint *)(local_c8 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)local_c8 + 0xc) < iVar17 + 1U) {
                  FUN_14488eebe(local_c8,iVar17);
                }
                *(short *)(*plVar15 + (longlong)iVar17 * 2) = (short)uVar13;
                iVar17 = (int)plVar15[1];
                *(uint *)(plVar15 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)plVar15 + 0xc) < iVar17 + 1U) {
                  FUN_14488eebe(plVar15,iVar17);
                }
                *(undefined2 *)(*plVar15 + (longlong)iVar17 * 2) = 0;
LAB_143693018:
                iVar17 = (int)plVar15[1];
                *(uint *)(plVar15 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)plVar15 + 0xc) < iVar17 + 1U) {
                  FUN_14488eebe(plVar15,iVar17);
                }
                *(undefined2 *)(*plVar15 + (longlong)iVar17 * 2) = 0;
              }
            }
            else {
              local_c0 = *_Src;
              dVar4 = *_Dst;
              bVar2 = *(byte *)(local_f0 + 1);
              iVar17 = local_d0 + 1;
              uVar7 = 0;
              fVar21 = 0.0;
              local_e4 = fVar16;
              do {
                uVar10 = (ulonglong)((uint)*(ushort *)((longlong)plVar14 + 10) * (int)fVar21);
                *(byte *)(lVar22 + 1) = (int)fVar5 <= (int)fVar21 | bVar2;
                local_b8 = (longlong)local_c0 + uVar10;
                local_b0 = uVar10 + (longlong)dVar4;
                local_a8 = &local_98;
                local_108 = (double *)CONCAT62(local_108._2_6_,uVar7);
                local_a0 = puVar3;
                uVar7 = FUN_143692c41(lVar22,&local_b8,iVar17,(int)plVar14[1] + -1);
                uVar10 = uStack_90;
                fVar21 = (float)((int)fVar21 + 1);
              } while (local_e4 != fVar21);
              *(byte *)(lVar22 + 1) = bVar2;
              fVar16 = local_e4;
              if ((uint)uStack_90 == 0) goto LAB_143692fc1;
              cVar6 = FUN_1414dfa45(uStack_90 & 0xffffffff,*plVar14);
              plVar15 = local_c8;
              param_2 = local_e0;
              param_1 = local_f0;
              uVar13 = local_f4;
              if (cVar6 != '\0') {
                iVar17 = (int)local_c8[1];
                *(uint *)(local_c8 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)local_c8 + 0xc) < iVar17 + 1U) {
                  FUN_14488eebe(local_c8,iVar17);
                }
                *(short *)(*plVar15 + (longlong)iVar17 * 2) = (short)uVar13;
                iVar17 = (int)plVar15[1];
                *(uint *)(plVar15 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)plVar15 + 0xc) < iVar17 + 1U) {
                  FUN_14488eebe(plVar15,iVar17);
                }
                *(short *)(*plVar15 + (longlong)iVar17 * 2) = (short)uVar10;
                lVar22 = (longlong)(int)(uint)uStack_90;
                if (lVar22 != 0) {
                  iVar17 = (int)plVar15[1];
                  *(uint *)(plVar15 + 1) = iVar17 + (uint)uStack_90;
                  if ((uint)(*(int *)((longlong)plVar15 + 0xc) - iVar17) < (uint)uStack_90) {
                    FUN_14488eebe(plVar15,iVar17);
                  }
                  memcpy((void *)((longlong)iVar17 * 2 + *plVar15),local_98,lVar22 * 2);
                  param_2 = local_e0;
                }
                goto LAB_143693018;
              }
              *puVar3 = 3;
            }
            plVar15 = local_d8;
            if (local_98 != (void *)0x0) {
              FUN_1400020a8();
              plVar15 = local_d8;
            }
          }
        }
        uVar20 = *(ushort *)(plVar15 + 1) - 1;
        goto LAB_1436930d5;
      }
      if (*(char *)(param_1 + 1) != '\0') goto LAB_143692cd9;
      switch(cVar6) {
      case '\x02':
      case '\x03':
      case '\x16':
      case '\x18':
        cVar6 = (**(code **)(*(longlong *)*plVar15 + 200))((longlong *)*plVar15,_Dst,_Src,0);
        goto joined_r0x0001436932c6;
      case '\x04':
        bVar23 = NAN(*(float *)_Dst) || NAN(*(float *)_Src);
        bVar24 = *(float *)_Dst == *(float *)_Src;
LAB_143693131:
        if ((!bVar24) || (bVar23)) goto LAB_143692cd9;
        break;
      case '\x05':
      case '\t':
        if (*(float *)_Dst != *(float *)_Src) goto LAB_143692cd9;
        break;
      case '\x06':
      case '\x15':
        if (*(char *)_Dst != *(char *)_Src) goto LAB_143692cd9;
        break;
      case '\a':
      case '\x14':
      case '\x17':
        if (*_Dst != *_Src) goto LAB_143692cd9;
        break;
      case '\b':
        plVar14 = (longlong *)*plVar15;
        lVar22 = (**(code **)(*plVar14 + 0x210))(plVar14,_Dst);
        local_d8 = plVar15;
        lVar9 = (**(code **)(*plVar14 + 0x210))(plVar14,_Src);
        plVar15 = local_d8;
        if (lVar22 != lVar9) goto LAB_143692cd9;
        break;
      case '\n':
      case '\v':
      case '\r':
      case '\x10':
      case '\x11':
      case '\x12':
        if ((*_Dst == *_Src) && (!NAN(*_Dst) && !NAN(*_Src))) {
          if ((_Dst[1] == _Src[1]) && (!NAN(_Dst[1]) && !NAN(_Src[1]))) {
            bVar23 = NAN(_Dst[2]) || NAN(_Src[2]);
            bVar24 = _Dst[2] == _Src[2];
            goto LAB_143693131;
          }
        }
        goto LAB_143692cd9;
      case '\f':
        if ((*_Dst == *_Src) && (!NAN(*_Dst) && !NAN(*_Src))) {
          if ((_Dst[1] == _Src[1]) && (!NAN(_Dst[1]) && !NAN(_Src[1]))) {
            if ((_Dst[2] == _Src[2]) && (!NAN(_Dst[2]) && !NAN(_Src[2]))) {
              bVar23 = NAN(_Dst[3]) || NAN(_Src[3]);
              bVar24 = _Dst[3] == _Src[3];
              goto LAB_143693131;
            }
          }
        }
        goto LAB_143692cd9;
      case '\x0e':
        cVar6 = FUN_140ba41f1(_Dst,_Src);
        goto joined_r0x0001436932c6;
      case '\x0f':
        cVar6 = FUN_1436982e0(_Dst,_Src);
        goto joined_r0x0001436932c6;
      case '\x13':
        fVar16 = *(float *)(_Dst + 1);
        if (fVar16 == *(float *)(_Src + 1)) {
          if (1 < (int)fVar16) {
            lVar22 = 0;
            while( true ) {
              uVar12 = *(ushort *)((longlong)*_Dst + lVar22);
              uVar10 = (ulonglong)uVar12;
              uVar18 = *(ushort *)((longlong)*_Src + lVar22);
              if (uVar12 != uVar18) break;
              if (uVar12 == 0) goto LAB_1436930d5;
LAB_14369319f:
              lVar22 = lVar22 + 2;
            }
            if ((uVar18 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              uVar19 = (ulonglong)uVar18;
              uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
              if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar19]) goto LAB_14369319f;
            }
            if (uVar12 != uVar18) goto LAB_143692cd9;
          }
        }
        else if ((int)*(float *)(_Src + 1) + (int)fVar16 != 1) goto LAB_143692cd9;
        break;
      case '\x19':
        plVar14 = *(longlong **)(param_1 + 0x30);
        if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
          uVar8 = ((uint)((ulonglong)plVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar15 >> 4)) *
                  -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          plVar11 = plVar14 + 7;
          if ((longlong *)plVar14[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar14[8];
          }
          iVar17 = *(int *)((longlong)plVar11 +
                           (ulonglong)((int)plVar14[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
          if (iVar17 != -1) {
            do {
              lVar22 = *plVar14 + (longlong)iVar17 * 0x20;
              if (*(longlong **)(*plVar14 + (longlong)iVar17 * 0x20) == plVar15) goto LAB_1436932aa;
              iVar17 = *(int *)(lVar22 + 0x18);
            } while (iVar17 != -1);
          }
        }
        lVar22 = 0;
LAB_1436932aa:
        local_108 = _Src;
        cVar6 = FUN_143697dfb(lVar22 + 8,plVar14,0xffffffff,_Dst);
joined_r0x0001436932c6:
        if (cVar6 == '\0') {
LAB_143692cd9:
          if (_Dst != _Src) {
            plVar15 = (longlong *)*plVar15;
            if ((*(byte *)((longlong)plVar15 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar15 + 0x100))(plVar15,_Dst);
            }
            else {
              memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar15 + 0x34));
            }
          }
          plVar15 = (longlong *)param_2[2];
          iVar17 = (int)plVar15[1];
          *(uint *)(plVar15 + 1) = iVar17 + 1U;
          if (*(uint *)((longlong)plVar15 + 0xc) < iVar17 + 1U) {
            FUN_14488eebe(plVar15,iVar17);
          }
          *(short *)(*plVar15 + (longlong)iVar17 * 2) = (short)uVar13;
        }
        break;
      default:
        if (*plVar15 == 0) {
          FUN_140056680(&local_80,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*plVar15 + 0x20,&local_80);
        }
        local_108 = (double *)&DAT_149dfb77a;
        if ((int)local_78 != 0) {
          local_108 = local_80;
        }
        FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                      L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                      *(undefined1 *)((longlong)plVar15 + 0x1c));
        if (local_80 != (double *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143692cd9;
      }
LAB_1436930d5:
      uVar10 = (ulonglong)(uVar20 + 1);
    } while ((int)(uVar20 + 1) < (int)local_cc);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 143693408 FUN_143693408 body=1602 status=ok
// SIG undefined FUN_143693408(void)

byte FUN_143693408(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  byte bVar7;
  ushort uVar8;
  void *_Src;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  void *_Dst;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  double *pdVar17;
  int iVar18;
  byte bVar19;
  double *pdVar20;
  longlong *plVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_b8 [32];
  double *local_98;
  uint local_8c;
  uint *local_88;
  uint local_7c;
  longlong local_78;
  longlong *local_70;
  double *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar13 = (uint)*(ushort *)(param_2 + 2);
  if (*(ushort *)(param_2 + 2) < *(ushort *)((longlong)param_2 + 0x12)) {
    local_8c = param_1[1];
    bVar19 = 0;
    local_88 = param_1;
    local_70 = param_2;
    do {
      uVar9 = (ulonglong)((uVar13 & 0xffff) << 5);
      uVar11 = (ulonglong)((uint)*(ushort *)(**(longlong **)(param_1 + 6) + 0x16 + uVar9) * 0x30);
      lVar1 = **(longlong **)(param_1 + 4) + uVar11;
      uVar4 = *(uint *)(**(longlong **)(param_1 + 4) + 0x2c + uVar11);
      if ((uVar4 & 8) != 0) {
        uVar12 = *(ushort *)(lVar1 + 0x1e) - 1;
        goto LAB_1436938b1;
      }
      plVar21 = (longlong *)(**(longlong **)(param_1 + 6) + uVar9);
      bVar7 = *(byte *)((longlong)plVar21 + 0x1c);
      if (bVar7 == 0) {
        uVar12 = (int)plVar21[1] - 1;
        lVar1 = param_2[1];
        lVar14 = (longlong)*(int *)((longlong)plVar21 + 0xc);
        plVar2 = (longlong *)(*param_2 + lVar14);
        iVar18 = *(int *)(lVar1 + 8 + lVar14);
        if (iVar18 != *(int *)(*param_2 + 8 + lVar14)) {
          bVar19 = 1;
          if (((local_8c & 1) == 0) || ((*param_1 & uVar4) == 0)) goto LAB_1436938b1;
          lVar15 = *plVar21;
          uVar3 = *(undefined1 *)(lVar15 + 0x70);
          local_54 = (**(code **)(**(longlong **)(lVar15 + 0x78) + 0x178))();
          local_68 = *(double **)(lVar15 + 0x78);
          local_58 = *(float *)((longlong)local_68 + 0x34);
          local_60 = plVar2;
          local_50 = uVar3;
          FUN_144a8a902(&local_68,*(undefined4 *)(lVar1 + 8 + lVar14));
          iVar18 = *(int *)(lVar1 + 8 + lVar14);
          bVar19 = 1;
          param_1 = local_88;
        }
        lVar15 = *plVar2;
        lVar6 = *(longlong *)(lVar1 + lVar14);
        local_58 = (float)CONCAT22((short)uVar12,(short)uVar13 + 1);
        param_2 = local_70;
        local_7c = uVar12;
        if (0 < iVar18) {
          iVar18 = 0;
          do {
            uVar9 = (ulonglong)((uint)*(ushort *)((longlong)plVar21 + 10) * iVar18);
            local_60 = (longlong *)(lVar6 + uVar9);
            local_68 = (double *)(uVar9 + lVar15);
            bVar7 = FUN_143693408(param_1,&local_68);
            bVar19 = bVar19 | bVar7;
            iVar18 = iVar18 + 1;
            param_2 = local_70;
            param_1 = local_88;
            uVar12 = local_7c;
          } while (iVar18 < *(int *)(lVar1 + 8 + lVar14));
        }
        goto LAB_1436938b1;
      }
      lVar14 = *(longlong *)(param_1 + 2);
      bVar23 = *(int *)(lVar1 + 0x28) != -1;
      uVar12 = uVar13;
      if ((bVar23 && lVar14 != 0) && (*(int *)(lVar1 + 0x24) == 1)) {
LAB_1436934b7:
        bVar19 = 1;
        if ((local_8c & 1) == 0) goto LAB_1436938b1;
        goto LAB_1436934c5;
      }
      if (0x17 < bVar7 - 2) {
        if (*plVar21 == 0) {
          FUN_140056680(&local_68,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*plVar21 + 0x20,&local_68);
        }
        local_98 = (double *)&DAT_149dfb77a;
        if ((int)local_60 != 0) {
          local_98 = local_68;
        }
        FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                      L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                      *(undefined1 *)((longlong)plVar21 + 0x1c));
        param_1 = local_88;
        if (local_68 != (double *)0x0) {
          FUN_1400020a8();
          param_1 = local_88;
        }
        goto LAB_1436934b7;
      }
      pdVar20 = (double *)(*param_2 + (longlong)*(int *)((longlong)plVar21 + 0xc));
      pdVar17 = (double *)((longlong)*(int *)((longlong)plVar21 + 0xc) + param_2[1]);
      switch((uint)bVar7) {
      case 2:
      case 3:
      case 0x16:
      case 0x18:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = (**(code **)(*(longlong *)*plVar21 + 200))((longlong *)*plVar21,pdVar17,pdVar20,0);
        goto LAB_1436936d4;
      case 4:
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(*(float *)pdVar17) || NAN(*(float *)pdVar20);
        bVar24 = *(float *)pdVar17 == *(float *)pdVar20;
        goto LAB_14369376f;
      case 5:
      case 9:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(float *)pdVar17 == *(float *)pdVar20;
        break;
      case 6:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(char *)pdVar17 == *(char *)pdVar20;
        break;
      case 7:
      case 0x14:
      case 0x17:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *pdVar17 == *pdVar20;
        break;
      case 8:
        local_7c = CONCAT31(local_7c._1_3_,(local_8c & 1) == 0);
        plVar2 = (longlong *)*plVar21;
        local_78 = (**(code **)(*plVar2 + 0x210))(plVar2,pdVar17);
        lVar15 = (**(code **)(*plVar2 + 0x210))(plVar2,pdVar20);
        bVar7 = local_78 != lVar15;
        param_1 = local_88;
        if ((bool)bVar7 && (char)local_7c == '\0') goto LAB_1436934c5;
        goto LAB_1436938ab;
      default:
        if (((*pdVar17 != *pdVar20) || (NAN(*pdVar17) || NAN(*pdVar20))) ||
           ((pdVar17[1] != pdVar20[1] || (NAN(pdVar17[1]) || NAN(pdVar20[1]))))) goto LAB_1436934b7;
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(pdVar17[2]) || NAN(pdVar20[2]);
        bVar24 = pdVar17[2] == pdVar20[2];
        goto LAB_14369376f;
      case 0xc:
        if (((((*pdVar17 != *pdVar20) || (NAN(*pdVar17) || NAN(*pdVar20))) ||
             (pdVar17[1] != pdVar20[1])) ||
            ((NAN(pdVar17[1]) || NAN(pdVar20[1]) || (pdVar17[2] != pdVar20[2])))) ||
           (NAN(pdVar17[2]) || NAN(pdVar20[2]))) goto LAB_1436934b7;
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(pdVar17[3]) || NAN(pdVar20[3]);
        bVar24 = pdVar17[3] == pdVar20[3];
LAB_14369376f:
        if ((bool)(!bVar22 & bVar24) || bVar25) {
          bVar7 = !bVar24 | bVar22;
          goto LAB_1436938ab;
        }
        goto LAB_1436934c5;
      case 0xe:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = FUN_140ba41f1(pdVar17,pdVar20);
        goto LAB_1436936d4;
      case 0xf:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = FUN_1436982e0(pdVar17,pdVar20);
LAB_1436936d4:
        param_1 = local_88;
        if (bVar24 || bVar7 != 0) {
LAB_1436936e2:
          bVar7 = bVar7 ^ 1;
          param_1 = local_88;
          goto LAB_1436938ab;
        }
        goto LAB_1436934c5;
      case 0x13:
        fVar5 = *(float *)(pdVar17 + 1);
        if (fVar5 == *(float *)(pdVar20 + 1)) {
          if (1 < (int)fVar5) {
            lVar15 = 0;
            while( true ) {
              uVar8 = *(ushort *)((longlong)*pdVar17 + lVar15);
              uVar9 = (ulonglong)uVar8;
              uVar16 = *(ushort *)((longlong)*pdVar20 + lVar15);
              if (uVar8 != uVar16) {
                if ((uVar16 | uVar8) < 0x80) {
                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  uVar11 = (ulonglong)uVar16;
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_1436937f6;
                }
                bVar24 = (local_8c & 1) == 0;
                bVar25 = uVar8 == uVar16;
                goto LAB_14369389d;
              }
              if (uVar8 == 0) break;
LAB_1436937f6:
              lVar15 = lVar15 + 2;
            }
          }
          goto LAB_1436938b1;
        }
        bVar7 = (int)*(float *)(pdVar20 + 1) + (int)fVar5 != 1;
        if (!(bool)bVar7 || (local_8c & 1) == 0) goto LAB_1436938ab;
        goto LAB_1436934c5;
      case 0x15:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(char *)pdVar17 == *(char *)pdVar20;
        break;
      case 0x19:
        plVar2 = *(longlong **)(param_1 + 8);
        if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
          uVar13 = ((uint)((ulonglong)plVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar21 >> 4)) *
                   -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          plVar10 = plVar2 + 7;
          if ((longlong *)plVar2[8] != (longlong *)0x0) {
            plVar10 = (longlong *)plVar2[8];
          }
          iVar18 = *(int *)((longlong)plVar10 +
                           (ulonglong)((int)plVar2[9] - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
          if (iVar18 != -1) {
            do {
              lVar15 = *plVar2 + (longlong)iVar18 * 0x20;
              if (*(longlong **)(*plVar2 + (longlong)iVar18 * 0x20) == plVar21) goto LAB_143693952;
              iVar18 = *(int *)(lVar15 + 0x18);
            } while (iVar18 != -1);
          }
        }
        lVar15 = 0;
LAB_143693952:
        uVar13 = local_8c & 1;
        local_98 = pdVar20;
        bVar7 = FUN_143697dfb(lVar15 + 8);
        param_1 = local_88;
        if (uVar13 != 0 && bVar7 == 0) goto LAB_1436934c5;
        goto LAB_1436936e2;
      }
LAB_14369389d:
      bVar7 = !bVar25;
      if ((bool)(bVar25 | bVar24)) {
LAB_1436938ab:
        bVar19 = bVar19 | bVar7;
      }
      else {
LAB_1436934c5:
        bVar19 = 1;
        if ((*param_1 & *(uint *)(lVar1 + 0x2c)) != 0) {
          if (*param_2 != param_2[1]) {
            _Src = (void *)(param_2[1] + (longlong)*(int *)((longlong)plVar21 + 0xc));
            _Dst = (void *)(*param_2 + (longlong)*(int *)((longlong)plVar21 + 0xc));
            plVar21 = (longlong *)*plVar21;
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,_Dst,_Src,1);
              param_1 = local_88;
            }
            else {
              memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar21 + 0x34));
              param_1 = local_88;
            }
          }
          if (bVar23 && lVar14 != 0) {
            FUN_1417c47ea(*(undefined8 *)(param_1 + 2),lVar1);
            param_1 = local_88;
          }
        }
      }
LAB_1436938b1:
      uVar13 = uVar12 + 1;
    } while ((ushort)uVar13 < *(ushort *)((longlong)param_2 + 0x12));
  }
  else {
    bVar19 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar19 & 1;
}



// FUNCTION 143693a4b FUN_143693a4b body=3186 status=ok
// SIG undefined FUN_143693a4b(void)

ulonglong FUN_143693a4b(longlong *param_1,longlong *param_2,wchar_t *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte bVar14;
  ushort uVar15;
  double *pdVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  char cVar20;
  uint uVar21;
  double *pdVar22;
  longlong *plVar23;
  longlong *plVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  double **local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  double *local_68;
  longlong *local_60;
  float local_58;
  uint local_54;
  undefined1 local_50;
  ulonglong local_48;
  undefined7 uVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar18 = (uint)*(ushort *)(param_2 + 2);
  if ((int)(uint)*(ushort *)(param_2 + 2) < *(int *)((longlong)param_2 + 0x14)) {
    plVar12 = (longlong *)0x0;
    local_90 = param_1;
    local_78 = param_2;
    do {
      uVar8 = (ulonglong)((uVar18 & 0xffff) << 5);
      uVar11 = (ulonglong)((uint)*(ushort *)(*(longlong *)param_1[3] + 0x16 + uVar8) * 0x30);
      lVar1 = *(longlong *)param_1[2] + uVar11;
      uVar3 = *(uint *)(*(longlong *)param_1[2] + 0x2c + uVar11);
      if ((uVar3 & 8) != 0) {
        uVar21 = *(ushort *)(lVar1 + 0x1e) - 1;
        goto LAB_143694277;
      }
      plVar24 = (longlong *)(*(longlong *)param_1[3] + uVar8);
      bVar14 = *(byte *)((longlong)plVar24 + 0x1c);
      if (bVar14 == 0) {
        uVar21 = (int)plVar24[1] - 1;
        lVar1 = param_2[1];
        lVar19 = (longlong)(int)plVar24[2];
        param_3 = (wchar_t *)(longlong)*(int *)((longlong)plVar24 + 0xc);
        plVar23 = (longlong *)(*param_2 + (longlong)param_3);
        iVar17 = *(int *)(lVar1 + 8 + lVar19);
        local_80 = plVar24;
        if (iVar17 != *(int *)(*param_2 + 8 + (longlong)param_3)) {
          uVar13 = (undefined7)((ulonglong)plVar12 >> 8);
          plVar12 = (longlong *)CONCAT71(uVar13,1);
          param_1 = local_90;
          if ((uVar3 & 1) == 0) goto LAB_143694277;
          lVar5 = *plVar24;
          uVar2 = *(undefined1 *)(lVar5 + 0x70);
          local_54 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x178))();
          local_68 = *(double **)(lVar5 + 0x78);
          local_58 = *(float *)((longlong)local_68 + 0x34);
          local_60 = plVar23;
          local_50 = uVar2;
          FUN_144a8a902(&local_68,*(undefined4 *)(lVar1 + 8 + lVar19));
          iVar17 = *(int *)(lVar1 + 8 + lVar19);
          plVar12 = (longlong *)CONCAT71(uVar13,1);
        }
        plVar24 = local_80;
        param_1 = local_90;
        lVar5 = *plVar23;
        lVar6 = *(longlong *)(lVar1 + lVar19);
        local_58 = (float)(uVar18 + 1 & 0xffff);
        local_88 = CONCAT44(local_88._4_4_,uVar21);
        local_54 = uVar21 & 0xffff;
        if (0 < iVar17) {
          iVar17 = 0;
          do {
            uVar8 = (ulonglong)((uint)*(ushort *)((longlong)plVar24 + 10) * iVar17);
            local_60 = (longlong *)(lVar6 + uVar8);
            local_68 = (double *)(uVar8 + lVar5);
            bVar14 = FUN_143693a4b(param_1,&local_68);
            plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),(byte)plVar12 | bVar14);
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(lVar1 + 8 + lVar19));
        }
        param_2 = local_78;
        uVar21 = (uint)local_88;
        goto LAB_143694277;
      }
      uVar21 = uVar18;
      if (0x17 < bVar14 - 2) {
        if (*plVar24 == 0) {
          FUN_140056680(&local_68,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*plVar24 + 0x20,&local_68);
        }
        local_e8 = (double *)&DAT_149dfb77a;
        if ((int)local_60 != 0) {
          local_e8 = local_68;
        }
        param_3 = L"PropertiesAreIdentical: Unsupported type! %i (%s)";
        FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                      L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                      *(undefined1 *)((longlong)plVar24 + 0x1c));
        if (local_68 != (double *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143693f4f;
      }
      pdVar22 = (double *)((longlong)(int)plVar24[2] + param_2[1]);
      pdVar16 = (double *)((longlong)*(int *)((longlong)plVar24 + 0xc) + *param_2);
      switch((uint)bVar14) {
      case 2:
      case 3:
      case 0x16:
      case 0x18:
        cVar7 = (**(code **)(*(longlong *)*plVar24 + 200))((longlong *)*plVar24,pdVar16,pdVar22,0);
        param_3 = (wchar_t *)pdVar22;
        goto LAB_143693ba3;
      case 4:
        bVar25 = NAN(*(float *)pdVar16) || NAN(*(float *)pdVar22);
        bVar26 = *(float *)pdVar16 == *(float *)pdVar22;
        goto LAB_143693d3d;
      case 5:
      case 9:
        if (*(float *)pdVar16 != *(float *)pdVar22) goto LAB_143693f4f;
        break;
      case 6:
      case 0x15:
        if (*(char *)pdVar16 != *(char *)pdVar22) goto LAB_143693f4f;
        break;
      case 7:
      case 0x14:
      case 0x17:
        if (*pdVar16 != *pdVar22) goto LAB_143693f4f;
        break;
      case 8:
        plVar23 = (longlong *)*plVar24;
        local_80 = plVar12;
        local_88 = (**(code **)(*plVar23 + 0x210))(plVar23,pdVar16);
        plVar12 = local_80;
        uVar8 = (**(code **)(*plVar23 + 0x210))(plVar23,pdVar22);
        if (local_88 != uVar8) goto LAB_143693f4f;
        break;
      default:
        if (((*pdVar16 != *pdVar22) || (NAN(*pdVar16) || NAN(*pdVar22))) ||
           ((pdVar16[1] != pdVar22[1] || (NAN(pdVar16[1]) || NAN(pdVar22[1]))))) goto LAB_143693f4f;
        bVar25 = NAN(pdVar16[2]) || NAN(pdVar22[2]);
        bVar26 = pdVar16[2] == pdVar22[2];
        goto LAB_143693d3d;
      case 0xc:
        if (((((*pdVar16 != *pdVar22) || (NAN(*pdVar16) || NAN(*pdVar22))) ||
             (pdVar16[1] != pdVar22[1])) ||
            ((NAN(pdVar16[1]) || NAN(pdVar22[1]) || (pdVar16[2] != pdVar22[2])))) ||
           (NAN(pdVar16[2]) || NAN(pdVar22[2]))) goto LAB_143693f4f;
        bVar25 = NAN(pdVar16[3]) || NAN(pdVar22[3]);
        bVar26 = pdVar16[3] == pdVar22[3];
LAB_143693d3d:
        if ((bVar26) && (!bVar25)) break;
        goto LAB_143693f4f;
      case 0xe:
        cVar7 = FUN_140ba41f1(pdVar16,pdVar22);
        goto LAB_143693ba3;
      case 0xf:
        cVar7 = FUN_1436982e0(pdVar16,pdVar22);
        goto LAB_143693ba3;
      case 0x13:
        fVar4 = *(float *)(pdVar16 + 1);
        if (fVar4 == *(float *)(pdVar22 + 1)) {
          if (1 < (int)fVar4) {
            param_3 = (wchar_t *)0x0;
            while( true ) {
              uVar10 = *(ushort *)((longlong)*pdVar16 + (longlong)param_3);
              uVar8 = (ulonglong)uVar10;
              uVar15 = *(ushort *)((longlong)*pdVar22 + (longlong)param_3);
              if (uVar10 != uVar15) break;
              if (uVar10 == 0) goto LAB_143694277;
LAB_143693da8:
              param_3 = (wchar_t *)((longlong)param_3 + 2);
            }
            if ((uVar15 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar11 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_143693da8;
            }
            if (uVar10 != uVar15) goto LAB_143693f4f;
          }
        }
        else if ((int)*(float *)(pdVar22 + 1) + (int)fVar4 != 1) goto LAB_143693f4f;
        break;
      case 0x19:
        plVar23 = (longlong *)param_1[4];
        if ((int)plVar23[1] != *(int *)((longlong)plVar23 + 0x34)) {
          uVar18 = ((uint)((ulonglong)plVar24 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar24 >> 4)) *
                   -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          plVar9 = plVar23 + 7;
          if ((longlong *)plVar23[8] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar23[8];
          }
          iVar17 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)plVar23[9] - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
          if (iVar17 != -1) {
            do {
              lVar19 = *plVar23 + (longlong)iVar17 * 0x20;
              if (*(longlong **)(*plVar23 + (longlong)iVar17 * 0x20) == plVar24) goto LAB_143693eae;
              iVar17 = *(int *)(lVar19 + 0x18);
            } while (iVar17 != -1);
          }
        }
        lVar19 = 0;
LAB_143693eae:
        param_3 = (wchar_t *)&DAT_ffffffff;
        local_e8 = pdVar22;
        cVar7 = FUN_143697dfb(lVar19 + 8);
LAB_143693ba3:
        if (cVar7 == '\0') {
LAB_143693f4f:
          plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
          if (((*(byte *)(lVar1 + 0x2c) & 1) != 0) &&
             (plVar23 = (longlong *)*plVar24, (*(byte *)((longlong)plVar23 + 0x39) & 0x20) == 0)) {
            bVar14 = *(byte *)((longlong)plVar24 + 0x1c);
            if (bVar14 - 0x16 < 2) {
LAB_143693f86:
              if (plVar23 == (longlong *)0x0) goto LAB_14369421f;
              local_80 = plVar24;
              local_70 = (**(code **)(*plVar23 + 0x210))(plVar23);
              lVar19 = plVar23[0xe];
              if (lVar19 == 0) {
                bVar14 = 0;
                uVar8 = 0;
                param_1 = local_90;
LAB_1436941af:
                cVar20 = (char)uVar8;
                if (local_70 == 0) {
                  cVar7 = '\0';
                }
                else {
                  cVar7 = switchD_143c3d4dc::caseD_45(local_70);
                }
              }
              else {
                if (DAT_14cac9ca8 == 0) {
                  local_68 = (double *)FUN_141030f22;
                  local_a0 = FUN_14081d0ea;
                  local_a8 = FUN_14081d0ea;
                  local_b0 = &local_68;
                  local_b8 = &LAB_1478c0a72;
                  local_c0 = &LAB_1417b2375;
                  local_c8 = L"Engine";
                  local_d0 = 0x1000000000;
                  local_d8 = 0x10000004;
                  local_e0 = 8;
                  local_e8 = (double *)CONCAT44(local_e8._4_4_,0x390);
                  param_3 = (wchar_t *)&DAT_14cac9ca8;
                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                  if (DAT_14cac9ca8 != 0) goto LAB_143693fd0;
LAB_143693fdd:
                  plVar24 = (longlong *)0x0;
                }
                else {
LAB_143693fd0:
                  if (*(int *)(lVar19 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) goto LAB_143693fdd;
                  plVar24 = (longlong *)
                            CONCAT71((int7)((ulonglong)param_3 >> 8),
                                     *(longlong *)
                                      (*(longlong *)(lVar19 + 0x30) +
                                      (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
                                     DAT_14cac9ca8 + 0x30);
                }
                lVar19 = plVar23[0xe];
                if (lVar19 == 0) {
LAB_1436940d9:
                  uVar8 = 0;
                }
                else {
                  if (DAT_14cad00c8 == 0) {
                    local_68 = (double *)FUN_144a7958c;
                    local_a0 = FUN_14081d0ea;
                    local_a8 = FUN_14081d0ea;
                    local_b0 = &local_68;
                    local_b8 = &LAB_1479b7a0c;
                    local_c0 = &LAB_1463b464e;
                    local_c8 = L"Engine";
                    local_d0 = 0;
                    local_d8 = 0x10000005;
                    local_e0 = 8;
                    local_e8 = (double *)CONCAT44(local_e8._4_4_,0x110);
                    plVar24 = (longlong *)((ulonglong)plVar24 & 0xffffffff);
                    FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                    plVar23 = plVar24;
                    if (DAT_14cad00c8 == 0) goto LAB_1436940d9;
                  }
                  if (*(int *)(lVar19 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1436940d9;
                  uVar8 = CONCAT71((int7)((ulonglong)plVar23 >> 8),
                                   *(longlong *)
                                    (*(longlong *)(lVar19 + 0x30) +
                                    (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                                   DAT_14cad00c8 + 0x30);
                }
                lVar19 = local_70;
                param_1 = local_90;
                bVar14 = (byte)plVar24 & local_70 != 0;
                param_3 = (wchar_t *)CONCAT71((int7)((ulonglong)plVar24 >> 8),bVar14);
                if (bVar14 != 1) {
                  bVar14 = 0;
                  goto LAB_1436941af;
                }
                local_88 = CONCAT44(local_88._4_4_,(int)uVar8);
                if (DAT_14cac9ca8 == 0) {
                  local_68 = (double *)FUN_141030f22;
                  local_a0 = FUN_14081d0ea;
                  local_a8 = FUN_14081d0ea;
                  local_b0 = &local_68;
                  local_b8 = &LAB_1478c0a72;
                  local_c0 = &LAB_1417b2375;
                  local_c8 = L"Engine";
                  local_d0 = 0x1000000000;
                  local_d8 = 0x10000004;
                  local_e0 = 8;
                  local_e8 = (double *)CONCAT44(local_e8._4_4_,0x390);
                  param_3 = (wchar_t *)&DAT_14cac9ca8;
                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                }
                if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
                  lVar19 = 0;
                }
                cVar7 = FUN_1449e2a3e(lVar19);
                lVar19 = local_70;
                if (local_70 == 0) {
                  bVar14 = 0;
                }
                else {
                  if (DAT_14cac9ca8 == 0) {
                    local_68 = (double *)FUN_141030f22;
                    local_a0 = FUN_14081d0ea;
                    local_a8 = FUN_14081d0ea;
                    local_b0 = &local_68;
                    local_b8 = &LAB_1478c0a72;
                    local_c0 = &LAB_1417b2375;
                    local_c8 = L"Engine";
                    local_d0 = 0x1000000000;
                    local_d8 = 0x10000004;
                    local_e0 = 8;
                    local_e8 = (double *)CONCAT44(local_e8._4_4_,0x390);
                    param_3 = (wchar_t *)&DAT_14cac9ca8;
                    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                  }
                  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) <
                       *(int *)(DAT_14cac9ca8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
                    lVar19 = 0;
                  }
                  bVar14 = (*(byte *)(lVar19 + 99) & 8) >> 3;
                  bVar26 = cVar7 == '\0';
                  cVar7 = '\x01';
                  if (bVar26) {
                    uVar8 = local_88 & 0xffffffff;
                    goto LAB_1436941af;
                  }
                }
                cVar20 = (char)local_88;
              }
              if ((bVar14 == 0) && (cVar20 == '\0')) {
                plVar24 = local_80;
                if (cVar7 == '\x01' && local_70 != 0) {
LAB_143694202:
                  if (param_1[1] != 0) {
                    FUN_1400ddfc2(param_1[1],&local_70);
                  }
                  goto LAB_14369421f;
                }
                if (local_70 == 0) goto LAB_14369421f;
              }
            }
            else {
              if (bVar14 == 0x18) {
                if ((plVar23 != (longlong *)0x0) &&
                   (local_70 = *(longlong *)(param_2[1] + (longlong)(int)plVar24[2]), local_70 != 0)
                   ) {
                  lVar19 = *(longlong *)(local_70 + 0x10);
                  if (lVar19 != 0) {
                    if (DAT_14cac9ca8 == 0) {
                      local_68 = (double *)FUN_141030f22;
                      local_a0 = FUN_14081d0ea;
                      local_a8 = FUN_14081d0ea;
                      local_b0 = &local_68;
                      local_b8 = &LAB_1478c0a72;
                      local_c0 = &LAB_1417b2375;
                      local_c8 = L"Engine";
                      local_d0 = 0x1000000000;
                      local_d8 = 0x10000004;
                      local_e0 = 8;
                      local_e8 = (double *)CONCAT44(local_e8._4_4_,0x390);
                      param_3 = (wchar_t *)&DAT_14cac9ca8;
                      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                      if (DAT_14cac9ca8 != 0) goto LAB_143694024;
                    }
                    else {
LAB_143694024:
                      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar19 + 0x38)) &&
                         (param_1 = local_90,
                         *(longlong *)
                          (*(longlong *)(lVar19 + 0x30) +
                          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
                      break;
                    }
                    lVar19 = *(longlong *)(local_70 + 0x10);
                    if (DAT_14cad00c8 == 0) {
                      local_68 = (double *)FUN_144a7958c;
                      local_a0 = FUN_14081d0ea;
                      local_a8 = FUN_14081d0ea;
                      local_b0 = &local_68;
                      local_b8 = &LAB_1479b7a0c;
                      local_c0 = &LAB_1463b464e;
                      local_c8 = L"Engine";
                      local_d0 = 0;
                      local_d8 = 0x10000005;
                      local_e0 = 8;
                      local_e8 = (double *)CONCAT44(local_e8._4_4_,0x110);
                      param_3 = (wchar_t *)&DAT_14cad00c8;
                      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c
                                   );
                      if (DAT_14cad00c8 == 0) goto LAB_143694076;
                    }
                    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar19 + 0x38)) &&
                       (param_1 = local_90,
                       *(longlong *)
                        (*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8
                        ) == DAT_14cad00c8 + 0x30)) break;
                  }
LAB_143694076:
                  cVar7 = switchD_143c3d4dc::caseD_45(local_70);
                  param_1 = local_90;
                  if (cVar7 == '\0') break;
                  goto LAB_143694202;
                }
              }
              else if (bVar14 == 8) goto LAB_143693f86;
LAB_14369421f:
              pdVar22 = (double *)((longlong)(int)plVar24[2] + param_2[1]);
              pdVar16 = (double *)((longlong)*(int *)((longlong)plVar24 + 0xc) + *param_2);
              if (pdVar16 != pdVar22) {
                plVar24 = (longlong *)*plVar24;
                if ((*(byte *)((longlong)plVar24 + 0x3b) & 0x40) == 0) {
                  (**(code **)(*plVar24 + 0x100))(plVar24,pdVar16,pdVar22,1);
                  param_3 = (wchar_t *)pdVar22;
                }
                else {
                  param_3 = (wchar_t *)(longlong)*(int *)((longlong)plVar24 + 0x34);
                  memcpy(pdVar16,pdVar22,(size_t)param_3);
                }
              }
              if ((*param_1 != 0) && (*(int *)(lVar1 + 0x28) != -1)) {
                FUN_1417c47ea(*param_1,lVar1);
              }
            }
          }
        }
      }
LAB_143694277:
      uVar18 = uVar21 + 1;
    } while ((int)(uVar18 & 0xffff) < *(int *)((longlong)param_2 + 0x14));
  }
  else {
    plVar12 = (longlong *)0x0;
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar12 & 0xffffff01;
}



// FUNCTION 1436946be FUN_1436946be body=1609 status=ok
// SIG undefined FUN_1436946be(void)

byte FUN_1436946be(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  byte bVar7;
  ushort uVar8;
  void *_Src;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  void *_Dst;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  double *pdVar17;
  int iVar18;
  byte bVar19;
  double *pdVar20;
  longlong *plVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_b8 [32];
  double *local_98;
  uint local_8c;
  uint *local_88;
  uint local_7c;
  longlong local_78;
  longlong *local_70;
  double *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar13 = (uint)*(ushort *)(param_2 + 2);
  if (*(ushort *)(param_2 + 2) < *(ushort *)((longlong)param_2 + 0x12)) {
    local_8c = param_1[1];
    bVar19 = 0;
    local_88 = param_1;
    local_70 = param_2;
    do {
      uVar9 = (ulonglong)((uVar13 & 0xffff) << 5);
      uVar11 = (ulonglong)((uint)*(ushort *)(**(longlong **)(param_1 + 6) + 0x16 + uVar9) * 0x30);
      lVar1 = **(longlong **)(param_1 + 4) + uVar11;
      uVar4 = *(uint *)(**(longlong **)(param_1 + 4) + 0x2c + uVar11);
      if ((uVar4 & 8) != 0) {
        uVar12 = *(ushort *)(lVar1 + 0x1e) - 1;
        goto LAB_143694b6e;
      }
      plVar21 = (longlong *)(**(longlong **)(param_1 + 6) + uVar9);
      bVar7 = *(byte *)((longlong)plVar21 + 0x1c);
      if (bVar7 == 0) {
        uVar12 = (int)plVar21[1] - 1;
        lVar1 = param_2[1];
        lVar14 = (longlong)(int)plVar21[2];
        plVar2 = (longlong *)(*param_2 + (longlong)*(int *)((longlong)plVar21 + 0xc));
        iVar18 = *(int *)(lVar1 + 8 + lVar14);
        if (iVar18 != *(int *)(*param_2 + 8 + (longlong)*(int *)((longlong)plVar21 + 0xc))) {
          bVar19 = 1;
          if (((local_8c & 1) == 0) || ((*param_1 & uVar4) == 0)) goto LAB_143694b6e;
          lVar15 = *plVar21;
          uVar3 = *(undefined1 *)(lVar15 + 0x70);
          local_54 = (**(code **)(**(longlong **)(lVar15 + 0x78) + 0x178))();
          local_68 = *(double **)(lVar15 + 0x78);
          local_58 = *(float *)((longlong)local_68 + 0x34);
          local_60 = plVar2;
          local_50 = uVar3;
          FUN_144a8a902(&local_68,*(undefined4 *)(lVar1 + 8 + lVar14));
          iVar18 = *(int *)(lVar1 + 8 + lVar14);
          bVar19 = 1;
          param_1 = local_88;
        }
        lVar15 = *plVar2;
        lVar6 = *(longlong *)(lVar1 + lVar14);
        local_58 = (float)CONCAT22((short)uVar12,(short)uVar13 + 1);
        param_2 = local_70;
        local_7c = uVar12;
        if (0 < iVar18) {
          iVar18 = 0;
          do {
            uVar9 = (ulonglong)((uint)*(ushort *)((longlong)plVar21 + 10) * iVar18);
            local_60 = (longlong *)(lVar6 + uVar9);
            local_68 = (double *)(uVar9 + lVar15);
            bVar7 = FUN_1436946be(param_1,&local_68);
            bVar19 = bVar19 | bVar7;
            iVar18 = iVar18 + 1;
            param_2 = local_70;
            param_1 = local_88;
            uVar12 = local_7c;
          } while (iVar18 < *(int *)(lVar1 + 8 + lVar14));
        }
        goto LAB_143694b6e;
      }
      lVar14 = *(longlong *)(param_1 + 2);
      bVar23 = *(int *)(lVar1 + 0x28) != -1;
      uVar12 = uVar13;
      if ((bVar23 && lVar14 != 0) && (*(int *)(lVar1 + 0x24) == 1)) {
LAB_14369476d:
        bVar19 = 1;
        if ((local_8c & 1) == 0) goto LAB_143694b6e;
        goto LAB_14369477b;
      }
      if (0x17 < bVar7 - 2) {
        if (*plVar21 == 0) {
          FUN_140056680(&local_68,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*plVar21 + 0x20,&local_68);
        }
        local_98 = (double *)&DAT_149dfb77a;
        if ((int)local_60 != 0) {
          local_98 = local_68;
        }
        FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                      L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                      *(undefined1 *)((longlong)plVar21 + 0x1c));
        param_1 = local_88;
        if (local_68 != (double *)0x0) {
          FUN_1400020a8();
          param_1 = local_88;
        }
        goto LAB_14369476d;
      }
      pdVar20 = (double *)((longlong)*(int *)((longlong)plVar21 + 0xc) + *param_2);
      pdVar17 = (double *)((longlong)(int)plVar21[2] + param_2[1]);
      switch((uint)bVar7) {
      case 2:
      case 3:
      case 0x16:
      case 0x18:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = (**(code **)(*(longlong *)*plVar21 + 200))((longlong *)*plVar21,pdVar17,pdVar20,0);
        goto LAB_143694991;
      case 4:
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(*(float *)pdVar17) || NAN(*(float *)pdVar20);
        bVar24 = *(float *)pdVar17 == *(float *)pdVar20;
        goto LAB_143694a2c;
      case 5:
      case 9:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(float *)pdVar17 == *(float *)pdVar20;
        break;
      case 6:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(char *)pdVar17 == *(char *)pdVar20;
        break;
      case 7:
      case 0x14:
      case 0x17:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *pdVar17 == *pdVar20;
        break;
      case 8:
        local_7c = CONCAT31(local_7c._1_3_,(local_8c & 1) == 0);
        plVar2 = (longlong *)*plVar21;
        local_78 = (**(code **)(*plVar2 + 0x210))(plVar2,pdVar17);
        lVar15 = (**(code **)(*plVar2 + 0x210))(plVar2,pdVar20);
        bVar7 = local_78 != lVar15;
        param_1 = local_88;
        if ((bool)bVar7 && (char)local_7c == '\0') goto LAB_14369477b;
        goto LAB_143694b68;
      default:
        if (((*pdVar17 != *pdVar20) || (NAN(*pdVar17) || NAN(*pdVar20))) ||
           ((pdVar17[1] != pdVar20[1] || (NAN(pdVar17[1]) || NAN(pdVar20[1]))))) goto LAB_14369476d;
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(pdVar17[2]) || NAN(pdVar20[2]);
        bVar24 = pdVar17[2] == pdVar20[2];
        goto LAB_143694a2c;
      case 0xc:
        if (((((*pdVar17 != *pdVar20) || (NAN(*pdVar17) || NAN(*pdVar20))) ||
             (pdVar17[1] != pdVar20[1])) ||
            ((NAN(pdVar17[1]) || NAN(pdVar20[1]) || (pdVar17[2] != pdVar20[2])))) ||
           (NAN(pdVar17[2]) || NAN(pdVar20[2]))) goto LAB_14369476d;
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(pdVar17[3]) || NAN(pdVar20[3]);
        bVar24 = pdVar17[3] == pdVar20[3];
LAB_143694a2c:
        if ((bool)(!bVar22 & bVar24) || bVar25) {
          bVar7 = !bVar24 | bVar22;
          goto LAB_143694b68;
        }
        goto LAB_14369477b;
      case 0xe:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = FUN_140ba41f1(pdVar17,pdVar20);
        goto LAB_143694991;
      case 0xf:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = FUN_1436982e0(pdVar17,pdVar20);
LAB_143694991:
        param_1 = local_88;
        if (bVar24 || bVar7 != 0) {
LAB_14369499f:
          bVar7 = bVar7 ^ 1;
          param_1 = local_88;
          goto LAB_143694b68;
        }
        goto LAB_14369477b;
      case 0x13:
        fVar5 = *(float *)(pdVar17 + 1);
        if (fVar5 == *(float *)(pdVar20 + 1)) {
          if (1 < (int)fVar5) {
            lVar15 = 0;
            while( true ) {
              uVar8 = *(ushort *)((longlong)*pdVar17 + lVar15);
              uVar9 = (ulonglong)uVar8;
              uVar16 = *(ushort *)((longlong)*pdVar20 + lVar15);
              if (uVar8 != uVar16) {
                if ((uVar16 | uVar8) < 0x80) {
                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  uVar11 = (ulonglong)uVar16;
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_143694ab3;
                }
                bVar24 = (local_8c & 1) == 0;
                bVar25 = uVar8 == uVar16;
                goto LAB_143694b5a;
              }
              if (uVar8 == 0) break;
LAB_143694ab3:
              lVar15 = lVar15 + 2;
            }
          }
          goto LAB_143694b6e;
        }
        bVar7 = (int)*(float *)(pdVar20 + 1) + (int)fVar5 != 1;
        if (!(bool)bVar7 || (local_8c & 1) == 0) goto LAB_143694b68;
        goto LAB_14369477b;
      case 0x15:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(char *)pdVar17 == *(char *)pdVar20;
        break;
      case 0x19:
        plVar2 = *(longlong **)(param_1 + 8);
        if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
          uVar13 = ((uint)((ulonglong)plVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar21 >> 4)) *
                   -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          plVar10 = plVar2 + 7;
          if ((longlong *)plVar2[8] != (longlong *)0x0) {
            plVar10 = (longlong *)plVar2[8];
          }
          iVar18 = *(int *)((longlong)plVar10 +
                           (ulonglong)((int)plVar2[9] - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
          if (iVar18 != -1) {
            do {
              lVar15 = *plVar2 + (longlong)iVar18 * 0x20;
              if (*(longlong **)(*plVar2 + (longlong)iVar18 * 0x20) == plVar21) goto LAB_143694c0f;
              iVar18 = *(int *)(lVar15 + 0x18);
            } while (iVar18 != -1);
          }
        }
        lVar15 = 0;
LAB_143694c0f:
        uVar13 = local_8c & 1;
        local_98 = pdVar20;
        bVar7 = FUN_143697dfb(lVar15 + 8);
        param_1 = local_88;
        if (uVar13 != 0 && bVar7 == 0) goto LAB_14369477b;
        goto LAB_14369499f;
      }
LAB_143694b5a:
      bVar7 = !bVar25;
      if ((bool)(bVar25 | bVar24)) {
LAB_143694b68:
        bVar19 = bVar19 | bVar7;
      }
      else {
LAB_14369477b:
        bVar19 = 1;
        if ((*param_1 & *(uint *)(lVar1 + 0x2c)) != 0) {
          _Src = (void *)((longlong)(int)plVar21[2] + param_2[1]);
          _Dst = (void *)((longlong)*(int *)((longlong)plVar21 + 0xc) + *param_2);
          if (_Dst != _Src) {
            plVar21 = (longlong *)*plVar21;
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,_Dst,_Src,1);
              param_1 = local_88;
            }
            else {
              memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar21 + 0x34));
              param_1 = local_88;
            }
          }
          if (bVar23 && lVar14 != 0) {
            FUN_1417c47ea(*(undefined8 *)(param_1 + 2),lVar1);
            param_1 = local_88;
          }
        }
      }
LAB_143694b6e:
      uVar13 = uVar12 + 1;
    } while ((ushort)uVar13 < *(ushort *)((longlong)param_2 + 0x12));
  }
  else {
    bVar19 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar19 & 1;
}



// FUNCTION 143694d08 FUN_143694d08 body=3186 status=ok
// SIG undefined FUN_143694d08(void)

ulonglong FUN_143694d08(longlong *param_1,longlong *param_2,wchar_t *param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte bVar14;
  ushort uVar15;
  double *pdVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  char cVar20;
  uint uVar21;
  double *pdVar22;
  longlong *plVar23;
  longlong *plVar24;
  bool bVar25;
  bool bVar26;
  undefined1 auStack_108 [32];
  double *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  double **local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_90;
  ulonglong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  double *local_68;
  longlong *local_60;
  float local_58;
  uint local_54;
  undefined1 local_50;
  ulonglong local_48;
  undefined7 uVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar18 = (uint)*(ushort *)(param_2 + 2);
  if ((int)(uint)*(ushort *)(param_2 + 2) < *(int *)((longlong)param_2 + 0x14)) {
    plVar12 = (longlong *)0x0;
    local_90 = param_1;
    local_78 = param_2;
    do {
      uVar8 = (ulonglong)((uVar18 & 0xffff) << 5);
      uVar11 = (ulonglong)((uint)*(ushort *)(*(longlong *)param_1[3] + 0x16 + uVar8) * 0x30);
      lVar1 = *(longlong *)param_1[2] + uVar11;
      uVar3 = *(uint *)(*(longlong *)param_1[2] + 0x2c + uVar11);
      if ((uVar3 & 8) != 0) {
        uVar21 = *(ushort *)(lVar1 + 0x1e) - 1;
        goto LAB_143695534;
      }
      plVar24 = (longlong *)(*(longlong *)param_1[3] + uVar8);
      bVar14 = *(byte *)((longlong)plVar24 + 0x1c);
      if (bVar14 == 0) {
        uVar21 = (int)plVar24[1] - 1;
        lVar1 = param_2[1];
        lVar19 = (longlong)*(int *)((longlong)plVar24 + 0xc);
        param_3 = (wchar_t *)(longlong)(int)plVar24[2];
        plVar23 = (longlong *)(*param_2 + (longlong)param_3);
        iVar17 = *(int *)(lVar1 + 8 + lVar19);
        local_80 = plVar24;
        if (iVar17 != *(int *)(*param_2 + 8 + (longlong)param_3)) {
          uVar13 = (undefined7)((ulonglong)plVar12 >> 8);
          plVar12 = (longlong *)CONCAT71(uVar13,1);
          param_1 = local_90;
          if ((uVar3 & 1) == 0) goto LAB_143695534;
          lVar5 = *plVar24;
          uVar2 = *(undefined1 *)(lVar5 + 0x70);
          local_54 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x178))();
          local_68 = *(double **)(lVar5 + 0x78);
          local_58 = *(float *)((longlong)local_68 + 0x34);
          local_60 = plVar23;
          local_50 = uVar2;
          FUN_144a8a902(&local_68,*(undefined4 *)(lVar1 + 8 + lVar19));
          iVar17 = *(int *)(lVar1 + 8 + lVar19);
          plVar12 = (longlong *)CONCAT71(uVar13,1);
        }
        plVar24 = local_80;
        param_1 = local_90;
        lVar5 = *plVar23;
        lVar6 = *(longlong *)(lVar1 + lVar19);
        local_58 = (float)(uVar18 + 1 & 0xffff);
        local_88 = CONCAT44(local_88._4_4_,uVar21);
        local_54 = uVar21 & 0xffff;
        if (0 < iVar17) {
          iVar17 = 0;
          do {
            uVar8 = (ulonglong)((uint)*(ushort *)((longlong)plVar24 + 10) * iVar17);
            local_60 = (longlong *)(lVar6 + uVar8);
            local_68 = (double *)(uVar8 + lVar5);
            bVar14 = FUN_143694d08(param_1,&local_68);
            plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),(byte)plVar12 | bVar14);
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(lVar1 + 8 + lVar19));
        }
        param_2 = local_78;
        uVar21 = (uint)local_88;
        goto LAB_143695534;
      }
      uVar21 = uVar18;
      if (0x17 < bVar14 - 2) {
        if (*plVar24 == 0) {
          FUN_140056680(&local_68,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*plVar24 + 0x20,&local_68);
        }
        local_e8 = (double *)&DAT_149dfb77a;
        if ((int)local_60 != 0) {
          local_e8 = local_68;
        }
        param_3 = L"PropertiesAreIdentical: Unsupported type! %i (%s)";
        FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                      L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                      *(undefined1 *)((longlong)plVar24 + 0x1c));
        if (local_68 != (double *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14369520c;
      }
      pdVar22 = (double *)((longlong)*(int *)((longlong)plVar24 + 0xc) + param_2[1]);
      pdVar16 = (double *)((longlong)(int)plVar24[2] + *param_2);
      switch((uint)bVar14) {
      case 2:
      case 3:
      case 0x16:
      case 0x18:
        cVar7 = (**(code **)(*(longlong *)*plVar24 + 200))((longlong *)*plVar24,pdVar16,pdVar22,0);
        param_3 = (wchar_t *)pdVar22;
        goto LAB_143694e60;
      case 4:
        bVar25 = NAN(*(float *)pdVar16) || NAN(*(float *)pdVar22);
        bVar26 = *(float *)pdVar16 == *(float *)pdVar22;
        goto LAB_143694ffa;
      case 5:
      case 9:
        if (*(float *)pdVar16 != *(float *)pdVar22) goto LAB_14369520c;
        break;
      case 6:
      case 0x15:
        if (*(char *)pdVar16 != *(char *)pdVar22) goto LAB_14369520c;
        break;
      case 7:
      case 0x14:
      case 0x17:
        if (*pdVar16 != *pdVar22) goto LAB_14369520c;
        break;
      case 8:
        plVar23 = (longlong *)*plVar24;
        local_80 = plVar12;
        local_88 = (**(code **)(*plVar23 + 0x210))(plVar23,pdVar16);
        plVar12 = local_80;
        uVar8 = (**(code **)(*plVar23 + 0x210))(plVar23,pdVar22);
        if (local_88 != uVar8) goto LAB_14369520c;
        break;
      default:
        if (((*pdVar16 != *pdVar22) || (NAN(*pdVar16) || NAN(*pdVar22))) ||
           ((pdVar16[1] != pdVar22[1] || (NAN(pdVar16[1]) || NAN(pdVar22[1]))))) goto LAB_14369520c;
        bVar25 = NAN(pdVar16[2]) || NAN(pdVar22[2]);
        bVar26 = pdVar16[2] == pdVar22[2];
        goto LAB_143694ffa;
      case 0xc:
        if (((((*pdVar16 != *pdVar22) || (NAN(*pdVar16) || NAN(*pdVar22))) ||
             (pdVar16[1] != pdVar22[1])) ||
            ((NAN(pdVar16[1]) || NAN(pdVar22[1]) || (pdVar16[2] != pdVar22[2])))) ||
           (NAN(pdVar16[2]) || NAN(pdVar22[2]))) goto LAB_14369520c;
        bVar25 = NAN(pdVar16[3]) || NAN(pdVar22[3]);
        bVar26 = pdVar16[3] == pdVar22[3];
LAB_143694ffa:
        if ((bVar26) && (!bVar25)) break;
        goto LAB_14369520c;
      case 0xe:
        cVar7 = FUN_140ba41f1(pdVar16,pdVar22);
        goto LAB_143694e60;
      case 0xf:
        cVar7 = FUN_1436982e0(pdVar16,pdVar22);
        goto LAB_143694e60;
      case 0x13:
        fVar4 = *(float *)(pdVar16 + 1);
        if (fVar4 == *(float *)(pdVar22 + 1)) {
          if (1 < (int)fVar4) {
            param_3 = (wchar_t *)0x0;
            while( true ) {
              uVar10 = *(ushort *)((longlong)*pdVar16 + (longlong)param_3);
              uVar8 = (ulonglong)uVar10;
              uVar15 = *(ushort *)((longlong)*pdVar22 + (longlong)param_3);
              if (uVar10 != uVar15) break;
              if (uVar10 == 0) goto LAB_143695534;
LAB_143695065:
              param_3 = (wchar_t *)((longlong)param_3 + 2);
            }
            if ((uVar15 | uVar10) < 0x80) {
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar11 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_143695065;
            }
            if (uVar10 != uVar15) goto LAB_14369520c;
          }
        }
        else if ((int)*(float *)(pdVar22 + 1) + (int)fVar4 != 1) goto LAB_14369520c;
        break;
      case 0x19:
        plVar23 = (longlong *)param_1[4];
        if ((int)plVar23[1] != *(int *)((longlong)plVar23 + 0x34)) {
          uVar18 = ((uint)((ulonglong)plVar24 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar24 >> 4)) *
                   -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          plVar9 = plVar23 + 7;
          if ((longlong *)plVar23[8] != (longlong *)0x0) {
            plVar9 = (longlong *)plVar23[8];
          }
          iVar17 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)plVar23[9] - 1U & (uVar18 >> 0x10 ^ uVar18)) * 4);
          if (iVar17 != -1) {
            do {
              lVar19 = *plVar23 + (longlong)iVar17 * 0x20;
              if (*(longlong **)(*plVar23 + (longlong)iVar17 * 0x20) == plVar24) goto LAB_14369516b;
              iVar17 = *(int *)(lVar19 + 0x18);
            } while (iVar17 != -1);
          }
        }
        lVar19 = 0;
LAB_14369516b:
        param_3 = (wchar_t *)&DAT_ffffffff;
        local_e8 = pdVar22;
        cVar7 = FUN_143697dfb(lVar19 + 8);
LAB_143694e60:
        if (cVar7 == '\0') {
LAB_14369520c:
          plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),1);
          if (((*(byte *)(lVar1 + 0x2c) & 1) != 0) &&
             (plVar23 = (longlong *)*plVar24, (*(byte *)((longlong)plVar23 + 0x39) & 0x20) == 0)) {
            bVar14 = *(byte *)((longlong)plVar24 + 0x1c);
            if (bVar14 - 0x16 < 2) {
LAB_143695243:
              if (plVar23 == (longlong *)0x0) goto LAB_1436954dc;
              local_80 = plVar24;
              local_70 = (**(code **)(*plVar23 + 0x210))(plVar23);
              lVar19 = plVar23[0xe];
              if (lVar19 == 0) {
                bVar14 = 0;
                uVar8 = 0;
                param_1 = local_90;
LAB_14369546c:
                cVar20 = (char)uVar8;
                if (local_70 == 0) {
                  cVar7 = '\0';
                }
                else {
                  cVar7 = switchD_143c3d4dc::caseD_45(local_70);
                }
              }
              else {
                if (DAT_14cac9ca8 == 0) {
                  local_68 = (double *)FUN_141030f22;
                  local_a0 = FUN_14081d0ea;
                  local_a8 = FUN_14081d0ea;
                  local_b0 = &local_68;
                  local_b8 = &LAB_1478c0a72;
                  local_c0 = &LAB_1417b2375;
                  local_c8 = L"Engine";
                  local_d0 = 0x1000000000;
                  local_d8 = 0x10000004;
                  local_e0 = 8;
                  local_e8 = (double *)CONCAT44(local_e8._4_4_,0x390);
                  param_3 = (wchar_t *)&DAT_14cac9ca8;
                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                  if (DAT_14cac9ca8 != 0) goto LAB_14369528d;
LAB_14369529a:
                  plVar24 = (longlong *)0x0;
                }
                else {
LAB_14369528d:
                  if (*(int *)(lVar19 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) goto LAB_14369529a;
                  plVar24 = (longlong *)
                            CONCAT71((int7)((ulonglong)param_3 >> 8),
                                     *(longlong *)
                                      (*(longlong *)(lVar19 + 0x30) +
                                      (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
                                     DAT_14cac9ca8 + 0x30);
                }
                lVar19 = plVar23[0xe];
                if (lVar19 == 0) {
LAB_143695396:
                  uVar8 = 0;
                }
                else {
                  if (DAT_14cad00c8 == 0) {
                    local_68 = (double *)FUN_144a7958c;
                    local_a0 = FUN_14081d0ea;
                    local_a8 = FUN_14081d0ea;
                    local_b0 = &local_68;
                    local_b8 = &LAB_1479b7a0c;
                    local_c0 = &LAB_1463b464e;
                    local_c8 = L"Engine";
                    local_d0 = 0;
                    local_d8 = 0x10000005;
                    local_e0 = 8;
                    local_e8 = (double *)CONCAT44(local_e8._4_4_,0x110);
                    plVar24 = (longlong *)((ulonglong)plVar24 & 0xffffffff);
                    FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                    plVar23 = plVar24;
                    if (DAT_14cad00c8 == 0) goto LAB_143695396;
                  }
                  if (*(int *)(lVar19 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_143695396;
                  uVar8 = CONCAT71((int7)((ulonglong)plVar23 >> 8),
                                   *(longlong *)
                                    (*(longlong *)(lVar19 + 0x30) +
                                    (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                                   DAT_14cad00c8 + 0x30);
                }
                lVar19 = local_70;
                param_1 = local_90;
                bVar14 = (byte)plVar24 & local_70 != 0;
                param_3 = (wchar_t *)CONCAT71((int7)((ulonglong)plVar24 >> 8),bVar14);
                if (bVar14 != 1) {
                  bVar14 = 0;
                  goto LAB_14369546c;
                }
                local_88 = CONCAT44(local_88._4_4_,(int)uVar8);
                if (DAT_14cac9ca8 == 0) {
                  local_68 = (double *)FUN_141030f22;
                  local_a0 = FUN_14081d0ea;
                  local_a8 = FUN_14081d0ea;
                  local_b0 = &local_68;
                  local_b8 = &LAB_1478c0a72;
                  local_c0 = &LAB_1417b2375;
                  local_c8 = L"Engine";
                  local_d0 = 0x1000000000;
                  local_d8 = 0x10000004;
                  local_e0 = 8;
                  local_e8 = (double *)CONCAT44(local_e8._4_4_,0x390);
                  param_3 = (wchar_t *)&DAT_14cac9ca8;
                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                }
                if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38))
                   || (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
                  lVar19 = 0;
                }
                cVar7 = FUN_1449e2a3e(lVar19);
                lVar19 = local_70;
                if (local_70 == 0) {
                  bVar14 = 0;
                }
                else {
                  if (DAT_14cac9ca8 == 0) {
                    local_68 = (double *)FUN_141030f22;
                    local_a0 = FUN_14081d0ea;
                    local_a8 = FUN_14081d0ea;
                    local_b0 = &local_68;
                    local_b8 = &LAB_1478c0a72;
                    local_c0 = &LAB_1417b2375;
                    local_c8 = L"Engine";
                    local_d0 = 0x1000000000;
                    local_d8 = 0x10000004;
                    local_e0 = 8;
                    local_e8 = (double *)CONCAT44(local_e8._4_4_,0x390);
                    param_3 = (wchar_t *)&DAT_14cac9ca8;
                    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                  }
                  if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) <
                       *(int *)(DAT_14cac9ca8 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
                    lVar19 = 0;
                  }
                  bVar14 = (*(byte *)(lVar19 + 99) & 8) >> 3;
                  bVar26 = cVar7 == '\0';
                  cVar7 = '\x01';
                  if (bVar26) {
                    uVar8 = local_88 & 0xffffffff;
                    goto LAB_14369546c;
                  }
                }
                cVar20 = (char)local_88;
              }
              if ((bVar14 == 0) && (cVar20 == '\0')) {
                plVar24 = local_80;
                if (cVar7 == '\x01' && local_70 != 0) {
LAB_1436954bf:
                  if (param_1[1] != 0) {
                    FUN_1400ddfc2(param_1[1],&local_70);
                  }
                  goto LAB_1436954dc;
                }
                if (local_70 == 0) goto LAB_1436954dc;
              }
            }
            else {
              if (bVar14 == 0x18) {
                if ((plVar23 != (longlong *)0x0) &&
                   (local_70 = *(longlong *)
                                (param_2[1] + (longlong)*(int *)((longlong)plVar24 + 0xc)),
                   local_70 != 0)) {
                  lVar19 = *(longlong *)(local_70 + 0x10);
                  if (lVar19 != 0) {
                    if (DAT_14cac9ca8 == 0) {
                      local_68 = (double *)FUN_141030f22;
                      local_a0 = FUN_14081d0ea;
                      local_a8 = FUN_14081d0ea;
                      local_b0 = &local_68;
                      local_b8 = &LAB_1478c0a72;
                      local_c0 = &LAB_1417b2375;
                      local_c8 = L"Engine";
                      local_d0 = 0x1000000000;
                      local_d8 = 0x10000004;
                      local_e0 = 8;
                      local_e8 = (double *)CONCAT44(local_e8._4_4_,0x390);
                      param_3 = (wchar_t *)&DAT_14cac9ca8;
                      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                      if (DAT_14cac9ca8 != 0) goto LAB_1436952e1;
                    }
                    else {
LAB_1436952e1:
                      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar19 + 0x38)) &&
                         (param_1 = local_90,
                         *(longlong *)
                          (*(longlong *)(lVar19 + 0x30) +
                          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
                      break;
                    }
                    lVar19 = *(longlong *)(local_70 + 0x10);
                    if (DAT_14cad00c8 == 0) {
                      local_68 = (double *)FUN_144a7958c;
                      local_a0 = FUN_14081d0ea;
                      local_a8 = FUN_14081d0ea;
                      local_b0 = &local_68;
                      local_b8 = &LAB_1479b7a0c;
                      local_c0 = &LAB_1463b464e;
                      local_c8 = L"Engine";
                      local_d0 = 0;
                      local_d8 = 0x10000005;
                      local_e0 = 8;
                      local_e8 = (double *)CONCAT44(local_e8._4_4_,0x110);
                      param_3 = (wchar_t *)&DAT_14cad00c8;
                      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c
                                   );
                      if (DAT_14cad00c8 == 0) goto LAB_143695333;
                    }
                    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar19 + 0x38)) &&
                       (param_1 = local_90,
                       *(longlong *)
                        (*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8
                        ) == DAT_14cad00c8 + 0x30)) break;
                  }
LAB_143695333:
                  cVar7 = switchD_143c3d4dc::caseD_45(local_70);
                  param_1 = local_90;
                  if (cVar7 == '\0') break;
                  goto LAB_1436954bf;
                }
              }
              else if (bVar14 == 8) goto LAB_143695243;
LAB_1436954dc:
              pdVar22 = (double *)((longlong)*(int *)((longlong)plVar24 + 0xc) + param_2[1]);
              pdVar16 = (double *)((longlong)(int)plVar24[2] + *param_2);
              if (pdVar16 != pdVar22) {
                plVar24 = (longlong *)*plVar24;
                if ((*(byte *)((longlong)plVar24 + 0x3b) & 0x40) == 0) {
                  (**(code **)(*plVar24 + 0x100))(plVar24,pdVar16,pdVar22,1);
                  param_3 = (wchar_t *)pdVar22;
                }
                else {
                  param_3 = (wchar_t *)(longlong)*(int *)((longlong)plVar24 + 0x34);
                  memcpy(pdVar16,pdVar22,(size_t)param_3);
                }
              }
              if ((*param_1 != 0) && (*(int *)(lVar1 + 0x28) != -1)) {
                FUN_1417c47ea(*param_1,lVar1);
              }
            }
          }
        }
      }
LAB_143695534:
      uVar18 = uVar21 + 1;
    } while ((int)(uVar18 & 0xffff) < *(int *)((longlong)param_2 + 0x14));
  }
  else {
    plVar12 = (longlong *)0x0;
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar12 & 0xffffff01;
}



// FUNCTION 14369597b FUN_14369597b body=1609 status=ok
// SIG undefined FUN_14369597b(void)

byte FUN_14369597b(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  byte bVar7;
  ushort uVar8;
  void *_Src;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  void *_Dst;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ushort uVar16;
  double *pdVar17;
  int iVar18;
  byte bVar19;
  double *pdVar20;
  longlong *plVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_b8 [32];
  double *local_98;
  uint local_8c;
  uint *local_88;
  uint local_7c;
  longlong local_78;
  longlong *local_70;
  double *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar13 = (uint)*(ushort *)(param_2 + 2);
  if (*(ushort *)(param_2 + 2) < *(ushort *)((longlong)param_2 + 0x12)) {
    local_8c = param_1[1];
    bVar19 = 0;
    local_88 = param_1;
    local_70 = param_2;
    do {
      uVar9 = (ulonglong)((uVar13 & 0xffff) << 5);
      uVar11 = (ulonglong)((uint)*(ushort *)(**(longlong **)(param_1 + 6) + 0x16 + uVar9) * 0x30);
      lVar1 = **(longlong **)(param_1 + 4) + uVar11;
      uVar4 = *(uint *)(**(longlong **)(param_1 + 4) + 0x2c + uVar11);
      if ((uVar4 & 8) != 0) {
        uVar12 = *(ushort *)(lVar1 + 0x1e) - 1;
        goto LAB_143695e2b;
      }
      plVar21 = (longlong *)(**(longlong **)(param_1 + 6) + uVar9);
      bVar7 = *(byte *)((longlong)plVar21 + 0x1c);
      if (bVar7 == 0) {
        uVar12 = (int)plVar21[1] - 1;
        lVar1 = param_2[1];
        lVar14 = (longlong)*(int *)((longlong)plVar21 + 0xc);
        plVar2 = (longlong *)(*param_2 + (longlong)(int)plVar21[2]);
        iVar18 = *(int *)(lVar1 + 8 + lVar14);
        if (iVar18 != *(int *)(*param_2 + 8 + (longlong)(int)plVar21[2])) {
          bVar19 = 1;
          if (((local_8c & 1) == 0) || ((*param_1 & uVar4) == 0)) goto LAB_143695e2b;
          lVar15 = *plVar21;
          uVar3 = *(undefined1 *)(lVar15 + 0x70);
          local_54 = (**(code **)(**(longlong **)(lVar15 + 0x78) + 0x178))();
          local_68 = *(double **)(lVar15 + 0x78);
          local_58 = *(float *)((longlong)local_68 + 0x34);
          local_60 = plVar2;
          local_50 = uVar3;
          FUN_144a8a902(&local_68,*(undefined4 *)(lVar1 + 8 + lVar14));
          iVar18 = *(int *)(lVar1 + 8 + lVar14);
          bVar19 = 1;
          param_1 = local_88;
        }
        lVar15 = *plVar2;
        lVar6 = *(longlong *)(lVar1 + lVar14);
        local_58 = (float)CONCAT22((short)uVar12,(short)uVar13 + 1);
        param_2 = local_70;
        local_7c = uVar12;
        if (0 < iVar18) {
          iVar18 = 0;
          do {
            uVar9 = (ulonglong)((uint)*(ushort *)((longlong)plVar21 + 10) * iVar18);
            local_60 = (longlong *)(lVar6 + uVar9);
            local_68 = (double *)(uVar9 + lVar15);
            bVar7 = FUN_14369597b(param_1,&local_68);
            bVar19 = bVar19 | bVar7;
            iVar18 = iVar18 + 1;
            param_2 = local_70;
            param_1 = local_88;
            uVar12 = local_7c;
          } while (iVar18 < *(int *)(lVar1 + 8 + lVar14));
        }
        goto LAB_143695e2b;
      }
      lVar14 = *(longlong *)(param_1 + 2);
      bVar23 = *(int *)(lVar1 + 0x28) != -1;
      uVar12 = uVar13;
      if ((bVar23 && lVar14 != 0) && (*(int *)(lVar1 + 0x24) == 1)) {
LAB_143695a2a:
        bVar19 = 1;
        if ((local_8c & 1) == 0) goto LAB_143695e2b;
        goto LAB_143695a38;
      }
      if (0x17 < bVar7 - 2) {
        if (*plVar21 == 0) {
          FUN_140056680(&local_68,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*plVar21 + 0x20,&local_68);
        }
        local_98 = (double *)&DAT_149dfb77a;
        if ((int)local_60 != 0) {
          local_98 = local_68;
        }
        FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                      L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                      *(undefined1 *)((longlong)plVar21 + 0x1c));
        param_1 = local_88;
        if (local_68 != (double *)0x0) {
          FUN_1400020a8();
          param_1 = local_88;
        }
        goto LAB_143695a2a;
      }
      pdVar20 = (double *)((longlong)(int)plVar21[2] + *param_2);
      pdVar17 = (double *)((longlong)*(int *)((longlong)plVar21 + 0xc) + param_2[1]);
      switch((uint)bVar7) {
      case 2:
      case 3:
      case 0x16:
      case 0x18:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = (**(code **)(*(longlong *)*plVar21 + 200))((longlong *)*plVar21,pdVar17,pdVar20,0);
        goto LAB_143695c4e;
      case 4:
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(*(float *)pdVar17) || NAN(*(float *)pdVar20);
        bVar24 = *(float *)pdVar17 == *(float *)pdVar20;
        goto LAB_143695ce9;
      case 5:
      case 9:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(float *)pdVar17 == *(float *)pdVar20;
        break;
      case 6:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(char *)pdVar17 == *(char *)pdVar20;
        break;
      case 7:
      case 0x14:
      case 0x17:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *pdVar17 == *pdVar20;
        break;
      case 8:
        local_7c = CONCAT31(local_7c._1_3_,(local_8c & 1) == 0);
        plVar2 = (longlong *)*plVar21;
        local_78 = (**(code **)(*plVar2 + 0x210))(plVar2,pdVar17);
        lVar15 = (**(code **)(*plVar2 + 0x210))(plVar2,pdVar20);
        bVar7 = local_78 != lVar15;
        param_1 = local_88;
        if ((bool)bVar7 && (char)local_7c == '\0') goto LAB_143695a38;
        goto LAB_143695e25;
      default:
        if (((*pdVar17 != *pdVar20) || (NAN(*pdVar17) || NAN(*pdVar20))) ||
           ((pdVar17[1] != pdVar20[1] || (NAN(pdVar17[1]) || NAN(pdVar20[1]))))) goto LAB_143695a2a;
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(pdVar17[2]) || NAN(pdVar20[2]);
        bVar24 = pdVar17[2] == pdVar20[2];
        goto LAB_143695ce9;
      case 0xc:
        if (((((*pdVar17 != *pdVar20) || (NAN(*pdVar17) || NAN(*pdVar20))) ||
             (pdVar17[1] != pdVar20[1])) ||
            ((NAN(pdVar17[1]) || NAN(pdVar20[1]) || (pdVar17[2] != pdVar20[2])))) ||
           (NAN(pdVar17[2]) || NAN(pdVar20[2]))) goto LAB_143695a2a;
        bVar25 = (local_8c & 1) == 0;
        bVar22 = NAN(pdVar17[3]) || NAN(pdVar20[3]);
        bVar24 = pdVar17[3] == pdVar20[3];
LAB_143695ce9:
        if ((bool)(!bVar22 & bVar24) || bVar25) {
          bVar7 = !bVar24 | bVar22;
          goto LAB_143695e25;
        }
        goto LAB_143695a38;
      case 0xe:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = FUN_140ba41f1(pdVar17,pdVar20);
        goto LAB_143695c4e;
      case 0xf:
        bVar24 = (local_8c & 1) == 0;
        bVar7 = FUN_1436982e0(pdVar17,pdVar20);
LAB_143695c4e:
        param_1 = local_88;
        if (bVar24 || bVar7 != 0) {
LAB_143695c5c:
          bVar7 = bVar7 ^ 1;
          param_1 = local_88;
          goto LAB_143695e25;
        }
        goto LAB_143695a38;
      case 0x13:
        fVar5 = *(float *)(pdVar17 + 1);
        if (fVar5 == *(float *)(pdVar20 + 1)) {
          if (1 < (int)fVar5) {
            lVar15 = 0;
            while( true ) {
              uVar8 = *(ushort *)((longlong)*pdVar17 + lVar15);
              uVar9 = (ulonglong)uVar8;
              uVar16 = *(ushort *)((longlong)*pdVar20 + lVar15);
              if (uVar8 != uVar16) {
                if ((uVar16 | uVar8) < 0x80) {
                  uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                  uVar11 = (ulonglong)uVar16;
                  uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                  if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_143695d70;
                }
                bVar24 = (local_8c & 1) == 0;
                bVar25 = uVar8 == uVar16;
                goto LAB_143695e17;
              }
              if (uVar8 == 0) break;
LAB_143695d70:
              lVar15 = lVar15 + 2;
            }
          }
          goto LAB_143695e2b;
        }
        bVar7 = (int)*(float *)(pdVar20 + 1) + (int)fVar5 != 1;
        if (!(bool)bVar7 || (local_8c & 1) == 0) goto LAB_143695e25;
        goto LAB_143695a38;
      case 0x15:
        bVar24 = (local_8c & 1) == 0;
        bVar25 = *(char *)pdVar17 == *(char *)pdVar20;
        break;
      case 0x19:
        plVar2 = *(longlong **)(param_1 + 8);
        if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
          uVar13 = ((uint)((ulonglong)plVar21 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar21 >> 4)) *
                   -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          plVar10 = plVar2 + 7;
          if ((longlong *)plVar2[8] != (longlong *)0x0) {
            plVar10 = (longlong *)plVar2[8];
          }
          iVar18 = *(int *)((longlong)plVar10 +
                           (ulonglong)((int)plVar2[9] - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
          if (iVar18 != -1) {
            do {
              lVar15 = *plVar2 + (longlong)iVar18 * 0x20;
              if (*(longlong **)(*plVar2 + (longlong)iVar18 * 0x20) == plVar21) goto LAB_143695ecc;
              iVar18 = *(int *)(lVar15 + 0x18);
            } while (iVar18 != -1);
          }
        }
        lVar15 = 0;
LAB_143695ecc:
        uVar13 = local_8c & 1;
        local_98 = pdVar20;
        bVar7 = FUN_143697dfb(lVar15 + 8);
        param_1 = local_88;
        if (uVar13 != 0 && bVar7 == 0) goto LAB_143695a38;
        goto LAB_143695c5c;
      }
LAB_143695e17:
      bVar7 = !bVar25;
      if ((bool)(bVar25 | bVar24)) {
LAB_143695e25:
        bVar19 = bVar19 | bVar7;
      }
      else {
LAB_143695a38:
        bVar19 = 1;
        if ((*param_1 & *(uint *)(lVar1 + 0x2c)) != 0) {
          _Src = (void *)((longlong)*(int *)((longlong)plVar21 + 0xc) + param_2[1]);
          _Dst = (void *)((longlong)(int)plVar21[2] + *param_2);
          if (_Dst != _Src) {
            plVar21 = (longlong *)*plVar21;
            if ((*(byte *)((longlong)plVar21 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar21 + 0x100))(plVar21,_Dst,_Src,1);
              param_1 = local_88;
            }
            else {
              memcpy(_Dst,_Src,(longlong)*(int *)((longlong)plVar21 + 0x34));
              param_1 = local_88;
            }
          }
          if (bVar23 && lVar14 != 0) {
            FUN_1417c47ea(*(undefined8 *)(param_1 + 2),lVar1);
            param_1 = local_88;
          }
        }
      }
LAB_143695e2b:
      uVar13 = uVar12 + 1;
    } while ((ushort)uVar13 < *(ushort *)((longlong)param_2 + 0x12));
  }
  else {
    bVar19 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar19 & 1;
}



// FUNCTION 143695fc5 FUN_143695fc5 body=69 status=ok
// SIG undefined FUN_143695fc5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143695fc5(void)

{
  _DAT_14cb01ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143696007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb01ca8,1);
  return;
}



// FUNCTION 14369600a FUN_14369600a body=2044 status=ok
// SIG undefined FUN_14369600a(void)

void FUN_14369600a(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  code *pcVar16;
  undefined2 *puVar17;
  longlong lVar18;
  longlong lVar19;
  char *pcVar20;
  bool bVar21;
  undefined1 auStack_168 [32];
  code **local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  code *local_d8;
  undefined8 uStack_d0;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong local_b0 [2];
  longlong local_a0;
  longlong local_88 [2];
  longlong local_78;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar6 = FUN_14054d46e(&DAT_14c846b20,L"NOREPLAYS");
  if (((cVar6 != '\0') || (lVar10 = (**(code **)(*param_1 + 0x180))(param_1), lVar10 == 0)) ||
     ((*(longlong *)(lVar10 + 0x108) != 0 && (cVar6 = FUN_147a5faf8(), cVar6 != '\0'))))
  goto LAB_1436964b0;
  FUN_140810d00(local_b0,0);
  local_c0 = (void *)0x0;
  local_b8 = *(int *)(param_2 + 1);
  lVar18 = (longlong)local_b8;
  _Src = (void *)*param_2;
  if (lVar18 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,_Src,lVar18 * 2);
  }
  FUN_1410908dc(lVar10,&local_d8,0);
  pcVar16 = local_d8;
  if ((int)uStack_d0 == 0) {
    pcVar16 = (code *)&DAT_149dfb77a;
  }
  FUN_1448097c4(&local_c0,&DAT_14a583bae,pcVar16,1);
  if (local_d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  iVar7 = local_b8 + -1;
  if (local_b8 == 0) {
    iVar7 = 0;
  }
  FUN_1402980a2(local_88,local_c0,iVar7);
  puVar17 = &DAT_149dfb77a;
  if (*(int *)(param_3 + 1) != 0) {
    puVar17 = (undefined2 *)*param_3;
  }
  FUN_140002266(&local_d8,L"DemoFriendlyName=%s",puVar17);
  pcVar16 = (code *)&DAT_149dfb77a;
  if ((int)uStack_d0 != 0) {
    pcVar16 = local_d8;
  }
  FUN_141556918(local_b0,pcVar16);
  if (local_d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar18 = param_4[1];
  if ((longlong)(int)lVar18 != 0) {
    lVar3 = *param_4;
    lVar19 = 0;
    do {
      puVar17 = &DAT_149dfb77a;
      if (*(int *)(lVar3 + 8 + lVar19) != 0) {
        puVar17 = *(undefined2 **)(lVar3 + lVar19);
      }
      FUN_141556918(local_b0,puVar17);
      lVar19 = lVar19 + 0x10;
    } while ((longlong)(int)lVar18 * 0x10 != lVar19);
  }
  lVar18 = FUN_14045d4ce(local_b0,L"flush",0);
  plVar14 = *(longlong **)(lVar10 + 0x38);
  if (((plVar14 == (longlong *)0x0) ||
      (cVar6 = (**(code **)(*plVar14 + 0x3c0))(plVar14), lVar3 = DAT_14cb01cb0, cVar6 == '\0')) ||
     (plVar14[0x106] == 0)) {
LAB_1436962ae:
    plVar14 = *(longlong **)(lVar10 + 0x108);
    if (((plVar14 == (longlong *)0x0) || (*(char *)((longlong)plVar14 + 0xcc3) != '\x01')) ||
       (*(char *)((longlong)plVar14 + 0xcc2) == '\0')) {
      FUN_145ed9f54(param_1,lVar10,lVar18 != 0);
      uVar5 = DAT_14cb0d2b0;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      uVar4 = DAT_14c892fb8;
      uVar12 = FUN_1405e677a(uVar5,lVar10);
      cVar6 = FUN_14152bc5d(uVar5,uVar12,uVar4,uVar4);
      uVar5 = DAT_14cb0d2b0;
      if (cVar6 == '\0') goto LAB_143696422;
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      plVar14 = (longlong *)FUN_1456d2c7c(uVar5,lVar10,DAT_14c892fb8);
      if (plVar14 == (longlong *)0x0) {
LAB_14369666e:
        plVar14 = (longlong *)0x0;
      }
      else {
        if (DAT_14cad5cd8 == 0) {
          local_d8 = FUN_1414bb1f4;
          local_100 = FUN_14081d0ea;
          local_108 = &LAB_1463c345a;
          local_118 = &LAB_147a5f179;
          local_120 = &LAB_145c3bbe3;
          local_128 = L"Engine";
          local_130 = 0;
          local_138 = 0x1000000c;
          local_140 = 0x10;
          local_148 = (code **)CONCAT44(local_148._4_4_,0x15b0);
          local_110 = &local_d8;
          FUN_14081cfa3(L"/Script/Engine",L"DemoNetDriver",&DAT_14cad5cd8,&DAT_147a5f178);
        }
        if ((*(int *)(plVar14[2] + 0x38) < *(int *)(DAT_14cad5cd8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(DAT_14cad5cd8 + 0x38) * 8) !=
            DAT_14cad5cd8 + 0x30)) goto LAB_14369666e;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar14);
        }
      }
      *(longlong **)(lVar10 + 0x108) = plVar14;
      bVar21 = true;
    }
    else {
      bVar21 = false;
    }
    local_f8 = *param_5;
    local_f0 = param_5[1];
    if (local_f0 != 0) {
      LOCK();
      *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar14 + 0x2a0))(plVar14,&local_f8);
    (**(code **)(*plVar14 + 0x3d8))(plVar14,lVar10);
    if ((longlong)*(int *)(lVar10 + 0x1a8) != 0) {
      pcVar20 = *(char **)(lVar10 + 0x1a0);
      lVar18 = (longlong)*(int *)(lVar10 + 0x1a8) * 0x78;
      do {
        if (*pcVar20 == '\0') {
          if (pcVar20 != (char *)0x0) {
            if ((plVar14 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(plVar14);
            }
            *(longlong **)(pcVar20 + 0x18) = plVar14;
          }
          break;
        }
        pcVar20 = pcVar20 + 0x78;
        lVar18 = lVar18 + -0x78;
      } while (lVar18 != 0);
    }
    local_d8 = (code *)0x0;
    uStack_d0 = 0;
    if (bVar21) {
      local_148 = &local_d8;
      cVar6 = (**(code **)(*plVar14 + 0x2c0))(plVar14,lVar10 + 0x28,local_b0,0);
    }
    else {
      cVar6 = FUN_147a60d7a(plVar14,local_b0);
    }
    if (cVar6 == '\0') {
      *(undefined8 *)(lVar10 + 0x108) = 0;
    }
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar7 == 0x40000002) {
      uVar11 = 0;
    }
    else {
      bVar21 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          bVar21 = DVar8 == DVar9;
        }
        else {
          bVar21 = false;
        }
      }
      uVar11 = (ulonglong)(bVar21 ^ 1);
    }
    if (*(char *)(lVar3 + uVar11) != '\x01') goto LAB_1436962ae;
    FUN_145ed9f54(param_1,lVar10,lVar18 != 0);
    plVar13 = (longlong *)FUN_147ce2ab3(DAT_14c951640);
    if (plVar13 == (longlong *)0x0) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      iVar7 = 0;
    }
    else {
      uVar2 = *(uint *)((longlong)plVar13 + 0xc);
      *(uint *)((longlong)param_1 + 0x34) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar7 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar7 = *(int *)(lVar10 + 0x10);
        bVar21 = iVar7 == 0;
        if (bVar21) {
          *(int *)(lVar10 + 0x10) = iVar15;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar7 = iVar15;
        }
      }
    }
    *(int *)(param_1 + 7) = iVar7;
    local_140 = 0;
    local_148 = (code **)CONCAT44(local_148._4_4_,1000000);
    (**(code **)(*plVar13 + 0x350))(plVar13,plVar14,3,local_b0);
    local_e8 = *param_5;
    local_e0 = param_5[1];
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    FUN_147ce06c6(plVar13,&local_e8);
    FUN_14359e342(plVar14,plVar13);
    FUN_147ce0180(plVar13);
  }
LAB_143696422:
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
LAB_1436964b0:
  plVar14 = (longlong *)param_5[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar14 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
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
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143696808 FUN_143696808 body=1306 status=ok
// SIG undefined FUN_143696808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_143696808(longlong *param_1,void **param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  undefined1 *local_d8;
  code *local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  longlong local_b0 [2];
  longlong local_a0;
  void *local_88;
  int local_80;
  int local_7c;
  longlong local_78;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((param_3 == 0) && (param_3 = (**(code **)(*param_1 + 0x180))(param_1), param_3 == 0)) {
    uVar6 = 0;
    goto LAB_143696851;
  }
  FUN_140810d00(local_b0,0);
  if (&local_88 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = *param_2;
    local_80 = iVar1;
    if (iVar1 == 0 && local_7c == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,iVar1);
      if (iVar1 != 0) {
        memcpy(local_88,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  lVar7 = param_4[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar2 = *param_4;
    lVar14 = 0;
    do {
      puVar11 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar14) != 0) {
        puVar11 = *(undefined2 **)(lVar2 + lVar14);
      }
      FUN_141556918(local_b0,puVar11);
      lVar14 = lVar14 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar14);
  }
  lVar7 = FUN_14045d4ce(local_b0,L"flush",0);
  FUN_145ed9f54(param_1,param_3,lVar7 != 0);
  uVar4 = DAT_14cb0d2b0;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar6 = DAT_14c892fb8;
  uVar8 = FUN_1405e677a(uVar4,param_3);
  cVar5 = FUN_14152bc5d(uVar4,uVar8,uVar6,uVar6);
  uVar4 = DAT_14cb0d2b0;
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
  else {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    plVar9 = (longlong *)FUN_1456d2c7c(uVar4,param_3,DAT_14c892fb8);
    if (plVar9 == (longlong *)0x0) {
LAB_143696a9d:
      plVar9 = (longlong *)0x0;
    }
    else {
      if (DAT_14cad5cd8 == 0) {
        local_e0 = &local_c8;
        local_c8 = FUN_1414bb1f4;
        local_d0 = FUN_14081d0ea;
        local_d8 = &LAB_1463c345a;
        local_e8 = &LAB_147a5f179;
        local_f0 = &LAB_145c3bbe3;
        local_f8 = L"Engine";
        local_100 = 0;
        local_108 = 0x1000000c;
        local_110 = 0x10;
        local_118 = 0x15b0;
        FUN_14081cfa3(L"/Script/Engine",L"DemoNetDriver",&DAT_14cad5cd8,&DAT_147a5f178);
      }
      if ((*(int *)(plVar9[2] + 0x38) < *(int *)(DAT_14cad5cd8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(DAT_14cad5cd8 + 0x38) * 8) !=
          DAT_14cad5cd8 + 0x30)) goto LAB_143696a9d;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(plVar9);
      }
    }
    *(longlong **)(param_3 + 0x108) = plVar9;
    (**(code **)(*plVar9 + 0x3d8))(plVar9,param_3);
    local_c8 = (code *)0x0;
    uStack_c0 = 0;
    uVar6 = (**(code **)(*plVar9 + 0x2b8))(plVar9,param_3 + 0x28,local_b0);
    if ((char)uVar6 == '\0') {
      FUN_145eda014(param_3);
    }
    else {
      uVar10 = (ulonglong)DAT_14c9642b0;
      if (0 < (longlong)uVar10) {
        bVar12 = false;
        DAT_14c9642bc = DAT_14c9642bc + 1;
        do {
          lVar7 = uVar10 * 0x10 + -8;
          uVar15 = uVar10;
          while (((*(int *)(DAT_14c9642a8 + lVar7) != 0 &&
                  (plVar9 = *(longlong **)(DAT_14c9642a8 + -8 + lVar7), plVar9 != (longlong *)0x0))
                 && (cVar5 = (**(code **)(*plVar9 + 0x60))(), cVar5 != '\0'))) {
            lVar7 = lVar7 + -0x10;
            bVar3 = uVar15 < 2;
            uVar15 = uVar15 - 1;
            if (bVar3) {
              DAT_14c9642bc = DAT_14c9642bc + -1;
              if (bVar12) goto LAB_143696b65;
              goto LAB_143696be5;
            }
          }
          uVar10 = uVar15 - 1;
          bVar12 = true;
        } while (1 < uVar15);
        DAT_14c9642bc = DAT_14c9642bc + -1;
LAB_143696b65:
        iVar1 = DAT_14c9642b0;
        if (DAT_14c9642bc < 1) {
          if (0 < DAT_14c9642b0) {
            iVar13 = 0;
            do {
              if (((*(int *)(DAT_14c9642a8 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                  (plVar9 = *(longlong **)(DAT_14c9642a8 + (longlong)iVar13 * 0x10),
                  plVar9 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar9 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(&DAT_14c9642a8,iVar13);
                FUN_14005b248(&DAT_14c9642a8);
              }
              else {
                iVar13 = iVar13 + 1;
              }
            } while (iVar13 < DAT_14c9642b0);
          }
          _DAT_14c9642b8 = 2;
          if (2 < DAT_14c9642b0 * 2) {
            _DAT_14c9642b8 = DAT_14c9642b0 * 2;
          }
          if ((_DAT_14c9642b8 < iVar1) && (DAT_14c9642b4 != DAT_14c9642b0)) {
            FUN_14045812c(&DAT_14c9642a8);
          }
        }
      }
    }
LAB_143696be5:
    if (local_c8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_b0[0] != 0) {
    FUN_1400020a8();
  }
LAB_143696851:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 143696d24 FUN_143696d24 body=122 status=ok
// SIG undefined FUN_143696d24(void)

void FUN_143696d24(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x108) == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_147a5faf8();
    }
    FUN_145ed9f54(param_1,lVar2,0);
    lVar2 = FUN_1400b465c(param_1);
    if ((cVar1 == '\x01' && lVar2 != 0) && ((char)param_1[6] == '\x01')) {
      FUN_147d8162e(DAT_14cb0d2b0,*(undefined8 *)(lVar2 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 143696d9e FUN_143696d9e body=169 status=ok
// SIG undefined FUN_143696d9e(void)

void FUN_143696d9e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x108) != 0)) {
    FUN_147a61c6c(*(longlong *)(lVar2 + 0x108),param_2,param_3,param_4);
  }
  if (((((int)param_1[7] != 0) && (uVar1 = *(uint *)((longlong)param_1 + 0x34), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == (int)param_1[7])) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))))) {
    FUN_14368a920(lVar2 + 0x1df0,lVar2,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 143697378 FUN_143697378 body=876 status=ok
// SIG undefined FUN_143697378(void)

ulonglong FUN_143697378(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  ulonglong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0xe0);
  bVar6 = ((*(ushort *)(lVar2 + 0x90) ^ *(ushort *)(lVar1 + 0x90)) & 0x1f0) == 0;
  local_78 = CONCAT71(local_78._1_7_,bVar6);
  FUN_146f5435e(uVar3,bVar6,1);
  if ((char)local_78 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  uVar5 = *(ushort *)(lVar1 + 0x90) & 3;
  local_84 = *(int *)(lVar1 + 0x88);
  local_7c = *(int *)(lVar1 + 0x8c);
  local_88 = *(int *)(lVar2 + 0x88);
  local_80 = *(int *)(lVar2 + 0x8c);
  FUN_146f5435e(uVar3,uVar5 + (ushort)(local_84 != local_88) * 4 +
                      (ushort)(local_7c != local_80) * 8,4);
  if (1 < uVar5) {
    uVar4 = (ulonglong)(*(ushort *)(lVar1 + 0x90) >> 1 & 0x18);
    local_78 = *(ulonglong *)((longlong)&PTR_DAT_14aa6d870 + uVar4);
    uStack_70 = *(undefined4 *)(param_2 + 8);
    uStack_6c = *(undefined4 *)(param_2 + 0xc);
    local_68 = *(undefined8 *)(param_2 + 0x10);
    local_60 = lVar1;
    local_58 = lVar2;
    if ((*(byte *)(lVar2 + 0x90) & 2) == 0) {
      (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar4) + 8))(param_1,&local_78);
    }
    else {
      (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar4) + 0x18))(param_1,&local_78);
    }
  }
  uVar4 = (ulonglong)(*(ushort *)(lVar1 + 0x90) >> 1 & 0x18);
  local_78 = *(ulonglong *)((longlong)&PTR_DAT_14aa6d870 + uVar4);
  uStack_70 = *(undefined4 *)(param_2 + 8);
  uStack_6c = *(undefined4 *)(param_2 + 0xc);
  local_68 = *(undefined8 *)(param_2 + 0x10);
  local_60 = lVar1 + 0x20;
  local_58 = lVar2 + 0x20;
  (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar4) + 0x18))(param_1,&local_78);
  uVar4 = (ulonglong)(*(ushort *)(lVar1 + 0x90) >> 3 & 0x18);
  local_78 = *(ulonglong *)((longlong)&PTR_DAT_14aa6d870 + uVar4);
  uStack_70 = *(undefined4 *)(param_2 + 8);
  uStack_6c = *(undefined4 *)(param_2 + 0xc);
  local_68 = *(undefined8 *)(param_2 + 0x10);
  local_60 = lVar1 + 0x40;
  local_58 = lVar2 + 0x40;
  (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar4) + 0x18))(param_1,&local_78);
  uVar4 = (ulonglong)((*(byte *)(lVar1 + 0x91) & 1) << 3);
  local_78 = *(ulonglong *)((longlong)&PTR_DAT_14aa6d890 + uVar4);
  uStack_70 = *(undefined4 *)(param_2 + 8);
  uStack_6c = *(undefined4 *)(param_2 + 0xc);
  local_68 = *(undefined8 *)(param_2 + 0x10);
  local_60 = lVar1 + 0x60;
  local_58 = lVar2 + 0x60;
  (**(code **)(*(longlong *)((longlong)&DAT_14cb01e10 + uVar4) + 0x18))(param_1,&local_78);
  if (local_84 != local_88) {
    local_90 = 0x20;
    local_98 = 3;
    FUN_142aa281e(uVar3,*(undefined4 *)(lVar1 + 0x88),*(undefined4 *)(lVar2 + 0x88),&DAT_14aa6d8a0);
  }
  if (local_7c != local_80) {
    local_90 = 0x20;
    local_98 = 3;
    FUN_142aa281e(uVar3,*(undefined4 *)(lVar1 + 0x8c),*(undefined4 *)(lVar2 + 0x8c),&DAT_14aa6d8a0);
  }
  local_78 = CONCAT71(local_78._1_7_,(byte)((ushort)*(undefined2 *)(lVar1 + 0x90) >> 9)) &
             0xffffffffffffff01;
  FUN_146f5435e(uVar3,(char)local_78 != '\0',1);
  uVar4 = local_78 & 0xff;
  if ((*(ushort *)(lVar1 + 0x90) >> 9 & 1) != 0) {
    uVar4 = (ulonglong)(*(ushort *)(lVar1 + 0x90) >> 1 & 0x18);
    local_78 = *(ulonglong *)((longlong)&PTR_DAT_14aa6d870 + uVar4);
    uStack_70 = *(undefined4 *)(param_2 + 8);
    uStack_6c = *(undefined4 *)(param_2 + 0xc);
    local_68 = *(undefined8 *)(param_2 + 0x10);
    local_60 = lVar1 + 0x68;
    local_58 = lVar2 + 0x68;
    if ((*(byte *)(lVar2 + 0x91) & 2) == 0) {
      uVar4 = (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar4) + 8))(param_1,&local_78);
    }
    else {
      uVar4 = (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar4) + 0x18))(param_1,&local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143697700 FUN_143697700 body=895 status=ok
// SIG undefined FUN_143697700(void)

void FUN_143697700(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [8];
  undefined1 local_78 [32];
  int local_58;
  int local_54;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar8 = FUN_146f546d2(uVar2);
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_138);
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  memset(local_e0,0,0x98);
  uVar1 = *(ushort *)(lVar3 + 0x90);
  uVar9 = uVar1 & 0x1f0;
  local_50 = (ushort)uVar9;
  uVar7 = FUN_146f546d2(uVar2,4);
  if ((uVar7 & 2) != 0) {
    uVar8 = (ulonglong)(uVar1 >> 1 & 0x18);
    local_108 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d870 + uVar8);
    uStack_100 = *(undefined4 *)(param_2 + 8);
    uStack_fc = *(undefined4 *)(param_2 + 0xc);
    local_f8 = *(undefined8 *)(param_2 + 0x10);
    local_f0 = local_e0;
    local_e8 = lVar3;
    if ((*(byte *)(lVar3 + 0x90) & 2) == 0) {
      (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar8) + 0x10))(param_1,&local_108);
    }
    else {
      (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar8) + 0x20))(param_1,&local_108);
    }
    uVar9 = (uint)local_50;
  }
  uVar8 = (ulonglong)((uVar9 >> 4 & 3) << 3);
  local_108 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d870 + uVar8);
  uStack_100 = *(undefined4 *)(param_2 + 8);
  uStack_fc = *(undefined4 *)(param_2 + 0xc);
  local_f8 = *(undefined8 *)(param_2 + 0x10);
  local_f0 = local_c0;
  local_e8 = lVar3 + 0x20;
  (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar8) + 0x20))(param_1,&local_108);
  uVar8 = (ulonglong)(local_50 >> 3 & 0x18);
  local_108 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d870 + uVar8);
  uStack_100 = *(undefined4 *)(param_2 + 8);
  uStack_fc = *(undefined4 *)(param_2 + 0xc);
  local_f8 = *(undefined8 *)(param_2 + 0x10);
  local_f0 = local_a0;
  local_e8 = lVar3 + 0x40;
  (**(code **)(*(longlong *)(&DAT_14cb01df0 + uVar8) + 0x20))(param_1,&local_108);
  uVar8 = (ulonglong)((local_50._1_1_ & 1) << 3);
  local_108 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d890 + uVar8);
  uStack_100 = *(undefined4 *)(param_2 + 8);
  uStack_fc = *(undefined4 *)(param_2 + 0xc);
  local_f8 = *(undefined8 *)(param_2 + 0x10);
  local_f0 = local_80;
  local_e8 = lVar3 + 0x60;
  (**(code **)(*(longlong *)((longlong)&DAT_14cb01e10 + uVar8) + 0x20))(param_1,&local_108);
  iVar6 = *(int *)(lVar3 + 0x88);
  if ((uVar7 & 4) != 0) {
    local_110 = 0x20;
    local_118 = 3;
    FUN_146f55b0f(uVar2,&local_58,*(int *)(lVar3 + 0x88),&DAT_14aa6d8a0);
    iVar6 = local_58;
  }
  local_58 = iVar6;
  iVar6 = *(int *)(lVar3 + 0x8c);
  if ((uVar7 & 8) != 0) {
    local_110 = 0x20;
    local_118 = 3;
    FUN_146f55b0f(uVar2,&local_54,*(int *)(lVar3 + 0x8c),&DAT_14aa6d8a0);
    iVar6 = local_54;
  }
  local_54 = iVar6;
  uVar5 = local_50;
  local_f0 = local_78;
  uVar1 = (uVar7 & 3) + (ushort)(local_54 != -1) * 8 + (ushort)(0 < local_58) * 4;
  uVar8 = (ulonglong)(local_50 >> 1 & 0x18);
  lVar4 = *(longlong *)(&DAT_14cb01df0 + uVar8);
  local_108 = *(undefined8 *)((longlong)&PTR_DAT_14aa6d870 + uVar8);
  uStack_100 = *(undefined4 *)(param_2 + 8);
  uStack_fc = *(undefined4 *)(param_2 + 0xc);
  local_f8 = *(undefined8 *)(param_2 + 0x10);
  local_e8 = lVar3 + 0x68;
  local_50 = local_50 & 0xfff0 | uVar1;
  uVar7 = FUN_146f546d2(uVar2,1);
  local_50 = uVar5 & 0xfdf0 | uVar1 | (uVar7 & 1) << 9;
  if ((uVar7 & 1) != 0) {
    if ((*(byte *)(lVar3 + 0x91) & 2) == 0) {
      (**(code **)(lVar4 + 0x10))(param_1,&local_108);
    }
    else {
      (**(code **)(lVar4 + 0x20))(param_1,&local_108);
    }
  }
  memcpy(*(void **)(param_2 + 0x18),local_e0,0x98);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143697aea FUN_143697aea body=229 status=ok
// SIG undefined FUN_143697aea(void)

void FUN_143697aea(undefined8 *param_1,uint param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  for (; (int)param_2 < param_3; param_2 = param_2 + 1) {
    lVar1 = *(longlong *)param_1[3] + (ulonglong)param_2 * 0x20;
    cVar2 = *(char *)(*(longlong *)param_1[3] + 0x1c + (ulonglong)param_2 * 0x20);
    if (cVar2 == '\x13') {
      (**(code **)(*(longlong *)*param_1 + 0x10))
                ((longlong *)*param_1,
                 (longlong)*(int *)(param_4 + 8 + (longlong)*(int *)(lVar1 + 0x10)) * 2,
                 (longlong)*(int *)(param_4 + 0xc + (longlong)*(int *)(lVar1 + 0x10)) * 2);
    }
    else if (cVar2 == '\0') {
      lVar5 = (longlong)*(int *)(lVar1 + 0x10);
      (**(code **)(*(longlong *)*param_1 + 0x10))
                ((longlong *)*param_1,
                 (longlong)*(int *)(param_4 + 8 + lVar5) * (ulonglong)*(ushort *)(lVar1 + 10),
                 (longlong)*(int *)(param_4 + 0xc + lVar5) * (ulonglong)*(ushort *)(lVar1 + 10));
      if (0 < *(int *)(param_4 + 8 + lVar5)) {
        lVar3 = *(longlong *)(param_4 + lVar5);
        iVar4 = 0;
        do {
          FUN_143697aea(param_1,param_2 + 1,*(ushort *)(lVar1 + 8) - 1,
                        (ulonglong)((uint)*(ushort *)(lVar1 + 10) * iVar4) + lVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(param_4 + 8 + lVar5));
      }
      param_2 = *(ushort *)(lVar1 + 8) - 1;
    }
  }
  return;
}



// FUNCTION 143697bcf FUN_143697bcf body=121 status=ok
// SIG undefined FUN_143697bcf(void)

void FUN_143697bcf(longlong param_1,longlong *param_2,ushort param_3,char *param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  
  uVar2 = *(undefined2 *)
           (**(longlong **)(param_1 + 0x10) + 0x14 +
           (ulonglong)
           *(ushort *)(**(longlong **)(param_1 + 8) + 0x1c + (ulonglong)((uint)param_3 * 0x30)) *
           0x20);
  cVar1 = *(char *)(*param_2 +
                   (longlong)
                   *(int *)(**(longlong **)(param_1 + 8) + 0x14 + (ulonglong)((uint)param_3 * 0x30))
                   );
  if ((*(char *)(param_1 + 1) != '\0') || (*param_4 != cVar1)) {
    *param_4 = cVar1;
    plVar4 = (longlong *)param_2[2];
    iVar3 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
      FUN_14488eebe(plVar4,iVar3);
    }
    *(undefined2 *)(*plVar4 + (longlong)iVar3 * 2) = uVar2;
  }
  return;
}



// FUNCTION 143697c48 FUN_143697c48 body=304 status=ok
// SIG undefined FUN_143697c48(void)

void FUN_143697c48(uint param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((param_2[0x4b] == 0) && (lVar4 = *(longlong *)(param_2 + 0x28), lVar4 != 0)) {
    lVar2 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar2 = lVar4;
    }
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(param_1 >> 3 & 0x1ffc)) >> (param_1 & 0x1f) & 1) == 0;
  }
  else {
    bVar5 = false;
  }
  if (((*(uint *)(**(longlong **)(param_2 + 8) + 0x2c + (longlong)(int)param_1 * 0x30) & 1) != 0) &&
     (!bVar5)) {
    lVar4 = **(longlong **)(param_2 + 8) + (longlong)(int)param_1 * 0x30;
    iVar1 = *(int *)(lVar4 + 0x20);
    if (iVar1 == 0xe) {
      iVar1 = 0xe;
      if (*(longlong *)(param_2 + 0x28) != 0) {
        iVar1 = FUN_146efd72c(*(longlong *)(param_2 + 0x28),param_1);
      }
      bVar5 = iVar1 == 0xf;
    }
    else {
      bVar5 = false;
    }
    if ((!bVar5) && ((iVar1 == 1 & (*param_2 ^ 1)) == 0)) {
      if ((param_2[2] & 1) != 0) {
        if (param_1 == 4) {
          lVar4 = *(longlong *)(param_2 + 0x18) + 1;
          uVar3 = 4;
LAB_143697d5e:
          FUN_143697bcf(param_2,param_3,uVar3,lVar4);
          return;
        }
        if (param_1 == 9) {
          lVar4 = *(longlong *)(param_2 + 0x18) + 2;
          uVar3 = 9;
          goto LAB_143697d5e;
        }
      }
      FUN_143692c41(param_2,param_3,*(ushort *)(lVar4 + 0x1c),*(undefined2 *)(lVar4 + 0x1e),
                    (short)*(undefined4 *)
                            (**(longlong **)(param_2 + 0x10) + 0x14 +
                            (ulonglong)*(ushort *)(lVar4 + 0x1c) * 0x20) + -1);
    }
  }
  return;
}



// FUNCTION 143697d78 FUN_143697d78 body=131 status=ok
// SIG undefined FUN_143697d78(void)

bool FUN_143697d78(uint param_1,char param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if (*(char *)(param_3 + 0x4c) == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x40) + 0x10);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(param_3 + 0x40);
    }
    uVar1 = param_1 + 0x1f;
    if (-1 < (int)param_1) {
      uVar1 = param_1;
    }
    if ((*(uint *)(lVar2 + (longlong)((int)uVar1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x38) + 0x10);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_3 + 0x38);
      }
      bVar3 = (*(uint *)(lVar2 + (ulonglong)(param_1 >> 3 & 0x1ffc)) & 1 << ((byte)param_1 & 0x1f))
              != 0;
      if (param_2 == '\x01' && !bVar3) {
        bVar3 = (*(ushort *)(**(longlong **)(param_3 + 8) + 0x2c + (longlong)(int)param_1 * 0x30) &
                0x110) != 0;
      }
    }
  }
  return bVar3;
}



// FUNCTION 143697dfb FUN_143697dfb body=1251 status=ok
// SIG undefined FUN_143697dfb(void)

undefined8
FUN_143697dfb(longlong *param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  double *pdVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  ushort uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong *puVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  double *pdVar20;
  ulonglong *puVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_b8 [32];
  double *local_98;
  byte local_82;
  byte local_81;
  longlong *local_80;
  longlong *local_78;
  int local_6c;
  longlong local_68;
  longlong *local_60;
  double *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == -1) {
    param_3 = (int)param_1[1];
  }
  uVar8 = 1;
  local_78 = param_1;
  if (0 < param_3) {
    local_60 = param_2 + 7;
    iVar13 = 0;
    local_80 = param_2;
    local_6c = param_3;
    local_68 = param_4;
    do {
      lVar19 = *local_78;
      lVar12 = (longlong)iVar13 * 0x20;
      plVar1 = (longlong *)(lVar19 + lVar12);
      bVar3 = *(byte *)(lVar19 + 0x1c + lVar12);
      lVar19 = (longlong)*(int *)(lVar19 + 0xc + lVar12);
      if (bVar3 == 0) {
        lVar12 = *plVar1;
        local_81 = *(byte *)(lVar12 + 0x70);
        (**(code **)(**(longlong **)(lVar12 + 0x78) + 0x178))();
        iVar13 = *(int *)(*(longlong *)(lVar12 + 0x78) + 0x34);
        iVar10 = *(int *)((longlong)plVar1 + 0xc);
        lVar12 = *plVar1;
        local_82 = *(byte *)(lVar12 + 0x70);
        (**(code **)(**(longlong **)(lVar12 + 0x78) + 0x178))();
        iVar4 = *(int *)(param_4 + 8 + lVar19);
        if (iVar4 == *(int *)(param_5 + 8 + (longlong)iVar10)) {
          if (0 < iVar4) {
            puVar21 = (ulonglong *)(lVar19 + local_68);
            puVar14 = (ulonglong *)(iVar10 + param_5);
            iVar10 = *(int *)(*(longlong *)(lVar12 + 0x78) + 0x34);
            lVar18 = 0;
            lVar12 = 0;
            lVar19 = 0;
            do {
              if ((int)puVar14[1] == 0) {
                local_98 = (double *)0x0;
              }
              else {
                if ((local_82 & 1) == 0) {
                  uVar16 = *puVar14;
                }
                else {
                  uVar16 = *puVar14;
                  if ((uVar16 & 1) != 0) {
                    uVar16 = ((longlong)uVar16 >> 0x18) + (longlong)puVar14;
                  }
                }
                local_98 = (double *)(uVar16 + lVar18);
              }
              if ((local_81 & 1) == 0) {
                uVar16 = *puVar21;
              }
              else {
                uVar16 = *puVar21;
                if ((uVar16 & 1) != 0) {
                  uVar16 = ((longlong)uVar16 >> 0x18) + (longlong)puVar21;
                }
              }
              cVar6 = FUN_143697dfb(local_78,local_80,*(ushort *)(plVar1 + 1) - 1,uVar16 + lVar12);
              if (cVar6 == '\0') goto LAB_1436982b5;
              lVar19 = lVar19 + 1;
              lVar12 = lVar12 + iVar13;
              lVar18 = lVar18 + iVar10;
            } while (lVar19 < (int)puVar21[1]);
          }
          iVar13 = *(ushort *)(plVar1 + 1) - 1;
          param_4 = local_68;
          param_3 = local_6c;
          goto LAB_143698235;
        }
        goto LAB_1436982b5;
      }
      if (0x17 < bVar3 - 2) {
        if (*plVar1 == 0) {
          FUN_140056680(&local_58,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(*plVar1 + 0x20,&local_58);
        }
        local_98 = local_58;
        if (local_50 == 0) {
          local_98 = (double *)&DAT_149dfb77a;
        }
        FUN_140033559(".\\Runtime/Engine/Private/RepLayout.cpp",0x2e5,
                      L"PropertiesAreIdentical: Unsupported type! %i (%s)",
                      *(undefined1 *)((longlong)plVar1 + 0x1c));
        if (local_58 != (double *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1436982b5;
      }
      pdVar2 = (double *)(lVar19 + param_5);
      pdVar20 = (double *)(lVar19 + param_4);
      switch((uint)bVar3) {
      case 2:
      case 3:
      case 0x16:
      case 0x18:
        cVar6 = (**(code **)(*(longlong *)*plVar1 + 200))((longlong *)*plVar1,pdVar20,pdVar2,0);
        goto LAB_143698019;
      case 4:
        bVar22 = NAN(*(float *)pdVar20) || NAN(*(float *)pdVar2);
        bVar23 = *(float *)pdVar20 == *(float *)pdVar2;
LAB_143697edf:
        if ((!bVar23) || (bVar22)) goto LAB_1436982b5;
        break;
      case 5:
      case 9:
        if (*(float *)pdVar20 != *(float *)pdVar2) goto LAB_1436982b5;
        break;
      case 6:
      case 0x15:
        if (*(char *)pdVar20 != *(char *)pdVar2) goto LAB_1436982b5;
        break;
      case 7:
      case 0x14:
      case 0x17:
        if (*pdVar20 != *pdVar2) goto LAB_1436982b5;
        break;
      case 8:
        plVar1 = (longlong *)*plVar1;
        lVar19 = (**(code **)(*plVar1 + 0x210))(plVar1,pdVar20);
        lVar12 = (**(code **)(*plVar1 + 0x210))(plVar1,pdVar2);
        if (lVar19 != lVar12) goto LAB_1436982b5;
        break;
      default:
        if ((*pdVar20 == *pdVar2) && (!NAN(*pdVar20) && !NAN(*pdVar2))) {
          if ((pdVar20[1] == pdVar2[1]) && (!NAN(pdVar20[1]) && !NAN(pdVar2[1]))) {
            bVar22 = NAN(pdVar20[2]) || NAN(pdVar2[2]);
            bVar23 = pdVar20[2] == pdVar2[2];
            goto LAB_143697edf;
          }
        }
        goto LAB_1436982b5;
      case 0xc:
        if ((*pdVar20 == *pdVar2) && (!NAN(*pdVar20) && !NAN(*pdVar2))) {
          if ((pdVar20[1] == pdVar2[1]) && (!NAN(pdVar20[1]) && !NAN(pdVar2[1]))) {
            if ((pdVar20[2] == pdVar2[2]) && (!NAN(pdVar20[2]) && !NAN(pdVar2[2]))) {
              bVar22 = NAN(pdVar20[3]) || NAN(pdVar2[3]);
              bVar23 = pdVar20[3] == pdVar2[3];
              goto LAB_143697edf;
            }
          }
        }
        goto LAB_1436982b5;
      case 0xe:
        cVar6 = FUN_140ba41f1(pdVar20,pdVar2);
        goto LAB_143698019;
      case 0xf:
        cVar6 = FUN_1436982e0(pdVar20,pdVar2);
        goto LAB_143698019;
      case 0x13:
        fVar5 = *(float *)(pdVar20 + 1);
        if (fVar5 == *(float *)(pdVar2 + 1)) {
          if (1 < (int)fVar5) {
            lVar19 = 0;
            while( true ) {
              uVar11 = *(ushort *)((longlong)*pdVar20 + lVar19);
              uVar16 = (ulonglong)uVar11;
              uVar15 = *(ushort *)((longlong)*pdVar2 + lVar19);
              if (uVar11 != uVar15) break;
              if (uVar11 == 0) goto LAB_143698235;
LAB_143698101:
              lVar19 = lVar19 + 2;
            }
            if ((uVar15 | uVar11) < 0x80) {
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              uVar17 = (ulonglong)uVar15;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              if ((&DAT_149e05da0)[uVar16] == (&DAT_149e05da0)[uVar17]) goto LAB_143698101;
            }
            if (uVar11 != uVar15) goto LAB_1436982b5;
          }
        }
        else if ((int)*(float *)(pdVar2 + 1) + (int)fVar5 != 1) goto LAB_1436982b5;
        break;
      case 0x19:
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar7 = ((uint)((ulonglong)plVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar1 >> 4)) *
                  -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          plVar9 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar9 = local_60;
          }
          iVar10 = *(int *)((longlong)plVar9 +
                           (ulonglong)((int)local_80[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
          if (iVar10 != -1) {
            do {
              lVar19 = *local_80 + (longlong)iVar10 * 0x20;
              if (*(longlong **)(*local_80 + (longlong)iVar10 * 0x20) == plVar1) goto LAB_143698209;
              iVar10 = *(int *)(lVar19 + 0x18);
            } while (iVar10 != -1);
          }
        }
        lVar19 = 0;
LAB_143698209:
        local_98 = pdVar2;
        cVar6 = FUN_143697dfb(lVar19 + 8,local_80,0xffffffff,pdVar20);
LAB_143698019:
        if (cVar6 == '\0') {
LAB_1436982b5:
          uVar8 = 0;
          goto LAB_1436982b7;
        }
      }
LAB_143698235:
      iVar13 = iVar13 + 1;
    } while (iVar13 < param_3);
    uVar8 = 1;
  }
LAB_1436982b7:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1436982e0 FUN_1436982e0 body=274 status=ok
// SIG undefined FUN_1436982e0(void)

bool FUN_1436982e0(double *param_1,double *param_2)

{
  byte bVar1;
  
  if ((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) {
    if ((param_1[1] == param_2[1]) && (!NAN(param_1[1]) && !NAN(param_2[1]))) {
      if ((param_1[2] == param_2[2]) && (!NAN(param_1[2]) && !NAN(param_2[2]))) {
        if ((param_1[3] == param_2[3]) && (!NAN(param_1[3]) && !NAN(param_2[3]))) {
          if ((param_1[4] == param_2[4]) && (!NAN(param_1[4]) && !NAN(param_2[4]))) {
            if ((param_1[5] == param_2[5]) && (!NAN(param_1[5]) && !NAN(param_2[5]))) {
              if ((param_1[6] == param_2[6]) && (!NAN(param_1[6]) && !NAN(param_2[6]))) {
                if ((param_1[7] == param_2[7]) && (!NAN(param_1[7]) && !NAN(param_2[7]))) {
                  if ((param_1[8] == param_2[8]) && (!NAN(param_1[8]) && !NAN(param_2[8]))) {
                    if ((param_1[9] == param_2[9]) && (!NAN(param_1[9]) && !NAN(param_2[9]))) {
                      if ((param_1[10] == param_2[10]) && (!NAN(param_1[10]) && !NAN(param_2[10])))
                      {
                        if ((param_1[0xb] == param_2[0xb]) &&
                           (!NAN(param_1[0xb]) && !NAN(param_2[0xb]))) {
                          if ((*(byte *)(param_1 + 0xf) & 4) != 0) {
                            if (param_1[0xc] != param_2[0xc]) {
                              return false;
                            }
                            if (NAN(param_1[0xc]) || NAN(param_2[0xc])) {
                              return false;
                            }
                            if (param_1[0xd] != param_2[0xd]) {
                              return false;
                            }
                            if (NAN(param_1[0xd]) || NAN(param_2[0xd])) {
                              return false;
                            }
                            if (param_1[0xe] != param_2[0xe]) {
                              return false;
                            }
                            if (NAN(param_1[0xe]) || NAN(param_2[0xe])) {
                              return false;
                            }
                          }
                          bVar1 = *(byte *)(param_1 + 0xf) ^ *(byte *)(param_2 + 0xf);
                          if ((bVar1 & 3) == 0) {
                            return (bVar1 & 4) == 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}



// FUNCTION 143698400 FUN_143698400 body=19 status=ok
// SIG undefined FUN_143698400(void)

void FUN_143698400(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 143698414 FUN_143698414 body=346 status=ok
// SIG undefined FUN_143698414(void)

void FUN_143698414(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1436984a6;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_1436984a6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,2);
  return;
}



// FUNCTION 14369856e FUN_14369856e body=374 status=ok
// SIG undefined FUN_14369856e(void)

void FUN_14369856e(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143698617;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_143698617:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,2);
    }
  }
  return;
}



// FUNCTION 1436986e4 FUN_1436986e4 body=481 status=ok
// SIG undefined FUN_1436986e4(void)

void FUN_1436986e4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147ce48ce(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436988c6 FUN_1436988c6 body=232 status=ok
// SIG undefined FUN_1436988c6(void)

void FUN_1436988c6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 1436989ae FUN_1436989ae body=81 status=ok
// SIG undefined FUN_1436989ae(void)

void FUN_1436989ae(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147ce4971(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143698a00 FUN_143698a00 body=481 status=ok
// SIG undefined FUN_143698a00(void)

void FUN_143698a00(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147ce4c86(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143698be2 FUN_143698be2 body=232 status=ok
// SIG undefined FUN_143698be2(void)

void FUN_143698be2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143698cca FUN_143698cca body=81 status=ok
// SIG undefined FUN_143698cca(void)

void FUN_143698cca(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147ce4d29(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143698d2e FUN_143698d2e body=12 status=ok
// SIG undefined FUN_143698d2e(void)

void FUN_143698d2e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143698d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143698d3a FUN_143698d3a body=29 status=ok
// SIG undefined FUN_143698d3a(void)

undefined8 FUN_143698d3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143698d7e FUN_143698d7e body=282 status=ok
// SIG undefined FUN_143698d7e(void)

undefined8 * FUN_143698d7e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143698d57);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143698e98 FUN_143698e98 body=94 status=ok
// SIG undefined FUN_143698e98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143698e98(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147cdb552(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147cdb552(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143698eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143698ef6 FUN_143698ef6 body=108 status=ok
// SIG undefined FUN_143698ef6(void)

void FUN_143698ef6(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_468 [40];
  undefined1 local_440 [1056];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_468;
  uVar1 = *(undefined8 *)(param_1 + 0x428);
  FUN_147bc57d6(local_440,param_1);
  FUN_147cdb626(*(undefined8 *)(param_1 + 0x420),local_440,uVar1);
  if ((local_20 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143698f6e FUN_143698f6e body=29 status=ok
// SIG undefined FUN_143698f6e(void)

void FUN_143698f6e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143698f8c FUN_143698f8c body=52 status=ok
// SIG undefined FUN_143698f8c(void)

undefined8 * FUN_143698f8c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa6e340;
  FUN_14599ed1e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143698fc0 FUN_143698fc0 body=282 status=ok
// SIG undefined FUN_143698fc0(void)

undefined8 * FUN_143698fc0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143698d57);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1436990da FUN_1436990da body=166 status=ok
// SIG undefined FUN_1436990da(void)

void FUN_1436990da(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_468 [32];
  undefined1 local_448 [1056];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = param_1[0x9a];
  FUN_147bc57d6(local_448,param_1 + 0x15);
  FUN_147cdb626(param_1[0x99],local_448,uVar2);
  FUN_14599ed1e(param_1 + 0x15);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436991a2 FUN_1436991a2 body=56 status=ok
// SIG undefined FUN_1436991a2(void)

int FUN_1436991a2(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x20000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 3;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,8);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14369922a FUN_14369922a body=56 status=ok
// SIG undefined FUN_14369922a(void)

int FUN_14369922a(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x20000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 3;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,8);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14369929a FUN_14369929a body=56 status=ok
// SIG undefined FUN_14369929a(void)

int FUN_14369929a(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x40000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 2;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,4);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 1436992ea FUN_1436992ea body=1418 status=ok
// SIG undefined FUN_1436992ea(void)

void FUN_1436992ea(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145f0d556();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14cb01f30);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143699888 FUN_143699888 body=12 status=ok
// SIG undefined FUN_143699888(void)

void FUN_143699888(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143699891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143699894 FUN_143699894 body=29 status=ok
// SIG undefined FUN_143699894(void)

undefined8 FUN_143699894(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1436998b2 FUN_1436998b2 body=282 status=ok
// SIG undefined FUN_1436998b2(void)

undefined8 * FUN_1436998b2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143698d57);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1436999cc FUN_1436999cc body=94 status=ok
// SIG undefined FUN_1436999cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436999cc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145de5d10(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145de5d10(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143699a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143699a2a FUN_143699a2a body=102 status=ok
// SIG undefined FUN_143699a2a(void)

void FUN_143699a2a(void *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [36];
  undefined1 local_b4 [156];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xa0);
  memcpy(local_b4,param_1,0x9c);
  FUN_147ce7474(local_b4,uVar1);
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143699a9c FUN_143699a9c body=29 status=ok
// SIG undefined FUN_143699a9c(void)

void FUN_143699a9c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143699aba FUN_143699aba body=29 status=ok
// SIG undefined FUN_143699aba(void)

undefined8 FUN_143699aba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143699ad8 FUN_143699ad8 body=282 status=ok
// SIG undefined FUN_143699ad8(void)

undefined8 * FUN_143699ad8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143698d57);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143699bf2 FUN_143699bf2 body=205 status=ok
// SIG undefined FUN_143699bf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143699bf2(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_e8 [44];
  undefined1 local_bc [156];
  ulonglong local_20;
  
  uVar2 = _DAT_00000148;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 == 0) {
    memcpy(local_bc,&DAT_000000a8,0x9c);
    FUN_147ce7474(local_bc,uVar2);
  }
  else {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    uVar2 = *(undefined8 *)(param_1 + 0x148);
    memcpy(local_bc,(void *)(param_1 + 0xa8),0x9c);
    FUN_147ce7474(local_bc,uVar2);
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_e8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143699cd8 FUN_143699cd8 body=83 status=ok
// SIG undefined FUN_143699cd8(void)

void FUN_143699cd8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
    if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x78),
              (longlong)*(int *)((longlong)param_1 + 0x80) << 3);
      FUN_1446efa72((longlong)param_1 + 0x78,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 143699d4e FUN_143699d4e body=12 status=ok
// SIG undefined FUN_143699d4e(void)

void FUN_143699d4e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143699d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143699d5a FUN_143699d5a body=29 status=ok
// SIG undefined FUN_143699d5a(void)

undefined8 FUN_143699d5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143699d78 FUN_143699d78 body=282 status=ok
// SIG undefined FUN_143699d78(void)

undefined8 * FUN_143699d78(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143698d57);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143699e92 FUN_143699e92 body=85 status=ok
// SIG undefined FUN_143699e92(void)

ulonglong FUN_143699e92(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143699edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 143699ee8 FUN_143699ee8 body=199 status=ok
// SIG undefined FUN_143699ee8(void)

void FUN_143699ee8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x800) {
        uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
      }
      else {
        uVar2 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar2 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 143699fb0 FUN_143699fb0 body=262 status=ok
// SIG undefined FUN_143699fb0(void)

void FUN_143699fb0(longlong param_1,int param_2)

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



// FUNCTION 14369a0b6 FUN_14369a0b6 body=3223 status=ok
// SIG undefined FUN_14369a0b6(void)

undefined4 FUN_14369a0b6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  bool bVar23;
  uint uVar24;
  byte bVar27;
  int iVar25;
  longlong lVar26;
  float fVar28;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  ulonglong local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  int local_398;
  undefined4 local_394;
  undefined4 local_390;
  int local_38c;
  undefined8 local_388;
  undefined1 local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined2 *local_368;
  int local_360;
  undefined2 *local_358;
  int local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_378 = 0;
  uStack_370 = 0;
joined_r0x00014369a0ec:
  if (param_3 == (longlong *)0x0) goto LAB_14369ac7f;
  lVar18 = param_3[10];
  while( true ) {
    if (lVar18 == 0) goto LAB_14369a114;
    if ((~*(uint *)(*(longlong *)(lVar18 + 8) + 0x18) & 0x8001) == 0) break;
    lVar18 = *(longlong *)(lVar18 + 0x18);
  }
LAB_14369a132:
  if ((*(byte *)(lVar18 + 0x3b) & 0x80) == 0) {
    lVar26 = (longlong)(int)uStack_370;
    uVar4 = (int)uStack_370 + 1;
    uStack_370 = CONCAT44(uStack_370._4_4_,uVar4);
    if (uStack_370._4_4_ < uVar4) {
      FUN_140001000(&local_378);
    }
    *(longlong *)(local_378 + lVar26 * 8) = lVar18;
  }
  plVar11 = (longlong *)(lVar18 + 0x18);
  do {
    for (lVar18 = *plVar11; lVar18 != 0; lVar18 = *(longlong *)(lVar18 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar18 + 8) + 0x18) & 0x8001) == 0) goto LAB_14369a132;
    }
    param_3 = (longlong *)(**(code **)(*param_3 + 0x2b0))(param_3);
    lVar18 = local_378;
    plVar11 = param_3 + 10;
  } while (param_3 != (longlong *)0x0);
  iVar10 = (int)uStack_370;
  lVar26 = (longlong)(int)uStack_370;
  if (lVar26 < 2) goto LAB_14369ac7f;
  local_3b0 = param_1;
  local_3a8 = param_2;
  memset(local_338,0,0x2f0);
  local_348 = lVar18;
  local_340 = lVar18 + lVar26 * 8 + -8;
  fVar28 = logf((float)iVar10);
  local_338[0] = (int)(longlong)(fVar28 + fVar28);
  plVar11 = &local_348;
LAB_14369a20d:
  plVar14 = (longlong *)*plVar11;
  iVar10 = (int)plVar11[2];
  iVar20 = (int)((ulonglong)(plVar11[1] - (longlong)plVar14) >> 3);
  local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
  plVar1 = (longlong *)plVar11[1];
  local_3c8 = plVar11;
joined_r0x00014369a230:
  uVar4 = iVar20 + 1;
  uVar16 = (ulonglong)uVar4;
  if (iVar10 == 0) {
    plVar11 = local_3c8;
    if (uVar4 != 0) {
      uVar4 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
      local_3c0 = uVar16;
      do {
        plVar11 = (longlong *)(ulonglong)uVar4;
        uVar9 = uVar4 * 2 + 1;
        local_3b8 = plVar11;
        if ((int)uVar9 < (int)uVar16) {
          do {
            uVar19 = uVar4 * 2 + 2;
            uVar4 = uVar9;
            if ((int)uVar19 < (int)uVar16) {
              lVar18 = plVar14[(int)uVar9];
              lVar26 = plVar14[(int)uVar19];
              if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
                if (lVar18 == 0) {
                  FUN_140056680(&local_358,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar18 + 0x20,&local_358);
                }
                if (lVar26 == 0) {
                  FUN_140056680(&local_368,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar26 + 0x20,&local_368);
                }
                puVar7 = local_358;
                if (local_350 == 0) {
                  puVar7 = &DAT_149dfb77a;
                }
                puVar15 = local_368;
                if (local_360 == 0) {
                  puVar15 = &DAT_149dfb77a;
                }
                lVar18 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                  uVar24 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                  uVar4 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369a681;
                    }
                    bVar27 = (byte)(uVar24 - uVar4 >> 0x18);
                    goto LAB_14369a6ad;
                  }
                  if (uVar2 == 0) break;
LAB_14369a681:
                  lVar18 = lVar18 + 2;
                }
                bVar27 = 0;
LAB_14369a6ad:
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_368);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                bVar23 = (bool)(bVar27 >> 7);
                uVar16 = local_3c0;
              }
              else {
                bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
              }
              uVar4 = uVar19;
              if (bVar23 != false) {
                uVar4 = uVar9;
              }
            }
            iVar10 = (int)plVar11;
            lVar26 = plVar14[(int)uVar4];
            lVar18 = plVar14[iVar10];
            if (*(int *)(lVar18 + 0x44) == *(int *)(lVar26 + 0x44)) {
              if (lVar26 == 0) {
                FUN_140056680(&local_358,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar26 + 0x20,&local_358);
              }
              if (lVar18 == 0) {
                FUN_140056680(&local_368,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar18 + 0x20,&local_368);
              }
              puVar7 = local_358;
              if (local_350 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              puVar15 = local_368;
              if (local_360 == 0) {
                puVar15 = &DAT_149dfb77a;
              }
              lVar18 = 0;
              while( true ) {
                uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                uVar19 = (uint)uVar2;
                uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                uVar9 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369a7a3;
                  }
                  iVar20 = uVar19 - uVar9;
                  goto LAB_14369a7cf;
                }
                if (uVar2 == 0) break;
LAB_14369a7a3:
                lVar18 = lVar18 + 2;
              }
              iVar20 = 0;
LAB_14369a7cf:
              if (local_368 != (undefined2 *)0x0) {
                FUN_1400020a8(local_368);
              }
              if (local_358 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              uVar16 = local_3c0;
              if (-1 < iVar20) break;
              lVar18 = plVar14[iVar10];
              lVar26 = plVar14[(int)uVar4];
            }
            else if (*(int *)(lVar26 + 0x44) <= *(int *)(lVar18 + 0x44)) break;
            plVar14[iVar10] = lVar26;
            plVar14[(int)uVar4] = lVar18;
            uVar9 = uVar4 * 2 + 1;
            plVar11 = (longlong *)(ulonglong)uVar4;
          } while ((int)uVar9 < (int)uVar16);
        }
        uVar4 = (int)local_3b8 - 1;
      } while ((int)local_3b8 != 0);
      plVar11 = local_3c8;
      if (1 < (int)uVar16) {
        uVar17 = uVar16 & 0xffffffff;
        lVar18 = *plVar14;
        *plVar14 = plVar14[uVar17 - 1];
        plVar14[uVar17 - 1] = lVar18;
        if ((int)uVar16 != 2) {
          do {
            uVar17 = uVar17 - 1;
            iVar10 = 0;
            iVar21 = 1;
            local_3c0 = uVar17;
            iVar20 = 0;
            do {
              iVar10 = iVar10 + 2;
              iVar25 = iVar21;
              if ((longlong)iVar10 < (longlong)uVar17) {
                lVar18 = plVar14[iVar21];
                lVar26 = plVar14[iVar10];
                if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
                  if (lVar18 == 0) {
                    FUN_140056680(&local_358,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(lVar18 + 0x20,&local_358);
                  }
                  if (lVar26 == 0) {
                    FUN_140056680(&local_368,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(lVar26 + 0x20,&local_368);
                  }
                  puVar7 = local_358;
                  if (local_350 == 0) {
                    puVar7 = &DAT_149dfb77a;
                  }
                  puVar15 = local_368;
                  if (local_360 == 0) {
                    puVar15 = &DAT_149dfb77a;
                  }
                  lVar18 = 0;
                  while( true ) {
                    uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                    uVar9 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                    uVar4 = (uint)uVar3;
                    if (uVar2 != uVar3) {
                      if ((uVar3 | uVar2) < 0x80) {
                        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369a93b;
                      }
                      bVar27 = (byte)(uVar9 - uVar4 >> 0x18);
                      goto LAB_14369a967;
                    }
                    if (uVar2 == 0) break;
LAB_14369a93b:
                    lVar18 = lVar18 + 2;
                  }
                  bVar27 = 0;
LAB_14369a967:
                  if (local_368 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_368);
                  }
                  if (local_358 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  bVar23 = (bool)(bVar27 >> 7);
                  uVar17 = local_3c0;
                }
                else {
                  bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
                }
                iVar25 = iVar10;
                if (bVar23 != false) {
                  iVar25 = iVar21;
                }
              }
              lVar26 = plVar14[iVar25];
              lVar18 = plVar14[iVar20];
              if (*(int *)(lVar18 + 0x44) == *(int *)(lVar26 + 0x44)) {
                if (lVar26 == 0) {
                  FUN_140056680(&local_358,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar26 + 0x20,&local_358);
                }
                if (lVar18 == 0) {
                  FUN_140056680(&local_368,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar18 + 0x20,&local_368);
                }
                puVar7 = local_358;
                if (local_350 == 0) {
                  puVar7 = &DAT_149dfb77a;
                }
                puVar15 = local_368;
                if (local_360 == 0) {
                  puVar15 = &DAT_149dfb77a;
                }
                lVar18 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                  uVar9 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                  uVar4 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369aa5d;
                    }
                    iVar10 = uVar9 - uVar4;
                    goto LAB_14369aa89;
                  }
                  if (uVar2 == 0) break;
LAB_14369aa5d:
                  lVar18 = lVar18 + 2;
                }
                iVar10 = 0;
LAB_14369aa89:
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_368);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar17 = local_3c0;
                if (-1 < iVar10) break;
                lVar18 = plVar14[iVar20];
                lVar26 = plVar14[iVar25];
              }
              else if (*(int *)(lVar26 + 0x44) <= *(int *)(lVar18 + 0x44)) break;
              plVar14[iVar20] = lVar26;
              plVar14[iVar25] = lVar18;
              iVar10 = iVar25 * 2;
              iVar21 = iVar25 * 2 + 1;
              iVar20 = iVar25;
            } while ((longlong)iVar21 < (longlong)uVar17);
            lVar18 = *plVar14;
            *plVar14 = plVar14[uVar17 - 1];
            plVar14[uVar17 - 1] = lVar18;
            plVar11 = local_3c8;
          } while (2 < uVar17);
        }
      }
    }
  }
  else {
    if (8 < (int)uVar4) {
      lVar18 = plVar14[uVar4 >> 1];
      plVar14[uVar4 >> 1] = *plVar14;
      *plVar14 = lVar18;
      plVar12 = plVar1 + 1;
      plVar13 = plVar14;
      local_3b8 = plVar1;
LAB_14369a263:
      while (plVar13 = plVar13 + 1, plVar13 <= plVar1) {
        lVar18 = *plVar13;
        lVar26 = *plVar14;
        if (*(int *)(lVar26 + 0x44) != *(int *)(lVar18 + 0x44)) goto LAB_14369a298;
        if (lVar18 == 0) {
          FUN_140056680(&local_358,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(lVar18 + 0x20,&local_358);
        }
        if (lVar26 == 0) {
          FUN_140056680(&local_368,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(lVar26 + 0x20,&local_368);
        }
        puVar7 = local_358;
        if (local_350 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        puVar15 = local_368;
        if (local_360 == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        lVar18 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
          uVar9 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
          uVar4 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369a328;
            }
            iVar10 = uVar9 - uVar4;
            goto LAB_14369a354;
          }
          if (uVar2 == 0) break;
LAB_14369a328:
          lVar18 = lVar18 + 2;
        }
        iVar10 = 0;
LAB_14369a354:
        if (local_368 != (undefined2 *)0x0) {
          FUN_1400020a8(local_368);
        }
        if (local_358 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar10 < 0) break;
      }
      goto LAB_14369a380;
    }
    for (; plVar11 = local_3c8, plVar13 = plVar14, plVar12 = plVar14, plVar14 < plVar1;
        plVar1 = plVar1 + -1) {
      while (plVar12 = plVar12 + 1, plVar12 <= plVar1) {
        lVar18 = *plVar12;
        lVar26 = *plVar13;
        if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
          if (lVar18 == 0) {
            FUN_140056680(&local_358,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(lVar18 + 0x20,&local_358);
          }
          if (lVar26 == 0) {
            FUN_140056680(&local_368,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(lVar26 + 0x20,&local_368);
          }
          puVar7 = local_358;
          if (local_350 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          puVar15 = local_368;
          if (local_360 == 0) {
            puVar15 = &DAT_149dfb77a;
          }
          lVar18 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
            uVar9 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
            uVar4 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369abdc;
              }
              bVar27 = (byte)(uVar9 - uVar4 >> 0x18);
              goto LAB_14369ac08;
            }
            if (uVar2 == 0) break;
LAB_14369abdc:
            lVar18 = lVar18 + 2;
          }
          bVar27 = 0;
LAB_14369ac08:
          if (local_368 != (undefined2 *)0x0) {
            FUN_1400020a8(local_368);
          }
          if (local_358 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          bVar23 = (bool)(bVar27 >> 7);
        }
        else {
          bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
        }
        if (bVar23 != false) {
          plVar13 = plVar12;
        }
      }
      lVar18 = *plVar13;
      *plVar13 = *plVar1;
      *plVar1 = lVar18;
    }
  }
  goto LAB_14369ac60;
LAB_14369a114:
  param_3 = (longlong *)(**(code **)(*param_3 + 0x2b0))(param_3);
  goto joined_r0x00014369a0ec;
LAB_14369a298:
  if (*(int *)(lVar18 + 0x44) <= *(int *)(lVar26 + 0x44)) goto LAB_14369a263;
LAB_14369a380:
  do {
    while( true ) {
      plVar22 = plVar12;
      plVar12 = plVar22 + -1;
      if (plVar12 <= plVar14) goto LAB_14369a4a8;
      lVar18 = *plVar14;
      lVar26 = plVar22[-1];
      if (*(int *)(lVar26 + 0x44) != *(int *)(lVar18 + 0x44)) break;
      if (lVar18 == 0) {
        FUN_140056680(&local_358,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(lVar18 + 0x20,&local_358);
      }
      if (lVar26 == 0) {
        FUN_140056680(&local_368,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(lVar26 + 0x20,&local_368);
      }
      puVar7 = local_358;
      if (local_350 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      puVar15 = local_368;
      if (local_360 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      lVar18 = 0;
      while( true ) {
        uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
        uVar9 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
        uVar4 = (uint)uVar3;
        if (uVar2 != uVar3) {
          if ((uVar3 | uVar2) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369a449;
          }
          iVar10 = uVar9 - uVar4;
          goto LAB_14369a475;
        }
        if (uVar2 == 0) break;
LAB_14369a449:
        lVar18 = lVar18 + 2;
      }
      iVar10 = 0;
LAB_14369a475:
      if (local_368 != (undefined2 *)0x0) {
        FUN_1400020a8(local_368);
      }
      if (local_358 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar10 < 0) goto LAB_14369a4a8;
    }
  } while (*(int *)(lVar18 + 0x44) <= *(int *)(lVar26 + 0x44));
LAB_14369a4a8:
  if (plVar13 <= plVar12) {
    lVar18 = *plVar13;
    *plVar13 = plVar22[-1];
    *plVar12 = lVar18;
    goto LAB_14369a263;
  }
  lVar18 = *plVar14;
  *plVar14 = plVar22[-1];
  *plVar12 = lVar18;
  iVar10 = (int)local_3c0 + -1;
  local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
  plVar22 = plVar22 + -2;
  if ((longlong)plVar22 - (longlong)plVar14 < (longlong)local_3b8 - (longlong)plVar13) {
    if (plVar13 < plVar1) {
      *local_3c8 = (longlong)plVar13;
      local_3c8[1] = (longlong)plVar1;
      *(int *)(local_3c8 + 2) = iVar10;
      local_3c8 = local_3c8 + 3;
    }
    plVar11 = local_3c8;
    if (plVar12 <= plVar14 + 1) goto LAB_14369ac60;
  }
  else {
    plVar11 = local_3c8;
    if (plVar14 + 1 < plVar12) {
      *local_3c8 = (longlong)plVar14;
      local_3c8[1] = (longlong)plVar22;
      *(int *)(local_3c8 + 2) = iVar10;
      plVar11 = local_3c8 + 3;
    }
    plVar14 = plVar13;
    plVar22 = plVar1;
    if (plVar1 <= plVar13) goto LAB_14369ac60;
  }
  local_3c8 = plVar11;
  iVar20 = (int)((ulonglong)((longlong)plVar22 - (longlong)plVar14) >> 3);
  plVar1 = plVar22;
  goto joined_r0x00014369a230;
LAB_14369ac60:
  plVar11 = plVar11 + -3;
  param_2 = local_3a8;
  param_1 = local_3b0;
  if (plVar11 < &local_348) {
LAB_14369ac7f:
    uVar5 = FUN_14369bd2d(param_1,param_2);
    lVar18 = local_378;
    if (0 < (int)uStack_370) {
      lVar26 = 0;
      iVar10 = (int)uStack_370;
      do {
        lVar8 = *(longlong *)(lVar18 + lVar26 * 8);
        if (0 < *(int *)(lVar8 + 0x30)) {
          iVar10 = 0;
          uVar6 = *(undefined4 *)(param_2 + 0xc);
          do {
            local_394 = uVar6;
            local_398 = *(int *)(lVar8 + 0x34) * iVar10 + *(int *)(param_2 + 8);
            local_388 = *(undefined8 *)(param_2 + 0x18);
            local_380 = 0;
            local_3a0 = lVar8;
            local_390 = uVar5;
            local_38c = iVar10;
            uVar6 = FUN_143691e49(param_1,&local_3a0);
            *(undefined4 *)(param_2 + 0xc) = uVar6;
            iVar10 = iVar10 + 1;
            lVar8 = *(longlong *)(local_378 + lVar26 * 8);
          } while (iVar10 < *(int *)(lVar8 + 0x30));
          lVar18 = local_378;
          iVar10 = (int)uStack_370;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < iVar10);
    }
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    if (lVar18 != 0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_14369a20d;
}



// FUNCTION 14369ad4e FUN_14369ad4e body=4063 status=ok
// SIG undefined FUN_14369ad4e(void)

void FUN_14369ad4e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  
  plVar12 = (longlong *)*param_1;
  iVar1 = (int)plVar12[1];
  *(uint *)(plVar12 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar12 + 0xc) < iVar1 + 1U) {
    FUN_14001faa0(plVar12,iVar1);
  }
  lVar8 = *plVar12;
  lVar10 = (longlong)iVar1 * 0x20;
  puVar5 = (undefined8 *)(lVar8 + 0x10 + lVar10);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)(lVar8 + lVar10) = 0;
  ((undefined8 *)(lVar8 + lVar10))[1] = 0;
  lVar13 = *param_2;
  *(longlong *)(lVar8 + lVar10) = lVar13;
  *(undefined1 *)(lVar8 + 0x1c + lVar10) = 2;
  *(int *)(lVar8 + 0xc + lVar10) = (int)param_2[1];
  *(undefined2 *)(lVar8 + 10 + lVar10) = *(undefined2 *)(lVar13 + 0x34);
  *(undefined2 *)(lVar8 + 0x14 + lVar10) = *(undefined2 *)((longlong)param_2 + 0xc);
  *(short *)(lVar8 + 0x16 + lVar10) = (short)param_1[2];
  uVar4 = FUN_14369bd2d(param_1,param_2);
  *(undefined4 *)(lVar8 + 0x18 + lVar10) = uVar4;
  lVar13 = *(longlong *)(lVar8 + lVar10);
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    puVar6 = *(undefined **)(lVar13 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      uVar7 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0,0x1000000008001,0,uVar7,
                    FUN_140a4831c);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar14 = puVar6 != (undefined *)0x0;
      if (puVar6 != &DAT_14c949688 && bVar14) {
        do {
          puVar6 = *(undefined **)(puVar6 + 0x30);
          bVar14 = puVar6 != (undefined *)0x0;
          if (puVar6 == &DAT_14c949688) break;
        } while (puVar6 != (undefined *)0x0);
      }
      if (bVar14) goto LAB_14369ae58;
    }
    else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c949690) != 0) {
LAB_14369ae58:
      lVar13 = *(longlong *)(lVar13 + 0x70);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(), DAT_14c952a58 == -1)) {
    uVar7 = FUN_1446ddbd2();
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar7,FUN_1403a682c);
    atexit(FUN_142818c9e);
    _Init_thread_footer();
  }
  plVar12 = (longlong *)(lVar8 + lVar10);
  puVar6 = *(undefined **)(lVar13 + 8);
  if (DAT_14c952a10 == 0) {
    bVar14 = puVar6 != (undefined *)0x0;
    puVar9 = puVar6;
    if (puVar6 != &DAT_14c952a08 && bVar14) {
      do {
        puVar9 = *(undefined **)(puVar9 + 0x30);
        bVar14 = puVar9 != (undefined *)0x0;
        if (puVar9 == &DAT_14c952a08) break;
      } while (puVar9 != (undefined *)0x0);
    }
    if (bVar14) goto LAB_14369ae9e;
LAB_14369af23:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
      uVar7 = FUN_1446ddbd2();
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar7,FUN_14067a048);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
    puVar5 = *(undefined8 **)(lVar13 + 8);
    if (DAT_14c951cd8 == 0) {
      bVar14 = puVar5 != (undefined8 *)0x0;
      if (puVar5 != &DAT_14c951cd0 && bVar14) {
        do {
          puVar5 = (undefined8 *)puVar5[6];
          bVar14 = puVar5 != (undefined8 *)0x0;
          if (puVar5 == &DAT_14c951cd0) break;
        } while (puVar5 != (undefined8 *)0x0);
      }
      if (bVar14) goto LAB_14369af5e;
    }
    else if ((puVar5[3] & DAT_14c951cd8) != 0) {
LAB_14369af5e:
      uVar2 = 3;
      if (*(char *)(lVar13 + 0x73) == -1) {
        uVar2 = 0x15;
      }
      goto LAB_14369b592;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                    FUN_1408a629c);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    puVar5 = *(undefined8 **)(lVar13 + 8);
    if (DAT_14c952380 == 0) {
      bVar14 = puVar5 != (undefined8 *)0x0;
      if (puVar5 != &DAT_14c952378 && bVar14) {
        do {
          puVar5 = (undefined8 *)puVar5[6];
          bVar14 = puVar5 != (undefined8 *)0x0;
          if (puVar5 == &DAT_14c952378) break;
        } while (puVar5 != (undefined8 *)0x0);
      }
      uVar2 = 4;
      if (!bVar14) goto LAB_14369b139;
    }
    else {
      uVar2 = 4;
      if ((puVar5[3] & DAT_14c952380) == 0) {
LAB_14369b139:
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952210) &&
           (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
          FUN_14475b26a();
          FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0,0x1008081,0,&DAT_14c9520b8,
                        FUN_1405ebbb2);
          atexit(FUN_142816fad);
          _Init_thread_footer(&DAT_14c952210);
        }
        puVar5 = *(undefined8 **)(lVar13 + 8);
        if (DAT_14c9521c8 == 0) {
          bVar14 = puVar5 != (undefined8 *)0x0;
          if (puVar5 != &DAT_14c9521c0 && bVar14) {
            do {
              puVar5 = (undefined8 *)puVar5[6];
              bVar14 = puVar5 != (undefined8 *)0x0;
              if (puVar5 == &DAT_14c9521c0) break;
            } while (puVar5 != (undefined8 *)0x0);
          }
          uVar2 = 5;
          if (!bVar14) goto LAB_14369b1b7;
        }
        else {
          uVar2 = 5;
          if ((puVar5[3] & DAT_14c9521c8) == 0) {
LAB_14369b1b7:
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
            {
              FUN_14475b26a();
              FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0,0x1008041,0,&DAT_14c9520b8,
                            FUN_1409f1a5c);
              atexit(FUN_14281201f);
              _Init_thread_footer(&DAT_14c951d78);
            }
            puVar6 = *(undefined **)(lVar13 + 8);
            if (DAT_14c951d30 == 0) {
              bVar14 = puVar6 != (undefined *)0x0;
              if (puVar6 != &DAT_14c951d28 && bVar14) {
                do {
                  puVar6 = *(undefined **)(puVar6 + 0x30);
                  bVar14 = puVar6 != (undefined *)0x0;
                  if (puVar6 == &DAT_14c951d28) break;
                } while (puVar6 != (undefined *)0x0);
              }
              uVar2 = 6;
              if (!bVar14) goto LAB_14369b235;
            }
            else {
              uVar2 = 6;
              if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951d30) == 0) {
LAB_14369b235:
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951cc8) &&
                   (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
                  uVar7 = FUN_1446ddbd2();
                  FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0,0x4008001,0,uVar7,
                                FUN_1468d96f0);
                  atexit(FUN_14281144d);
                  _Init_thread_footer(&DAT_14c951cc8);
                }
                puVar6 = *(undefined **)(lVar13 + 8);
                if (DAT_14c951c80 == 0) {
                  bVar14 = puVar6 != (undefined *)0x0;
                  if (puVar6 != &DAT_14c951c78 && bVar14) {
                    do {
                      puVar6 = *(undefined **)(puVar6 + 0x30);
                      bVar14 = puVar6 != (undefined *)0x0;
                      if (puVar6 == &DAT_14c951c78) break;
                    } while (puVar6 != (undefined *)0x0);
                  }
                  if (!bVar14) goto LAB_14369b2ef;
                }
                else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951c80) == 0) {
LAB_14369b2ef:
                  lVar10 = FUN_140be4ae0();
                  lVar8 = *(longlong *)(lVar13 + 8);
                  if (*(ulonglong *)(lVar10 + 8) == 0) {
                    bVar14 = lVar8 != 0;
                    if (lVar8 != lVar10 && bVar14) {
                      do {
                        lVar8 = *(longlong *)(lVar8 + 0x30);
                        bVar14 = lVar8 != 0;
                        if (lVar8 == lVar10) break;
                      } while (lVar8 != 0);
                    }
                    uVar2 = 0x18;
                    if (!bVar14) goto LAB_14369b3a8;
                  }
                  else {
                    uVar2 = 0x18;
                    if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar10 + 8)) == 0) {
LAB_14369b3a8:
                      if ((*(int *)(*(longlong *)
                                     ((longlong)ThreadLocalStoragePointer +
                                     (ulonglong)_tls_index * 8) + 0x110) < DAT_14c9520b0) &&
                         (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
                        uVar7 = FUN_1446ddbd2();
                        FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0,0xa001,0,uVar7,
                                      FUN_1409e12a0);
                        atexit(FUN_142816ef9);
                        _Init_thread_footer(&DAT_14c9520b0);
                      }
                      puVar6 = *(undefined **)(lVar13 + 8);
                      if (DAT_14c952068 == 0) {
                        bVar14 = puVar6 != (undefined *)0x0;
                        if (puVar6 != &DAT_14c952060 && bVar14) {
                          do {
                            puVar6 = *(undefined **)(puVar6 + 0x30);
                            bVar14 = puVar6 != (undefined *)0x0;
                            if (puVar6 == &DAT_14c952060) break;
                          } while (puVar6 != (undefined *)0x0);
                        }
                        uVar2 = 7;
                        if (!bVar14) goto LAB_14369b461;
                      }
                      else {
                        uVar2 = 7;
                        if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952068) == 0) {
LAB_14369b461:
                          if ((*(int *)(*(longlong *)
                                         ((longlong)ThreadLocalStoragePointer +
                                         (ulonglong)_tls_index * 8) + 0x110) < DAT_14c952318) &&
                             (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
                            FUN_14475b26a();
                            FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0,0x1008801,0,
                                          &DAT_14c9520b8,FUN_1468e122c);
                            atexit(FUN_142817034);
                            _Init_thread_footer(&DAT_14c952318);
                          }
                          puVar6 = *(undefined **)(lVar13 + 8);
                          if (DAT_14c9522d0 == 0) {
                            bVar14 = puVar6 != (undefined *)0x0;
                            if (puVar6 != &DAT_14c9522c8 && bVar14) {
                              do {
                                puVar6 = *(undefined **)(puVar6 + 0x30);
                                bVar14 = puVar6 != (undefined *)0x0;
                                if (puVar6 == &DAT_14c9522c8) break;
                              } while (puVar6 != (undefined *)0x0);
                            }
                            uVar2 = 9;
                            if (!bVar14) goto LAB_14369b4df;
                          }
                          else {
                            uVar2 = 9;
                            if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c9522d0) == 0) {
LAB_14369b4df:
                              if ((*(int *)(*(longlong *)
                                             ((longlong)ThreadLocalStoragePointer +
                                             (ulonglong)_tls_index * 8) + 0x110) < DAT_14c952370) &&
                                 (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
                                FUN_14475b26a();
                                FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0,0x1008201,0,
                                              &DAT_14c9520b8,FUN_1468e12e4);
                                atexit(FUN_142817061);
                                _Init_thread_footer(&DAT_14c952370);
                              }
                              puVar6 = *(undefined **)(lVar13 + 8);
                              if (DAT_14c952328 == 0) {
                                bVar14 = puVar6 != (undefined *)0x0;
                                if (puVar6 != &DAT_14c952320 && bVar14) {
                                  do {
                                    puVar6 = *(undefined **)(puVar6 + 0x30);
                                    bVar14 = puVar6 != (undefined *)0x0;
                                    if (puVar6 == &DAT_14c952320) break;
                                  } while (puVar6 != (undefined *)0x0);
                                }
                                uVar2 = 0x14;
                                if (!bVar14) goto LAB_14369b555;
                              }
                              else {
                                uVar2 = 0x14;
                                if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952328) == 0) {
LAB_14369b555:
                                  if ((*(int *)(*(longlong *)
                                                 ((longlong)ThreadLocalStoragePointer +
                                                 (ulonglong)_tls_index * 8) + 0x110) < DAT_14c963e88
                                      ) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
                                    uVar7 = FUN_1446ddbd2();
                                    FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0,0xc001,0,
                                                  uVar7,FUN_140dafe7a);
                                    atexit(FUN_142829758);
                                    _Init_thread_footer(&DAT_14c963e88);
                                  }
                                  puVar6 = *(undefined **)(lVar13 + 8);
                                  if (DAT_14c963e40 == 0) {
                                    bVar14 = puVar6 != (undefined *)0x0;
                                    if (puVar6 != &DAT_14c963e38 && bVar14) {
                                      do {
                                        puVar6 = *(undefined **)(puVar6 + 0x30);
                                        bVar14 = puVar6 != (undefined *)0x0;
                                        if (puVar6 == &DAT_14c963e38) break;
                                      } while (puVar6 != (undefined *)0x0);
                                    }
                                    uVar2 = 0x13;
                                    if (!bVar14) goto LAB_14369b596;
                                  }
                                  else {
                                    uVar2 = 0x13;
                                    if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c963e40) == 0)
                                    goto LAB_14369b596;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_14369b592;
                }
                *(undefined1 *)(param_1 + 4) = 1;
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9529b0) &&
                   (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c951cc8) &&
                     (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
                    uVar7 = FUN_1446ddbd2();
                    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0,0x4008001,0,
                                  uVar7,FUN_1468d96f0);
                    atexit(FUN_14281144d);
                    _Init_thread_footer(&DAT_14c951cc8);
                  }
                  FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0,0x24008001,0,
                                &DAT_14c951c78,FUN_140f17fc6);
                  atexit(FUN_142818859);
                  _Init_thread_footer(&DAT_14c9529b0);
                }
                puVar6 = *(undefined **)(lVar13 + 8);
                if (DAT_14c952968 == 0) {
                  bVar14 = puVar6 != (undefined *)0x0;
                  if (puVar6 != &DAT_14c952960 && bVar14) {
                    do {
                      puVar6 = *(undefined **)(puVar6 + 0x30);
                      bVar14 = puVar6 != (undefined *)0x0;
                      if (puVar6 == &DAT_14c952960) break;
                    } while (puVar6 != (undefined *)0x0);
                  }
                  uVar2 = 0x16;
                  if (!bVar14) goto LAB_14369b34d;
                }
                else {
                  uVar2 = 0x16;
                  if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952968) == 0) {
LAB_14369b34d:
                    lVar10 = FUN_14010a2ea();
                    lVar8 = *(longlong *)(lVar13 + 8);
                    if (*(ulonglong *)(lVar10 + 8) == 0) {
                      bVar14 = lVar8 != 0;
                      if (lVar8 != lVar10 && bVar14) {
                        do {
                          lVar8 = *(longlong *)(lVar8 + 0x30);
                          bVar14 = lVar8 != 0;
                          if (lVar8 == lVar10) break;
                        } while (lVar8 != 0);
                      }
                      uVar2 = 0x17;
                      if (!bVar14) goto LAB_14369b41f;
                    }
                    else {
                      uVar2 = 0x17;
                      if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar10 + 8)) == 0) {
LAB_14369b41f:
                        uVar2 = 8;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c952a10) == 0) goto LAB_14369af23;
LAB_14369ae9e:
    if (lVar13 == 0) {
      lVar8 = 0;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(), DAT_14c952a58 == -1)) {
        uVar7 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0,0x108001,0,uVar7,FUN_1403a682c);
        atexit(FUN_142818c9e);
        _Init_thread_footer();
      }
      if (DAT_14c952a10 == 0) {
        bVar14 = puVar6 != (undefined *)0x0;
        if (puVar6 != &DAT_14c952a08 && bVar14) {
          do {
            puVar6 = *(undefined **)(puVar6 + 0x30);
            bVar14 = puVar6 != (undefined *)0x0;
            if (puVar6 == &DAT_14c952a08) break;
          } while (puVar6 != (undefined *)0x0);
        }
      }
      else {
        bVar14 = (*(ulonglong *)(puVar6 + 0x18) & DAT_14c952a10) != 0;
      }
      lVar8 = 0;
      if (bVar14) {
        lVar8 = lVar13;
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x70);
    *(byte *)((longlong)plVar12 + 0x1d) = *(byte *)((longlong)plVar12 + 0x1d) | 2;
    uVar11 = *(ulonglong *)(lVar8 + 0x18);
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    uVar2 = 10;
    if (uVar11 != DAT_14c892c2c) {
      uVar11 = *(ulonglong *)(lVar8 + 0x18);
      uVar2 = 0xb;
      if ((((((uVar11 != DAT_14c892c30) && (uVar2 = 0xc, uVar11 != DAT_14c892c3c)) &&
            (uVar2 = 0xd, uVar11 != DAT_14cb01b70)) &&
           ((uVar2 = 0x11, uVar11 != DAT_14cb01b78 && (uVar2 = 0x10, uVar11 != DAT_14cb01b80)))) &&
          ((uVar2 = 0x12, uVar11 != DAT_14cb01b88 &&
           ((uVar2 = 0xe, uVar11 != DAT_14cb01b90 && (uVar2 = 0xf, uVar11 != DAT_14cb01b98)))))) &&
         (uVar2 = 0x19, (char)param_2[4] == '\0')) goto LAB_14369b596;
    }
  }
LAB_14369b592:
  *(undefined1 *)((longlong)plVar12 + 0x1c) = uVar2;
LAB_14369b596:
  cVar3 = (**(code **)(*(longlong *)*plVar12 + 0xe0))();
  if (cVar3 != '\0') {
    if (*plVar12 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(ulonglong *)(*plVar12 + 0x20);
    }
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (uVar11 != DAT_14c892ea0) {
      *(byte *)((longlong)plVar12 + 0x1d) = *(byte *)((longlong)plVar12 + 0x1d) | 1;
    }
  }
  return;
}



// FUNCTION 14369bd2d FUN_14369bd2d body=2125 status=ok
// SIG undefined FUN_14369bd2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14369bd2d(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  code *local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = param_2[2];
  local_3c = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar9 = *(longlong *)(param_1 + 8);
  param_2 = (longlong *)*param_2;
  if ((lVar9 != 0) && (uVar2 = 0, (*(byte *)(lVar9 + 0xa4) & 2) == 0)) goto LAB_14369c1e6;
  if (param_2 == (longlong *)0x0) {
    FUN_140056680(&local_58);
  }
  else {
    FUN_1400021e4(param_2 + 4);
  }
  puVar1 = local_58;
  uVar4 = (int)uStack_50 - 1;
  if ((int)uStack_50 == 0) {
    uVar4 = 0;
  }
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      local_58[uVar5] = (ushort)((ushort)local_58[uVar5] - 0x41 < 0x1a) * 0x20 + local_58[uVar5];
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  puVar6 = local_58;
  if ((int)uStack_50 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  uVar2 = FUN_144a1ccda(puVar6,(int)lVar8);
  if (puVar1 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar1);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (((param_2 != (longlong *)0x0) &&
      (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952478)) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
      local_68 = (undefined *)FUN_1446ddbd2();
      local_60 = FUN_1468d96f0;
      local_70 = 0;
      local_78 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
    local_60 = FUN_1403a5f94;
    local_68 = &DAT_14c951c78;
    local_70 = 0;
    local_78 = 0x4018001;
    FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
    atexit(FUN_1428170e8);
    _Init_thread_footer(&DAT_14c952478);
  }
  (**(code **)(*param_2 + 0x70))(param_2,&local_58,0,0x100);
  puVar1 = local_58;
  uVar4 = (int)uStack_50 - 1;
  if ((int)uStack_50 == 0) {
    uVar4 = 0;
  }
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      local_58[uVar5] = (ushort)((ushort)local_58[uVar5] - 0x41 < 0x1a) * 0x20 + local_58[uVar5];
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  puVar6 = local_58;
  if ((int)uStack_50 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  uVar2 = FUN_144a1ccda(puVar6,uVar2);
  if (lVar9 == 0) {
    uVar2 = (*(code *)PTR_FUN_14c75b148)(&local_3c,4,uVar2);
LAB_14369c044:
    if (param_2 != (longlong *)0x0) {
      puVar10 = (undefined *)param_2[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1))
      {
        local_68 = (undefined *)FUN_1446ddbd2();
        local_60 = FUN_140a4831c;
        local_78 = 0x1000000008001;
        local_70 = 0;
        FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
        atexit(FUN_1427e14fe);
        _Init_thread_footer(&DAT_14c9496d8);
      }
      if (DAT_14c949690 == 0) {
        bVar11 = puVar10 != (undefined *)0x0;
        if (puVar10 != &DAT_14c949688 && bVar11) {
          do {
            puVar10 = *(undefined **)(puVar10 + 0x30);
            bVar11 = puVar10 != (undefined *)0x0;
            if (puVar10 == &DAT_14c949688) break;
          } while (puVar10 != (undefined *)0x0);
        }
        if (bVar11) goto LAB_14369c088;
LAB_14369c107:
        puVar10 = (undefined *)param_2[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d78) &&
           (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
          FUN_14475b26a();
          local_60 = FUN_1409f1a5c;
          local_68 = &DAT_14c9520b8;
          local_70 = 0;
          local_78 = 0x1008041;
          FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
          atexit(FUN_14281201f);
          _Init_thread_footer(&DAT_14c951d78);
        }
        if (DAT_14c951d30 == 0) {
          bVar11 = puVar10 != (undefined *)0x0;
          if (puVar10 != &DAT_14c951d28 && bVar11) {
            do {
              puVar10 = *(undefined **)(puVar10 + 0x30);
              bVar11 = puVar10 != (undefined *)0x0;
              if (puVar10 == &DAT_14c951d28) break;
            } while (puVar10 != (undefined *)0x0);
          }
          if (bVar11) goto LAB_14369c17b;
        }
        else if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c951d30) != 0) {
LAB_14369c17b:
          puVar6 = (undefined2 *)0x8;
          if (param_2[0xe] != 0) {
            lVar9 = FUN_1404d8156();
            uVar3 = lVar9 + (ulonglong)(lVar9 == -1);
            uVar5 = 0x40;
            if (uVar3 != 0) {
              uVar5 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> uVar5 == 0; uVar5 = uVar5 - 1) {
                }
              }
              uVar5 = uVar5 ^ 0x3f;
            }
            puVar6 = (undefined2 *)(0x40 - uVar5);
          }
          local_58 = (undefined2 *)0x8;
          if (puVar6 < (undefined2 *)0x8) {
            local_58 = puVar6;
          }
          goto LAB_14369c1c9;
        }
      }
      else {
        if ((*(ulonglong *)(puVar10 + 0x18) & DAT_14c949690) == 0) goto LAB_14369c107;
LAB_14369c088:
        puVar6 = (undefined2 *)((longlong)*(int *)((longlong)param_2 + 0x34) << 3);
        lVar9 = FUN_1404d8156(param_2[0xf]);
        uVar3 = lVar9 + (ulonglong)(lVar9 == -1);
        uVar5 = 0x40;
        if (uVar3 != 0) {
          uVar5 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> uVar5 == 0; uVar5 = uVar5 - 1) {
            }
          }
          uVar5 = uVar5 ^ 0x3f;
        }
        local_58 = (undefined2 *)(0x40 - uVar5);
        if (puVar6 <= (undefined2 *)(0x40 - uVar5)) {
          local_58 = puVar6;
        }
LAB_14369c1c9:
        uVar2 = (*(code *)PTR_FUN_14c75b148)(&local_58,8,uVar2);
      }
    }
  }
  else {
    if (DAT_14c873400 == -0x662bf3f &&
        ((DAT_14c8733f8 == 0 && DAT_14c8733f4 == 0) && DAT_14c8733fc == 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c87e490) && (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1))
      {
        FUN_1446f470e(&local_58,L"Unused custom version",1);
        _DAT_14c87e468 = 0;
        uRam000000014c87e46c = 0;
        uRam000000014c87e470 = 0;
        uRam000000014c87e474 = 0xf99d40c1;
        _DAT_14c87e478 = 0x100000000;
        _DAT_14c87e480 = 0;
        DAT_14c87e488 = local_58;
        _Init_thread_footer(&DAT_14c87e490);
      }
      piVar7 = (int *)&DAT_14c87e468;
LAB_14369bf3e:
      if ((uint)piVar7[4] < 4) goto LAB_14369bf76;
      uVar2 = (*(code *)PTR_FUN_14c75b148)(&local_3c,4,uVar2);
    }
    else {
      if ((longlong)*(int *)(lVar9 + 0x1440) != 0) {
        piVar7 = *(int **)(lVar9 + 0x1438);
        lVar8 = (longlong)*(int *)(lVar9 + 0x1440) * 0x28;
        do {
          if ((((*piVar7 == DAT_14c8733f4) && (piVar7[1] == DAT_14c8733f8)) &&
              (piVar7[2] == DAT_14c8733fc)) && (piVar7[3] == DAT_14c873400)) {
            if (piVar7 != (int *)0x0) goto LAB_14369bf3e;
            break;
          }
          piVar7 = piVar7 + 10;
          lVar8 = lVar8 + -0x28;
        } while (lVar8 != 0);
      }
LAB_14369bf76:
      FUN_140002266(&local_58,&DAT_149e25cfc,local_3c);
      puVar6 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar6 = local_58;
      }
      uVar2 = FUN_144a1ccda(puVar6,uVar2);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (DAT_14c873400 == -0x662bf3f &&
        ((DAT_14c8733f8 == 0 && DAT_14c8733f4 == 0) && DAT_14c8733fc == 0)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c87e490) && (FUN_144b3d300(&DAT_14c87e490), DAT_14c87e490 == -1))
      {
        FUN_1446f470e(&local_58,L"Unused custom version",1);
        _DAT_14c87e468 = 0;
        uRam000000014c87e46c = 0;
        uRam000000014c87e470 = 0;
        uRam000000014c87e474 = 0xf99d40c1;
        _DAT_14c87e478 = 0x100000000;
        _DAT_14c87e480 = 0;
        DAT_14c87e488 = local_58;
        _Init_thread_footer(&DAT_14c87e490);
      }
      piVar7 = (int *)&DAT_14c87e468;
LAB_14369c039:
      if (0x10 < (uint)piVar7[4]) goto LAB_14369c044;
    }
    else if ((longlong)*(int *)(lVar9 + 0x1440) != 0) {
      piVar7 = *(int **)(lVar9 + 0x1438);
      lVar9 = (longlong)*(int *)(lVar9 + 0x1440) * 0x28;
      do {
        if (((*piVar7 == DAT_14c8733f4) && (piVar7[1] == DAT_14c8733f8)) &&
           ((piVar7[2] == DAT_14c8733fc && (piVar7[3] == DAT_14c873400)))) {
          if (piVar7 != (int *)0x0) goto LAB_14369c039;
          break;
        }
        piVar7 = piVar7 + 10;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
  }
  if (puVar1 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar1);
  }
LAB_14369c1e6:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14369c57b FUN_14369c57b body=107 status=ok
// SIG undefined FUN_14369c57b(void)

void FUN_14369c57b(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(*(longlong *)*param_1 + 0x1c + (longlong)*(int *)(param_1 + 1) * 0x20) == '\0') {
    lVar2 = (longlong)*(int *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = (int)lVar2;
    lVar3 = *(longlong *)*param_1;
    lVar2 = lVar2 * 0x20;
    if (*(char *)(lVar3 + 0x1c + lVar2) != '\x01') {
      lVar3 = lVar3 + lVar2;
      do {
        *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(lVar3 + 0xc);
        FUN_14369c57b(param_1);
        iVar1 = *(int *)(param_1 + 1);
        *(int *)(param_1 + 1) = (int)((longlong)iVar1 + 1);
        lVar2 = ((longlong)iVar1 + 1) * 0x20;
        lVar3 = *(longlong *)*param_1 + lVar2;
      } while (*(char *)(*(longlong *)*param_1 + 0x1c + lVar2) != '\x01');
    }
  }
  return;
}



// FUNCTION 14369c5e6 FUN_14369c5e6 body=304 status=ok
// SIG undefined FUN_14369c5e6(void)

void FUN_14369c5e6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14369c647;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_14369c647:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,4);
  }
  return;
}



// FUNCTION 14369c716 FUN_14369c716 body=346 status=ok
// SIG undefined FUN_14369c716(void)

void FUN_14369c716(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14369c7a8;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14369c7a8:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14369c870 FUN_14369c870 body=3223 status=ok
// SIG undefined FUN_14369c870(void)

undefined4 FUN_14369c870(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  bool bVar23;
  uint uVar24;
  byte bVar27;
  int iVar25;
  longlong lVar26;
  float fVar28;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  ulonglong local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  int local_398;
  undefined4 local_394;
  undefined4 local_390;
  int local_38c;
  undefined8 local_388;
  undefined1 local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined2 *local_368;
  int local_360;
  undefined2 *local_358;
  int local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_378 = 0;
  uStack_370 = 0;
joined_r0x00014369c8a6:
  if (param_3 == (longlong *)0x0) goto LAB_14369d439;
  lVar18 = param_3[10];
  while( true ) {
    if (lVar18 == 0) goto LAB_14369c8ce;
    if ((~*(uint *)(*(longlong *)(lVar18 + 8) + 0x18) & 0x8001) == 0) break;
    lVar18 = *(longlong *)(lVar18 + 0x18);
  }
LAB_14369c8ec:
  if ((*(byte *)(lVar18 + 0x3b) & 0x80) == 0) {
    lVar26 = (longlong)(int)uStack_370;
    uVar4 = (int)uStack_370 + 1;
    uStack_370 = CONCAT44(uStack_370._4_4_,uVar4);
    if (uStack_370._4_4_ < uVar4) {
      FUN_140001000(&local_378);
    }
    *(longlong *)(local_378 + lVar26 * 8) = lVar18;
  }
  plVar11 = (longlong *)(lVar18 + 0x18);
  do {
    for (lVar18 = *plVar11; lVar18 != 0; lVar18 = *(longlong *)(lVar18 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar18 + 8) + 0x18) & 0x8001) == 0) goto LAB_14369c8ec;
    }
    param_3 = (longlong *)(**(code **)(*param_3 + 0x2b0))(param_3);
    lVar18 = local_378;
    plVar11 = param_3 + 10;
  } while (param_3 != (longlong *)0x0);
  iVar10 = (int)uStack_370;
  lVar26 = (longlong)(int)uStack_370;
  if (lVar26 < 2) goto LAB_14369d439;
  local_3b0 = param_1;
  local_3a8 = param_2;
  memset(local_338,0,0x2f0);
  local_348 = lVar18;
  local_340 = lVar18 + lVar26 * 8 + -8;
  fVar28 = logf((float)iVar10);
  local_338[0] = (int)(longlong)(fVar28 + fVar28);
  plVar11 = &local_348;
LAB_14369c9c7:
  plVar14 = (longlong *)*plVar11;
  iVar10 = (int)plVar11[2];
  iVar20 = (int)((ulonglong)(plVar11[1] - (longlong)plVar14) >> 3);
  local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
  plVar1 = (longlong *)plVar11[1];
  local_3c8 = plVar11;
joined_r0x00014369c9ea:
  uVar4 = iVar20 + 1;
  uVar16 = (ulonglong)uVar4;
  if (iVar10 == 0) {
    plVar11 = local_3c8;
    if (uVar4 != 0) {
      uVar4 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
      local_3c0 = uVar16;
      do {
        plVar11 = (longlong *)(ulonglong)uVar4;
        uVar9 = uVar4 * 2 + 1;
        local_3b8 = plVar11;
        if ((int)uVar9 < (int)uVar16) {
          do {
            uVar19 = uVar4 * 2 + 2;
            uVar4 = uVar9;
            if ((int)uVar19 < (int)uVar16) {
              lVar18 = plVar14[(int)uVar9];
              lVar26 = plVar14[(int)uVar19];
              if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
                if (lVar18 == 0) {
                  FUN_140056680(&local_358,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar18 + 0x20,&local_358);
                }
                if (lVar26 == 0) {
                  FUN_140056680(&local_368,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar26 + 0x20,&local_368);
                }
                puVar7 = local_358;
                if (local_350 == 0) {
                  puVar7 = &DAT_149dfb77a;
                }
                puVar15 = local_368;
                if (local_360 == 0) {
                  puVar15 = &DAT_149dfb77a;
                }
                lVar18 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                  uVar24 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                  uVar4 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369ce3b;
                    }
                    bVar27 = (byte)(uVar24 - uVar4 >> 0x18);
                    goto LAB_14369ce67;
                  }
                  if (uVar2 == 0) break;
LAB_14369ce3b:
                  lVar18 = lVar18 + 2;
                }
                bVar27 = 0;
LAB_14369ce67:
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_368);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                bVar23 = (bool)(bVar27 >> 7);
                uVar16 = local_3c0;
              }
              else {
                bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
              }
              uVar4 = uVar19;
              if (bVar23 != false) {
                uVar4 = uVar9;
              }
            }
            iVar10 = (int)plVar11;
            lVar26 = plVar14[(int)uVar4];
            lVar18 = plVar14[iVar10];
            if (*(int *)(lVar18 + 0x44) == *(int *)(lVar26 + 0x44)) {
              if (lVar26 == 0) {
                FUN_140056680(&local_358,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar26 + 0x20,&local_358);
              }
              if (lVar18 == 0) {
                FUN_140056680(&local_368,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar18 + 0x20,&local_368);
              }
              puVar7 = local_358;
              if (local_350 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              puVar15 = local_368;
              if (local_360 == 0) {
                puVar15 = &DAT_149dfb77a;
              }
              lVar18 = 0;
              while( true ) {
                uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                uVar19 = (uint)uVar2;
                uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                uVar9 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369cf5d;
                  }
                  iVar20 = uVar19 - uVar9;
                  goto LAB_14369cf89;
                }
                if (uVar2 == 0) break;
LAB_14369cf5d:
                lVar18 = lVar18 + 2;
              }
              iVar20 = 0;
LAB_14369cf89:
              if (local_368 != (undefined2 *)0x0) {
                FUN_1400020a8(local_368);
              }
              if (local_358 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              uVar16 = local_3c0;
              if (-1 < iVar20) break;
              lVar18 = plVar14[iVar10];
              lVar26 = plVar14[(int)uVar4];
            }
            else if (*(int *)(lVar26 + 0x44) <= *(int *)(lVar18 + 0x44)) break;
            plVar14[iVar10] = lVar26;
            plVar14[(int)uVar4] = lVar18;
            uVar9 = uVar4 * 2 + 1;
            plVar11 = (longlong *)(ulonglong)uVar4;
          } while ((int)uVar9 < (int)uVar16);
        }
        uVar4 = (int)local_3b8 - 1;
      } while ((int)local_3b8 != 0);
      plVar11 = local_3c8;
      if (1 < (int)uVar16) {
        uVar17 = uVar16 & 0xffffffff;
        lVar18 = *plVar14;
        *plVar14 = plVar14[uVar17 - 1];
        plVar14[uVar17 - 1] = lVar18;
        if ((int)uVar16 != 2) {
          do {
            uVar17 = uVar17 - 1;
            iVar10 = 0;
            iVar21 = 1;
            local_3c0 = uVar17;
            iVar20 = 0;
            do {
              iVar10 = iVar10 + 2;
              iVar25 = iVar21;
              if ((longlong)iVar10 < (longlong)uVar17) {
                lVar18 = plVar14[iVar21];
                lVar26 = plVar14[iVar10];
                if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
                  if (lVar18 == 0) {
                    FUN_140056680(&local_358,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(lVar18 + 0x20,&local_358);
                  }
                  if (lVar26 == 0) {
                    FUN_140056680(&local_368,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(lVar26 + 0x20,&local_368);
                  }
                  puVar7 = local_358;
                  if (local_350 == 0) {
                    puVar7 = &DAT_149dfb77a;
                  }
                  puVar15 = local_368;
                  if (local_360 == 0) {
                    puVar15 = &DAT_149dfb77a;
                  }
                  lVar18 = 0;
                  while( true ) {
                    uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                    uVar9 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                    uVar4 = (uint)uVar3;
                    if (uVar2 != uVar3) {
                      if ((uVar3 | uVar2) < 0x80) {
                        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369d0f5;
                      }
                      bVar27 = (byte)(uVar9 - uVar4 >> 0x18);
                      goto LAB_14369d121;
                    }
                    if (uVar2 == 0) break;
LAB_14369d0f5:
                    lVar18 = lVar18 + 2;
                  }
                  bVar27 = 0;
LAB_14369d121:
                  if (local_368 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_368);
                  }
                  if (local_358 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  bVar23 = (bool)(bVar27 >> 7);
                  uVar17 = local_3c0;
                }
                else {
                  bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
                }
                iVar25 = iVar10;
                if (bVar23 != false) {
                  iVar25 = iVar21;
                }
              }
              lVar26 = plVar14[iVar25];
              lVar18 = plVar14[iVar20];
              if (*(int *)(lVar18 + 0x44) == *(int *)(lVar26 + 0x44)) {
                if (lVar26 == 0) {
                  FUN_140056680(&local_358,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar26 + 0x20,&local_358);
                }
                if (lVar18 == 0) {
                  FUN_140056680(&local_368,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar18 + 0x20,&local_368);
                }
                puVar7 = local_358;
                if (local_350 == 0) {
                  puVar7 = &DAT_149dfb77a;
                }
                puVar15 = local_368;
                if (local_360 == 0) {
                  puVar15 = &DAT_149dfb77a;
                }
                lVar18 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                  uVar9 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                  uVar4 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369d217;
                    }
                    iVar10 = uVar9 - uVar4;
                    goto LAB_14369d243;
                  }
                  if (uVar2 == 0) break;
LAB_14369d217:
                  lVar18 = lVar18 + 2;
                }
                iVar10 = 0;
LAB_14369d243:
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_368);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar17 = local_3c0;
                if (-1 < iVar10) break;
                lVar18 = plVar14[iVar20];
                lVar26 = plVar14[iVar25];
              }
              else if (*(int *)(lVar26 + 0x44) <= *(int *)(lVar18 + 0x44)) break;
              plVar14[iVar20] = lVar26;
              plVar14[iVar25] = lVar18;
              iVar10 = iVar25 * 2;
              iVar21 = iVar25 * 2 + 1;
              iVar20 = iVar25;
            } while ((longlong)iVar21 < (longlong)uVar17);
            lVar18 = *plVar14;
            *plVar14 = plVar14[uVar17 - 1];
            plVar14[uVar17 - 1] = lVar18;
            plVar11 = local_3c8;
          } while (2 < uVar17);
        }
      }
    }
  }
  else {
    if (8 < (int)uVar4) {
      lVar18 = plVar14[uVar4 >> 1];
      plVar14[uVar4 >> 1] = *plVar14;
      *plVar14 = lVar18;
      plVar12 = plVar1 + 1;
      plVar13 = plVar14;
      local_3b8 = plVar1;
LAB_14369ca1d:
      while (plVar13 = plVar13 + 1, plVar13 <= plVar1) {
        lVar18 = *plVar13;
        lVar26 = *plVar14;
        if (*(int *)(lVar26 + 0x44) != *(int *)(lVar18 + 0x44)) goto LAB_14369ca52;
        if (lVar18 == 0) {
          FUN_140056680(&local_358,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(lVar18 + 0x20,&local_358);
        }
        if (lVar26 == 0) {
          FUN_140056680(&local_368,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(lVar26 + 0x20,&local_368);
        }
        puVar7 = local_358;
        if (local_350 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        puVar15 = local_368;
        if (local_360 == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        lVar18 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
          uVar9 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
          uVar4 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369cae2;
            }
            iVar10 = uVar9 - uVar4;
            goto LAB_14369cb0e;
          }
          if (uVar2 == 0) break;
LAB_14369cae2:
          lVar18 = lVar18 + 2;
        }
        iVar10 = 0;
LAB_14369cb0e:
        if (local_368 != (undefined2 *)0x0) {
          FUN_1400020a8(local_368);
        }
        if (local_358 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar10 < 0) break;
      }
      goto LAB_14369cb3a;
    }
    for (; plVar11 = local_3c8, plVar13 = plVar14, plVar12 = plVar14, plVar14 < plVar1;
        plVar1 = plVar1 + -1) {
      while (plVar12 = plVar12 + 1, plVar12 <= plVar1) {
        lVar18 = *plVar12;
        lVar26 = *plVar13;
        if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
          if (lVar18 == 0) {
            FUN_140056680(&local_358,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(lVar18 + 0x20,&local_358);
          }
          if (lVar26 == 0) {
            FUN_140056680(&local_368,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(lVar26 + 0x20,&local_368);
          }
          puVar7 = local_358;
          if (local_350 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          puVar15 = local_368;
          if (local_360 == 0) {
            puVar15 = &DAT_149dfb77a;
          }
          lVar18 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
            uVar9 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
            uVar4 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369d396;
              }
              bVar27 = (byte)(uVar9 - uVar4 >> 0x18);
              goto LAB_14369d3c2;
            }
            if (uVar2 == 0) break;
LAB_14369d396:
            lVar18 = lVar18 + 2;
          }
          bVar27 = 0;
LAB_14369d3c2:
          if (local_368 != (undefined2 *)0x0) {
            FUN_1400020a8(local_368);
          }
          if (local_358 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          bVar23 = (bool)(bVar27 >> 7);
        }
        else {
          bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
        }
        if (bVar23 != false) {
          plVar13 = plVar12;
        }
      }
      lVar18 = *plVar13;
      *plVar13 = *plVar1;
      *plVar1 = lVar18;
    }
  }
  goto LAB_14369d41a;
LAB_14369c8ce:
  param_3 = (longlong *)(**(code **)(*param_3 + 0x2b0))(param_3);
  goto joined_r0x00014369c8a6;
LAB_14369ca52:
  if (*(int *)(lVar18 + 0x44) <= *(int *)(lVar26 + 0x44)) goto LAB_14369ca1d;
LAB_14369cb3a:
  do {
    while( true ) {
      plVar22 = plVar12;
      plVar12 = plVar22 + -1;
      if (plVar12 <= plVar14) goto LAB_14369cc62;
      lVar18 = *plVar14;
      lVar26 = plVar22[-1];
      if (*(int *)(lVar26 + 0x44) != *(int *)(lVar18 + 0x44)) break;
      if (lVar18 == 0) {
        FUN_140056680(&local_358,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(lVar18 + 0x20,&local_358);
      }
      if (lVar26 == 0) {
        FUN_140056680(&local_368,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(lVar26 + 0x20,&local_368);
      }
      puVar7 = local_358;
      if (local_350 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      puVar15 = local_368;
      if (local_360 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      lVar18 = 0;
      while( true ) {
        uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
        uVar9 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
        uVar4 = (uint)uVar3;
        if (uVar2 != uVar3) {
          if ((uVar3 | uVar2) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369cc03;
          }
          iVar10 = uVar9 - uVar4;
          goto LAB_14369cc2f;
        }
        if (uVar2 == 0) break;
LAB_14369cc03:
        lVar18 = lVar18 + 2;
      }
      iVar10 = 0;
LAB_14369cc2f:
      if (local_368 != (undefined2 *)0x0) {
        FUN_1400020a8(local_368);
      }
      if (local_358 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar10 < 0) goto LAB_14369cc62;
    }
  } while (*(int *)(lVar18 + 0x44) <= *(int *)(lVar26 + 0x44));
LAB_14369cc62:
  if (plVar13 <= plVar12) {
    lVar18 = *plVar13;
    *plVar13 = plVar22[-1];
    *plVar12 = lVar18;
    goto LAB_14369ca1d;
  }
  lVar18 = *plVar14;
  *plVar14 = plVar22[-1];
  *plVar12 = lVar18;
  iVar10 = (int)local_3c0 + -1;
  local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
  plVar22 = plVar22 + -2;
  if ((longlong)plVar22 - (longlong)plVar14 < (longlong)local_3b8 - (longlong)plVar13) {
    if (plVar13 < plVar1) {
      *local_3c8 = (longlong)plVar13;
      local_3c8[1] = (longlong)plVar1;
      *(int *)(local_3c8 + 2) = iVar10;
      local_3c8 = local_3c8 + 3;
    }
    plVar11 = local_3c8;
    if (plVar12 <= plVar14 + 1) goto LAB_14369d41a;
  }
  else {
    plVar11 = local_3c8;
    if (plVar14 + 1 < plVar12) {
      *local_3c8 = (longlong)plVar14;
      local_3c8[1] = (longlong)plVar22;
      *(int *)(local_3c8 + 2) = iVar10;
      plVar11 = local_3c8 + 3;
    }
    plVar14 = plVar13;
    plVar22 = plVar1;
    if (plVar1 <= plVar13) goto LAB_14369d41a;
  }
  local_3c8 = plVar11;
  iVar20 = (int)((ulonglong)((longlong)plVar22 - (longlong)plVar14) >> 3);
  plVar1 = plVar22;
  goto joined_r0x00014369c9ea;
LAB_14369d41a:
  plVar11 = plVar11 + -3;
  param_2 = local_3a8;
  param_1 = local_3b0;
  if (plVar11 < &local_348) {
LAB_14369d439:
    uVar5 = FUN_14369bd2d(param_1,param_2);
    lVar18 = local_378;
    if (0 < (int)uStack_370) {
      lVar26 = 0;
      iVar10 = (int)uStack_370;
      do {
        lVar8 = *(longlong *)(lVar18 + lVar26 * 8);
        if (0 < *(int *)(lVar8 + 0x30)) {
          iVar10 = 0;
          uVar6 = *(undefined4 *)(param_2 + 0xc);
          do {
            local_394 = uVar6;
            local_398 = *(int *)(lVar8 + 0x34) * iVar10 + *(int *)(param_2 + 8);
            local_388 = *(undefined8 *)(param_2 + 0x18);
            local_380 = 0;
            local_3a0 = lVar8;
            local_390 = uVar5;
            local_38c = iVar10;
            uVar6 = FUN_14001f44e(param_1,&local_3a0);
            *(undefined4 *)(param_2 + 0xc) = uVar6;
            iVar10 = iVar10 + 1;
            lVar8 = *(longlong *)(local_378 + lVar26 * 8);
          } while (iVar10 < *(int *)(lVar8 + 0x30));
          lVar18 = local_378;
          iVar10 = (int)uStack_370;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < iVar10);
    }
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    if (lVar18 != 0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_14369c9c7;
}



// FUNCTION 14369d508 FUN_14369d508 body=3223 status=ok
// SIG undefined FUN_14369d508(void)

undefined4 FUN_14369d508(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  longlong *plVar22;
  bool bVar23;
  uint uVar24;
  byte bVar27;
  int iVar25;
  longlong lVar26;
  float fVar28;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  ulonglong local_3c0;
  longlong *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  int local_398;
  undefined4 local_394;
  undefined4 local_390;
  int local_38c;
  undefined8 local_388;
  undefined1 local_380;
  longlong local_378;
  undefined8 uStack_370;
  undefined2 *local_368;
  int local_360;
  undefined2 *local_358;
  int local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_378 = 0;
  uStack_370 = 0;
joined_r0x00014369d53e:
  if (param_3 == (longlong *)0x0) goto LAB_14369e0d1;
  lVar18 = param_3[10];
  while( true ) {
    if (lVar18 == 0) goto LAB_14369d566;
    if ((~*(uint *)(*(longlong *)(lVar18 + 8) + 0x18) & 0x8001) == 0) break;
    lVar18 = *(longlong *)(lVar18 + 0x18);
  }
LAB_14369d584:
  if ((*(byte *)(lVar18 + 0x3b) & 0x80) == 0) {
    lVar26 = (longlong)(int)uStack_370;
    uVar4 = (int)uStack_370 + 1;
    uStack_370 = CONCAT44(uStack_370._4_4_,uVar4);
    if (uStack_370._4_4_ < uVar4) {
      FUN_140001000(&local_378);
    }
    *(longlong *)(local_378 + lVar26 * 8) = lVar18;
  }
  plVar11 = (longlong *)(lVar18 + 0x18);
  do {
    for (lVar18 = *plVar11; lVar18 != 0; lVar18 = *(longlong *)(lVar18 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar18 + 8) + 0x18) & 0x8001) == 0) goto LAB_14369d584;
    }
    param_3 = (longlong *)(**(code **)(*param_3 + 0x2b0))(param_3);
    lVar18 = local_378;
    plVar11 = param_3 + 10;
  } while (param_3 != (longlong *)0x0);
  iVar10 = (int)uStack_370;
  lVar26 = (longlong)(int)uStack_370;
  if (lVar26 < 2) goto LAB_14369e0d1;
  local_3b0 = param_1;
  local_3a8 = param_2;
  memset(local_338,0,0x2f0);
  local_348 = lVar18;
  local_340 = lVar18 + lVar26 * 8 + -8;
  fVar28 = logf((float)iVar10);
  local_338[0] = (int)(longlong)(fVar28 + fVar28);
  plVar11 = &local_348;
LAB_14369d65f:
  plVar14 = (longlong *)*plVar11;
  iVar10 = (int)plVar11[2];
  iVar20 = (int)((ulonglong)(plVar11[1] - (longlong)plVar14) >> 3);
  local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
  plVar1 = (longlong *)plVar11[1];
  local_3c8 = plVar11;
joined_r0x00014369d682:
  uVar4 = iVar20 + 1;
  uVar16 = (ulonglong)uVar4;
  if (iVar10 == 0) {
    plVar11 = local_3c8;
    if (uVar4 != 0) {
      uVar4 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
      local_3c0 = uVar16;
      do {
        plVar11 = (longlong *)(ulonglong)uVar4;
        uVar9 = uVar4 * 2 + 1;
        local_3b8 = plVar11;
        if ((int)uVar9 < (int)uVar16) {
          do {
            uVar19 = uVar4 * 2 + 2;
            uVar4 = uVar9;
            if ((int)uVar19 < (int)uVar16) {
              lVar18 = plVar14[(int)uVar9];
              lVar26 = plVar14[(int)uVar19];
              if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
                if (lVar18 == 0) {
                  FUN_140056680(&local_358,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar18 + 0x20,&local_358);
                }
                if (lVar26 == 0) {
                  FUN_140056680(&local_368,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar26 + 0x20,&local_368);
                }
                puVar7 = local_358;
                if (local_350 == 0) {
                  puVar7 = &DAT_149dfb77a;
                }
                puVar15 = local_368;
                if (local_360 == 0) {
                  puVar15 = &DAT_149dfb77a;
                }
                lVar18 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                  uVar24 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                  uVar4 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369dad3;
                    }
                    bVar27 = (byte)(uVar24 - uVar4 >> 0x18);
                    goto LAB_14369daff;
                  }
                  if (uVar2 == 0) break;
LAB_14369dad3:
                  lVar18 = lVar18 + 2;
                }
                bVar27 = 0;
LAB_14369daff:
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_368);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                bVar23 = (bool)(bVar27 >> 7);
                uVar16 = local_3c0;
              }
              else {
                bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
              }
              uVar4 = uVar19;
              if (bVar23 != false) {
                uVar4 = uVar9;
              }
            }
            iVar10 = (int)plVar11;
            lVar26 = plVar14[(int)uVar4];
            lVar18 = plVar14[iVar10];
            if (*(int *)(lVar18 + 0x44) == *(int *)(lVar26 + 0x44)) {
              if (lVar26 == 0) {
                FUN_140056680(&local_358,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar26 + 0x20,&local_358);
              }
              if (lVar18 == 0) {
                FUN_140056680(&local_368,&DAT_149e01fe8);
              }
              else {
                FUN_1400021e4(lVar18 + 0x20,&local_368);
              }
              puVar7 = local_358;
              if (local_350 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              puVar15 = local_368;
              if (local_360 == 0) {
                puVar15 = &DAT_149dfb77a;
              }
              lVar18 = 0;
              while( true ) {
                uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                uVar19 = (uint)uVar2;
                uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                uVar9 = (uint)uVar3;
                if (uVar2 != uVar3) {
                  if ((uVar3 | uVar2) < 0x80) {
                    uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369dbf5;
                  }
                  iVar20 = uVar19 - uVar9;
                  goto LAB_14369dc21;
                }
                if (uVar2 == 0) break;
LAB_14369dbf5:
                lVar18 = lVar18 + 2;
              }
              iVar20 = 0;
LAB_14369dc21:
              if (local_368 != (undefined2 *)0x0) {
                FUN_1400020a8(local_368);
              }
              if (local_358 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              uVar16 = local_3c0;
              if (-1 < iVar20) break;
              lVar18 = plVar14[iVar10];
              lVar26 = plVar14[(int)uVar4];
            }
            else if (*(int *)(lVar26 + 0x44) <= *(int *)(lVar18 + 0x44)) break;
            plVar14[iVar10] = lVar26;
            plVar14[(int)uVar4] = lVar18;
            uVar9 = uVar4 * 2 + 1;
            plVar11 = (longlong *)(ulonglong)uVar4;
          } while ((int)uVar9 < (int)uVar16);
        }
        uVar4 = (int)local_3b8 - 1;
      } while ((int)local_3b8 != 0);
      plVar11 = local_3c8;
      if (1 < (int)uVar16) {
        uVar17 = uVar16 & 0xffffffff;
        lVar18 = *plVar14;
        *plVar14 = plVar14[uVar17 - 1];
        plVar14[uVar17 - 1] = lVar18;
        if ((int)uVar16 != 2) {
          do {
            uVar17 = uVar17 - 1;
            iVar10 = 0;
            iVar21 = 1;
            local_3c0 = uVar17;
            iVar20 = 0;
            do {
              iVar10 = iVar10 + 2;
              iVar25 = iVar21;
              if ((longlong)iVar10 < (longlong)uVar17) {
                lVar18 = plVar14[iVar21];
                lVar26 = plVar14[iVar10];
                if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
                  if (lVar18 == 0) {
                    FUN_140056680(&local_358,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(lVar18 + 0x20,&local_358);
                  }
                  if (lVar26 == 0) {
                    FUN_140056680(&local_368,&DAT_149e01fe8);
                  }
                  else {
                    FUN_1400021e4(lVar26 + 0x20,&local_368);
                  }
                  puVar7 = local_358;
                  if (local_350 == 0) {
                    puVar7 = &DAT_149dfb77a;
                  }
                  puVar15 = local_368;
                  if (local_360 == 0) {
                    puVar15 = &DAT_149dfb77a;
                  }
                  lVar18 = 0;
                  while( true ) {
                    uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                    uVar9 = (uint)uVar2;
                    uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                    uVar4 = (uint)uVar3;
                    if (uVar2 != uVar3) {
                      if ((uVar3 | uVar2) < 0x80) {
                        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369dd8d;
                      }
                      bVar27 = (byte)(uVar9 - uVar4 >> 0x18);
                      goto LAB_14369ddb9;
                    }
                    if (uVar2 == 0) break;
LAB_14369dd8d:
                    lVar18 = lVar18 + 2;
                  }
                  bVar27 = 0;
LAB_14369ddb9:
                  if (local_368 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_368);
                  }
                  if (local_358 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  bVar23 = (bool)(bVar27 >> 7);
                  uVar17 = local_3c0;
                }
                else {
                  bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
                }
                iVar25 = iVar10;
                if (bVar23 != false) {
                  iVar25 = iVar21;
                }
              }
              lVar26 = plVar14[iVar25];
              lVar18 = plVar14[iVar20];
              if (*(int *)(lVar18 + 0x44) == *(int *)(lVar26 + 0x44)) {
                if (lVar26 == 0) {
                  FUN_140056680(&local_358,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar26 + 0x20,&local_358);
                }
                if (lVar18 == 0) {
                  FUN_140056680(&local_368,&DAT_149e01fe8);
                }
                else {
                  FUN_1400021e4(lVar18 + 0x20,&local_368);
                }
                puVar7 = local_358;
                if (local_350 == 0) {
                  puVar7 = &DAT_149dfb77a;
                }
                puVar15 = local_368;
                if (local_360 == 0) {
                  puVar15 = &DAT_149dfb77a;
                }
                lVar18 = 0;
                while( true ) {
                  uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
                  uVar9 = (uint)uVar2;
                  uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
                  uVar4 = (uint)uVar3;
                  if (uVar2 != uVar3) {
                    if ((uVar3 | uVar2) < 0x80) {
                      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369deaf;
                    }
                    iVar10 = uVar9 - uVar4;
                    goto LAB_14369dedb;
                  }
                  if (uVar2 == 0) break;
LAB_14369deaf:
                  lVar18 = lVar18 + 2;
                }
                iVar10 = 0;
LAB_14369dedb:
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_368);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar17 = local_3c0;
                if (-1 < iVar10) break;
                lVar18 = plVar14[iVar20];
                lVar26 = plVar14[iVar25];
              }
              else if (*(int *)(lVar26 + 0x44) <= *(int *)(lVar18 + 0x44)) break;
              plVar14[iVar20] = lVar26;
              plVar14[iVar25] = lVar18;
              iVar10 = iVar25 * 2;
              iVar21 = iVar25 * 2 + 1;
              iVar20 = iVar25;
            } while ((longlong)iVar21 < (longlong)uVar17);
            lVar18 = *plVar14;
            *plVar14 = plVar14[uVar17 - 1];
            plVar14[uVar17 - 1] = lVar18;
            plVar11 = local_3c8;
          } while (2 < uVar17);
        }
      }
    }
  }
  else {
    if (8 < (int)uVar4) {
      lVar18 = plVar14[uVar4 >> 1];
      plVar14[uVar4 >> 1] = *plVar14;
      *plVar14 = lVar18;
      plVar12 = plVar1 + 1;
      plVar13 = plVar14;
      local_3b8 = plVar1;
LAB_14369d6b5:
      while (plVar13 = plVar13 + 1, plVar13 <= plVar1) {
        lVar18 = *plVar13;
        lVar26 = *plVar14;
        if (*(int *)(lVar26 + 0x44) != *(int *)(lVar18 + 0x44)) goto LAB_14369d6ea;
        if (lVar18 == 0) {
          FUN_140056680(&local_358,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(lVar18 + 0x20,&local_358);
        }
        if (lVar26 == 0) {
          FUN_140056680(&local_368,&DAT_149e01fe8);
        }
        else {
          FUN_1400021e4(lVar26 + 0x20,&local_368);
        }
        puVar7 = local_358;
        if (local_350 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        puVar15 = local_368;
        if (local_360 == 0) {
          puVar15 = &DAT_149dfb77a;
        }
        lVar18 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
          uVar9 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
          uVar4 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369d77a;
            }
            iVar10 = uVar9 - uVar4;
            goto LAB_14369d7a6;
          }
          if (uVar2 == 0) break;
LAB_14369d77a:
          lVar18 = lVar18 + 2;
        }
        iVar10 = 0;
LAB_14369d7a6:
        if (local_368 != (undefined2 *)0x0) {
          FUN_1400020a8(local_368);
        }
        if (local_358 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar10 < 0) break;
      }
      goto LAB_14369d7d2;
    }
    for (; plVar11 = local_3c8, plVar13 = plVar14, plVar12 = plVar14, plVar14 < plVar1;
        plVar1 = plVar1 + -1) {
      while (plVar12 = plVar12 + 1, plVar12 <= plVar1) {
        lVar18 = *plVar12;
        lVar26 = *plVar13;
        if (*(int *)(lVar26 + 0x44) == *(int *)(lVar18 + 0x44)) {
          if (lVar18 == 0) {
            FUN_140056680(&local_358,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(lVar18 + 0x20,&local_358);
          }
          if (lVar26 == 0) {
            FUN_140056680(&local_368,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(lVar26 + 0x20,&local_368);
          }
          puVar7 = local_358;
          if (local_350 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          puVar15 = local_368;
          if (local_360 == 0) {
            puVar15 = &DAT_149dfb77a;
          }
          lVar18 = 0;
          while( true ) {
            uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
            uVar9 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
            uVar4 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369e02e;
              }
              bVar27 = (byte)(uVar9 - uVar4 >> 0x18);
              goto LAB_14369e05a;
            }
            if (uVar2 == 0) break;
LAB_14369e02e:
            lVar18 = lVar18 + 2;
          }
          bVar27 = 0;
LAB_14369e05a:
          if (local_368 != (undefined2 *)0x0) {
            FUN_1400020a8(local_368);
          }
          if (local_358 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          bVar23 = (bool)(bVar27 >> 7);
        }
        else {
          bVar23 = *(int *)(lVar26 + 0x44) < *(int *)(lVar18 + 0x44);
        }
        if (bVar23 != false) {
          plVar13 = plVar12;
        }
      }
      lVar18 = *plVar13;
      *plVar13 = *plVar1;
      *plVar1 = lVar18;
    }
  }
  goto LAB_14369e0b2;
LAB_14369d566:
  param_3 = (longlong *)(**(code **)(*param_3 + 0x2b0))(param_3);
  goto joined_r0x00014369d53e;
LAB_14369d6ea:
  if (*(int *)(lVar18 + 0x44) <= *(int *)(lVar26 + 0x44)) goto LAB_14369d6b5;
LAB_14369d7d2:
  do {
    while( true ) {
      plVar22 = plVar12;
      plVar12 = plVar22 + -1;
      if (plVar12 <= plVar14) goto LAB_14369d8fa;
      lVar18 = *plVar14;
      lVar26 = plVar22[-1];
      if (*(int *)(lVar26 + 0x44) != *(int *)(lVar18 + 0x44)) break;
      if (lVar18 == 0) {
        FUN_140056680(&local_358,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(lVar18 + 0x20,&local_358);
      }
      if (lVar26 == 0) {
        FUN_140056680(&local_368,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(lVar26 + 0x20,&local_368);
      }
      puVar7 = local_358;
      if (local_350 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      puVar15 = local_368;
      if (local_360 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      lVar18 = 0;
      while( true ) {
        uVar2 = *(ushort *)((longlong)puVar15 + lVar18);
        uVar9 = (uint)uVar2;
        uVar3 = *(ushort *)((longlong)puVar7 + lVar18);
        uVar4 = (uint)uVar3;
        if (uVar2 != uVar3) {
          if ((uVar3 | uVar2) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_14369d89b;
          }
          iVar10 = uVar9 - uVar4;
          goto LAB_14369d8c7;
        }
        if (uVar2 == 0) break;
LAB_14369d89b:
        lVar18 = lVar18 + 2;
      }
      iVar10 = 0;
LAB_14369d8c7:
      if (local_368 != (undefined2 *)0x0) {
        FUN_1400020a8(local_368);
      }
      if (local_358 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar10 < 0) goto LAB_14369d8fa;
    }
  } while (*(int *)(lVar18 + 0x44) <= *(int *)(lVar26 + 0x44));
LAB_14369d8fa:
  if (plVar13 <= plVar12) {
    lVar18 = *plVar13;
    *plVar13 = plVar22[-1];
    *plVar12 = lVar18;
    goto LAB_14369d6b5;
  }
  lVar18 = *plVar14;
  *plVar14 = plVar22[-1];
  *plVar12 = lVar18;
  iVar10 = (int)local_3c0 + -1;
  local_3c0 = CONCAT44(local_3c0._4_4_,iVar10);
  plVar22 = plVar22 + -2;
  if ((longlong)plVar22 - (longlong)plVar14 < (longlong)local_3b8 - (longlong)plVar13) {
    if (plVar13 < plVar1) {
      *local_3c8 = (longlong)plVar13;
      local_3c8[1] = (longlong)plVar1;
      *(int *)(local_3c8 + 2) = iVar10;
      local_3c8 = local_3c8 + 3;
    }
    plVar11 = local_3c8;
    if (plVar12 <= plVar14 + 1) goto LAB_14369e0b2;
  }
  else {
    plVar11 = local_3c8;
    if (plVar14 + 1 < plVar12) {
      *local_3c8 = (longlong)plVar14;
      local_3c8[1] = (longlong)plVar22;
      *(int *)(local_3c8 + 2) = iVar10;
      plVar11 = local_3c8 + 3;
    }
    plVar14 = plVar13;
    plVar22 = plVar1;
    if (plVar1 <= plVar13) goto LAB_14369e0b2;
  }
  local_3c8 = plVar11;
  iVar20 = (int)((ulonglong)((longlong)plVar22 - (longlong)plVar14) >> 3);
  plVar1 = plVar22;
  goto joined_r0x00014369d682;
LAB_14369e0b2:
  plVar11 = plVar11 + -3;
  param_2 = local_3a8;
  param_1 = local_3b0;
  if (plVar11 < &local_348) {
LAB_14369e0d1:
    uVar5 = FUN_14369bd2d(param_1,param_2);
    lVar18 = local_378;
    if (0 < (int)uStack_370) {
      lVar26 = 0;
      iVar10 = (int)uStack_370;
      do {
        lVar8 = *(longlong *)(lVar18 + lVar26 * 8);
        if (0 < *(int *)(lVar8 + 0x30)) {
          iVar10 = 0;
          uVar6 = *(undefined4 *)(param_2 + 0xc);
          do {
            local_394 = uVar6;
            local_398 = *(int *)(lVar8 + 0x34) * iVar10 + *(int *)(param_2 + 8);
            local_388 = *(undefined8 *)(param_2 + 0x18);
            local_380 = 0;
            local_3a0 = lVar8;
            local_390 = uVar5;
            local_38c = iVar10;
            uVar6 = FUN_1436923fc(param_1,&local_3a0);
            *(undefined4 *)(param_2 + 0xc) = uVar6;
            iVar10 = iVar10 + 1;
            lVar8 = *(longlong *)(local_378 + lVar26 * 8);
          } while (iVar10 < *(int *)(lVar8 + 0x30));
          lVar18 = local_378;
          iVar10 = (int)uStack_370;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < iVar10);
    }
    uVar5 = *(undefined4 *)(param_2 + 0xc);
    if (lVar18 != 0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_14369d65f;
}



// FUNCTION 14369e1a0 FUN_14369e1a0 body=2280 status=ok
// SIG undefined FUN_14369e1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14369e1a0(void)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  code *pcStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cb01408);
  if (cVar1 == '\0') {
    _DAT_14cb01408 = 0;
    uRam000000014cb01410 = 0;
  }
  if (local_78 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  uStack_88 = 1;
  ppuStack_90 = &PTR_FUN_14aa69bf0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa69c40,1,&PTR_FUN_14aa69c10);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,0x40);
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb01460,L"r.Substrate.SpecularProfile.Resolution",&local_78,
                L"The resolution of the specular profile texture.\n");
  atexit(FUN_143680fef);
  pcStack_70 = FUN_145e9aefa;
  local_78 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb01590,&local_78);
  pcStack_70 = FUN_145f0ccfa;
  local_78 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb016b8,&local_78);
  FUN_14599ec66();
  DAT_14cb016c8 = &PTR_FUN_14aa6e260;
  FUN_1463fdb70();
  atexit(FUN_14368104c);
  DAT_14cb016e8 = 0;
  atexit((_func_5014 *)&LAB_14368107b);
  DAT_14cb016f0 = 0;
  _DAT_14cb016f8 = 0;
  _DAT_14cb01700 = 2;
  atexit(FUN_143681d9c);
  DAT_14cb01708 = 0;
  _DAT_14cb01710 = 0;
  _DAT_14cb01718 = 2;
  atexit(FUN_143681dcd);
  DAT_14cb01720 = 0;
  _DAT_14cb01728 = 0;
  _DAT_14cb01730 = 2;
  atexit(FUN_143681dfe);
  DAT_14cb01738 = 0;
  _DAT_14cb01740 = 0;
  _DAT_14cb01748 = 2;
  atexit(FUN_143681e2f);
  DAT_14cb01750 = 0;
  _DAT_14cb01758 = 0;
  _DAT_14cb01760 = 2;
  atexit(FUN_143681e60);
  DAT_14cb01768 = 0;
  _DAT_14cb01770 = 0;
  _DAT_14cb01778 = 2;
  atexit(FUN_143681e91);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb01780);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb01780,4000);
  DAT_14cb017a8 = 0;
  _DAT_14cb017b0 = 0;
  _DAT_14cb017b8 = 2;
  atexit(FUN_143681ec2);
  DAT_14cb017c0 = 0;
  _DAT_14cb017c8 = 0;
  _DAT_14cb017d0 = 2;
  atexit(FUN_143681efd);
  local_78._0_4_ = 1;
  local_98 = CONCAT44(local_98._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb017d8,L"r.VirtualTexture",&local_78,
                L"If set to 1, textures will use virtual memory so they can be partially resident.")
  ;
  atexit(FUN_1436828d0);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa6ab10,1,&PTR_FUN_14aa6aae0);
  local_78._0_4_ = 0x40;
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb01830,L"r.SSProfilesPreIntegratedTextureResolution",&local_78,
                L"The resolution of the subsurface profile preintegrated texture.\n");
  atexit(FUN_143682915);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
  local_98._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb01848,L"r.SSProfilesSamplingChannelSelection",&local_78,
                L"0. Select the sampling channel based on max DMFP.\n1. based on max MFP.");
  atexit(FUN_14368295a);
  FUN_145ec7b04();
  DAT_14cb026a8 = &PTR_FUN_14aa6e620;
  FUN_1463fdbfa();
  atexit((_func_5014 *)&LAB_14368299f);
  DAT_14cb01860 = 0;
  atexit((_func_5014 *)&LAB_1436829ab);
  DAT_14cb01868 = 0;
  atexit((_func_5014 *)&LAB_1436829bf);
  pcStack_70 = FUN_145f0d2e8;
  local_78 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb01988,&local_78);
  DAT_14cb019a8 = 0x800000014aa6b1f2;
  local_78._0_4_ = 0x12;
  DAT_14cb019b0 = FUN_14577453c(L"FTexture2DResource",&local_78);
  DAT_14cb019b4 = 1;
  local_78 = (undefined *)((ulonglong)local_78._4_4_ << 0x20);
  local_98 = CONCAT44(local_98._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb019b8,L"r.ForceHighestMipOnUITextures",&local_78,
                L"If set to 1, texutres in the UI Group will have their highest mip level forced.");
  atexit(FUN_143683927);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa6bb00,1,0);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb01a18,L"net.DoPropertyChecksum",&DAT_14cb01a10,
                L"When true and ENABLE_PROPERTY_CHECKSUMS is defined, checksums of replicated properties are compared on client and server"
               );
  atexit(FUN_14368c3fa);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb01a30,L"net.ContextDebug",&DAT_14cb01a28,
                L"Debugging option to set a context string during replication");
  atexit(FUN_14368c43f);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb01a40,L"net.ShareSerializedData",&DAT_14c7619e0,
                L"If true, enable shared serialization system used by replication to reduce CPU usage when multiple clients need the same data"
               );
  atexit(FUN_14368c484);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb01a58,L"net.VerifyShareSerializedData",&DAT_14cb01a50,
                L"Debug option to verify shared serialization data during replication");
  atexit(FUN_14368c4c9);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14627302a(&DAT_14cb01a68,L"Net.LogSkippedRepNotifies",0,
                L"Log when the networking code skips calling a repnotify clientside due to the property value not changing."
               );
  atexit(FUN_14368c50e);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb01a78,L"Net.UsePackedShadowBuffers",&DAT_14c7619e4,
                L"When enabled, FRepLayout will generate shadow buffers that are packed with only the necessary NetProperties, instead of copying entire object state."
               );
  atexit(FUN_14368c553);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb01a88,L"net.ShareShadowState",&DAT_14c7619e8,
                L"If true, work done to compare properties will be shared across connections");
  atexit(FUN_14368c598);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb01aa0,L"net.ShareInitialCompareState",&DAT_14cb01a98,
                L"If true and net.ShareShadowState is enabled, attempt to also share initial replication compares across connections."
               );
  atexit(FUN_14368c5dd);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb01ab8,L"net.TrackNetSerializeObjectReferences",&DAT_14cb01ab0,
                L"If true, we will create small layouts for Net Serialize Structs if they have Object Properties. This can prevent some Shadow State GC crashes."
               );
  atexit(FUN_14368c622);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb01ad0,L"net.WithArrayOnRepFix",&DAT_14cb01ac8,
                L"If true, attempt to prevent issues with Arrays not receiving OnRep calls until their size changes if their Archetypes have different values from instances in levels."
               );
  atexit(FUN_14368c667);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb01ae0,L"net.DeltaInitialFastArrayElements",&DAT_14cb01af0,
                L"If true, send delta struct changelists for initial fast array elements.");
  atexit(FUN_14368c6ac);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb01af8,L"net.ReplicateCustomDeltaPropertiesInRepIndexOrder",&DAT_14cb01b08,
                L"If false (default) custom delta properties will replicate in the same order as they\'re added to the lifetime property array during the call to GetLifetimeReplicatedProps. If true custom delta properties will be replicated in the property RepIndex order, which is typically in increasing property offset order. Note that custom delta properties are always serialized after regular properties."
               );
  atexit(FUN_14368c6f1);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb01b10,L"net.AlwaysUpdateGuidReferenceMapForNetSerializeObjectStruct",
                &DAT_14cb01b20,
                L"Requires net.TrackNetSerializeObjectReferences. If true, entries in the GuidReferenceMap for NetSerialize struct properties with object properties will always be updated, not just when the Guid changes or goes NULL. This should prevent issues with old property data being applied when an unmapped actor ref in the struct is mapped."
               );
  atexit(FUN_14368c736);
  FUN_1446f470e(&DAT_14cb01b70,L"Vector_NetQuantize100",1);
  FUN_1446f470e(&DAT_14cb01b78,L"Vector_NetQuantize10",1);
  FUN_1446f470e(&DAT_14cb01b80,L"Vector_NetQuantizeNormal",1);
  FUN_1446f470e(&DAT_14cb01b88,L"Vector_NetQuantize",1);
  FUN_1446f470e(&DAT_14cb01b90,L"UniqueNetIdRepl",1);
  FUN_1446f470e(&DAT_14cb01b98,L"RepMovement",1);
  uStack_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aa6d690,1,0);
  local_78 = (undefined *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cb01ca0,L"Replay.UseReplayConnection",&local_78);
  atexit(FUN_143695fc5);
  local_78 = (undefined *)0xbbc043ec8417998a;
  pcStack_70 = (code *)0x72d272281b3d119;
  _DAT_14cb01cb8 = 0x8417998a;
  uRam000000014cb01cbc = 0xbbc043ec;
  uRam000000014cb01cc0 = 0x81b3d119;
  uRam000000014cb01cc4 = 0x72d2722;
  FUN_141005458(&local_78,0x13,L"Replay",0);
  atexit((_func_5014 *)&LAB_143696e47);
  ppuStack_90 = (undefined **)0x0;
  uStack_88 = 0;
  local_98 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14aa6d810);
  _DAT_14cb01d68 = 0x2000000000;
  _DAT_14cb01d70 = &LAB_143696e60;
  _DAT_14cb01d78 = &LAB_1436970c2;
  _DAT_14cb01d80 = FUN_143697378;
  _DAT_14cb01d88 = FUN_143697700;
  _DAT_14cb01d90 = FUN_147ce2bde;
  _DAT_14cb01d98 = FUN_147ce2e5e;
  _DAT_14cb01da0 = FUN_147ce30de;
  _DAT_14cb01da8 = FUN_147ce31d2;
  _DAT_14cb01db0 = 0;
  uRam000000014cb01db8 = 0;
  _DAT_14cb01dc0 = 0;
  _DAT_14cb01dc8 = &LAB_147ce32a0;
  _DAT_14cb01dd0 = &DAT_14cb01ce0;
  _DAT_14cb01dd8 = 0x8001000080098;
  _DAT_14cb01de0 = L"FRepMovementNetSerializer";
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14369ea8e FUN_14369ea8e body=497 status=ok
// SIG undefined FUN_14369ea8e(void)

undefined4 FUN_14369ea8e(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_14369ec80();
  if ((char)uVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 1;
    if (param_3 == 0) {
      lVar4 = FUN_147cec4de(DAT_14c951640);
      *(longlong *)(param_1 + 0x28) = lVar4;
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_1447f71cc(lVar4,0x40000000);
    }
    else {
      *(longlong *)(param_1 + 0x28) = param_3;
      iVar2 = DAT_14c9647dc;
      uVar1 = *(uint *)(param_3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      *(byte *)(param_1 + 0x48) = (byte)((uint)*(undefined4 *)(lVar4 + 8) >> 0x1e) & 1;
      uVar1 = *(uint *)(param_3 + 0xc);
      if ((int)uVar1 < iVar2) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      FUN_1447f71cc(lVar4,0x40000000);
      if (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0) {
        FUN_147973608(*(longlong *)(DAT_14cb0d2b0 + 0xf50),*(undefined8 *)(param_1 + 0x28),0);
      }
    }
    FUN_147034d54(param_1,param_2);
    if (2 < *(int *)(param_1 + 0x18)) {
      FUN_147cec58e(param_1,2);
    }
    plVar5 = (longlong *)FUN_14001cc68(0xd0,0x10);
    local_31 = 1;
    local_40 = param_1;
    FUN_14369ece4(plVar5,&local_40,&local_31,param_4);
    plVar6 = *(longlong **)(param_1 + 0x50);
    plVar7 = plVar6;
    if ((plVar6 != plVar5) &&
       (*(longlong **)(param_1 + 0x50) = plVar5, plVar7 = plVar5, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x28))(plVar6,1);
      plVar7 = *(longlong **)(param_1 + 0x50);
    }
    local_48 = 0;
    local_50 = 0xffffffffffffffff;
    local_58 = 0;
    FUN_1402a8900(plVar7,0,DAT_14c8442c0,3);
  }
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14369ec80 FUN_14369ec80 body=100 status=ok
// SIG undefined FUN_14369ec80(void)

ulonglong FUN_14369ec80(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x10) == 0) {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                  (*(longlong **)(lVar1 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  uVar2 = 0;
  if ((*(byte *)(param_1 + 0x30) < 6) && ((0x39U >> (*(byte *)(param_1 + 0x30) & 0x1f) & 1) != 0)) {
    uVar2 = uVar3 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 14369ece4 FUN_14369ece4 body=188 status=ok
// SIG undefined FUN_14369ece4(void)

undefined8 *
FUN_14369ece4(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149e06640;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 3;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14aa810a0;
  local_68[0] = *param_4;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
    (**(code **)*plVar1)(plVar1,local_58);
  }
  FUN_147cec7f4(param_1 + 10,*param_2,*param_3,local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14369eda2 FUN_14369eda2 body=1236 status=ok
// SIG undefined FUN_14369eda2(void)

undefined4
FUN_14369eda2(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  void **ppvVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  int local_64;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar5 = FUN_1401aeb9c(param_4);
  if (cVar5 == '\0') {
    puVar8 = (undefined8 *)(param_1 + 0x38);
    if (puVar8 != param_4) {
      iVar2 = *(int *)(param_4 + 1);
      pvVar4 = (void *)*param_4;
      *(int *)(param_1 + 0x40) = iVar2;
      if (iVar2 == 0 && *(int *)(param_1 + 0x44) == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      else {
        FUN_1446dd670(puVar8,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*puVar8,pvVar4,(longlong)iVar2 * 2);
        }
      }
    }
  }
  else {
    puVar8 = (undefined8 *)FUN_14047ac8c();
    iVar2 = *(int *)(puVar8 + 1);
    lVar11 = (longlong)iVar2;
    local_60 = (void *)0x0;
    pvVar4 = (void *)*puVar8;
    local_58 = CONCAT44(local_58._4_4_,iVar2);
    FUN_1446dd670(&local_60,(uint)(lVar11 == 0) + iVar2 + 0x10,0);
    if (lVar11 != 0) {
      memcpy(local_60,pvVar4,lVar11 * 2);
    }
    FUN_1400020e8(&local_60,L"BouncedWavFiles/",0x10);
    iVar2 = (int)local_58;
    if ((int)local_58 < 2) {
      local_50 = (void *)0x0;
      uVar3 = *(uint *)(param_4 + 1);
      pvVar4 = (void *)*param_4;
      local_48 = CONCAT44(local_48._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        local_48 = (ulonglong)uVar3;
      }
      else {
        FUN_1446dd670(&local_50,uVar3,0);
        memcpy(local_50,pvVar4,(longlong)(int)uVar3 * 2);
      }
    }
    else {
      iVar10 = *(int *)(param_4 + 1) + -1;
      if (*(int *)(param_4 + 1) == 0) {
        iVar10 = 0;
      }
      local_50 = local_60;
      local_60 = (void *)0x0;
      iVar9 = local_58._4_4_;
      local_48 = local_58;
      local_58 = 0;
      iVar7 = iVar10 + iVar2;
      if (iVar7 < iVar2) goto LAB_14369f1bf;
      if (iVar9 < iVar7) {
        FUN_1446f8c06(&local_50);
      }
      FUN_1400020e8(&local_50,*param_4,iVar10);
    }
    ppvVar1 = (void **)(param_1 + 0x38);
    if (ppvVar1 == &local_50) {
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0x38) = local_50;
      local_50 = (void *)0x0;
      *(undefined4 *)(param_1 + 0x40) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x44) = local_48._4_4_;
      local_48 = 0;
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401aea18(&local_50,ppvVar1);
    if (ppvVar1 == &local_50) {
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0x38) = local_50;
      local_50 = (void *)0x0;
      *(undefined4 *)(param_1 + 0x40) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x44) = local_48._4_4_;
    }
  }
  ppvVar1 = (void **)(param_1 + 0x38);
  FUN_140e4328c(ppvVar1);
  FUN_1448b5552(ppvVar1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  uVar6 = FUN_147cec69a(ppvVar1);
  if ((char)uVar6 == '\0') {
    *(undefined1 *)(param_1 + 0x30) = 4;
  }
  else {
    local_68 = *(int *)(param_1 + 0x40);
    lVar11 = (longlong)local_68;
    local_70 = (void *)0x0;
    pvVar4 = *(void **)(param_1 + 0x38);
    FUN_1446dd670(&local_70,(uint)(lVar11 == 0) + local_68 + 1,0);
    if (lVar11 != 0) {
      memcpy(local_70,pvVar4,lVar11 * 2);
    }
    FUN_1400020e8(&local_70,&DAT_149e065c6,1);
    iVar7 = local_64;
    iVar2 = local_68;
    if (local_68 < 2) {
      local_60 = (void *)0x0;
      uVar3 = *(uint *)(param_3 + 1);
      pvVar4 = (void *)*param_3;
      local_58 = CONCAT44(local_58._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        local_58 = (ulonglong)uVar3;
      }
      else {
        FUN_1446dd670(&local_60,uVar3,0);
        memcpy(local_60,pvVar4,(longlong)(int)uVar3 * 2);
      }
    }
    else {
      iVar10 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        iVar10 = 0;
      }
      local_60 = local_70;
      local_70 = (void *)0x0;
      local_58 = CONCAT44(local_64,local_68);
      local_68 = 0;
      local_64 = 0;
      iVar9 = iVar10 + iVar2;
      if (iVar9 < iVar2) {
LAB_14369f1bf:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar10);
      }
      if (iVar7 < iVar9) {
        FUN_1446f8c06(&local_60);
      }
      FUN_1400020e8(&local_60,*param_3,iVar10);
    }
    iVar2 = (int)local_58;
    iVar7 = ((int)local_58 == 0) + 4;
    local_50 = local_60;
    local_60 = (void *)0x0;
    iVar10 = local_58._4_4_;
    local_48 = local_58;
    local_58 = 0;
    iVar9 = iVar7 + iVar2;
    if (iVar9 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar10 < iVar9) {
      FUN_1446f8c06(&local_50);
    }
    FUN_1400020e8(&local_50,L".wav",4);
    if (ppvVar1 == &local_50) {
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(void **)(param_1 + 0x38) = local_50;
      local_50 = (void *)0x0;
      *(undefined4 *)(param_1 + 0x40) = (undefined4)local_48;
      *(undefined4 *)(param_1 + 0x44) = local_48._4_4_;
      local_48 = 0;
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_147034d54(param_1,param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14369f278 FUN_14369f278 body=488 status=ok
// SIG undefined FUN_14369f278(void)

ulonglong FUN_14369f278(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       longlong *param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b9;
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_14369ec80();
  if ((cVar1 == '\0') || (cVar1 = FUN_14369eda2(param_1,param_2,param_3,param_4), cVar1 == '\0')) {
    uVar5 = 0;
  }
  else {
    local_b8[0] = *param_5;
    local_a8[0] = 0;
    if (local_b8[0] != 0) {
      plVar3 = param_5 + 4;
      if ((longlong *)param_5[2] != (longlong *)0x0) {
        plVar3 = (longlong *)param_5[2];
      }
      (**(code **)*plVar3)(plVar3,local_a8);
    }
    local_78[0] = (code *)0x0;
    local_68 = (longlong *)FUN_14001cc68(0x50,0x10);
    *local_68 = (longlong)&PTR_FUN_14aa810e0;
    local_68[2] = local_b8[0];
    local_68[4] = local_a8[0];
    *(undefined4 *)(local_68 + 8) = local_88;
    *(undefined4 *)((longlong)local_68 + 0x44) = uStack_84;
    *(undefined4 *)(local_68 + 9) = uStack_80;
    *(undefined4 *)((longlong)local_68 + 0x4c) = uStack_7c;
    *(undefined4 *)(local_68 + 6) = local_98;
    *(undefined4 *)((longlong)local_68 + 0x34) = uStack_94;
    *(undefined4 *)(local_68 + 7) = uStack_90;
    *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_8c;
    if (local_68 + 2 != (longlong *)0x0) {
      local_78[0] = FUN_1436a8726;
    }
    plVar2 = (longlong *)FUN_14001cc68(0xd0,0x10);
    local_b9 = 3;
    local_b8[0] = param_1;
    FUN_14369ece4(plVar2,local_b8,&local_b9,local_78);
    plVar3 = *(longlong **)(param_1 + 0x50);
    plVar4 = plVar3;
    if ((plVar3 != plVar2) &&
       (*(longlong **)(param_1 + 0x50) = plVar2, plVar4 = plVar2, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
      plVar4 = *(longlong **)(param_1 + 0x50);
    }
    local_c8 = 0;
    local_d0 = 0xffffffffffffffff;
    local_d8 = 0;
    FUN_1402a8900(plVar4,0,DAT_14c8442c0,3);
    if (local_78[0] != (code *)0x0) {
      plVar3 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar3 = local_58;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  if (*param_5 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14369f462 FUN_14369f462 body=355 status=ok
// SIG undefined FUN_14369f462(void)

undefined8 FUN_14369f462(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_14369ec80();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar3 = FUN_147cec4de(DAT_14c951640);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    FUN_147034d54(param_1,param_2);
    if (2 < *(int *)(param_1 + 0x18)) {
      FUN_147cec58e(param_1,2);
    }
    plVar4 = (longlong *)FUN_14001cc68(0xd0,0x10);
    plVar4[1] = 0;
    *plVar4 = (longlong)&PTR_FUN_149e06640;
    *(undefined4 *)(plVar4 + 2) = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    *(undefined2 *)(plVar4 + 5) = 3;
    plVar4[6] = -1;
    plVar4[7] = 0;
    *plVar4 = (longlong)&PTR_FUN_14aa810a0;
    local_58 = 0;
    local_48 = &PTR_LAB_14aa81100;
    local_40 = &DAT_1436a8828;
    local_68 = &LAB_147d0ad86;
    FUN_147cec7f4(plVar4 + 10,param_1,0);
    plVar1 = *(longlong **)(param_1 + 0x50);
    plVar5 = plVar1;
    if ((plVar1 != plVar4) &&
       (*(longlong **)(param_1 + 0x50) = plVar4, plVar5 = plVar4, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
      plVar5 = *(longlong **)(param_1 + 0x50);
    }
    plVar5[6] = -1;
    plVar5[7] = 0;
    LOCK();
    *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
    UNLOCK();
    *(undefined2 *)(plVar5 + 5) = 3;
    plVar5[4] = 0;
    FUN_14018802a(plVar5[3]);
    plVar5[3] = 0;
    (**(code **)(*plVar5 + 0x30))(plVar5);
    LOCK();
    *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    UNLOCK();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14369f5c6 FUN_14369f5c6 body=125 status=ok
// SIG undefined FUN_14369f5c6(void)

void FUN_14369f5c6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 == 0) goto LAB_14369f638;
  plVar1 = *(longlong **)(lVar3 + 0x20);
  if (plVar1 == (longlong *)0x0) {
LAB_14369f60f:
    FUN_140187fa0(lVar3,1,0);
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,lVar3);
    if (cVar2 == '\0') {
      lVar3 = *(longlong *)(param_1 + 0x50);
      goto LAB_14369f60f;
    }
    LOCK();
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
    UNLOCK();
    if (*(longlong **)(lVar3 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x10))();
    }
    *(undefined8 *)(lVar3 + 0x20) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
LAB_14369f638:
  *(undefined1 *)(param_1 + 0x30) = 5;
  return;
}



// FUNCTION 14369f644 FUN_14369f644 body=315 status=ok
// SIG undefined FUN_14369f644(void)

void FUN_14369f644(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong *local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_1 + 6) = 1;
  iVar5 = *(int *)(param_1 + 2);
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 6) = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) < 0) {
      FUN_144893a1c(param_1 + 0xb,0);
      iVar5 = *(int *)(param_1 + 2);
    }
    local_68 = *(undefined4 *)((longlong)param_1 + 0x1c);
    FUN_14795cdc6(param_1 + 0xb,*param_1,iVar5 * 2,*(undefined4 *)(param_1 + 3));
    FUN_1467fe714(&local_60,param_1[0xb],(longlong)*(int *)(param_1 + 0xc));
    local_30 = param_1[5];
    local_48 = 0;
    local_38 = &PTR_LAB_14aa81120;
    local_58 = FUN_1436a882a;
    FUN_1407461b0(1);
    *(undefined1 *)(param_1 + 6) = 3;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 3;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar3 & 0x3fffffff) == 1) {
        (**(code **)(*local_60 + 0x10))(local_60);
        local_60[1] = 0;
        local_60[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(local_60 + 3);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*local_60)(local_60,1);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14369f780 FUN_14369f780 body=424 status=ok
// SIG undefined FUN_14369f780(void)

void FUN_14369f780(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  
  *(undefined1 *)(param_1 + 6) = 1;
  iVar9 = (int)param_1[2];
  uVar8 = 4;
  if (iVar9 != 0) {
    if (0 < iVar9) {
      lVar4 = 0;
      do {
        iVar9 = (int)*(short *)(*param_1 + lVar4 * 2);
        if (0x7ffa < iVar9) {
          iVar9 = 0x7ffb;
        }
        if (iVar9 < -0x7ffa) {
          iVar9 = 0x8005;
        }
        *(short *)(*param_1 + lVar4 * 2) = (short)iVar9;
        lVar4 = lVar4 + 1;
        iVar9 = (int)param_1[2];
      } while (lVar4 < iVar9);
    }
    plVar1 = param_1 + 0xb;
    FUN_14795cdc6(plVar1,*param_1,iVar9 * 2,(int)param_1[3],
                  *(undefined4 *)((longlong)param_1 + 0x1c));
    if ((int)param_1[0xc] != 0) {
      *(undefined1 *)(param_1 + 6) = 2;
      plVar5 = (longlong *)FUN_1400dbadc();
      plVar6 = (longlong *)*plVar5;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)FUN_140e92164();
        *plVar5 = (longlong)plVar6;
      }
      if ((int)param_1[8] == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)param_1[7];
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x100))(plVar6,puVar7,0,0);
      if (plVar6 == (longlong *)0x0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        if (*(int *)((longlong)param_1 + 100) < 0) {
          FUN_144893a1c(plVar1,0);
        }
      }
      else {
        fVar12 = (float)(int)param_1[0xc] / (float)*(int *)((longlong)param_1 + 0x6c);
        iVar9 = (int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1;
        if (iVar9 < 0) {
          iVar11 = 0;
          do {
            iVar2 = *(int *)((longlong)param_1 + 0x6c);
            iVar10 = (int)param_1[0xc] - iVar2 * iVar11;
            if (iVar2 < iVar10) {
              iVar10 = iVar2;
            }
            cVar3 = (**(code **)(*plVar6 + 0x30))
                              (plVar6,param_1[0xb] + (longlong)(iVar2 * iVar11),(longlong)iVar10);
            if (cVar3 == '\0') {
              *(undefined4 *)(param_1 + 0xc) = 0;
              if (*(int *)((longlong)param_1 + 100) < 0) {
                FUN_144893a1c(plVar1,0);
              }
              (**(code **)*plVar6)(plVar6,1);
              goto LAB_14369f902;
            }
            LOCK();
            *(int *)(param_1 + 0xd) = (int)param_1[0xd] + iVar10;
            UNLOCK();
            iVar11 = iVar11 + 1;
          } while (-iVar9 != iVar11);
        }
        (**(code **)*plVar6)(plVar6,1);
        uVar8 = 3;
      }
    }
  }
LAB_14369f902:
  *(undefined1 *)(param_1 + 6) = uVar8;
  return;
}



// FUNCTION 14369f928 FUN_14369f928 body=103 status=ok
// SIG undefined FUN_14369f928(void)

void FUN_14369f928(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14369f990 FUN_14369f990 body=1240 status=ok
// SIG undefined FUN_14369f990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14369f990(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *lpTlsValue;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = *param_3;
  local_88[0] = (longlong *)0x0;
  local_a8 = param_1;
  local_a0 = param_2;
  if (local_98 != 0) {
    plVar10 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[2];
    }
    (**(code **)*plVar10)(plVar10,local_88);
  }
  lpTlsValue = TlsGetValue(DAT_14c896140);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
    TlsSetValue(DAT_14c896140,lpTlsValue);
  }
  puVar7 = (undefined8 *)lpTlsValue[1];
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*lpTlsValue;
    if (puVar7 == (undefined8 *)0x0) {
      uVar11 = (uint)DAT_14c896180;
      uVar3 = DAT_14c896180;
      while (DAT_14c896180 = uVar3, local_b0 = uVar3, (uVar3 & 0x3ffffff) != 0) {
        local_b8 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (local_b8 >> 0x1a < uVar3 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar9 = (ulonglong)((uVar11 & 0x3ffffff) >> 0xe);
        uVar12 = (ulonglong)((uint)uVar3 & 0x3fff);
        local_b8 = local_b8 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + 0x10 + uVar12 * 0x18);
        LOCK();
        bVar13 = local_b0 == DAT_14c896180;
        uVar3 = local_b8;
        if (!bVar13) {
          uVar3 = DAT_14c896180;
        }
        DAT_14c896180 = uVar3;
        UNLOCK();
        if (bVar13) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + uVar12 * 0x18 + 0x10) = 0;
          puVar7 = *(undefined8 **)
                    (*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + 8 +
                    (ulonglong)(uVar11 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar11 & 0x3ffffff);
          lpTlsValue[1] = puVar7;
          if (puVar7 != (undefined8 *)0x0) goto LAB_14369fb68;
          goto LAB_14369fe1f;
        }
        uVar11 = (uint)DAT_14c896180;
        uVar3 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_14369fe1f:
      puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = puVar7;
      iVar4 = 0xff;
      puVar8 = puVar7;
      do {
        puVar5 = puVar8 + 0x20;
        *puVar8 = puVar5;
        iVar4 = iVar4 + -1;
        puVar8 = puVar5;
      } while (iVar4 != 0);
    }
    else {
      lpTlsValue[1] = puVar7;
      puVar5 = lpTlsValue;
    }
    *puVar5 = 0;
LAB_14369fb68:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar4 = 0xff;
  }
  else {
    iVar4 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar7;
  *(int *)(lpTlsValue + 2) = iVar4;
  *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
  puVar7[1] = &DAT_100000002;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0x100000000;
  *(undefined1 *)(puVar7 + 8) = 1;
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xe800000000000020;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0x100000000;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  LOCK();
  bVar13 = *(char *)(puVar7 + 8) == '\x01';
  if (bVar13) {
    *(char *)(puVar7 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_14008cdb0(puVar7 + 8);
  }
  *puVar7 = &PTR_FUN_14aa81270;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
  }
  puVar7[0xf] = uVar6;
  puVar7[0x10] = 0xc8000052a9c10f00;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
  puVar7[0x16] = local_a8;
  *(undefined4 *)(puVar7 + 0x17) = local_a0;
  puVar7[0x18] = local_98;
  puVar7[0x1a] = local_88[0];
  local_88[0] = (longlong *)0x0;
  *(undefined4 *)(puVar7 + 0x1e) = local_68;
  *(undefined4 *)((longlong)puVar7 + 0xf4) = uStack_64;
  *(undefined4 *)(puVar7 + 0x1f) = uStack_60;
  *(undefined4 *)((longlong)puVar7 + 0xfc) = uStack_5c;
  *(undefined4 *)(puVar7 + 0x1c) = local_78;
  *(undefined4 *)((longlong)puVar7 + 0xe4) = uStack_74;
  *(undefined4 *)(puVar7 + 0x1d) = uStack_70;
  *(undefined4 *)((longlong)puVar7 + 0xec) = uStack_6c;
  if (local_98 != 0) {
    local_98 = 0;
  }
  *puVar7 = &PTR_FUN_14aa81260;
  LOCK();
  _DAT_14cb02720 = _DAT_14cb02720 + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)puVar7 + 0xc) = *(int *)((longlong)puVar7 + 0xc) + 1;
  UNLOCK();
  puVar7[2] = &DAT_14cb02718;
  local_b0 = CONCAT71(local_b0._1_7_,1);
  FUN_1447439e4(puVar7);
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if (local_98 != 0) {
    plVar10 = local_88[0];
    if (local_88[0] == (longlong *)0x0) {
      plVar10 = (longlong *)&local_78;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar10 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14369fe69 FUN_14369fe69 body=49 status=ok
// SIG undefined FUN_14369fe69(void)

void FUN_14369fe69(void)

{
  FUN_144760e21(DAT_14cb02738,DAT_14cb02740);
  if (DAT_14cb02738 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14369fe9a FUN_14369fe9a body=69 status=ok
// SIG undefined FUN_14369fe9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14369fe9a(void)

{
  _DAT_14cb02750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014369fedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02758,1);
  return;
}



// FUNCTION 14369fedf FUN_14369fedf body=69 status=ok
// SIG undefined FUN_14369fedf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14369fedf(void)

{
  _DAT_14cb02768 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014369ff21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02770,1);
  return;
}



// FUNCTION 14369ff24 FUN_14369ff24 body=69 status=ok
// SIG undefined FUN_14369ff24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14369ff24(void)

{
  _DAT_14cb02780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014369ff66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02788,1);
  return;
}



// FUNCTION 14369ff69 FUN_14369ff69 body=69 status=ok
// SIG undefined FUN_14369ff69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14369ff69(void)

{
  _DAT_14cb02798 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014369ffab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb027a0,1);
  return;
}



// FUNCTION 14369ffae FUN_14369ffae body=69 status=ok
// SIG undefined FUN_14369ffae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14369ffae(void)

{
  _DAT_14cb027b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014369fff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb027b8,1);
  return;
}



// FUNCTION 14369fff3 FUN_14369fff3 body=69 status=ok
// SIG undefined FUN_14369fff3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14369fff3(void)

{
  _DAT_14cb027c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a0035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb027d0,1);
  return;
}



// FUNCTION 1436a0038 FUN_1436a0038 body=69 status=ok
// SIG undefined FUN_1436a0038(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a0038(void)

{
  _DAT_14cb027e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a007a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb027e8,1);
  return;
}



// FUNCTION 1436a007d FUN_1436a007d body=69 status=ok
// SIG undefined FUN_1436a007d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a007d(void)

{
  _DAT_14cb027f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a00bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02800,1);
  return;
}



// FUNCTION 1436a00c2 FUN_1436a00c2 body=69 status=ok
// SIG undefined FUN_1436a00c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a00c2(void)

{
  _DAT_14cb02810 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a0104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02818,1);
  return;
}



// FUNCTION 1436a0107 FUN_1436a0107 body=69 status=ok
// SIG undefined FUN_1436a0107(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a0107(void)

{
  _DAT_14cb02828 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a0149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02830,1);
  return;
}



// FUNCTION 1436a014c FUN_1436a014c body=69 status=ok
// SIG undefined FUN_1436a014c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a014c(void)

{
  _DAT_14cb02840 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a018e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02848,1);
  return;
}



// FUNCTION 1436a0191 FUN_1436a0191 body=69 status=ok
// SIG undefined FUN_1436a0191(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a0191(void)

{
  _DAT_14cb02858 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a01d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02860,1);
  return;
}



// FUNCTION 1436a01d6 FUN_1436a01d6 body=69 status=ok
// SIG undefined FUN_1436a01d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a01d6(void)

{
  _DAT_14cb02870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a0218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02878,1);
  return;
}



// FUNCTION 1436a021b FUN_1436a021b body=69 status=ok
// SIG undefined FUN_1436a021b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a021b(void)

{
  _DAT_14cb02888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a025d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02890,1);
  return;
}



// FUNCTION 1436a0260 FUN_1436a0260 body=69 status=ok
// SIG undefined FUN_1436a0260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a0260(void)

{
  _DAT_14cb028a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a02a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb028a8,1);
  return;
}



// FUNCTION 1436a02a5 FUN_1436a02a5 body=69 status=ok
// SIG undefined FUN_1436a02a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a02a5(void)

{
  _DAT_14cb028b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a02e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb028c0,1);
  return;
}



// FUNCTION 1436a02ea FUN_1436a02ea body=69 status=ok
// SIG undefined FUN_1436a02ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a02ea(void)

{
  _DAT_14cb028d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a032c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb028d8,1);
  return;
}



// FUNCTION 1436a032f FUN_1436a032f body=69 status=ok
// SIG undefined FUN_1436a032f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a032f(void)

{
  _DAT_14cb028e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a0371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb028f0,1);
  return;
}



// FUNCTION 1436a0374 FUN_1436a0374 body=69 status=ok
// SIG undefined FUN_1436a0374(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a0374(void)

{
  _DAT_14cb02900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a03b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02908,1);
  return;
}



// FUNCTION 1436a03b9 FUN_1436a03b9 body=69 status=ok
// SIG undefined FUN_1436a03b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a03b9(void)

{
  _DAT_14cb02918 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a03fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02920,1);
  return;
}



// FUNCTION 1436a03fe FUN_1436a03fe body=69 status=ok
// SIG undefined FUN_1436a03fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a03fe(void)

{
  _DAT_14cb02930 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a0440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02938,1);
  return;
}



// FUNCTION 1436a0443 FUN_1436a0443 body=69 status=ok
// SIG undefined FUN_1436a0443(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a0443(void)

{
  _DAT_14cb02948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a0485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02950,1);
  return;
}



// FUNCTION 1436a0488 FUN_1436a0488 body=69 status=ok
// SIG undefined FUN_1436a0488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a0488(void)

{
  _DAT_14cb02960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a04ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02968,1);
  return;
}



// FUNCTION 1436a04cd FUN_1436a04cd body=48 status=ok
// SIG undefined FUN_1436a04cd(void)

void FUN_1436a04cd(void)

{
  if (DAT_14cb029c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb029b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1436a04fd FUN_1436a04fd body=48 status=ok
// SIG undefined FUN_1436a04fd(void)

void FUN_1436a04fd(void)

{
  if (DAT_14cb02a18 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb02a08 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1436a052d FUN_1436a052d body=643 status=ok
// SIG undefined FUN_1436a052d(void)

longlong FUN_1436a052d(longlong param_1,uint param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 local_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 local_1c8 [8];
  undefined4 local_1c0;
  undefined1 local_1bc [4];
  undefined1 local_1b8 [360];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = (undefined1  [8])0x0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  auStack_1e0 = (undefined1  [8])0x0;
  lVar3 = 0x24;
  do {
    *(undefined8 *)(auStack_1e0 + lVar3 + 4) = 0;
    *(undefined8 *)(local_1d8 + lVar3 + 4) = 0xbf800000bf800000;
    *(undefined4 *)((longlong)&uStack_1d0 + lVar3 + 4) = 0xbf800000;
    *(undefined8 *)(local_1c8 + lVar3 + 4) = 0;
    *(undefined8 *)(local_1bc + lVar3) = 0x3f80000000000000;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x74);
  lVar3 = 0x74;
  do {
    *(undefined8 *)(auStack_1e0 + lVar3 + 4) = 0;
    *(undefined8 *)(local_1d8 + lVar3 + 4) = 0xbf800000bf800000;
    *(undefined4 *)((longlong)&uStack_1d0 + lVar3 + 4) = 0xbf800000;
    *(undefined8 *)(local_1c8 + lVar3 + 4) = 0;
    *(undefined8 *)(local_1bc + lVar3) = 0x3f80000000000000;
    lVar3 = lVar3 + 0x28;
  } while (lVar3 != 0x18c);
  local_1c8 = (undefined1  [8])0x149ecad38;
  local_1c0 = 0xe;
  local_1bc[0] = 0;
  uVar1 = FUN_14001a6c0(local_1c8,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar2 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar1,local_1c8,1);
  (**(code **)(*plVar2 + 0x40))(plVar2,local_1b8,1,(float)param_2);
  fVar4 = (float)FUN_146914044(local_1b8,local_1d8);
  fVar5 = (float)FUN_146914136(local_1b8,&local_1e8);
  FUN_147cede12(param_1,param_3 * fVar4,param_4 * fVar5);
  if ((undefined1 *)(param_1 + 0x38) != local_1d8) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 (*) [8])(param_1 + 0x38) = local_1d8;
    local_1d8 = (undefined1  [8])0x0;
    *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_1d0;
    *(undefined4 *)(param_1 + 0x44) = uStack_1d0._4_4_;
    uStack_1d0 = 0;
  }
  if ((longlong *)(param_1 + 0x48) == &local_1e8) {
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x48) = local_1e8;
    local_1e8 = 0;
    *(undefined4 *)(param_1 + 0x50) = auStack_1e0._0_4_;
    *(undefined4 *)(param_1 + 0x54) = auStack_1e0._4_4_;
  }
  if (local_1d8 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a07b1 FUN_1436a07b1 body=864 status=ok
// SIG undefined FUN_1436a07b1(void)

void FUN_1436a07b1(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [40];
  undefined4 local_80 [12];
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  wchar_t *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = (wchar_t *)0x0;
  uStack_20 = 0;
  local_18 = param_1;
  cVar1 = FUN_140ffc744(&local_18,&local_28,1,0);
  if (cVar1 == '\0') goto LAB_1436a09c3;
  pwVar3 = local_28;
  if ((int)uStack_20 == 0) {
    pwVar3 = L"";
  }
  lVar4 = 0;
  while( true ) {
    uVar5 = *(ushort *)((longlong)pwVar3 + lVar4);
    uVar6 = (ulonglong)uVar5;
    uVar7 = *(ushort *)((longlong)&DAT_14aa712fe + lVar4);
    if (uVar5 != uVar7) break;
    if (uVar5 == 0) goto LAB_1436a0973;
LAB_1436a083e:
    lVar4 = lVar4 + 2;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1436a083e;
  }
  if (uVar5 != uVar7) {
    lVar4 = 0;
    goto LAB_1436a0877;
  }
LAB_1436a0973:
  FUN_1436a052d(local_80,10,&DAT_14aa712fe,0x3f800000);
  goto LAB_1436a0990;
LAB_1436a0877:
  uVar5 = *(ushort *)((longlong)pwVar3 + lVar4);
  uVar6 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)L"reapply" + lVar4);
  if (uVar5 == uVar7) {
    if (uVar5 == 0) goto LAB_1436a0a7c;
LAB_1436a0890:
    lVar4 = lVar4 + 2;
    goto LAB_1436a0877;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1436a0890;
  }
  if (uVar5 != uVar7) {
    lVar4 = 0;
    goto LAB_1436a08c9;
  }
LAB_1436a0a7c:
  FUN_145be17f3(local_80);
  FUN_145be1251(local_80,0);
  goto LAB_1436a09aa;
LAB_1436a08c9:
  uVar5 = *(ushort *)((longlong)pwVar3 + lVar4);
  uVar6 = (ulonglong)uVar5;
  uVar7 = *(ushort *)((longlong)&DAT_14aa71318 + lVar4);
  if (uVar5 == uVar7) {
    if (uVar5 == 0) goto LAB_1436a0a98;
LAB_1436a08e2:
    lVar4 = lVar4 + 2;
    goto LAB_1436a08c9;
  }
  if ((uVar7 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1436a08e2;
  }
  if (uVar5 != uVar7) {
    cVar1 = FUN_1405b43cc(&local_28);
    if (cVar1 == '\0') goto LAB_1436a0a47;
    local_50 = 0xbf800000bf800000;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_141292034(local_80,1);
    local_80[0] = 0;
    pwVar3 = local_28;
    if ((int)uStack_20 == 0) {
      pwVar3 = L"";
    }
    iVar2 = _wtoi(pwVar3);
    FUN_145c317f0(local_80,iVar2);
    FUN_145be1251(local_80,0);
    FUN_1458d3247(&DAT_14c872b08);
    goto LAB_1436a09aa;
  }
LAB_1436a0a98:
  local_50 = 0xbf800000bf800000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_141292034(local_80,1);
  local_80[0] = 0;
  FUN_145c317f0(local_80,0x7fffffff);
LAB_1436a0990:
  FUN_145be1251(local_80,0);
  FUN_1458d3247(&DAT_14c872b08);
LAB_1436a09aa:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1436a09c3:
  FUN_1436a0b12(L"ResolutionQuality");
  FUN_1436a0b12(L"ViewDistanceQuality");
  FUN_1436a0b12(L"AntiAliasingQuality");
  FUN_1436a0b12(L"ShadowQuality");
  FUN_1436a0b12(L"GlobalIlluminationQuality");
  FUN_1436a0b12(L"ReflectionQuality");
  FUN_1436a0b12(L"PostProcessQuality");
  FUN_1436a0b12(L"TextureQuality");
  FUN_1436a0b12(L"EffectsQuality");
  FUN_1436a0b12(L"FoliageQuality");
  FUN_1436a0b12(L"ShadingQuality");
LAB_1436a0a47:
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a0b12 FUN_1436a0b12 body=1532 status=ok
// SIG undefined FUN_1436a0b12(void)

void FUN_1436a0b12(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  float fVar19;
  double dVar20;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  uint local_114;
  int local_110;
  int local_10c;
  void *local_108;
  uint local_100;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8 [2];
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_140056680(&local_108,param_1);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1408bde70(DAT_14c872ce0,&DAT_14c872ac8,&local_c8);
  iVar17 = -1;
  if (0 < (int)uStack_c0) {
    lVar11 = 0;
    do {
      local_d8 = 0;
      uStack_d0 = 0;
      lVar16 = lVar11 * 0x10;
      lVar12 = local_c8 + lVar16;
      local_98 = (void *)0x0;
      uStack_90 = 0;
      local_a8 = (wchar_t *)0x0;
      uStack_a0 = 0;
      FUN_140056680(&local_b8,&DAT_149e1428e);
      local_120 = 0;
      local_128 = 1;
      cVar4 = FUN_1407cdbc6(lVar12,&local_b8,&local_98,&local_a8);
      if (local_b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (cVar4 != '\0') {
        iVar5 = (int)uStack_90 + -1;
        if ((int)uStack_90 == 0) {
          iVar5 = 0;
        }
        FUN_1402980a2(&local_d8,local_98,iVar5);
        pwVar9 = L"";
        if ((int)uStack_a0 != 0) {
          pwVar9 = local_a8;
        }
        local_10c = _wtoi(pwVar9);
      }
      if (local_a8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      _Src = local_108;
      if (cVar4 != '\0') {
        local_98 = (void *)0x0;
        lVar12 = (longlong)(int)local_100;
        uStack_90 = CONCAT44(uStack_90._4_4_,local_100);
        if (lVar12 == 0) {
          uStack_90 = (ulonglong)local_100;
          if ((int)uStack_d0 != 0) {
            iVar5 = 0;
            goto LAB_1436a0d61;
          }
        }
        else {
          FUN_1446dd670(&local_98,local_100,0);
          memcpy(local_98,_Src,lVar12 * 2);
          iVar5 = (int)uStack_90;
          if ((int)uStack_d0 == (int)uStack_90) {
            if ((int)uStack_90 < 2) {
              if (local_98 != (void *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1436a0d8f;
            }
            lVar12 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_d8 + lVar12);
              uVar15 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)local_98 + lVar12);
              uVar14 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1436a0d1a;
                }
                iVar5 = uVar15 - uVar14;
                goto LAB_1436a0d76;
              }
              if (uVar1 == 0) break;
LAB_1436a0d1a:
              lVar12 = lVar12 + 2;
            }
            iVar5 = 0;
LAB_1436a0d76:
            bVar18 = iVar5 == 0;
          }
          else {
LAB_1436a0d61:
            bVar18 = (int)uStack_d0 + iVar5 == 1;
          }
          if (local_98 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (!bVar18) goto LAB_1436a0f75;
        }
LAB_1436a0d8f:
        local_98 = (void *)0x0;
        uStack_90 = 0;
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(local_c8 + 8 + lVar16) != 0) {
          puVar10 = *(undefined2 **)(local_c8 + lVar16);
        }
        uVar6 = FUN_146220742(DAT_14c872ce0,puVar10,&local_98,&DAT_14c872ac8);
        if ((int)uStack_90 < 1) {
LAB_1436a0f32:
          if (iVar17 < local_10c) {
            iVar17 = local_10c;
          }
          FUN_140bee9ec(&local_f8,&local_98);
        }
        else {
          local_114 = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          lVar12 = 1;
          lVar16 = 0;
          local_110 = iVar17;
          do {
            lVar13 = (longlong)local_98 + lVar16;
            local_a8 = (wchar_t *)0x0;
            uStack_a0 = 0;
            local_b8 = (wchar_t *)0x0;
            uStack_b0 = 0;
            FUN_140056680(local_e8,&DAT_149e06162);
            local_120 = 0;
            local_128 = 1;
            cVar4 = FUN_1407cdbc6(lVar13,local_e8,&local_a8,&local_b8);
            if (local_e8[0] != 0) {
              FUN_1400020a8();
            }
            bVar3 = 1;
            if (cVar4 != '\0') {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              pwVar9 = L"";
              if ((int)uStack_a0 != 0) {
                pwVar9 = local_a8;
              }
              bVar3 = 1;
              plVar7 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,pwVar9,1);
              if (plVar7 != (longlong *)0x0) {
                fVar19 = (float)(**(code **)(*plVar7 + 0xb8))(plVar7);
                pwVar9 = L"";
                if ((int)uStack_b0 != 0) {
                  pwVar9 = local_b8;
                }
                dVar20 = _wtof(pwVar9);
                if ((fVar19 != (float)dVar20) || (NAN(fVar19) || NAN((float)dVar20))) {
                  local_114 = 0;
                  bVar3 = 0;
                }
              }
            }
            if (local_b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            if (local_a8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            bVar18 = lVar12 < (int)uStack_90;
            lVar12 = lVar12 + 1;
            lVar16 = lVar16 + 0x10;
          } while ((bool)(bVar3 & bVar18));
          iVar17 = local_110;
          if ((local_114 & 1) != 0) goto LAB_1436a0f32;
        }
        FUN_1447a1747(local_98,(int)uStack_90);
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1436a0f75:
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_c0);
  }
  FUN_1447a1747(local_c8);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (iVar17 == -1) {
    FUN_140056680(&local_a8,L"(custom)");
  }
  else {
    local_a8 = (wchar_t *)0x0;
    uStack_a0 = 0;
    lVar12 = 0xf;
    lVar11 = 0x1000000000;
    iVar8 = 0x10;
    iVar5 = iVar17;
    do {
      lVar11 = lVar11 + -0x100000000;
      *(undefined2 *)((longlong)&local_98 + lVar12 * 2) =
           *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar5 % 10) * 2);
      uVar15 = iVar5 + 9;
      lVar12 = lVar12 + -1;
      iVar8 = iVar8 + -1;
      iVar5 = iVar5 / 10;
    } while (0x12 < uVar15);
    if (iVar17 < 0) {
      iVar8 = (int)lVar12;
      lVar11 = (longlong)iVar8;
      *(undefined2 *)((longlong)&local_98 + lVar11 * 2) = 0x2d;
    }
    else {
      lVar11 = lVar11 >> 0x20;
    }
    FUN_1400020e8(&local_a8,(longlong)&local_98 + lVar11 * 2,0x10 - iVar8);
  }
  if (local_a8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1436a110f FUN_1436a110f body=69 status=ok
// SIG undefined FUN_1436a110f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a110f(void)

{
  _DAT_14cb02aa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436a1151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb02aa8,1);
  return;
}



// FUNCTION 1436a1154 FUN_1436a1154 body=171 status=ok
// SIG undefined FUN_1436a1154(void)

void FUN_1436a1154(undefined8 *param_1,longlong param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (*(char *)(param_2 + 0x23fe) == '\0') {
    fVar3 = *(float *)(DAT_14cb02ab0 + 4);
    *(float *)(param_1 + 7) = fVar3;
    fVar1 = *(float *)((longlong)param_1 + 0x34);
    if (param_3 - fVar3 <= fVar1) {
      return;
    }
    fVar3 = *(float *)(param_1 + 6);
    if (*(float *)(param_1 + 6) < fVar1) {
      param_1[2] = param_1[5];
      *param_1 = param_1[3];
      param_1[1] = param_1[4];
      *(float *)(param_1 + 6) = fVar1;
      fVar3 = fVar1;
    }
    param_1[5] = *(undefined8 *)(param_2 + 0x1058);
    uVar2 = *(undefined8 *)(param_2 + 0x1050);
    param_1[3] = *(undefined8 *)(param_2 + 0x1048);
    param_1[4] = uVar2;
    *(float *)((longlong)param_1 + 0x34) = param_3;
    if (fVar3 < param_3) {
      return;
    }
  }
  param_1[2] = *(undefined8 *)(param_2 + 0x1058);
  uVar2 = *(undefined8 *)(param_2 + 0x1050);
  *param_1 = *(undefined8 *)(param_2 + 0x1048);
  param_1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x1050);
  param_1[3] = *(undefined8 *)(param_2 + 0x1048);
  param_1[4] = uVar2;
  param_1[5] = *(undefined8 *)(param_2 + 0x1058);
  *(float *)(param_1 + 6) = param_3;
  *(float *)((longlong)param_1 + 0x34) = param_3;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 1436a120b FUN_1436a120b body=47 status=ok
// SIG undefined FUN_1436a120b(void)

void FUN_1436a120b(void)

{
  DAT_14cb05370 = &PTR_FUN_14aa81330;
  FUN_144725486(&DAT_14cb05370);
  FUN_1463ff674(&DAT_14cb05370);
  return;
}



// FUNCTION 1436a123a FUN_1436a123a body=135 status=ok
// SIG undefined FUN_1436a123a(void)

void FUN_1436a123a(longlong param_1,int *param_2)

{
  *param_2 = *param_2 + *(int *)(param_1 + 0x18);
  param_2[1] = param_2[1] + *(int *)(param_1 + 0x28);
  param_2[2] = param_2[2] + *(int *)(param_1 + 0x38);
  param_2[3] = param_2[3] + *(int *)(param_1 + 0x50);
  param_2[4] = param_2[4] + *(int *)(param_1 + 0x68);
  param_2[5] = param_2[5] + *(int *)(param_1 + 0x78);
  param_2[6] = param_2[6] + *(int *)(param_1 + 0x180);
  param_2[7] = param_2[7] + *(int *)(param_1 + 0x2a0);
  param_2[8] = param_2[8] + *(int *)(param_1 + 0x2b8);
  param_2[9] = param_2[9] + *(int *)(param_1 + 0x2c8);
  param_2[10] = param_2[10] + *(int *)(param_1 + 0x2d8);
  param_2[0xb] = param_2[0xb] + *(int *)(param_1 + 0x2f0);
  param_2[0xc] = param_2[0xc] + *(int *)(param_1 + 0x308);
  param_2[0xd] = param_2[0xd] + *(int *)(param_1 + 0x318);
  param_2[0xe] = param_2[0xe] + *(int *)(param_1 + 0x420);
  param_2[0xf] = param_2[0xf] + *(int *)(param_1 + 0x540);
  param_2[0x10] = param_2[0x10] + *(int *)(param_1 + 0x560);
  return;
}



// FUNCTION 1436a12c2 FUN_1436a12c2 body=541 status=ok
// SIG undefined FUN_1436a12c2(void)

void FUN_1436a12c2(longlong param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    puVar7 = *(ulonglong **)(param_1 + 0xd8);
    puVar4 = puVar7 + (longlong)*(int *)(param_1 + 0xe0) * 2;
    do {
      param_2 = *puVar7;
      uVar2 = puVar7[1];
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(&local_58,L"Renderer",1);
        local_60 = local_58;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_60,local_4c,1);
      }
      (**(code **)(*DAT_14cad8310 + 0x228))(DAT_14cad8310,param_2,uVar2);
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar4);
  }
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0xb8);
    puVar6 = puVar5 + (longlong)*(int *)(param_1 + 0xc0) * 2;
    do {
      param_2 = CONCAT71((int7)(param_2 >> 8),*(undefined1 *)(puVar5 + 1)) & 0xffffffffffffff01;
      FUN_1447a4a8e(*puVar5,param_2);
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar6);
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 200);
    lVar8 = 0;
    do {
      FUN_144a73ae2(*(undefined8 *)(lVar3 + lVar8),*(undefined8 *)(param_1 + 0x110),
                    *(undefined4 *)(param_1 + 0x118));
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_1417ed98c(param_1 + 0xd8);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_147d0b67e(param_1 + 0xb8);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) == 0) {
    if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 1436a14f8 FUN_1436a14f8 body=1310 status=ok
// SIG undefined FUN_1436a14f8(void)

void FUN_1436a14f8(longlong param_1,int param_2,longlong param_3)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_88 [32];
  byte local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar14 = (longlong)param_2;
  if ((*(uint *)(param_3 + 0xe4) >> 0x14 & 1) != 0) {
    lVar7 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x80);
    }
    lVar7 = *(longlong *)(lVar7 + lVar14 * 8);
    local_68 = (byte)(*(uint *)(param_3 + 0xe4) >> 0x15) & 1;
    local_60 = param_3;
    local_58 = param_1;
    FUN_143658694(param_2,*(longlong *)(lVar7 + 8) + 0x48,*(undefined4 *)(lVar7 + 0x3090),
                  *(undefined8 *)(param_1 + 0xf0));
  }
  lVar7 = *(longlong *)(param_1 + 0xf0);
  if (((((*(int *)(param_1 + 0x118) < 3) || ((ulonglong)DAT_14ca85550 == 0xc)) ||
       (lVar12 = (ulonglong)DAT_14ca85550 * 0x3c,
       *(longlong *)(&DAT_14ca814b0 + lVar12) == DAT_14ca81490)) ||
      (((*(byte *)((longlong)&DAT_14ca814d8 + lVar12 + 3) & 0x10) != 0 &&
       ((*(byte *)((longlong)&DAT_14ca814c8 + lVar12 + 3) & 0x20) == 0)))) &&
     (iVar11 = *(int *)(param_3 + 0xb0), 0 < iVar11)) {
    lVar12 = 0;
    lVar15 = 0;
    do {
      lVar16 = *(longlong *)(param_3 + 0xa8);
      if (*(longlong *)(param_3 + 0xa8) == 0) {
        lVar16 = param_3;
      }
      if (*(longlong *)(lVar16 + 8 + lVar12) == 0 && *(longlong *)(lVar16 + lVar12) == 0) {
        *(undefined8 *)(lVar16 + lVar12) = *(undefined8 *)(lVar7 + 0x250);
        iVar11 = *(int *)(param_3 + 0xb0);
      }
      lVar15 = lVar15 + 1;
      lVar12 = lVar12 + 0xa8;
    } while (lVar15 < iVar11);
  }
  if ((*(char *)(param_1 + 0x120) == '\x01') &&
     (-1 < *(char *)(*(longlong *)(param_3 + 0xb8) + 0x128))) {
    if ((*(byte *)(param_1 + 0x11c) & 2) == 0) {
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(&local_48,L"Renderer",1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_48,local_3c,1);
      }
      lVar7 = param_1 + 0x128;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x138);
      }
      (**(code **)(*DAT_14cad8310 + 0x228))
                (DAT_14cad8310,*(undefined8 *)(lVar7 + lVar14 * 8),param_3);
    }
    else {
      lVar7 = param_1 + 0x128;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x138);
      }
      iVar11 = *(int *)(param_1 + 0xe0);
      *(uint *)(param_1 + 0xe0) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0xe4) < iVar11 + 1U) {
        FUN_1447c037e((longlong *)(param_1 + 0xd8),iVar11);
      }
      lVar12 = *(longlong *)(param_1 + 0xd8);
      *(undefined8 *)(lVar12 + (longlong)iVar11 * 0x10) = *(undefined8 *)(lVar7 + lVar14 * 8);
      *(longlong *)(lVar12 + 8 + (longlong)iVar11 * 0x10) = param_3;
    }
  }
  if ((*(byte *)(param_1 + 0x11c) & 1) == 0) {
    FUN_144a73ae2(*(undefined8 *)(param_3 + 0xc0),*(undefined8 *)(param_1 + 0x110),
                  *(undefined4 *)(param_1 + 0x118));
  }
  else {
    iVar11 = *(int *)(param_1 + 0xd0);
    *(uint *)(param_1 + 0xd0) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0xd4) < iVar11 + 1U) {
      FUN_14478a6be((longlong *)(param_1 + 200),iVar11);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 200) + (longlong)iVar11 * 8) =
         *(undefined8 *)(param_3 + 0xc0);
  }
  lVar7 = *(longlong *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x98) == 0) {
    lVar7 = param_1 + 0x90;
  }
  *(undefined2 *)(param_3 + 0xdc) = *(undefined2 *)(lVar7 + lVar14 * 2);
  lVar7 = *(longlong *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x98) == 0) {
    lVar7 = param_1 + 0x90;
  }
  psVar1 = (short *)(lVar7 + lVar14 * 2);
  *psVar1 = *psVar1 + 1;
  lVar7 = param_1 + 0x38;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x40);
  }
  piVar2 = (int *)(lVar7 + lVar14 * 4);
  *piVar2 = *piVar2 + *(int *)(param_3 + 0xb0);
  lVar7 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  plVar4 = *(longlong **)(lVar7 + lVar14 * 8);
  if (plVar4 == (longlong *)0x0) goto LAB_1436a18a9;
  iVar11 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar11 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar11 + 1U) {
    FUN_14476b50e(plVar4,iVar11);
  }
  plVar4 = (longlong *)(*plVar4 + (longlong)iVar11 * 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x118);
  lVar14 = *(longlong *)(param_1 + 0xf0);
  *plVar4 = param_3;
  plVar4[1] = lVar14;
  if (*(longlong *)(param_3 + 0xc0) == 0) {
    uVar6 = *(uint *)(plVar4 + 2) & 0xfffffffc;
    *(uint *)(plVar4 + 2) = uVar6;
  }
  else {
    plVar8 = (longlong *)FUN_14485b2b4(*(longlong *)(param_3 + 0xc0),uVar3);
    pcVar9 = *(code **)(*plVar8 + 0x270);
    plVar13 = plVar8;
    if (pcVar9 == (code *)&LAB_1447f82f4) {
      plVar13 = (longlong *)plVar8[9];
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)plVar8[8];
        pcVar9 = *(code **)(*plVar13 + 0x408);
        if (pcVar9 != (code *)&LAB_14470b702) goto LAB_1436a19bd;
        bVar5 = *(byte *)((longlong)plVar13 + 0x129);
        if (bVar5 == 1) {
          bVar5 = ~*(byte *)((longlong)plVar13 + 0x1d6) & 1;
        }
        uVar6 = (uint)bVar5;
      }
      else {
        pcVar9 = *(code **)(*plVar13 + 0x408);
        if (pcVar9 != (code *)&LAB_14497e176) goto LAB_1436a19bd;
        uVar6 = (uint)*(byte *)(plVar13 + 0x2b);
      }
    }
    else {
LAB_1436a19bd:
      uVar6 = (*pcVar9)(plVar13);
    }
    *(uint *)(plVar4 + 2) = *(uint *)(plVar4 + 2) & 0xfffffffe | (uint)(uVar6 == 0);
    pcVar9 = *(code **)(*plVar8 + 0x270);
    if (pcVar9 == (code *)&LAB_1447f82f4) {
      plVar13 = (longlong *)plVar8[9];
      if (plVar13 == (longlong *)0x0) {
        plVar8 = (longlong *)plVar8[8];
        pcVar9 = *(code **)(*plVar8 + 0x408);
        if (pcVar9 != (code *)&LAB_14470b702) goto LAB_1436a19c7;
        bVar5 = *(byte *)((longlong)plVar8 + 0x129);
        if (bVar5 == 1) {
          bVar5 = ~*(byte *)((longlong)plVar8 + 0x1d6) & 1;
        }
        uVar6 = (uint)bVar5;
      }
      else {
        pcVar9 = *(code **)(*plVar13 + 0x408);
        plVar8 = plVar13;
        if (pcVar9 != (code *)&LAB_14497e176) goto LAB_1436a19c7;
        uVar6 = (uint)*(byte *)(plVar13 + 0x2b);
      }
    }
    else {
LAB_1436a19c7:
      uVar6 = (*pcVar9)(plVar8);
    }
    uVar6 = (*(uint *)(plVar4 + 2) & 0xfffffffd) + (uint)(uVar6 == 1) * 2;
    *(uint *)(plVar4 + 2) = uVar6;
    lVar14 = plVar4[1];
  }
  if (lVar14 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(byte *)(lVar14 + 0x6e) >> 1 & 4;
  }
  *(uint *)(plVar4 + 2) = uVar6 & 0xfffffffb | uVar10;
LAB_1436a18a9:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1436a1a18 FUN_1436a1a18 body=56 status=ok
// SIG undefined FUN_1436a1a18(void)

void FUN_1436a1a18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa71480;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  param_1[1] = &PTR_FUN_14a1ca300;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


