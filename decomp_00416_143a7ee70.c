// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143a7ee70 FUN_143a7ee70 body=182 status=ok
// SIG undefined FUN_143a7ee70(void)

void FUN_143a7ee70(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_30 = param_1 + 3;
  FUN_1481c4278(lVar2 + 0x10,&local_24);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  lVar6 = (longlong)local_24 * 0x50;
  lVar3 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar5 = *(undefined8 **)(lVar2 + 0x40 + lVar6);
  *(longlong *)(lVar2 + lVar6 + 0x38) = lVar3;
  *(longlong *)(lVar2 + 0x40 + lVar6) = lVar4;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7ef42 FUN_143a7ef42 body=29 status=ok
// SIG undefined FUN_143a7ef42(void)

void FUN_143a7ef42(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a7ef60 FUN_143a7ef60 body=83 status=ok
// SIG undefined FUN_143a7ef60(void)

undefined8 * FUN_143a7ef60(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14adf3100;
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



// FUNCTION 143a7efb4 FUN_143a7efb4 body=282 status=ok
// SIG undefined FUN_143a7efb4(void)

undefined8 * FUN_143a7efb4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7f0ce FUN_143a7f0ce body=274 status=ok
// SIG undefined FUN_143a7f0ce(void)

void FUN_143a7f0ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar3 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 0xc0;
  FUN_1481c4278(lVar3 + 0x10,&local_24);
  lVar3 = *(longlong *)(lVar3 + 0x10);
  lVar7 = (longlong)local_24 * 0x50;
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  lVar5 = *(longlong *)(param_1 + 0xb8);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar3 + 0x40 + lVar7);
  *(undefined8 *)(lVar3 + lVar7 + 0x38) = uVar4;
  *(longlong *)(lVar3 + 0x40 + lVar7) = lVar5;
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
  plVar6 = *(longlong **)(param_1 + 0xb8);
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
  if (param_1 != 0) {
    LOCK();
    piVar2 = (int *)(param_1 + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a7f214 FUN_143a7f214 body=12 status=ok
// SIG undefined FUN_143a7f214(void)

void FUN_143a7f214(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a7f21d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a7f220 FUN_143a7f220 body=29 status=ok
// SIG undefined FUN_143a7f220(void)

undefined8 FUN_143a7f220(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7f23e FUN_143a7f23e body=282 status=ok
// SIG undefined FUN_143a7f23e(void)

undefined8 * FUN_143a7f23e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7f358 FUN_143a7f358 body=117 status=ok
// SIG undefined FUN_143a7f358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7f358(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481c48d4(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481c48d4(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7f3c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a7f3f8 FUN_143a7f3f8 body=12 status=ok
// SIG undefined FUN_143a7f3f8(void)

void FUN_143a7f3f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a7f401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a7f404 FUN_143a7f404 body=29 status=ok
// SIG undefined FUN_143a7f404(void)

undefined8 FUN_143a7f404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7f422 FUN_143a7f422 body=282 status=ok
// SIG undefined FUN_143a7f422(void)

undefined8 * FUN_143a7f422(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7f53c FUN_143a7f53c body=117 status=ok
// SIG undefined FUN_143a7f53c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a7f53c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14582f7fe(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14582f7fe(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7f5a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a7f5b2 FUN_143a7f5b2 body=722 status=ok
// SIG undefined FUN_143a7f5b2(void)

void FUN_143a7f5b2(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar5 = (longlong *)
           FUN_1459ab700(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  if (param_1[2] == 0) {
    lVar7 = plVar5[1];
    if (lVar7 != 0) {
      plVar5[1] = 0;
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar7;
          plVar8 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar9 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar9 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar7 = *plVar5;
    if (lVar7 != 0) {
      *plVar5 = 0;
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar7;
          plVar8 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar9 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar9 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    *(undefined4 *)(plVar5 + 3) = DAT_14c846338;
    plVar5[2] = DAT_14c846330;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1[2] + 0x128) + 0x10);
    lVar4 = plVar5[1];
    if (lVar4 != lVar7) {
      plVar5[1] = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar4 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar8 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar10 = plVar8 != DAT_14ca843c0;
                plVar9 = plVar6;
                if (bVar10) {
                  plVar8 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar10 = plVar9 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar10) {
                  plVar9 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar10);
            }
          }
        }
      }
    }
    lVar7 = FUN_1447b4020(param_1[2]);
    if (lVar7 == 0) {
      plVar8 = &DAT_14c9c0d80;
    }
    else {
      lVar7 = FUN_1447b4020(param_1[2]);
      plVar8 = (longlong *)(lVar7 + 0x18);
    }
    lVar7 = *plVar8;
    lVar4 = *plVar5;
    if (lVar4 != lVar7) {
      *plVar5 = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar4 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar4 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar4 + 0xd);
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar8 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar8;
                LOCK();
                bVar10 = plVar8 != DAT_14ca843c0;
                plVar9 = plVar6;
                if (bVar10) {
                  plVar8 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar10 = plVar9 != DAT_14ca843c8;
                plVar8 = plVar6;
                if (bVar10) {
                  plVar9 = DAT_14ca843c8;
                  plVar8 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar8;
                UNLOCK();
              } while (bVar10);
            }
          }
        }
      }
    }
    *(float *)(plVar5 + 2) = (float)(int)param_1[3];
    *(float *)((longlong)plVar5 + 0x14) = (float)*(int *)((longlong)param_1 + 0x1c);
    *(float *)(plVar5 + 3) = (float)(int)param_1[4];
  }
  return;
}



// FUNCTION 143a7f894 FUN_143a7f894 body=29 status=ok
// SIG undefined FUN_143a7f894(void)

void FUN_143a7f894(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a7f8b2 FUN_143a7f8b2 body=29 status=ok
// SIG undefined FUN_143a7f8b2(void)

undefined8 FUN_143a7f8b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7f8d0 FUN_143a7f8d0 body=282 status=ok
// SIG undefined FUN_143a7f8d0(void)

undefined8 * FUN_143a7f8d0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7f9ea FUN_143a7f9ea body=91 status=ok
// SIG undefined FUN_143a7f9ea(void)

void FUN_143a7f9ea(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a7f5b2(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a7f5b2(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7fa26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a7fa52 FUN_143a7fa52 body=199 status=ok
// SIG undefined FUN_143a7fa52(void)

void FUN_143a7fa52(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
  if (0 < DAT_14cb3dad0) {
    uVar3 = 0;
    do {
      lVar2 = (longlong)(int)uVar3;
      if (*(int *)(*(longlong *)(DAT_14cb3dac8 + lVar2 * 8) + 8) == 0) {
        puVar1 = *(undefined8 **)(DAT_14cb3dac8 + lVar2 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
        iVar4 = ~uVar3 + DAT_14cb3dad0;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(DAT_14cb3dac8 + lVar2 * 8),
                  (void *)(DAT_14cb3dac8 + (longlong)(DAT_14cb3dad0 - iVar4) * 8),
                  (longlong)iVar4 << 3);
        }
        DAT_14cb3dad0 = DAT_14cb3dad0 + -1;
        FUN_14182ec16();
      }
      else {
        uVar3 = uVar3 + 1;
      }
    } while ((int)uVar3 < DAT_14cb3dad0);
  }
                    /* WARNING: Could not recover jumptable at 0x000143a7fb12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
  return;
}



// FUNCTION 143a7fb24 FUN_143a7fb24 body=12 status=ok
// SIG undefined FUN_143a7fb24(void)

void FUN_143a7fb24(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a7fb2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a7fb30 FUN_143a7fb30 body=29 status=ok
// SIG undefined FUN_143a7fb30(void)

undefined8 FUN_143a7fb30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7fb4e FUN_143a7fb4e body=282 status=ok
// SIG undefined FUN_143a7fb4e(void)

undefined8 * FUN_143a7fb4e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7fc68 FUN_143a7fc68 body=259 status=ok
// SIG undefined FUN_143a7fc68(void)

void FUN_143a7fc68(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
  if (0 < DAT_14cb3dad0) {
    uVar3 = 0;
    do {
      lVar5 = (longlong)(int)uVar3;
      if (*(int *)(*(longlong *)(DAT_14cb3dac8 + lVar5 * 8) + 8) == 0) {
        puVar2 = *(undefined8 **)(DAT_14cb3dac8 + lVar5 * 8);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        iVar4 = ~uVar3 + DAT_14cb3dad0;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(DAT_14cb3dac8 + lVar5 * 8),
                  (void *)(DAT_14cb3dac8 + (longlong)(DAT_14cb3dad0 - iVar4) * 8),
                  (longlong)iVar4 << 3);
        }
        DAT_14cb3dad0 = DAT_14cb3dad0 + -1;
        FUN_14182ec16();
      }
      else {
        uVar3 = uVar3 + 1;
      }
    } while ((int)uVar3 < DAT_14cb3dad0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7fd5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a7fd6c FUN_143a7fd6c body=87 status=ok
// SIG undefined FUN_143a7fd6c(void)

void FUN_143a7fd6c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  lVar3 = lVar2 + 0x88;
  if (*(longlong *)(lVar2 + 0x98) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x98);
  }
  iVar1 = *(int *)(lVar2 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_143a79364(*(undefined8 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_144948aec(lVar2);
  return;
}



// FUNCTION 143a7fdce FUN_143a7fdce body=12 status=ok
// SIG undefined FUN_143a7fdce(void)

void FUN_143a7fdce(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a7fdd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a7fdda FUN_143a7fdda body=29 status=ok
// SIG undefined FUN_143a7fdda(void)

undefined8 FUN_143a7fdda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a7fdf8 FUN_143a7fdf8 body=282 status=ok
// SIG undefined FUN_143a7fdf8(void)

undefined8 * FUN_143a7fdf8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a7ff12 FUN_143a7ff12 body=154 status=ok
// SIG undefined FUN_143a7ff12(void)

void FUN_143a7ff12(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = param_1[0x15];
  lVar4 = lVar3 + 0x88;
  if (*(longlong *)(lVar3 + 0x98) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x98);
  }
  iVar2 = *(int *)(lVar3 + 0xa0);
  if ((longlong)iVar2 != 0) {
    lVar5 = 0;
    do {
      FUN_143a79364(*(undefined8 *)(lVar4 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  FUN_144948aec(lVar3);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a7ff9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a7ffca FUN_143a7ffca body=29 status=ok
// SIG undefined FUN_143a7ffca(void)

void FUN_143a7ffca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a7ffe8 FUN_143a7ffe8 body=83 status=ok
// SIG undefined FUN_143a7ffe8(void)

undefined8 * FUN_143a7ffe8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14adf3320;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143a8003c FUN_143a8003c body=282 status=ok
// SIG undefined FUN_143a8003c(void)

undefined8 * FUN_143a8003c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a80156 FUN_143a80156 body=140 status=ok
// SIG undefined FUN_143a80156(void)

void FUN_143a80156(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1481ba9ee(param_1[0x15],&DAT_14ca85100,param_1[0x17],param_1[0x18]);
  plVar3 = (longlong *)param_1[0x16];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a801d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a801f8 FUN_143a801f8 body=12 status=ok
// SIG undefined FUN_143a801f8(void)

void FUN_143a801f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a80201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a80204 FUN_143a80204 body=29 status=ok
// SIG undefined FUN_143a80204(void)

undefined8 FUN_143a80204(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a80222 FUN_143a80222 body=282 status=ok
// SIG undefined FUN_143a80222(void)

undefined8 * FUN_143a80222(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a8033c FUN_143a8033c body=116 status=ok
// SIG undefined FUN_143a8033c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8033c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a96774(*(undefined8 *)(_DAT_000000a8 + 0x28),&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a96774(*(undefined8 *)(param_1[0x15] + 0x28),&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a80383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a803ee FUN_143a803ee body=29 status=ok
// SIG undefined FUN_143a803ee(void)

undefined8 FUN_143a803ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a8040c FUN_143a8040c body=922 status=ok
// SIG undefined FUN_143a8040c(void)

void FUN_143a8040c(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *_Src;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  bool bVar17;
  undefined8 local_58;
  
  param_2 = (undefined8 *)*param_2;
  if ((longlong)(int)param_1[2] == -1) {
    uVar15 = 0;
  }
  else {
    uVar15 = param_2[(longlong)(int)param_1[2] * 2];
  }
  if ((longlong)*(int *)((longlong)param_1 + 0x14) == -1) {
    uVar14 = 0;
  }
  else {
    uVar14 = param_2[(longlong)*(int *)((longlong)param_1 + 0x14) * 2];
  }
  if ((longlong)(int)param_1[3] == -1) {
    local_58 = 0;
  }
  else {
    local_58 = param_2[(longlong)(int)param_1[3] * 2];
  }
  uVar2 = *(undefined4 *)*param_2;
  lVar12 = *param_1;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x24);
  lVar8 = param_1[4];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar16 = lVar12 + 0xa8;
  lVar11 = *(longlong *)(lVar12 + 0xb8);
  if (*(longlong *)(lVar12 + 0xb8) == 0) {
    lVar11 = lVar16;
  }
  iVar5 = *(int *)(lVar12 + 0xc0);
  if ((longlong)iVar5 != 0) {
    lVar13 = 0;
    do {
      puVar9 = *(undefined8 **)(lVar11 + lVar13);
      if (puVar9 != *(undefined8 **)(lVar12 + 0x98)) {
        LOCK();
        bVar17 = *(int *)(puVar9 + 1) == 0;
        if (bVar17) {
          *(int *)(puVar9 + 1) = -1;
        }
        UNLOCK();
        if (bVar17) goto LAB_143a80637;
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar5 * 8 != lVar13);
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0x198,0x10);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = &PTR_FUN_14ade2d80;
  puVar9[2] = lVar12 + 0x20;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0xffffffff00000000;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  *(undefined8 *)((longlong)puVar9 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x84) = 0;
  puVar9[0x12] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x15] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar9 + 0xb4) = 0;
  puVar9[0x18] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x1b] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xdc) = 0;
  *(undefined8 *)((longlong)puVar9 + 0xe4) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x114) = 0;
  puVar9[0x20] = 0;
  puVar9[0x21] = 0;
  puVar9[0x1e] = 0;
  puVar9[0x1f] = 0;
  *(undefined8 *)((longlong)puVar9 + 300) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x134) = 0;
  puVar9[0x24] = 0;
  puVar9[0x25] = 0;
  puVar9[0x28] = 0;
  puVar9[0x29] = 0;
  puVar9[0x2c] = 0;
  puVar9[0x2d] = 0;
  puVar9[0x2e] = 0;
  puVar9[0x2f] = 0;
  *(undefined4 *)(puVar9 + 0x30) = 1;
  puVar9[0x31] = 0;
  puVar9[0x32] = 0;
  iVar5 = *(int *)(lVar12 + 0xc0);
  *(uint *)(lVar12 + 0xc0) = iVar5 + 1U;
  if (*(uint *)(lVar12 + 0xc4) < iVar5 + 1U) {
    FUN_140e69270(lVar16,(longlong)iVar5);
  }
  if (*(longlong *)(lVar12 + 0xb8) != 0) {
    lVar16 = *(longlong *)(lVar12 + 0xb8);
  }
  *(undefined8 **)(lVar16 + (longlong)iVar5 * 8) = puVar9;
  LOCK();
  if (*(int *)(puVar9 + 1) == 0) {
    *(int *)(puVar9 + 1) = -1;
  }
  UNLOCK();
LAB_143a80637:
  *(undefined8 **)(lVar12 + 0xa0) = puVar9;
  *(undefined4 *)(puVar9 + 0x24) = 0;
  lVar16 = *(longlong *)(lVar12 + 0xa0);
  if (*(int *)(lVar16 + 0x54) < 0) {
    *(undefined4 *)(lVar16 + 0x50) = 0;
    FUN_14481578e(lVar16 + 0x48,0);
  }
  else {
    *(undefined4 *)(lVar16 + 0x50) = 0;
  }
  FUN_1481b9930(*(undefined8 *)(lVar12 + 0xa0),uVar15,local_58,uVar14,0,uVar2,uVar4,(int)lVar8,uVar3
               );
  piVar1 = (int *)(*(longlong *)(lVar12 + 0xa0) + 8);
  LOCK();
  if (*piVar1 == -1) {
    *piVar1 = 0;
  }
  UNLOCK();
  *(undefined8 *)(lVar12 + 0x98) = *(undefined8 *)(lVar12 + 0xa0);
  *(undefined8 *)(lVar12 + 0xa0) = 0;
  lVar16 = *(longlong *)(*param_1 + 0x98);
  if (lVar16 != 0) {
    puVar9 = (undefined8 *)(lVar16 + 0x48);
    lVar12 = (longlong)(int)param_1[5];
    if (lVar12 != -1) {
      _Src = (void *)param_2[lVar12 * 2];
      if (_Src != (void *)0x0) {
        uVar6 = *(uint *)(param_2 + lVar12 * 2 + 1);
        uVar10 = uVar6 >> 2;
        uVar7 = *(uint *)(lVar16 + 0x50);
        if ((int)uVar7 < (int)uVar10) {
          *(uint *)(lVar16 + 0x50) = uVar10;
          if (*(int *)(lVar16 + 0x54) - uVar7 < uVar10 - uVar7) {
            FUN_1446f48e2(puVar9);
          }
        }
        else if (uVar10 < uVar7) {
          *(uint *)(lVar16 + 0x50) = uVar10;
          FUN_14479f406(puVar9);
        }
        memcpy((void *)*puVar9,_Src,(ulonglong)(uVar6 & 0xfffffffc));
        goto LAB_143a8074f;
      }
    }
    *(undefined4 *)(lVar16 + 0x50) = 0;
    if (*(int *)(lVar16 + 0x54) != 0) {
      FUN_14481578e(puVar9,0);
    }
  }
LAB_143a8074f:
  FUN_1481ba964(*param_1);
  return;
}



// FUNCTION 143a807a6 FUN_143a807a6 body=95 status=ok
// SIG undefined FUN_143a807a6(void)

undefined8 * FUN_143a807a6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14adf3400;
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar5[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((longlong)puVar5 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((longlong)puVar5 + 0x2c) = uVar4;
  puVar5[3] = uVar2;
  puVar5[4] = uVar3;
  return puVar5 + 1;
}



// FUNCTION 143a8080c FUN_143a8080c body=29 status=ok
// SIG undefined FUN_143a8080c(void)

void FUN_143a8080c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a8082a FUN_143a8082a body=83 status=ok
// SIG undefined FUN_143a8082a(void)

undefined8 * FUN_143a8082a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14adf3400;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143a8087e FUN_143a8087e body=157 status=ok
// SIG undefined FUN_143a8087e(void)

void FUN_143a8087e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  *(int *)(*param_1 + 0x10) = *(int *)(*param_1 + 0x10) + -1;
  UNLOCK();
  local_20 = *param_1;
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (*(int *)(local_20 + 0x20) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(local_20 + 0x18);
  }
  local_18 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_20);
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_20);
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a80932 FUN_143a80932 body=83 status=ok
// SIG undefined FUN_143a80932(void)

undefined8 * FUN_143a80932(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14adf3420;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143a80986 FUN_143a80986 body=184 status=ok
// SIG undefined FUN_143a80986(void)

void FUN_143a80986(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *param_2;
  if ((longlong)*(int *)(param_1 + 3) == -1) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + (longlong)*(int *)(param_1 + 3) * 0x10);
  }
  if ((longlong)*(int *)((longlong)param_1 + 0x1c) == -1) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10);
  }
  iVar1 = **(int **)(lVar2 + (longlong)*(int *)(param_1 + 2) * 0x10);
  if ((longlong)*(int *)(param_1 + 4) == -1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + (longlong)*(int *)(param_1 + 4) * 0x10);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if (iVar1 < *(int *)((longlong)param_1 + 0x14)) {
    iVar3 = iVar1;
  }
  FUN_1481bb740(*param_1,iVar3,uVar4,uVar5,uVar6,*(undefined4 *)((longlong)param_1 + 0x24),
                *(undefined4 *)(param_1 + 5),*(undefined4 *)((longlong)param_1 + 0x2c),
                *(undefined4 *)(param_1 + 6),*(undefined4 *)((longlong)param_1 + 0x34),
                *(undefined4 *)(param_1 + 7));
  FUN_1481bb83a(*param_1);
  return;
}



// FUNCTION 143a80a3e FUN_143a80a3e body=103 status=ok
// SIG undefined FUN_143a80a3e(void)

undefined8 * FUN_143a80a3e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar7;
  *puVar7 = &PTR_FUN_14adf3440;
  puVar7[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar7[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((longlong)puVar7 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((longlong)puVar7 + 0x3c) = uVar6;
  puVar7[5] = uVar4;
  puVar7[6] = uVar5;
  puVar7[3] = uVar2;
  puVar7[4] = uVar3;
  return puVar7 + 1;
}



// FUNCTION 143a80aac FUN_143a80aac body=29 status=ok
// SIG undefined FUN_143a80aac(void)

void FUN_143a80aac(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143a80aca FUN_143a80aca body=83 status=ok
// SIG undefined FUN_143a80aca(void)

undefined8 * FUN_143a80aca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14adf3440;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143a80b1e FUN_143a80b1e body=29 status=ok
// SIG undefined FUN_143a80b1e(void)

undefined8 FUN_143a80b1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a80b50 FUN_143a80b50 body=85 status=ok
// SIG undefined FUN_143a80b50(void)

void FUN_143a80b50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf3460;
  return;
}



// FUNCTION 143a80ba6 FUN_143a80ba6 body=85 status=ok
// SIG undefined FUN_143a80ba6(void)

void FUN_143a80ba6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf3460;
  return;
}



// FUNCTION 143a80bfc FUN_143a80bfc body=118 status=ok
// SIG undefined FUN_143a80bfc(void)

void FUN_143a80bfc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adf3460;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a80c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a80c78 FUN_143a80c78 body=16 status=ok
// SIG undefined FUN_143a80c78(void)

undefined1 FUN_143a80c78(void)

{
  FUN_143a80c88();
  return 1;
}



// FUNCTION 143a80c88 FUN_143a80c88 body=325 status=ok
// SIG undefined FUN_143a80c88(void)

void FUN_143a80c88(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  int local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_36 = 1;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_38 = 0x101;
  FUN_1456d06d8(&local_b0,0x10,1,0);
  uVar4 = (ulonglong)local_a0;
  lVar3 = local_b0;
  if ((int)local_a0 < local_a8 && -1 < (int)local_a0) {
    iVar2 = local_a8;
    do {
      lVar1 = *(longlong *)(lVar3 + (uVar4 & 0xffffffff) * 8);
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
        FUN_14080a1d0(&local_98,lVar1,CONCAT71((int7)(uVar4 >> 8),1));
        uVar4 = (ulonglong)local_a0;
        lVar3 = local_b0;
        iVar2 = local_a8;
      }
      uVar4 = (longlong)(int)uVar4;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        local_a0 = (uint)uVar4;
        if ((longlong)iVar2 <= (longlong)uVar4) break;
      } while (*(longlong *)(lVar3 + uVar4 * 8) == 0);
    } while ((-2 < (longlong)uVar5) && ((int)local_a0 < iVar2));
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  FUN_14080a2a6(&local_98);
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a80dce FUN_143a80dce body=29 status=ok
// SIG undefined FUN_143a80dce(void)

undefined8 FUN_143a80dce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a80e00 FUN_143a80e00 body=85 status=ok
// SIG undefined FUN_143a80e00(void)

void FUN_143a80e00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf34d0;
  return;
}



// FUNCTION 143a80e56 FUN_143a80e56 body=85 status=ok
// SIG undefined FUN_143a80e56(void)

void FUN_143a80e56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adf34d0;
  return;
}



// FUNCTION 143a80eac FUN_143a80eac body=118 status=ok
// SIG undefined FUN_143a80eac(void)

void FUN_143a80eac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adf34d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a80f13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a80f28 FUN_143a80f28 body=16 status=ok
// SIG undefined FUN_143a80f28(void)

undefined1 FUN_143a80f28(void)

{
  FUN_143a80f38();
  return 1;
}



// FUNCTION 143a80f38 FUN_143a80f38 body=457 status=ok
// SIG undefined FUN_143a80f38(void)

void FUN_143a80f38(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [24];
  longlong local_b0;
  int local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_38 = 0;
  local_36 = 1;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_1456d06d8(&local_b0,0x10,1,0);
  uVar1 = (ulonglong)local_a0;
  if ((-1 < (int)local_a0) && ((int)local_a0 < local_a8)) {
    do {
      FUN_14080a1d0(&local_98,*(undefined8 *)(local_b0 + (uVar1 & 0xffffffff) * 8),1);
      uVar1 = (longlong)(int)local_a0;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_a0 = (uint)uVar1;
        if ((longlong)local_a8 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_b0 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_a0 < local_a8));
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_14080a3f0(&local_98);
  FUN_14012e468(&local_b0,0x10,1,0);
  uVar1 = (ulonglong)local_a0;
  if ((-1 < (int)local_a0) && ((int)local_a0 < local_a8)) {
    do {
      FUN_14080a7a8(*(undefined8 *)(local_b0 + (uVar1 & 0xffffffff) * 8));
      FUN_140719760(local_c8,*(undefined8 *)(local_b0 + (longlong)(int)local_a0 * 8),0);
      FUN_14071963e(local_c8);
      uVar1 = (longlong)(int)local_a0;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_a0 = (uint)uVar1;
        if ((longlong)local_a8 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_b0 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_a0 < local_a8));
  }
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_14080a2a6(&local_98);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a81102 FUN_143a81102 body=282 status=ok
// SIG undefined FUN_143a81102(void)

undefined8 * FUN_143a81102(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a7d97b);
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



// FUNCTION 143a8121c FUN_143a8121c body=899 status=ok
// SIG undefined FUN_143a8121c(void)

void FUN_143a8121c(undefined8 *param_1)

{
  PSRWLOCK SRWLock;
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1481f8b6a(param_1 + 0x15,&local_60);
  if ((local_60 != 0) && (lVar8 = (longlong)*(int *)(local_60 + 0x50), lVar8 != 0)) {
    if (*(char *)(local_60 + 0x40) == '\0') {
      lVar9 = *(longlong *)(local_60 + 0x48);
LAB_143a8128c:
      if ((lVar9 != 0) && (lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x268) + 0x1c8), lVar8 != 0))
      {
        if (0 < *(int *)(lVar8 + 0xb4)) {
          iVar7 = 0;
          do {
            FUN_140794830(lVar8,&local_70,iVar7);
            if (local_70 == (code *)0x0) {
LAB_143a813ea:
              *(undefined4 *)(lVar9 + 0x360) = 5;
              if ((local_60 != 0) && (FUN_14018d992(), DAT_14c951858 == 0)) {
                local_70 = FUN_1449e2820;
                local_80 = FUN_14081d0ea;
                local_88 = FUN_14081d0ea;
                local_98 = &LAB_1468c5283;
                local_a0 = FUN_142809da0;
                local_a8 = L"Engine";
                local_b0 = 0x400000000;
                local_b8 = 0x10000000;
                local_c0 = 8;
                local_c8 = 0x50;
                local_90 = &local_70;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              goto LAB_143a81410;
            }
            lVar4 = *(longlong *)
                     (*(longlong *)(*(longlong *)(local_68 + 8) + 0x50) +
                     (longlong)*(int *)(local_70 + 0xd4) * 8);
            if (lVar4 == 0) {
              lVar4 = FUN_1400bafc2(*(longlong *)(local_68 + 8),(longlong)*(int *)(local_70 + 0xd4),
                                    1);
            }
            lVar3 = DAT_14ca811d0;
            if (((lVar4 == 0) || (DAT_14c760d84 == 0)) || ((DAT_14ca84f5a & 1) == 0))
            goto LAB_143a813ea;
            SRWLock = (PSRWLOCK)(DAT_14ca811d0 + 8);
            AcquireSRWLockShared(SRWLock);
            if (*(int *)(lVar3 + 0x28) == *(int *)(lVar3 + 0x54)) {
LAB_143a813e1:
              ReleaseSRWLockShared(SRWLock);
              goto LAB_143a813ea;
            }
            lVar6 = lVar3 + 0x58;
            if (*(longlong *)(lVar3 + 0x60) != 0) {
              lVar6 = *(longlong *)(lVar3 + 0x60);
            }
            iVar5 = *(int *)(lVar6 + (ulonglong)
                                     (*(int *)(lVar3 + 0x68) - 1U &
                                     (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
            if (iVar5 == -1) goto LAB_143a813e1;
            while (lVar6 = *(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 0x20,
                  *(longlong *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 0x20) != lVar4) {
              iVar5 = *(int *)(lVar6 + 0x18);
              if (iVar5 == -1) goto LAB_143a813e1;
            }
            if ((lVar6 == 0) || (lVar6 == -8)) goto LAB_143a813e1;
            bVar2 = *(byte *)(lVar6 + 0x14);
            ReleaseSRWLockShared(SRWLock);
            if (((bVar2 & 6) == 0) || ((bVar2 & 4) != 0)) goto LAB_143a813ea;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar8 + 0xb4));
        }
        *(undefined4 *)(lVar9 + 0x360) = 2;
      }
    }
    else {
      lVar9 = *(longlong *)(local_60 + 0x48);
      if (((local_54 == 0 && local_58 == 0) && local_50 == 0) && local_4c == 0) {
        lVar8 = lVar8 * 0x368;
        do {
          if ((((*(int *)(lVar9 + 8) == *(int *)(local_60 + 0x30)) &&
               (*(int *)(lVar9 + 0xc) == *(int *)(local_60 + 0x34))) &&
              (*(int *)(lVar9 + 0x10) == *(int *)(local_60 + 0x38))) &&
             (*(int *)(lVar9 + 0x14) == *(int *)(local_60 + 0x3c))) goto LAB_143a8128c;
          lVar9 = lVar9 + 0x368;
          lVar8 = lVar8 + -0x368;
        } while (lVar8 != 0);
      }
      else {
        lVar8 = lVar8 * 0x368;
        do {
          if (((*(int *)(lVar9 + 8) == local_58) && (*(int *)(lVar9 + 0xc) == local_54)) &&
             ((*(int *)(lVar9 + 0x10) == local_50 && (*(int *)(lVar9 + 0x14) == local_4c))))
          goto LAB_143a8128c;
          lVar9 = lVar9 + 0x368;
          lVar8 = lVar8 + -0x368;
        } while (lVar8 != 0);
      }
    }
  }
LAB_143a81410:
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a815a0 FUN_143a815a0 body=2819 status=ok
// SIG undefined FUN_143a815a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a815a0(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  char **local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined4 local_74;
  char *local_70;
  int local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_70,&DAT_14cb3d8e8);
  if (cVar2 == '\0') {
    _DAT_14cb3d8e8 = 0;
    uRam000000014cb3d8f0 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 0;
  local_98 = (char **)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade0000,1,0);
  FUN_1446f470e(&DAT_14cb3d910,L"LoadTexture2D",1);
  FUN_1446f470e(&DAT_14cb3d918,L"GatherRedTexture2D",1);
  FUN_1446f470e(&DAT_14cb3d920,L"SampleTexture2D",1);
  FUN_1446f470e(&DAT_14cb3d928,L"SamplePseudoVolumeTexture",1);
  FUN_1446f470e(&DAT_14cb3d930,L"GetTextureDimensions",1);
  FUN_1446f470e(&DAT_14cb3d938,L"GetNumMipLevels",1);
  local_88 = 0;
  local_98 = (char **)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade06d0,1,0);
  local_70 = "SampleVector2DCurve";
  local_68 = 0x13;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3d958 = (ulonglong)uVar3;
  local_88 = 0;
  local_98 = (char **)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade0d70,1,0);
  FUN_1446f470e(&DAT_14cb3d978,L"SampleColorCurve",1);
  local_88 = 0;
  local_98 = (char **)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade13b0,1,0);
  FUN_1446f470e(&DAT_14cb3d998,L"SampleVectorCurve",1);
  local_88 = 0;
  local_98 = (char **)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade1a20,1,0);
  local_70 = "SampleField";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3d9b8 = (ulonglong)uVar3;
  local_70 = "LoadField";
  local_68 = 9;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3d9c0 = (ulonglong)uVar3;
  local_70 = "FieldTilingAxes";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3d9c8 = (ulonglong)uVar3;
  local_70 = "FieldDimensions";
  local_68 = 0xf;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3d9d0 = (ulonglong)uVar3;
  local_70 = "FieldBounds";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3d9d8 = (ulonglong)uVar3;
  local_88 = 0;
  local_98 = (char **)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade1fc0,1,0);
  local_70 = "SetFrame";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3da38 = (ulonglong)uVar3;
  local_70 = "ReadFile";
  local_68 = 8;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3da40 = (ulonglong)uVar3;
  local_70 = "GetNumCells";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  DAT_14cb3da48 = (ulonglong)uVar3;
  local_70 = "IndexToUnit";
  local_68 = 0xb;
  local_64 = 0;
  uVar3 = FUN_14001a6c0(&local_70,1);
  _DAT_14cb3da50 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cb3da58,L"SampleCurrentFrameValue",1);
  FUN_1446f470e(&DAT_14cb3da60,L"GetCurrentFrameValue",1);
  FUN_1446f470e(&DAT_14cb3da68,L"GetCurrentFrameNumCells",1);
  local_88 = 0;
  local_98 = (char **)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade2620,1,0);
  FUN_1446f470e(&DAT_14cb3da88,L"LoadVolumeTexture",1);
  FUN_1446f470e(&DAT_14cb3da90,L"SampleVolumeTexture",1);
  FUN_1446f470e(&DAT_14cb3da98,L"TextureDimensions3D",1);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb3daa0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb3daa0,4000);
  atexit((_func_5014 *)&LAB_143a77172);
  DAT_14cb3dac8 = 0;
  _DAT_14cb3dad0 = 0;
  atexit((_func_5014 *)&LAB_143a77180);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3dad8,L"fx.NiagaraDataBufferMinSize",&DAT_14c7628a8,
                L"Niagara data buffer minimum allocation size in bytes (Default=512).");
  atexit(FUN_143a77191);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3dae8,L"fx.NiagaraDataBufferShrinkFactor",&DAT_14c7628ac,
                L"Niagara data buffer size threshold for shrinking. (Default=3) \nThe buffer will be reallocated when the used size becomes 1/F of the allocated size."
               );
  atexit(FUN_143a771d6);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3daf8,L"fx.NiagaraGPUDataBufferChunkSize",&DAT_14c7628b0,
                L"Niagara GPU data buffer allocation chunk size used to round GPU allocations in bytes, must be power of 2 (Default=4096)\n"
               );
  atexit(FUN_143a7721b);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3db08,L"fx.NiagaraGPUDataBufferShrinkFactor",&DAT_14c7628b4,
                L"Niagara GPU data buffer size threshold for shrinking. (Default=2) \nThe buffer will be reallocated when the used size becomes 1/F of the allocated size. \n"
               );
  atexit(FUN_143a77260);
  local_98._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb3db18,L"fx.NiagaraGPUDataWarningSize",&DAT_14cb3db28,
                L"Allocation size where we should log a warning.");
  atexit(FUN_143a772a5);
  local_98 = (char **)CONCAT44(local_98._4_4_,0x40);
  FUN_14153156c(&DAT_14cb3db30,L"fx.NiagaraReleaseBuffersOnReset",&DAT_14c7628b8,
                L"Will release all memory associated with data buffers when the dataset is reset.");
  atexit(FUN_143a772ea);
  DAT_14cb3db48 = 0;
  uRam000000014cb3db50 = 0;
  DAT_14cb3db58 = 0;
  _DAT_14cb3db60 = 0;
  _DAT_14cb3db68 = 0;
  DAT_14cb3db70 = 2;
  _DAT_14cb3db88 = 0xffffffff;
  FUN_14043115e(&DAT_14cb3db48);
  atexit(FUN_143a7a5d7);
  local_70 = "bone";
  local_68 = 4;
  local_64 = 0;
  FUN_14001a6c0(&local_70,1);
  local_88 = 10;
  ppuStack_90 = &PTR_FUN_14ade7ae0;
  local_98 = (char **)0x13;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade7f20,1,&PTR_FUN_14ade7c20);
  local_88 = 0;
  local_98 = (char **)0x0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade8810,1,0);
  DAT_14cb3de90 = 0;
  _DAT_14cb3de98 = 0;
  atexit((_func_5014 *)&LAB_143a7b554);
  ppuStack_90 = (undefined **)0x0;
  local_88 = 0;
  local_98 = (char **)0x1;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ade9050,2,&PTR_FUN_14ade9020);
  local_98._0_4_ = 4;
  FUN_141471170(&DAT_14cb3dee8,L"fx.NumFramesBetweenRuntimePerfSamples",&DAT_14c7628bc,
                L"How many frames between each sample of Niagara runtime perf. \n");
  atexit(FUN_143a7b565);
  local_98 = (char **)CONCAT44(local_98._4_4_,4);
  FUN_141471170(&DAT_14cb3def8,L"fx.NiagaraRuntimeCycleHistorySize",&DAT_14c7628c0,
                L"How many frames history to use in Niagara\'s runtime performance trackers. \n");
  atexit(FUN_143a7b5aa);
  DAT_14cb3dfe4 = 0x3f000000;
  DAT_14cb3dfe8 = 0x3f800000;
  DAT_14cb3dfec = 0x3f800000;
  DAT_14cb3dff0 = 0x3f000000;
  local_88 = 3;
  ppuStack_90 = &PTR_FUN_14adebcb0;
  local_98 = (char **)0xa;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adebea0,4,&PTR_FUN_14adebd10);
  local_88 = 3;
  ppuStack_90 = &PTR_FUN_14adeddc0;
  local_98 = (char **)0x6;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14adedf10,1,&PTR_FUN_14adede20);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e280,L"fx.ForceCompileOnLoad",&DAT_14cb3e290,
                L"If > 0 emitters will be forced to compile on load. \n");
  atexit(FUN_143a7bb41);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e298,L"fx.ForceMergeOnLoad",&DAT_14cb3e2a8,
                L"If > 0 emitters will be forced to merge on load. \n");
  atexit(FUN_143a7bb86);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e2b0,L"fx.ForceNiagaraCompileToFail",&DAT_14cb3e2c0,
                L"If > 0 emitters will go through the motions of a compile, but will never set valid bytecode. \n"
               );
  atexit(FUN_143a7bbcb);
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cb3e2c8,L"fx.EnableEmitterMergeChangeIdLogging",&DAT_14cb3e2d8,
                L"If > 0 verbose change id information will be logged to help with debuggin merge issues. \n"
               );
  atexit(FUN_143a7bc10);
  local_98 = (char **)CONCAT44(local_98._4_4_,0x40);
  FUN_141471170(&DAT_14cb3e2e0,L"fx.Niagara.Emitter.ComputePSOPrecacheMode",&DAT_14c7628c4,
                L"Controlls how PSO precaching should be done for Niagara compute shaders\n0 = Disabled (Default).\n1 = Enabled if r.PSOPrecaching is also enabled. Emitters are not allowed to run until they complete if r.PSOPrecache.ProxyCreationWhenPSOReady=1\n2 = Force Enabled.\n3 = Force Enabled, emitters are not allowed to run until they complete."
               );
  atexit(FUN_143a7bc55);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_14adf3460;
  ppuStack_90 = (undefined **)CONCAT44(ppuStack_90._4_4_,0x40);
  local_98 = &local_70;
  FUN_141703554(&DAT_14cb3e2f0,L"fx.Niagara.Emitter.MaxGPUBufferElements",&DAT_14cb3e300,
                L"Maximum elements per GPU buffer, for example 4k elements would restrict a float buffer to be 16k maximum per buffer.\nNote: If you request something smaller than what will satisfy a single unit of work it will be increased to that size.\nDefault 0 which will allow the buffer to be the maximum allowed by the RHI.\n"
               );
  if (local_68 == 0) {
LAB_143a81f32:
    if (local_70 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_143a81f32;
  }
  atexit(FUN_143a7bc9a);
  local_70 = (char *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *(undefined ***)local_70 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_70 + 0x10) = lVar4;
  *(undefined ***)local_70 = &PTR_FUN_14adf34d0;
  local_74 = 0xbf800000;
  local_98 = (char **)((ulonglong)local_98 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14cb3e308,L"fx.Niagara.Emitter.GbxBoostPreAllocationCount",&local_74,
                L"Boost the Niagara Emitters globally Pre-Allocation Count with X amount when they\'re setting to \'FixCounted\'<0: Default>0: Boost the Niagara Emitters to X times of Pre-Allocation Count"
               );
  (**(code **)(*DAT_14cb3e310 + 200))(DAT_14cb3e310,&local_70);
  if (local_68 != 0) {
    if (local_70 == (char *)0x0) goto LAB_143a82032;
    (*(code *)**(undefined8 **)local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143a82032:
  atexit(FUN_143a7bcdf);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a820a4 FUN_143a820a4 body=55 status=ok
// SIG undefined FUN_143a820a4(void)

void FUN_143a820a4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3e660 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3e660 = FUN_14171c317(FUN_1464749ca,uVar1,L"ENiagaraEmitterMode");
  }
  return;
}



// FUNCTION 143a820dc FUN_143a820dc body=60 status=ok
// SIG undefined FUN_143a820dc(void)

longlong * FUN_143a820dc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  param_2[1] = *(longlong *)(param_1 + 0x30);
  param_2[2] = lVar1;
  return param_2;
}



// FUNCTION 143a82118 FUN_143a82118 body=69 status=ok
// SIG undefined FUN_143a82118(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a82118(void)

{
  _DAT_14cb3e688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8215a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e690,1);
  return;
}



// FUNCTION 143a8215d FUN_143a8215d body=69 status=ok
// SIG undefined FUN_143a8215d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8215d(void)

{
  _DAT_14cb3e6a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8219f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e6a8,1);
  return;
}



// FUNCTION 143a821a2 FUN_143a821a2 body=69 status=ok
// SIG undefined FUN_143a821a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a821a2(void)

{
  _DAT_14cb3e6b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a821e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e6c0,1);
  return;
}



// FUNCTION 143a821e7 FUN_143a821e7 body=69 status=ok
// SIG undefined FUN_143a821e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a821e7(void)

{
  _DAT_14cb3e6d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a82229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e6d8,1);
  return;
}



// FUNCTION 143a8222c FUN_143a8222c body=69 status=ok
// SIG undefined FUN_143a8222c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8222c(void)

{
  _DAT_14cb3e6e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8226e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e6f0,1);
  return;
}



// FUNCTION 143a82271 FUN_143a82271 body=69 status=ok
// SIG undefined FUN_143a82271(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a82271(void)

{
  _DAT_14cb3e6f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a822b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e700,1);
  return;
}



// FUNCTION 143a822b6 FUN_143a822b6 body=432 status=ok
// SIG undefined FUN_143a822b6(void)

void FUN_143a822b6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  longlong local_38 [2];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0xd4) != 4) {
    FUN_143aa355c(param_1 + 0x1d8,1);
    FUN_143aa355c(param_1 + 0x480,1);
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((lVar1 == 0) || (lVar5 = (longlong)*(int *)(lVar1 + 0x50), lVar5 == 0)) {
      lVar3 = 0;
    }
    else if (*(char *)(lVar1 + 0x40) == '\0') {
      lVar3 = *(longlong *)(lVar1 + 0x48);
    }
    else {
      lVar4 = *(longlong *)(lVar1 + 0x48);
      if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
          *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
        lVar5 = lVar5 * 0x368;
        do {
          if ((((*(int *)(lVar4 + 8) == *(int *)(lVar1 + 0x30)) &&
               (*(int *)(lVar4 + 0xc) == *(int *)(lVar1 + 0x34))) &&
              (*(int *)(lVar4 + 0x10) == *(int *)(lVar1 + 0x38))) &&
             (lVar3 = lVar4, *(int *)(lVar4 + 0x14) == *(int *)(lVar1 + 0x3c))) break;
          lVar4 = lVar4 + 0x368;
          lVar5 = lVar5 + -0x368;
          lVar3 = 0;
        } while (lVar5 != 0);
      }
      else {
        lVar5 = lVar5 * 0x368;
        do {
          if (((*(int *)(lVar4 + 8) == *(int *)(param_1 + 0x30)) &&
              (*(int *)(lVar4 + 0xc) == *(int *)(param_1 + 0x34))) &&
             ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x38) &&
              (lVar3 = lVar4, *(int *)(lVar4 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
          lVar4 = lVar4 + 0x368;
          lVar5 = lVar5 + -0x368;
          lVar3 = 0;
        } while (lVar5 != 0);
      }
    }
    if ((*(char *)(lVar3 + 0x3c) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_1446f470e(local_28,L"UniqueID",1);
    FUN_140056680(local_38,L"Particle Data");
    local_48 = local_28;
    FUN_1481b9880(uVar2,0,0xffffffff,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a82478 FUN_143a82478 body=4072 status=ok
// SIG undefined FUN_143a82478(void)

void FUN_143a82478(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  int *piVar12;
  byte bVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined2 *puVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint *puVar27;
  bool bVar28;
  undefined1 auStack_118 [40];
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(int *)(param_1 + 200) = param_2;
  lVar19 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) + 0xb8) +
           (longlong)param_2 * 0x48;
  lVar26 = *(longlong *)(lVar19 + 0x28);
  if ((DAT_14c950c29 == 1) && (lVar26 != 0)) {
    FUN_1456cec3c(lVar26);
  }
  local_b8 = *(undefined8 *)(lVar19 + 0x30);
  uStack_b0 = *(longlong **)(lVar19 + 0x38);
  if (((DAT_14c950c29 & 1) != 0) && (lVar26 != 0)) {
    FUN_1456cec3c(lVar26);
  }
  *(longlong *)(param_1 + 0x28) = lVar26;
  *(undefined4 *)(param_1 + 0x30) = (undefined4)local_b8;
  *(undefined4 *)(param_1 + 0x34) = local_b8._4_4_;
  *(undefined4 *)(param_1 + 0x38) = (undefined4)uStack_b0;
  *(undefined4 *)(param_1 + 0x3c) = uStack_b0._4_4_;
  *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(lVar19 + 0x18);
  *(undefined8 *)(param_1 + 0x754) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x75c) = 0;
  *(byte *)(param_1 + 0x764) = *(byte *)(param_1 + 0x764) & 0xfe;
  if ((lVar26 != 0) && (lVar23 = (longlong)*(int *)(lVar26 + 0x50), lVar23 != 0)) {
    if (*(char *)(lVar26 + 0x40) == '\0') {
      lVar21 = *(longlong *)(lVar26 + 0x48);
LAB_143a82553:
      if (lVar21 != 0) {
        bVar6 = *(byte *)(param_1 + 0xd0) & 0xfe | *(byte *)(lVar21 + 0x30);
        *(byte *)(param_1 + 0xd0) = bVar6;
        bVar6 = bVar6 & 0xfd | *(char *)(lVar21 + 0x31) * '\x02';
        *(byte *)(param_1 + 0xd0) = bVar6;
        bVar13 = *(byte *)(lVar21 + 0x2b8) & 4;
        *(byte *)(param_1 + 0xd0) = bVar6 & 0xfb | bVar13;
        *(byte *)(param_1 + 0xd0) = bVar6 & 0xf3 | bVar13 | (*(byte *)(lVar21 + 0x2b8) & 2) << 2;
        *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(lVar21 + 0x3c);
        *(int *)(param_1 + 0x744) =
             *(int *)(*(longlong *)(param_1 + 8) + 0xe0) + *(int *)(lVar21 + 0x34);
        uVar8 = FUN_144a44170(lVar21);
        *(undefined4 *)(param_1 + 0x754) = uVar8;
        lVar26 = *(longlong *)(param_1 + 0x28);
        if ((lVar26 == 0) || (lVar23 = (longlong)*(int *)(lVar26 + 0x50), lVar23 == 0)) {
          lVar24 = 0;
        }
        else if (*(char *)(lVar26 + 0x40) == '\0') {
          lVar24 = *(longlong *)(lVar26 + 0x48);
        }
        else {
          lVar15 = *(longlong *)(lVar26 + 0x48);
          if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
              *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
            lVar23 = lVar23 * 0x368;
            do {
              if ((((*(int *)(lVar15 + 8) == *(int *)(lVar26 + 0x30)) &&
                   (*(int *)(lVar15 + 0xc) == *(int *)(lVar26 + 0x34))) &&
                  (*(int *)(lVar15 + 0x10) == *(int *)(lVar26 + 0x38))) &&
                 (lVar24 = lVar15, *(int *)(lVar15 + 0x14) == *(int *)(lVar26 + 0x3c))) break;
              lVar15 = lVar15 + 0x368;
              lVar23 = lVar23 + -0x368;
              lVar24 = 0;
            } while (lVar23 != 0);
          }
          else {
            lVar23 = lVar23 * 0x368;
            do {
              if (((*(int *)(lVar15 + 8) == *(int *)(param_1 + 0x30)) &&
                  (*(int *)(lVar15 + 0xc) == *(int *)(param_1 + 0x34))) &&
                 ((*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x38) &&
                  (lVar24 = lVar15, *(int *)(lVar15 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
              lVar15 = lVar15 + 0x368;
              lVar23 = lVar23 + -0x368;
              lVar24 = 0;
            } while (lVar23 != 0);
          }
        }
        if (lVar24 != 0) {
          lVar26 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
          iVar3 = *(int *)(param_1 + 200);
          if (((*(char *)(*(longlong *)(lVar26 + 0xb8) + 0x20 + (longlong)iVar3 * 0x48) != '\0') &&
              ((*(byte *)(lVar24 + 0x2b8) & 1) != 0)) &&
             ((-1 < iVar3 && (iVar3 < *(int *)(lVar26 + 0xf0))))) {
            lVar23 = (longlong)iVar3 * 0x10;
            uVar11 = *(undefined8 *)(*(longlong *)(lVar26 + 0xe8) + lVar23);
            plVar14 = *(longlong **)(*(longlong *)(lVar26 + 0xe8) + 8 + lVar23);
            if (plVar14 == (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x718) = uVar11;
              plVar18 = *(longlong **)(param_1 + 0x720);
              if (plVar18 != (longlong *)0x0) {
                *(undefined8 *)(param_1 + 0x720) = 0;
LAB_143a826c4:
                LOCK();
                plVar14 = plVar18 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)*plVar18)(plVar18);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar18 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  iVar3 = *piVar12;
                  UNLOCK();
joined_r0x000143a826f1:
                  if (iVar3 == 0) {
                    (**(code **)(*plVar18 + 0x10))(plVar18);
                  }
                }
              }
            }
            else {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
              *(undefined8 *)(param_1 + 0x718) = uVar11;
              plVar18 = *(longlong **)(param_1 + 0x720);
              if (plVar14 == plVar18) {
                LOCK();
                plVar18 = plVar14 + 1;
                *(int *)plVar18 = (int)*plVar18 + -1;
                UNLOCK();
                if ((int)*plVar18 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar12 = (int *)((longlong)plVar14 + 0xc);
                  *piVar12 = *piVar12 + -1;
                  iVar3 = *piVar12;
                  UNLOCK();
                  plVar18 = plVar14;
                  goto joined_r0x000143a826f1;
                }
              }
              else {
                *(longlong **)(param_1 + 0x720) = plVar14;
                if (plVar18 != (longlong *)0x0) goto LAB_143a826c4;
              }
            }
            if (*(int *)(param_1 + 0xd4) == 4) goto LAB_143a8335a;
            plVar14 = (longlong *)(param_1 + 400);
            uVar9 = *(uint *)(*(longlong *)(param_1 + 0x718) + 8);
            iVar3 = *(int *)(param_1 + 0x198);
            if (iVar3 < (int)uVar9) {
              *(uint *)(param_1 + 0x198) = uVar9;
              if ((uint)(*(int *)(param_1 + 0x19c) - iVar3) < uVar9 - iVar3) {
                FUN_14181d9ee(plVar14,iVar3);
              }
              FUN_143a9ac16((longlong)iVar3 * 0x10 + *plVar14,uVar9 - iVar3);
            }
            else {
              uVar25 = (ulonglong)uVar9;
              if ((int)uVar9 < 0) goto LAB_143a8324e;
              if ((int)uVar9 < iVar3) {
                *(uint *)(param_1 + 0x198) = uVar9;
                FUN_1481ca8e4(plVar14);
              }
            }
            FUN_1402ed004(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x718) + 0xf0,0);
            FUN_143a83462(param_1,0);
            local_e8 = (ulonglong)*(uint *)(lVar21 + 0x88);
            iVar3 = *(int *)(lVar21 + 0x110);
            uVar25 = (ulonglong)*(uint *)(lVar21 + 0x138);
            if ((*(uint *)(lVar21 + 0x138) != 0 || iVar3 != 0) || *(uint *)(lVar21 + 0x88) != 0) {
              puVar10 = (undefined8 *)FUN_14001cc68(0x78,0x10);
              *puVar10 = 0;
              puVar10[1] = 0;
              puVar10[2] = 0;
              puVar10[3] = 0;
              puVar10[4] = 0;
              puVar10[5] = 0;
              puVar10[6] = 0;
              puVar10[7] = 0;
              puVar10[8] = 0;
              puVar10[9] = 0;
              puVar10[10] = 0;
              puVar10[0xb] = 0;
              puVar10[0xc] = 0;
              puVar10[0xd] = 0;
              puVar10[0xe] = 0;
              lVar26 = *(longlong *)(param_1 + 0x728);
              *(undefined8 **)(param_1 + 0x728) = puVar10;
              if (lVar26 != 0) {
                FUN_140d2beec(lVar26);
                FUN_1400020a8(lVar26);
                puVar10 = *(undefined8 **)(param_1 + 0x728);
              }
              local_e0 = uVar25;
              if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar3);
              }
              *(undefined4 *)(puVar10 + 5) = 0;
              if (*(int *)((longlong)puVar10 + 0x2c) != iVar3) {
                FUN_141833160(puVar10 + 4,iVar3);
              }
              FUN_1403ed7b2(*(longlong *)(param_1 + 0x728) + 0x40,iVar3,1);
              if ((longlong)*(int *)(lVar21 + 0x110) != 0) {
                lVar26 = *(longlong *)(lVar21 + 0x108);
                local_f0 = (longlong)*(int *)(lVar21 + 0x110) * 0x58 + lVar26;
                lVar23 = 0;
                do {
                  uVar11 = FUN_1410843e6(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar19 + 0x18)
                                        );
                  FUN_1402ed004(uVar11,lVar26 + 0x10);
                  lVar24 = *(longlong *)(param_1 + 0x728);
                  iVar3 = *(int *)(lVar24 + 0x28);
                  *(uint *)(lVar24 + 0x28) = iVar3 + 1U;
                  if (*(uint *)(lVar24 + 0x2c) < iVar3 + 1U) {
                    FUN_1481ca980((longlong *)(lVar24 + 0x20),iVar3);
                  }
                  *(undefined8 *)(*(longlong *)(lVar24 + 0x20) + (longlong)iVar3 * 8) = uVar11;
                  if ((longlong)*(int *)(lVar21 + 0x278) != 0) {
                    lVar24 = 0;
                    do {
                      uVar22 = 1;
                      if (*(longlong *)(*(longlong *)(lVar21 + 0x270) + lVar24) ==
                          *(longlong *)(lVar26 + 4)) goto LAB_143a828bf;
                      lVar24 = lVar24 + 8;
                    } while ((longlong)*(int *)(lVar21 + 0x278) * 8 != lVar24);
                  }
                  uVar22 = 0;
LAB_143a828bf:
                  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x40) + lVar23) =
                       uVar22;
                  lVar23 = lVar23 + 1;
                  lVar26 = lVar26 + 0x58;
                } while (lVar26 != local_f0);
              }
              uVar25 = local_e0;
              if ((int)local_e0 < 0) goto LAB_143a8324e;
              lVar26 = *(longlong *)(param_1 + 0x728);
              *(undefined4 *)(lVar26 + 0x38) = 0;
              if (*(int *)(lVar26 + 0x3c) != (int)local_e0) {
                FUN_141833160(lVar26 + 0x30,local_e0 & 0xffffffff);
              }
              FUN_1403ed7b2(*(longlong *)(param_1 + 0x728) + 0x50,uVar25 & 0xffffffff,1);
              if ((longlong)*(int *)(lVar21 + 0x138) != 0) {
                lVar26 = *(longlong *)(lVar21 + 0x130);
                local_f0 = (longlong)*(int *)(lVar21 + 0x138) * 0x58 + lVar26;
                lVar23 = 0;
                do {
                  uVar11 = FUN_1410843e6(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar19 + 0x18)
                                        );
                  FUN_1402ed004(uVar11,lVar26 + 0x10);
                  lVar24 = *(longlong *)(param_1 + 0x728);
                  iVar3 = *(int *)(lVar24 + 0x38);
                  *(uint *)(lVar24 + 0x38) = iVar3 + 1U;
                  if (*(uint *)(lVar24 + 0x3c) < iVar3 + 1U) {
                    FUN_1481ca980((longlong *)(lVar24 + 0x30),iVar3);
                  }
                  *(undefined8 *)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar3 * 8) = uVar11;
                  if ((longlong)*(int *)(lVar21 + 0x278) != 0) {
                    lVar24 = 0;
                    do {
                      uVar22 = 1;
                      if (*(longlong *)(*(longlong *)(lVar21 + 0x270) + lVar24) ==
                          *(longlong *)(lVar26 + 4)) goto LAB_143a829cd;
                      lVar24 = lVar24 + 8;
                    } while ((longlong)*(int *)(lVar21 + 0x278) * 8 != lVar24);
                  }
                  uVar22 = 0;
LAB_143a829cd:
                  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x728) + 0x50) + lVar23) =
                       uVar22;
                  lVar23 = lVar23 + 1;
                  lVar26 = lVar26 + 0x58;
                } while (lVar26 != local_f0);
              }
              uVar25 = local_e8;
              plVar14 = *(longlong **)(param_1 + 0x728);
              iVar3 = (int)plVar14[1];
              iVar17 = (int)local_e8;
              if (iVar3 < iVar17) {
                *(int *)(plVar14 + 1) = iVar17;
                if ((uint)(*(int *)((longlong)plVar14 + 0xc) - iVar3) < (uint)(iVar17 - iVar3)) {
                  FUN_1418332ea(plVar14,iVar3);
                }
                FUN_1418332a0((longlong)iVar3 * 0x2a8 + *plVar14,iVar17 - iVar3);
              }
              else {
                if (iVar17 < 0) goto LAB_143a8324e;
                if (iVar17 < iVar3) {
                  FUN_1481caa06(plVar14,local_e8 & 0xffffffff,iVar3 - iVar17);
                  FUN_1481caa68(plVar14);
                }
              }
              lVar19 = *(longlong *)(param_1 + 0x728);
              plVar14 = (longlong *)(lVar19 + 0x10);
              iVar3 = *(int *)(lVar19 + 0x18);
              if (iVar3 < iVar17) {
                *(int *)(lVar19 + 0x18) = iVar17;
                if ((uint)(*(int *)(lVar19 + 0x1c) - iVar3) < (uint)(iVar17 - iVar3)) {
                  FUN_14183345c(plVar14,iVar3);
                }
                FUN_143a9ac2d((longlong)iVar3 * 8 + *plVar14,iVar17 - iVar3);
              }
              else {
                if (iVar17 < 0) goto LAB_143a8324e;
                if (iVar17 < iVar3) {
                  *(int *)(lVar19 + 0x18) = iVar17;
                  FUN_1481cab14(plVar14);
                }
              }
              if (0 < iVar17) {
                lVar19 = 0x38;
                lVar26 = 0;
                uVar25 = 0;
                do {
                  plVar14 = (longlong *)(**(longlong **)(param_1 + 0x728) + lVar19 + -0x38);
                  (**(code **)(*plVar14 + 8))
                            (plVar14,*(undefined8 *)(param_1 + 8),
                             *(undefined8 *)(*(longlong *)(lVar21 + 0x80) + lVar26),0);
                  lVar23 = **(longlong **)(param_1 + 0x728);
                  lVar24 = (*(longlong **)(param_1 + 0x728))[2];
                  piVar12 = (int *)(**(code **)(*(longlong *)(lVar23 + lVar19) + 0x58))
                                             (lVar19 + lVar23,&DAT_14cb41758,0);
                  if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) {
                    lVar23 = 0;
                  }
                  else {
                    lVar23 = (longlong)*piVar12 + *(longlong *)(lVar23 + 0x20 + lVar19);
                  }
                  *(longlong *)(lVar24 + uVar25 * 8) = lVar23;
                  uVar25 = uVar25 + 1;
                  lVar19 = lVar19 + 0x2a8;
                  lVar26 = lVar26 + 0x58;
                } while (local_e8 != uVar25);
              }
            }
            FUN_14018d576(param_1 + 0x1a0,*(undefined8 *)(param_1 + 8),
                          *(undefined8 *)(lVar21 + 0x118),*(undefined1 *)(lVar21 + 0x3c));
            FUN_14018d576(param_1 + 0x448,*(undefined8 *)(param_1 + 8),
                          *(undefined8 *)(lVar21 + 0xf0),*(undefined1 *)(lVar21 + 0x3c));
            if (*(char *)(lVar21 + 0x3c) == '\x01') {
              uVar11 = FUN_14001cc68(0x290,0x10);
              FUN_1439f89cc(uVar11);
              *(undefined8 *)(param_1 + 0x18) = uVar11;
              uVar22 = *(undefined1 *)(lVar21 + 0x3c);
              local_b8 = *(undefined8 *)(lVar21 + 600);
              plVar14 = *(longlong **)(lVar21 + 0x260);
              uStack_b0 = plVar14;
              if (plVar14 == (longlong *)0x0) {
                FUN_1418222c4(uVar11,*(undefined8 *)(lVar21 + 0x268),&local_b8,uVar22);
              }
              else {
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
                FUN_1418222c4(uVar11,*(undefined8 *)(lVar21 + 0x268),&local_b8,uVar22);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar18 = plVar14 + 1;
                  *(int *)plVar18 = (int)*plVar18 + -1;
                  UNLOCK();
                  if ((int)*plVar18 == 0) {
                    (**(code **)*plVar14)(plVar14);
                    LOCK();
                    piVar12 = (int *)((longlong)plVar14 + 0xc);
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                    if (*piVar12 == 0) {
                      (**(code **)(*plVar14 + 0x10))(plVar14);
                    }
                  }
                }
              }
              if (*(longlong *)(param_1 + 8) == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) + 0x18);
              }
              lVar19 = *(longlong *)(param_1 + 0x18);
              if (*(int *)(lVar21 + 0x358) == 0) {
                puVar16 = &DAT_149dfb77a;
              }
              else {
                puVar16 = *(undefined2 **)(lVar21 + 0x350);
              }
              FUN_14020fad6(lVar19 + 0x20,puVar16);
              *(undefined8 *)(lVar19 + 0x18) = uVar11;
              iVar3 = DAT_14c9647dc;
              lVar26 = DAT_14c9647c8;
              lVar19 = *(longlong *)(param_1 + 8);
              if ((((lVar19 == 0) || (*(int *)(lVar19 + 0x4c) == 0)) ||
                  (uVar9 = *(uint *)(lVar19 + 0x48), (int)uVar9 < 0)) ||
                 (((DAT_14c9647dc <= (int)uVar9 ||
                   (plVar14 = (longlong *)
                              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                   plVar14 == (longlong *)0x0)) ||
                  (((int)plVar14[2] != *(int *)(lVar19 + 0x4c) ||
                   ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))))) {
                puVar27 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x30);
LAB_143a82d35:
                *puVar27 = 0;
                uVar9 = 0;
              }
              else {
                puVar27 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x30);
                if (*plVar14 == 0) goto LAB_143a82d35;
                uVar9 = *(uint *)(*plVar14 + 0xc);
                *puVar27 = uVar9;
                if ((int)uVar9 < iVar3) {
                  lVar19 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                           *(longlong *)(lVar26 + (ulonglong)(uVar9 >> 0x10) * 8);
                }
                else {
                  lVar19 = 0;
                }
                uVar9 = *(uint *)(lVar19 + 0x10);
                if (*(uint *)(lVar19 + 0x10) == 0) {
                  LOCK();
                  iVar3 = DAT_14c964868 + 1;
                  UNLOCK();
                  uVar20 = DAT_14c964868 + 1;
                  bVar28 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar3;
                  if (bVar28) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,uVar20);
                  }
                  LOCK();
                  uVar9 = *(uint *)(lVar19 + 0x10);
                  bVar28 = uVar9 == 0;
                  if (bVar28) {
                    *(uint *)(lVar19 + 0x10) = uVar20;
                    uVar9 = 0;
                  }
                  UNLOCK();
                  if (bVar28) {
                    uVar9 = uVar20;
                  }
                }
              }
              puVar27[1] = uVar9;
              FUN_143ad03c4(param_1 + 0x28,&local_b8);
              lVar19 = *(longlong *)(param_1 + 0x18);
              *(undefined8 *)(lVar19 + 0x48) = local_a8;
              *(undefined4 *)(lVar19 + 0x38) = (undefined4)local_b8;
              *(undefined4 *)(lVar19 + 0x3c) = local_b8._4_4_;
              *(undefined4 *)(lVar19 + 0x40) = (undefined4)uStack_b0;
              *(undefined4 *)(lVar19 + 0x44) = uStack_b0._4_4_;
              *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50) =
                   *(undefined8 *)(param_1 + 0x10);
              *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x60) =
                   *(undefined8 *)(*(longlong *)(lVar21 + 0x268) + 0x1c8);
              *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x27c) =
                   *(undefined1 *)(param_1 + 0x768);
              *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
            }
            lVar19 = param_1 + 0x1d8;
            piVar12 = (int *)(**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x58))
                                       (lVar19,*(longlong *)(param_1 + 0x718) + 0x10,0);
            if (piVar12 == (int *)0x0) {
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              if (*piVar12 != -1) {
                lVar26 = *(longlong *)(param_1 + 0x1f8) + (longlong)*piVar12;
              }
            }
            plVar14 = (longlong *)(param_1 + 0x1f8);
            *(longlong *)(param_1 + 0x6f0) = lVar26;
            piVar12 = (int *)(**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x58))
                                       (lVar19,*(longlong *)(param_1 + 0x718) + 0x30,0);
            if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) {
              lVar26 = 0;
            }
            else {
              lVar26 = (longlong)*piVar12 + *plVar14;
            }
            *(longlong *)(param_1 + 0x6f8) = lVar26;
            piVar12 = (int *)(**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x58))
                                       (lVar19,*(longlong *)(param_1 + 0x718) + 0x50,0);
            if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) {
              lVar26 = 0;
            }
            else {
              lVar26 = (longlong)*piVar12 + *plVar14;
            }
            *(longlong *)(param_1 + 0x700) = lVar26;
            piVar12 = (int *)(**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x58))
                                       (lVar19,&DAT_14cb41758,0);
            if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) {
              lVar19 = 0;
            }
            else {
              lVar19 = (longlong)*piVar12 + *plVar14;
            }
            *(longlong *)(param_1 + 0x708) = lVar19;
            piVar12 = (int *)(**(code **)(*(longlong *)(param_1 + 0x480) + 0x58))
                                       (param_1 + 0x480,&DAT_14cb41758,0);
            if ((piVar12 == (int *)0x0) || (*piVar12 == -1)) {
              lVar19 = 0;
            }
            else {
              lVar19 = (longlong)*piVar12 + *(longlong *)(param_1 + 0x4a0);
            }
            *(longlong *)(param_1 + 0x710) = lVar19;
            local_78 = (undefined8 *)0x0;
            local_6c = 8;
            local_b8 = *(undefined8 *)(lVar21 + 0x118);
            uStack_b0 = *(longlong **)(lVar21 + 0xf0);
            local_70 = 2;
            iVar3 = *(int *)(lVar21 + 0x88);
            if ((longlong)iVar3 != 0) {
              lVar19 = *(longlong *)(lVar21 + 0x80);
              lVar26 = 0;
              do {
                uVar9 = local_70;
                uVar11 = *(undefined8 *)(lVar19 + lVar26);
                lVar23 = (longlong)(int)local_70;
                local_70 = local_70 + 1;
                if (local_6c < local_70) {
                  FUN_1481cabb0(&local_b8,uVar9);
                }
                puVar10 = local_78;
                if (local_78 == (undefined8 *)0x0) {
                  puVar10 = &local_b8;
                }
                puVar10[lVar23] = uVar11;
                lVar26 = lVar26 + 0x58;
              } while ((longlong)iVar3 * 0x58 - lVar26 != 0);
            }
            iVar3 = *(int *)(lVar21 + 0x240);
            if ((longlong)iVar3 != 0) {
              lVar19 = *(longlong *)(lVar21 + 0x238);
              lVar26 = 0;
              do {
                uVar9 = local_70;
                uVar11 = *(undefined8 *)(*(longlong *)(lVar19 + lVar26) + 0x28);
                lVar23 = (longlong)(int)local_70;
                local_70 = local_70 + 1;
                if (local_6c < local_70) {
                  FUN_1481cabb0(&local_b8,uVar9);
                }
                puVar10 = local_78;
                if (local_78 == (undefined8 *)0x0) {
                  puVar10 = &local_b8;
                }
                puVar10[lVar23] = uVar11;
                lVar26 = lVar26 + 8;
              } while ((longlong)iVar3 * 8 != lVar26);
            }
            lVar19 = *(longlong *)(param_1 + 0x728);
            if (lVar19 != 0) {
              uVar9 = *(uint *)(lVar21 + 0x88);
              uVar25 = (ulonglong)uVar9;
              iVar3 = *(int *)(lVar19 + 0x6c);
              FUN_140d2bf78(*(undefined8 *)(lVar19 + 0x60),*(undefined4 *)(lVar19 + 0x68));
              *(undefined4 *)(lVar19 + 0x68) = 0;
              if ((iVar3 < 0) && (*(int *)(lVar19 + 0x6c) != 0)) {
                FUN_1481caca4(lVar19 + 0x60);
              }
              lVar19 = *(longlong *)(param_1 + 0x728);
              plVar14 = (longlong *)(lVar19 + 0x60);
              iVar3 = *(int *)(lVar19 + 0x68);
              if (iVar3 < (int)uVar9) {
                *(uint *)(lVar19 + 0x68) = uVar9;
                if ((uint)(*(int *)(lVar19 + 0x6c) - iVar3) < uVar9 - iVar3) {
                  FUN_1418335be(plVar14,iVar3);
                }
                FUN_143a9ac40((longlong)iVar3 * 0x78 + *plVar14,uVar9 - iVar3);
              }
              else {
                if ((int)uVar9 < 0) {
LAB_143a8324e:
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(uVar25);
                }
                if ((int)uVar9 < iVar3) {
                  FUN_1481cacd4(plVar14,uVar25,iVar3 - uVar9);
                  FUN_1481cad2e(plVar14);
                }
              }
              if (0 < (int)uVar9) {
                lVar19 = 0x34;
                lVar26 = 0;
                do {
                  lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x60);
                  puVar1 = (undefined4 *)(*(longlong *)(lVar21 + 0x80) + lVar19);
                  uVar8 = puVar1[1];
                  uVar4 = puVar1[2];
                  uVar5 = puVar1[3];
                  puVar2 = (undefined4 *)(lVar23 + 0x60 + lVar26);
                  *puVar2 = *puVar1;
                  puVar2[1] = uVar8;
                  puVar2[2] = uVar4;
                  puVar2[3] = uVar5;
                  if (((*(int *)(lVar23 + 100 + lVar26) == 0 &&
                       *(int *)(lVar23 + 0x60 + lVar26) == 0) &&
                      *(int *)(lVar23 + 0x68 + lVar26) == 0) &&
                      *(int *)(lVar23 + 0x6c + lVar26) == 0) {
                    *(undefined8 *)(lVar23 + 0x70 + lVar26) = *(undefined8 *)(param_1 + 0x738);
                  }
                  else {
                    local_d8 = (undefined2 *)0x0;
                    uStack_d0 = 0;
                    FUN_1407c869a(lVar23 + lVar26 + 0x60,&local_d8,0);
                    puVar16 = &DAT_149dfb77a;
                    if ((int)uStack_d0 != 0) {
                      puVar16 = local_d8;
                    }
                    FUN_1446f470e(&local_c0,puVar16);
                    *(undefined8 *)(lVar23 + 0x70 + lVar26) = local_c0;
                    if (local_d8 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  *(undefined4 *)(lVar23 + 0x48 + lVar26) = 0;
                  if (*(int *)(lVar23 + 0x4c + lVar26) < 0) {
                    FUN_146bf53da(lVar23 + lVar26,0);
                  }
                  *(undefined4 *)(lVar23 + 0x50 + lVar26) = 0;
                  lVar24 = *(longlong *)(lVar23 + 0x58 + lVar26);
                  if (lVar24 != 0) {
                    *(undefined8 *)(lVar23 + 0x58 + lVar26) = 0;
                    LOCK();
                    piVar12 = (int *)(lVar24 + 8);
                    *piVar12 = *piVar12 + -1;
                    UNLOCK();
                  }
                  lVar26 = lVar26 + 0x78;
                  lVar19 = lVar19 + 0x58;
                } while (uVar25 * 0x78 - lVar26 != 0);
              }
            }
            lVar19 = param_1 + 0x40;
            FUN_1447b41aa(lVar19);
            cVar7 = FUN_14182d9da(lVar21,lVar19);
            if (cVar7 != '\0') {
              if (*(longlong *)(param_1 + 8) != 0) {
                FUN_1401a63ae(*(longlong *)(param_1 + 8),lVar19);
              }
              if ((*(longlong *)(param_1 + 0x18) != 0) && (*(char *)(lVar21 + 0x3c) == '\x01')) {
                FUN_1448b09be(*(longlong *)(param_1 + 0x18) + 0x78,lVar19,0);
              }
            }
            if (local_78 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            uVar8 = *(undefined4 *)(lVar21 + 700);
            *(undefined4 *)(param_1 + 0x760) = uVar8;
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa8) = uVar8;
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xac) = *(undefined4 *)(lVar21 + 0x2c0);
            goto LAB_143a8335a;
          }
        }
      }
    }
    else {
      lVar21 = *(longlong *)(lVar26 + 0x48);
      if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
          *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
        lVar23 = lVar23 * 0x368;
        do {
          if ((((*(int *)(lVar21 + 8) == *(int *)(lVar26 + 0x30)) &&
               (*(int *)(lVar21 + 0xc) == *(int *)(lVar26 + 0x34))) &&
              (*(int *)(lVar21 + 0x10) == *(int *)(lVar26 + 0x38))) &&
             (*(int *)(lVar21 + 0x14) == *(int *)(lVar26 + 0x3c))) goto LAB_143a82553;
          lVar21 = lVar21 + 0x368;
          lVar23 = lVar23 + -0x368;
        } while (lVar23 != 0);
      }
      else {
        lVar23 = lVar23 * 0x368;
        do {
          if (((*(int *)(lVar21 + 8) == *(int *)(param_1 + 0x30)) &&
              (*(int *)(lVar21 + 0xc) == *(int *)(param_1 + 0x34))) &&
             ((*(int *)(lVar21 + 0x10) == *(int *)(param_1 + 0x38) &&
              (*(int *)(lVar21 + 0x14) == *(int *)(param_1 + 0x3c))))) goto LAB_143a82553;
          lVar21 = lVar21 + 0x368;
          lVar23 = lVar23 + -0x368;
        } while (lVar23 != 0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xd4) = 4;
LAB_143a8335a:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a83462 FUN_143a83462 body=1239 status=ok
// SIG undefined FUN_143a83462(void)

void FUN_143a83462(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined1 auStack_c8 [40];
  longlong local_a0 [2];
  longlong local_90 [2];
  undefined8 local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x740) = 0;
  *(undefined4 *)(param_1 + 0x74c) = 0;
  iVar7 = rand();
  *(int *)(param_1 + 0x748) = iVar7;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  uVar3 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  *(undefined8 *)(param_1 + 0x108) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0xf0) = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xe4) = uVar4;
  *(undefined4 *)(param_1 + 0xe8) = uVar5;
  *(undefined4 *)(param_1 + 0xec) = uVar6;
  *(undefined1 *)(param_1 + 0x110) = 0;
  lVar1 = param_1 + 0x770;
  iVar7 = *(int *)(param_1 + 0x7b8);
  if (iVar7 < 2) {
    lVar16 = param_1 + 0x7a8;
    if (*(longlong *)(param_1 + 0x7b0) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x7b0);
    }
    iVar11 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar11 = iVar7;
    }
    if (*(int *)(param_1 + 0x778) - *(int *)(param_1 + 0x7a4) < iVar11 >> 2) {
      iVar7 = *(int *)(param_1 + 0x798);
      if (iVar7 != 0) {
        puVar13 = *(uint **)(param_1 + 0x790);
        if (*(uint **)(param_1 + 0x790) == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0x780);
        }
        uVar10 = *puVar13;
        if (uVar10 == 0) {
          iVar11 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar11 = iVar7 + -1;
          }
          uVar12 = 0;
          uVar17 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar17 = uVar12;
          }
          iVar11 = 0;
          do {
            if (uVar17 == uVar12) goto LAB_143a83543;
            iVar11 = iVar11 + 0x20;
            uVar10 = puVar13[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar10 == 0);
        }
        else {
          uVar12 = 0;
          iVar11 = 0;
        }
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar17 = uVar14 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar15 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar15 < iVar7) {
          uVar10 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar16 + (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x770) + 0x5c + (longlong)iVar15 * 0x60) * 4
             ) = 0xffffffff;
            uVar10 = ~(uint)uVar14 & uVar10;
            puVar13 = *(uint **)(param_1 + 0x790);
            if (*(uint **)(param_1 + 0x790) == (uint *)0x0) {
              puVar13 = (uint *)(param_1 + 0x780);
            }
            iVar2 = *(int *)(param_1 + 0x798);
            iVar15 = (int)uVar12;
            lVar8 = (longlong)iVar15;
            uVar18 = puVar13[lVar8] & uVar10;
            if (uVar18 == 0) {
              iVar19 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar19 = iVar2 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar11 = iVar11 + 0x20;
              iVar20 = iVar19;
              if (iVar19 < iVar15) {
                iVar20 = iVar15;
              }
              if (iVar15 < iVar19) {
                lVar9 = 0;
                do {
                  uVar18 = puVar13[lVar8 + lVar9 + 1];
                  if (uVar18 != 0) {
                    uVar12 = (ulonglong)(iVar15 + (int)lVar9 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_143a83824;
                  }
                  iVar11 = iVar11 + 0x20;
                  lVar9 = lVar9 + 1;
                } while (iVar20 - lVar8 != lVar9);
                uVar10 = 0xffffffff;
                lVar8 = (longlong)iVar20;
              }
              uVar12 = lVar8 + 1U & 0xffffffff;
              iVar15 = iVar2;
            }
            else {
LAB_143a83824:
              uVar14 = (ulonglong)(-uVar18 & uVar18);
              uVar17 = uVar14 * 2 + 1;
              lVar8 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              iVar15 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar15) {
                iVar15 = iVar2;
              }
            }
          } while (iVar15 != iVar7);
        }
      }
    }
    else if (iVar7 == 1) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar16 + lVar8 * 4) = 0xffffffff;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x7b8));
    }
LAB_143a83543:
    FUN_143a9a802(lVar1);
  }
  else {
    FUN_143a9a802(lVar1);
    *(undefined4 *)(param_1 + 0x7b8) = 1;
    FUN_1481cadd4(lVar1);
  }
  if ((100 < *(int *)(param_1 + 0x758)) && (DAT_14cb3e6e0 != 0)) {
    local_68[0] = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) + 0x18);
    FUN_1400021e4(local_68,local_58);
    local_80 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) + 0xb8) +
                (longlong)*(int *)(param_1 + 200) * 0x48);
    FUN_1400021e4(&local_80,local_78);
    FUN_1400b22c2(local_a0,&DAT_149e2c73e);
    FUN_1407ec8fc(local_90,local_58,local_a0);
    FUN_1401c7f3e(local_68,local_90,local_78);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 0xd4) != 4) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((lVar1 == 0) || (lVar16 = (longlong)*(int *)(lVar1 + 0x50), lVar16 == 0)) {
      lVar8 = 0;
    }
    else if (*(char *)(lVar1 + 0x40) == '\0') {
      lVar8 = *(longlong *)(lVar1 + 0x48);
    }
    else {
      lVar9 = *(longlong *)(lVar1 + 0x48);
      if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
          *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
        lVar16 = lVar16 * 0x368;
        do {
          if ((((*(int *)(lVar9 + 8) == *(int *)(lVar1 + 0x30)) &&
               (*(int *)(lVar9 + 0xc) == *(int *)(lVar1 + 0x34))) &&
              (*(int *)(lVar9 + 0x10) == *(int *)(lVar1 + 0x38))) &&
             (lVar8 = lVar9, *(int *)(lVar9 + 0x14) == *(int *)(lVar1 + 0x3c))) break;
          lVar9 = lVar9 + 0x368;
          lVar16 = lVar16 + -0x368;
          lVar8 = 0;
        } while (lVar16 != 0);
      }
      else {
        lVar16 = lVar16 * 0x368;
        do {
          if (((*(int *)(lVar9 + 8) == *(int *)(param_1 + 0x30)) &&
              (*(int *)(lVar9 + 0xc) == *(int *)(param_1 + 0x34))) &&
             ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x38) &&
              (lVar8 = lVar9, *(int *)(lVar9 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
          lVar9 = lVar9 + 0x368;
          lVar16 = lVar16 + -0x368;
          lVar8 = 0;
        } while (lVar16 != 0);
      }
    }
    *(int *)(param_1 + 0x744) = *(int *)(*(longlong *)(param_1 + 8) + 0xe0) + *(int *)(lVar8 + 0x34)
    ;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    if (param_2 != '\0') {
      *(byte *)(param_1 + 0x764) = *(byte *)(param_1 + 0x764) | 1;
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a8398c FUN_143a8398c body=301 status=ok
// SIG undefined FUN_143a8398c(void)

void FUN_143a8398c(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0xd4) != 4) {
    *(byte *)(param_1 + 600) = *(byte *)(param_1 + 600) | 2;
    *(byte *)(param_1 + 0x500) = *(byte *)(param_1 + 0x500) | 2;
    lVar2 = *(longlong *)(param_1 + 0x28);
    if ((lVar2 == 0) || (lVar6 = (longlong)*(int *)(lVar2 + 0x50), lVar6 == 0)) {
      lVar4 = 0;
    }
    else if (*(char *)(lVar2 + 0x40) == '\0') {
      lVar4 = *(longlong *)(lVar2 + 0x48);
    }
    else {
      lVar5 = *(longlong *)(lVar2 + 0x48);
      if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
          *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
        lVar6 = lVar6 * 0x368;
        do {
          if ((((*(int *)(lVar5 + 8) == *(int *)(lVar2 + 0x30)) &&
               (*(int *)(lVar5 + 0xc) == *(int *)(lVar2 + 0x34))) &&
              (*(int *)(lVar5 + 0x10) == *(int *)(lVar2 + 0x38))) &&
             (lVar4 = lVar5, *(int *)(lVar5 + 0x14) == *(int *)(lVar2 + 0x3c))) break;
          lVar5 = lVar5 + 0x368;
          lVar6 = lVar6 + -0x368;
          lVar4 = 0;
        } while (lVar6 != 0);
      }
      else {
        lVar6 = lVar6 * 0x368;
        do {
          if (((*(int *)(lVar5 + 8) == *(int *)(param_1 + 0x30)) &&
              (*(int *)(lVar5 + 0xc) == *(int *)(param_1 + 0x34))) &&
             ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x38) &&
              (lVar4 = lVar5, *(int *)(lVar5 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
          lVar5 = lVar5 + 0x368;
          lVar6 = lVar6 + -0x368;
          lVar4 = 0;
        } while (lVar6 != 0);
      }
    }
    if ((*(char *)(lVar4 + 0x3c) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0xf8);
      *pbVar1 = *pbVar1 | 2;
    }
    plVar3 = *(longlong **)(param_1 + 0x728);
    if ((plVar3 != (longlong *)0x0) && (lVar2 = plVar3[1], (longlong)(int)lVar2 != 0)) {
      lVar6 = *plVar3;
      lVar4 = 0;
      do {
        pbVar1 = (byte *)(lVar6 + 0xb8 + lVar4);
        *pbVar1 = *pbVar1 | 2;
        lVar4 = lVar4 + 0x2a8;
      } while ((longlong)(int)lVar2 * 0x2a8 - lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 143a83aba FUN_143a83aba body=1344 status=ok
// SIG undefined FUN_143a83aba(void)

void FUN_143a83aba(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (*(int *)(param_1 + 0xd4) == 4) {
    return;
  }
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x380);
  if (lVar8 != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x378);
    lVar7 = 0;
    do {
      if ((*(longlong *)(lVar6 + lVar7) != 0) &&
         (lVar2 = FUN_14026116e(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20)), lVar2 != 0)) {
        FUN_1448b09be(lVar2 + 0x40,param_1 + 0x1d8,0);
      }
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x450) + 0x380);
  if (lVar8 != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x450) + 0x378);
    lVar7 = 0;
    do {
      if ((*(longlong *)(lVar6 + lVar7) != 0) &&
         (lVar2 = FUN_14026116e(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20)), lVar2 != 0)) {
        FUN_1448b09be(lVar2 + 0x40,param_1 + 0x480,0);
      }
      lVar7 = lVar7 + 8;
    } while (lVar8 * 8 != lVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x28);
  if ((lVar8 == 0) || (lVar6 = (longlong)*(int *)(lVar8 + 0x50), lVar6 == 0)) {
    lVar7 = 0;
  }
  else if (*(char *)(lVar8 + 0x40) == '\0') {
    lVar7 = *(longlong *)(lVar8 + 0x48);
  }
  else {
    lVar2 = *(longlong *)(lVar8 + 0x48);
    if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
        *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
      lVar6 = lVar6 * 0x368;
      do {
        if ((((*(int *)(lVar2 + 8) == *(int *)(lVar8 + 0x30)) &&
             (*(int *)(lVar2 + 0xc) == *(int *)(lVar8 + 0x34))) &&
            (*(int *)(lVar2 + 0x10) == *(int *)(lVar8 + 0x38))) &&
           (lVar7 = lVar2, *(int *)(lVar2 + 0x14) == *(int *)(lVar8 + 0x3c))) break;
        lVar2 = lVar2 + 0x368;
        lVar6 = lVar6 + -0x368;
        lVar7 = 0;
      } while (lVar6 != 0);
    }
    else {
      lVar6 = lVar6 * 0x368;
      do {
        if (((*(int *)(lVar2 + 8) == *(int *)(param_1 + 0x30)) &&
            (*(int *)(lVar2 + 0xc) == *(int *)(param_1 + 0x34))) &&
           ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x38) &&
            (lVar7 = lVar2, *(int *)(lVar2 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
        lVar2 = lVar2 + 0x368;
        lVar6 = lVar6 + -0x368;
        lVar7 = 0;
      } while (lVar6 != 0);
    }
  }
  if (*(char *)(lVar7 + 0x3c) == '\x01') {
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a8) + 0x380);
    if (lVar8 != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x378);
      lVar2 = 0;
      do {
        if (*(longlong *)(lVar6 + lVar2) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x18);
          lVar3 = FUN_14026116e(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
          if (lVar3 != 0) {
            FUN_1448b09be(lVar3 + 0x40,lVar5 + 0x78,0);
          }
        }
        lVar2 = lVar2 + 8;
      } while (lVar8 * 8 != lVar2);
    }
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x450) + 0x380);
    if (lVar8 != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x450) + 0x378);
      lVar2 = 0;
      do {
        if (*(longlong *)(lVar6 + lVar2) != 0) {
          lVar5 = *(longlong *)(param_1 + 0x18);
          lVar3 = FUN_14026116e(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20));
          if (lVar3 != 0) {
            FUN_1448b09be(lVar3 + 0x40,lVar5 + 0x78,0);
          }
        }
        lVar2 = lVar2 + 8;
      } while (lVar8 * 8 != lVar2);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x728);
  if ((plVar1 != (longlong *)0x0) && ((longlong)(int)plVar1[1] != 0)) {
    lVar8 = *plVar1;
    lVar6 = (longlong)(int)plVar1[1] * 0x2a8 + lVar8;
    do {
      lVar2 = (longlong)*(int *)(*(longlong *)(lVar8 + 8) + 0x380);
      if (lVar2 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar8 + 8) + 0x378);
        lVar3 = 0;
        do {
          if ((*(longlong *)(lVar5 + lVar3) != 0) &&
             (lVar4 = FUN_14026116e(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20)), lVar4 != 0)
             ) {
            FUN_1448b09be(lVar4 + 0x40,lVar8 + 0x38,0);
          }
          lVar3 = lVar3 + 8;
        } while (lVar2 * 8 != lVar3);
      }
      lVar8 = lVar8 + 0x2a8;
    } while (lVar8 != lVar6);
  }
  if (*(char *)(lVar7 + 0x3c) == '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x18) + 0x78;
  }
  else {
    lVar8 = param_1 + 0x480;
  }
  if ((longlong)*(int *)(lVar7 + 0x240) != 0) {
    plVar9 = *(longlong **)(lVar7 + 0x238);
    plVar1 = plVar9 + *(int *)(lVar7 + 0x240);
    do {
      if ((*(byte *)(*plVar9 + 0x38) & 1) != 0) {
        lVar6 = *(longlong *)(*plVar9 + 0x28);
        lVar2 = (longlong)*(int *)(lVar6 + 0x380);
        if (lVar2 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x378);
          lVar5 = 0;
          do {
            if ((*(longlong *)(lVar6 + lVar5) != 0) &&
               (lVar3 = FUN_14026116e(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20)),
               lVar3 != 0)) {
              FUN_1448b09be(lVar3 + 0x40,lVar8,0);
            }
            lVar5 = lVar5 + 8;
          } while (lVar2 * 8 != lVar5);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  if (param_2 == '\0') {
    lVar8 = *(longlong *)(param_1 + 8) + 0x1e8;
    FUN_1448b09be(lVar8,param_1 + 0x1d8,0);
    FUN_1448b09be(lVar8,param_1 + 0x480,0);
    plVar1 = *(longlong **)(param_1 + 0x728);
    if ((plVar1 != (longlong *)0x0) && ((longlong)(int)plVar1[1] != 0)) {
      lVar2 = (longlong)(int)plVar1[1] * 0x2a8;
      lVar6 = *plVar1 + 0x38;
      do {
        FUN_1448b09be(lVar8,lVar6,0);
        lVar6 = lVar6 + 0x2a8;
        lVar2 = lVar2 + -0x2a8;
      } while (lVar2 != 0);
    }
    if (*(char *)(lVar7 + 0x3c) == '\x01') {
      FUN_1448b09be(lVar8,*(longlong *)(param_1 + 0x18) + 0x78,0);
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1401a63ae(*(longlong *)(param_1 + 8),param_1 + 0x40);
  }
  lVar8 = *(longlong *)(param_1 + 0x28);
  if ((lVar8 == 0) || (lVar6 = (longlong)*(int *)(lVar8 + 0x50), lVar6 == 0)) {
    lVar7 = 0;
  }
  else if (*(char *)(lVar8 + 0x40) == '\0') {
    lVar7 = *(longlong *)(lVar8 + 0x48);
  }
  else {
    lVar2 = *(longlong *)(lVar8 + 0x48);
    if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
        *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
      lVar6 = lVar6 * 0x368;
      do {
        if ((((*(int *)(lVar2 + 8) == *(int *)(lVar8 + 0x30)) &&
             (*(int *)(lVar2 + 0xc) == *(int *)(lVar8 + 0x34))) &&
            (*(int *)(lVar2 + 0x10) == *(int *)(lVar8 + 0x38))) &&
           (lVar7 = lVar2, *(int *)(lVar2 + 0x14) == *(int *)(lVar8 + 0x3c))) break;
        lVar2 = lVar2 + 0x368;
        lVar6 = lVar6 + -0x368;
        lVar7 = 0;
      } while (lVar6 != 0);
    }
    else {
      lVar6 = lVar6 * 0x368;
      do {
        if (((*(int *)(lVar2 + 8) == *(int *)(param_1 + 0x30)) &&
            (*(int *)(lVar2 + 0xc) == *(int *)(param_1 + 0x34))) &&
           ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x38) &&
            (lVar7 = lVar2, *(int *)(lVar2 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
        lVar2 = lVar2 + 0x368;
        lVar6 = lVar6 + -0x368;
        lVar7 = 0;
      } while (lVar6 != 0);
    }
  }
  FUN_1448b09be(lVar7 + 0x140,param_1 + 0x40,0);
  return;
}



// FUNCTION 143a83ffa FUN_143a83ffa body=2115 status=ok
// SIG undefined FUN_143a83ffa(void)

void FUN_143a83ffa(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  char cVar24;
  longlong lVar25;
  longlong lVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStack_168 [32];
  int local_148;
  int local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  double local_110;
  char local_108;
  undefined4 local_107;
  undefined3 uStack_103;
  undefined4 local_f8;
  undefined3 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar2 = (longlong *)(param_1 + 400);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x718) + 8);
  iVar4 = *(int *)(param_1 + 0x198);
  if (iVar4 < iVar3) {
    *(int *)(param_1 + 0x198) = iVar3;
    if ((uint)(*(int *)(param_1 + 0x19c) - iVar4) < (uint)(iVar3 - iVar4)) {
      FUN_14181d9ee(plVar2,iVar4);
    }
    FUN_143a9ac16((longlong)iVar4 * 0x10 + *plVar2);
  }
  else {
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x198) = iVar3;
      FUN_1481ca8e4(plVar2);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x728);
  if ((lVar5 != 0) && (iVar3 = *(int *)(lVar5 + 0x68), (longlong)iVar3 != 0)) {
    lVar5 = *(longlong *)(lVar5 + 0x60);
    lVar23 = 0;
    do {
      lVar26 = *(longlong *)(lVar5 + 0x58 + lVar23);
      if (lVar26 != 0) {
        *(undefined8 *)(lVar5 + 0x58 + lVar23) = 0;
        LOCK();
        piVar1 = (int *)(lVar26 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      lVar23 = lVar23 + 0x78;
    } while ((longlong)iVar3 * 0x78 - lVar23 != 0);
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  uVar21 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x100) = uVar21;
  *(undefined8 *)(param_1 + 0x108) = DAT_14c8464f0;
  uVar29 = DAT_14c8464e8._4_4_;
  uVar28 = (undefined4)DAT_14c8464e8;
  uVar27 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xe4) = uVar27;
  *(undefined4 *)(param_1 + 0xe8) = uVar28;
  *(undefined4 *)(param_1 + 0xec) = uVar29;
  *(undefined8 *)(param_1 + 0xf0) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if ((lVar5 == 0) || (lVar23 = (longlong)*(int *)(lVar5 + 0x50), lVar23 == 0)) goto LAB_143a841f8;
  if (*(char *)(lVar5 + 0x40) != '\0') {
    lVar26 = *(longlong *)(lVar5 + 0x48);
    if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
        *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
      lVar23 = lVar23 * 0x368;
      do {
        if ((((*(int *)(lVar26 + 8) == *(int *)(lVar5 + 0x30)) &&
             (*(int *)(lVar26 + 0xc) == *(int *)(lVar5 + 0x34))) &&
            (*(int *)(lVar26 + 0x10) == *(int *)(lVar5 + 0x38))) &&
           (*(int *)(lVar26 + 0x14) == *(int *)(lVar5 + 0x3c))) goto LAB_143a84163;
        lVar26 = lVar26 + 0x368;
        lVar23 = lVar23 + -0x368;
      } while (lVar23 != 0);
    }
    else {
      lVar23 = lVar23 * 0x368;
      do {
        if (((*(int *)(lVar26 + 8) == *(int *)(param_1 + 0x30)) &&
            (*(int *)(lVar26 + 0xc) == *(int *)(param_1 + 0x34))) &&
           ((*(int *)(lVar26 + 0x10) == *(int *)(param_1 + 0x38) &&
            (*(int *)(lVar26 + 0x14) == *(int *)(param_1 + 0x3c))))) goto LAB_143a84163;
        lVar26 = lVar26 + 0x368;
        lVar23 = lVar23 + -0x368;
      } while (lVar23 != 0);
    }
    goto LAB_143a841f8;
  }
  lVar26 = *(longlong *)(lVar5 + 0x48);
LAB_143a84163:
  if (lVar26 == 0) goto LAB_143a841f8;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x150));
  if (*(char *)(param_1 + 0x188) == '\0') {
    if (*(char *)(param_1 + 0x148) != '\0') {
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x148);
      uVar27 = *(undefined4 *)(param_1 + 0x118);
      uVar28 = *(undefined4 *)(param_1 + 0x11c);
      uVar29 = *(undefined4 *)(param_1 + 0x120);
      uVar30 = *(undefined4 *)(param_1 + 0x124);
      uVar31 = *(undefined4 *)(param_1 + 0x128);
      uVar32 = *(undefined4 *)(param_1 + 300);
      uVar33 = *(undefined4 *)(param_1 + 0x130);
      uVar34 = *(undefined4 *)(param_1 + 0x134);
      uVar35 = *(undefined4 *)(param_1 + 0x138);
      uVar36 = *(undefined4 *)(param_1 + 0x13c);
      uVar37 = *(undefined4 *)(param_1 + 0x140);
      uVar38 = *(undefined4 *)(param_1 + 0x144);
      goto LAB_143a841e1;
    }
    if (*(char *)(lVar26 + 0x3d) == '\0') {
      if (*(char *)(lVar26 + 0x3c) == '\x01') {
        *(undefined8 *)(param_1 + 0xe0) = 0xc059000000000000;
        *(undefined8 *)(param_1 + 0xe8) = 0xc059000000000000;
        *(undefined8 *)(param_1 + 0xf0) = 0xc059000000000000;
        *(undefined8 *)(param_1 + 0xf8) = 0x4059000000000000;
        *(undefined8 *)(param_1 + 0x100) = 0x4059000000000000;
        *(undefined8 *)(param_1 + 0x108) = 0x4059000000000000;
LAB_143a842f1:
        *(undefined1 *)(param_1 + 0x110) = 1;
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x28);
        if ((lVar5 != 0) && (lVar23 = (longlong)*(int *)(lVar5 + 0x50), lVar23 != 0)) {
          iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78) + 0x120);
          if (*(char *)(lVar5 + 0x40) == '\0') {
            lVar25 = *(longlong *)(lVar5 + 0x48);
LAB_143a84334:
            if (((iVar3 != 0) && (lVar25 != 0)) &&
               ((lVar5 = *(longlong *)(param_1 + 8), lVar5 != 0 &&
                (iVar4 = *(int *)(lVar25 + 0x2e0), (longlong)iVar4 != 0)))) {
              lVar23 = lVar25 + 0x2c8;
              if (*(longlong *)(lVar25 + 0x2d8) != 0) {
                lVar23 = *(longlong *)(lVar25 + 0x2d8);
              }
              uVar33 = (undefined4)DAT_14c8464f0;
              uVar34 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
              lVar25 = 0;
              cVar24 = '\0';
              uVar29 = (undefined4)DAT_14c8464e0;
              uVar30 = DAT_14c8464e0._4_4_;
              uVar31 = (undefined4)DAT_14c8464e8;
              uVar32 = DAT_14c8464e8._4_4_;
              uVar35 = uVar33;
              uVar36 = uVar34;
              uVar27 = (undefined4)DAT_14c8464e0;
              uVar28 = DAT_14c8464e0._4_4_;
              uVar37 = (undefined4)DAT_14c8464e8;
              uVar38 = DAT_14c8464e8._4_4_;
              local_13c = iVar3;
              do {
                local_148 = local_13c;
                (**(code **)(**(longlong **)(lVar23 + lVar25) + 0x10))
                          (*(longlong **)(lVar23 + lVar25),&local_138,lVar5 + 0x50,
                           *(undefined8 *)(param_1 + 0x10));
                uVar44 = (undefined4)((ulonglong)local_128 >> 0x20);
                uVar43 = (undefined4)((ulonglong)local_110 >> 0x20);
                if (local_108 == '\0' || cVar24 == '\0') {
                  if (local_108 != '\0') {
                    local_f8 = local_107;
                    uStack_f4 = uStack_103;
                    uVar29 = local_120;
                    uVar30 = uStack_11c;
                    uVar31 = uStack_118;
                    uVar32 = uStack_114;
                    uVar33 = SUB84(local_110,0);
                    uVar34 = uVar43;
                    uVar35 = SUB84(local_128,0);
                    uVar36 = uVar44;
                    uVar27 = local_138;
                    uVar28 = uStack_134;
                    uVar37 = uStack_130;
                    uVar38 = uStack_12c;
                    cVar24 = local_108;
                  }
                }
                else {
                  if ((double)CONCAT44(uStack_134,local_138) <= (double)CONCAT44(uVar28,uVar27)) {
                    uVar27 = local_138;
                    uVar28 = uStack_134;
                  }
                  if ((double)CONCAT44(uStack_12c,uStack_130) <= (double)CONCAT44(uVar38,uVar37)) {
                    uVar37 = uStack_130;
                    uVar38 = uStack_12c;
                  }
                  if (local_128 <= (double)CONCAT44(uVar36,uVar35)) {
                    uVar35 = SUB84(local_128,0);
                    uVar36 = uVar44;
                  }
                  if ((double)CONCAT44(uVar30,uVar29) <= (double)CONCAT44(uStack_11c,local_120)) {
                    uVar29 = local_120;
                    uVar30 = uStack_11c;
                  }
                  if ((double)CONCAT44(uVar32,uVar31) <= (double)CONCAT44(uStack_114,uStack_118)) {
                    uVar31 = uStack_118;
                    uVar32 = uStack_114;
                  }
                  if ((double)CONCAT44(uVar34,uVar33) <= local_110) {
                    uVar33 = SUB84(local_110,0);
                    uVar34 = uVar43;
                  }
                }
                lVar25 = lVar25 + 0x10;
              } while ((longlong)iVar4 * 0x10 != lVar25);
              if (cVar24 != '\0') {
                *(undefined1 *)(param_1 + 0xd8) = 1;
                if (*(char *)(lVar26 + 0x30) != '\x01') {
                  lVar5 = *(longlong *)(param_1 + 8);
                  uVar22 = (ulonglong)((*(byte *)(lVar5 + 0x790) & 1) << 9);
                  dVar18 = (double)*(float *)(lVar5 + 0x370 + uVar22);
                  dVar6 = (double)*(float *)(lVar5 + 0x374 + uVar22);
                  dVar7 = (double)*(float *)(lVar5 + 0x378 + uVar22);
                  dVar15 = (double)*(float *)(lVar5 + 0x380 + uVar22);
                  dVar8 = (double)*(float *)(lVar5 + 900 + uVar22);
                  dVar10 = (double)*(float *)(lVar5 + 0x388 + uVar22);
                  dVar16 = (double)*(float *)(lVar5 + 0x390 + uVar22);
                  dVar39 = (double)*(float *)(lVar5 + 0x394 + uVar22);
                  dVar40 = (double)*(float *)(lVar5 + 0x398 + uVar22);
                  dVar41 = ((double)CONCAT44(uVar30,uVar29) + (double)CONCAT44(uVar28,uVar27)) * 0.5
                  ;
                  dVar42 = ((double)CONCAT44(uVar32,uVar31) + (double)CONCAT44(uVar38,uVar37)) * 0.5
                  ;
                  dVar9 = ((double)CONCAT44(uVar36,uVar35) + (double)CONCAT44(uVar34,uVar33)) * 0.5;
                  dVar11 = ((double)CONCAT44(uVar30,uVar29) - (double)CONCAT44(uVar28,uVar27)) * 0.5
                  ;
                  dVar12 = ((double)CONCAT44(uVar32,uVar31) - (double)CONCAT44(uVar38,uVar37)) * 0.5
                  ;
                  dVar13 = ((double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar36,uVar35)) * 0.5
                  ;
                  dVar19 = dVar9 * dVar16 + dVar42 * dVar15 + dVar41 * dVar18 +
                           (double)*(float *)(lVar5 + 0x3a0 + uVar22);
                  dVar20 = dVar9 * dVar39 + dVar42 * dVar8 + dVar41 * dVar6 +
                           (double)*(float *)(lVar5 + 0x3a4 + uVar22);
                  dVar15 = ABS(dVar13 * dVar16) + ABS(dVar15 * dVar12) + ABS(dVar11 * dVar18);
                  dVar16 = ABS(dVar13 * dVar39) + ABS(dVar8 * dVar12) + ABS(dVar11 * dVar6);
                  dVar8 = dVar20 - dVar16;
                  dVar16 = dVar16 + dVar20;
                  dVar6 = dVar9 * dVar40 + dVar41 * dVar7 + dVar42 * dVar10 +
                          (double)*(float *)(lVar5 + 0x3a8 + uVar22);
                  dVar7 = ABS(dVar12 * dVar10) + ABS(dVar11 * dVar7) + ABS(dVar13 * dVar40);
                  auVar14._8_4_ = SUB84(dVar8,0);
                  auVar14._0_8_ = dVar19 - dVar15;
                  auVar14._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                  *(undefined1 (*) [16])(param_1 + 0xe0) = auVar14;
                  *(double *)(param_1 + 0xf0) = dVar6 - dVar7;
                  auVar17._8_4_ = SUB84(dVar16,0);
                  auVar17._0_8_ = dVar15 + dVar19;
                  auVar17._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
                  *(undefined1 (*) [16])(param_1 + 0xf8) = auVar17;
                  *(double *)(param_1 + 0x108) = dVar7 + dVar6;
                  goto LAB_143a842f1;
                }
                *(undefined4 *)(param_1 + 0xe0) = uVar27;
                *(undefined4 *)(param_1 + 0xe4) = uVar28;
                *(undefined4 *)(param_1 + 0xe8) = uVar37;
                *(undefined4 *)(param_1 + 0xec) = uVar38;
                *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uVar36,uVar35);
                *(undefined4 *)(param_1 + 0xf8) = uVar29;
                *(undefined4 *)(param_1 + 0xfc) = uVar30;
                *(undefined4 *)(param_1 + 0x100) = uVar31;
                *(undefined4 *)(param_1 + 0x104) = uVar32;
                *(ulonglong *)(param_1 + 0x108) = CONCAT44(uVar34,uVar33);
                *(char *)(param_1 + 0x110) = cVar24;
                *(undefined4 *)(param_1 + 0x111) = local_f8;
                *(uint *)(param_1 + 0x114) = CONCAT31(uStack_f4,local_f8._3_1_);
              }
            }
          }
          else {
            lVar25 = *(longlong *)(lVar5 + 0x48);
            if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
                *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
              lVar23 = lVar23 * 0x368;
              do {
                if ((((*(int *)(lVar25 + 8) == *(int *)(lVar5 + 0x30)) &&
                     (*(int *)(lVar25 + 0xc) == *(int *)(lVar5 + 0x34))) &&
                    (*(int *)(lVar25 + 0x10) == *(int *)(lVar5 + 0x38))) &&
                   (*(int *)(lVar25 + 0x14) == *(int *)(lVar5 + 0x3c))) goto LAB_143a84334;
                lVar25 = lVar25 + 0x368;
                lVar23 = lVar23 + -0x368;
              } while (lVar23 != 0);
            }
            else {
              lVar23 = lVar23 * 0x368;
              do {
                if (((*(int *)(lVar25 + 8) == *(int *)(param_1 + 0x30)) &&
                    (*(int *)(lVar25 + 0xc) == *(int *)(param_1 + 0x34))) &&
                   ((*(int *)(lVar25 + 0x10) == *(int *)(param_1 + 0x38) &&
                    (*(int *)(lVar25 + 0x14) == *(int *)(param_1 + 0x3c))))) goto LAB_143a84334;
                lVar25 = lVar25 + 0x368;
                lVar23 = lVar23 + -0x368;
              } while (lVar23 != 0);
            }
          }
        }
      }
    }
    else if (*(char *)(lVar26 + 0x3d) == '\x01') {
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar26 + 0x70);
      uVar27 = *(undefined4 *)(lVar26 + 0x40);
      uVar28 = *(undefined4 *)(lVar26 + 0x44);
      uVar29 = *(undefined4 *)(lVar26 + 0x48);
      uVar30 = *(undefined4 *)(lVar26 + 0x4c);
      uVar31 = *(undefined4 *)(lVar26 + 0x50);
      uVar32 = *(undefined4 *)(lVar26 + 0x54);
      uVar33 = *(undefined4 *)(lVar26 + 0x58);
      uVar34 = *(undefined4 *)(lVar26 + 0x5c);
      uVar35 = *(undefined4 *)(lVar26 + 0x60);
      uVar36 = *(undefined4 *)(lVar26 + 100);
      uVar37 = *(undefined4 *)(lVar26 + 0x68);
      uVar38 = *(undefined4 *)(lVar26 + 0x6c);
      goto LAB_143a841e1;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x188);
    uVar27 = *(undefined4 *)(param_1 + 0x158);
    uVar28 = *(undefined4 *)(param_1 + 0x15c);
    uVar29 = *(undefined4 *)(param_1 + 0x160);
    uVar30 = *(undefined4 *)(param_1 + 0x164);
    uVar31 = *(undefined4 *)(param_1 + 0x168);
    uVar32 = *(undefined4 *)(param_1 + 0x16c);
    uVar33 = *(undefined4 *)(param_1 + 0x170);
    uVar34 = *(undefined4 *)(param_1 + 0x174);
    uVar35 = *(undefined4 *)(param_1 + 0x178);
    uVar36 = *(undefined4 *)(param_1 + 0x17c);
    uVar37 = *(undefined4 *)(param_1 + 0x180);
    uVar38 = *(undefined4 *)(param_1 + 0x184);
LAB_143a841e1:
    *(undefined4 *)(param_1 + 0x100) = uVar35;
    *(undefined4 *)(param_1 + 0x104) = uVar36;
    *(undefined4 *)(param_1 + 0x108) = uVar37;
    *(undefined4 *)(param_1 + 0x10c) = uVar38;
    *(undefined4 *)(param_1 + 0xf0) = uVar31;
    *(undefined4 *)(param_1 + 0xf4) = uVar32;
    *(undefined4 *)(param_1 + 0xf8) = uVar33;
    *(undefined4 *)(param_1 + 0xfc) = uVar34;
    *(undefined4 *)(param_1 + 0xe0) = uVar27;
    *(undefined4 *)(param_1 + 0xe4) = uVar28;
    *(undefined4 *)(param_1 + 0xe8) = uVar29;
    *(undefined4 *)(param_1 + 0xec) = uVar30;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x150));
LAB_143a841f8:
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a8483e FUN_143a8483e body=1550 status=ok
// SIG undefined FUN_143a8483e(void)

void FUN_143a8483e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *_Src;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  uint *puVar10;
  int *piVar11;
  longlong lVar12;
  longlong *plVar13;
  size_t sVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (1 < *(int *)(param_1 + 0xd4) - 3U) {
    lVar16 = *(longlong *)(param_1 + 0x28);
    if ((lVar16 == 0) || (lVar15 = (longlong)*(int *)(lVar16 + 0x50), lVar15 == 0)) {
      lVar17 = 0;
    }
    else if (*(char *)(lVar16 + 0x40) == '\0') {
      lVar17 = *(longlong *)(lVar16 + 0x48);
    }
    else {
      lVar12 = *(longlong *)(lVar16 + 0x48);
      if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
          *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
        lVar15 = lVar15 * 0x368;
        do {
          if ((((*(int *)(lVar12 + 8) == *(int *)(lVar16 + 0x30)) &&
               (*(int *)(lVar12 + 0xc) == *(int *)(lVar16 + 0x34))) &&
              (*(int *)(lVar12 + 0x10) == *(int *)(lVar16 + 0x38))) &&
             (lVar17 = lVar12, *(int *)(lVar12 + 0x14) == *(int *)(lVar16 + 0x3c))) break;
          lVar12 = lVar12 + 0x368;
          lVar15 = lVar15 + -0x368;
          lVar17 = 0;
        } while (lVar15 != 0);
      }
      else {
        lVar15 = lVar15 * 0x368;
        do {
          if (((*(int *)(lVar12 + 8) == *(int *)(param_1 + 0x30)) &&
              (*(int *)(lVar12 + 0xc) == *(int *)(param_1 + 0x34))) &&
             ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x38) &&
              (lVar17 = lVar12, *(int *)(lVar12 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
          lVar12 = lVar12 + 0x368;
          lVar15 = lVar15 + -0x368;
          lVar17 = 0;
        } while (lVar15 != 0);
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    bVar4 = FUN_143abceae(param_1 + 0x1a0,*(undefined8 *)(param_1 + 8),
                          *(undefined1 *)(lVar17 + 0x3c));
    bVar5 = FUN_143abceae(param_1 + 0x448,*(undefined8 *)(param_1 + 8),
                          *(undefined1 *)(lVar17 + 0x3c));
    bVar5 = bVar5 & bVar4;
    if ((*(char *)(lVar17 + 0x3c) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
      bVar4 = FUN_144aed91a();
      bVar5 = bVar5 & bVar4;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x728);
    if ((puVar2 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar2 + 1) != 0)) {
      plVar13 = (longlong *)*puVar2;
      lVar16 = (longlong)*(int *)(puVar2 + 1) * 0x2a8;
      do {
        bVar4 = (**(code **)(*plVar13 + 0x18))
                          (plVar13,*(undefined8 *)(param_1 + 8),*(undefined1 *)(lVar17 + 0x3c));
        bVar5 = bVar5 & bVar4;
        plVar13 = plVar13 + 0x55;
        lVar16 = lVar16 + -0x2a8;
      } while (lVar16 != 0);
    }
    if (bVar5 == 0) {
      FUN_143a83462(param_1,1);
      if (*(int *)(param_1 + 0xd4) != 4) {
        *(undefined4 *)(param_1 + 0xd4) = 4;
      }
    }
    else {
      if (*(int *)(param_1 + 0x74c) == 0) {
        if (((*(byte *)(param_1 + 0x404) & 1) != 0) && (*(longlong *)(param_1 + 0x260) != 0)) {
          sVar14 = (size_t)*(int *)(*(longlong *)(param_1 + 0x260) + 0x88);
          memcpy((void *)((longlong)*(void **)(param_1 + 0x1f8) + sVar14),
                 *(void **)(param_1 + 0x1f8),sVar14);
        }
        if (((*(byte *)(param_1 + 0x6ac) & 1) != 0) && (*(longlong *)(param_1 + 0x508) != 0)) {
          sVar14 = (size_t)*(int *)(*(longlong *)(param_1 + 0x508) + 0x88);
          memcpy((void *)((longlong)*(void **)(param_1 + 0x4a0) + sVar14),
                 *(void **)(param_1 + 0x4a0),sVar14);
        }
        if ((((*(char *)(lVar17 + 0x3c) == '\x01') &&
             (lVar16 = *(longlong *)(param_1 + 0x18), lVar16 != 0)) &&
            (*(char *)(lVar16 + 0x1e4) == '\x01')) && (*(longlong *)(lVar16 + 0x100) != 0)) {
          sVar14 = (size_t)*(int *)(*(longlong *)(lVar16 + 0x100) + 0x88);
          memcpy((void *)((longlong)*(void **)(lVar16 + 0x98) + sVar14),*(void **)(lVar16 + 0x98),
                 sVar14);
        }
        plVar13 = *(longlong **)(param_1 + 0x728);
        if ((plVar13 != (longlong *)0x0) && (lVar16 = plVar13[1], (longlong)(int)lVar16 != 0)) {
          lVar15 = *plVar13;
          lVar17 = 0;
          do {
            if (((*(byte *)(lVar15 + 0x264 + lVar17) & 1) != 0) &&
               (lVar12 = *(longlong *)(lVar15 + 0xc0 + lVar17), lVar12 != 0)) {
              sVar14 = (size_t)*(int *)(lVar12 + 0x88);
              _Src = *(void **)(lVar15 + 0x58 + lVar17);
              memcpy((void *)((longlong)_Src + sVar14),_Src,sVar14);
            }
            lVar17 = lVar17 + 0x2a8;
          } while ((longlong)(int)lVar16 * 0x2a8 - lVar17 != 0);
        }
      }
      if ((*(uint *)(param_1 + 0x764) & 1) != 0) {
        *(uint *)(param_1 + 0x764) = *(uint *)(param_1 + 0x764) & 0xfffffffe;
        lVar16 = *(longlong *)(param_1 + 0x728);
        if (lVar16 != 0) {
          iVar8 = *(int *)(lVar16 + 0x38);
          if ((longlong)iVar8 != 0) {
            lVar16 = *(longlong *)(lVar16 + 0x30);
            lVar15 = 0;
            do {
              FUN_1400d3f60(*(undefined8 *)(lVar16 + lVar15));
              lVar15 = lVar15 + 8;
            } while ((longlong)iVar8 * 8 != lVar15);
            lVar16 = *(longlong *)(param_1 + 0x728);
          }
          iVar8 = *(int *)(lVar16 + 0x28);
          if ((longlong)iVar8 != 0) {
            lVar16 = *(longlong *)(lVar16 + 0x20);
            lVar15 = 0;
            do {
              FUN_1400d3f60(*(undefined8 *)(lVar16 + lVar15));
              lVar15 = lVar15 + 8;
            } while ((longlong)iVar8 * 8 != lVar15);
          }
        }
        if (*(longlong *)(param_1 + 0x18) == 0) {
          FUN_1400d3f60(uVar1);
        }
        else {
          *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x1e5) = 1;
          memset((void *)(*(longlong *)(param_1 + 0x18) + 0x138),0,0xac);
        }
      }
      *(uint *)(param_1 + 0x764) =
           (*(uint *)(param_1 + 0x764) & 0xfffffffb) + (*(uint *)(param_1 + 0x764) & 2) * 2;
      if ((*(longlong *)(param_1 + 8) != 0) && (uVar7 = *(uint *)(param_1 + 0xc0), (uVar7 & 4) != 0)
         ) {
        plVar13 = (longlong *)(param_1 + 0x40);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
        if (plVar3 != (longlong *)0x0) {
          lVar16 = *(longlong *)(param_1 + 0x28);
          if ((lVar16 == 0) || (lVar15 = (longlong)*(int *)(lVar16 + 0x50), lVar15 == 0)) {
            lVar17 = 0;
          }
          else if (*(char *)(lVar16 + 0x40) == '\0') {
            lVar17 = *(longlong *)(lVar16 + 0x48);
          }
          else {
            lVar12 = *(longlong *)(lVar16 + 0x48);
            if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
                *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
              lVar15 = lVar15 * 0x368;
              do {
                if ((((*(int *)(lVar12 + 8) == *(int *)(lVar16 + 0x30)) &&
                     (*(int *)(lVar12 + 0xc) == *(int *)(lVar16 + 0x34))) &&
                    (*(int *)(lVar12 + 0x10) == *(int *)(lVar16 + 0x38))) &&
                   (lVar17 = lVar12, *(int *)(lVar12 + 0x14) == *(int *)(lVar16 + 0x3c))) break;
                lVar12 = lVar12 + 0x368;
                lVar15 = lVar15 + -0x368;
                lVar17 = 0;
              } while (lVar15 != 0);
            }
            else {
              lVar15 = lVar15 * 0x368;
              do {
                if (((*(int *)(lVar12 + 8) == *(int *)(param_1 + 0x30)) &&
                    (*(int *)(lVar12 + 0xc) == *(int *)(param_1 + 0x34))) &&
                   ((*(int *)(lVar12 + 0x10) == *(int *)(param_1 + 0x38) &&
                    (lVar17 = lVar12, *(int *)(lVar12 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
                lVar12 = lVar12 + 0x368;
                lVar15 = lVar15 + -0x368;
                lVar17 = 0;
              } while (lVar15 != 0);
            }
          }
          if ((longlong)*(int *)(lVar17 + 0x1d0) != 0) {
            lVar16 = (longlong)*(int *)(lVar17 + 0x1d0) * 0x14;
            lVar15 = *(longlong *)(lVar17 + 0x1c8) + 8;
            local_60 = plVar13;
            do {
              plVar9 = (longlong *)FUN_144741050(lVar15);
              local_58 = *(undefined8 *)(lVar15 + 4);
              uVar7 = 0xffffffff;
              uVar6 = 0xffffffff;
              if (*plVar9 != 0) {
                uVar6 = FUN_14005ac26(plVar9);
              }
              local_50 = uVar6;
              puVar10 = (uint *)(**(code **)(*plVar3 + 0x58))(plVar3,&local_58,0);
              if (puVar10 != (uint *)0x0) {
                uVar7 = *puVar10;
              }
              piVar11 = (int *)(**(code **)(*plVar13 + 0x58))(plVar13,lVar15 + -8);
              if (((piVar11 != (int *)0x0) && (uVar7 != 0xffffffff)) &&
                 (iVar8 = *piVar11, iVar8 != -1)) {
                if (((int)uVar7 < 0) || ((int)plVar3[9] <= (int)uVar7)) {
                  lVar12 = *(longlong *)(param_1 + 0x80);
                  lVar17 = 0;
                }
                else {
                  lVar17 = *(longlong *)(plVar3[8] + (ulonglong)uVar7 * 8);
                  lVar12 = *(longlong *)(param_1 + 0x80);
                  if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
                    FUN_1456cec3c(lVar17);
                  }
                }
                *(longlong *)(lVar12 + (longlong)iVar8 * 8) = lVar17;
                *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
                plVar13 = local_60;
              }
              lVar15 = lVar15 + 0x14;
              lVar16 = lVar16 + -0x14;
            } while (lVar16 != 0);
            uVar7 = *(uint *)(param_1 + 0xc0);
          }
        }
        if ((uVar7 & 7) != 0 && 0 < *(int *)(param_1 + 0xa8)) {
          FUN_14004222e(plVar13);
          uVar7 = *(uint *)(param_1 + 0xc0);
        }
        *(uint *)(param_1 + 0xc0) = uVar7 & 0xfffffff8;
      }
      iVar8 = *(int *)(param_1 + 0x74c) + 1;
      *(int *)(param_1 + 0x74c) = iVar8;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x28) = iVar8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a84e4d FUN_143a84e4d body=69 status=ok
// SIG undefined FUN_143a84e4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a84e4d(void)

{
  _DAT_14cb3e708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a84e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e710,1);
  return;
}



// FUNCTION 143a84e92 FUN_143a84e92 body=11498 status=ok
// SIG undefined FUN_143a84e92(void)

void FUN_143a84e92(longlong param_1,float param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  code *pcVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined ***pppuVar21;
  uint uVar22;
  ulonglong uVar23;
  uint *puVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  code *pcVar30;
  ulonglong uVar31;
  undefined2 *puVar32;
  size_t sVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  int iVar38;
  bool bVar39;
  undefined1 auStack_208 [32];
  code **local_1e8;
  undefined4 local_1e0;
  longlong local_1d0;
  code *local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  code *local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  longlong local_190;
  code *local_188;
  longlong local_180;
  float *local_178;
  code **local_170;
  longlong *local_168;
  longlong local_160 [2];
  longlong local_150 [2];
  undefined8 local_140;
  code *local_138 [2];
  longlong local_128;
  float local_11c;
  code *local_118 [2];
  undefined ***local_108;
  undefined **local_f8;
  longlong local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  ulonglong local_d8;
  ulonglong local_c8;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar7 = *(int *)(param_1 + 0xd4);
  local_11c = param_2;
  if (iVar7 == 4) goto LAB_143a84f31;
  local_1d0 = param_1;
  if (iVar7 - 3U < 2) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400d4530(*(longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x730));
    }
    FUN_1400d3f60(*(undefined8 *)(local_1d0 + 0x10));
    lVar35 = *(longlong *)(local_1d0 + 0x728);
    if (lVar35 != 0) {
      iVar7 = *(int *)(lVar35 + 0x28);
      if ((longlong)iVar7 != 0) {
        lVar35 = *(longlong *)(lVar35 + 0x20);
        lVar20 = 0;
        do {
          FUN_1400d3f60(*(undefined8 *)(lVar35 + lVar20));
          lVar20 = lVar20 + 8;
        } while ((longlong)iVar7 * 8 != lVar20);
        lVar35 = *(longlong *)(local_1d0 + 0x728);
      }
      iVar7 = *(int *)(lVar35 + 0x38);
      if ((longlong)iVar7 != 0) {
        lVar35 = *(longlong *)(lVar35 + 0x30);
        lVar20 = 0;
        do {
          FUN_1400d3f60(*(undefined8 *)(lVar35 + lVar20));
          lVar20 = lVar20 + 8;
        } while ((longlong)iVar7 * 8 != lVar20);
      }
    }
    goto LAB_143a84f31;
  }
  local_1c8 = *(code **)(param_1 + 0x10);
  *(float *)(param_1 + 0x740) = param_2 + *(float *)(param_1 + 0x740);
  if (iVar7 == 2) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400d4530(*(longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x730));
    }
    FUN_1400d3f60(local_1c8);
    *(undefined4 *)(param_1 + 0xd4) = 1;
    goto LAB_143a84f31;
  }
  lVar35 = *(longlong *)(param_1 + 0x28);
  if (lVar35 == 0) {
    lVar20 = 0;
  }
  else {
    lVar29 = (longlong)*(int *)(lVar35 + 0x50);
    if (lVar29 == 0) {
      lVar20 = 0;
    }
    else if (*(char *)(lVar35 + 0x40) == '\0') {
      lVar20 = *(longlong *)(lVar35 + 0x48);
    }
    else {
      lVar10 = *(longlong *)(lVar35 + 0x48);
      if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
          *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
        lVar29 = lVar29 * 0x368;
        do {
          if ((((*(int *)(lVar10 + 8) == *(int *)(lVar35 + 0x30)) &&
               (*(int *)(lVar10 + 0xc) == *(int *)(lVar35 + 0x34))) &&
              (*(int *)(lVar10 + 0x10) == *(int *)(lVar35 + 0x38))) &&
             (lVar20 = lVar10, *(int *)(lVar10 + 0x14) == *(int *)(lVar35 + 0x3c))) break;
          lVar10 = lVar10 + 0x368;
          lVar29 = lVar29 + -0x368;
          lVar20 = 0;
        } while (lVar29 != 0);
      }
      else {
        lVar29 = lVar29 * 0x368;
        do {
          if (((*(int *)(lVar10 + 8) == *(int *)(param_1 + 0x30)) &&
              (*(int *)(lVar10 + 0xc) == *(int *)(param_1 + 0x34))) &&
             ((*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x38) &&
              (lVar20 = lVar10, *(int *)(lVar10 + 0x14) == *(int *)(param_1 + 0x3c))))) break;
          lVar10 = lVar10 + 0x368;
          lVar29 = lVar29 + -0x368;
          lVar20 = 0;
        } while (lVar29 != 0);
      }
    }
  }
  if (((*(char *)(lVar20 + 0x3c) == '\0') && (iVar7 != 0)) &&
     (*(int *)(*(longlong *)(local_1c8 + 0x78) + 0x120) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_208);
  }
  local_128 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
  local_1b0 = lVar20;
  if (*(longlong *)(param_1 + 0x728) != 0) {
    iVar7 = *(int *)(lVar20 + 0x88);
    *(undefined4 *)(*(longlong *)(param_1 + 0x728) + 0x70) = 0;
    if (0 < (longlong)iVar7) {
      lVar35 = 0;
      do {
        lVar36 = lVar35 * 0x58 + *(longlong *)(lVar20 + 0x80);
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x60);
        lVar19 = lVar35 * 0x78;
        lVar29 = lVar10 + lVar19;
        *(undefined4 *)(lVar10 + 0x50 + lVar19) = 0;
        *(undefined4 *)(lVar10 + 0x48 + lVar19) = 0;
        if (*(int *)(lVar10 + 0x4c + lVar19) < 0) {
          FUN_146bf53da(lVar29);
          param_1 = local_1d0;
        }
        if (((*(byte *)(param_1 + 0x764) & 4) != 0) &&
           (lVar10 = FUN_143ac7628(*(undefined8 *)(param_1 + 8)), param_1 = local_1d0, lVar10 != 0))
        {
          lVar20 = *(longlong *)(lVar10 + 0x78);
          lVar19 = *(longlong *)(lVar29 + 0x58);
          if (lVar19 != lVar20) {
            *(longlong *)(lVar29 + 0x58) = lVar20;
            if (lVar20 != 0) {
              LOCK();
              *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
              UNLOCK();
            }
            if (lVar19 != 0) {
              LOCK();
              *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + -1;
              UNLOCK();
            }
          }
          iVar38 = *(int *)(*(longlong *)(lVar10 + 0x78) + 0x120);
          uVar27 = *(uint *)(lVar36 + 0x2c);
          iVar34 = *(int *)(lVar36 + 0x30);
          iVar26 = iVar34;
          if (iVar38 < iVar34) {
            iVar26 = iVar38;
          }
          if (iVar34 == 0) {
            iVar26 = iVar38;
          }
          uVar6 = *(uint *)(lVar36 + 0x50);
          iVar38 = 0;
          if (0 < iVar26) {
            bVar2 = *(byte *)(lVar36 + 0x4c);
            uVar31 = 0;
            do {
              uVar28 = *(uint *)(lVar36 + 0x2c);
              if ((uVar6 < uVar27 & bVar2) != 0) {
                local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,*(int *)(lVar36 + 0x50));
                uVar28 = uVar28 - *(int *)(lVar36 + 0x50);
                if ((int)uVar28 < 0) {
                  iVar38 = 0;
                }
                else {
                  local_1a0 = CONCAT44(local_1a0._4_4_,uVar28 + 1);
                  local_1c0 = (ulonglong)uVar28;
                  uVar28 = rand();
                  iVar38 = (int)((float)(int)local_1a0 * ((float)(uVar28 & 0x7fff) / 32767.0));
                  if ((int)local_1c0 <= iVar38) {
                    iVar38 = (int)local_1c0;
                  }
                }
                uVar28 = iVar38 + (int)local_1b8;
                param_1 = local_1d0;
              }
              if ((*(int *)(param_1 + 0xd4) == 0) && (uVar28 != 0)) {
                uVar22 = uVar28 + (int)uVar31;
                uVar37 = (ulonglong)uVar22;
                if (uVar22 < 0x7fffffff) {
                  iVar38 = *(int *)(lVar29 + 0x48);
                  *(uint *)(lVar29 + 0x48) = iVar38 + 1U;
                  if (*(uint *)(lVar29 + 0x4c) < iVar38 + 1U) {
                    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,uVar22);
                    local_1c0 = (ulonglong)uVar28;
                    FUN_1401fcbb6(lVar29,iVar38);
                    uVar37 = (ulonglong)local_1b8 & 0xffffffff;
                    uVar28 = (uint)local_1c0;
                    param_1 = local_1d0;
                  }
                  lVar20 = *(longlong *)(lVar29 + 0x40);
                  if (*(longlong *)(lVar29 + 0x40) == 0) {
                    lVar20 = lVar29;
                  }
                  *(uint *)(lVar20 + (longlong)iVar38 * 4) = uVar28;
                  uVar31 = uVar37;
                }
              }
              iVar38 = (int)uVar31;
              iVar26 = iVar26 + -1;
            } while (iVar26 != 0);
          }
          *(int *)(lVar29 + 0x50) = *(int *)(lVar29 + 0x50) + iVar38;
          piVar1 = (int *)(*(longlong *)(param_1 + 0x728) + 0x70);
          *piVar1 = *piVar1 + iVar38;
          lVar20 = local_1b0;
        }
        lVar35 = lVar35 + 1;
      } while (lVar35 != iVar7);
    }
  }
  uVar31 = 0;
  uVar37 = 0;
  if ((*(int *)(param_1 + 0xd4) == 0) && (uVar37 = 0, (*(byte *)(param_1 + 0x764) & 4) != 0)) {
    uVar37 = 0;
    if ((longlong)*(int *)(param_1 + 0x198) != 0) {
      lVar35 = 0;
      uVar37 = 0;
      do {
        iVar7 = *(int *)(*(longlong *)(param_1 + 400) + lVar35);
        if (iVar7 < 1) {
          iVar7 = 0;
        }
        uVar37 = (ulonglong)(uint)((int)uVar37 + iVar7);
        lVar35 = lVar35 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x198) * 0x10 != lVar35);
    }
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    uVar31 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x728) + 0x70);
  }
  lVar35 = *(longlong *)(param_1 + 0x18);
  if (lVar35 == 0) {
    lVar35 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
    if (lVar35 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(uint *)(lVar35 + 0x120);
    }
  }
  else if (*(uint *)(lVar35 + 0x1ec) < *(uint *)(lVar35 + 0x1e8)) {
    uVar27 = *(uint *)(param_1 + 0xcc);
  }
  else {
    uVar27 = *(uint *)(lVar35 + 0x270);
  }
  uVar6 = FUN_144a44170(lVar20);
  uVar28 = (int)uVar31 + (int)uVar37 + uVar27;
  if ((int)uVar6 < (int)uVar28) {
    uVar6 = uVar28;
  }
  if (*(uint *)(local_1d0 + 0x760) <= uVar6) {
    uVar6 = *(uint *)(local_1d0 + 0x760);
  }
  local_1c0 = CONCAT44(local_1c0._4_4_,uVar27);
  if (*(int *)(local_1d0 + 0x754) < (int)uVar6) {
    *(int *)(local_1d0 + 0x75c) = *(int *)(local_1d0 + 0x75c) + 1;
    *(uint *)(local_1d0 + 0x754) = uVar6;
    iVar7 = FUN_1403453ba(lVar20,local_1d0);
    lVar35 = local_1d0;
    if (((4 < iVar7) && (DAT_14cb3e6e0 != 0)) && (*(int *)(local_1d0 + 0x75c) == 3)) {
      local_188 = *(code **)(local_128 + 0x18);
      local_1a0 = uVar31;
      local_198 = uVar37;
      FUN_1400021e4(&local_188,local_118);
      local_140 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(lVar35 + 8) + 0x38) + 0xb8) +
                   (longlong)*(int *)(lVar35 + 200) * 0x48);
      FUN_1400021e4(&local_140,local_138);
      FUN_1400b22c2(local_160,&DAT_149e2c73e);
      FUN_1407ec8fc(local_150,local_118,local_160);
      FUN_1401c7f3e(&local_188,local_150);
      if (local_150[0] != 0) {
        FUN_1400020a8();
      }
      if (local_160[0] != 0) {
        FUN_1400020a8();
      }
      uVar37 = local_198;
      uVar31 = local_1a0;
      uVar27 = (uint)local_1c0;
      if (local_138[0] != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_188 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_118[0] != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  pcVar30 = local_1c8;
  uVar28 = uVar6 - uVar28;
  if ((-1 < (int)uVar28) && (uVar28 < *(uint *)(local_1d0 + 0x758))) {
    *(uint *)(local_1d0 + 0x758) = uVar28;
  }
  lVar35 = *(longlong *)(*(longlong *)(local_1d0 + 8) + 0x730);
  uVar23 = (ulonglong)((*(byte *)(*(longlong *)(local_1d0 + 8) + 0x790) & 1) << 5) |
           (longlong)*(int *)(local_1d0 + 200) << 6;
  *(undefined4 *)(lVar35 + 4 + uVar23) = *(undefined4 *)(local_1d0 + 0xcc);
  *(undefined4 *)(lVar35 + 0xc + uVar23) = *(undefined4 *)(local_1d0 + 0x740);
  *(undefined4 *)(lVar35 + 0x10 + uVar23) = *(undefined4 *)(local_1d0 + 0x744);
  *(undefined4 *)(lVar35 + 0x14 + uVar23) = *(undefined4 *)(local_1d0 + 0x748);
  if (*(char *)(lVar20 + 0x3c) == '\x01') {
    if (*(longlong *)(local_1d0 + 0x18) != 0) {
      *(undefined8 *)(*(longlong *)(local_1d0 + 0x18) + 0x60) =
           *(undefined8 *)(*(longlong *)(lVar20 + 0x268) + 0x1c8);
      lVar35 = *(longlong *)(local_1d0 + 0x18);
      *(int *)(lVar35 + 0x138) = (int)uVar31;
      *(undefined4 *)(lVar35 + 0x13c) = 0;
      *(uint *)(lVar35 + 0x140) = uVar6;
      uVar27 = 0;
      if (((*(int *)(local_1d0 + 0xd4) == 0) &&
          (uVar27 = 0, (*(byte *)(local_1d0 + 0x764) & 4) != 0)) &&
         (iVar7 = *(int *)(local_1d0 + 0x198), 0 < iVar7)) {
        lVar20 = 0;
        lVar29 = 0;
        uVar27 = 0;
        iVar38 = 0;
        do {
          lVar10 = *(longlong *)(local_1d0 + 400);
          iVar34 = *(int *)(lVar10 + lVar20);
          if (uVar27 < 8 && 0 < iVar34) {
            iVar7 = *(int *)(local_1b0 + 0xd0);
            if (*(int *)(local_1b0 + 0xd0) < 1) {
              iVar7 = DAT_14c7628cc;
            }
            iVar38 = iVar34 + iVar38;
            if (iVar7 < iVar38) {
              FUN_144750a86(*(undefined8 *)(local_1d0 + 0x28),&local_188,0,0);
              pcVar30 = local_188;
              if ((int)local_180 == 0) {
                pcVar30 = (code *)&DAT_149dfb77a;
              }
              local_1e0 = (undefined4)lVar29;
              local_1e8 = (code **)CONCAT44(local_1e8._4_4_,iVar38);
              FUN_140002266(local_118,
                            L"%s has attempted to execeed max GPU per frame spawn! | Max: %d | Requested: %d | SpawnInfoEntry: %d"
                            ,pcVar30,iVar7);
              if (local_188 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (local_118[0] != (code *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_143a8705d;
            }
            lVar19 = (ulonglong)uVar27 * 0x10;
            *(undefined4 *)(lVar35 + 0x164 + lVar19) = *(undefined4 *)(lVar10 + 8 + lVar20);
            *(undefined4 *)(lVar35 + 0x168 + lVar19) = *(undefined4 *)(lVar10 + 4 + lVar20);
            *(undefined4 *)(lVar35 + 0x16c + lVar19) = *(undefined4 *)(lVar10 + 0xc + lVar20);
            iVar7 = *(int *)(lVar35 + 0x13c);
            *(int *)(lVar35 + 0x170 + lVar19) = iVar7;
            iVar7 = iVar7 + *(int *)(lVar10 + lVar20);
            *(int *)(lVar35 + 0x13c) = iVar7;
            *(int *)(lVar35 + 0x144 + (ulonglong)uVar27 * 4) = iVar7;
            uVar27 = uVar27 + 1;
            iVar34 = *(int *)(lVar10 + lVar20);
            iVar7 = *(int *)(local_1d0 + 0x198);
          }
          else if (0 < iVar34) {
            if (*(int *)(*(longlong *)(local_1d0 + 0x28) + 0x68) == 0) {
              puVar32 = &DAT_149dfb77a;
            }
            else {
              puVar32 = *(undefined2 **)(*(longlong *)(local_1d0 + 0x28) + 0x60);
            }
            FUN_140002266(local_118,
                          L"%s Exceeded Gpu spawn info count, see NIAGARA_MAX_GPU_SPAWN_INFOS for more information!"
                          ,puVar32);
            if (local_118[0] != (code *)0x0) {
              FUN_1400020a8();
            }
            break;
          }
          *(int *)(local_1d0 + 0xcc) = *(int *)(local_1d0 + 0xcc) + iVar34;
          lVar29 = lVar29 + 1;
          lVar20 = lVar20 + 0x10;
        } while (lVar29 < iVar7);
        if (uVar27 < 8) goto LAB_143a8705d;
      }
      else {
LAB_143a8705d:
        uVar31 = (ulonglong)uVar27;
        uVar4 = *(undefined4 *)(lVar35 + 0x13c);
        lVar20 = uVar31 << 2;
        do {
          uVar31 = uVar31 + 1;
          *(undefined8 *)(lVar35 + 0x164 + lVar20 * 4) = 0;
          *(undefined4 *)(lVar35 + 0x16c + lVar20 * 4) = 0;
          *(undefined4 *)(lVar35 + 0x170 + lVar20 * 4) = uVar4;
          *(undefined4 *)(lVar35 + 0x144 + lVar20) = 0x7fffffff;
          lVar20 = lVar20 + 4;
        } while ((int)uVar31 != 8);
      }
      if ((DAT_14cb3e698 != 0) || ((*(byte *)(local_128 + 0x60) & 2) != 0)) {
        FUN_143aa355c(local_1d0 + 0x1d8,1);
        FUN_143aa355c(local_1d0 + 0x480,1);
        FUN_143aa355c(*(longlong *)(local_1d0 + 0x18) + 0x78,0);
      }
      lVar35 = *(longlong *)(local_1d0 + 0x18);
      if (*(longlong *)(lVar35 + 0x100) == 0) {
        uVar27 = 0;
      }
      else {
        uVar27 = *(int *)(*(longlong *)(lVar35 + 0x100) + 0x88) + 0xfU & 0xfffffff0;
      }
      if (*(uint *)(lVar35 + 0x68) != uVar27) {
        *(uint *)(lVar35 + 0x68) = uVar27;
        lVar35 = *(longlong *)(local_1d0 + 0x18);
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar7 = *(int *)(lVar20 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar7 != 2) {
            if (iVar7 != 1) goto LAB_143a87150;
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_143a87159;
            goto LAB_143a8736c;
          }
        }
        else {
LAB_143a87150:
          if (iVar7 != 0x10) {
LAB_143a8736c:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar20 + 0xc60), iVar7 == 2)) {
LAB_143a8796c:
                puVar13 = (undefined8 *)FUN_14001cc68(0x90,0x10);
                FUN_1403ab9d2(local_118,L"Niagara GPU External CBuffer",uVar27);
                FUN_1404e4ca0(puVar13,local_118);
                if (local_b8 != 0 && (local_b8 & 1) == 0) {
                  FUN_1400020a8();
                }
                if (local_c8 != 0 && (local_c8 & 1) == 0) {
                  FUN_1400020a8();
                }
                if (local_d8 != 0 && (local_d8 & 1) == 0) {
                  FUN_1400020a8();
                }
                if (CONCAT44(uStack_e4,local_e8) != 0 && (local_e8 & 1) == 0) {
                  FUN_1400020a8();
                }
                if (local_f8 != (undefined **)0x0 && ((ulonglong)local_f8 & 1) == 0) {
                  FUN_1400020a8();
                }
                if (local_108 != (undefined ***)0x0 && ((ulonglong)local_108 & 1) == 0) {
                  FUN_1400020a8();
                }
                if (local_118[0] != (code *)0x0 && ((ulonglong)local_118[0] & 1) == 0) {
                  FUN_1400020a8();
                }
                *puVar13 = &PTR_FUN_14adff300;
                puVar25 = *(undefined8 **)(lVar35 + 0x70);
                if (puVar25 != puVar13) {
                  *(undefined8 **)(lVar35 + 0x70) = puVar13;
                  if (puVar13 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
                    UNLOCK();
                  }
                  if (puVar25 != (undefined8 *)0x0) {
                    LOCK();
                    puVar16 = (uint *)(puVar25 + 1);
                    uVar27 = *puVar16;
                    *puVar16 = *puVar16 - 1;
                    UNLOCK();
                    if ((uVar27 & 0x3fffffff) == 1) {
                      puVar16 = (uint *)(puVar25 + 1);
                      LOCK();
                      uVar27 = *puVar16;
                      *puVar16 = *puVar16 | 0x40000000;
                      UNLOCK();
                      if ((uVar27 >> 0x1e & 1) == 0) {
                        bVar2 = *(byte *)((longlong)puVar25 + 0xd);
                        plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                        plVar14[1] = (longlong)puVar25;
                        plVar12 = DAT_14ca843c0;
                        plVar18 = DAT_14ca843c8;
                        if ((bVar2 & 2) == 0) {
                          do {
                            *plVar14 = (longlong)plVar12;
                            LOCK();
                            bVar39 = plVar12 != DAT_14ca843c0;
                            plVar18 = plVar14;
                            if (bVar39) {
                              plVar12 = DAT_14ca843c0;
                              plVar18 = DAT_14ca843c0;
                            }
                            DAT_14ca843c0 = plVar18;
                            UNLOCK();
                          } while (bVar39);
                        }
                        else {
                          do {
                            *plVar14 = (longlong)plVar18;
                            LOCK();
                            bVar39 = plVar18 != DAT_14ca843c8;
                            plVar12 = plVar14;
                            if (bVar39) {
                              plVar18 = DAT_14ca843c8;
                              plVar12 = DAT_14ca843c8;
                            }
                            DAT_14ca843c8 = plVar12;
                            UNLOCK();
                          } while (bVar39);
                        }
                      }
                    }
                  }
                }
                goto LAB_143a87419;
              }
              if (iVar7 == 1) {
                DVar8 = FUN_140ad26c0();
                DVar9 = GetCurrentThreadId();
                if (DVar8 == DVar9) goto LAB_143a8796c;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar13 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar16 = (uint *)*puVar13;
              if (puVar16 != (uint *)0x0) goto LAB_143a8758e;
              while( true ) {
                uVar6 = *(uint *)(*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0x318);
                if ((uVar6 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar6 | 1;
                  __tlregdtor(&LAB_143a9aa61);
                }
                lVar20 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar15 = *(undefined4 **)(lVar20 + 0x310);
                *(undefined8 *)(lVar20 + 0x310) = 0;
                if (puVar15 == (undefined4 *)0x0) {
                  puVar15 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar15 = 0xffffffff;
                *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
                puVar15[0x12] = 0;
                *puVar13 = puVar15;
                FUN_140217a48(puVar13);
                puVar16 = (uint *)*puVar13;
LAB_143a8758e:
                puVar25 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar24 = (uint *)(puVar25 + 0x17);
                uVar6 = puVar16[0x12];
                if (puVar24 <= puVar16 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
                  LOCK();
                  uVar28 = *puVar16;
                  *puVar16 = *puVar16 + uVar6 + 1;
                  UNLOCK();
                  if ((uVar28 ^ uVar6) != 0xffffffff) break;
                  puVar16 = (uint *)*puVar13;
                  *puVar16 = 0xffffffff;
                  *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
                  puVar16[0x12] = 0;
                  *puVar13 = puVar16;
                  puVar25 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
                  puVar24 = (uint *)(puVar25 + 0x17);
                  uVar6 = 0;
                  if (puVar24 <= puVar16 + 0x4000) {
                    uVar6 = 1;
                    goto LAB_143a8760e;
                  }
                }
              }
              uVar6 = uVar6 + 1;
LAB_143a8760e:
              *(uint **)(puVar16 + 0x10) = puVar24;
              puVar16[0x12] = uVar6;
              iVar7 = 0;
              FUN_1447247dc(puVar25,0);
              *puVar25 = &PTR_FUN_14adff360;
              puVar25[0x15] = lVar35;
              *(uint *)(puVar25 + 0x16) = uVar27;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar27 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar27 < 2) {
                  uVar31 = (ulonglong)(byte)(&DAT_149e38edc)[uVar27];
                  iVar7 = 0;
                }
                else {
                  uVar31 = 2;
                }
              }
              else {
                iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                        *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar31 = 5;
              }
              if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
              }
              puVar25[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar25[9] = puVar25;
              puVar25[10] = puVar25;
              lVar35 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar35 == 0) {
                uVar37 = 1;
                if ((char)uVar31 != '\x06') {
                  uVar37 = uVar31;
                }
                uVar31 = uVar37;
                uVar17 = 0;
              }
              else {
                if ((char)uVar31 == '\x06') {
                  uVar31 = *(ulonglong *)(lVar35 + 0x38) >> 0x3b;
                }
                uVar17 = *(undefined8 *)(lVar35 + 0x30);
              }
              puVar25[0xf] = uVar17;
              puVar25[0x10] = uVar31 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar25 + 0x1c) = iVar7;
              if (puVar25 == (undefined8 *)0x0) {
                local_118[0] = (code *)CONCAT71(local_118[0]._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
                UNLOCK();
                local_118[0] = (code *)CONCAT71(local_118[0]._1_7_,1);
                FUN_1447439e4(puVar25);
                LOCK();
                piVar1 = (int *)(puVar25 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar25)(puVar25,1);
                }
              }
            }
            else {
              local_1e8 = local_118;
              local_108 = (undefined ***)0x0;
              local_f8 = &PTR_LAB_14adff310;
              local_118[0] = FUN_143a9ac78;
              local_f0 = lVar35;
              local_e8 = uVar27;
              FUN_14005a792(&DAT_14ca9a440,L"UpdateConstantBuffer",&DAT_14cb3f064);
              if (local_118[0] != (code *)0x0) {
                pppuVar21 = local_108;
                if (local_108 == (undefined ***)0x0) {
                  pppuVar21 = &local_f8;
                }
                (*(code *)(*pppuVar21)[2])();
              }
            }
            goto LAB_143a87419;
          }
        }
LAB_143a87159:
        puVar13 = (undefined8 *)FUN_14001cc68(0x90,0x10);
        FUN_1403ab9d2(local_118,L"Niagara GPU External CBuffer",uVar27);
        FUN_1404e4ca0(puVar13,local_118);
        if (local_b8 != 0 && (local_b8 & 1) == 0) {
          FUN_1400020a8();
        }
        if (local_c8 != 0 && (local_c8 & 1) == 0) {
          FUN_1400020a8();
        }
        if (local_d8 != 0 && (local_d8 & 1) == 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_e4,local_e8) != 0 && (local_e8 & 1) == 0) {
          FUN_1400020a8();
        }
        if (local_f8 != (undefined **)0x0 && ((ulonglong)local_f8 & 1) == 0) {
          FUN_1400020a8();
        }
        if (local_108 != (undefined ***)0x0 && ((ulonglong)local_108 & 1) == 0) {
          FUN_1400020a8();
        }
        if (local_118[0] != (code *)0x0 && ((ulonglong)local_118[0] & 1) == 0) {
          FUN_1400020a8();
        }
        *puVar13 = &PTR_FUN_14adff300;
        puVar25 = *(undefined8 **)(lVar35 + 0x70);
        if (puVar25 != puVar13) {
          *(undefined8 **)(lVar35 + 0x70) = puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
            UNLOCK();
          }
          if (puVar25 != (undefined8 *)0x0) {
            LOCK();
            puVar16 = (uint *)(puVar25 + 1);
            uVar27 = *puVar16;
            *puVar16 = *puVar16 - 1;
            UNLOCK();
            if ((uVar27 & 0x3fffffff) == 1) {
              puVar16 = (uint *)(puVar25 + 1);
              LOCK();
              uVar27 = *puVar16;
              *puVar16 = *puVar16 | 0x40000000;
              UNLOCK();
              if ((uVar27 >> 0x1e & 1) == 0) {
                bVar2 = *(byte *)((longlong)puVar25 + 0xd);
                plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                plVar14[1] = (longlong)puVar25;
                plVar12 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c8;
                if ((bVar2 & 2) == 0) {
                  do {
                    *plVar14 = (longlong)plVar12;
                    LOCK();
                    bVar39 = plVar12 != DAT_14ca843c0;
                    plVar18 = plVar14;
                    if (bVar39) {
                      plVar12 = DAT_14ca843c0;
                      plVar18 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar18;
                    UNLOCK();
                  } while (bVar39);
                }
                else {
                  do {
                    *plVar14 = (longlong)plVar18;
                    LOCK();
                    bVar39 = plVar18 != DAT_14ca843c8;
                    plVar12 = plVar14;
                    if (bVar39) {
                      plVar18 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar39);
                }
              }
            }
          }
        }
      }
LAB_143a87419:
      FUN_143a83ffa(local_1d0);
      if (((*(byte *)(local_1d0 + 0x404) & 1) != 0) && (*(longlong *)(local_1d0 + 0x260) != 0)) {
        sVar33 = (size_t)*(int *)(*(longlong *)(local_1d0 + 0x260) + 0x88);
        memcpy((void *)((longlong)*(void **)(local_1d0 + 0x1f8) + sVar33),
               *(void **)(local_1d0 + 0x1f8),sVar33);
      }
      if (((*(byte *)(local_1d0 + 0x6ac) & 1) != 0) && (*(longlong *)(local_1d0 + 0x508) != 0)) {
        sVar33 = (size_t)*(int *)(*(longlong *)(local_1d0 + 0x508) + 0x88);
        memcpy((void *)((longlong)*(void **)(local_1d0 + 0x4a0) + sVar33),
               *(void **)(local_1d0 + 0x4a0),sVar33);
      }
      plVar12 = *(longlong **)(local_1d0 + 0x728);
      if ((plVar12 != (longlong *)0x0) && (lVar35 = plVar12[1], (longlong)(int)lVar35 != 0)) {
        lVar20 = *plVar12;
        lVar29 = 0;
        do {
          if (((*(byte *)(lVar20 + 0x264 + lVar29) & 1) != 0) &&
             (lVar10 = *(longlong *)(lVar20 + 0xc0 + lVar29), lVar10 != 0)) {
            sVar33 = (size_t)*(int *)(lVar10 + 0x88);
            pvVar5 = *(void **)(lVar20 + 0x58 + lVar29);
            memcpy((void *)((longlong)pvVar5 + sVar33),pvVar5,sVar33);
          }
          lVar29 = lVar29 + 0x2a8;
        } while ((longlong)(int)lVar35 * 0x2a8 - lVar29 != 0);
      }
      goto LAB_143a84f31;
    }
  }
  else if ((*(char *)(lVar20 + 0x3c) == '\0') && (DAT_14c7628c8 < (int)uVar6)) {
    FUN_144750a86(*(undefined8 *)(local_1d0 + 0x28),&local_188,0,0);
    local_1e8 = (code **)CONCAT44(local_1e8._4_4_,uVar6);
    FUN_140002266(local_118,
                  L"%s has attempted to exceed the max CPU particle count! | Max: %d | Requested: %u"
                 );
    if (local_188 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_1481bc204(lVar20,0xffffffffffffffff);
    if (*(longlong *)(local_1d0 + 0x728) != 0) {
      *(undefined4 *)(*(longlong *)(local_1d0 + 0x728) + 0x70) = 0;
      lVar35 = (longlong)*(int *)(*(longlong *)(local_1d0 + 0x728) + 0x68);
      if (lVar35 == 0) {
        uVar31 = 0;
      }
      else {
        lVar20 = *(longlong *)(*(longlong *)(local_1d0 + 0x728) + 0x60);
        lVar35 = lVar35 * 0x78;
        do {
          *(undefined4 *)(lVar20 + 0x48) = 0;
          if (*(int *)(lVar20 + 0x4c) != 0) {
            FUN_146bf53da(lVar20,0);
          }
          *(undefined4 *)(lVar20 + 0x50) = 0;
          lVar20 = lVar20 + 0x78;
          lVar35 = lVar35 + -0x78;
        } while (lVar35 != 0);
        uVar31 = 0;
        pcVar30 = local_1c8;
      }
    }
    if (local_118[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    uVar37 = 0;
    uVar6 = uVar27;
  }
  local_1a8 = pcVar30 + 0x88;
  pcVar11 = *(code **)(pcVar30 + 0x98);
  if (*(code **)(pcVar30 + 0x98) == (code *)0x0) {
    pcVar11 = local_1a8;
  }
  iVar7 = *(int *)(pcVar30 + 0xa0);
  if ((longlong)iVar7 != 0) {
    lVar35 = 0;
    do {
      puVar13 = *(undefined8 **)(pcVar11 + lVar35);
      if (puVar13 != *(undefined8 **)(pcVar30 + 0x78)) {
        LOCK();
        bVar39 = *(int *)(puVar13 + 1) == 0;
        if (bVar39) {
          *(int *)(puVar13 + 1) = -1;
        }
        UNLOCK();
        if (bVar39) goto LAB_143a8581b;
      }
      lVar35 = lVar35 + 8;
    } while ((longlong)iVar7 * 8 != lVar35);
  }
  puVar13 = (undefined8 *)FUN_14001cc68(0x198,0x10);
  *(undefined4 *)(puVar13 + 1) = 0;
  *puVar13 = &PTR_FUN_14ade2d80;
  puVar13[2] = pcVar30;
  puVar13[3] = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  puVar13[6] = 0;
  puVar13[7] = 0;
  puVar13[8] = 0;
  puVar13[9] = 0;
  puVar13[10] = 0;
  puVar13[0xb] = 0xffffffff00000000;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  puVar13[0xf] = 0;
  *(undefined8 *)((longlong)puVar13 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x84) = 0;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0;
  puVar13[0x14] = 0;
  puVar13[0x15] = 0;
  *(undefined8 *)((longlong)puVar13 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar13 + 0xb4) = 0;
  puVar13[0x18] = 0;
  puVar13[0x19] = 0;
  puVar13[0x1a] = 0;
  puVar13[0x1b] = 0;
  *(undefined8 *)((longlong)puVar13 + 0xdc) = 0;
  *(undefined8 *)((longlong)puVar13 + 0xe4) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x114) = 0;
  puVar13[0x20] = 0;
  puVar13[0x21] = 0;
  puVar13[0x1e] = 0;
  puVar13[0x1f] = 0;
  *(undefined8 *)((longlong)puVar13 + 300) = 0;
  *(undefined8 *)((longlong)puVar13 + 0x134) = 0;
  puVar13[0x24] = 0;
  puVar13[0x25] = 0;
  puVar13[0x28] = 0;
  puVar13[0x29] = 0;
  puVar13[0x2c] = 0;
  puVar13[0x2d] = 0;
  puVar13[0x2e] = 0;
  puVar13[0x2f] = 0;
  *(undefined4 *)(puVar13 + 0x30) = 1;
  puVar13[0x31] = 0;
  puVar13[0x32] = 0;
  iVar7 = *(int *)(pcVar30 + 0xa0);
  *(uint *)(pcVar30 + 0xa0) = iVar7 + 1U;
  if (*(uint *)(pcVar30 + 0xa4) < iVar7 + 1U) {
    FUN_140e69270(local_1a8,iVar7);
  }
  pcVar11 = *(code **)(pcVar30 + 0x98);
  if (*(code **)(pcVar30 + 0x98) == (code *)0x0) {
    pcVar11 = local_1a8;
  }
  *(undefined8 **)(pcVar11 + (longlong)iVar7 * 8) = puVar13;
  LOCK();
  if (*(int *)(puVar13 + 1) == 0) {
    *(int *)(puVar13 + 1) = -1;
  }
  UNLOCK();
LAB_143a8581b:
  *(undefined8 **)(pcVar30 + 0x80) = puVar13;
  *(undefined4 *)(puVar13 + 0x24) = 0;
  lVar35 = *(longlong *)(pcVar30 + 0x80);
  local_1a0 = uVar31;
  local_198 = uVar37;
  if (*(int *)(lVar35 + 0x54) < 0) {
    *(undefined4 *)(lVar35 + 0x50) = 0;
    FUN_14481578e(lVar35 + 0x48,0);
  }
  else {
    *(undefined4 *)(lVar35 + 0x50) = 0;
  }
  FUN_1447a955c(pcVar30);
  lVar35 = *(longlong *)(local_1d0 + 0x728);
  lVar20 = local_1d0;
  if (lVar35 != 0) {
    if ((longlong)*(int *)(lVar35 + 0x38) != 0) {
      plVar12 = *(longlong **)(lVar35 + 0x30);
      local_1b8 = plVar12 + *(int *)(lVar35 + 0x38);
      do {
        lVar20 = *plVar12;
        lVar35 = lVar20 + 0x88;
        lVar29 = *(longlong *)(lVar20 + 0x98);
        if (*(longlong *)(lVar20 + 0x98) == 0) {
          lVar29 = lVar35;
        }
        iVar7 = *(int *)(lVar20 + 0xa0);
        if ((longlong)iVar7 != 0) {
          lVar10 = 0;
          do {
            puVar13 = *(undefined8 **)(lVar29 + lVar10);
            if (puVar13 != *(undefined8 **)(lVar20 + 0x78)) {
              LOCK();
              bVar39 = *(int *)(puVar13 + 1) == 0;
              if (bVar39) {
                *(int *)(puVar13 + 1) = -1;
              }
              UNLOCK();
              if (bVar39) goto LAB_143a85a1d;
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar7 * 8 != lVar10);
        }
        puVar13 = (undefined8 *)FUN_14001cc68(0x198,0x10);
        *(undefined4 *)(puVar13 + 1) = 0;
        *puVar13 = &PTR_FUN_14ade2d80;
        puVar13[2] = lVar20;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0xffffffff00000000;
        puVar13[0xc] = 0;
        puVar13[0xd] = 0;
        puVar13[0xe] = 0;
        puVar13[0xf] = 0;
        *(undefined8 *)((longlong)puVar13 + 0x7c) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x84) = 0;
        puVar13[0x12] = 0;
        puVar13[0x13] = 0;
        puVar13[0x14] = 0;
        puVar13[0x15] = 0;
        *(undefined8 *)((longlong)puVar13 + 0xac) = 0;
        *(undefined8 *)((longlong)puVar13 + 0xb4) = 0;
        puVar13[0x18] = 0;
        puVar13[0x19] = 0;
        puVar13[0x1a] = 0;
        puVar13[0x1b] = 0;
        *(undefined8 *)((longlong)puVar13 + 0xdc) = 0;
        *(undefined8 *)((longlong)puVar13 + 0xe4) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x10c) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x114) = 0;
        puVar13[0x20] = 0;
        puVar13[0x21] = 0;
        puVar13[0x1e] = 0;
        puVar13[0x1f] = 0;
        *(undefined8 *)((longlong)puVar13 + 300) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x134) = 0;
        puVar13[0x24] = 0;
        puVar13[0x25] = 0;
        puVar13[0x28] = 0;
        puVar13[0x29] = 0;
        puVar13[0x2c] = 0;
        puVar13[0x2d] = 0;
        puVar13[0x2e] = 0;
        puVar13[0x2f] = 0;
        *(undefined4 *)(puVar13 + 0x30) = 1;
        puVar13[0x31] = 0;
        puVar13[0x32] = 0;
        lVar29 = (longlong)*(int *)(lVar20 + 0xa0);
        uVar27 = *(int *)(lVar20 + 0xa0) + 1;
        *(uint *)(lVar20 + 0xa0) = uVar27;
        if (*(uint *)(lVar20 + 0xa4) < uVar27) {
          local_190 = lVar29;
          FUN_140e69270(lVar35,lVar29);
          lVar29 = local_190;
        }
        if (*(longlong *)(lVar20 + 0x98) != 0) {
          lVar35 = *(longlong *)(lVar20 + 0x98);
        }
        *(undefined8 **)(lVar35 + lVar29 * 8) = puVar13;
        LOCK();
        if (*(int *)(puVar13 + 1) == 0) {
          *(int *)(puVar13 + 1) = -1;
        }
        UNLOCK();
LAB_143a85a1d:
        *(undefined8 **)(lVar20 + 0x80) = puVar13;
        *(undefined4 *)(puVar13 + 0x24) = 0;
        lVar35 = *(longlong *)(lVar20 + 0x80);
        if (*(int *)(lVar35 + 0x54) < 0) {
          *(undefined4 *)(lVar35 + 0x50) = 0;
          FUN_14481578e(lVar35 + 0x48,0);
        }
        else {
          *(undefined4 *)(lVar35 + 0x50) = 0;
        }
        uVar27 = (uint)local_1c0;
        FUN_1447a955c(lVar20);
        plVar12 = plVar12 + 1;
      } while (plVar12 != local_1b8);
      lVar35 = *(longlong *)(local_1d0 + 0x728);
    }
    lVar20 = local_1d0;
    if ((longlong)*(int *)(lVar35 + 0x28) != 0) {
      plVar18 = *(longlong **)(lVar35 + 0x20);
      plVar12 = plVar18 + *(int *)(lVar35 + 0x28);
      lVar35 = 0;
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(lVar20 + 0x728) + 0x40) + lVar35) == '\0') {
          lVar29 = *plVar18;
          lVar20 = lVar29 + 0x88;
          lVar10 = *(longlong *)(lVar29 + 0x98);
          if (*(longlong *)(lVar29 + 0x98) == 0) {
            lVar10 = lVar20;
          }
          iVar7 = *(int *)(lVar29 + 0xa0);
          if ((longlong)iVar7 != 0) {
            lVar19 = 0;
            do {
              puVar13 = *(undefined8 **)(lVar10 + lVar19);
              if (puVar13 != *(undefined8 **)(lVar29 + 0x78)) {
                LOCK();
                bVar39 = *(int *)(puVar13 + 1) == 0;
                if (bVar39) {
                  *(int *)(puVar13 + 1) = -1;
                }
                UNLOCK();
                if (bVar39) goto LAB_143a85c53;
              }
              lVar19 = lVar19 + 8;
            } while ((longlong)iVar7 * 8 != lVar19);
          }
          puVar13 = (undefined8 *)FUN_14001cc68(0x198,0x10);
          *(undefined4 *)(puVar13 + 1) = 0;
          *puVar13 = &PTR_FUN_14ade2d80;
          puVar13[2] = lVar29;
          puVar13[3] = 0;
          puVar13[4] = 0;
          puVar13[5] = 0;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          puVar13[10] = 0;
          puVar13[0xb] = 0xffffffff00000000;
          puVar13[0xc] = 0;
          puVar13[0xd] = 0;
          puVar13[0xe] = 0;
          puVar13[0xf] = 0;
          *(undefined8 *)((longlong)puVar13 + 0x7c) = 0;
          *(undefined8 *)((longlong)puVar13 + 0x84) = 0;
          puVar13[0x12] = 0;
          puVar13[0x13] = 0;
          puVar13[0x14] = 0;
          puVar13[0x15] = 0;
          *(undefined8 *)((longlong)puVar13 + 0xac) = 0;
          *(undefined8 *)((longlong)puVar13 + 0xb4) = 0;
          puVar13[0x18] = 0;
          puVar13[0x19] = 0;
          puVar13[0x1a] = 0;
          puVar13[0x1b] = 0;
          *(undefined8 *)((longlong)puVar13 + 0xdc) = 0;
          *(undefined8 *)((longlong)puVar13 + 0xe4) = 0;
          *(undefined8 *)((longlong)puVar13 + 0x10c) = 0;
          *(undefined8 *)((longlong)puVar13 + 0x114) = 0;
          puVar13[0x20] = 0;
          puVar13[0x21] = 0;
          puVar13[0x1e] = 0;
          puVar13[0x1f] = 0;
          *(undefined8 *)((longlong)puVar13 + 300) = 0;
          *(undefined8 *)((longlong)puVar13 + 0x134) = 0;
          puVar13[0x24] = 0;
          puVar13[0x25] = 0;
          puVar13[0x28] = 0;
          puVar13[0x29] = 0;
          puVar13[0x2c] = 0;
          puVar13[0x2d] = 0;
          puVar13[0x2e] = 0;
          puVar13[0x2f] = 0;
          *(undefined4 *)(puVar13 + 0x30) = 1;
          puVar13[0x31] = 0;
          puVar13[0x32] = 0;
          plVar14 = (longlong *)(longlong)*(int *)(lVar29 + 0xa0);
          uVar27 = *(int *)(lVar29 + 0xa0) + 1;
          *(uint *)(lVar29 + 0xa0) = uVar27;
          if (*(uint *)(lVar29 + 0xa4) < uVar27) {
            local_1b8 = plVar14;
            FUN_140e69270(lVar20,plVar14);
            plVar14 = local_1b8;
          }
          if (*(longlong *)(lVar29 + 0x98) != 0) {
            lVar20 = *(longlong *)(lVar29 + 0x98);
          }
          *(undefined8 **)(lVar20 + (longlong)plVar14 * 8) = puVar13;
          LOCK();
          if (*(int *)(puVar13 + 1) == 0) {
            *(int *)(puVar13 + 1) = -1;
          }
          UNLOCK();
LAB_143a85c53:
          *(undefined8 **)(lVar29 + 0x80) = puVar13;
          *(undefined4 *)(puVar13 + 0x24) = 0;
          lVar20 = *(longlong *)(lVar29 + 0x80);
          if (*(int *)(lVar20 + 0x54) < 0) {
            *(undefined4 *)(lVar20 + 0x50) = 0;
            FUN_14481578e(lVar20 + 0x48,0);
          }
          else {
            *(undefined4 *)(lVar20 + 0x50) = 0;
          }
          uVar27 = (uint)local_1c0;
          FUN_1447a955c(lVar29);
          lVar20 = local_1d0;
        }
        lVar35 = lVar35 + 1;
        plVar18 = plVar18 + 1;
      } while (plVar18 != plVar12);
    }
  }
  lVar35 = local_1b0;
  if (0 < (int)uVar27) {
    *(uint *)(*(longlong *)(local_1c8 + 0x80) + 0x120) = uVar27;
    if (*(uint **)(lVar20 + 0x710) != (uint *)0x0) {
      **(uint **)(lVar20 + 0x710) = uVar27;
    }
    lVar35 = lVar20 + 0x448;
    local_1e8 = (code **)CONCAT71(local_1e8._1_7_,1);
    FUN_144966a0a(lVar35,0,local_1c8,0);
    lVar20 = *(longlong *)(lVar20 + 0x728);
    if ((lVar20 != 0) && (iVar7 = *(int *)(lVar20 + 0x28), (longlong)iVar7 != 0)) {
      lVar20 = *(longlong *)(lVar20 + 0x20);
      lVar29 = 0;
      iVar38 = 1;
      do {
        lVar10 = *(longlong *)(lVar20 + lVar29);
        *(uint *)(*(longlong *)(lVar10 + 0x80) + 0x120) = uVar27;
        local_1e8 = (code **)CONCAT71(local_1e8._1_7_,1);
        FUN_144966a0a(lVar35,iVar38,lVar10,0);
        lVar29 = lVar29 + 8;
        iVar38 = iVar38 + 1;
      } while ((longlong)iVar7 * 8 != lVar29);
    }
    lVar20 = local_1d0;
    local_b8 = 0;
    local_b0 = 0xc00000000;
    local_78 = 0;
    local_70 = 0xc00000000;
    FUN_144b3583c(local_1d0,lVar35);
    local_1e8 = local_118;
    FUN_14477f9b2(lVar35,*(undefined8 *)(lVar20 + 8),local_11c);
    lVar35 = *(longlong *)(local_1c8 + 0x80);
    if ((DAT_14cb3e698 != 0) || ((*(byte *)(local_128 + 0x60) & 2) != 0)) {
      local_138[0] = (code *)0x0;
      FUN_140002266(&local_188,L"=== Updated %d Particles (%d Died) ===",local_1c0 & 0xffffffff,
                    uVar27 - *(int *)(lVar35 + 0x120));
      local_1e8 = local_138;
      FUN_143a774ea(lVar35);
      if (local_188 != (code *)0x0) {
        FUN_1400020a8();
      }
      lVar35 = *(longlong *)(local_1d0 + 0x728);
      if ((lVar35 != 0) && (0 < *(int *)(lVar35 + 0x28))) {
        uVar31 = 0;
        do {
          lVar20 = *(longlong *)(*(longlong *)(lVar35 + 0x20) + uVar31 * 8);
          if ((lVar20 != 0) &&
             (lVar20 = *(longlong *)(lVar20 + 0x80), *(int *)(lVar20 + 0x120) != 0)) {
            local_138[0] = (code *)0x0;
            FUN_140002266(&local_188,L"Update Script Event %d",uVar31 & 0xffffffff);
            local_1e8 = local_138;
            FUN_143a774ea(lVar20);
            if (local_188 != (code *)0x0) {
              FUN_1400020a8();
            }
            lVar35 = *(longlong *)(local_1d0 + 0x728);
          }
          uVar31 = uVar31 + 1;
        } while ((longlong)uVar31 < (longlong)*(int *)(lVar35 + 0x28));
      }
    }
    lVar35 = local_1b0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    lVar20 = local_1d0;
    if (local_b8 != 0) {
      FUN_1400020a8();
      lVar20 = local_1d0;
    }
  }
  uVar37 = local_198;
  uVar31 = local_1a0;
  iVar7 = *(int *)(*(longlong *)(local_1c8 + 0x80) + 0x120);
  *(undefined4 *)local_1c8 = 0;
  iVar38 = *(int *)(local_1c8 + 0x38);
  if ((longlong)iVar38 < 0) {
    pcVar30 = local_1c8 + 0x30;
    *(undefined4 *)(local_1c8 + 0x38) = 0;
    if ((uint)(*(int *)(local_1c8 + 0x3c) - iVar38) < (uint)-iVar38) {
      FUN_1446f48e2(pcVar30);
    }
    memset((void *)((longlong)iVar38 * 4 + *(longlong *)pcVar30),0,(ulonglong)(uint)-iVar38 << 2);
    lVar20 = local_1d0;
  }
  else if (iVar38 != 0) {
    *(undefined4 *)(local_1c8 + 0x38) = 0;
  }
  pcVar30 = local_1c8;
  iVar34 = 0;
  iVar38 = iVar7;
  if ((int)uVar37 + (int)uVar31 != 0) {
    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,iVar7);
    iVar38 = uVar6 - (uint)local_1c0;
    iVar34 = 0;
    local_b8 = 0;
    local_b0 = 0xc00000000;
    local_78 = 0;
    local_70 = 0xc00000000;
    FUN_144b3583c(lVar20);
    local_180 = local_1d0;
    local_178 = &local_11c;
    local_168 = &local_128;
    iVar7 = *(int *)(local_1d0 + 0x198);
    lVar20 = local_1d0;
    local_188 = pcVar30;
    local_170 = local_118;
    if ((longlong)iVar7 != 0) {
      lVar35 = *(longlong *)(local_1d0 + 400);
      lVar29 = 0;
      do {
        iVar26 = *(int *)(lVar35 + lVar29);
        if (iVar38 <= *(int *)(lVar35 + lVar29)) {
          iVar26 = iVar38;
        }
        if (0 < iVar26) {
          if (*(undefined4 **)(lVar20 + 0x6f0) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar20 + 0x6f0) = *(undefined4 *)(lVar35 + 8 + lVar29);
          }
          if (*(undefined4 **)(lVar20 + 0x6f8) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar20 + 0x6f8) = *(undefined4 *)(lVar35 + 4 + lVar29);
          }
          if (*(undefined4 **)(lVar20 + 0x700) != (undefined4 *)0x0) {
            **(undefined4 **)(lVar20 + 0x700) = *(undefined4 *)(lVar35 + 0xc + lVar29);
          }
          FUN_143a87ba0(&local_188);
          lVar20 = local_1d0;
        }
        iVar38 = iVar38 - iVar26;
        lVar29 = lVar29 + 0x10;
      } while ((longlong)iVar7 * 0x10 != lVar29);
    }
    local_1c0 = CONCAT44(local_1c0._4_4_,*(undefined4 *)(*(longlong *)(local_1c8 + 0x80) + 0x120));
    lVar35 = local_1b0;
    if ((*(longlong *)(lVar20 + 0x728) != 0) && (iVar7 = *(int *)(local_1b0 + 0x88), 0 < iVar7)) {
      lVar29 = 0;
      iVar34 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(lVar20 + 0x728) + 0x60);
        if (0 < *(int *)(lVar10 + 0x48 + lVar29 * 0x78)) {
          lVar10 = lVar10 + lVar29 * 0x78;
          lVar35 = 0;
          do {
            lVar19 = *(longlong *)(lVar10 + 0x40);
            if (*(longlong *)(lVar10 + 0x40) == 0) {
              lVar19 = lVar10;
            }
            iVar7 = *(int *)(lVar19 + lVar35 * 4);
            if (iVar38 <= iVar7) {
              iVar7 = iVar38;
            }
            if (iVar7 < 1) {
              *(undefined4 *)(lVar19 + lVar35 * 4) = 0;
            }
            else {
              iVar7 = *(int *)(*(longlong *)(local_1c8 + 0x80) + 0x120);
              if (*(undefined4 **)(lVar20 + 0x6f0) != (undefined4 *)0x0) {
                **(undefined4 **)(lVar20 + 0x6f0) = 0;
              }
              if (*(float **)(lVar20 + 0x6f8) != (float *)0x0) {
                **(float **)(lVar20 + 0x6f8) = local_11c * 0.5;
              }
              if (*(undefined4 **)(lVar20 + 0x700) != (undefined4 *)0x0) {
                **(undefined4 **)(lVar20 + 0x700) = 0;
              }
              FUN_143a87ba0(&local_188);
              iVar7 = *(int *)(*(longlong *)(local_1c8 + 0x80) + 0x120) - iVar7;
              iVar34 = iVar34 + iVar7;
              lVar20 = *(longlong *)(lVar10 + 0x40);
              if (*(longlong *)(lVar10 + 0x40) == 0) {
                lVar20 = lVar10;
              }
              *(int *)(lVar20 + lVar35 * 4) = iVar7;
              iVar38 = iVar38 - iVar7;
              lVar20 = local_1d0;
            }
            lVar35 = lVar35 + 1;
          } while (lVar35 < *(int *)(lVar10 + 0x48));
          iVar7 = *(int *)(local_1b0 + 0x88);
          lVar35 = local_1b0;
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 < iVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
      lVar20 = local_1d0;
    }
    pcVar30 = local_1c8;
    iVar38 = (uint)local_1c0;
    iVar7 = (int)local_1b8;
    if (local_b8 != 0) {
      FUN_1400020a8();
      lVar20 = local_1d0;
    }
  }
  *(int *)(*(longlong *)(pcVar30 + 0x80) + 0x134) =
       *(int *)(*(longlong *)(pcVar30 + 0x80) + 0x120) - iVar7;
  *(undefined4 *)(*(longlong *)(pcVar30 + 0x80) + 0x138) = *(undefined4 *)(pcVar30 + 0x28);
  LOCK();
  if (*(int *)(*(longlong *)(pcVar30 + 0x80) + 8) == -1) {
    *(int *)(*(longlong *)(pcVar30 + 0x80) + 8) = 0;
  }
  UNLOCK();
  *(undefined8 *)(pcVar30 + 0x78) = *(undefined8 *)(pcVar30 + 0x80);
  *(undefined8 *)(pcVar30 + 0x80) = 0;
  lVar29 = *(longlong *)(lVar20 + 0x728);
  if (lVar29 != 0) {
    iVar7 = *(int *)(lVar29 + 0x38);
    if ((longlong)iVar7 != 0) {
      lVar20 = *(longlong *)(lVar29 + 0x30);
      lVar29 = 0;
      do {
        lVar10 = *(longlong *)(lVar20 + lVar29);
        if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x80) != 0)) {
          piVar1 = (int *)(*(longlong *)(lVar10 + 0x80) + 8);
          LOCK();
          if (*piVar1 == -1) {
            *piVar1 = 0;
          }
          UNLOCK();
          *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x80);
          *(undefined8 *)(lVar10 + 0x80) = 0;
        }
        lVar29 = lVar29 + 8;
      } while ((longlong)iVar7 * 8 != lVar29);
      lVar29 = *(longlong *)(local_1d0 + 0x728);
      lVar20 = local_1d0;
    }
    iVar7 = *(int *)(lVar29 + 0x28);
    if ((longlong)iVar7 != 0) {
      lVar20 = *(longlong *)(lVar29 + 0x20);
      lVar29 = 0;
      do {
        lVar10 = *(longlong *)(lVar20 + lVar29);
        if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x80) != 0)) {
          piVar1 = (int *)(*(longlong *)(lVar10 + 0x80) + 8);
          LOCK();
          if (*piVar1 == -1) {
            *piVar1 = 0;
          }
          UNLOCK();
          *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(lVar10 + 0x80);
          *(undefined8 *)(lVar10 + 0x80) = 0;
        }
        lVar29 = lVar29 + 8;
      } while ((longlong)iVar7 * 8 != lVar29);
      lVar29 = *(longlong *)(local_1d0 + 0x728);
      lVar20 = local_1d0;
    }
    if (lVar29 != 0) {
      if (iVar34 != 0) {
        if ((DAT_14cb3e698 != 0) || (pcVar30 = local_1c8, (*(byte *)(local_128 + 0x60) & 2) != 0)) {
          local_188 = (code *)0x0;
          FUN_140056680(local_118,L"Existing Data - Pre Event Alloc");
          pcVar30 = local_1c8;
          local_1e8 = &local_188;
          FUN_1481b9880(local_1c8,0,0xffffffff,local_118);
          if (local_118[0] != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        pcVar11 = *(code **)(pcVar30 + 0x98);
        if (*(code **)(pcVar30 + 0x98) == (code *)0x0) {
          pcVar11 = local_1a8;
        }
        iVar7 = *(int *)(pcVar30 + 0xa0);
        if ((longlong)iVar7 != 0) {
          lVar20 = 0;
          do {
            puVar13 = *(undefined8 **)(pcVar11 + lVar20);
            if (puVar13 != *(undefined8 **)(pcVar30 + 0x78)) {
              LOCK();
              bVar39 = *(int *)(puVar13 + 1) == 0;
              if (bVar39) {
                *(int *)(puVar13 + 1) = -1;
              }
              UNLOCK();
              if (bVar39) goto LAB_143a8651e;
            }
            lVar20 = lVar20 + 8;
          } while ((longlong)iVar7 * 8 != lVar20);
        }
        puVar13 = (undefined8 *)FUN_14001cc68(0x198,0x10);
        *(undefined4 *)(puVar13 + 1) = 0;
        *puVar13 = &PTR_FUN_14ade2d80;
        puVar13[2] = pcVar30;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        puVar13[6] = 0;
        puVar13[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        puVar13[0xb] = 0xffffffff00000000;
        puVar13[0xc] = 0;
        puVar13[0xd] = 0;
        puVar13[0xe] = 0;
        puVar13[0xf] = 0;
        *(undefined8 *)((longlong)puVar13 + 0x7c) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x84) = 0;
        puVar13[0x12] = 0;
        puVar13[0x13] = 0;
        puVar13[0x14] = 0;
        puVar13[0x15] = 0;
        *(undefined8 *)((longlong)puVar13 + 0xac) = 0;
        *(undefined8 *)((longlong)puVar13 + 0xb4) = 0;
        puVar13[0x18] = 0;
        puVar13[0x19] = 0;
        puVar13[0x1a] = 0;
        puVar13[0x1b] = 0;
        *(undefined8 *)((longlong)puVar13 + 0xdc) = 0;
        *(undefined8 *)((longlong)puVar13 + 0xe4) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x10c) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x114) = 0;
        puVar13[0x20] = 0;
        puVar13[0x21] = 0;
        puVar13[0x1e] = 0;
        puVar13[0x1f] = 0;
        *(undefined8 *)((longlong)puVar13 + 300) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x134) = 0;
        puVar13[0x24] = 0;
        puVar13[0x25] = 0;
        puVar13[0x28] = 0;
        puVar13[0x29] = 0;
        puVar13[0x2c] = 0;
        puVar13[0x2d] = 0;
        puVar13[0x2e] = 0;
        puVar13[0x2f] = 0;
        *(undefined4 *)(puVar13 + 0x30) = 1;
        puVar13[0x31] = 0;
        puVar13[0x32] = 0;
        iVar7 = *(int *)(pcVar30 + 0xa0);
        *(uint *)(pcVar30 + 0xa0) = iVar7 + 1U;
        if (*(uint *)(pcVar30 + 0xa4) < iVar7 + 1U) {
          FUN_140e69270(local_1a8,iVar7);
        }
        pcVar11 = *(code **)(pcVar30 + 0x98);
        if (*(code **)(pcVar30 + 0x98) == (code *)0x0) {
          pcVar11 = local_1a8;
        }
        *(undefined8 **)(pcVar11 + (longlong)iVar7 * 8) = puVar13;
        LOCK();
        if (*(int *)(puVar13 + 1) == 0) {
          *(int *)(puVar13 + 1) = -1;
        }
        UNLOCK();
LAB_143a8651e:
        *(undefined8 **)(pcVar30 + 0x80) = puVar13;
        *(undefined4 *)(puVar13 + 0x24) = 0;
        lVar20 = *(longlong *)(pcVar30 + 0x80);
        if (*(int *)(lVar20 + 0x54) < 0) {
          *(undefined4 *)(lVar20 + 0x50) = 0;
          FUN_14481578e(lVar20 + 0x48,0);
        }
        else {
          *(undefined4 *)(lVar20 + 0x50) = 0;
        }
        lVar20 = *(longlong *)(pcVar30 + 0x80);
        FUN_1447a955c(pcVar30,*(undefined4 *)(*(longlong *)(pcVar30 + 0x78) + 0x120),1);
        *(int *)(lVar20 + 0x120) = iVar38;
        lVar20 = local_1d0;
      }
      iVar7 = *(int *)(lVar35 + 0x88);
      pcVar30 = local_1c8;
      if (0 < iVar7) {
        uVar31 = 0;
        do {
          lVar35 = (*(longlong **)(lVar20 + 0x728))[0xc];
          uVar37 = uVar31 * 0x78;
          local_b8 = 0;
          local_b0 = 0xc00000000;
          local_78 = 0;
          local_70 = 0xc00000000;
          local_1b8 = (longlong *)(uVar31 * 0x2a8);
          FUN_144b3583c(lVar20,**(longlong **)(lVar20 + 0x728) + (longlong)local_1b8,local_118);
          local_1c0 = uVar31;
          if ((*(longlong *)(lVar35 + 0x58 + uVar37) != 0) &&
             (lVar35 = lVar35 + uVar37, 0 < *(int *)(lVar35 + 0x48))) {
            uVar23 = 0;
            lVar20 = local_1d0;
            local_1a0 = uVar37;
            do {
              plVar12 = local_1b8;
              lVar29 = *(longlong *)(lVar35 + 0x40);
              if (*(longlong *)(lVar35 + 0x40) == 0) {
                lVar29 = lVar35;
              }
              iVar7 = *(int *)(lVar29 + uVar23 * 4);
              iVar34 = iVar38;
              if (0 < iVar7) {
                plVar18 = *(longlong **)(lVar20 + 0x728);
                piVar1 = *(int **)(plVar18[2] + uVar31 * 8);
                if (piVar1 != (int *)0x0) {
                  *piVar1 = iVar7;
                  plVar18 = *(longlong **)(lVar20 + 0x728);
                }
                local_1e8._0_1_ = 1;
                FUN_144966a0a(*plVar18 + (longlong)local_1b8,0,pcVar30,iVar38);
                local_1e8 = (code **)((ulonglong)local_1e8._1_7_ << 8);
                FUN_140bd645c(**(longlong **)(lVar20 + 0x728) + (longlong)plVar12,1,
                              *(undefined8 *)((*(longlong **)(lVar20 + 0x728))[0xc] + 0x58 + uVar37)
                              ,uVar23 & 0xffffffff);
                pcVar30 = local_1c8;
                local_1e8 = local_118;
                (**(code **)(*(longlong *)(**(longlong **)(lVar20 + 0x728) + (longlong)plVar12) +
                            0x20))(**(longlong **)(lVar20 + 0x728) + (longlong)plVar12,
                                   *(undefined8 *)(lVar20 + 8),local_11c,iVar7);
                iVar34 = *(int *)(*(longlong *)(pcVar30 + 0x80) + 0x120);
                if ((DAT_14cb3e698 != 0) ||
                   (lVar20 = local_1d0, (*(byte *)(local_128 + 0x60) & 2) != 0)) {
                  uVar17 = *(undefined8 *)
                            (*(longlong *)(*(longlong *)(local_1d0 + 0x728) + 0x60) + 0x58 + uVar37)
                  ;
                  local_138[0] = (code *)0x0;
                  FUN_140002266(&local_188,L"=== Event Data %d [%d] ===",uVar31,uVar23 & 0xffffffff)
                  ;
                  local_1e8 = local_138;
                  FUN_143a774ea(uVar17,uVar23 & 0xffffffff,1,&local_188);
                  if (local_188 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  uVar17 = *(undefined8 *)(pcVar30 + 0x80);
                  local_138[0] = (code *)0x0;
                  local_1e8 = (code **)CONCAT44(local_1e8._4_4_,iVar34 - iVar38);
                  FUN_140002266(&local_188,L"=== Event %d %d Particles (%d Alive) ===",local_1c0,
                                iVar7);
                  local_1e8 = local_138;
                  FUN_143a774ea(uVar17,iVar38,iVar34 - iVar38,&local_188);
                  pcVar30 = local_1c8;
                  lVar20 = local_1d0;
                  uVar31 = local_1c0;
                  uVar37 = local_1a0;
                  if (local_188 != (code *)0x0) {
                    FUN_1400020a8();
                    pcVar30 = local_1c8;
                    lVar20 = local_1d0;
                    uVar31 = local_1c0;
                    uVar37 = local_1a0;
                  }
                }
              }
              iVar38 = iVar34;
              uVar23 = uVar23 + 1;
            } while ((longlong)uVar23 < (longlong)*(int *)(lVar35 + 0x48));
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          lVar35 = local_1b0;
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          uVar31 = local_1c0 + 1;
          iVar7 = *(int *)(lVar35 + 0x88);
          lVar20 = local_1d0;
        } while ((longlong)uVar31 < (longlong)iVar7);
      }
      if (*(longlong *)(pcVar30 + 0x80) != 0) {
        piVar1 = (int *)(*(longlong *)(pcVar30 + 0x80) + 8);
        LOCK();
        if (*piVar1 == -1) {
          *piVar1 = 0;
        }
        UNLOCK();
        *(undefined8 *)(pcVar30 + 0x78) = *(undefined8 *)(pcVar30 + 0x80);
        *(undefined8 *)(pcVar30 + 0x80) = 0;
        iVar7 = *(int *)(lVar35 + 0x88);
      }
      if (0 < iVar7) {
        uVar31 = 0;
        do {
          lVar35 = *(longlong *)(lVar35 + 0x80);
          lVar29 = *(longlong *)((*(longlong **)(lVar20 + 0x728))[0xc] + 0x58 + uVar31 * 0x78);
          local_b8 = 0;
          local_b0 = 0xc00000000;
          local_78 = 0;
          local_70 = 0xc00000000;
          lVar10 = uVar31 * 0x2a8;
          FUN_144b3583c(lVar20,**(longlong **)(lVar20 + 0x728) + lVar10);
          if ((((*(longlong *)(lVar35 + uVar31 * 0x58) != 0) && (lVar29 != 0)) &&
              (*(char *)(lVar35 + uVar31 * 0x58 + 0x28) == '\0')) && (*(int *)(lVar29 + 0x120) != 0)
             ) {
            uVar4 = *(undefined4 *)(*(longlong *)(local_1c8 + 0x78) + 0x120);
            uVar27 = 0;
            do {
              pcVar30 = local_1c8;
              pcVar11 = *(code **)(local_1c8 + 0x98);
              if (*(code **)(local_1c8 + 0x98) == (code *)0x0) {
                pcVar11 = local_1a8;
              }
              iVar7 = *(int *)(local_1c8 + 0xa0);
              if ((longlong)iVar7 != 0) {
                lVar35 = 0;
                do {
                  puVar13 = *(undefined8 **)(pcVar11 + lVar35);
                  if (puVar13 != *(undefined8 **)(local_1c8 + 0x78)) {
                    LOCK();
                    bVar39 = *(int *)(puVar13 + 1) == 0;
                    if (bVar39) {
                      *(int *)(puVar13 + 1) = -1;
                    }
                    UNLOCK();
                    if (bVar39) goto LAB_143a86ab8;
                  }
                  lVar35 = lVar35 + 8;
                } while ((longlong)iVar7 * 8 != lVar35);
              }
              puVar13 = (undefined8 *)FUN_14001cc68(0x198,0x10);
              *(undefined4 *)(puVar13 + 1) = 0;
              *puVar13 = &PTR_FUN_14ade2d80;
              puVar13[2] = pcVar30;
              puVar13[3] = 0;
              puVar13[4] = 0;
              puVar13[5] = 0;
              puVar13[6] = 0;
              puVar13[7] = 0;
              puVar13[8] = 0;
              puVar13[9] = 0;
              puVar13[10] = 0;
              puVar13[0xb] = 0xffffffff00000000;
              puVar13[0xc] = 0;
              puVar13[0xd] = 0;
              puVar13[0xe] = 0;
              puVar13[0xf] = 0;
              *(undefined8 *)((longlong)puVar13 + 0x7c) = 0;
              *(undefined8 *)((longlong)puVar13 + 0x84) = 0;
              puVar13[0x12] = 0;
              puVar13[0x13] = 0;
              puVar13[0x14] = 0;
              puVar13[0x15] = 0;
              *(undefined8 *)((longlong)puVar13 + 0xac) = 0;
              *(undefined8 *)((longlong)puVar13 + 0xb4) = 0;
              puVar13[0x18] = 0;
              puVar13[0x19] = 0;
              puVar13[0x1a] = 0;
              puVar13[0x1b] = 0;
              *(undefined8 *)((longlong)puVar13 + 0xdc) = 0;
              *(undefined8 *)((longlong)puVar13 + 0xe4) = 0;
              *(undefined8 *)((longlong)puVar13 + 0x10c) = 0;
              *(undefined8 *)((longlong)puVar13 + 0x114) = 0;
              puVar13[0x20] = 0;
              puVar13[0x21] = 0;
              puVar13[0x1e] = 0;
              puVar13[0x1f] = 0;
              *(undefined8 *)((longlong)puVar13 + 300) = 0;
              *(undefined8 *)((longlong)puVar13 + 0x134) = 0;
              puVar13[0x24] = 0;
              puVar13[0x25] = 0;
              puVar13[0x28] = 0;
              puVar13[0x29] = 0;
              puVar13[0x2c] = 0;
              puVar13[0x2d] = 0;
              puVar13[0x2e] = 0;
              puVar13[0x2f] = 0;
              *(undefined4 *)(puVar13 + 0x30) = 1;
              puVar13[0x31] = 0;
              puVar13[0x32] = 0;
              uVar37 = (ulonglong)*(int *)(pcVar30 + 0xa0);
              uVar6 = *(int *)(pcVar30 + 0xa0) + 1;
              *(uint *)(pcVar30 + 0xa0) = uVar6;
              if (*(uint *)(pcVar30 + 0xa4) < uVar6) {
                local_1c0 = uVar37;
                FUN_140e69270(local_1a8,uVar37);
                uVar37 = local_1c0;
              }
              pcVar11 = *(code **)(pcVar30 + 0x98);
              if (*(code **)(pcVar30 + 0x98) == (code *)0x0) {
                pcVar11 = local_1a8;
              }
              *(undefined8 **)(pcVar11 + uVar37 * 8) = puVar13;
              LOCK();
              if (*(int *)(puVar13 + 1) == 0) {
                *(int *)(puVar13 + 1) = -1;
              }
              UNLOCK();
LAB_143a86ab8:
              *(undefined8 **)(pcVar30 + 0x80) = puVar13;
              *(undefined4 *)(puVar13 + 0x24) = 0;
              lVar35 = *(longlong *)(pcVar30 + 0x80);
              if (*(int *)(lVar35 + 0x54) < 0) {
                *(undefined4 *)(lVar35 + 0x50) = 0;
                FUN_14481578e(lVar35 + 0x48,0);
              }
              else {
                *(undefined4 *)(lVar35 + 0x50) = 0;
              }
              FUN_1447a955c(pcVar30,uVar4,0);
              lVar35 = local_1d0;
              uVar3 = *(undefined4 *)(*(longlong *)(pcVar30 + 0x78) + 0x120);
              plVar12 = *(longlong **)(local_1d0 + 0x728);
              puVar15 = *(undefined4 **)(plVar12[2] + uVar31 * 8);
              if (puVar15 != (undefined4 *)0x0) {
                *puVar15 = uVar3;
                plVar12 = *(longlong **)(local_1d0 + 0x728);
              }
              local_1e8._0_1_ = 1;
              FUN_144966a0a(*plVar12 + lVar10,0,pcVar30,0);
              local_1e8 = (code **)((ulonglong)local_1e8._1_7_ << 8);
              FUN_140bd645c(**(longlong **)(lVar35 + 0x728) + lVar10,1,lVar29,uVar27);
              pcVar30 = local_1c8;
              local_1e8 = local_118;
              (**(code **)(*(longlong *)(**(longlong **)(lVar35 + 0x728) + lVar10) + 0x20))
                        (**(longlong **)(lVar35 + 0x728) + lVar10,*(undefined8 *)(lVar35 + 8),
                         local_11c);
              LOCK();
              if (*(int *)(*(longlong *)(pcVar30 + 0x80) + 8) == -1) {
                *(int *)(*(longlong *)(pcVar30 + 0x80) + 8) = 0;
              }
              UNLOCK();
              *(undefined8 *)(pcVar30 + 0x78) = *(undefined8 *)(pcVar30 + 0x80);
              *(undefined8 *)(pcVar30 + 0x80) = 0;
              if ((DAT_14cb3e698 != 0) || ((*(byte *)(local_128 + 0x60) & 2) != 0)) {
                local_138[0] = (code *)0x0;
                FUN_140002266(&local_188,L"=== Event Data %d [%d] ===",uVar31 & 0xffffffff,uVar27);
                local_1e8 = local_138;
                FUN_143a774ea(lVar29,uVar27,1,&local_188);
                if (local_188 != (code *)0x0) {
                  FUN_1400020a8();
                }
                uVar17 = *(undefined8 *)(pcVar30 + 0x78);
                local_138[0] = (code *)0x0;
                FUN_140002266(&local_188,L"=== Event %d %d Particles ===",uVar31 & 0xffffffff,uVar3)
                ;
                local_1e8 = local_138;
                FUN_143a774ea(uVar17,0);
                if (local_188 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < *(uint *)(lVar29 + 0x120));
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          lVar35 = local_1b0;
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          uVar31 = uVar31 + 1;
          lVar20 = local_1d0;
        } while ((longlong)uVar31 < (longlong)*(int *)(lVar35 + 0x88));
      }
    }
  }
  FUN_143a83ffa(lVar20);
  if (((*(byte *)(local_1d0 + 0x404) & 1) != 0) && (*(longlong *)(local_1d0 + 0x260) != 0)) {
    sVar33 = (size_t)*(int *)(*(longlong *)(local_1d0 + 0x260) + 0x88);
    memcpy((void *)((longlong)*(void **)(local_1d0 + 0x1f8) + sVar33),*(void **)(local_1d0 + 0x1f8),
           sVar33);
  }
  if (((*(byte *)(local_1d0 + 0x6ac) & 1) != 0) && (*(longlong *)(local_1d0 + 0x508) != 0)) {
    sVar33 = (size_t)*(int *)(*(longlong *)(local_1d0 + 0x508) + 0x88);
    memcpy((void *)((longlong)*(void **)(local_1d0 + 0x4a0) + sVar33),*(void **)(local_1d0 + 0x4a0),
           sVar33);
  }
  plVar12 = *(longlong **)(local_1d0 + 0x728);
  if ((plVar12 != (longlong *)0x0) && (lVar35 = plVar12[1], (longlong)(int)lVar35 != 0)) {
    lVar20 = *plVar12;
    lVar29 = 0;
    do {
      if (((*(byte *)(lVar20 + 0x264 + lVar29) & 1) != 0) &&
         (lVar10 = *(longlong *)(lVar20 + 0xc0 + lVar29), lVar10 != 0)) {
        sVar33 = (size_t)*(int *)(lVar10 + 0x88);
        pvVar5 = *(void **)(lVar20 + 0x58 + lVar29);
        memcpy((void *)((longlong)pvVar5 + sVar33),pvVar5,sVar33);
      }
      lVar29 = lVar29 + 0x2a8;
    } while ((longlong)(int)lVar35 * 0x2a8 - lVar29 != 0);
  }
LAB_143a84f31:
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a87ba0 FUN_143a87ba0 body=612 status=ok
// SIG undefined FUN_143a87ba0(void)

void FUN_143a87ba0(longlong *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_1[1];
  uVar1 = *(uint *)(*(longlong *)(*param_1 + 0x80) + 0x120);
  local_70 = (ulonglong)uVar1;
  *(uint *)(*(longlong *)(*param_1 + 0x80) + 0x120) = uVar1 + param_2;
  iVar2 = *(int *)(lVar3 + 0xcc);
  *(int *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x730) + 4 +
          ((ulonglong)((*(byte *)(*(longlong *)(lVar3 + 8) + 0x790) & 1) << 5) |
          (longlong)*(int *)(lVar3 + 200) << 6)) = iVar2;
  *(int *)(lVar3 + 0xcc) = iVar2 + param_2;
  if (*(int **)(lVar3 + 0x708) != (int *)0x0) {
    **(int **)(lVar3 + 0x708) = param_2;
  }
  lVar7 = lVar3 + 0x1a0;
  local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
  local_68 = param_3;
  FUN_144966a0a(lVar7,0,*param_1);
  lVar4 = *(longlong *)(lVar3 + 0x728);
  if ((lVar4 != 0) && (iVar2 = *(int *)(lVar4 + 0x38), (longlong)iVar2 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    lVar10 = 0;
    iVar8 = 1;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + lVar10) + 0x80);
      *(int *)(lVar5 + 0x120) = *(int *)(lVar5 + 0x120) + param_2;
      local_78 = (undefined8 *)CONCAT71(local_78._1_7_,1);
      FUN_144966a0a(lVar7,iVar8);
      lVar10 = lVar10 + 8;
      iVar8 = iVar8 + 1;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
  local_78 = (undefined8 *)param_1[3];
  FUN_14477f9b2(lVar7,*(undefined8 *)(lVar3 + 8),*(undefined4 *)param_1[2],param_2);
  if ((DAT_14cb3e698 != 0) || ((*(byte *)(*(longlong *)param_1[4] + 0x60) & 2) != 0)) {
    uVar6 = *(undefined8 *)(*param_1 + 0x80);
    local_50 = 0;
    FUN_140002266(local_60,L"===  %s Spawned %d Particles===",local_68,param_2);
    local_78 = &local_50;
    FUN_143a774ea(uVar6,local_70,param_2,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    lVar7 = *(longlong *)(lVar3 + 0x728);
    if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0x38))) {
      uVar9 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + uVar9 * 8);
        if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x80), *(int *)(lVar4 + 0x120) != 0)) {
          local_50 = 0;
          FUN_140002266(local_60,L"Spawn Script Event %d",uVar9 & 0xffffffff);
          local_78 = &local_50;
          FUN_143a774ea(lVar4,0,0xffffffff,local_60);
          if (local_60[0] != 0) {
            FUN_1400020a8();
          }
          lVar7 = *(longlong *)(lVar3 + 0x728);
        }
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)*(int *)(lVar7 + 0x38));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a87e1e FUN_143a87e1e body=2068 status=ok
// SIG undefined FUN_143a87e1e(void)

void FUN_143a87e1e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_38 + 2);
            goto LAB_143a87feb;
          }
        }
        plVar10 = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (plVar10 != local_38 + 2) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_38 + 2,plVar10,(int)plVar4[6]);
          }
          else {
            memcpy(local_38 + 2,plVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_38 + 2,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_38 + 2,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_38 + 2);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38 + 2);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[2] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38 + 2);
    }
  }
LAB_143a87feb:
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_38);
            goto LAB_143a8819e;
          }
        }
        plVar10 = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (plVar10 != local_38) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_38,plVar10,(int)plVar4[6]);
          }
          else {
            memcpy(local_38,plVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_38,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_38,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_38);
    }
  }
LAB_143a8819e:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_40);
            goto LAB_143a88352;
          }
        }
        plVar10 = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (plVar10 != &local_40) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_40,plVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_40,plVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_40,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_40,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
LAB_143a88352:
  lVar5 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_40 != 0 && local_38[2] != 0) {
    lVar9 = FUN_1481c79aa(local_38[2],local_38);
    if (lVar9 != 0) {
      FUN_148190e94(lVar9,lVar5);
    }
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a88634 FUN_143a88634 body=356 status=ok
// SIG undefined FUN_143a88634(void)

void FUN_143a88634(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0 && param_1 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(&local_50,puVar5,1);
    lVar2 = FUN_145a78ce0();
    local_60 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    local_58 = 1;
    local_56 = 0;
    local_54 = 0xffffffff;
    local_48 = local_50;
    if (lVar2 == 0) {
      local_40 = 0xffffffff;
    }
    else {
      local_40 = FUN_14005ac26(&local_60);
    }
    local_38 = 0;
    uStack_30 = 0;
    puVar3 = (uint *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                               ((longlong *)(param_1 + 0x678),&local_48,0);
    if (puVar3 != (uint *)0x0) {
      uVar1 = *puVar3;
      if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
         ((int)uVar1 < *(int *)(param_1 + 0x6b0))) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)uVar1 * 8);
        if (lVar2 != 0) {
          lVar4 = FUN_145a78ce0();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            FUN_1480a6368(lVar2,param_3);
          }
        }
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a8879a FUN_143a8879a body=356 status=ok
// SIG undefined FUN_143a8879a(void)

void FUN_143a8879a(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != 0 && param_1 != 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(&local_50,puVar5,1);
    lVar2 = FUN_145a78ce0();
    local_60 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    local_58 = 1;
    local_56 = 0;
    local_54 = 0xffffffff;
    local_48 = local_50;
    if (lVar2 == 0) {
      local_40 = 0xffffffff;
    }
    else {
      local_40 = FUN_14005ac26(&local_60);
    }
    local_38 = 0;
    uStack_30 = 0;
    puVar3 = (uint *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))
                               ((longlong *)(param_1 + 0x678),&local_48,0);
    if (puVar3 != (uint *)0x0) {
      uVar1 = *puVar3;
      if ((((ulonglong)uVar1 != 0xffffffff) && (-1 < (int)uVar1)) &&
         ((int)uVar1 < *(int *)(param_1 + 0x6b0))) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)uVar1 * 8);
        if (lVar2 != 0) {
          lVar4 = FUN_145a78ce0();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            FUN_1480a6078(lVar2,param_3);
          }
        }
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a88900 FUN_143a88900 body=455 status=ok
// SIG undefined FUN_143a88900(void)

void FUN_143a88900(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,undefined1 param_10,longlong *param_11)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    uVar1 = *param_2;
    uVar7 = FUN_145a78bf4();
    lVar8 = FUN_140584a5e(uVar7,param_1,uVar1);
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x38) = 3;
      *(undefined1 *)(lVar8 + 0xa0) = param_3;
      *(undefined8 *)(lVar8 + 0xa4) = param_4;
      *(undefined1 *)(lVar8 + 0xac) = param_5;
      *(undefined1 *)(lVar8 + 0xad) = param_6;
      *(undefined4 *)(lVar8 + 0xb0) = param_7;
      *(undefined4 *)(lVar8 + 0xb4) = param_8;
      *(undefined1 *)(lVar8 + 0xb8) = param_9;
      *(undefined1 *)(lVar8 + 0xb9) = param_10;
      *(undefined4 *)(lVar8 + 200) = 0;
      if (*(int *)(lVar8 + 0xcc) != 0) {
        FUN_1409edbf4(lVar8 + 0xc0,0);
      }
      local_58 = 0;
      uStack_50 = 0;
      lVar4 = param_11[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = *param_11;
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar9);
          if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(lVar3);
          }
          uVar5 = uStack_50;
          lVar10 = (longlong)(int)uStack_50;
          uVar6 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
          if (uStack_50._4_4_ < uVar6) {
            FUN_140b51998(&local_58,uVar5 & 0xffffffff);
          }
          *(longlong *)(local_58 + lVar10 * 8) = lVar3;
          if (DAT_14c950c29 == 1 && lVar3 != 0) {
            FUN_1456cec3c(lVar3);
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar9);
      }
      FUN_147b9752e(lVar8 + 0xc0,&local_58);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a88ac8 FUN_143a88ac8 body=1937 status=ok
// SIG undefined FUN_143a88ac8(void)

void FUN_143a88ac8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48 + 4);
            goto LAB_143a88c95;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48 + 4) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48 + 4,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48 + 4,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48 + 4,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48 + 4,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 4);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 4);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48[4] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_48 + 4);
    }
  }
LAB_143a88c95:
  local_48[2] = 0;
  local_48[3] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48 + 2);
            goto LAB_143a88e28;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48 + 2,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48 + 2,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48 + 2,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48 + 2,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
    }
LAB_143a88e28:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_143a88e28;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_143a88e28;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_143a88e28;
    }
    local_48[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48);
            goto LAB_143a88fd8;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_48);
    }
  }
LAB_143a88fd8:
  plVar9 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_48[4] != 0) {
    lVar7 = FUN_1481c79aa(local_48[4],local_48 + 2);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0xfc) = *(int *)(lVar7 + 0xfc) + 1;
      FUN_1406fa324(lVar7 + 200,plVar9);
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a8925a FUN_143a8925a body=1937 status=ok
// SIG undefined FUN_143a8925a(void)

void FUN_143a8925a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48 + 4);
            goto LAB_143a89427;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48 + 4) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48 + 4,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48 + 4,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48 + 4,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48 + 4,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 4);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 4);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48[4] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_48 + 4);
    }
  }
LAB_143a89427:
  local_48[2] = 0;
  local_48[3] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48 + 2);
            goto LAB_143a895ba;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48 + 2,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48 + 2,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48 + 2,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48 + 2,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
    }
LAB_143a895ba:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_143a895ba;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_143a895ba;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_143a895ba;
    }
    local_48[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48);
            goto LAB_143a8976a;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_48);
    }
  }
LAB_143a8976a:
  plVar9 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_48[4] != 0) {
    lVar7 = FUN_1481c79aa(local_48[4],local_48 + 2);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0xfc) = *(int *)(lVar7 + 0xfc) + 1;
      FUN_1406fa324(lVar7 + 0xd8,plVar9);
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a899ec FUN_143a899ec body=1937 status=ok
// SIG undefined FUN_143a899ec(void)

void FUN_143a899ec(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48 + 4);
            goto LAB_143a89bb9;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48 + 4) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48 + 4,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48 + 4,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48 + 4,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48 + 4,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 4);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 4);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48[4] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_48 + 4);
    }
  }
LAB_143a89bb9:
  local_48[2] = 0;
  local_48[3] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar6 = *(byte **)(param_2 + 0x20);
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48 + 2);
            goto LAB_143a89d4c;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48 + 2,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48 + 2,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48 + 2,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48 + 2,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
    }
LAB_143a89d4c:
    pbVar6 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48 + 2);
      goto LAB_143a89d4c;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48 + 2);
      goto LAB_143a89d4c;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,local_48 + 2);
      goto LAB_143a89d4c;
    }
    local_48[2] = *(longlong *)(pbVar6 + 1);
    pbVar6 = pbVar6 + 9;
    *(byte **)(param_2 + 0x20) = pbVar6;
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar6 == (byte *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar9[3];
    if ((*(byte *)((longlong)plVar9 + 0x39) & 1) == 0) {
      lVar7 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar9 + 0x44) + lVar7;
      *(longlong *)(param_2 + 0x40) = lVar7;
      pcVar2 = *(code **)(*plVar9 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar9 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar4 = (*pcVar2)(plVar9);
          if (cVar4 != '\0') {
            (**(code **)(*plVar9 + 0xa0))(plVar9,lVar7,local_48);
            goto LAB_143a89efc;
          }
        }
        plVar8 = (longlong *)(lVar7 + *(int *)((longlong)plVar9 + 0x44));
        if (plVar8 != local_48) {
          if ((*(byte *)((longlong)plVar9 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar9 + 0x100))(plVar9,local_48,plVar8,(int)plVar9[6]);
          }
          else {
            memcpy(local_48,plVar8,
                   (longlong)(int)plVar9[6] * (longlong)*(int *)((longlong)plVar9 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar9[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar9,local_48,lVar7,1);
      }
      else {
        (*pcVar2)(plVar9,local_48,lVar7);
      }
    }
    else {
      puVar5 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar5;
        puVar5 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar9);
      *(undefined8 *)(param_2 + 0x38) = puVar3[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar6 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar6];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_48);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_48);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar6 + 1);
      *(byte **)(param_2 + 0x20) = pbVar6 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_48);
    }
  }
LAB_143a89efc:
  plVar9 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar9 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_48[4] != 0) {
    lVar7 = FUN_1481c79aa(local_48[4],local_48 + 2);
    if (lVar7 != 0) {
      *(int *)(lVar7 + 0xfc) = *(int *)(lVar7 + 0xfc) + 1;
      FUN_1406fa324(lVar7 + 0xb0,plVar9);
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a8a17e FUN_143a8a17e body=1831 status=ok
// SIG undefined FUN_143a8a17e(void)

void FUN_143a8a17e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  longlong local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  code *local_50;
  code *local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0 || param_1 == 0) goto LAB_143a8a1af;
  if (DAT_14cb0b4f0 == 0) {
    local_80 = &local_48;
    local_48 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = &LAB_14580b774;
    local_88 = &LAB_147d6e27b;
    local_90 = &LAB_140307be8;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x158;
    FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
  }
  plVar1 = (longlong *)(param_1 + 0x678);
  lVar4 = *(longlong *)(param_3 + 0x10);
  iVar2 = *(int *)(lVar4 + 0x38);
  if ((iVar2 < *(int *)(DAT_14cb0b4f0 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8) !=
      DAT_14cb0b4f0 + 0x30)) {
    if (DAT_14cb0b9a0 == 0) {
      local_80 = &local_48;
      local_48 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_146408884;
      local_88 = &LAB_147d719e1;
      local_90 = &LAB_140fb41fe;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000000;
      local_b0 = 8;
      local_b8 = 0x168;
      FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
      lVar4 = *(longlong *)(param_3 + 0x10);
      iVar2 = *(int *)(lVar4 + 0x38);
    }
    if ((*(int *)(DAT_14cb0b9a0 + 0x38) <= iVar2) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) ==
        DAT_14cb0b9a0 + 0x30)) goto LAB_143a8a238;
    lVar4 = FUN_14586995e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
LAB_143a8a28b:
      if (*(int *)(param_2 + 1) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*param_2;
      }
      FUN_1446f470e(&local_50,puVar7,1);
      lVar4 = FUN_145b6c94e();
      local_60 = lVar4;
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      local_58 = 1;
      local_56 = 0;
      local_54 = 0xffffffff;
      local_48 = local_50;
      if (lVar4 == 0) {
        local_40 = 0xffffffff;
      }
      else {
        local_40 = FUN_14005ac26(&local_60);
      }
      local_38 = 0;
      uStack_30 = 0;
      puVar5 = (uint *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_48,0);
      if (puVar5 == (uint *)0x0) goto LAB_143a8a711;
      uVar3 = *puVar5;
      if ((((ulonglong)uVar3 == 0xffffffff) || ((int)uVar3 < 0)) ||
         ((*(int *)(param_1 + 0x6b0) <= (int)uVar3 ||
          (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)uVar3 * 8), lVar4 == 0)
          ))) goto LAB_143a8a711;
      lVar6 = FUN_145b6c94e();
      goto LAB_143a8a6e9;
    }
    lVar4 = FUN_1458bbce6();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) goto LAB_143a8a28b;
    lVar4 = FUN_14085eb5a();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30)) {
      lVar4 = FUN_14129eed6();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_143a8a2e6;
      lVar4 = FUN_140265cda();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
        lVar4 = FUN_1458f150a();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_143a8a1af;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*param_2;
      }
      FUN_1446f470e(&local_50,puVar7,1);
      lVar4 = FUN_145b6d9c2();
      local_60 = lVar4;
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      local_58 = 1;
      local_56 = 0;
      local_54 = 0xffffffff;
      local_48 = local_50;
      if (lVar4 == 0) {
        local_40 = 0xffffffff;
      }
      else {
        local_40 = FUN_14005ac26(&local_60);
      }
      local_38 = 0;
      uStack_30 = 0;
      puVar5 = (uint *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_48,0);
      if (puVar5 == (uint *)0x0) goto LAB_143a8a711;
      uVar3 = *puVar5;
      if (((((ulonglong)uVar3 == 0xffffffff) || ((int)uVar3 < 0)) ||
          (*(int *)(param_1 + 0x6b0) <= (int)uVar3)) ||
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)uVar3 * 8), lVar4 == 0))
      goto LAB_143a8a711;
      lVar6 = FUN_145b6d9c2();
      goto LAB_143a8a6e9;
    }
LAB_143a8a2e6:
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(&local_50,puVar7,1);
    lVar4 = FUN_145b6f270();
    local_60 = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    local_58 = 1;
    local_56 = 0;
    local_54 = 0xffffffff;
    local_48 = local_50;
    if (lVar4 == 0) {
      local_40 = 0xffffffff;
    }
    else {
      local_40 = FUN_14005ac26(&local_60);
    }
    local_38 = 0;
    uStack_30 = 0;
    puVar5 = (uint *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_48,0);
    if (puVar5 != (uint *)0x0) {
      uVar3 = *puVar5;
      if (((((ulonglong)uVar3 != 0xffffffff) && (-1 < (int)uVar3)) &&
          ((int)uVar3 < *(int *)(param_1 + 0x6b0))) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)uVar3 * 8), lVar4 != 0))
      {
        lVar6 = FUN_145b6f270();
        goto LAB_143a8a6e9;
      }
    }
  }
  else {
LAB_143a8a238:
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    FUN_1446f470e(&local_50,puVar7,1);
    lVar4 = FUN_145b6ecf4();
    local_60 = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    local_58 = 1;
    local_56 = 0;
    local_54 = 0xffffffff;
    local_48 = local_50;
    if (lVar4 == 0) {
      local_40 = 0xffffffff;
    }
    else {
      local_40 = FUN_14005ac26(&local_60);
    }
    local_38 = 0;
    uStack_30 = 0;
    puVar5 = (uint *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_48,0);
    if (puVar5 != (uint *)0x0) {
      uVar3 = *puVar5;
      if (((((ulonglong)uVar3 != 0xffffffff) && (-1 < (int)uVar3)) &&
          ((int)uVar3 < *(int *)(param_1 + 0x6b0))) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6a8) + (ulonglong)uVar3 * 8), lVar4 != 0))
      {
        lVar6 = FUN_145b6ecf4();
LAB_143a8a6e9:
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(param_3);
          }
          *(longlong *)(lVar4 + 0x38) = param_3;
        }
      }
    }
  }
LAB_143a8a711:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_143a8a1af:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a8a8a6 FUN_143a8a8a6 body=69 status=ok
// SIG undefined FUN_143a8a8a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8a8a6(void)

{
  _DAT_14cb3e820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8a8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e828,1);
  return;
}



// FUNCTION 143a8a8eb FUN_143a8a8eb body=49 status=ok
// SIG undefined FUN_143a8a8eb(void)

void FUN_143a8a8eb(void)

{
  FUN_1481cc1f1(DAT_14cb3e830,DAT_14cb3e838);
  if (DAT_14cb3e830 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143a8a91c FUN_143a8a91c body=49 status=ok
// SIG undefined FUN_143a8a91c(void)

void FUN_143a8a91c(void)

{
  FUN_1447a1747(DAT_14cb3e840,DAT_14cb3e848);
  if (DAT_14cb3e840 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143a8a94e FUN_143a8a94e body=1786 status=ok
// SIG undefined FUN_143a8a94e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8a94e(longlong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint *puVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [64];
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar11 = *param_1;
  if (*(char *)(lVar11 + 0x68) == '\x01') {
    (**(code **)(**(longlong **)(lVar11 + 0x58) + 0x4a8))
              (*(longlong **)(lVar11 + 0x58),local_118,*(undefined8 *)(lVar11 + 0x60),0);
    lVar11 = *param_1;
    auVar1 = *(undefined1 (*) [16])(lVar11 + 0x28);
    auVar17 = divpd(auVar1,_DAT_1499387d0);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(double *)(lVar11 + 0x38);
    auVar18 = divpd(auVar18,_DAT_1499387d0);
    auVar17 = roundpd(auVar17,auVar17,3);
    auVar18 = roundpd(auVar18,auVar18,3);
    dVar8 = (auVar1._0_8_ - auVar17._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar9 = (auVar1._8_8_ - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar6 = (*(double *)(lVar11 + 0x38) - auVar18._0_8_ * (double)DAT_1499387d0) *
            0.008726646259971648;
    dVar7 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar3 = sin(dVar8);
    dVar4 = sin(dVar9);
    dVar5 = sin(dVar6);
    sin(dVar7);
    dVar8 = cos(dVar8);
    dVar9 = cos(dVar9);
    dVar6 = cos(dVar6);
    cos(dVar7);
    dVar7 = dVar4 * dVar3 * dVar5 + dVar9 * dVar8 * dVar6;
    local_178 = dVar3 * dVar4 * dVar6 - dVar8 * dVar9 * dVar5;
    dStack_170 = -(dVar3 * dVar9 * dVar6) - dVar8 * dVar4 * dVar5;
    local_168._8_4_ = SUB84(dVar7,0);
    local_168._0_8_ = -(dVar9 * dVar3 * dVar5) + dVar4 * dVar8 * dVar6;
    local_168._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_158 = *(undefined8 *)(lVar11 + 0x10);
    uStack_150 = *(undefined8 *)(lVar11 + 0x18);
    local_148 = *(undefined8 *)(lVar11 + 0x20);
    uStack_140 = 0;
    local_138 = *(undefined4 *)(lVar11 + 0x40);
    uStack_134 = *(undefined4 *)(lVar11 + 0x44);
    uStack_130 = *(undefined4 *)(lVar11 + 0x48);
    uStack_12c = *(undefined4 *)(lVar11 + 0x4c);
    local_128 = *(undefined8 *)(lVar11 + 0x50);
    uStack_120 = 0;
    FUN_1449437a2(&local_178,&local_1d8,local_118);
    lVar11 = *(longlong *)param_1[1];
    uVar2 = *(ulonglong *)(lVar11 + 0x38);
    if (uVar2 < 0xffffffff00000000) {
      plVar15 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar15 = (longlong *)0x0;
      }
      (**(code **)(*plVar15 + 0x58))(plVar15,lVar11,uVar2,5);
    }
    else {
      uVar16 = (uint)uVar2;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
        puVar13 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar13 = DAT_14c998080;
        }
        if ((*(uint *)(puVar13 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
          lVar10 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
          puVar14 = *(uint **)(lVar10 + 0x18);
          if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
            puVar14 = (uint *)(lVar10 + 8);
          }
          *puVar14 = *puVar14 | 0x20;
          *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
        }
      }
    }
    *(undefined8 *)(lVar11 + 0x198) = local_1b8;
    *(undefined8 *)(lVar11 + 0x1a0) = uStack_1b0;
    *(undefined8 *)(lVar11 + 0x1a8) = local_1a8;
    lVar11 = *(longlong *)param_1[1];
    local_218 = local_1d8;
    uStack_214 = uStack_1d4;
    uStack_210 = uStack_1d0;
    uStack_20c = uStack_1cc;
    local_208 = local_1c8;
    uStack_200 = uStack_1c0;
    FUN_1448052ee(&local_218,&local_1f0);
    uVar2 = *(ulonglong *)(lVar11 + 0x38);
    if (uVar2 < 0xffffffff00000000) {
      plVar15 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar15 = (longlong *)0x0;
      }
      (**(code **)(*plVar15 + 0x58))(plVar15,lVar11,uVar2,6);
    }
    else {
      uVar16 = (uint)uVar2;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
        puVar13 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar13 = DAT_14c998080;
        }
        if ((*(uint *)(puVar13 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
          lVar10 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
          puVar14 = *(uint **)(lVar10 + 0x18);
          if (*(uint **)(lVar10 + 0x18) == (uint *)0x0) {
            puVar14 = (uint *)(lVar10 + 8);
          }
          *puVar14 = *puVar14 | 0x40;
          *(byte *)(lVar10 + 0x60) = *(byte *)(lVar10 + 0x60) | 1;
        }
      }
    }
    *(undefined8 *)(lVar11 + 0x1c0) = local_1e0;
    *(undefined8 *)(lVar11 + 0x1b0) = local_1f0;
    *(undefined8 *)(lVar11 + 0x1b8) = uStack_1e8;
    uVar12 = *(undefined8 *)param_1[1];
    local_238 = local_198;
    uStack_230 = uStack_190;
    local_228 = local_188;
  }
  else {
    lVar10 = *(longlong *)param_1[1];
    local_248 = *(undefined8 *)(lVar11 + 0x20);
    local_258 = *(undefined4 *)(lVar11 + 0x10);
    uStack_254 = *(undefined4 *)(lVar11 + 0x14);
    uStack_250 = *(undefined4 *)(lVar11 + 0x18);
    uStack_24c = *(undefined4 *)(lVar11 + 0x1c);
    uVar2 = *(ulonglong *)(lVar10 + 0x38);
    if (uVar2 < 0xffffffff00000000) {
      plVar15 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar15 = (longlong *)0x0;
      }
      (**(code **)(*plVar15 + 0x58))(local_258,lVar10,uVar2,5);
    }
    else {
      uVar16 = (uint)uVar2;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
        puVar13 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar13 = DAT_14c998080;
        }
        if ((*(uint *)(puVar13 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
          lVar11 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
          puVar14 = *(uint **)(lVar11 + 0x18);
          if (*(uint **)(lVar11 + 0x18) == (uint *)0x0) {
            puVar14 = (uint *)(lVar11 + 8);
          }
          *puVar14 = *puVar14 | 0x20;
          *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
        }
      }
    }
    *(undefined8 *)(lVar10 + 0x1a8) = local_248;
    *(ulonglong *)(lVar10 + 0x198) = CONCAT44(uStack_254,local_258);
    *(ulonglong *)(lVar10 + 0x1a0) = CONCAT44(uStack_24c,uStack_250);
    lVar11 = *param_1;
    lVar10 = *(longlong *)param_1[1];
    local_268 = *(undefined8 *)(lVar11 + 0x38);
    local_278 = *(undefined4 *)(lVar11 + 0x28);
    uStack_274 = *(undefined4 *)(lVar11 + 0x2c);
    uStack_270 = *(undefined4 *)(lVar11 + 0x30);
    uStack_26c = *(undefined4 *)(lVar11 + 0x34);
    uVar2 = *(ulonglong *)(lVar10 + 0x38);
    if (uVar2 < 0xffffffff00000000) {
      plVar15 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar15 = (longlong *)0x0;
      }
      (**(code **)(*plVar15 + 0x58))(local_278,lVar10,uVar2,6);
    }
    else {
      uVar16 = (uint)uVar2;
      if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
        puVar13 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar13 = DAT_14c998080;
        }
        if ((*(uint *)(puVar13 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
          lVar11 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
          puVar14 = *(uint **)(lVar11 + 0x18);
          if (*(uint **)(lVar11 + 0x18) == (uint *)0x0) {
            puVar14 = (uint *)(lVar11 + 8);
          }
          *puVar14 = *puVar14 | 0x40;
          *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
        }
      }
    }
    *(undefined8 *)(lVar10 + 0x1c0) = local_268;
    *(undefined4 *)(lVar10 + 0x1b0) = local_278;
    *(undefined4 *)(lVar10 + 0x1b4) = uStack_274;
    *(undefined4 *)(lVar10 + 0x1b8) = uStack_270;
    *(undefined4 *)(lVar10 + 0x1bc) = uStack_26c;
    lVar11 = *param_1;
    if (*(char *)(lVar11 + 0x68) == '\x02') {
      (**(code **)(**(longlong **)(lVar11 + 0x58) + 0x4a8))
                (*(longlong **)(lVar11 + 0x58),local_118,*(undefined8 *)(lVar11 + 0x60),0);
      lVar11 = *param_1;
      uVar12 = *(undefined8 *)param_1[1];
      local_280 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_c8)) &
                          (ulonglong)(1.0 / local_c8)) * *(double *)(lVar11 + 0x50);
      local_288 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_d0)) &
                          (ulonglong)(1.0 / dStack_d0)) * *(double *)(lVar11 + 0x48);
      local_290 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8)) &
                          (ulonglong)(1.0 / local_d8)) * *(double *)(lVar11 + 0x40);
    }
    else {
      uVar12 = *(undefined8 *)param_1[1];
      local_298 = *(undefined8 *)(lVar11 + 0x50);
      local_2a8 = *(undefined4 *)(lVar11 + 0x40);
      uStack_2a4 = *(undefined4 *)(lVar11 + 0x44);
      uStack_2a0 = *(undefined4 *)(lVar11 + 0x48);
      uStack_29c = *(undefined4 *)(lVar11 + 0x4c);
    }
  }
  FUN_14084f00a(uVar12);
  if ((local_b0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a8b04a FUN_143a8b04a body=65 status=ok
// SIG undefined FUN_143a8b04a(void)

undefined8 FUN_143a8b04a(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((param_1 != 0) && (*(longlong **)(param_1 + 0x218) != (longlong *)0x0)) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x218) + 0x420))();
    if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a8b081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)*puVar1)(puVar1,&DAT_14cb3e918,*(code **)*puVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143a8b08b FUN_143a8b08b body=69 status=ok
// SIG undefined FUN_143a8b08b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b08b(void)

{
  _DAT_14cb3e878 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b0cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e880,1);
  return;
}



// FUNCTION 143a8b0d0 FUN_143a8b0d0 body=69 status=ok
// SIG undefined FUN_143a8b0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b0d0(void)

{
  _DAT_14cb3e888 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b112. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e890,1);
  return;
}



// FUNCTION 143a8b115 FUN_143a8b115 body=69 status=ok
// SIG undefined FUN_143a8b115(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b115(void)

{
  _DAT_14cb3e898 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e8a0,1);
  return;
}



// FUNCTION 143a8b15a FUN_143a8b15a body=69 status=ok
// SIG undefined FUN_143a8b15a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b15a(void)

{
  _DAT_14cb3e8a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b19c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e8b0,1);
  return;
}



// FUNCTION 143a8b19f FUN_143a8b19f body=69 status=ok
// SIG undefined FUN_143a8b19f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b19f(void)

{
  _DAT_14cb3e8c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b1e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e8c8,1);
  return;
}



// FUNCTION 143a8b1e4 FUN_143a8b1e4 body=69 status=ok
// SIG undefined FUN_143a8b1e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b1e4(void)

{
  _DAT_14cb3e8d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e8d8,1);
  return;
}



// FUNCTION 143a8b229 FUN_143a8b229 body=69 status=ok
// SIG undefined FUN_143a8b229(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b229(void)

{
  _DAT_14cb3e8e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b26b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e8e8,1);
  return;
}



// FUNCTION 143a8b26e FUN_143a8b26e body=69 status=ok
// SIG undefined FUN_143a8b26e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b26e(void)

{
  _DAT_14cb3e8f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e8f8,1);
  return;
}



// FUNCTION 143a8b2b3 FUN_143a8b2b3 body=69 status=ok
// SIG undefined FUN_143a8b2b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b2b3(void)

{
  _DAT_14cb3e900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b2f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e908,1);
  return;
}



// FUNCTION 143a8b2f8 FUN_143a8b2f8 body=69 status=ok
// SIG undefined FUN_143a8b2f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b2f8(void)

{
  _DAT_14cb3e920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b33a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e928,1);
  return;
}



// FUNCTION 143a8b33d FUN_143a8b33d body=69 status=ok
// SIG undefined FUN_143a8b33d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b33d(void)

{
  _DAT_14cb3e930 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b37f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e938,1);
  return;
}



// FUNCTION 143a8b382 FUN_143a8b382 body=69 status=ok
// SIG undefined FUN_143a8b382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8b382(void)

{
  _DAT_14cb3e940 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a8b3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e948,1);
  return;
}



// FUNCTION 143a8b3da FUN_143a8b3da body=1526 status=ok
// SIG undefined FUN_143a8b3da(void)

undefined8 *
FUN_143a8b3da(undefined8 *param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *_Dst;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1481c7dcc(param_1,param_3,param_2);
  *param_1 = &PTR_LAB_14adf8810;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = param_4;
  if (param_4 != 0) {
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
  }
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0x7fffffff00000000;
  *(undefined2 *)(param_1 + 0x58) = 0;
  memset(param_1 + 0x59,0,0xc1);
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  memset(param_1 + 0x75,0,0xc0);
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0x4000000040;
  uVar2 = DAT_14c8464e8;
  param_1[0x93] = DAT_14c8464e0;
  param_1[0x94] = uVar2;
  param_1[0x95] = DAT_14c8464f0;
  puVar4 = &DAT_14c846400;
  puVar5 = param_1 + 0x96;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = &DAT_14c846400;
  puVar5 = param_1 + 0xa6;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)(param_1 + 0xb6) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  lVar6 = 0x5ec;
  do {
    puVar4 = (undefined8 *)((longlong)param_1 + lVar6 + -0xc);
    *puVar4 = 0;
    puVar4[1] = 0x3f80000000000000;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x64c);
  lVar6 = 0x64c;
  do {
    puVar4 = (undefined8 *)((longlong)param_1 + lVar6 + -0xc);
    *puVar4 = 0;
    puVar4[1] = 0x3f80000000000000;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x6ac);
  lVar6 = 0x6ac;
  do {
    puVar4 = (undefined8 *)((longlong)param_1 + lVar6 + -0xc);
    *puVar4 = 0;
    puVar4[1] = 0x3f80000000000000;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x70c);
  lVar6 = 0x70c;
  do {
    puVar4 = (undefined8 *)((longlong)param_1 + lVar6 + -0xc);
    *puVar4 = 0;
    puVar4[1] = 0x3f80000000000000;
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 0x76c);
  memset(param_1 + 0xbc,0,0x228);
  lVar6 = param_1[0x46];
  if (lVar6 == 0) goto LAB_143a8b5cd;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *local_60 = &PTR_LAB_14aa00870;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_60[2] = lVar7;
  *local_60 = &PTR_FUN_14adff3e0;
  local_60[3] = param_1;
  FUN_1458489c6(lVar6,&local_60,0xbf,&DAT_14cb3e918);
  if (local_58 == 0) {
LAB_143a8b7a6:
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_143a8b7a6;
  }
  if ((DAT_14c7627f8 == 0) || ((DAT_14ca84d96 & 1) == 0)) goto LAB_143a8b5cd;
  lVar6 = param_1[0x46];
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *local_60 = &PTR_LAB_14adffd30;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_60[2] = lVar7;
  *local_60 = &PTR_FUN_14adff450;
  local_60[3] = param_1;
  FUN_140c7d8c8(lVar6 + 0x10,local_68,&local_60);
  if (local_58 == 0) {
LAB_143a8b88f:
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (undefined8 *)0x0) {
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_143a8b88f;
  }
  lVar6 = param_1[0x46];
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *local_60 = &PTR_LAB_14adffd30;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_60[2] = lVar7;
  *local_60 = &PTR_FUN_14adff4c0;
  local_60[3] = param_1;
  FUN_140c7d8c8(lVar6 + 0x28,local_68,&local_60);
  if (local_58 != 0) {
    if (local_60 == (undefined8 *)0x0) goto LAB_143a8b5cd;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143a8b5cd:
  lVar3 = FUN_14001cc68(0x2b8,0x10);
  FUN_1439368d0(lVar3,param_3,param_2,param_1);
  lVar6 = param_1[0x49];
  if ((lVar6 != lVar3) && (param_1[0x49] = lVar3, lVar6 != 0)) {
    FUN_143936fae(lVar6);
    FUN_1400020a8(lVar6);
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar5 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar5 = 0;
  puVar5[4] = 0;
  puVar5[5] = 0x100000000;
  puVar5[6] = 0;
  puVar5[8] = 0;
  puVar5[10] = 0;
  puVar4[1] = puVar5;
  *puVar4 = puVar5;
  if ((undefined8 *)param_1[5] != puVar4) {
    param_1[5] = puVar4;
    FUN_14574883c();
  }
  _Dst = (void *)FUN_14001cc68(0x290);
  memset(_Dst,0,0x290);
  FUN_143a8b9d2(_Dst);
  pvVar1 = (void *)param_1[6];
  if ((pvVar1 != _Dst) && (param_1[6] = _Dst, pvVar1 != (void *)0x0)) {
    FUN_1407f15b2(pvVar1);
    FUN_1400020a8(pvVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a8b9d2 FUN_143a8b9d2 body=181 status=ok
// SIG undefined FUN_143a8b9d2(void)

void FUN_143a8b9d2(undefined4 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  lVar2 = 0x50;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x20) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x48);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x1c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + lVar2 + -0x14) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x230);
  param_1[0x7a] = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  param_1[0x86] = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  *(undefined8 *)(param_1 + 0x87) = 0xffffffff00000080;
  param_1[0x89] = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  param_1[0x8e] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x9b) = 0xffffffff00000080;
  param_1[0x9d] = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  param_1[0xa2] = 0;
  return;
}



// FUNCTION 143a8ba88 FUN_143a8ba88 body=225 status=ok
// SIG undefined FUN_143a8ba88(void)

void FUN_143a8ba88(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x1c8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x28) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 8) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 143a8bb6a FUN_143a8bb6a body=240 status=ok
// SIG undefined FUN_143a8bb6a(void)

void FUN_143a8bb6a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  lVar1 = param_1 + (longlong)*(int *)(param_2 + 0x28) * 0x10;
  iVar4 = *(int *)(lVar1 + 0x2d0);
  iVar5 = ~uVar2 + iVar4;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    lVar3 = *(longlong *)(lVar1 + 0x2c8);
    memmove((void *)(lVar3 + (longlong)(int)uVar2 * 8),
            (void *)(lVar3 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
    iVar4 = *(int *)(lVar1 + 0x2d0);
  }
  *(int *)(lVar1 + 0x2d0) = iVar4 + -1;
  FUN_14183372c();
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0x2d0))) {
    *(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0x2c8) + (ulonglong)uVar2 * 8) + 0x10) = uVar2;
  }
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) - (*(uint *)(param_2 + 0x2c) & 1);
  *(int *)(param_1 + 0x2a4) =
       *(int *)(param_1 + 0x2a4) + ((*(int *)(param_2 + 0x2c) << 0x1e) >> 0x1f);
  *(int *)(param_1 + 0x2a8) =
       *(int *)(param_1 + 0x2a8) + ((*(int *)(param_2 + 0x2c) << 0x1d) >> 0x1f);
  *(int *)(param_1 + 0x2ac) =
       *(int *)(param_1 + 0x2ac) + ((*(int *)(param_2 + 0x2c) << 0x1b) >> 0x1f);
  *(int *)(param_1 + 0x2b0) =
       *(int *)(param_1 + 0x2b0) + ((*(int *)(param_2 + 0x2c) << 0x1a) >> 0x1f);
  iVar4 = *(uint *)(param_1 + 0x2b4) - *(uint *)(param_2 + 0x30);
  if (*(uint *)(param_1 + 0x2b4) < *(uint *)(param_2 + 0x30)) {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x2b4) = iVar4;
  return;
}



// FUNCTION 143a8bc5a FUN_143a8bc5a body=1300 status=ok
// SIG undefined FUN_143a8bc5a(void)

void FUN_143a8bc5a(longlong param_1)

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
  undefined1 auStack_c8 [32];
  code **local_a8;
  code **local_a0;
  undefined4 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68[0] = (code *)&DAT_14cb00c08;
  local_98 = 1;
  local_a0 = local_68;
  FUN_143223078(local_90);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a8bcc6;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a8bccb;
      goto LAB_143a8bd0f;
    }
  }
  else {
LAB_143a8bcc6:
    if (iVar6 != 0x10) {
LAB_143a8bd0f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a8bccb;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a8bccb;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a8be93;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a9aa61);
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
LAB_143a8be93:
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
              goto LAB_143a8bf13;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a8bf13:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14adff578;
        puVar16[0x15] = param_1;
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
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14adff530;
        local_68[0] = FUN_143a9c2c0;
        local_a8 = local_68;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraPumpBatcher",&DAT_14cb3f068);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a8bdb1;
    }
  }
LAB_143a8bccb:
  FUN_143a8cba6(param_1,&DAT_14ca85100,0);
  FUN_1415dd2b0(param_1 + 0x38,&DAT_14ca85100);
LAB_143a8bdb1:
  FUN_1405ee12c(&DAT_14ca966d0,local_90);
  FUN_14004710c(local_78);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a8c170 FUN_143a8c170 body=1300 status=ok
// SIG undefined FUN_143a8c170(void)

void FUN_143a8c170(longlong param_1)

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
  undefined1 auStack_c8 [32];
  code **local_a8;
  code **local_a0;
  undefined4 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68[0] = (code *)&DAT_14cb00c08;
  local_98 = 1;
  local_a0 = local_68;
  FUN_143223078(local_90);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a8c1dc;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a8c1e1;
      goto LAB_143a8c225;
    }
  }
  else {
LAB_143a8c1dc:
    if (iVar6 != 0x10) {
LAB_143a8c225:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a8c1e1;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a8c1e1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a8c3a9;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a9aa61);
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
LAB_143a8c3a9:
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
              goto LAB_143a8c429;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a8c429:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14adff5e8;
        puVar16[0x15] = param_1;
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
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14adff590;
        local_68[0] = FUN_143a9c4de;
        local_a8 = local_68;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraFlushPendingTicks",&DAT_14cb3f06c);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a8c2c7;
    }
  }
LAB_143a8c1e1:
  FUN_143a8cba6(param_1,&DAT_14ca85100,1);
  FUN_1415dd2b0(param_1 + 0x38,&DAT_14ca85100);
LAB_143a8c2c7:
  FUN_1405ee12c(&DAT_14ca966d0,local_90);
  FUN_14004710c(local_78);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a8c686 FUN_143a8c686 body=1311 status=ok
// SIG undefined FUN_143a8c686(void)

void FUN_143a8c686(longlong param_1)

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
  undefined1 auStack_c8 [32];
  code **local_a8;
  code **local_a0;
  undefined4 local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68[0] = (code *)&DAT_14cb00c08;
  local_98 = 1;
  local_a0 = local_68;
  FUN_143223078(local_90);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143a8c6f2;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143a8c6f7;
      goto LAB_143a8c741;
    }
  }
  else {
LAB_143a8c6f2:
    if (iVar6 != 0x10) {
LAB_143a8c741:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_143a8c6f7;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143a8c6f7;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_143a8c8ca;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143a9aa61);
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
LAB_143a8c8ca:
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
              goto LAB_143a8c94a;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143a8c94a:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14adff620;
        puVar16[0x15] = param_1;
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
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14adff600;
        local_68[0] = FUN_143a9c6fc;
        local_a8 = local_68;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraFlushPendingTicks",&DAT_14cb3f070);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_143a8c7e3;
    }
  }
LAB_143a8c6f7:
  FUN_143a8cba6(param_1,&DAT_14ca85100,1);
  FUN_1415dd2b0(param_1 + 0x38,&DAT_14ca85100);
  FUN_143a96774(*(undefined8 *)(param_1 + 0x28));
LAB_143a8c7e3:
  FUN_14080c2b4();
  FUN_1405ee12c(&DAT_14ca966d0,local_90);
  FUN_14004710c(local_78);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a8cba6 FUN_143a8cba6 body=2869 status=ok
// SIG undefined FUN_143a8cba6(void)

void FUN_143a8cba6(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_dc8 [32];
  wchar_t *local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  char *local_d90;
  undefined4 local_d88;
  undefined4 local_d80;
  undefined **local_d78;
  undefined1 local_d70;
  undefined8 local_d68;
  undefined1 local_d60;
  undefined8 local_d50;
  undefined8 local_d48;
  undefined8 local_d40;
  undefined8 local_d38;
  undefined8 local_d30;
  undefined1 local_d21;
  undefined *local_d20;
  ulonglong local_d18;
  undefined *local_d10;
  undefined8 local_d08 [9];
  longlong local_cc0;
  undefined4 local_ca0;
  undefined4 uStack_c9c;
  undefined8 *puStack_c98;
  undefined8 *local_c90;
  byte local_c84;
  longlong local_ba0;
  uint local_b98;
  uint local_b94;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  longlong local_688;
  longlong local_678 [16];
  longlong local_5f8 [16];
  longlong local_578;
  longlong local_570;
  undefined1 local_550;
  undefined1 local_4c8;
  undefined8 local_4b8 [16];
  undefined1 local_438;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  longlong local_410;
  longlong local_408;
  undefined ***local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined1 *local_3b8;
  undefined1 *puStack_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined1 uStack_2a8;
  undefined8 uStack_2a7;
  undefined1 local_29f;
  undefined8 local_29c;
  undefined1 *local_294;
  undefined4 local_28c;
  undefined4 local_288;
  undefined1 local_284;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 uStack_258;
  undefined7 local_257;
  undefined1 uStack_250;
  undefined8 uStack_24f;
  undefined8 uStack_240;
  undefined3 uStack_238;
  undefined5 local_235;
  undefined3 uStack_230;
  undefined8 uStack_22d;
  undefined **local_218;
  undefined8 *local_210;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_dc8;
  lVar6 = 0x2d0;
  while (*(int *)((longlong)param_1 + lVar6) < 1) {
    lVar6 = lVar6 + 0x10;
    if (lVar6 == 0x300) goto LAB_143a8d522;
  }
  uVar5 = (int)param_1[0x4a] + 1;
  *(uint *)(param_1 + 0x4a) = uVar5;
  uVar13 = 0;
  uVar7 = (ulonglong)DAT_14c7628ec;
  if ((int)DAT_14c7628ec < 1) {
    uVar7 = uVar13;
  }
  iVar14 = 0;
  do {
    if ((longlong)(int)param_1[uVar13 * 2 + 0x5a] != 0) {
      lVar6 = 0;
      do {
        iVar9 = *(int *)(*(longlong *)(param_1[uVar13 * 2 + 0x59] + lVar6) + 0x58);
        if (iVar14 < iVar9) {
          iVar14 = iVar9;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)param_1[uVar13 * 2 + 0x5a] * 8 != lVar6);
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 3);
  iVar9 = 1;
  if (1 < DAT_14c7628f0) {
    iVar9 = DAT_14c7628f0;
  }
  if ((((uint)uVar7 <= uVar5) || (param_3 != '\0')) || (iVar9 <= iVar14)) {
    *(undefined4 *)(param_1 + 0x4a) = 0;
    if (DAT_14c7628f4 == 2) {
      FUN_14480a1ec(param_1);
      lVar6 = (longlong)*(int *)(param_1[0x49] + 0x1e8);
      if (lVar6 != 0) {
        lVar2 = *(longlong *)(param_1[0x49] + 0x1e0);
        lVar8 = 0;
        do {
          (**(code **)(**(longlong **)(lVar2 + lVar8) + 0x28))();
          lVar8 = lVar8 + 8;
        } while (lVar6 * 8 != lVar8);
      }
    }
    else if (DAT_14c7628f4 == 1) {
      if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_dc8);
      }
      FUN_143738f54(param_2);
      FUN_140eb1606(&DAT_14ca85100,0);
      lVar6 = (**(code **)(*(longlong *)param_1[2] + 0x408))();
      if (lVar6 != 0) {
        FUN_143513402(lVar6,param_2);
      }
      local_678[2] = 0;
      local_678[3] = 0x8000000000;
      FUN_1401b5a8c(&local_698,0);
      FUN_14031f39e(local_d08,0,param_1[2],&local_698);
      local_ca0 = (undefined4)param_1[0x8e];
      uStack_c9c = *(undefined4 *)((longlong)param_1 + 0x474);
      puStack_c98 = (undefined8 *)param_1[0x8f];
      local_c90 = (undefined8 *)param_1[0x90];
      local_c84 = local_c84 | 0x10;
      FUN_14031f528(&local_218,local_d08);
      local_218 = &PTR_FUN_14a2b3168;
      if (local_cc0 != 0) {
        FUN_1400020a8();
      }
      if (local_678[2] != 0) {
        FUN_1400020a8();
      }
      local_550 = 0;
      local_4c8 = 0;
      local_428 = DAT_14c8464e0;
      uStack_420 = DAT_14c8464e8;
      local_418 = DAT_14c8464f0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0xffffffff;
      local_3e0 = 0;
      uStack_3d8 = 0;
      local_3d0 = 0;
      uStack_3c8 = 0;
      local_3c0 = 0;
      local_3b8 = &DAT_3f8000003f800000;
      puStack_3b0 = &DAT_3f8000003f800000;
      local_3a8 = 0xffffffff00000000;
      local_3a0 = 0x42c80000;
      local_348 = 0;
      local_340 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_388 = 0;
      uStack_380 = 0;
      local_378 = 0;
      uStack_370 = 0;
      local_368 = 0;
      uStack_360 = 0;
      local_33c = 0xffffffff00000080;
      local_334 = 0;
      local_328 = 0;
      local_320 = 0;
      local_318 = 0;
      local_310 = 0xffffffff00000000;
      local_2f8 = 0;
      local_2f0 = 0;
      uStack_2ec = 0x80;
      uStack_2e8 = 0xffffffff;
      uStack_2e4 = 0;
      local_2d8 = 0;
      local_2d0 = 0;
      local_2c8 = 0xffffffffffffffff;
      local_2c0 = 0xbf8000003f800000;
      local_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2af = 0;
      uStack_2a8 = 0;
      uStack_2a7 = 0;
      local_29f = 1;
      local_29c = 0x42b4000042b40000;
      local_28c = 0;
      local_294 = &DAT_3f8000003f800000;
      local_284 = 0;
      local_288 = 0;
      local_280 = 0x3f800000bf800000;
      local_278 = 0x3f800000;
      uStack_250 = 0;
      uStack_24f = 0;
      uStack_260 = 0;
      uStack_258 = 0;
      local_257 = 0;
      local_270 = 0;
      uStack_268 = 0;
      uStack_230 = 0;
      uStack_22d = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      local_235 = 0;
      puVar4 = &DAT_14c846400;
      puVar11 = local_4b8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar11 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar11 = puVar11 + 1;
      }
      local_438 = 1;
      local_578 = param_1[0x91];
      local_570 = param_1[0x92];
      local_698 = (undefined4)param_1[0x93];
      uStack_694 = *(undefined4 *)((longlong)param_1 + 0x49c);
      uStack_690 = (undefined4)param_1[0x94];
      uStack_68c = *(undefined4 *)((longlong)param_1 + 0x4a4);
      local_688 = param_1[0x95];
      plVar10 = param_1 + 0x96;
      plVar12 = local_678;
      local_410 = local_578;
      local_408 = local_570;
      local_400 = &local_218;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *plVar12 = *plVar10;
        plVar10 = plVar10 + 1;
        plVar12 = plVar12 + 1;
      }
      plVar10 = param_1 + 0xa6;
      plVar12 = local_5f8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *plVar12 = *plVar10;
        plVar10 = plVar10 + 1;
        plVar12 = plVar12 + 1;
      }
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(local_d08,L"Renderer",1);
        uVar1 = local_d08[0];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar1,&local_d20,1);
      }
      (**(code **)(*DAT_14cad8310 + 0x48))(DAT_14cad8310,param_2,&local_218,&local_698);
      uVar1 = *local_210;
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(local_d08,L"Renderer",1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c874a20) &&
           (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
          FUN_145762954(&DAT_14c874628);
          DAT_14c874a18 = 1;
          atexit(FUN_14278de47);
          _Init_thread_footer(&DAT_14c874a20);
        }
        DAT_14cad8310 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_d08[0],&local_d20,1);
      }
      local_d50 = param_2;
      (**(code **)(*DAT_14cad8310 + 0x90))(DAT_14cad8310,param_2);
      *(undefined1 *)(param_1 + 0x3a) = 1;
      *(int *)((longlong)param_1 + 700) = iVar9;
      iVar9 = 0;
      do {
        FUN_1407779ba(local_d08,local_d50);
        FUN_1400510f2();
        local_d20 = (undefined *)0x0;
        local_d18 = local_d18 & 0xffffffff00000000;
        local_da8 = (wchar_t *)0x0;
        (**(code **)(*param_1 + 0x58))(param_1,local_d08,1,&local_d20);
        FUN_140069376(local_d08);
        puVar11 = (undefined8 *)((longlong)puStack_c98 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar11 + 0x38;
        if (local_c90 < puVar4) {
          FUN_140023dd8(&puStack_c98,0x1c8);
          puVar11 = (undefined8 *)((longlong)puStack_c98 + 7U & 0xfffffffffffffff8);
          puVar4 = puVar11 + 0x38;
        }
        puStack_c98 = puVar4;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9e1d98) &&
           (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
          FUN_14596f92a(&local_d20);
          local_d60 = 0;
          local_d70 = 0;
          local_d90 = "Unknown";
          local_da0 = 0;
          uStack_d98 = 0;
          local_da8 = L"FEmptyShaderParameters";
          local_d68 = 0;
          local_d80 = 0x10;
          local_d88 = 0x7a6;
          local_d78 = &local_d20;
          FUN_140b49562(&DAT_14c9e1d18,0,1);
          if (local_d20 != (undefined *)0x0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_143a9caed);
          _Init_thread_footer(&DAT_14c9e1d98);
        }
        local_d20 = &DAT_14cb3eff0;
        local_d18 = DAT_14c9e1d60;
        if (DAT_14c9e1d60 != 0) {
          LOCK();
          *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
          UNLOCK();
        }
        local_d10 = &DAT_14c9e1d18;
        local_da8 = (wchar_t *)((ulonglong)local_da8 & 0xffffffffffffff00);
        FUN_140068f1a(puVar11,&local_d21,&local_d20,0x10);
        uVar5 = local_b98;
        puVar11[0x37] = param_1;
        *puVar11 = &PTR_FUN_14adff630;
        lVar6 = (longlong)(int)local_b98;
        local_b98 = local_b98 + 1;
        if (local_b94 < local_b98) {
          FUN_14470e57a(&local_ba0,uVar5);
        }
        *(undefined8 **)(local_ba0 + lVar6 * 8) = puVar11;
        *(uint *)((longlong)puVar11 + 0x2c) = local_b98 - 1;
        FUN_143204634(local_d08,puVar11);
        local_d30 = 0x100000000;
        local_d38 = uVar1;
        (**(code **)(*param_1 + 0x60))(param_1,local_d08,&local_d38,1);
        uVar3 = FUN_141762baa(local_d08,param_1[2]);
        local_d40 = 0x100000000;
        local_da8 = (wchar_t *)CONCAT71(local_da8._1_7_,1);
        local_d48 = uVar1;
        (**(code **)(*param_1 + 0x90))(param_1,local_d08,&local_d48,uVar3);
        FUN_140069376(local_d08);
        puVar11 = (undefined8 *)((longlong)puStack_c98 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar11 + 0x38;
        if (local_c90 < puVar4) {
          FUN_140023dd8(&puStack_c98,0x1c8);
          puVar11 = (undefined8 *)((longlong)puStack_c98 + 7U & 0xfffffffffffffff8);
          puVar4 = puVar11 + 0x38;
        }
        puStack_c98 = puVar4;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9e1d98) &&
           (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
          FUN_14596f92a(&local_d20);
          local_d60 = 0;
          local_d70 = 0;
          local_d90 = "Unknown";
          local_da0 = 0;
          uStack_d98 = 0;
          local_da8 = L"FEmptyShaderParameters";
          local_d68 = 0;
          local_d80 = 0x10;
          local_d88 = 0x7a6;
          local_d78 = &local_d20;
          FUN_140b49562(&DAT_14c9e1d18,0,1);
          if (local_d20 != (undefined *)0x0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_143a9caed);
          _Init_thread_footer(&DAT_14c9e1d98);
        }
        local_d20 = &DAT_14cb3f000;
        local_d18 = DAT_14c9e1d60;
        if (DAT_14c9e1d60 != 0) {
          LOCK();
          *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
          UNLOCK();
        }
        local_d10 = &DAT_14c9e1d18;
        local_da8 = (wchar_t *)((ulonglong)local_da8 & 0xffffffffffffff00);
        FUN_140068f1a(puVar11,&local_d21,&local_d20);
        uVar5 = local_b98;
        puVar11[0x37] = param_1;
        *puVar11 = &PTR_FUN_14adff650;
        lVar6 = (longlong)(int)local_b98;
        local_b98 = local_b98 + 1;
        if (local_b94 < local_b98) {
          FUN_14470e57a(&local_ba0,uVar5);
        }
        *(undefined8 **)(local_ba0 + lVar6 * 8) = puVar11;
        *(uint *)((longlong)puVar11 + 0x2c) = local_b98 - 1;
        FUN_143204634(local_d08,puVar11);
        FUN_140779360(local_d08);
        FUN_140778010(local_d08);
        iVar9 = iVar9 + *(int *)((longlong)param_1 + 700);
      } while (iVar9 < iVar14);
      *(undefined4 *)((longlong)param_1 + 700) = 0x7fffffff;
      *(undefined1 *)(param_1 + 0x3a) = 0;
      FUN_144891d70(&local_698);
      FUN_14005d108(&local_218);
    }
  }
LAB_143a8d522:
  if ((local_60 ^ (ulonglong)auStack_dc8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a8d702 FUN_143a8d702 body=675 status=ok
// SIG undefined FUN_143a8d702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a8d702(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar12;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined ***local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e0;
  ulonglong local_d8 [2];
  undefined1 local_c8;
  undefined ***local_c0;
  undefined4 local_b8;
  undefined4 local_ac;
  undefined **local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  uint uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  ulonglong local_68;
  ulonglong local_60;
  int iVar11;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  param_3 = param_3 - *(int *)(param_1 + 0x88);
  iVar11 = 0;
  if (0 < param_3) {
    iVar11 = param_3;
  }
  iVar10 = iVar11 + *(int *)(param_1 + 8);
  if (iVar10 == 0 || SCARRY4(iVar11,*(int *)(param_1 + 8)) != iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_168);
  }
  iVar11 = DAT_14c7628f8;
  if (DAT_14c7628f8 < (int)((float)iVar10 * _DAT_14c762904)) {
    iVar11 = (int)((float)iVar10 * _DAT_14c762904);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    *(int *)(param_1 + 0xc) = iVar11;
    uStack_a0 = 0;
    local_98 = 0;
    local_a8 = &PTR_FUN_14a355380;
    uStack_90 = uStack_90 & 0xffffff00;
    FUN_14570f178(&uStack_a0,iVar11);
    local_128 = &local_a8;
    local_148 = (undefined4 *)CONCAT44(local_148._4_4_,*(undefined4 *)(param_1 + 0xc));
    local_130 = 0x21;
    local_138 = 0xf0;
    local_140 = CONCAT31(local_140._1_3_,0x1c);
    FUN_1407fe5c2(param_1 + 0x20,param_2,L"NiagaraGPUInstanceCounts",4);
    uVar12 = uStack_a0;
  }
  else {
    if (iVar10 <= *(int *)(param_1 + 0xc)) goto LAB_143a8d774;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_e0 = &PTR_FUN_14a355380;
    local_c8 = 0;
    FUN_14570f178(local_d8,iVar11);
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    local_fc = 0;
    local_118 = (undefined **)0x0;
    uStack_110 = 0;
    local_128 = &local_e0;
    local_148 = (undefined4 *)CONCAT44(local_148._4_4_,iVar11);
    local_130 = 0x21;
    local_138 = 0x400;
    local_140 = CONCAT31(local_140._1_3_,0x1c);
    FUN_1407fe5c2(&local_118,param_2,L"NiagaraGPUInstanceCounts",4);
    local_68 = uStack_110;
    local_ac = *(undefined4 *)(param_1 + 0xc);
    local_148 = &local_ac;
    local_138 = 1;
    local_140 = 0;
    FUN_1409fc52c(param_2,*(undefined4 *)(param_1 + 4),*(undefined8 *)(param_1 + 0x30));
    local_c0 = &local_a8;
    local_a8 = (undefined **)0xffffffffffffffff;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
    local_98 = uStack_110;
    uStack_90 = CONCAT31(uStack_90._1_3_,3);
    uStack_8c = 0xf000000400;
    uStack_84 = 0;
    local_78 = 0;
    local_b8 = 1;
    FUN_144760590(param_2,&local_c0,0);
    uVar9 = uStack_ec;
    uVar8 = uStack_f0;
    uVar7 = uStack_f4;
    uVar6 = uStack_f8;
    uVar5 = local_fc;
    uVar4 = uStack_100;
    *(int *)(param_1 + 0xc) = iVar11;
    uStack_84 = uStack_f4;
    uStack_80 = uStack_f0;
    uStack_7c = uStack_ec;
    local_98 = uStack_108;
    uStack_90 = uStack_100;
    uStack_8c = CONCAT44(uStack_f8,local_fc);
    local_a8 = local_118;
    uStack_a0 = uStack_110;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uStack_f8 = (undefined4)*(undefined8 *)(param_1 + 0x40);
    uStack_f4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    uStack_f0 = (undefined4)*(undefined8 *)(param_1 + 0x48);
    uStack_ec = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
    uStack_100 = (uint)*(undefined8 *)(param_1 + 0x38);
    local_fc = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 0x48) = uVar8;
    *(undefined4 *)(param_1 + 0x4c) = uVar9;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_108;
    *(undefined4 *)(param_1 + 0x34) = uStack_108._4_4_;
    *(uint *)(param_1 + 0x38) = uVar4;
    *(undefined4 *)(param_1 + 0x3c) = uVar5;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)local_118;
    *(undefined4 *)(param_1 + 0x24) = local_118._4_4_;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)uStack_110;
    *(undefined4 *)(param_1 + 0x2c) = uStack_110._4_4_;
    local_118 = (undefined **)uVar2;
    uStack_110 = uVar3;
    uStack_108 = uVar1;
    FUN_14476820c(&local_118);
    uVar12 = local_d8[0];
  }
  if (uVar12 != 0 && (uVar12 & 1) == 0) {
    FUN_1400020a8();
  }
LAB_143a8d774:
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a8d9ca FUN_143a8d9ca body=133 status=ok
// SIG undefined FUN_143a8d9ca(void)

int FUN_143a8d9ca(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  pcVar1 = (char *)(param_1 + 0x174);
  LOCK();
  bVar5 = *(char *)(param_1 + 0x174) == '\0';
  if (bVar5) {
    *(char *)(param_1 + 0x174) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_1447d2058();
  }
  iVar3 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = -1;
    if (iVar3 < *(int *)(param_1 + 0xc)) {
      *(int *)(param_1 + 8) = iVar3 + 1;
      iVar4 = iVar3;
    }
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x80) + -4 + (longlong)iVar3 * 4);
    *(int *)(param_1 + 0x88) = iVar3 + -1;
    FUN_144780a3c();
  }
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
  return iVar4;
}



// FUNCTION 143a8da50 FUN_143a8da50 body=14577 status=ok
// SIG undefined FUN_143a8da50(void)

void FUN_143a8da50(ulonglong param_1,uint *param_2,longlong *param_3,int param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  DWORD DVar15;
  DWORD DVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong _Size;
  undefined4 uVar34;
  int *piVar35;
  undefined1 *puVar36;
  uint *puVar37;
  undefined1 *puVar38;
  uint uVar39;
  longlong lVar40;
  longlong *plVar41;
  int iVar42;
  ulonglong uVar43;
  longlong lVar44;
  ulonglong uVar45;
  uint *_Dst;
  uint uVar46;
  uint *_Dst_00;
  undefined8 *puVar47;
  bool bVar48;
  undefined1 auStack_308 [32];
  wchar_t *local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  char *local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c0;
  uint **local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  ulonglong local_290;
  uint *local_288;
  longlong *local_280;
  ulonglong *local_278;
  uint local_270;
  uint local_26c;
  longlong local_268;
  longlong *local_260;
  ulonglong local_258;
  longlong local_250;
  undefined1 *local_248;
  undefined *local_240;
  undefined *local_238;
  uint *local_230;
  longlong local_228;
  uint *local_220;
  ulonglong local_218;
  uint *local_210;
  uint *local_208;
  longlong *local_200;
  uint local_1f4;
  longlong *local_1f0;
  uint *local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  int *local_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_164 [4];
  longlong *local_160;
  uint *local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128 [2];
  uint *local_118;
  ulonglong uStack_110;
  undefined *local_108;
  ulonglong local_100;
  undefined **local_f8;
  int local_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_d8;
  undefined4 local_d0;
  uint *local_c8;
  ulonglong uStack_c0;
  undefined *local_b8;
  longlong *local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *local_90;
  undefined1 *puStack_88;
  ulonglong local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_290 = param_1;
  local_288 = param_2;
  if (param_4 == 2) {
    uVar13 = *(uint *)(*param_3 + 0x1de0);
    if (uVar13 == 0) {
      uVar14 = 0x20;
    }
    else {
      uVar14 = 0;
      if (uVar13 != 0) {
        for (; (uVar13 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
        }
      }
    }
    if ((*(uint *)(param_1 + 0x3a0) >> (uVar14 & 0x1f) & 1) != 0) {
      *(uint *)(param_1 + 0x3a0) = *(uint *)(param_1 + 0x3a0) & ~(1 << ((byte)uVar14 & 0x1f));
      uVar34 = *(undefined4 *)(param_1 + 0x360);
      FUN_140069376(param_2);
      puVar1 = (ulonglong *)(param_2 + 0x1c);
      puVar47 = (undefined8 *)(*(longlong *)(param_2 + 0x1c) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar47 + 0x3a;
      if (*(undefined8 **)(param_2 + 0x1e) < puVar18) {
        FUN_140023dd8(puVar1,0x1d8);
        puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar47 + 0x3a;
      }
      *puVar1 = (ulonglong)puVar18;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e1d98) && (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1))
      {
        FUN_14596f92a(&local_c8);
        local_2a0 = 0;
        local_2b0 = 0;
        local_2d0 = "Unknown";
        local_2e0 = 0;
        uStack_2d8 = 0;
        local_2e8 = L"FEmptyShaderParameters";
        local_2a8 = 0;
        local_2c0 = 0x10;
        local_2c8 = 0x7a6;
        local_2b8 = &local_c8;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_c8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_143a9caed);
        _Init_thread_footer(&DAT_14c9e1d98);
      }
      local_c8 = (uint *)&DAT_14cb3f010;
      uStack_c0 = DAT_14c9e1d60;
      if (DAT_14c9e1d60 != 0) {
        LOCK();
        *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
        UNLOCK();
      }
      local_b8 = &DAT_14c9e1d18;
      local_2e8 = (wchar_t *)CONCAT71(local_2e8._1_7_,1);
      FUN_140068f1a(puVar47,&local_118,&local_c8,0x10);
      param_2 = local_288;
      puVar47[0x37] = local_290;
      *(undefined4 *)(puVar47 + 0x38) = 2;
      *(undefined4 *)((longlong)puVar47 + 0x1c4) = uVar34;
      *(uint *)(puVar47 + 0x39) = uVar14;
      *puVar47 = &PTR_FUN_14adff670;
      uVar13 = local_288[0x5c];
      local_288[0x5c] = uVar13 + 1;
      if (local_288[0x5d] < uVar13 + 1) {
        FUN_14470e57a(local_288 + 0x5a,uVar13);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x5a) + (longlong)(int)uVar13 * 8) = puVar47;
      *(uint *)((longlong)puVar47 + 0x2c) = param_2[0x5c] - 1;
      FUN_143204634(param_2,puVar47);
    }
    if ((*(char *)(local_290 + 0x1d2) == '\x01') && (*(char *)(local_290 + 0x1d1) == '\0')) {
      FUN_140069376(param_2);
      puVar1 = (ulonglong *)(param_2 + 0x1c);
      puVar47 = (undefined8 *)(*(longlong *)(param_2 + 0x1c) + 7U & 0xfffffffffffffff8);
      puVar18 = puVar47 + 0x38;
      if (*(undefined8 **)(param_2 + 0x1e) < puVar18) {
        FUN_140023dd8(puVar1,0x1c8);
        puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar47 + 0x38;
      }
      *puVar1 = (ulonglong)puVar18;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9e1d98) && (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1))
      {
        FUN_14596f92a(&local_c8);
        local_2a0 = 0;
        local_2b0 = 0;
        local_2d0 = "Unknown";
        local_2e0 = 0;
        uStack_2d8 = 0;
        local_2e8 = L"FEmptyShaderParameters";
        local_2a8 = 0;
        local_2c0 = 0x10;
        local_2c8 = 0x7a6;
        local_2b8 = &local_c8;
        FUN_140b49562(&DAT_14c9e1d18,0,1);
        if (local_c8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_143a9caed);
        _Init_thread_footer(&DAT_14c9e1d98);
        param_2 = local_288;
      }
      local_c8 = (uint *)&DAT_14cb3f020;
      uStack_c0 = DAT_14c9e1d60;
      if (DAT_14c9e1d60 != 0) {
        LOCK();
        *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
        UNLOCK();
      }
      local_b8 = &DAT_14c9e1d18;
      local_2e8 = (wchar_t *)CONCAT71(local_2e8._1_7_,1);
      FUN_140068f1a(puVar47,&local_118,&local_c8,0x10);
      puVar47[0x37] = local_290;
      *puVar47 = &PTR_FUN_14adff690;
      uVar13 = param_2[0x5c];
      param_2[0x5c] = uVar13 + 1;
      if (param_2[0x5d] < uVar13 + 1) {
        FUN_14470e57a(param_2 + 0x5a,uVar13);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x5a) + (longlong)(int)uVar13 * 8) = puVar47;
      *(uint *)((longlong)puVar47 + 0x2c) = param_2[0x5c] - 1;
      FUN_143204634(param_2,puVar47);
    }
  }
  uVar45 = local_290;
  if (0 < *(int *)(local_290 + 800 + (longlong)param_4 * 0x20)) {
    local_228 = (longlong)param_4 * 0x20 + local_290 + 0x308;
    lVar40 = param_3[1];
    *(longlong *)(local_290 + 0x1c0) = *param_3;
    *(longlong *)(local_290 + 0x1c8) = lVar40;
    if (*(int *)(local_290 + 0x24) < 3) {
      local_188 = (undefined4)*param_3;
      uStack_184 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_180 = (undefined4)param_3[1];
      uStack_17c = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar17 = FUN_147159974(param_2,&local_188,0);
      *(undefined8 *)(uVar45 + 0x7f8) = uVar17;
    }
    else {
      local_178 = (undefined4)*param_3;
      uStack_174 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_170 = (undefined4)param_3[1];
      uStack_16c = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar17 = FUN_1401e37f5(param_2,&local_178,*(int *)(local_290 + 0x24),4);
      *(undefined8 *)(uVar45 + 0x7f0) = uVar17;
    }
    uVar17 = FUN_142fd17e7(param_2,*(undefined8 *)(uVar45 + 0x18));
    *(undefined8 *)(uVar45 + 0x800) = uVar17;
    if ((longlong)*(int *)(local_228 + 0x18) != 0) {
      lVar40 = *(longlong *)(local_228 + 0x10);
      local_1e0 = (longlong)*(int *)(local_228 + 0x18) * 0x30 + lVar40;
      local_230 = param_2 + 0x5a;
      local_278 = (ulonglong *)(param_2 + 0x1c);
      local_1f0 = (longlong *)(uVar45 + 0x378);
      local_1c0 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
      local_210 = param_2 + 0x26;
      local_1e8 = param_2 + 0x66;
      do {
        lVar32 = *(longlong *)(local_228 + 0x10);
        iVar42 = *(int *)(local_228 + 0x18);
        *(bool *)(uVar45 + 0x228) = lVar40 == lVar32;
        local_198 = (longlong *)0x0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        iVar28 = *(int *)(lVar40 + 0x18);
        iVar24 = iVar28 * 3;
        local_268 = lVar40;
        if (iVar28 < 0) {
LAB_143a911d0:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar24);
        }
        if (iVar28 != 0) {
          FUN_144addb80(&local_198);
          lVar40 = local_268;
          iVar28 = *(int *)(local_268 + 0x18);
          iVar24 = iVar28 * 3;
          if (iVar28 < 0) goto LAB_143a911d0;
          if ((int)uStack_1a0._4_4_ < iVar24) {
            FUN_144addb80(&local_1a8);
            iVar28 = *(int *)(lVar40 + 0x18);
          }
          if (iVar28 != 0) {
            lVar40 = *(longlong *)(local_268 + 0x10);
            lVar44 = 0;
            do {
              uVar33 = uStack_190;
              lVar31 = *(longlong *)(lVar40 + 0x68 + lVar44);
              if (lVar31 != 0) {
                lVar30 = *(longlong *)(lVar31 + 0x68);
                if (lVar30 != 0) {
                  lVar29 = (longlong)(int)uStack_190;
                  uVar13 = (int)uStack_190 + 1;
                  uStack_190 = CONCAT44(uStack_190._4_4_,uVar13);
                  if (uStack_190._4_4_ < uVar13) {
                    FUN_141792ef4(&local_198,uVar33 & 0xffffffff);
                  }
                  uVar45 = uStack_1a0;
                  local_198[lVar29 * 7] = -1;
                  *(undefined4 *)(local_198 + lVar29 * 7 + 1) = 0xffffffff;
                  local_198[lVar29 * 7 + 2] = lVar30;
                  *(undefined1 *)(local_198 + lVar29 * 7 + 3) = 3;
                  *(undefined8 *)((longlong)local_198 + lVar29 * 0x38 + 0x1c) = 0x40000000070;
                  *(undefined4 *)((longlong)local_198 + lVar29 * 0x38 + 0x24) = 0;
                  *(undefined1 *)(local_198 + lVar29 * 7 + 6) = 0;
                  lVar29 = (longlong)(int)uStack_1a0;
                  uVar13 = (int)uStack_1a0 + 1;
                  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar13);
                  if (uStack_1a0._4_4_ < uVar13) {
                    FUN_141792ef4(&local_1a8,uVar45 & 0xffffffff);
                  }
                  lVar29 = lVar29 * 0x38;
                  *(undefined8 *)(local_1a8 + lVar29) = 0xffffffffffffffff;
                  *(undefined4 *)(local_1a8 + 8 + lVar29) = 0xffffffff;
                  *(longlong *)(local_1a8 + 0x10 + lVar29) = lVar30;
                  *(undefined1 *)(local_1a8 + 0x18 + lVar29) = 3;
                  *(undefined8 *)(local_1a8 + 0x1c + lVar29) = 0x7000000400;
                  *(undefined4 *)(local_1a8 + 0x24 + lVar29) = 0;
                  *(undefined1 *)(local_1a8 + 0x30 + lVar29) = 0;
                }
                uVar45 = uStack_190;
                lVar30 = *(longlong *)(lVar31 + 0xf8);
                if (lVar30 != 0) {
                  lVar29 = (longlong)(int)uStack_190;
                  uVar13 = (int)uStack_190 + 1;
                  uStack_190 = CONCAT44(uStack_190._4_4_,uVar13);
                  if (uStack_190._4_4_ < uVar13) {
                    FUN_141792ef4(&local_198,uVar45 & 0xffffffff);
                  }
                  uVar45 = uStack_1a0;
                  local_198[lVar29 * 7] = -1;
                  *(undefined4 *)(local_198 + lVar29 * 7 + 1) = 0xffffffff;
                  local_198[lVar29 * 7 + 2] = lVar30;
                  *(undefined1 *)(local_198 + lVar29 * 7 + 3) = 3;
                  *(undefined8 *)((longlong)local_198 + lVar29 * 0x38 + 0x1c) = 0x40000000070;
                  *(undefined4 *)((longlong)local_198 + lVar29 * 0x38 + 0x24) = 0;
                  *(undefined1 *)(local_198 + lVar29 * 7 + 6) = 0;
                  lVar29 = (longlong)(int)uStack_1a0;
                  uVar13 = (int)uStack_1a0 + 1;
                  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar13);
                  if (uStack_1a0._4_4_ < uVar13) {
                    FUN_141792ef4(&local_1a8,uVar45 & 0xffffffff);
                  }
                  lVar29 = lVar29 * 0x38;
                  *(undefined8 *)(local_1a8 + lVar29) = 0xffffffffffffffff;
                  *(undefined4 *)(local_1a8 + 8 + lVar29) = 0xffffffff;
                  *(longlong *)(local_1a8 + 0x10 + lVar29) = lVar30;
                  *(undefined1 *)(local_1a8 + 0x18 + lVar29) = 3;
                  *(undefined8 *)(local_1a8 + 0x1c + lVar29) = 0x7000000400;
                  *(undefined4 *)(local_1a8 + 0x24 + lVar29) = 0;
                  *(undefined1 *)(local_1a8 + 0x30 + lVar29) = 0;
                }
                uVar33 = uStack_190;
                uVar45 = local_290;
                lVar31 = *(longlong *)(lVar31 + 0x98);
                if (lVar31 != 0) {
                  lVar30 = (longlong)(int)uStack_190;
                  uVar13 = (int)uStack_190 + 1;
                  uStack_190 = CONCAT44(uStack_190._4_4_,uVar13);
                  if (uStack_190._4_4_ < uVar13) {
                    FUN_141792ef4(&local_198,uVar33 & 0xffffffff);
                  }
                  uVar33 = uStack_1a0;
                  local_198[lVar30 * 7] = -1;
                  *(undefined4 *)(local_198 + lVar30 * 7 + 1) = 0xffffffff;
                  local_198[lVar30 * 7 + 2] = lVar31;
                  *(undefined1 *)(local_198 + lVar30 * 7 + 3) = 3;
                  *(undefined8 *)((longlong)local_198 + lVar30 * 0x38 + 0x1c) = 0x40000000070;
                  *(undefined4 *)((longlong)local_198 + lVar30 * 0x38 + 0x24) = 0;
                  *(undefined1 *)(local_198 + lVar30 * 7 + 6) = 0;
                  lVar30 = (longlong)(int)uStack_1a0;
                  uVar13 = (int)uStack_1a0 + 1;
                  uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar13);
                  if (uStack_1a0._4_4_ < uVar13) {
                    FUN_141792ef4(&local_1a8,uVar33 & 0xffffffff);
                  }
                  lVar30 = lVar30 * 0x38;
                  *(undefined8 *)(local_1a8 + lVar30) = 0xffffffffffffffff;
                  *(undefined4 *)(local_1a8 + 8 + lVar30) = 0xffffffff;
                  *(longlong *)(local_1a8 + 0x10 + lVar30) = lVar31;
                  *(undefined1 *)(local_1a8 + 0x18 + lVar30) = 3;
                  *(undefined8 *)(local_1a8 + 0x1c + lVar30) = 0x7000000400;
                  *(undefined4 *)(local_1a8 + 0x24 + lVar30) = 0;
                  *(undefined1 *)(local_1a8 + 0x30 + lVar30) = 0;
                }
              }
              uVar33 = uStack_1b0;
              if (((*(byte *)(*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(lVar40 + 8 + lVar44) + 200) + 0x50) +
                               8) + 0x38) & 1) != 0) &&
                 (lVar31 = *(longlong *)(lVar40 + 0x68 + lVar44), lVar31 != 0)) {
                lVar30 = *(longlong *)(lVar31 + 200);
                uVar13 = *(uint *)(lVar31 + 0xd8);
                lVar31 = (longlong)(int)uStack_1b0;
                uVar14 = (int)uStack_1b0 + 1;
                uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar14);
                if (uStack_1b0._4_4_ < uVar14) {
                  FUN_1418339c8(&local_1b8,uVar33 & 0xffffffff);
                }
                uVar45 = uStack_190;
                *(longlong *)(local_1b8 + lVar31 * 0x10) = lVar30;
                *(uint *)(local_1b8 + 8 + lVar31 * 0x10) = uVar13 >> 2;
                lVar31 = (longlong)(int)uStack_190;
                uVar13 = (int)uStack_190 + 1;
                uStack_190 = CONCAT44(uStack_190._4_4_,uVar13);
                if (uStack_190._4_4_ < uVar13) {
                  FUN_141792ef4(&local_198,uVar45 & 0xffffffff);
                }
                uVar33 = uStack_1a0;
                uVar45 = local_290;
                local_198[lVar31 * 7] = -1;
                *(undefined4 *)(local_198 + lVar31 * 7 + 1) = 0xffffffff;
                local_198[lVar31 * 7 + 2] = lVar30;
                *(undefined1 *)(local_198 + lVar31 * 7 + 3) = 3;
                *(undefined8 *)((longlong)local_198 + lVar31 * 0x38 + 0x1c) = 0x40000000010;
                *(undefined4 *)((longlong)local_198 + lVar31 * 0x38 + 0x24) = 0;
                *(undefined1 *)(local_198 + lVar31 * 7 + 6) = 0;
                lVar31 = (longlong)(int)uStack_1a0;
                uVar13 = (int)uStack_1a0 + 1;
                uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar13);
                if (uStack_1a0._4_4_ < uVar13) {
                  FUN_141792ef4(&local_1a8,uVar33 & 0xffffffff);
                }
                lVar31 = lVar31 * 0x38;
                *(undefined8 *)(local_1a8 + lVar31) = 0xffffffffffffffff;
                *(undefined4 *)(local_1a8 + 8 + lVar31) = 0xffffffff;
                *(longlong *)(local_1a8 + 0x10 + lVar31) = lVar30;
                *(undefined1 *)(local_1a8 + 0x18 + lVar31) = 3;
                *(undefined8 *)(local_1a8 + 0x1c + lVar31) = 0x1000000400;
                *(undefined4 *)(local_1a8 + 0x24 + lVar31) = 0;
                *(undefined1 *)(local_1a8 + 0x30 + lVar31) = 0;
              }
              lVar44 = lVar44 + 0xa8;
            } while ((longlong)iVar28 * 0xa8 - lVar44 != 0);
          }
        }
        uVar33 = uStack_190;
        lVar40 = local_268;
        uVar34 = 0x400;
        if (local_268 == lVar32) {
          uVar34 = 0xf0;
        }
        lVar44 = (longlong)(int)uStack_190;
        uVar13 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar13);
        if (uStack_190._4_4_ < uVar13) {
          FUN_141792ef4(&local_198,uVar33 & 0xffffffff);
        }
        uVar33 = uStack_1a0;
        lVar31 = *(longlong *)(uVar45 + 0x60);
        local_198[lVar44 * 7] = -1;
        *(undefined4 *)(local_198 + lVar44 * 7 + 1) = 0xffffffff;
        local_198[lVar44 * 7 + 2] = lVar31;
        *(undefined1 *)(local_198 + lVar44 * 7 + 3) = 3;
        *(undefined4 *)((longlong)local_198 + lVar44 * 0x38 + 0x1c) = uVar34;
        local_198[lVar44 * 7 + 4] = 0x400;
        *(undefined1 *)(local_198 + lVar44 * 7 + 6) = 0;
        if (lVar40 == (longlong)(iVar42 + -1) * 0x30 + lVar32) {
          lVar32 = (longlong)(int)uStack_1a0;
          uVar13 = (int)uStack_1a0 + 1;
          uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar13);
          if (uStack_1a0._4_4_ < uVar13) {
            FUN_141792ef4(&local_1a8,uVar33 & 0xffffffff);
          }
          lVar32 = lVar32 * 0x38;
          uVar17 = *(undefined8 *)(uVar45 + 0x60);
          *(undefined8 *)(local_1a8 + lVar32) = 0xffffffffffffffff;
          *(undefined4 *)(local_1a8 + 8 + lVar32) = 0xffffffff;
          *(undefined8 *)(local_1a8 + 0x10 + lVar32) = uVar17;
          *(undefined1 *)(local_1a8 + 0x18 + lVar32) = 3;
          *(undefined8 *)(local_1a8 + 0x1c + lVar32) = 0xf000000400;
          *(undefined4 *)(local_1a8 + 0x24 + lVar32) = 0;
          *(undefined1 *)(local_1a8 + 0x30 + lVar32) = 0;
        }
        lVar32 = (longlong)*(int *)(lVar40 + 0x28);
        if (0 < lVar32) {
          iVar24 = (int)uStack_1a0 + *(int *)(lVar40 + 0x28);
          if (iVar24 < 0) goto LAB_143a911d0;
          if ((int)uStack_1a0._4_4_ < iVar24) {
            FUN_144addb80();
            lVar32 = (longlong)*(int *)(lVar40 + 0x28);
            if (lVar32 == 0) goto LAB_143a8e543;
          }
          plVar23 = *(longlong **)(lVar40 + 0x20);
          plVar22 = plVar23 + lVar32 * 4;
          do {
            uVar33 = uStack_1a0;
            lVar32 = *(longlong *)(*plVar23 + 0x50);
            lVar44 = (longlong)(int)uStack_1a0;
            uVar13 = (int)uStack_1a0 + 1;
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar13);
            if (uStack_1a0._4_4_ < uVar13) {
              FUN_141792ef4(&local_1a8,uVar33 & 0xffffffff);
            }
            lVar44 = lVar44 * 0x38;
            uVar17 = *(undefined8 *)(lVar32 + 0x48);
            *(undefined8 *)(local_1a8 + lVar44) = 0xffffffffffffffff;
            *(undefined4 *)(local_1a8 + 8 + lVar44) = 0xffffffff;
            *(undefined8 *)(local_1a8 + 0x10 + lVar44) = uVar17;
            *(undefined1 *)(local_1a8 + 0x18 + lVar44) = 3;
            *(undefined8 *)(local_1a8 + 0x1c + lVar44) = 0x40000000010;
            *(undefined4 *)(local_1a8 + 0x24 + lVar44) = 0;
            *(undefined1 *)(local_1a8 + 0x30 + lVar44) = 0;
            plVar23 = plVar23 + 4;
          } while (plVar23 != plVar22);
        }
LAB_143a8e543:
        uVar33 = local_290;
        local_c8 = local_288;
        uStack_c0 = uVar45;
        uStack_a0._0_4_ = 0;
        uStack_a0._4_4_ = 0;
        uStack_98 = 0;
        local_b0 = (longlong *)0x0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        local_80 = 0;
        local_90 = (uint *)0x0;
        puStack_88 = (undefined1 *)0x0;
        local_f8 = (undefined **)0x0;
        local_f0 = 0;
        local_118 = (uint *)0x0;
        uStack_110 = 0;
        uStack_ec = 0x80;
        uStack_e8 = 0xffffffff;
        uStack_e4 = 0;
        local_d8 = 0;
        local_d0 = 0;
        if ((longlong)*(int *)(lVar40 + 0x18) != 0) {
          plVar23 = *(longlong **)(lVar40 + 0x10);
          plVar22 = plVar23 + (longlong)*(int *)(lVar40 + 0x18) * 0x15;
          do {
            plVar41 = plVar23 + 2;
            plVar3 = (longlong *)plVar23[0x13];
            if (plVar3 != (longlong *)0x0) {
              local_b8 = *(undefined **)(*plVar23 + 0x10);
              local_b0 = plVar41;
              (**(code **)(*plVar3 + 0x70))(plVar3,&local_c8);
            }
            lVar40 = plVar23[1];
            uVar13 = *(uint *)(lVar40 + 0xd8);
            if ((ulonglong)uVar13 != 0) {
              lVar32 = *plVar23;
              FUN_144a93ae8(*(undefined8 *)(*(longlong *)(lVar40 + 200) + 0x60),local_128,0);
              piVar4 = (int *)local_128[0][0x1d];
              piVar35 = (int *)((longlong)local_128[0] + ((longlong)piVar4 >> 0x18) + 0xe8);
              if (((ulonglong)piVar4 & 1) == 0) {
                piVar35 = piVar4;
              }
              local_158 = local_288;
              local_150 = uVar33;
              local_130 = (longlong *)0x0;
              local_148 = lVar32;
              local_140 = lVar40;
              local_138 = plVar41;
              if (0 < (int)uVar13) {
                uVar45 = 0;
                do {
                  if (*piVar35 != -1) {
                    plVar41 = *(longlong **)(*(longlong *)(lVar40 + 0xd0) + uVar45 * 8);
                    local_160 = plVar41;
                    local_130 = plVar41;
                    (**(code **)(*plVar41 + 0x20))(plVar41,&local_158);
                    cVar11 = (**(code **)(*plVar41 + 0x38))(plVar41);
                    if (cVar11 != '\0') {
                      FUN_1481cc630(&local_118,local_164);
                    }
                  }
                  uVar45 = uVar45 + 1;
                  piVar35 = piVar35 + 6;
                } while (uVar13 != uVar45);
              }
            }
            iVar42 = local_f0;
            plVar23 = plVar23 + 0x15;
          } while (plVar23 != plVar22);
          if (local_f0 != 0) {
            ppuVar20 = local_f8;
            if (local_f8 == (undefined **)0x0) {
              ppuVar20 = &local_108;
            }
            uVar13 = *(uint *)ppuVar20;
            if (uVar13 == 0) {
              iVar28 = local_f0 + 0x1e;
              if (-1 < local_f0 + -1) {
                iVar28 = local_f0 + -1;
              }
              uVar45 = 0;
              uVar33 = (ulonglong)(uint)(iVar28 >> 5);
              if (iVar28 >> 5 < 1) {
                uVar33 = uVar45;
              }
              iVar28 = 0;
              do {
                if (uVar33 == uVar45) goto LAB_143a8e89b;
                iVar28 = iVar28 + 0x20;
                uVar13 = *(uint *)((longlong)ppuVar20 + (uVar45 + 1) * 4);
                uVar45 = uVar45 + 1;
              } while (uVar13 == 0);
            }
            else {
              uVar45 = 0;
              iVar28 = 0;
            }
            uVar43 = (ulonglong)(-uVar13 & uVar13);
            uVar33 = uVar43 * 2 + 1;
            lVar40 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
              }
            }
            iVar24 = (iVar28 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
            if (iVar24 < local_f0) {
              uVar13 = 0xffffffff;
              do {
                (**(code **)(**(longlong **)(local_118 + (longlong)iVar24 * 4) + 0x40))
                          (*(longlong **)(local_118 + (longlong)iVar24 * 4),local_288,local_290);
                uVar13 = ~(uint)uVar43 & uVar13;
                ppuVar20 = local_f8;
                if (local_f8 == (undefined **)0x0) {
                  ppuVar20 = &local_108;
                }
                iVar24 = (int)uVar45;
                lVar40 = (longlong)iVar24;
                uVar14 = *(uint *)((longlong)ppuVar20 + lVar40 * 4) & uVar13;
                if (uVar14 == 0) {
                  iVar25 = local_f0 + 0x1e;
                  if (-1 < local_f0 + -1) {
                    iVar25 = local_f0 + -1;
                  }
                  iVar25 = iVar25 >> 5;
                  iVar28 = iVar28 + 0x20;
                  iVar26 = iVar25;
                  if (iVar25 < iVar24) {
                    iVar26 = iVar24;
                  }
                  if (iVar24 < iVar25) {
                    lVar32 = 0;
                    do {
                      uVar14 = *(uint *)((longlong)ppuVar20 + (lVar40 + lVar32 + 1) * 4);
                      if (uVar14 != 0) {
                        uVar45 = (ulonglong)(iVar24 + (int)lVar32 + 1);
                        uVar13 = 0xffffffff;
                        goto LAB_143a8e857;
                      }
                      iVar28 = iVar28 + 0x20;
                      lVar32 = lVar32 + 1;
                    } while (iVar26 - lVar40 != lVar32);
                    uVar13 = 0xffffffff;
                    lVar40 = (longlong)iVar26;
                  }
                  uVar45 = lVar40 + 1U & 0xffffffff;
                  iVar24 = local_f0;
                }
                else {
LAB_143a8e857:
                  uVar43 = (ulonglong)(-uVar14 & uVar14);
                  uVar33 = uVar43 * 2 + 1;
                  lVar40 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                    }
                  }
                  iVar24 = (iVar28 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                  if (local_f0 <= iVar24) {
                    iVar24 = local_f0;
                  }
                }
              } while (iVar24 != iVar42);
            }
          }
        }
LAB_143a8e89b:
        local_d0 = 0;
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        uVar45 = uStack_110 >> 0x20;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        if ((int)uVar45 != 0) {
          FUN_14474875a(&local_118,0);
        }
        uStack_e8 = 0xffffffff;
        uStack_e4 = 0;
        local_f0 = 0;
        if (0x80 < uStack_ec) {
          uStack_ec = 0x80;
          FUN_1446efbd8(&local_108,0);
        }
        if (local_f8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != (uint *)0x0) {
          FUN_1400020a8();
        }
        FUN_143a604c0(&local_c8);
        FUN_144b35255(local_90,(ulonglong)puStack_88 & 0xffffffff);
        if (local_90 != (uint *)0x0) {
          FUN_1400020a8();
        }
        lVar40 = local_1b8;
        puVar37 = local_288;
        local_280 = local_198;
        local_198 = (longlong *)0x0;
        local_238 = (undefined *)CONCAT44(local_238._4_4_,(int)uStack_190);
        uVar10 = uStack_190._4_4_;
        uStack_190 = 0;
        local_1b8 = 0;
        uVar8 = (int)uStack_1b0;
        uVar9 = uStack_1b0._4_4_;
        uStack_1b0 = 0;
        uVar17 = *(undefined8 *)(local_268 + 0x10);
        uVar34 = *(undefined4 *)(local_268 + 0x18);
        FUN_140069376(local_288);
        puVar1 = local_278;
        puVar47 = (undefined8 *)(*(longlong *)(puVar37 + 0x1c) + 7U & 0xfffffffffffffff8);
        puVar18 = puVar47 + 0x3e;
        if (*(undefined8 **)(puVar37 + 0x1e) < puVar18) {
          FUN_140023dd8(local_278,0x1f8);
          puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar47 + 0x3e;
        }
        *local_278 = (ulonglong)puVar18;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9e1d98) &&
           (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
          FUN_14596f92a(&local_c8);
          local_2a0 = 0;
          local_2b0 = 0;
          local_2d0 = "Unknown";
          local_2e0 = 0;
          uStack_2d8 = 0;
          local_2e8 = L"FEmptyShaderParameters";
          local_2a8 = 0;
          local_2c0 = 0x10;
          local_2c8 = 0x7a6;
          local_2b8 = &local_c8;
          FUN_140b49562(&DAT_14c9e1d18,0,1);
          if (local_c8 != (uint *)0x0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_143a9caed);
          _Init_thread_footer(&DAT_14c9e1d98);
        }
        local_c8 = (uint *)&DAT_14cb3f030;
        uStack_c0 = DAT_14c9e1d60;
        if (DAT_14c9e1d60 != 0) {
          LOCK();
          *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
          UNLOCK();
        }
        local_b8 = &DAT_14c9e1d18;
        local_2e8 = (wchar_t *)CONCAT71(local_2e8._1_7_,1);
        FUN_140068f1a(puVar47,&local_118,&local_c8);
        puVar37 = local_288;
        puVar47[0x37] = local_290;
        puVar47[0x38] = local_280;
        *(undefined4 *)(puVar47 + 0x39) = local_238._0_4_;
        *(undefined4 *)((longlong)puVar47 + 0x1cc) = uVar10;
        puVar47[0x3a] = lVar40;
        *(undefined4 *)(puVar47 + 0x3b) = uVar8;
        *(undefined4 *)((longlong)puVar47 + 0x1dc) = uVar9;
        puVar47[0x3c] = uVar17;
        *(undefined4 *)(puVar47 + 0x3d) = uVar34;
        *puVar47 = &PTR_FUN_14adff6b0;
        uVar13 = local_288[0x5c];
        local_288[0x5c] = uVar13 + 1;
        if (local_288[0x5d] < uVar13 + 1) {
          FUN_14470e57a(local_230,uVar13);
        }
        *(undefined8 **)(*(longlong *)(puVar37 + 0x5a) + (longlong)(int)uVar13 * 8) = puVar47;
        *(uint *)((longlong)puVar47 + 0x2c) = puVar37[0x5c] - 1;
        FUN_143204634(puVar37);
        uVar34 = 0;
        FUN_144705e08(0);
        plVar23 = *(longlong **)(local_268 + 0x10);
        if ((longlong)*(int *)(local_268 + 0x18) != 0) {
          plVar22 = plVar23 + (longlong)*(int *)(local_268 + 0x18) * 0x15;
          local_260 = plVar22;
          do {
            uVar45 = local_290;
            DAT_14cb3e8b8 = DAT_14cb3e8b8 + 1;
            plVar41 = (longlong *)plVar23[1];
            if (((*(byte *)(plVar41 + 0x24) & 1) != 0) && ((*(byte *)(plVar23 + 2) & 1) != 0)) {
              uVar13 = *(uint *)(plVar41 + 0x1b);
              if ((ulonglong)uVar13 != 0) {
                lVar40 = *plVar23;
                FUN_144a93ae8(*(undefined8 *)(plVar41[0x19] + 0x60),&local_118,0);
                piVar4 = *(int **)(local_118 + 0x3a);
                piVar35 = (int *)((longlong)local_118 + ((longlong)piVar4 >> 0x18) + 0xe8);
                if (((ulonglong)piVar4 & 1) == 0) {
                  piVar35 = piVar4;
                }
                local_b8 = *(undefined **)(lVar40 + 0x10);
                local_c8 = local_288;
                uStack_c0 = uVar45;
                if (0 < (int)uVar13) {
                  uVar45 = 0;
                  do {
                    if (*piVar35 != -1) {
                      (**(code **)(**(longlong **)(plVar41[0x1a] + uVar45 * 8) + 0x18))();
                    }
                    uVar45 = uVar45 + 1;
                    piVar35 = piVar35 + 6;
                  } while (uVar13 != uVar45);
                }
                plVar41 = (longlong *)plVar23[1];
              }
            }
            lVar40 = DAT_14cb3e910;
            local_238 = (undefined *)*plVar23;
            iVar42 = *local_1c0;
            local_280 = plVar41;
            if (iVar42 == 0x40000002) {
              uVar45 = 0;
            }
            else {
              bVar48 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar42 != 2)) {
                if (iVar42 == 1) {
                  DVar15 = FUN_140ad26c0();
                  DVar16 = GetCurrentThreadId();
                  bVar48 = DVar15 == DVar16;
                }
                else {
                  bVar48 = false;
                }
              }
              uVar45 = (ulonglong)(bVar48 ^ 1);
            }
            puVar37 = local_288;
            lVar32 = plVar23[8];
            if (*(int *)(lVar40 + uVar45 * 4) < 1) {
              uVar13 = 1;
LAB_143a8ecf2:
              if (lVar32 != 0) {
                lVar40 = (longlong)DAT_14cb41358;
                *(undefined4 *)(lVar32 + 0x120) = *(undefined4 *)(plVar23[0xb] + lVar40 * 4);
                *(undefined4 *)(plVar23[8] + 0x5c) = *(undefined4 *)(plVar23[9] + lVar40 * 4);
              }
              local_118 = (uint *)0x0;
              if ((int)uVar13 < 2) goto LAB_143a8edb1;
              uStack_110 = (ulonglong)uVar13;
              uVar14 = 0;
              FUN_1446f48e2(&local_118);
              memset(local_118,0,(ulonglong)uVar13 * 4);
              bVar48 = true;
              if (*(uint *)(plVar23 + 0x11) == uVar13) {
                lVar40 = plVar23[0x10];
                uVar45 = 0;
                uVar14 = 0;
                do {
                  local_118[uVar45] =
                       *(int *)(lVar40 + uVar45 * 4) - *(int *)(plVar23[0xb] + uVar45 * 4);
                  lVar40 = plVar23[0x10];
                  uVar21 = *(uint *)(lVar40 + uVar45 * 4);
                  if (uVar14 < uVar21) {
                    uVar14 = uVar21;
                  }
                  uVar45 = uVar45 + 1;
                } while (uVar13 != uVar45);
              }
            }
            else {
              if (lVar32 != 0 || plVar23[0xd] != 0) {
                lVar40 = plVar23[0xd];
                if (lVar32 != 0) {
                  lVar40 = lVar32;
                }
                uVar13 = *(uint *)(lVar40 + 0x180);
                goto LAB_143a8ecf2;
              }
              uVar13 = 1;
LAB_143a8edb1:
              uStack_110 = 0;
              local_118 = (uint *)0x0;
              bVar48 = false;
              uVar14 = 0;
            }
            if (plVar23[0xd] == 0) {
              iVar42 = 0;
            }
            else {
              lVar40 = (longlong)DAT_14cb41358;
              *(undefined4 *)(plVar23[0xd] + 0x120) = *(undefined4 *)(plVar23[0x10] + lVar40 * 4);
              *(undefined4 *)(plVar23[0xd] + 0x5c) = *(undefined4 *)(plVar23[0xe] + lVar40 * 4);
              *(uint *)(plVar23[0xd] + 0x138) = DAT_14cb3e8b8;
              iVar42 = 0;
              if ((*(byte *)(plVar23 + 2) & 1) != 0) {
                iVar42 = *(int *)(plVar23[0x10] + lVar40 * 4) - *(int *)(plVar23[0xb] + lVar40 * 4);
              }
              *(int *)(plVar23[0xd] + 0x134) = iVar42;
              if (bVar48) {
                uVar45 = 0;
                iVar28 = 0;
                do {
                  iVar28 = iVar28 + local_118[uVar45];
                  uVar45 = uVar45 + 1;
                } while (uVar13 != uVar45);
                *(int *)(plVar23[0xd] + 0x134) = iVar28;
              }
            }
            lVar40 = plVar23[0x14];
            cVar11 = *(char *)(lVar40 + 0x34);
            if (cVar11 == '\x02') {
              bVar12 = *(byte *)(lVar40 + 0x94);
              uVar21 = *(uint *)(lVar40 + 0x98);
              uVar33 = (ulonglong)uVar21;
              uVar46 = *(uint *)(lVar40 + 0x9c);
              uVar45 = (ulonglong)uVar46;
              puVar38 = (undefined1 *)(ulonglong)*(uint *)(lVar40 + 0xa0);
              local_258 = CONCAT44(local_258._4_4_,iVar42);
              if (bVar12 == 2) {
                uVar14 = *(uint *)(plVar23 + 4);
                puVar27 = (uint *)(ulonglong)*(uint *)((longlong)plVar23 + 0x24);
                uVar43 = (ulonglong)*(uint *)(plVar23 + 5);
              }
              else {
                if (bVar12 == 1) {
                  uVar14 = *(uint *)(plVar23 + 4);
                  puVar27 = (uint *)(ulonglong)*(uint *)((longlong)plVar23 + 0x24);
                }
                else {
                  if (bVar12 != 0) {
                    local_248 = puVar38;
                    FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraGpuComputeDispatch.cpp"
                                  ,0x7f1,L"FNiagaraGpuComputeDispatch: Unknown DispatchType(%d)");
                    lVar40 = plVar23[0x14];
                    uVar14 = 0;
                    puVar27 = (uint *)0x0;
                    uVar43 = 0;
                    puVar38 = local_248;
                    goto LAB_143a8f015;
                  }
                  uVar14 = *(uint *)(plVar23 + 4);
                  puVar27 = (uint *)&DAT_00000001;
                }
                uVar43 = 1;
              }
LAB_143a8f015:
              uVar39 = (uint)bVar12;
              if (*(char *)(lVar40 + 0x95) == '\x02') {
                uVar14 = uVar14 * uVar21;
                puVar27 = (uint *)(ulonglong)((int)puVar27 * uVar46);
                uVar43 = (ulonglong)(uint)((int)uVar43 * (int)puVar38);
              }
LAB_143a8f028:
              puVar1 = local_278;
              uVar21 = (int)puVar27 * uVar14;
              uVar46 = uVar21 * (int)uVar43;
              if ((0 < (int)uVar46) || (plVar23[6] != 0)) {
                local_250 = *(longlong *)(local_290 + 0x30);
                *(int *)(local_250 + 0x1e8) = *(int *)(local_250 + 0x1e8) + 1;
                local_1c8 = *(longlong *)(*(longlong *)(local_280[0x19] + 0x60) + 0x30);
                local_240 = *(undefined **)(local_1c8 + 0x48);
                uVar2 = *(uint *)(local_240 + 0x3c);
                _Size = (ulonglong)uVar2;
                _Dst = (uint *)(*(longlong *)(puVar37 + 0x1c) + 0xfU & 0xfffffffffffffff0);
                puVar19 = (undefined *)(_Size + (longlong)_Dst);
                local_270 = uVar13;
                local_26c = uVar21;
                local_248 = puVar38;
                local_220 = puVar27;
                local_218 = uVar33;
                local_1f4 = uVar39;
                local_1d8 = uVar45;
                local_1d0 = uVar43;
                if (*(undefined **)(puVar37 + 0x1e) < puVar19) {
                  FUN_140023dd8(local_278);
                  _Dst = (uint *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar19 = (undefined *)(_Size + (longlong)_Dst);
                }
                puVar7 = local_240;
                *(undefined **)(puVar37 + 0x1c) = puVar19;
                memset(_Dst,0,_Size);
                puVar1 = local_278;
                uVar17 = *(undefined8 *)(puVar7 + 0x48);
                puVar47 = (undefined8 *)(*(longlong *)(puVar37 + 0x1c) + 0xfU & 0xfffffffffffffff0);
                puVar18 = puVar47 + 4;
                if (*(undefined8 **)(puVar37 + 0x1e) < puVar18) {
                  FUN_140023dd8(local_278,0x30);
                  puVar47 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                  puVar18 = puVar47 + 4;
                }
                *(undefined8 **)(puVar37 + 0x1c) = puVar18;
                *puVar47 = &PTR_FUN_14adff770;
                puVar47[1] = _Dst;
                *(uint *)(puVar47 + 2) = uVar2;
                *(undefined4 *)((longlong)puVar47 + 0x14) = 1;
                puVar47[3] = uVar17;
                uVar13 = puVar37[0x28];
                puVar37[0x28] = uVar13 + 1;
                if (puVar37[0x29] < uVar13 + 1) {
                  FUN_1448cfae8(local_210,uVar13);
                }
                *(undefined8 **)(*(longlong *)local_210 + (longlong)(int)uVar13 * 8) = puVar47;
                bVar12 = *(byte *)(*(longlong *)(*(longlong *)(local_280[0x19] + 0x50) + 8) + 0x38);
                _Dst[2] = *(uint *)(local_280 + 0x24) & 1;
                _Dst[0x23] = DAT_14cb3e8b8;
                _Dst[0x4c] = (uint)local_258;
                puVar18 = &DAT_14cb428b0;
                if ((bVar12 & 1) != 0) {
                  puVar18 = (undefined8 *)(*(longlong *)(local_280[0x19] + 0x50) + 0x50);
                }
                *(undefined8 *)(_Dst + 0x16) = *puVar18;
                uVar17 = *(undefined8 *)((longlong)local_280 + 0x14);
                uVar5 = *(undefined8 *)((longlong)local_280 + 0x1c);
                uVar6 = *(undefined8 *)((longlong)local_280 + 0x24);
                *(undefined8 *)(_Dst + 0x24) = *(undefined8 *)((longlong)local_280 + 0xc);
                *(undefined8 *)(_Dst + 0x26) = uVar17;
                *(undefined8 *)(_Dst + 0x28) = uVar5;
                *(undefined8 *)(_Dst + 0x2a) = uVar6;
                memcpy(_Dst + 0x2c,(void *)((longlong)local_280 + 0x2c),0x80);
                puVar37 = local_288;
                *(undefined8 *)(_Dst + 0x12) = *(undefined8 *)(local_290 + 0x60);
                _Dst[0x1c] = 0xffffffff;
                _Dst[0x1d] = 0;
                _Dst[0x1e] = 0;
                _Dst[0x1f] = 0;
                if (*(char *)(plVar23[0x14] + 0x34) == '\x02') {
LAB_143a8f254:
                  _Dst[0x1d] = uVar46;
                }
                else if ((*(char *)(plVar23[0x14] + 0x34) == '\x01') && (plVar23[0x13] != 0)) {
                  uVar13 = *(uint *)((longlong)plVar23 + 0x2c);
                  _Dst[0x1c] = uVar13;
                  if (uVar13 != 0xffffffff) {
                    uVar46 = 0;
                  }
                  goto LAB_143a8f254;
                }
                uVar13 = *(int *)((longlong)plVar23 + 0x14) << 0x10;
                _Dst[0x1e] = uVar13;
                _Dst[0x1e] = *(ushort *)((longlong)plVar23 + 0x16) | uVar13;
                uVar13 = (int)plVar23[3] << 0x10;
                _Dst[0x1f] = uVar13;
                _Dst[0x1f] = *(ushort *)((longlong)plVar23 + 0x1a) | uVar13;
                _Dst[0x20] = *(uint *)(plVar23[0x14] + 0x58);
                _Dst[0x21] = *(uint *)(plVar23[0x14] + 0x5c);
                _Dst[0x22] = *(uint *)(plVar23[0x14] + 0x60);
                *(undefined8 *)(_Dst + 10) = *(undefined8 *)(*(longlong *)(local_238 + 0x18) + 0x38)
                ;
                lVar40 = plVar23[8];
                if ((lVar40 == 0) || (*(int *)(lVar40 + 0x124) == 0)) {
                  *(undefined8 *)(_Dst + 4) = DAT_14cb427b0;
                  *(undefined8 *)(_Dst + 6) = DAT_14cb429b0;
                  *(undefined8 *)(_Dst + 8) = DAT_14cb428b0;
                  uVar13 = 0;
                }
                else {
                  *(undefined8 *)(_Dst + 4) = *(undefined8 *)(lVar40 + 0x70);
                  *(undefined8 *)(_Dst + 6) = *(undefined8 *)(plVar23[8] + 0x100);
                  *(undefined8 *)(_Dst + 8) = *(undefined8 *)(plVar23[8] + 0xa0);
                  uVar13 = *(uint *)(plVar23[8] + 0x128) >> 2;
                }
                *_Dst = uVar13;
                if (plVar23[0xd] == 0) {
                  uVar13 = 0;
                  _Dst[0x18] = 0;
                  _Dst[0x19] = 0;
                  _Dst[0xc] = 0;
                  _Dst[0xd] = 0;
                  _Dst[0xe] = 0;
                  _Dst[0xf] = 0;
                  _Dst[0x10] = 0;
                  _Dst[0x11] = 0;
                }
                else {
                  *(undefined8 *)(_Dst + 0xc) = *(undefined8 *)(plVar23[0xd] + 0x68);
                  *(undefined8 *)(_Dst + 0xe) = *(undefined8 *)(plVar23[0xd] + 0xf8);
                  *(undefined8 *)(_Dst + 0x10) = *(undefined8 *)(plVar23[0xd] + 0x98);
                  *(undefined8 *)(_Dst + 0x18) = *(undefined8 *)(plVar23[0xd] + 200);
                  uVar13 = *(uint *)(plVar23[0xd] + 0x128) >> 2;
                }
                _Dst[1] = uVar13;
                FUN_144a93ae8(*(undefined8 *)(local_280[0x19] + 0x60),&local_c8,
                              *(undefined2 *)((longlong)plVar23 + 0x12));
                uVar45 = local_290;
                local_258 = uStack_c0;
                local_208 = local_c8;
                if ((char)local_c8[0x38] == '\x01') {
                  lVar40 = *(longlong *)(local_290 + 0x1c0);
                  lVar32 = FUN_1447e4f80();
                  cVar11 = *(char *)(lVar32 + 0x41);
                  if (cVar11 == '\x03') {
                    cVar11 = '\x02';
                  }
                  *(undefined8 *)(_Dst + 0x1a0) = *(undefined8 *)(lVar40 + 0x18);
                  *(char *)(_Dst + 0x1a2) = cVar11;
                  bVar12 = *(byte *)(local_280[0x19] + 0x27c);
                  if ((int)(uint)bVar12 < *(int *)(uVar45 + 0x1cc)) {
                    lVar40 = *(longlong *)(uVar45 + 0x1c0);
                    iVar42 = *(int *)(uVar45 + 0x1c8);
                    lVar32 = FUN_1447e4f80();
                    cVar11 = *(char *)(lVar32 + 0x41);
                    if (cVar11 == '\x03') {
                      cVar11 = '\x02';
                    }
                    *(undefined8 *)(_Dst + 0x1a0) =
                         *(undefined8 *)(lVar40 + 0x18 + (longlong)iVar42 * (ulonglong)bVar12);
                    *(char *)(_Dst + 0x1a2) = cVar11;
                    puVar37 = local_288;
                  }
                }
                local_200 = plVar23 + 2;
                uVar17 = *(undefined8 *)(uVar45 + 0x7f0);
                lVar40 = FUN_14482e3b2();
                cVar11 = *(char *)(lVar40 + 0x41);
                if (cVar11 == '\x03') {
                  cVar11 = '\x02';
                }
                *(undefined8 *)(_Dst + 0x1a4) = uVar17;
                *(char *)(_Dst + 0x1a6) = cVar11;
                uVar17 = *(undefined8 *)(uVar45 + 0x7f8);
                lVar40 = FUN_144a890ae();
                cVar11 = *(char *)(lVar40 + 0x41);
                if (cVar11 == '\x03') {
                  cVar11 = '\x02';
                }
                *(undefined8 *)(_Dst + 0x1a8) = uVar17;
                *(char *)(_Dst + 0x1aa) = cVar11;
                uVar17 = *(undefined8 *)(uVar45 + 0x800);
                lVar40 = FUN_144a9258d();
                puVar1 = local_278;
                cVar11 = *(char *)(lVar40 + 0x41);
                if (cVar11 == '\x03') {
                  cVar11 = '\x02';
                }
                *(undefined8 *)(_Dst + 0x1ac) = uVar17;
                *(char *)(_Dst + 0x1ae) = cVar11;
                if ((*(byte *)(plVar23[0x14] + 0x4c) & 8) == 0) {
                  iVar42 = (int)local_218;
                  puVar27 = local_220;
                  if (((char)local_1f4 == '\0') &&
                     (iVar28 = (int)(iVar42 + uVar14 + -1) / iVar42, DAT_14ca84f24 < iVar28)) {
                    uVar45 = (longlong)(iVar28 + DAT_14ca84f24 + -1) / (longlong)DAT_14ca84f24;
                    iVar24 = (int)uVar45;
                    uVar14 = ((iVar24 + iVar28 + -1) / iVar24) * iVar42;
                    local_26c = iVar24 * uVar14;
                    puVar27 = (uint *)(uVar45 & 0xffffffff);
                  }
                  uVar45 = (ulonglong)local_270;
                  _Dst[0x54] = 1;
                  _Dst[0x55] = uVar14;
                  _Dst[0x56] = local_26c;
                  _Dst[0x50] = uVar14;
                  _Dst[0x51] = (uint)puVar27;
                  _Dst[0x52] = (uint)local_1d0;
                  if ((int)local_270 < 1) goto LAB_143a8fe90;
                  local_248 = (undefined1 *)
                              CONCAT44(local_248._4_4_,
                                       (int)((uint)local_1d0 + (int)local_248 + -1) / (int)local_248
                                      );
                  local_270 = (int)((int)local_1d8 + (uint)puVar27 + -1) / (int)local_1d8;
                  local_26c = (int)(iVar42 + uVar14 + -1) / iVar42;
                  if (-1 < (int)(local_26c | local_270)) {
                    local_220 = local_208 + 0x3a;
                    uVar33 = 0;
                    local_218 = uVar45;
                    do {
                      puVar1 = local_278;
                      if ((((DAT_14ca84f24 < (int)local_26c) || (DAT_14ca84f28 < (int)local_270)) ||
                          ((int)local_248 < 0)) || (DAT_14ca84f2c < (int)local_248))
                      goto LAB_143a8fe9b;
                      puVar27 = puVar37;
                      if (uVar33 != 0) {
                        uVar13 = *(uint *)(local_240 + 0x3c);
                        uVar45 = (ulonglong)uVar13;
                        _Dst_00 = (uint *)(*(longlong *)(puVar37 + 0x1c) + 0xfU & 0xfffffffffffffff0
                                          );
                        puVar19 = (undefined *)((longlong)_Dst_00 + uVar45);
                        if (*(undefined **)(puVar37 + 0x1e) < puVar19) {
                          FUN_140023dd8(local_278);
                          _Dst_00 = (uint *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                          puVar19 = (undefined *)((longlong)_Dst_00 + uVar45);
                        }
                        puVar7 = local_240;
                        *(undefined **)(puVar37 + 0x1c) = puVar19;
                        memset(_Dst_00,0,uVar45);
                        puVar1 = local_278;
                        uVar17 = *(undefined8 *)(puVar7 + 0x48);
                        puVar47 = (undefined8 *)
                                  (*(longlong *)(puVar37 + 0x1c) + 0xfU & 0xfffffffffffffff0);
                        puVar18 = puVar47 + 4;
                        if (*(undefined8 **)(puVar37 + 0x1e) < puVar18) {
                          FUN_140023dd8(local_278,0x30);
                          puVar47 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                          puVar18 = puVar47 + 4;
                        }
                        *(undefined8 **)(puVar37 + 0x1c) = puVar18;
                        *puVar47 = &PTR_FUN_14adff770;
                        puVar47[1] = _Dst_00;
                        *(uint *)(puVar47 + 2) = uVar13;
                        *(undefined4 *)((longlong)puVar47 + 0x14) = 1;
                        puVar47[3] = uVar17;
                        uVar13 = puVar37[0x28];
                        puVar37[0x28] = uVar13 + 1;
                        if (puVar37[0x29] < uVar13 + 1) {
                          FUN_1448cfae8(local_210,uVar13);
                        }
                        *(undefined8 **)(*(longlong *)local_210 + (longlong)(int)uVar13 * 8) =
                             puVar47;
                        memcpy(_Dst_00,_Dst,0x6c0);
                        puVar27 = local_288;
                        _Dst = _Dst_00;
                      }
                      lVar40 = plVar23[8];
                      if (lVar40 == 0) {
                        lVar40 = plVar23[0xd];
                        uVar13 = 0;
                        if (lVar40 != 0) {
                          iVar42 = *(int *)(lVar40 + 400);
                          goto LAB_143a8f9d6;
                        }
                      }
                      else {
                        iVar42 = *(int *)(lVar40 + 400);
LAB_143a8f9d6:
                        uVar13 = 0;
                        if ((longlong)uVar33 < (longlong)iVar42) {
                          uVar13 = *(uint *)(*(longlong *)(lVar40 + 0x188) + uVar33 * 4);
                        }
                      }
                      _Dst[3] = uVar13;
                      uVar14 = 0xffffffff;
                      uVar13 = 0xffffffff;
                      if (plVar23[0x13] == 0) {
                        uVar13 = *(uint *)(plVar23[9] + uVar33 * 4);
                      }
                      _Dst[0x14] = uVar13;
                      if (plVar23[0x13] == 0) {
                        uVar14 = *(uint *)(plVar23[0xe] + uVar33 * 4);
                      }
                      _Dst[0x15] = uVar14;
                      if ((longlong)uVar33 < (longlong)(int)uStack_110) {
                        _Dst[0x4c] = local_118[uVar33];
                      }
                      local_158 = local_208;
                      local_150 = local_258;
                      uVar13 = *(uint *)(local_280 + 0x1b);
                      puVar37 = puVar27;
                      plVar22 = local_280;
                      if ((ulonglong)uVar13 != 0) {
                        puVar38 = *(undefined1 **)local_220;
                        puVar36 = (undefined1 *)(((longlong)puVar38 >> 0x18) + (longlong)local_220);
                        if (((ulonglong)puVar38 & 1) == 0) {
                          puVar36 = puVar38;
                        }
                        lVar40 = *(longlong *)(local_258 + 0x18);
                        uStack_c0 = local_290;
                        local_b8 = local_238;
                        local_b0 = local_280;
                        uStack_a8 = SUB84(local_200,0);
                        uStack_a4 = (undefined4)((ulonglong)local_200 >> 0x20);
                        uStack_a0 = &local_158;
                        uStack_98 = (undefined4)local_1c8;
                        uStack_94 = (undefined4)((ulonglong)local_1c8 >> 0x20);
                        puStack_88 = (undefined1 *)0x0;
                        local_80 = 0;
                        local_78 = 0;
                        puVar37 = local_288;
                        local_c8 = puVar27;
                        local_90 = _Dst;
                        if (0 < (int)uVar13) {
                          puVar18 = (undefined8 *)(puVar36 + 0x10);
                          uVar45 = 0;
                          do {
                            if (*(int *)(puVar18 + -2) != -1) {
                              local_80 = *(ulonglong *)(plVar22[0x1a] + uVar45 * 8);
                              puVar38 = (undefined1 *)*puVar18;
                              puStack_88 = (undefined1 *)
                                           (((longlong)puVar38 >> 0x18) + (longlong)puVar18);
                              if (((ulonglong)puVar38 & 1) == 0) {
                                puStack_88 = puVar38;
                              }
                              plVar22 = (longlong *)puVar18[-1];
                              if (((ulonglong)plVar22 & 1) != 0) {
                                plVar22 = *(longlong **)
                                           (*(longlong *)(lVar40 + 0x88) +
                                           (longlong)(int)((ulonglong)plVar22 >> 1) * 8);
                              }
                              local_78 = *(int *)(puVar18 + -2);
                              (**(code **)(*plVar22 + 0x420))(plVar22,&local_c8,uVar33 & 0xffffffff)
                              ;
                              plVar22 = local_280;
                            }
                            uVar45 = uVar45 + 1;
                            puVar18 = puVar18 + 3;
                            puVar37 = local_288;
                          } while (uVar13 != uVar45);
                        }
                      }
                      puVar19 = local_238;
                      memcpy(_Dst + 0x60,*(void **)(local_238 + 0x30),
                             (ulonglong)*(byte *)(plVar22[0x19] + 0x1e4) * 0x20 + 0x20);
                      memcpy(_Dst + 0x70,*(void **)(puVar19 + 0x38),
                             (ulonglong)*(byte *)(plVar22[0x19] + 0x1e4) * 0x40 + 0x40);
                      memcpy(_Dst + 0x90,*(void **)(puVar19 + 0x40),
                             (ulonglong)*(byte *)(plVar22[0x19] + 0x1e4) * 0x200 + 0x200);
                      memcpy(_Dst + 400,(void *)plVar22[0x16],
                             (ulonglong)*(byte *)(plVar22[0x19] + 0x1e4) * 0x20 + 0x20);
                      FUN_140069376(puVar37);
                      puVar1 = local_278;
                      puVar47 = (undefined8 *)
                                (*(longlong *)(puVar37 + 0x1c) + 7U & 0xfffffffffffffff8);
                      puVar18 = puVar47 + 0x41;
                      if (*(undefined8 **)(puVar37 + 0x1e) < puVar18) {
                        FUN_140023dd8(local_278,0x210);
                        puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                        puVar18 = puVar47 + 0x41;
                      }
                      puVar19 = local_240;
                      *local_278 = (ulonglong)puVar18;
                      uStack_c0 = *(ulonglong *)(local_240 + 0x48);
                      if (uStack_c0 != 0) {
                        LOCK();
                        *(int *)(uStack_c0 + 8) = *(int *)(uStack_c0 + 8) + 1;
                        UNLOCK();
                      }
                      local_b8 = local_240;
                      local_2e8 = (wchar_t *)CONCAT71(local_2e8._1_7_,1);
                      local_c8 = _Dst;
                      FUN_140068f1a(puVar47,&local_158);
                      *puVar47 = &PTR_FUN_14adff7a0;
                      puVar47[0x37] = local_290;
                      puVar47[0x38] = puVar19;
                      puVar47[0x39] = _Dst;
                      puVar47[0x3a] = local_208;
                      puVar47[0x3b] = local_258;
                      *(uint *)(puVar47 + 0x3c) = local_26c;
                      *(uint *)((longlong)puVar47 + 0x1e4) = local_270;
                      *(int *)(puVar47 + 0x3d) = (int)local_248;
                      puVar47[0x3e] = local_238;
                      puVar47[0x3f] = local_280;
                      puVar47[0x40] = local_200;
                      uVar13 = puVar37[0x5c];
                      puVar37[0x5c] = uVar13 + 1;
                      if (puVar37[0x5d] < uVar13 + 1) {
                        FUN_14470e57a(local_230,uVar13);
                      }
                      *(undefined8 **)(*(longlong *)(puVar37 + 0x5a) + (longlong)(int)uVar13 * 8) =
                           puVar47;
                      *(uint *)((longlong)puVar47 + 0x2c) = puVar37[0x5c] - 1;
                      FUN_140069100();
                      uVar33 = uVar33 + 1;
                    } while (uVar33 != local_218);
                    goto LAB_143a8fe90;
                  }
                }
                else {
                  *(longlong *)(_Dst + 0x5c) = plVar23[6];
                  _Dst[0x5e] = 4;
                  lVar40 = plVar23[6];
                  puVar47 = (undefined8 *)(*(longlong *)(puVar37 + 0x1c) + 7U & 0xfffffffffffffff8);
                  puVar18 = puVar47 + 9;
                  if (*(undefined8 **)(puVar37 + 0x1e) < puVar18) {
                    FUN_140023dd8(local_278,0x50);
                    puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar18 = puVar47 + 9;
                  }
                  *(undefined8 **)(puVar37 + 0x1c) = puVar18;
                  puVar47[1] = *(undefined8 *)(lVar40 + 8);
                  puVar47[2] = 0;
                  *(undefined1 *)(puVar47 + 3) = 3;
                  *(undefined8 *)((longlong)puVar47 + 0x1c) = 0xffffffffffffffff;
                  *puVar47 = &PTR_FUN_14a1fb168;
                  *(undefined1 *)(puVar47 + 5) = 0x30;
                  *(undefined8 *)((longlong)puVar47 + 0x2c) = 0xffffffff00000000;
                  puVar47[7] = 0;
                  puVar47[8] = lVar40;
                  uVar13 = puVar37[0x68];
                  puVar37[0x68] = uVar13 + 1;
                  if (puVar37[0x69] < uVar13 + 1) {
                    FUN_1447568fc(local_1e8,uVar13);
                  }
                  *(undefined8 **)(*(longlong *)(puVar37 + 0x66) + (longlong)(int)uVar13 * 8) =
                       puVar47;
                  *(uint *)((longlong)puVar47 + 0x1c) = puVar37[0x68] - 1;
                  *(undefined8 **)(_Dst + 0x58) = puVar47;
                  _Dst[0x5a] = (*(uint *)(plVar23 + 7) >> 4) + 1;
                  FUN_140069376(puVar37);
                  puVar1 = local_278;
                  puVar47 = (undefined8 *)(*(longlong *)(puVar37 + 0x1c) + 7U & 0xfffffffffffffff8);
                  puVar18 = puVar47 + 0x3f;
                  if (*(undefined8 **)(puVar37 + 0x1e) < puVar18) {
                    FUN_140023dd8(local_278,0x200);
                    puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                    puVar18 = puVar47 + 0x3f;
                  }
                  puVar19 = local_240;
                  *local_278 = (ulonglong)puVar18;
                  uStack_c0 = *(ulonglong *)(local_240 + 0x48);
                  if (uStack_c0 != 0) {
                    LOCK();
                    *(int *)(uStack_c0 + 8) = *(int *)(uStack_c0 + 8) + 1;
                    UNLOCK();
                  }
                  local_b8 = local_240;
                  local_2e8 = (wchar_t *)CONCAT71(local_2e8._1_7_,1);
                  local_c8 = _Dst;
                  FUN_140068f1a(puVar47,&local_158);
                  *puVar47 = &PTR_FUN_14adff780;
                  puVar47[0x37] = local_290;
                  puVar47[0x38] = puVar19;
                  puVar47[0x39] = _Dst;
                  puVar47[0x3a] = local_208;
                  puVar47[0x3b] = local_258;
                  puVar47[0x3c] = local_238;
                  puVar47[0x3d] = local_280;
                  puVar47[0x3e] = local_200;
                  uVar13 = puVar37[0x5c];
                  puVar37[0x5c] = uVar13 + 1;
                  if (puVar37[0x5d] < uVar13 + 1) {
                    FUN_14470e57a(local_230,uVar13);
                  }
                  *(undefined8 **)(*(longlong *)(puVar37 + 0x5a) + (longlong)(int)uVar13 * 8) =
                       puVar47;
                  *(uint *)((longlong)puVar47 + 0x2c) = puVar37[0x5c] - 1;
                  FUN_140069100();
LAB_143a8fe90:
                  *(int *)(local_290 + 0x2b8) = *(int *)(local_290 + 0x2b8) + 1;
                }
LAB_143a8fe9b:
                piVar4 = (int *)(local_250 + 0x1e8);
                *piVar4 = *piVar4 + -1;
                plVar22 = local_260;
                if (*piVar4 == 0) {
                  iVar42 = *(int *)(local_250 + 0x218);
                  if (iVar42 == 0) {
                    uVar43 = 1;
                    uVar45 = 0;
                    iVar28 = 0;
                    iVar24 = 0;
                  }
                  else {
                    puVar37 = *(uint **)(local_250 + 0x210);
                    if (*(uint **)(local_250 + 0x210) == (uint *)0x0) {
                      puVar37 = (uint *)(local_250 + 0x200);
                    }
                    uVar13 = *puVar37;
                    if (uVar13 == 0) {
                      iVar28 = iVar42 + 0x1e;
                      if (-1 < iVar42 + -1) {
                        iVar28 = iVar42 + -1;
                      }
                      uVar45 = 0;
                      uVar33 = (ulonglong)(uint)(iVar28 >> 5);
                      if (iVar28 >> 5 < 1) {
                        uVar33 = uVar45;
                      }
                      iVar28 = 0;
                      do {
                        if (uVar33 == uVar45) goto LAB_143a8fee0;
                        iVar28 = iVar28 + 0x20;
                        uVar13 = puVar37[uVar45 + 1];
                        uVar45 = uVar45 + 1;
                      } while (uVar13 == 0);
                    }
                    else {
                      uVar45 = 0;
                      iVar28 = 0;
                    }
                    uVar43 = (ulonglong)(-uVar13 & uVar13);
                    uVar33 = uVar43 * 2 + 1;
                    lVar40 = 0x3f;
                    if (uVar33 != 0) {
                      for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                      }
                    }
                    iVar24 = (iVar28 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    if (iVar42 <= iVar24) {
                      iVar24 = iVar42;
                    }
                  }
                  if (iVar24 < iVar42) {
                    uVar13 = 0xffffffff;
                    do {
                      *(undefined4 *)
                       (*(longlong *)(local_250 + 0x1f0) + 8 + (longlong)iVar24 * 0x28) = 0;
                      uVar13 = ~(uint)uVar43 & uVar13;
                      puVar37 = *(uint **)(local_250 + 0x210);
                      if (*(uint **)(local_250 + 0x210) == (uint *)0x0) {
                        puVar37 = (uint *)(local_250 + 0x200);
                      }
                      iVar42 = *(int *)(local_250 + 0x218);
                      iVar24 = (int)uVar45;
                      lVar40 = (longlong)iVar24;
                      uVar14 = puVar37[lVar40] & uVar13;
                      if (uVar14 == 0) {
                        iVar25 = iVar42 + 0x1e;
                        if (-1 < iVar42 + -1) {
                          iVar25 = iVar42 + -1;
                        }
                        iVar26 = iVar25 >> 5;
                        if (iVar25 >> 5 < iVar24) {
                          iVar26 = iVar24;
                        }
                        lVar32 = 0;
                        do {
                          if (iVar26 - lVar40 == lVar32) goto LAB_143a8fee0;
                          iVar28 = iVar28 + 0x20;
                          uVar14 = puVar37[lVar40 + lVar32 + 1];
                          lVar32 = lVar32 + 1;
                        } while (uVar14 == 0);
                        uVar45 = (ulonglong)(uint)(iVar24 + (int)lVar32);
                        uVar13 = 0xffffffff;
                      }
                      uVar43 = (ulonglong)(-uVar14 & uVar14);
                      uVar33 = uVar43 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar33 != 0) {
                        for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar24 = (iVar28 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    } while (iVar24 < iVar42);
                  }
LAB_143a8fee0:
                  iVar42 = *(int *)(local_250 + 0x268);
                  if (iVar42 == 0) {
                    puVar38 = &DAT_00000001;
                    uVar45 = 0;
                    iVar28 = 0;
                    iVar24 = 0;
                  }
                  else {
                    puVar37 = *(uint **)(local_250 + 0x260);
                    if (*(uint **)(local_250 + 0x260) == (uint *)0x0) {
                      puVar37 = (uint *)(local_250 + 0x250);
                    }
                    uVar13 = *puVar37;
                    if (uVar13 == 0) {
                      iVar28 = iVar42 + 0x1e;
                      if (-1 < iVar42 + -1) {
                        iVar28 = iVar42 + -1;
                      }
                      uVar45 = 0;
                      uVar14 = iVar28 >> 5;
                      if (iVar28 >> 5 < 1) {
                        uVar14 = 0;
                      }
                      iVar28 = 0;
                      do {
                        if (uVar14 == uVar45) goto LAB_143a8ff0d;
                        iVar28 = iVar28 + 0x20;
                        uVar13 = puVar37[uVar45 + 1];
                        uVar45 = uVar45 + 1;
                      } while (uVar13 == 0);
                    }
                    else {
                      uVar45 = 0;
                      iVar28 = 0;
                    }
                    puVar38 = (undefined1 *)(ulonglong)(-uVar13 & uVar13);
                    uVar33 = (longlong)puVar38 * 2 + 1;
                    lVar40 = 0x3f;
                    if (uVar33 != 0) {
                      for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                      }
                    }
                    iVar24 = (iVar28 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    if (iVar42 <= iVar24) {
                      iVar24 = iVar42;
                    }
                  }
                  if (iVar24 < iVar42) {
                    uVar13 = 0xffffffff;
                    do {
                      *(undefined4 *)
                       (*(longlong *)(local_250 + 0x240) + 8 + (longlong)iVar24 * 0x28) = 0;
                      uVar13 = ~(uint)puVar38 & uVar13;
                      puVar37 = *(uint **)(local_250 + 0x260);
                      if (*(uint **)(local_250 + 0x260) == (uint *)0x0) {
                        puVar37 = (uint *)(local_250 + 0x250);
                      }
                      iVar42 = *(int *)(local_250 + 0x268);
                      iVar24 = (int)uVar45;
                      lVar40 = (longlong)iVar24;
                      uVar14 = puVar37[lVar40] & uVar13;
                      if (uVar14 == 0) {
                        iVar25 = iVar42 + 0x1e;
                        if (-1 < iVar42 + -1) {
                          iVar25 = iVar42 + -1;
                        }
                        iVar26 = iVar25 >> 5;
                        if (iVar25 >> 5 < iVar24) {
                          iVar26 = iVar24;
                        }
                        lVar32 = 0;
                        do {
                          if (iVar26 - lVar40 == lVar32) goto LAB_143a8ff0d;
                          iVar28 = iVar28 + 0x20;
                          uVar14 = puVar37[lVar32 + lVar40 + 1];
                          lVar32 = lVar32 + 1;
                        } while (uVar14 == 0);
                        uVar45 = (ulonglong)(uint)(iVar24 + (int)lVar32);
                        uVar13 = 0xffffffff;
                      }
                      puVar38 = (undefined1 *)(ulonglong)(-uVar14 & uVar14);
                      uVar33 = (longlong)puVar38 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar33 != 0) {
                        for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar24 = (iVar28 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    } while (iVar24 < iVar42);
                  }
                }
              }
            }
            else if (cVar11 == '\x01') {
              local_258 = CONCAT44(local_258._4_4_,iVar42);
              if (plVar23[0x13] != 0) {
                uVar39 = (uint)*(byte *)(lVar40 + 0x94);
                uVar33 = (ulonglong)*(uint *)(lVar40 + 0x98);
                uVar45 = (ulonglong)*(uint *)(lVar40 + 0x9c);
                puVar38 = (undefined1 *)(ulonglong)*(uint *)(lVar40 + 0xa0);
                if ((*(byte *)(lVar40 + 0x4c) & 8) == 0) {
                  uVar14 = *(uint *)(plVar23 + 4);
                  puVar27 = (uint *)(ulonglong)*(uint *)((longlong)plVar23 + 0x24);
                  uVar43 = (ulonglong)*(uint *)(plVar23 + 5);
                  if (*(byte *)(lVar40 + 0x94) == 0) {
                    uVar14 = *(uint *)((longlong)plVar23 + 0x24) * uVar14 * *(uint *)(plVar23 + 5);
                    uVar43 = 1;
                    uVar39 = 0;
                    puVar27 = (uint *)&DAT_00000001;
                  }
                }
                else {
                  uVar14 = 0;
                  puVar27 = (uint *)0x0;
                  uVar43 = 0;
                  if (plVar23[6] == 0) goto LAB_143a8ff0d;
                }
                goto LAB_143a8f028;
              }
            }
            else {
              if (cVar11 == '\0') {
                local_258 = CONCAT44(local_258._4_4_,iVar42);
                if (!bVar48) {
                  uVar14 = *(uint *)(plVar23[0x10] + (longlong)DAT_14cb41358 * 4);
                }
                uVar45 = 1;
                uVar33 = 0x40;
                uVar39 = 0;
                puVar38 = &DAT_00000001;
                puVar27 = (uint *)&DAT_00000001;
                uVar43 = 1;
                goto LAB_143a8f028;
              }
              FUN_140033559(
                           ".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraGpuComputeDispatch.cpp"
                           );
            }
LAB_143a8ff0d:
            if (local_118 != (uint *)0x0) {
              FUN_1400020a8();
            }
            plVar23 = plVar23 + 0x15;
          } while (plVar23 != plVar22);
          plVar23 = *(longlong **)(local_268 + 0x10);
          uVar34 = *(undefined4 *)(local_268 + 0x18);
        }
        lVar40 = local_1a8;
        puVar37 = local_288;
        local_1a8 = 0;
        uVar8 = (int)uStack_1a0;
        uVar9 = uStack_1a0._4_4_;
        uStack_1a0 = 0;
        FUN_140069376(local_288);
        puVar1 = local_278;
        puVar47 = (undefined8 *)(*(longlong *)(puVar37 + 0x1c) + 7U & 0xfffffffffffffff8);
        puVar18 = puVar47 + 0x3c;
        if (*(undefined8 **)(puVar37 + 0x1e) < puVar18) {
          FUN_140023dd8(local_278,0x1e8);
          puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar47 + 0x3c;
        }
        *local_278 = (ulonglong)puVar18;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c9e1d98) {
          FUN_144b3d300(&DAT_14c9e1d98);
          if (DAT_14c9e1d98 == -1) {
            FUN_14596f92a(&local_c8);
            local_2a0 = 0;
            local_2b0 = 0;
            local_2d0 = "Unknown";
            local_2e0 = 0;
            uStack_2d8 = 0;
            local_2e8 = L"FEmptyShaderParameters";
            local_2a8 = 0;
            local_2c0 = 0x10;
            local_2c8 = 0x7a6;
            local_2b8 = &local_c8;
            FUN_140b49562(&DAT_14c9e1d18,0,1);
            if (local_c8 != (uint *)0x0) {
              FUN_1400020a8();
            }
            atexit((_func_5014 *)&LAB_143a9caed);
            _Init_thread_footer(&DAT_14c9e1d98);
          }
        }
        local_c8 = (uint *)&DAT_14cb3f040;
        uStack_c0 = DAT_14c9e1d60;
        if (DAT_14c9e1d60 != 0) {
          LOCK();
          *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
          UNLOCK();
        }
        local_b8 = &DAT_14c9e1d18;
        local_2e8 = (wchar_t *)CONCAT71(local_2e8._1_7_,1);
        FUN_140068f1a(puVar47,&local_118,&local_c8,0x10);
        puVar37 = local_288;
        puVar47[0x37] = local_290;
        puVar47[0x38] = lVar40;
        *(undefined4 *)(puVar47 + 0x39) = uVar8;
        *(undefined4 *)((longlong)puVar47 + 0x1cc) = uVar9;
        puVar47[0x3a] = plVar23;
        *(undefined4 *)(puVar47 + 0x3b) = uVar34;
        *puVar47 = &PTR_FUN_14adff6f0;
        uVar13 = local_288[0x5c];
        local_288[0x5c] = uVar13 + 1;
        if (local_288[0x5d] < uVar13 + 1) {
          FUN_14470e57a(local_230,uVar13);
        }
        *(undefined8 **)(*(longlong *)(puVar37 + 0x5a) + (longlong)(int)uVar13 * 8) = puVar47;
        *(uint *)((longlong)puVar47 + 0x2c) = puVar37[0x5c] - 1;
        FUN_143204634(puVar37,puVar47);
        FUN_144705e08(0,0);
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0._0_4_ = 0;
        local_c8 = (uint *)0x0;
        uStack_c0 = 0;
        uStack_a0._4_4_ = 0x80;
        uStack_98 = 0xffffffff;
        uStack_94 = 0;
        puStack_88 = (undefined1 *)0x0;
        local_80 = local_80 & 0xffffffff00000000;
        lVar40 = local_268;
        if ((longlong)*(int *)(local_268 + 0x18) != 0) {
          plVar23 = *(longlong **)(local_268 + 0x10);
          plVar22 = plVar23 + (longlong)*(int *)(local_268 + 0x18) * 0x15;
          uVar45 = local_290;
          do {
            ppuVar20 = (undefined **)(plVar23 + 2);
            uVar33 = plVar23[1];
            uVar13 = *(uint *)(uVar33 + 0xd8);
            if ((ulonglong)uVar13 != 0) {
              puVar19 = (undefined *)*plVar23;
              FUN_144a93ae8(*(undefined8 *)(*(longlong *)(uVar33 + 200) + 0x60),&local_158,0);
              piVar4 = *(int **)(local_158 + 0x3a);
              piVar35 = (int *)((longlong)local_158 + ((longlong)piVar4 >> 0x18) + 0xe8);
              if (((ulonglong)piVar4 & 1) == 0) {
                piVar35 = piVar4;
              }
              local_118 = local_288;
              local_108 = puVar19;
              local_100 = uVar33;
              local_f8 = ppuVar20;
              local_f0 = 0;
              uStack_ec = 0;
              uStack_110 = uVar45;
              if (0 < (int)uVar13) {
                uVar45 = 0;
                do {
                  if (*piVar35 != -1) {
                    plVar41 = *(longlong **)(*(longlong *)(uVar33 + 0xd0) + uVar45 * 8);
                    local_f0 = (int)plVar41;
                    uStack_ec = (uint)((ulonglong)plVar41 >> 0x20);
                    local_128[0] = plVar41;
                    (**(code **)(*plVar41 + 0x28))(plVar41,&local_118);
                    cVar11 = (**(code **)(*plVar41 + 0x48))(plVar41);
                    if (cVar11 != '\0') {
                      FUN_1481cc630(&local_c8,&local_160);
                    }
                  }
                  uVar45 = uVar45 + 1;
                  piVar35 = piVar35 + 6;
                } while (uVar13 != uVar45);
              }
              uVar33 = plVar23[1];
              uVar45 = local_290;
            }
            if (((ulonglong)*ppuVar20 & 2) != 0) {
              uVar13 = *(uint *)(uVar33 + 0xd8);
              if ((ulonglong)uVar13 != 0) {
                lVar40 = *plVar23;
                FUN_144a93ae8(*(undefined8 *)(*(longlong *)(uVar33 + 200) + 0x60),&local_158,0);
                piVar4 = *(int **)(local_158 + 0x3a);
                piVar35 = (int *)((longlong)local_158 + ((longlong)piVar4 >> 0x18) + 0xe8);
                if (((ulonglong)piVar4 & 1) == 0) {
                  piVar35 = piVar4;
                }
                local_118 = local_288;
                local_108 = *(undefined **)(lVar40 + 0x10);
                local_100 = CONCAT71(local_100._1_7_,*(byte *)(plVar23 + 2) >> 2) &
                            0xffffffffffffff01;
                uStack_110 = uVar45;
                if (0 < (int)uVar13) {
                  uVar43 = 0;
                  do {
                    if (*piVar35 != -1) {
                      plVar41 = *(longlong **)(*(longlong *)(uVar33 + 0xd0) + uVar43 * 8);
                      (**(code **)(*plVar41 + 0x30))(plVar41,&local_118);
                    }
                    uVar43 = uVar43 + 1;
                    piVar35 = piVar35 + 6;
                  } while (uVar13 != uVar43);
                }
                uVar33 = plVar23[1];
              }
            }
            lVar40 = *(longlong *)(uVar33 + 200);
            lVar32 = plVar23[0xd];
            if (lVar32 == 0) {
              lVar32 = plVar23[8];
            }
            if (((ulonglong)*ppuVar20 & 4) == 0) {
              *(longlong *)(*(longlong *)(lVar40 + 0x50) + 0x78) = lVar32;
            }
            else {
              lVar44 = *(longlong *)(lVar40 + 0x220);
              *(undefined8 *)(lVar40 + 0x220) = 0;
              *(longlong *)(*(longlong *)(lVar40 + 0x50) + 0x78) = lVar44;
              FUN_144b352c2(lVar44,lVar32);
              puVar37 = local_288;
              lVar31 = *(longlong *)(lVar40 + 0x128);
              if (lVar31 != 0) {
                *(undefined8 *)(lVar40 + 0x128) = 0;
                LOCK();
                piVar4 = (int *)(lVar31 + 8);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
              }
              lVar31 = *(longlong *)(lVar40 + 0x120);
              if (lVar31 != lVar44) {
                *(longlong *)(lVar40 + 0x120) = lVar44;
                if (lVar44 != 0) {
                  LOCK();
                  *(int *)(lVar44 + 8) = *(int *)(lVar44 + 8) + 1;
                  UNLOCK();
                }
                if (lVar31 != 0) {
                  LOCK();
                  *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + -1;
                  UNLOCK();
                }
              }
              lVar31 = *(longlong *)(lVar40 + 0x128);
              if (lVar31 != 0) {
                *(undefined8 *)(lVar40 + 0x128) = 0;
                LOCK();
                piVar4 = (int *)(lVar31 + 8);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
              }
              if (*(char *)(uVar45 + 0x388) == '\x01') {
                FUN_1481c816a(uVar45,*(undefined8 *)(local_288 + 6),*(undefined8 *)(lVar44 + 0x60));
                FUN_1481c816a(uVar45,*(undefined8 *)(puVar37 + 6),*(undefined8 *)(lVar44 + 0xf0));
                FUN_1481c816a(uVar45,*(undefined8 *)(puVar37 + 6));
              }
              if (*(char *)(uVar45 + 0x1d2) == '\x01') {
                *(undefined4 *)(lVar44 + 0x58) = 0;
              }
              else {
                lVar31 = *(longlong *)(lVar40 + 0x130);
                if (lVar31 != lVar32) {
                  *(longlong *)(lVar40 + 0x130) = lVar32;
                  if (lVar32 != 0) {
                    LOCK();
                    *(int *)(lVar32 + 8) = *(int *)(lVar32 + 8) + 1;
                    UNLOCK();
                  }
                  if (lVar31 != 0) {
                    LOCK();
                    *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + -1;
                    UNLOCK();
                  }
                }
                iVar42 = *(int *)(uVar45 + 0x380);
                *(uint *)(uVar45 + 0x380) = iVar42 + 1U;
                if (*(uint *)(uVar45 + 900) < iVar42 + 1U) {
                  FUN_141833ad6(local_1f0,iVar42);
                }
                *(longlong *)(*local_1f0 + (longlong)iVar42 * 8) = lVar40;
                *(undefined4 *)(lVar44 + 0x58) = 2;
              }
            }
            iVar42 = (int)uStack_a0;
            plVar23 = plVar23 + 0x15;
          } while (plVar23 != plVar22);
          lVar40 = local_268;
          if ((int)uStack_a0 != 0) {
            ppuVar20 = (undefined **)CONCAT44(uStack_a4,uStack_a8);
            if ((undefined **)CONCAT44(uStack_a4,uStack_a8) == (undefined **)0x0) {
              ppuVar20 = &local_b8;
            }
            uVar13 = *(uint *)ppuVar20;
            if (uVar13 == 0) {
              iVar28 = (int)uStack_a0 + 0x1e;
              if (-1 < (int)uStack_a0 + -1) {
                iVar28 = (int)uStack_a0 + -1;
              }
              uVar45 = 0;
              uVar33 = (ulonglong)(uint)(iVar28 >> 5);
              if (iVar28 >> 5 < 1) {
                uVar33 = uVar45;
              }
              iVar28 = 0;
              do {
                if (uVar33 == uVar45) goto LAB_143a90a59;
                iVar28 = iVar28 + 0x20;
                uVar13 = *(uint *)((longlong)ppuVar20 + (uVar45 + 1) * 4);
                uVar45 = uVar45 + 1;
              } while (uVar13 == 0);
            }
            else {
              uVar45 = 0;
              iVar28 = 0;
            }
            uVar43 = (ulonglong)(-uVar13 & uVar13);
            uVar33 = uVar43 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar33 != 0) {
              for (; uVar33 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            iVar24 = (iVar28 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
            if (iVar24 < (int)uStack_a0) {
              uVar13 = 0xffffffff;
              do {
                (**(code **)(**(longlong **)(local_c8 + (longlong)iVar24 * 4) + 0x50))
                          (*(longlong **)(local_c8 + (longlong)iVar24 * 4),local_288,local_290);
                uVar13 = ~(uint)uVar43 & uVar13;
                ppuVar20 = (undefined **)CONCAT44(uStack_a4,uStack_a8);
                if ((undefined **)CONCAT44(uStack_a4,uStack_a8) == (undefined **)0x0) {
                  ppuVar20 = &local_b8;
                }
                iVar24 = (int)uVar45;
                lVar32 = (longlong)iVar24;
                uVar14 = *(uint *)((longlong)ppuVar20 + lVar32 * 4) & uVar13;
                if (uVar14 == 0) {
                  iVar25 = (int)uStack_a0 + 0x1e;
                  if (-1 < (int)uStack_a0 + -1) {
                    iVar25 = (int)uStack_a0 + -1;
                  }
                  iVar25 = iVar25 >> 5;
                  iVar28 = iVar28 + 0x20;
                  iVar26 = iVar25;
                  if (iVar25 < iVar24) {
                    iVar26 = iVar24;
                  }
                  if (iVar24 < iVar25) {
                    lVar44 = 0;
                    do {
                      uVar14 = *(uint *)((longlong)ppuVar20 + lVar44 * 4 + lVar32 * 4 + 4);
                      if (uVar14 != 0) {
                        uVar45 = (ulonglong)(iVar24 + (int)lVar44 + 1);
                        uVar13 = 0xffffffff;
                        goto LAB_143a90a05;
                      }
                      iVar28 = iVar28 + 0x20;
                      lVar44 = lVar44 + 1;
                    } while (iVar26 - lVar32 != lVar44);
                    uVar13 = 0xffffffff;
                    lVar32 = (longlong)iVar26;
                  }
                  uVar45 = lVar32 + 1U & 0xffffffff;
                  lVar40 = local_268;
                  iVar24 = (int)uStack_a0;
                }
                else {
LAB_143a90a05:
                  uVar43 = (ulonglong)(-uVar14 & uVar14);
                  uVar33 = uVar43 * 2 + 1;
                  lVar32 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                    }
                  }
                  iVar24 = (iVar28 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
                  if ((int)uStack_a0 <= iVar24) {
                    iVar24 = (int)uStack_a0;
                  }
                }
              } while (iVar24 != iVar42);
            }
          }
        }
LAB_143a90a59:
        puVar37 = local_288;
        uVar45 = local_290;
        if (0 < (longlong)*(int *)(lVar40 + 0x28)) {
          plVar23 = *(longlong **)(lVar40 + 0x20);
          plVar22 = plVar23 + (longlong)*(int *)(lVar40 + 0x28) * 4;
          do {
            lVar32 = *(longlong *)(*plVar23 + 0x50);
            plVar23[1] = *(longlong *)(*(longlong *)(lVar32 + 0x78) + 0xd0);
            plVar23[2] = *(longlong *)(lVar32 + 0x48);
            *(undefined4 *)(plVar23 + 3) = *(undefined4 *)(lVar32 + 0x70);
            plVar23 = plVar23 + 4;
          } while (plVar23 != plVar22);
          uVar17 = *(undefined8 *)(lVar40 + 0x20);
          uVar34 = *(undefined4 *)(lVar40 + 0x28);
          FUN_140069376(local_288);
          puVar1 = local_278;
          puVar47 = (undefined8 *)(*(longlong *)(puVar37 + 0x1c) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar47 + 0x3a;
          if (*(undefined8 **)(puVar37 + 0x1e) < puVar18) {
            FUN_140023dd8(local_278,0x1d8);
            puVar47 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar47 + 0x3a;
          }
          *local_278 = (ulonglong)puVar18;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9e1d98) && (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
            FUN_14596f92a(&local_118);
            local_2a0 = 0;
            local_2b0 = 0;
            local_2d0 = "Unknown";
            local_2e0 = 0;
            uStack_2d8 = 0;
            local_2e8 = L"FEmptyShaderParameters";
            local_2a8 = 0;
            local_2c0 = 0x10;
            local_2c8 = 0x7a6;
            local_2b8 = &local_118;
            FUN_140b49562(&DAT_14c9e1d18,0,1);
            if (local_118 != (uint *)0x0) {
              FUN_1400020a8();
            }
            atexit((_func_5014 *)&LAB_143a9caed);
            _Init_thread_footer(&DAT_14c9e1d98);
            uVar45 = local_290;
            lVar40 = local_268;
          }
          local_118 = (uint *)&DAT_14cb3f050;
          uStack_110 = DAT_14c9e1d60;
          if (DAT_14c9e1d60 != 0) {
            LOCK();
            *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
            UNLOCK();
          }
          local_108 = &DAT_14c9e1d18;
          local_2e8 = (wchar_t *)CONCAT71(local_2e8._1_7_,1);
          FUN_140068f1a(puVar47,&local_158,&local_118,0x10);
          puVar37 = local_288;
          puVar47[0x37] = uVar45;
          puVar47[0x38] = uVar17;
          *(undefined4 *)(puVar47 + 0x39) = uVar34;
          *puVar47 = &PTR_FUN_14adff730;
          uVar13 = local_288[0x5c];
          local_288[0x5c] = uVar13 + 1;
          if (local_288[0x5d] < uVar13 + 1) {
            FUN_14470e57a(local_230,uVar13);
          }
          *(undefined8 **)(*(longlong *)(puVar37 + 0x5a) + (longlong)(int)uVar13 * 8) = puVar47;
          *(uint *)((longlong)puVar47 + 0x2c) = puVar37[0x5c] - 1;
          FUN_143204634(puVar37,puVar47);
        }
        param_2 = local_288;
        local_80 = local_80 & 0xffffffff00000000;
        if (puStack_88 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar33 = uStack_c0 >> 0x20;
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
        if ((int)uVar33 != 0) {
          FUN_14474875a(&local_c8,0);
        }
        uStack_98 = 0xffffffff;
        uStack_94 = 0;
        uStack_a0._0_4_ = 0;
        if (0x80 < uStack_a0._4_4_) {
          uStack_a0._4_4_ = 0x80;
          FUN_1446efbd8(&local_b8,0);
        }
        if (CONCAT44(uStack_a4,uStack_a8) != 0) {
          FUN_1400020a8();
        }
        if (local_c8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
        FUN_144705e08(local_1a8,uStack_1a0 & 0xffffffff);
        if (local_1a8 != 0) {
          FUN_1400020a8();
        }
        FUN_144705e08(local_198,uStack_190 & 0xffffffff);
        if (local_198 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar40 = lVar40 + 0x30;
      } while (lVar40 != local_1e0);
    }
    uVar13 = param_2[0x184];
    param_2[0x184] = uVar13 + 1;
    if (param_2[0x185] < uVar13 + 1) {
      FUN_140184790(param_2 + 0x182,uVar13);
    }
    lVar40 = *(longlong *)(param_2 + 0x182);
    lVar32 = (longlong)(int)uVar13 * 0x40;
    *(code **)(lVar40 + lVar32) = FUN_143a9ddf6;
    *(undefined8 *)(lVar40 + 0x10 + lVar32) = 0;
    *(undefined ***)(lVar40 + 0x20 + lVar32) = &PTR_LAB_14adff750;
    *(longlong *)(lVar40 + 0x28 + lVar32) = local_228;
    *(undefined1 *)(uVar45 + 0x228) = 0;
    *(undefined8 *)(uVar45 + 0x1c0) = 0;
    *(undefined8 *)(uVar45 + 0x1c8) = 0;
    *(undefined8 *)(uVar45 + 0x800) = 0;
    *(undefined8 *)(uVar45 + 0x7f0) = 0;
    *(undefined8 *)(uVar45 + 0x7f8) = 0;
    if ((longlong)*(int *)(uVar45 + 0x260) != 0) {
      plVar23 = *(longlong **)(local_290 + 600);
      plVar22 = plVar23 + (longlong)*(int *)(uVar45 + 0x260) * 2;
      puVar37 = local_288 + 0x166;
      do {
        bVar12 = 1;
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14ca84e6a == '\x01' &&
            (bVar12 = *(byte *)((longlong)plVar23 + 0xc) & 3, DAT_14ca84e99 != '\0')))) {
          bVar12 = 1;
        }
        lVar40 = *plVar23;
        if ((*(byte *)(lVar40 + 0x20) & 0xc) == 0) {
          lVar32 = plVar23[1];
          if ((*(byte *)(lVar40 + 0x20) & 0x10) != 0) {
            FUN_140069376(local_288);
          }
          uVar13 = local_288[0x168];
          local_288[0x168] = uVar13 + 1;
          if (local_288[0x169] < uVar13 + 1) {
            FUN_1400f155a(puVar37,uVar13);
          }
          *(longlong *)(*(longlong *)puVar37 + (longlong)(int)uVar13 * 8) = lVar40;
          *(int *)(lVar40 + 0x1c) = (int)lVar32;
          *(byte *)(lVar40 + 0x20) = bVar12 | *(byte *)(lVar40 + 0x20) & 0xe8 | 0x14;
          *(int *)(lVar40 + 0x58) = (int)lVar32;
        }
        plVar23 = plVar23 + 2;
      } while (plVar23 != plVar22);
    }
    *(undefined4 *)(local_290 + 0x260) = 0;
    if (*(int *)(local_290 + 0x264) != 0) {
      FUN_1400f146c(local_290 + 600,0);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a91342 FUN_143a91342 body=11519 status=ok
// SIG undefined FUN_143a91342(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143a91342(longlong *******param_1,longlong param_2,char param_3,longlong ******param_4,
                  longlong ****param_5)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  longlong *****ppppplVar5;
  longlong ***ppplVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong ******pppppplVar12;
  longlong *******ppppppplVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  void *_Dst;
  longlong ******pppppplVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong ******pppppplVar20;
  longlong lVar21;
  longlong *****ppppplVar22;
  longlong ****pppplVar23;
  int iVar24;
  int iVar25;
  longlong *****ppppplVar26;
  longlong *****ppppplVar27;
  longlong ****pppplVar28;
  size_t sVar29;
  byte bVar30;
  longlong ****pppplVar31;
  longlong *******ppppppplVar32;
  longlong *******ppppppplVar33;
  uint uVar34;
  int iVar35;
  longlong ******pppppplVar36;
  longlong ******pppppplVar37;
  ulonglong uVar38;
  int iVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong ******pppppplVar42;
  longlong *******ppppppplVar43;
  uint uVar44;
  longlong lVar45;
  longlong *****ppppplVar46;
  undefined4 uVar47;
  longlong lVar48;
  longlong **pplVar49;
  longlong *******ppppppplVar50;
  bool bVar51;
  bool bVar52;
  float fVar53;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined8 local_468;
  longlong *******local_458;
  longlong *******local_450;
  char local_441;
  longlong *******local_440;
  uint local_434;
  longlong ******local_430;
  ulonglong local_428;
  uint local_41c;
  longlong *****local_418;
  longlong *******local_410;
  uint local_408;
  uint local_404;
  longlong *******local_400;
  longlong ****local_3f8;
  uint local_3ec;
  longlong local_3e8;
  longlong ****local_3e0;
  undefined8 local_3d8;
  size_t local_3d0;
  undefined4 local_3c4;
  longlong local_3c0;
  char *local_3b8;
  longlong ****local_3b0;
  ulonglong local_3a8;
  longlong *******local_3a0;
  longlong ******local_398;
  longlong ******local_390;
  ulonglong local_388;
  ulonglong local_380;
  longlong ****local_378;
  longlong ****local_370;
  longlong *******local_368;
  longlong *******local_360;
  longlong *******local_358;
  longlong ****local_350;
  longlong ****local_348;
  longlong *****local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  int local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  longlong *****local_318;
  longlong ******local_310;
  int local_308;
  longlong *******local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  longlong *****ppppplStack_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [4];
  undefined8 uStack_2c4;
  longlong *******local_2b8;
  ulonglong uStack_2b0;
  longlong ******local_2a8;
  undefined1 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined8 local_288 [64];
  longlong *******local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  pppppplVar36 = param_4;
  local_441 = param_3;
  FUN_142bc9066(param_1 + 0x3b);
  if (param_5 == (longlong ****)0x0) {
    *(undefined1 *)((longlong)param_1 + 0x1d1) = 1;
    bVar51 = true;
    bVar52 = true;
  }
  else {
    bVar51 = **param_4 == param_5;
    *(bool *)((longlong)param_1 + 0x1d1) = bVar51;
    bVar52 = (*param_4)[*(int *)(param_4 + 1) + -1] == param_5;
  }
  local_3b8 = (char *)((longlong)param_1 + 0x1d1);
  *(bool *)((longlong)param_1 + 0x1d2) = bVar52;
  *(undefined1 *)((longlong)param_1 + 0x2c1) = 0;
  *(bool *)(param_1 + 0x71) = 1 < DAT_14c760da4;
  if (bVar51) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  iVar35 = *(int *)(param_4 + 1);
  local_450 = param_1;
  if (1 < (longlong)iVar35) {
    if ((bool)(DAT_14c7628e8 != 0 & bVar51)) {
      pppppplVar36 = (longlong ******)*param_4;
      ppppplVar5 = *pppppplVar36;
      pppppplVar17 = pppppplVar36 + iVar35;
      uVar34 = *(uint *)(*ppppplVar5[1] + 0x3bc);
      do {
        pppplVar31 = (*pppppplVar36)[1];
        uVar44 = *(uint *)(*pppplVar31 + 0x3bc);
        if ((uVar44 & uVar44 - 1) != 0) goto LAB_143a914d2;
        lVar21 = (longlong)*(int *)(*pppppplVar36 + 2);
        if (lVar21 != 0) {
          lVar45 = 0;
          do {
            if (*(uint *)(*(longlong *)((longlong)pppplVar31 + lVar45) + 0x1de0) != uVar44)
            goto LAB_143a914d2;
            lVar45 = lVar45 + 8;
          } while (lVar21 * 8 != lVar45);
        }
        uVar34 = uVar34 | uVar44;
        pppppplVar36 = pppppplVar36 + 1;
      } while (pppppplVar36 != pppppplVar17);
      uVar44 = 0;
      if (DAT_14ca81480 == 0) {
        uVar44 = uVar34 & ~*(uint *)(*ppppplVar5[1] + 0x3bc);
      }
      *(uint *)(param_1 + 0x74) = uVar44;
      iVar35 = *(int *)(param_4 + 1);
    }
LAB_143a914d2:
    if (bVar51 && 1 < iVar35) {
      FUN_1481c8306(param_1 + 7);
    }
  }
  pppppplVar20 = local_450[6];
  pppppplVar17 = pppppplVar20 + 0x3e;
  iVar35 = *(int *)(pppppplVar20 + 0x47);
  if (iVar35 < 2) {
    pppppplVar12 = pppppplVar20 + 0x45;
    if ((longlong ******)pppppplVar20[0x46] != (longlong ******)0x0) {
      pppppplVar12 = (longlong ******)pppppplVar20[0x46];
    }
    iVar8 = iVar35 + 3;
    if (-1 < iVar35) {
      iVar8 = iVar35;
    }
    if (*(int *)(pppppplVar20 + 0x3f) - *(int *)((longlong)pppppplVar20 + 0x224) < iVar8 >> 2) {
      iVar35 = *(int *)(pppppplVar20 + 0x43);
      if (iVar35 != 0) {
        pppppplVar37 = (longlong ******)pppppplVar20[0x42];
        if ((longlong ******)pppppplVar20[0x42] == (longlong ******)0x0) {
          pppppplVar37 = pppppplVar20 + 0x40;
        }
        uVar34 = *(uint *)pppppplVar37;
        if (uVar34 == 0) {
          iVar8 = iVar35 + 0x1e;
          if (-1 < iVar35 + -1) {
            iVar8 = iVar35 + -1;
          }
          pppppplVar36 = (longlong ******)0x0;
          pppppplVar42 = (longlong ******)(ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            pppppplVar42 = pppppplVar36;
          }
          iVar8 = 0;
          do {
            if (pppppplVar42 == pppppplVar36) goto LAB_143a91542;
            iVar8 = iVar8 + 0x20;
            uVar34 = *(uint *)((longlong)pppppplVar37 + ((longlong)pppppplVar36 + 1) * 4);
            pppppplVar36 = (longlong ******)((longlong)pppppplVar36 + 1);
          } while (uVar34 == 0);
        }
        else {
          iVar8 = 0;
          pppppplVar36 = (longlong ******)0x0;
        }
        uVar38 = (ulonglong)(-uVar34 & uVar34);
        uVar40 = uVar38 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar39 = (iVar8 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar39 < iVar35) {
          uVar34 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)pppppplVar12 +
             (longlong)*(int *)((longlong)pppppplVar20[0x3e] + (longlong)iVar39 * 0x28 + 0x24) * 4)
                 = 0xffffffff;
            uVar34 = ~(uint)uVar38 & uVar34;
            pppppplVar37 = (longlong ******)pppppplVar20[0x42];
            if ((longlong ******)pppppplVar20[0x42] == (longlong ******)0x0) {
              pppppplVar37 = pppppplVar20 + 0x40;
            }
            iVar4 = *(int *)(pppppplVar20 + 0x43);
            iVar39 = (int)pppppplVar36;
            lVar21 = (longlong)iVar39;
            uVar44 = *(uint *)((longlong)pppppplVar37 + lVar21 * 4) & uVar34;
            if (uVar44 == 0) {
              iVar25 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar25 = iVar4 + -1;
              }
              iVar25 = iVar25 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar24 = iVar25;
              if (iVar25 < iVar39) {
                iVar24 = iVar39;
              }
              if (iVar39 < iVar25) {
                lVar45 = 0;
                do {
                  uVar44 = *(uint *)((longlong)pppppplVar37 + (lVar21 + lVar45 + 1) * 4);
                  if (uVar44 != 0) {
                    pppppplVar36 = (longlong ******)(ulonglong)(iVar39 + (int)lVar45 + 1);
                    uVar34 = 0xffffffff;
                    goto LAB_143a93aaf;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar45 = lVar45 + 1;
                } while (iVar24 - lVar21 != lVar45);
                uVar34 = 0xffffffff;
                lVar21 = (longlong)iVar24;
              }
              pppppplVar36 = (longlong ******)(lVar21 + 1U & 0xffffffff);
              iVar39 = iVar4;
            }
            else {
LAB_143a93aaf:
              uVar38 = (ulonglong)(-uVar44 & uVar44);
              uVar40 = uVar38 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar39 = (iVar8 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar39) {
                iVar39 = iVar4;
              }
            }
          } while (iVar39 != iVar35);
        }
      }
    }
    else if (iVar35 == 1) {
      lVar21 = 0;
      do {
        *(undefined4 *)((longlong)pppppplVar12 + lVar21 * 4) = 0xffffffff;
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(pppppplVar20 + 0x47));
    }
LAB_143a91542:
    FUN_1407f19c4(pppppplVar17);
  }
  else {
    FUN_1407f19c4(pppppplVar17);
    *(undefined4 *)(pppppplVar20 + 0x47) = 1;
    FUN_1481cb44c(pppppplVar17);
  }
  pppppplVar17 = pppppplVar20 + 0x48;
  iVar35 = *(int *)(pppppplVar20 + 0x51);
  if (iVar35 < 2) {
    pppppplVar12 = pppppplVar20 + 0x4f;
    if ((longlong ******)pppppplVar20[0x50] != (longlong ******)0x0) {
      pppppplVar12 = (longlong ******)pppppplVar20[0x50];
    }
    iVar8 = iVar35 + 3;
    if (-1 < iVar35) {
      iVar8 = iVar35;
    }
    if (*(int *)(pppppplVar20 + 0x49) - *(int *)((longlong)pppppplVar20 + 0x274) < iVar8 >> 2) {
      iVar35 = *(int *)(pppppplVar20 + 0x4d);
      if (iVar35 != 0) {
        pppppplVar37 = (longlong ******)pppppplVar20[0x4c];
        if ((longlong ******)pppppplVar20[0x4c] == (longlong ******)0x0) {
          pppppplVar37 = pppppplVar20 + 0x4a;
        }
        uVar34 = *(uint *)pppppplVar37;
        if (uVar34 == 0) {
          iVar8 = iVar35 + 0x1e;
          if (-1 < iVar35 + -1) {
            iVar8 = iVar35 + -1;
          }
          pppppplVar36 = (longlong ******)0x0;
          pppppplVar42 = (longlong ******)(ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            pppppplVar42 = pppppplVar36;
          }
          iVar8 = 0;
          do {
            if (pppppplVar42 == pppppplVar36) goto LAB_143a915a1;
            iVar8 = iVar8 + 0x20;
            uVar34 = *(uint *)((longlong)pppppplVar37 + ((longlong)pppppplVar36 + 1) * 4);
            pppppplVar36 = (longlong ******)((longlong)pppppplVar36 + 1);
          } while (uVar34 == 0);
        }
        else {
          pppppplVar36 = (longlong ******)0x0;
          iVar8 = 0;
        }
        uVar38 = (ulonglong)(-uVar34 & uVar34);
        uVar40 = uVar38 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar39 = (iVar8 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar39 < iVar35) {
          uVar34 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)pppppplVar12 +
             (longlong)*(int *)((longlong)pppppplVar20[0x48] + (longlong)iVar39 * 0x28 + 0x24) * 4)
                 = 0xffffffff;
            uVar34 = ~(uint)uVar38 & uVar34;
            pppppplVar37 = (longlong ******)pppppplVar20[0x4c];
            if ((longlong ******)pppppplVar20[0x4c] == (longlong ******)0x0) {
              pppppplVar37 = pppppplVar20 + 0x4a;
            }
            iVar4 = *(int *)(pppppplVar20 + 0x4d);
            iVar39 = (int)pppppplVar36;
            lVar21 = (longlong)iVar39;
            uVar44 = *(uint *)((longlong)pppppplVar37 + lVar21 * 4) & uVar34;
            if (uVar44 == 0) {
              iVar25 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar25 = iVar4 + -1;
              }
              iVar25 = iVar25 >> 5;
              iVar8 = iVar8 + 0x20;
              iVar24 = iVar25;
              if (iVar25 < iVar39) {
                iVar24 = iVar39;
              }
              if (iVar39 < iVar25) {
                lVar45 = 0;
                do {
                  uVar44 = *(uint *)((longlong)pppppplVar37 + (lVar21 + lVar45 + 1) * 4);
                  if (uVar44 != 0) {
                    pppppplVar36 = (longlong ******)(ulonglong)(iVar39 + (int)lVar45 + 1);
                    uVar34 = 0xffffffff;
                    goto LAB_143a93bd0;
                  }
                  iVar8 = iVar8 + 0x20;
                  lVar45 = lVar45 + 1;
                } while (iVar24 - lVar21 != lVar45);
                uVar34 = 0xffffffff;
                lVar21 = (longlong)iVar24;
              }
              pppppplVar36 = (longlong ******)(lVar21 + 1U & 0xffffffff);
              iVar39 = iVar4;
            }
            else {
LAB_143a93bd0:
              uVar38 = (ulonglong)(-uVar44 & uVar44);
              uVar40 = uVar38 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar40 != 0) {
                for (; uVar40 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar39 = (iVar8 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar39) {
                iVar39 = iVar4;
              }
            }
          } while (iVar39 != iVar35);
        }
      }
    }
    else if (iVar35 == 1) {
      lVar21 = 0;
      do {
        *(undefined4 *)((longlong)pppppplVar12 + lVar21 * 4) = 0xffffffff;
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(pppppplVar20 + 0x51));
    }
LAB_143a915a1:
    FUN_1407f1868(pppppplVar17);
  }
  else {
    FUN_1407f1868(pppppplVar17);
    *(undefined4 *)(pppppplVar20 + 0x51) = 1;
    FUN_1481cb5e8(pppppplVar17);
  }
  ppppppplVar50 = local_450;
  FUN_143a96556(local_450[5]);
  if (*(char *)(ppppppplVar50 + 0x3a) == '\0') {
    memset(&local_2b8,0,0x240);
    lVar21 = 0x3c;
    do {
      *(undefined8 *)((longlong)&uStack_2c4 + lVar21) = 0;
      *(undefined8 *)(&stack0xfffffffffffffd44 + lVar21) = 0x3f80000000000000;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x9c);
    lVar21 = 0x9c;
    do {
      *(undefined8 *)((longlong)&uStack_2c4 + lVar21) = 0;
      *(undefined8 *)(&stack0xfffffffffffffd44 + lVar21) = 0x3f80000000000000;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0xfc);
    lVar21 = 0xfc;
    do {
      *(undefined8 *)((longlong)&uStack_2c4 + lVar21) = 0;
      *(undefined8 *)(&stack0xfffffffffffffd44 + lVar21) = 0x3f80000000000000;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x15c);
    lVar21 = 0x15c;
    do {
      *(undefined8 *)((longlong)&uStack_2c4 + lVar21) = 0;
      *(undefined8 *)(&stack0xfffffffffffffd44 + lVar21) = 0x3f80000000000000;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x1bc);
    memset(local_288,0,0x210);
    ppppppplVar50 = local_450;
    FUN_143a94042(local_450 + 0xb6,&local_2b8);
    FUN_143a8ba88(&local_2b8);
  }
  *(undefined4 *)(ppppppplVar50 + 0x57) = 0;
  iVar35 = *(int *)((longlong)ppppppplVar50 + 0x244);
  FUN_144aef1bc(ppppppplVar50[0x47],*(undefined4 *)(ppppppplVar50 + 0x48));
  *(undefined4 *)(local_450 + 0x48) = 0;
  if ((iVar35 < 0) && (*(int *)((longlong)local_450 + 0x244) != 0)) {
    FUN_1481cc600(local_450 + 0x47);
  }
  ppppppplVar50 = local_450;
  if (((DAT_14c7627fc == 0) || (DAT_14c7627f8 == 0)) || (DAT_14ca84d96 != '\x01')) {
    FUN_143a8d702(local_450 + 7,*(undefined8 *)(param_2 + 0x18),0);
    FUN_14480a1ec(ppppppplVar50);
  }
  else {
    if (local_441 == '\0') goto LAB_143a93698;
    *(undefined4 *)(local_450 + 0x4a) = 0;
    if (0 < *(int *)(local_450 + 0x60)) {
      ppppppplVar33 = local_450 + 0x5f;
      uVar34 = 0;
      do {
        ppppppplVar50 = local_450;
        pppppplVar17 = *ppppppplVar33 + (ulonglong)uVar34 * 2;
        ppppplVar5 = (*ppppppplVar33)[(ulonglong)uVar34 * 2 + 1];
        if ((ppppplVar5 == (longlong *****)0x0) || (*(int *)(ppppplVar5 + 1) != 1)) {
          FUN_143a04b16(*pppppplVar17,local_450,*(undefined8 *)(param_2 + 0x18));
        }
        else {
          FUN_14811423e(*pppppplVar17,local_450);
          FUN_1481cc464(ppppppplVar33,uVar34);
          FUN_1481cc426(ppppppplVar33);
          uVar34 = uVar34 - 1;
        }
        uVar34 = uVar34 + 1;
      } while ((int)uVar34 < *(int *)(ppppppplVar50 + 0x60));
    }
    ppppppplVar33 = local_450;
    lVar21 = *(longlong *)(param_2 + 0x18);
    ppppppplVar43 = ppppppplVar50 + 0x59;
    lVar45 = 0;
    iVar35 = 0;
    do {
      if ((longlong)*(int *)(ppppppplVar50 + lVar45 * 2 + 0x5a) != 0) {
        pppppplVar20 = ppppppplVar43[lVar45 * 2];
        pppppplVar17 = pppppplVar20 + *(int *)(ppppppplVar50 + lVar45 * 2 + 0x5a);
        do {
          pppppplVar36 = (longlong ******)*pppppplVar20;
          uVar34 = *(uint *)((longlong)local_450 + 700);
          if ((int)*(uint *)(pppppplVar36 + 0xb) < (int)*(uint *)((longlong)local_450 + 700)) {
            uVar34 = *(uint *)(pppppplVar36 + 0xb);
          }
          if (0 < (int)uVar34) {
            uVar40 = 0;
            do {
              ppppplVar5 = pppppplVar36[10];
              iVar35 = iVar35 + *(int *)((longlong)ppppplVar5 + uVar40 * 0x58 + 0x4c);
              if ((longlong)*(int *)(ppppplVar5 + uVar40 * 0xb + 9) != 0) {
                pppplVar31 = ppppplVar5[uVar40 * 0xb + 5];
                pppplVar28 = pppplVar31 + (longlong)*(int *)(ppppplVar5 + uVar40 * 0xb + 9) * 0x25;
                do {
                  if ((((ulonglong)pppplVar31[0x24] & 1) != 0) &&
                     (iVar8 = *(int *)(pppplVar31[0x19] + 2), 0 < (longlong)iVar8)) {
                    lVar48 = 0;
                    do {
                      *(undefined4 *)(pppplVar31[0x19][1] + lVar48) = 0xffffffff;
                      lVar48 = lVar48 + 1;
                    } while (iVar8 != lVar48);
                  }
                  pppplVar31 = pppplVar31 + 0x25;
                } while (pppplVar31 != pppplVar28);
              }
              uVar40 = uVar40 + 1;
            } while (uVar40 != uVar34);
          }
          pppppplVar20 = pppppplVar20 + 1;
        } while (pppppplVar20 != pppppplVar17);
      }
      lVar45 = lVar45 + 1;
    } while (lVar45 != 3);
    local_368 = local_450 + 7;
    local_400 = ppppppplVar43;
    local_3e8 = param_2;
    FUN_143a8d702(local_368,lVar21,iVar35 + *(int *)((longlong)local_450 + 0x2b4));
    lVar45 = local_3e8;
    ppppppplVar50 = local_450;
    pppppplVar17 = ppppppplVar33[0x19];
    if ((pppppplVar17 != (longlong ******)0x0) &&
       (iVar35 = *(int *)(ppppppplVar33 + 0x1a), iVar35 != 0)) {
      if (pppppplVar17[1] != (longlong *****)0x0) {
        ppppppplVar33 = ppppppplVar50;
        if ((*(int *)(pppppplVar17[1] + 2) != 0) ||
           (cVar7 = (*(code *)(*pppppplVar17[1])[3])(), cVar7 == '\0')) goto LAB_143a91a76;
        pppppplVar17 = ppppppplVar50[0x19];
        iVar35 = *(int *)(ppppppplVar50 + 0x1a);
      }
      lVar48 = (*(code *)(*pppppplVar17)[3])(pppppplVar17,iVar35 << 2);
      ppppppplVar50 = local_400;
      ppppppplVar33 = local_450;
      if (lVar48 != 0) {
        lVar45 = 0;
        do {
          pppppplVar36 = (longlong ******)0x0;
          if ((longlong)*(int *)(ppppppplVar43 + lVar45 * 2 + 1) != 0) {
            pppppplVar17 = local_400[lVar45 * 2];
            pppppplVar36 = pppppplVar17 + *(int *)(ppppppplVar43 + lVar45 * 2 + 1);
            do {
              lVar41 = (longlong)*(int *)(*pppppplVar17 + 9);
              if (lVar41 != 0) {
                pppplVar28 = (*pppppplVar17)[8];
                pppplVar31 = pppplVar28 + lVar41;
                do {
                  ppplVar6 = *pppplVar28;
                  iVar35 = *(int *)(ppplVar6 + 0x47);
                  *(undefined4 *)(ppplVar6 + 0x4e) = 0;
                  if (0 < (longlong)iVar35) {
                    lVar41 = 0;
                    do {
                      pplVar49 = ppplVar6[1];
                      if ((ulonglong)*(uint *)(pplVar49 + lVar41) != 0xffffffff) {
                        uVar44 = *(int *)((longlong)pplVar49 + lVar41 * 8 + 4) -
                                 *(int *)(lVar48 + (ulonglong)*(uint *)(pplVar49 + lVar41) * 4);
                        uVar34 = *(uint *)((longlong)ppplVar6[0x46] + lVar41 * 4);
                        if (uVar44 <= uVar34) {
                          *(uint *)((longlong)ppplVar6[0x46] + lVar41 * 4) = uVar34 - uVar44;
                          pplVar49 = ppplVar6[1];
                        }
                        *(undefined4 *)(pplVar49 + lVar41) = 0xffffffff;
                        *(int *)(ppplVar6 + 0x4e) =
                             *(int *)(ppplVar6 + 0x4e) +
                             *(int *)((longlong)ppplVar6[0x46] + lVar41 * 4);
                      }
                      lVar41 = lVar41 + 1;
                    } while (iVar35 != lVar41);
                  }
                  pppplVar28 = pppplVar28 + 1;
                } while (pppplVar28 != pppplVar31);
              }
              pppppplVar17 = pppppplVar17 + 1;
            } while (pppppplVar17 != pppppplVar36);
          }
          lVar45 = lVar45 + 1;
          ppppppplVar43 = local_400;
        } while (lVar45 != 3);
        (*(code *)(*local_450[0x19])[4])();
        *(undefined4 *)(ppppppplVar33 + 0x1a) = 0;
        lVar45 = local_3e8;
        ppppppplVar43 = ppppppplVar50;
      }
    }
LAB_143a91a76:
    uVar34 = *(uint *)(ppppppplVar33 + 0x32);
    ppppppplVar50 = (longlong *******)(ulonglong)uVar34;
    if (uVar34 != 0) {
      local_2e8 = 0;
      ppppplStack_2e0 = (longlong *****)0x0;
      local_2d8 = 0;
      local_488 = (longlong **)CONCAT44(local_488._4_4_,uVar34);
      local_470 = 0;
      local_478 = 4;
      local_480 = CONCAT31(local_480._1_3_,0x1c);
      FUN_140661c88(&local_2e8,lVar21,L"NiagaraInitCountsTaskInfosBuffer",4);
      lVar45 = local_2e8;
      cVar7 = *(char *)(lVar21 + 0x69);
      if (cVar7 == '\0') {
        FUN_14002049c(lVar21,1);
      }
      local_458 = local_450 + 0x31;
      local_488 = (longlong **)CONCAT44(local_488._4_4_,uVar34 * 4);
      local_480 = 1;
      _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar21,lVar45,0);
      if (cVar7 == '\0') {
        FUN_14002049c(lVar21,0);
      }
      memcpy(_Dst,*local_458,(ulonglong)(uVar34 * 4));
      lVar45 = local_2e8;
      if (*(char *)(lVar21 + 0x69) == '\0') {
        FUN_14002049c(lVar21,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar21,lVar45);
        FUN_14002049c(lVar21,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar21,local_2e8);
      }
      iVar35 = (int)uVar34 / 2;
      local_430 = local_450[6];
      *(int *)local_430 = *(int *)local_430 + 1;
      local_88 = (longlong *******)0x0;
      local_80 = 0xa00000000;
      pppppplVar17 = local_450[0xc];
      if (pppppplVar17 == (longlong ******)0x0) {
        pppppplVar17 = (longlong ******)FUN_1405668b6(local_450[6],lVar21,0x1c,0);
        if (pppppplVar17 != (longlong ******)0x0) goto LAB_143a93cec;
        pppppplVar17 = (longlong ******)0x0;
        local_2f8 = (longlong *******)0x0;
        local_2f0 = 0;
      }
      else {
        local_80 = 0xa00000001;
        local_2b8 = (longlong *******)0xffffffffffffffff;
        uStack_2b0 = CONCAT44(uStack_2b0._4_4_,0xffffffff);
        local_2a0 = 3;
        local_29c = 0x40000000000;
        local_294 = 0;
        local_288[0]._0_1_ = 0;
        local_2a8 = pppppplVar17;
LAB_143a93cec:
        LOCK();
        *(int *)(pppppplVar17 + 1) = *(int *)(pppppplVar17 + 1) + 1;
        UNLOCK();
        local_2f8 = local_88;
        local_2f0 = (int)local_80;
      }
      if (local_2f8 == (longlong *******)0x0) {
        local_2f8 = (longlong *******)&local_2b8;
      }
      FUN_144760590(lVar21,&local_2f8,0);
      pppppplVar36 = &local_318;
      local_318 = ppppplStack_2e0;
      uVar19 = *(undefined8 *)
                (&DAT_14ca8c1f0 +
                (ulonglong)
                *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)((longlong)local_450 + 0x3c) * 2) * 8
                );
      local_310 = pppppplVar17;
      local_308 = iVar35;
      uVar18 = FUN_145e7d3a0();
      FUN_1448e935e(uVar19,local_2c8,uVar18,0);
      FUN_145e7d3a0();
      iVar8 = iVar35 + 0x7e;
      if (-1 < iVar35 + 0x3f) {
        iVar8 = iVar35 + 0x3f;
      }
      uVar19 = FUN_145e7d60c();
      local_488 = (longlong **)&local_328;
      uStack_324 = 1;
      uStack_320 = 1;
      local_328 = iVar8 >> 6;
      FUN_1481ccfc5(lVar21,local_2c8,uVar19);
      FUN_141830f14(&local_2b8);
      uVar40 = local_80;
      lVar45 = (longlong)(int)local_80;
      uVar34 = (int)local_80 + 1;
      local_80 = CONCAT44(local_80._4_4_,uVar34);
      if (local_80._4_4_ < uVar34) {
        FUN_1481cccde(&local_2b8,uVar40 & 0xffffffff);
      }
      ppppppplVar50 = local_450;
      ppppppplVar33 = local_88;
      if (local_88 == (longlong *******)0x0) {
        ppppppplVar33 = (longlong *******)&local_2b8;
      }
      pppppplVar20 = local_450[0xc];
      ppppppplVar33[lVar45 * 7] = (longlong ******)0xffffffffffffffff;
      *(undefined4 *)(ppppppplVar33 + lVar45 * 7 + 1) = 0xffffffff;
      ppppppplVar33[lVar45 * 7 + 2] = pppppplVar20;
      *(undefined1 *)(ppppppplVar33 + lVar45 * 7 + 3) = 3;
      *(undefined8 *)((longlong)ppppppplVar33 + lVar45 * 0x38 + 0x1c) = 0xf000000400;
      *(undefined4 *)((longlong)ppppppplVar33 + lVar45 * 0x38 + 0x24) = 0;
      *(undefined1 *)(ppppppplVar33 + lVar45 * 7 + 6) = 0;
      ppppppplVar33 = local_88;
      if (local_88 == (longlong *******)0x0) {
        ppppppplVar33 = (longlong *******)&local_2b8;
      }
      local_328 = (int)ppppppplVar33;
      uStack_324 = (undefined4)((ulonglong)ppppppplVar33 >> 0x20);
      uStack_320 = (int)local_80;
      FUN_144760590(lVar21,&local_328,0);
      *(undefined4 *)(ppppppplVar50 + 0x32) = 0;
      if (*(int *)((longlong)ppppppplVar50 + 0x194) < 0) {
        FUN_14480809c(local_458,0);
      }
      if (pppppplVar17 != (longlong ******)0x0) {
        LOCK();
        pppppplVar20 = pppppplVar17 + 1;
        ppppplVar5 = *pppppplVar20;
        *(uint *)pppppplVar20 = *(uint *)pppppplVar20 - 1;
        UNLOCK();
        if (((ulonglong)ppppplVar5 & 0x3fffffff) == 1) {
          pppppplVar20 = pppppplVar17 + 1;
          LOCK();
          uVar34 = *(uint *)pppppplVar20;
          *(uint *)pppppplVar20 = *(uint *)pppppplVar20 | 0x40000000;
          UNLOCK();
          if ((uVar34 >> 0x1e & 1) == 0) {
            bVar30 = *(byte *)((longlong)pppppplVar17 + 0xd);
            plVar14 = (longlong *)FUN_14001cc68(0x10,8);
            plVar14[1] = (longlong)pppppplVar17;
            plVar16 = DAT_14ca843c0;
            plVar15 = DAT_14ca843c8;
            if ((bVar30 & 2) == 0) {
              do {
                *plVar14 = (longlong)plVar16;
                LOCK();
                bVar51 = plVar16 != DAT_14ca843c0;
                plVar15 = plVar14;
                if (bVar51) {
                  plVar16 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar15;
                UNLOCK();
              } while (bVar51);
            }
            else {
              do {
                *plVar14 = (longlong)plVar15;
                LOCK();
                bVar51 = plVar15 != DAT_14ca843c8;
                plVar16 = plVar14;
                if (bVar51) {
                  plVar15 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar51);
            }
          }
        }
      }
      FUN_141830f5c(&local_2b8);
      *(int *)local_430 = *(int *)local_430 + -1;
      if (*(int *)local_430 == 0) {
        FUN_1449e245a(local_430);
      }
      ppppplVar5 = ppppplStack_2e0;
      if (ppppplStack_2e0 != (longlong *****)0x0) {
        LOCK();
        ppppplVar46 = ppppplStack_2e0 + 1;
        pppplVar31 = *ppppplVar46;
        *(uint *)ppppplVar46 = *(uint *)ppppplVar46 - 1;
        UNLOCK();
        if (((ulonglong)pppplVar31 & 0x3fffffff) == 1) {
          ppppplVar46 = ppppplStack_2e0 + 1;
          LOCK();
          uVar34 = *(uint *)ppppplVar46;
          *(uint *)ppppplVar46 = *(uint *)ppppplVar46 | 0x40000000;
          UNLOCK();
          if ((uVar34 >> 0x1e & 1) == 0) {
            bVar30 = *(byte *)((longlong)ppppplStack_2e0 + 0xd);
            plVar14 = (longlong *)FUN_14001cc68(0x10,8);
            plVar14[1] = (longlong)ppppplVar5;
            plVar16 = DAT_14ca843c0;
            plVar15 = DAT_14ca843c8;
            if ((bVar30 & 2) == 0) {
              do {
                *plVar14 = (longlong)plVar16;
                LOCK();
                bVar51 = plVar16 != DAT_14ca843c0;
                plVar15 = plVar14;
                if (bVar51) {
                  plVar16 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar15;
                UNLOCK();
              } while (bVar51);
            }
            else {
              do {
                *plVar14 = (longlong)plVar15;
                LOCK();
                bVar51 = plVar15 != DAT_14ca843c8;
                plVar16 = plVar14;
                if (bVar51) {
                  plVar15 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar51);
            }
          }
        }
      }
      lVar21 = local_2e8;
      ppppppplVar33 = local_450;
      lVar45 = local_3e8;
      ppppppplVar43 = local_400;
      if (local_2e8 != 0) {
        LOCK();
        puVar1 = (uint *)(local_2e8 + 8);
        uVar34 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar34 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_2e8 + 8);
          LOCK();
          uVar34 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar34 >> 0x1e & 1) == 0) {
            bVar30 = *(byte *)(local_2e8 + 0xd);
            plVar14 = (longlong *)FUN_14001cc68(0x10,8);
            plVar14[1] = lVar21;
            plVar16 = DAT_14ca843c0;
            plVar15 = DAT_14ca843c8;
            ppppppplVar33 = local_450;
            lVar45 = local_3e8;
            ppppppplVar43 = local_400;
            if ((bVar30 & 2) == 0) {
              do {
                *plVar14 = (longlong)plVar16;
                LOCK();
                bVar51 = plVar16 != DAT_14ca843c0;
                plVar15 = plVar14;
                if (bVar51) {
                  plVar16 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar15;
                UNLOCK();
              } while (bVar51);
            }
            else {
              do {
                *plVar14 = (longlong)plVar15;
                LOCK();
                bVar51 = plVar15 != DAT_14ca843c8;
                plVar16 = plVar14;
                if (bVar51) {
                  plVar15 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar51);
            }
          }
        }
      }
    }
    local_3d8 = *(undefined8 *)(lVar45 + 0x18);
    *(undefined4 *)((longlong)ppppppplVar33 + 0x29c) = 0;
    local_3a0 = ppppppplVar33 + 0x61;
    lVar21 = 0;
    do {
      local_3c0 = lVar21;
      if ((longlong)*(int *)(ppppppplVar43 + lVar21 * 2 + 1) != 0) {
        pppppplVar17 = local_400[lVar21 * 2];
        local_398 = pppppplVar17 + *(int *)(ppppppplVar43 + lVar21 * 2 + 1);
        ppppppplVar33 = local_3a0 + lVar21 * 4;
        ppppppplVar43 = local_3a0 + lVar21 * 4 + 2;
        local_440 = ppppppplVar33;
        local_410 = ppppppplVar43;
        do {
          local_418 = *pppppplVar17;
          iVar35 = *(int *)(local_418 + 9);
          if ((longlong)iVar35 != 0) {
            pppplVar31 = local_418[8];
            lVar21 = 0;
            do {
              lVar45 = *(longlong *)((longlong)pppplVar31 + lVar21);
              *(undefined8 *)(lVar45 + 0x274) = 0;
              *(undefined4 *)(lVar45 + 0x200) = 0;
              *(undefined8 *)(lVar45 + 0x218) = 0xffffffffffffffff;
              lVar21 = lVar21 + 8;
            } while ((longlong)iVar35 * 8 != lVar21);
          }
          uVar34 = *(uint *)(local_418 + 0xb);
          local_390 = pppppplVar17;
          if (uVar34 != 0) {
            if (local_450[0x19] == (longlong ******)0x0) {
              pppppplVar36 = (longlong ******)0x0;
            }
            else {
              pppppplVar36 = (longlong ******)
                             CONCAT71((int7)((ulonglong)pppppplVar36 >> 8),
                                      *(int *)(local_450 + 0x1a) != 0);
            }
            uVar44 = *(uint *)((longlong)local_450 + 700);
            if ((int)uVar34 < (int)*(uint *)((longlong)local_450 + 700)) {
              uVar44 = uVar34;
            }
            *(undefined1 *)(local_418[10] + (longlong)(int)uVar44 * 0xb + -1) = 1;
            if (0 < (int)uVar44) {
              local_388 = (ulonglong)uVar44;
              uVar40 = 0;
              local_408 = 0;
              local_3c4 = SUB84(pppppplVar36,0);
LAB_143a91bf0:
              pppplVar28 = local_418[10];
              pppplVar31 = pppplVar28 + uVar40 * 0xb;
              local_380 = uVar40;
              if ((longlong)*(int *)(pppplVar28 + uVar40 * 0xb + 9) != 0) {
                pppplVar23 = (longlong ****)pppplVar28[uVar40 * 0xb + 5];
                local_378 = pppplVar23 + (longlong)*(int *)(pppplVar28 + uVar40 * 0xb + 9) * 0x25;
                local_404 = 0;
                local_428 = (ulonglong)local_408;
                uVar34 = local_408;
                local_3e0 = pppplVar31;
LAB_143a91c56:
                local_458 = (longlong *******)pppplVar23[0x19];
                local_3f8 = pppplVar23;
                if (*(char *)((longlong)local_458 + 0x204) == '\0') {
                  iVar35 = *(int *)(pppplVar23 + 0x1b);
                  uVar44 = 1;
                  local_434 = uVar34;
                  if ((longlong)iVar35 != 0) {
                    ppplVar6 = pppplVar23[0x1a];
                    lVar21 = 0;
                    do {
                      plVar16 = *(longlong **)((longlong)ppplVar6 + lVar21);
                      iVar8 = (**(code **)(*plVar16 + 0x60))(plVar16);
                      if (iVar8 != 0) {
                        uVar44 = (**(code **)(*plVar16 + 0x60))(plVar16);
                        uVar47 = (undefined4)
                                 CONCAT71((int7)((ulonglong)ppppppplVar50 >> 8),1 < (int)uVar44);
                        if ((int)uVar44 < 2) goto LAB_143a91d94;
                        iVar35 = *(int *)(local_3f8 + 0x1b);
                        if ((longlong)iVar35 == 0) goto LAB_143a91d2e;
                        ppplVar6 = local_3f8[0x1a];
                        lVar21 = 0;
                        goto LAB_143a91d02;
                      }
                      lVar21 = lVar21 + 8;
                    } while ((longlong)iVar35 * 8 != lVar21);
                  }
                  uVar47 = 0;
                  goto LAB_143a91d9d;
                }
                goto LAB_143a92369;
              }
              goto LAB_143a92f16;
            }
LAB_143a932ff:
            if ((longlong)*(int *)(local_418 + 9) != 0) {
              pppplVar28 = local_418[8];
              pppplVar31 = pppplVar28 + *(int *)(local_418 + 9);
              do {
                ppplVar6 = *pppplVar28;
                if (*(char *)(ppplVar6 + 0x45) == '\x01') {
                  *(ushort *)
                   ((*ppppppplVar43)[(longlong)*(int *)(ppplVar6 + 0x43) * 6 + 2] +
                   (longlong)*(int *)((longlong)ppplVar6 + 0x21c) * 0x15 + 2) =
                       *(ushort *)
                        ((*ppppppplVar43)[(longlong)*(int *)(ppplVar6 + 0x43) * 6 + 2] +
                        (longlong)*(int *)((longlong)ppplVar6 + 0x21c) * 0x15 + 2) | 4;
                  pplVar49 = ppplVar6[10];
                  ppplVar6[0x44] = (longlong **)pplVar49[0xf];
                  if ((*(byte *)(pplVar49[1] + 7) & 1) != 0) {
                    local_488 = (longlong **)&DAT_149dfb77a;
                    if (*(int *)(ppplVar6 + 5) != 0) {
                      local_488 = ppplVar6[4];
                    }
                    pppppplVar36 = (longlong ******)(ulonglong)*(uint *)((longlong)local_450 + 0x24)
                    ;
                    FUN_144a3834c(pplVar49,*(int *)(ppplVar6 + 0x4f) + 1,local_3d8);
                  }
                  uVar34 = *(uint *)(ppplVar6 + 0x40);
                  uVar40 = (ulonglong)uVar34;
                  if (uVar40 == 0) {
LAB_143a93418:
                    do {
                      FUN_143a79364(ppplVar6[uVar40 + 0x3e]);
                      bVar51 = uVar40 == 0;
                      uVar40 = 1;
                    } while (bVar51);
                  }
                  else {
                    ppppppplVar50 = (longlong *******)0x2;
                    if (uVar34 < 2) {
                      ppppppplVar50 = (longlong *******)(ulonglong)uVar34;
                    }
                    ppppppplVar43 = (longlong *******)0x0;
                    do {
                      local_488 = (longlong **)&DAT_149dfb77a;
                      if (*(int *)(ppplVar6 + 5) != 0) {
                        local_488 = ppplVar6[4];
                      }
                      pppppplVar36 = (longlong ******)
                                     (ulonglong)*(uint *)((longlong)local_450 + 0x24);
                      FUN_143a7817e(ppplVar6[(longlong)ppppppplVar43 + 0x3e],local_3d8,
                                    *(int *)(ppplVar6 + 0x4f) + 1);
                      ppppppplVar43 = (longlong *******)((longlong)ppppppplVar43 + 1);
                    } while (ppppppplVar50 != ppppppplVar43);
                    ppppppplVar43 = local_410;
                    if (uVar34 == 1) goto LAB_143a93418;
                  }
                  if (*(uint *)(local_418 + 5) < 2) {
                    ppppppplVar50 =
                         (longlong *******)
                         ppplVar6[(ulonglong)(~*(uint *)(ppplVar6 + 0x40) & 1) + 0x3e];
                    lVar21 = (longlong)DAT_14cb41358;
                    *(undefined4 *)((longlong)ppppppplVar50 + 0x5c) =
                         *(undefined4 *)((longlong)ppplVar6[0x41] + lVar21 * 4);
                    *(undefined4 *)(ppppppplVar50 + 0x24) =
                         *(undefined4 *)((longlong)ppplVar6[0x46] + lVar21 * 4);
                    *(undefined4 *)(ppppppplVar50 + 0xb) = *(undefined4 *)(local_418 + 5);
                    iVar35 = *(int *)(ppplVar6 + 0x47);
                    sVar29 = (longlong)iVar35 << 2;
                    memcpy(ppppppplVar50[0x2c],ppplVar6[0x46],sVar29);
                    memcpy(ppppppplVar50[0x2e],ppplVar6[0x41],sVar29);
                    *(int *)(ppppppplVar50 + 0x30) = iVar35;
                    ppppppplVar43 = (longlong *******)ppplVar6[0x24];
                    if (ppppppplVar43 != ppppppplVar50) {
                      ppplVar6[0x24] = (longlong **)ppppppplVar50;
                      if (ppppppplVar50 != (longlong *******)0x0) {
                        LOCK();
                        *(int *)(ppppppplVar50 + 1) = *(int *)(ppppppplVar50 + 1) + 1;
                        UNLOCK();
                      }
                      if (ppppppplVar43 != (longlong *******)0x0) {
                        LOCK();
                        *(int *)(ppppppplVar43 + 1) = *(int *)(ppppppplVar43 + 1) + -1;
                        UNLOCK();
                      }
                    }
                    ppppppplVar32 = (longlong *******)ppplVar6[0x25];
                    ppppppplVar43 = local_410;
                    if (ppppppplVar32 != (longlong *******)0x0) {
                      ppplVar6[0x25] = (longlong **)0x0;
LAB_143a935d5:
                      LOCK();
                      *(int *)(ppppppplVar32 + 1) = *(int *)(ppppppplVar32 + 1) + -1;
                      UNLOCK();
                      ppppppplVar43 = local_410;
                    }
                  }
                  else if (DAT_14c7628e0 != 0) {
                    ppppppplVar50 =
                         (longlong *******)
                         ppplVar6[(ulonglong)(~*(uint *)(ppplVar6 + 0x40) & 1) + 0x3e];
                    lVar21 = (longlong)DAT_14cb41358;
                    *(undefined4 *)((longlong)ppppppplVar50 + 0x5c) =
                         *(undefined4 *)((longlong)ppplVar6[0x41] + lVar21 * 4);
                    *(undefined4 *)(ppppppplVar50 + 0x24) =
                         *(undefined4 *)((longlong)ppplVar6[0x46] + lVar21 * 4);
                    *(undefined4 *)(ppppppplVar50 + 0xb) = *(undefined4 *)(local_418 + 5);
                    iVar35 = *(int *)(ppplVar6 + 0x47);
                    sVar29 = (longlong)iVar35 << 2;
                    memcpy(ppppppplVar50[0x2c],ppplVar6[0x46],sVar29);
                    memcpy(ppppppplVar50[0x2e],ppplVar6[0x41],sVar29);
                    *(int *)(ppppppplVar50 + 0x30) = iVar35;
                    ppppppplVar32 = (longlong *******)ppplVar6[0x25];
                    ppppppplVar43 = local_410;
                    if (ppppppplVar32 != ppppppplVar50) {
                      ppplVar6[0x25] = (longlong **)ppppppplVar50;
                      if (ppppppplVar50 != (longlong *******)0x0) {
                        LOCK();
                        *(int *)(ppppppplVar50 + 1) = *(int *)(ppppppplVar50 + 1) + 1;
                        UNLOCK();
                      }
                      if (ppppppplVar32 != (longlong *******)0x0) goto LAB_143a935d5;
                    }
                  }
                }
                pppplVar28 = pppplVar28 + 1;
              } while (pppplVar28 != pppplVar31);
            }
          }
          pppppplVar17 = local_390 + 1;
        } while (pppppplVar17 != local_398);
      }
      ppppppplVar33 = local_450;
      lVar21 = local_3c0 + 1;
      ppppppplVar43 = local_400;
    } while (lVar21 != 3);
    if (*(uint *)(local_450 + 0x53) < *(uint *)((longlong)local_450 + 0x29c)) {
      *(uint *)(local_450 + 0x53) = *(uint *)((longlong)local_450 + 0x29c) + 0x7f & 0xffffff80;
      ppppppplVar50 = local_450 + 0x4d;
      FUN_1407f1458(ppppppplVar50);
      local_488 = (longlong **)CONCAT44(local_488._4_4_,*(undefined4 *)(ppppppplVar33 + 0x53));
      local_468 = 0;
      local_470 = CONCAT44(local_470._4_4_,1);
      local_478 = 0x400;
      local_480 = CONCAT31(local_480._1_3_,0x1d);
      FUN_1407fe5c2(ppppppplVar50,local_3d8,L"NiagaraFreeIDListSizes",4);
    }
    param_2 = local_3e8;
    FUN_14006c918(ppppppplVar33[0x49],*(undefined8 *)(local_3e8 + 0x18),ppppppplVar33);
    local_338 = 0;
    uStack_330 = 0;
    FUN_143a8da50(ppppppplVar33,param_2,&local_338,0);
  }
  if (local_441 != '\0') {
    if ((*local_3b8 == '\x01') && (0 < *(int *)(local_450 + 0x30))) {
LAB_143a917cf:
      local_488 = (longlong **)CONCAT71(local_488._1_7_,1);
      (*(code *)(*local_450)[0x26])(local_450,param_2,local_450[0xb],1);
    }
    else {
      lVar21 = 0;
      do {
        if (0 < *(int *)((longlong)local_450 + lVar21 + 800)) goto LAB_143a917cf;
        lVar21 = lVar21 + 0x20;
      } while (lVar21 != 0x60);
    }
  }
LAB_143a93698:
  if ((local_70 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (lVar21 = lVar21 + 8, (longlong)iVar35 * 8 != lVar21) {
LAB_143a91d02:
    plVar16 = *(longlong **)((longlong)ppplVar6 + lVar21);
    (**(code **)(*plVar16 + 0x68))(plVar16,&local_2b8,pppplVar31[2]);
    if ((uint)uStack_2b0 != 0) {
      (**(code **)(*plVar16 + 0x68))(plVar16,&local_2b8,pppplVar31[2]);
      ppppppplVar50 = local_2b8;
      uVar34 = (uint)uStack_2b0;
      goto LAB_143a91d58;
    }
  }
LAB_143a91d2e:
  ppppppplVar50 = (longlong *******)0x0;
  uVar34 = 0;
LAB_143a91d58:
  ppppppplVar33 = local_458 + 0x48;
  iVar35 = *(int *)(local_458 + 0x49);
  if (iVar35 < (int)uVar44) {
    *(uint *)(local_458 + 0x49) = uVar44;
    if ((uint)(*(int *)((longlong)local_458 + 0x24c) - iVar35) < uVar44 - iVar35) {
      FUN_14475e4ac(ppppppplVar33);
    }
    memset((void *)((longlong)iVar35 * 4 + (longlong)*ppppppplVar33),0,
           (longlong)(int)(uVar44 - iVar35) << 2);
  }
  else if ((int)uVar44 < iVar35) {
    *(uint *)(local_458 + 0x49) = uVar44;
    FUN_1401fef06(ppppppplVar33);
  }
  if (uVar34 == uVar44) {
    memcpy(*ppppppplVar33,ppppppplVar50,(ulonglong)uVar44 << 2);
  }
LAB_143a91d94:
  if ((int)uVar44 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar44);
  }
LAB_143a91d9d:
  ppppppplVar33 = local_458;
  ppppppplVar50 = local_458 + 0x41;
  if (*(int *)((longlong)local_458 + 0x214) < (int)uVar44) {
    FUN_14480809c(ppppppplVar50);
  }
  ppppppplVar43 = ppppppplVar33 + 0x46;
  if (*(int *)((longlong)ppppppplVar33 + 0x23c) < (int)uVar44) {
    FUN_14480809c(ppppppplVar43);
  }
  local_430 = (longlong ******)CONCAT44(local_430._4_4_,uVar47);
  ppppppplVar33 = local_458 + 1;
  if (*(int *)((longlong)local_458 + 0x14) < (int)uVar44) {
    FUN_1400ee65a(ppppppplVar33);
  }
  ppppppplVar32 = local_458 + 0x4a;
  uVar34 = *(uint *)(local_458 + 0x4b);
  if ((int)uVar34 < (int)uVar44) {
    *(uint *)(local_458 + 0x4b) = uVar44;
    if (*(int *)((longlong)local_458 + 0x25c) - uVar34 < uVar44 - uVar34) {
      FUN_1447808da(ppppppplVar32);
    }
    memset((void *)((longlong)(int)uVar34 * 4 + (longlong)*ppppppplVar32),0,
           (longlong)(int)(uVar44 - uVar34) << 2);
  }
  else if (uVar44 < uVar34) {
    *(uint *)(local_458 + 0x4b) = uVar44;
    FUN_144780a3c(ppppppplVar32);
  }
  ppppppplVar13 = local_458 + 0x4c;
  uVar34 = *(uint *)(local_458 + 0x4d);
  if ((int)uVar34 < (int)uVar44) {
    *(uint *)(local_458 + 0x4d) = uVar44;
    if (*(int *)((longlong)local_458 + 0x26c) - uVar34 < uVar44 - uVar34) {
      FUN_1447808da(ppppppplVar13);
    }
    memset((void *)((longlong)(int)uVar34 * 4 + (longlong)*ppppppplVar13),0,
           (longlong)(int)(uVar44 - uVar34) << 2);
  }
  else if (uVar44 < uVar34) {
    *(uint *)(local_458 + 0x4d) = uVar44;
    FUN_144780a3c(ppppppplVar13);
  }
  uVar34 = uVar44;
  if ((char)local_430 == '\0') {
    *(undefined4 *)local_458[0x4a] = *(undefined4 *)(local_458[10] + 0x15);
  }
  else {
    FUN_1481c80df(ppppppplVar32,local_458 + 0x48,*(undefined4 *)(local_458 + 0x28));
  }
  for (; uVar34 != 0; uVar34 = uVar34 - 1) {
    iVar35 = *(int *)(local_458 + 0x42);
    uVar9 = iVar35 + 1;
    *(uint *)(local_458 + 0x42) = uVar9;
    if (*(uint *)((longlong)local_458 + 0x214) < uVar9) {
      FUN_1447808da(ppppppplVar50);
    }
    *(undefined4 *)((longlong)local_458[0x41] + (longlong)iVar35 * 4) = 0xffffffff;
    iVar35 = *(int *)(local_458 + 0x47);
    uVar9 = iVar35 + 1;
    *(uint *)(local_458 + 0x47) = uVar9;
    if (*(uint *)((longlong)local_458 + 0x23c) < uVar9) {
      FUN_1447808da(ppppppplVar43);
    }
    *(undefined4 *)((longlong)local_458[0x46] + (longlong)iVar35 * 4) = 0;
    iVar35 = *(int *)(local_458 + 2);
    uVar9 = iVar35 + 1;
    *(uint *)(local_458 + 2) = uVar9;
    if (*(uint *)((longlong)local_458 + 0x14) < uVar9) {
      FUN_1481cc54a(ppppppplVar33);
    }
    (*ppppppplVar33)[iVar35] = (longlong *****)0xffffffff;
  }
  *(undefined4 *)(local_458 + 0x4e) = 0;
  lVar21 = 0;
  bVar51 = true;
  do {
    bVar52 = bVar51;
    pppppplVar20 = local_458[lVar21 + 0x3e];
    pppppplVar17 = pppppplVar20 + 0x2c;
    iVar35 = *(int *)(pppppplVar20 + 0x2d);
    if (iVar35 < (int)uVar44) {
      *(uint *)(pppppplVar20 + 0x2d) = uVar44;
      if ((uint)(*(int *)((longlong)pppppplVar20 + 0x16c) - iVar35) < uVar44 - iVar35) {
        FUN_1447808da(pppppplVar17);
      }
      memset((void *)((longlong)iVar35 * 4 + (longlong)*pppppplVar17),0,
             (longlong)(int)(uVar44 - iVar35) << 2);
    }
    else if ((int)uVar44 < iVar35) {
      *(uint *)(pppppplVar20 + 0x2d) = uVar44;
      FUN_144780a3c(pppppplVar17);
    }
    pppppplVar20 = local_458[lVar21 + 0x3e];
    pppppplVar17 = pppppplVar20 + 0x2e;
    iVar35 = *(int *)(pppppplVar20 + 0x2f);
    if (iVar35 < (int)uVar44) {
      *(uint *)(pppppplVar20 + 0x2f) = uVar44;
      if ((uint)(*(int *)((longlong)pppppplVar20 + 0x17c) - iVar35) < uVar44 - iVar35) {
        FUN_1447808da(pppppplVar17);
      }
      memset((void *)((longlong)iVar35 * 4 + (longlong)*pppppplVar17),0,
             (longlong)(int)(uVar44 - iVar35) << 2);
    }
    else if ((int)uVar44 < iVar35) {
      *(uint *)(pppppplVar20 + 0x2f) = uVar44;
      FUN_144780a3c(pppppplVar17);
    }
    *(uint *)(local_458[lVar21 + 0x3e] + 0x30) = uVar44;
    pppppplVar17 = local_458[lVar21 + 0x3e];
    iVar35 = *(int *)(pppppplVar17 + 0x32);
    if (iVar35 < (int)uVar44) {
      *(uint *)(pppppplVar17 + 0x32) = uVar44;
      if ((uint)(*(int *)((longlong)pppppplVar17 + 0x194) - iVar35) < uVar44 - iVar35) {
        FUN_1447808da(pppppplVar17 + 0x31);
      }
      memset((void *)((longlong)iVar35 * 4 + (longlong)pppppplVar17[0x31]),0,
             (longlong)(int)(uVar44 - iVar35) << 2);
    }
    else if ((int)uVar44 < iVar35) {
      *(uint *)(pppppplVar17 + 0x32) = uVar44;
      FUN_144780a3c();
    }
    if (uVar44 != 0) {
      uVar40 = 0;
      iVar35 = 0;
      do {
        *(int *)((longlong)local_458[lVar21 + 0x3e][0x31] + uVar40 * 4) = iVar35;
        iVar35 = iVar35 + *(int *)((longlong)local_458[0x4a] + uVar40 * 4);
        uVar40 = uVar40 + 1;
      } while (uVar44 != uVar40);
    }
    lVar21 = 1;
    bVar51 = false;
  } while (bVar52);
  pppppplVar17 = local_458[10];
  pppppplVar20 = pppppplVar17 + 0x11;
  if ((longlong ******)pppppplVar17[0x13] != (longlong ******)0x0) {
    pppppplVar20 = (longlong ******)pppppplVar17[0x13];
  }
  if ((longlong)*(int *)(pppppplVar17 + 0x14) != 0) {
    local_430 = pppppplVar20 + *(int *)(pppppplVar17 + 0x14);
    do {
      ppppplVar5 = *pppppplVar20;
      iVar35 = *(int *)(ppppplVar5 + 0x2d);
      if (iVar35 < (int)uVar44) {
        *(uint *)(ppppplVar5 + 0x2d) = uVar44;
        if ((uint)(*(int *)((longlong)ppppplVar5 + 0x16c) - iVar35) < uVar44 - iVar35) {
          FUN_1447808da(ppppplVar5 + 0x2c);
        }
        memset((void *)((longlong)iVar35 * 4 + (longlong)ppppplVar5[0x2c]),0,
               (longlong)(int)(uVar44 - iVar35) << 2);
      }
      else if ((int)uVar44 < iVar35) {
        *(uint *)(ppppplVar5 + 0x2d) = uVar44;
        FUN_144780a3c();
      }
      iVar35 = *(int *)(ppppplVar5 + 0x2f);
      if (iVar35 < (int)uVar44) {
        *(uint *)(ppppplVar5 + 0x2f) = uVar44;
        if ((uint)(*(int *)((longlong)ppppplVar5 + 0x17c) - iVar35) < uVar44 - iVar35) {
          FUN_1447808da(ppppplVar5 + 0x2e);
        }
        memset((void *)((longlong)iVar35 * 4 + (longlong)ppppplVar5[0x2e]),0,
               (longlong)(int)(uVar44 - iVar35) << 2);
      }
      else if ((int)uVar44 < iVar35) {
        *(uint *)(ppppplVar5 + 0x2f) = uVar44;
        FUN_144780a3c();
      }
      *(uint *)(ppppplVar5 + 0x30) = uVar44;
      ppppplVar46 = ppppplVar5 + 0x31;
      iVar35 = *(int *)(ppppplVar5 + 0x32);
      if (iVar35 < (int)uVar44) {
        *(uint *)(ppppplVar5 + 0x32) = uVar44;
        if ((uint)(*(int *)((longlong)ppppplVar5 + 0x194) - iVar35) < uVar44 - iVar35) {
          FUN_1447808da(ppppplVar46);
        }
        memset((void *)((longlong)iVar35 * 4 + (longlong)*ppppplVar46),0,
               (longlong)(int)(uVar44 - iVar35) << 2);
      }
      else if ((int)uVar44 < iVar35) {
        *(uint *)(ppppplVar5 + 0x32) = uVar44;
        FUN_144780a3c();
      }
      if (uVar44 != 0) {
        uVar40 = 0;
        iVar35 = 0;
        do {
          *(int *)((longlong)*ppppplVar46 + uVar40 * 4) = iVar35;
          iVar35 = iVar35 + *(int *)((longlong)*ppppppplVar32 + uVar40 * 4);
          uVar40 = uVar40 + 1;
        } while (uVar44 != uVar40);
      }
      pppppplVar20 = pppppplVar20 + 1;
    } while (pppppplVar20 != local_430);
  }
  *(undefined1 *)((longlong)local_458 + 0x204) = 1;
  ppppppplVar33 = local_440;
  ppppppplVar43 = local_410;
  pppplVar31 = local_3e0;
  uVar34 = local_434;
LAB_143a92369:
  uVar44 = *(uint *)(local_458 + 0x42);
  ppppppplVar50 = (longlong *******)(ulonglong)uVar44;
  if (((ulonglong)local_3f8[0x24] & 1) != 0) {
    if (0 < (int)uVar44) {
      ppppppplVar32 = (longlong *******)0x0;
      do {
        *(undefined4 *)((longlong)local_458[0x46] + (longlong)ppppppplVar32 * 4) = 0;
        pppppplVar17 = local_458[0x41];
        if (*(int *)((longlong)pppppplVar17 + (longlong)ppppppplVar32 * 4) != -1) {
          iVar35 = *(int *)(ppppppplVar33 + 1);
          uVar9 = iVar35 + 1;
          *(uint *)(ppppppplVar33 + 1) = uVar9;
          if (*(uint *)((longlong)ppppppplVar33 + 0xc) < uVar9) {
            FUN_1447808da(ppppppplVar33);
          }
          *(undefined4 *)((longlong)*ppppppplVar33 + (longlong)iVar35 * 4) =
               *(undefined4 *)((longlong)pppppplVar17 + (longlong)ppppppplVar32 * 4);
          *(undefined4 *)((longlong)local_458[0x41] + (longlong)ppppppplVar32 * 4) = 0xffffffff;
        }
        ppppppplVar32 = (longlong *******)((longlong)ppppppplVar32 + 1);
      } while (ppppppplVar50 != ppppppplVar32);
    }
    *(undefined4 *)(local_458 + 0x4e) = 0;
  }
  pppplVar23 = local_3f8;
  if (((*(byte *)((longlong)local_458[0xc] + 0xbc) & 1) == 0) ||
     (iVar35 = *(int *)((longlong)local_3f8 + 0x11c), iVar35 == 0)) goto LAB_143a92d4f;
  local_41c = (uint)local_428;
  if (((ulonglong)local_3f8[0x24] & 2) == 0) {
    local_41c = uVar34;
  }
  iVar8 = *(int *)(ppppppplVar33 + 3);
  uVar34 = (iVar35 - iVar8) + local_41c;
  if (0 < (int)uVar34) {
    *(uint *)(ppppppplVar33 + 3) = iVar35 + local_41c;
    if ((uint)(*(int *)((longlong)ppppppplVar33 + 0x1c) - iVar8) < uVar34) {
      FUN_141832a70(ppppppplVar43,iVar8);
    }
    FUN_143a9a990(*ppppppplVar43 + (longlong)iVar8 * 6);
  }
  if ((int)uVar44 < 2) {
    if (*(int *)(local_458 + 0x4d) == 1) {
      *(int *)local_458[0x4c] = *(int *)((longlong)pppplVar23 + 4);
    }
    local_2b8 = (longlong *******)0x0;
    uStack_2b0 = 0;
    if (uVar44 == 1) goto LAB_143a9253c;
    if ((int)uVar44 < 0) {
LAB_143a93671:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(ppppppplVar50);
    }
    uVar34 = *(uint *)((longlong)local_458 + 0x274);
    local_434 = 0;
    ppppppplVar32 = local_458;
  }
  else {
    uVar34 = *(uint *)((longlong)pppplVar23 + 4);
    uVar9 = *(uint *)(local_458 + 0x4d);
    if (uVar9 != 0) {
      uVar40 = (ulonglong)uVar34;
      pppppplVar36 = local_458[0x4c];
      uVar10 = 0;
      do {
        lVar21 = (longlong)(int)uVar10;
        fVar53 = *(float *)((longlong)local_458[0x48] + lVar21 * 4) * (float)uVar40;
        *(int *)((longlong)pppppplVar36 + lVar21 * 4) = (int)ROUND(fVar53 + fVar53 + -0.5) >> 1;
        pppppplVar36 = local_458[0x4c];
        uVar34 = uVar34 - *(int *)((longlong)pppppplVar36 + lVar21 * 4);
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
    }
    uVar10 = rand();
    if (uVar34 != 0) {
      iVar35 = 0;
      do {
        piVar2 = (int *)((longlong)local_458[0x4c] +
                        (longlong)(int)((iVar35 + uVar10 % uVar9) % uVar9) * 4);
        *piVar2 = *piVar2 + 1;
        iVar35 = iVar35 + 1;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
    }
LAB_143a9253c:
    ppppppplVar32 = local_458;
    local_2b8 = (longlong *******)0x0;
    uStack_2b0 = (ulonglong)uVar44;
    FUN_1447808da(&local_2b8);
    memset(local_2b8,0,(longlong)ppppppplVar50 * 4);
    pppppplVar36 = ppppppplVar32[0x46];
    ppppppplVar13 = (longlong *******)0x0;
    do {
      *(undefined4 *)((longlong)local_2b8 + (longlong)ppppppplVar13 * 4) =
           *(undefined4 *)((longlong)pppppplVar36 + (longlong)ppppppplVar13 * 4);
      if (*(int *)((longlong)pppplVar23 + 4) == 0) {
        iVar35 = 0;
      }
      else {
        iVar35 = *(int *)((longlong)ppppppplVar32[0x4c] + (longlong)ppppppplVar13 * 4);
      }
      *(int *)((longlong)ppppppplVar32[0x46] + (longlong)ppppppplVar13 * 4) =
           iVar35 + *(int *)((longlong)local_2b8 + (longlong)ppppppplVar13 * 4) + *(int *)pppplVar23
      ;
      uVar34 = *(uint *)((longlong)ppppppplVar32[0x4a] + (longlong)ppppppplVar13 * 4);
      uVar9 = *(uint *)((longlong)ppppppplVar32[0x46] + (longlong)ppppppplVar13 * 4);
      if (uVar9 < uVar34) {
        uVar34 = uVar9;
      }
      *(uint *)((longlong)ppppppplVar32[0x46] + (longlong)ppppppplVar13 * 4) = uVar34;
      pppppplVar36 = ppppppplVar32[0x46];
      uVar9 = *(uint *)((longlong)pppppplVar36 + (longlong)ppppppplVar13 * 4);
      uVar34 = *(uint *)((longlong)ppppppplVar32 + 0x274);
      if (*(uint *)((longlong)ppppppplVar32 + 0x274) < uVar9) {
        uVar34 = uVar9;
      }
      *(uint *)((longlong)ppppppplVar32 + 0x274) = uVar34;
      ppppppplVar13 = (longlong *******)((longlong)ppppppplVar13 + 1);
    } while (ppppppplVar50 != ppppppplVar13);
    local_434 = (uint)CONCAT71((int7)((ulonglong)ppppppplVar13 >> 8),1);
  }
  if ((DAT_14c7628e4 == 0) || (uVar34 != 0)) {
    uVar9 = *(uint *)(ppppppplVar32 + 0x4f);
    if (*(uint *)(ppppppplVar32 + 0x4f) < uVar34) {
      uVar9 = uVar34;
    }
    if (uVar9 < *(uint *)(pppplVar23 + 1)) {
      uVar9 = *(uint *)(pppplVar23 + 1);
    }
  }
  else {
    uVar9 = *(uint *)(ppppppplVar32 + 0x4f);
  }
  if (uVar9 < uVar44) {
    uVar9 = uVar44;
  }
  *(uint *)(ppppppplVar32 + 0x4f) = uVar9;
  local_404 = CONCAT31((int3)(local_404 >> 8),(byte)local_404 | *(byte *)(ppppppplVar32[10][1] + 7))
  ;
  pppplVar28 = pppplVar23 + 0x1e;
  if ((longlong ****)pppplVar23[0x21] != (longlong ****)0x0) {
    pppplVar28 = (longlong ****)pppplVar23[0x21];
  }
  local_428 = (ulonglong)local_41c;
  if ((longlong)*(int *)(pppplVar23 + 0x22) != 0) {
    local_370 = (longlong ****)((longlong)pppplVar28 + (longlong)*(int *)(pppplVar23 + 0x22) * 0x14)
    ;
    local_358 = local_458 + 0x3e;
    local_3d0 = (longlong)ppppppplVar50 * 4;
    local_360 = local_458 + 0x46;
    bVar30 = 1;
    local_428 = (ulonglong)local_41c;
    do {
      local_3a8 = (ulonglong)*(ushort *)pppplVar28;
      local_340 = local_458[0x50][5] + local_3a8 * 0x15;
      local_348 = (longlong ****)FUN_1439f8ae2(pppplVar23);
      local_3ec = (uint)*(ushort *)((longlong)pppplVar28 + 2);
      if (local_3ec != 0) {
        local_350 = pppplVar28 + 1;
        local_428 = (ulonglong)(int)local_428;
        local_430 = (longlong ******)((ulonglong)local_430 & 0xffffffff00000000);
        local_3b0 = pppplVar28;
        do {
          pppppplVar36 = *ppppppplVar43;
          lVar21 = local_428 * 6;
          iVar35 = *(int *)(pppppplVar36 + local_428 * 6 + 3);
          lVar45 = (longlong)iVar35;
          *(uint *)(pppppplVar36 + local_428 * 6 + 3) = iVar35 + 1U;
          if (*(uint *)((longlong)pppppplVar36 + local_428 * 0x30 + 0x1c) < iVar35 + 1U) {
            FUN_144aef31e(pppppplVar36 + lVar21 + 2,iVar35);
          }
          ppppplVar5 = pppppplVar36[lVar21 + 2];
          lVar21 = lVar45 * 0xa8;
          uVar3 = *(ushort *)(ppppplVar5 + lVar45 * 0x15 + 2);
          ppppplVar5[lVar45 * 0x15] = pppplVar31;
          ppppplVar5[lVar45 * 0x15 + 1] = local_3f8;
          *(ushort *)(ppppplVar5 + lVar45 * 0x15 + 2) = uVar3 & 0xfff8;
          *(undefined2 *)((longlong)ppppplVar5 + lVar21 + 0x12) = 0xffff;
          *(undefined8 *)((longlong)ppppplVar5 + lVar21 + 0x14) = 0;
          ppppplVar5[lVar45 * 0x15 + 4] = DAT_14c9a5298;
          *(undefined4 *)(ppppplVar5 + lVar45 * 0x15 + 5) = DAT_14c9a52a0;
          *(undefined4 *)((longlong)ppppplVar5 + lVar21 + 0x2c) = 0xffffffff;
          ppppplVar5[lVar45 * 0x15 + 6] = (longlong ****)0x0;
          *(undefined4 *)(ppppplVar5 + lVar45 * 0x15 + 7) = 0;
          ppppplVar5[lVar45 * 0x15 + 8] = (longlong ****)0x0;
          (ppppplVar5 + lVar45 * 0x15 + 8)[1] = (longlong ****)0x0;
          ppppplVar5[lVar45 * 0x15 + 10] = (longlong ****)0x0;
          (ppppplVar5 + lVar45 * 0x15 + 10)[1] = (longlong ****)0x0;
          ppppplVar5[lVar45 * 0x15 + 0xc] = (longlong ****)0x0;
          (ppppplVar5 + lVar45 * 0x15 + 0xc)[1] = (longlong ****)0x0;
          ppppplVar5[lVar45 * 0x15 + 0xe] = (longlong ****)0x0;
          (ppppplVar5 + lVar45 * 0x15 + 0xe)[1] = (longlong ****)0x0;
          ppppplVar5[lVar45 * 0x15 + 0x10] = (longlong ****)0x0;
          (ppppplVar5 + lVar45 * 0x15 + 0x10)[1] = (longlong ****)0x0;
          *(undefined1 *)(ppppplVar5 + lVar45 * 0x15 + 0x12) = 0;
          ppppplVar5[lVar45 * 0x15 + 0x13] = (longlong ****)0x0;
          (ppppplVar5 + lVar45 * 0x15 + 0x13)[1] = (longlong ****)0x0;
          *(ushort *)(ppppplVar5 + lVar45 * 0x15 + 2) = (ushort)bVar30 | uVar3 & 0xfff8;
          *(short *)((longlong)ppppplVar5 + lVar21 + 0x12) = (short)local_3a8;
          *(short *)((longlong)ppppplVar5 + lVar21 + 0x14) = (short)local_3ec;
          *(short *)((longlong)ppppplVar5 + lVar21 + 0x16) = (short)local_430;
          *(ushort *)(ppppplVar5 + lVar45 * 0x15 + 3) = *(ushort *)((longlong)local_3b0 + 6);
          *(ushort *)((longlong)ppppplVar5 + lVar21 + 0x1a) = *(ushort *)((longlong)local_3b0 + 4);
          ppppplVar5[lVar45 * 0x15 + 4] = (longlong ****)*local_350;
          *(undefined4 *)(ppppplVar5 + lVar45 * 0x15 + 5) = *(undefined4 *)(local_350 + 1);
          ppppplVar5[lVar45 * 0x15 + 0x14] = (longlong ****)local_340;
          ppppplVar5[lVar45 * 0x15 + 0x13] = local_348;
          if ((int)uVar44 < 0) goto LAB_143a93671;
          ppppplVar46 = ppppplVar5 + lVar45 * 0x15 + 0xe;
          iVar35 = 0;
          if ((char)local_434 != '\0') {
            FUN_14480809c(ppppplVar46,uVar44);
            iVar35 = *(int *)((longlong)ppppplVar5 + lVar21 + 0x54);
          }
          ppppplVar27 = ppppplVar5 + lVar45 * 0x15 + 9;
          if (iVar35 < (int)uVar44) {
            FUN_14480809c(ppppplVar27,uVar44);
          }
          ppppplVar22 = ppppplVar5 + lVar45 * 0x15 + 0xb;
          if (*(int *)((longlong)ppppplVar5 + lVar21 + 100) < (int)uVar44) {
            FUN_14480809c(ppppplVar22,uVar44);
          }
          ppppplVar26 = ppppplVar5 + lVar45 * 0x15 + 0x10;
          if (*(int *)((longlong)ppppplVar5 + lVar21 + 0x8c) < (int)uVar44) {
            FUN_14480809c(ppppplVar26,uVar44);
          }
          uVar34 = uVar44;
          if ((char)local_434 != '\0') {
            do {
              iVar35 = *(int *)(ppppplVar5 + lVar45 * 0x15 + 0xf);
              *(uint *)(ppppplVar5 + lVar45 * 0x15 + 0xf) = iVar35 + 1U;
              if (*(uint *)((longlong)ppppplVar5 + lVar21 + 0x7c) < iVar35 + 1U) {
                FUN_1447808da(ppppplVar46,iVar35);
              }
              *(undefined4 *)((longlong)ppppplVar5[lVar45 * 0x15 + 0xe] + (longlong)iVar35 * 4) =
                   0xffffffff;
              iVar35 = *(int *)(ppppplVar5 + lVar45 * 0x15 + 10);
              *(uint *)(ppppplVar5 + lVar45 * 0x15 + 10) = iVar35 + 1U;
              if (*(uint *)((longlong)ppppplVar5 + lVar21 + 0x54) < iVar35 + 1U) {
                FUN_1447808da(ppppplVar27,iVar35);
              }
              *(undefined4 *)((longlong)ppppplVar5[lVar45 * 0x15 + 9] + (longlong)iVar35 * 4) =
                   0xffffffff;
              iVar35 = *(int *)(ppppplVar5 + lVar45 * 0x15 + 0xc);
              *(uint *)(ppppplVar5 + lVar45 * 0x15 + 0xc) = iVar35 + 1U;
              if (*(uint *)((longlong)ppppplVar5 + lVar21 + 100) < iVar35 + 1U) {
                FUN_1447808da(ppppplVar22,iVar35);
              }
              *(undefined4 *)((longlong)ppppplVar5[lVar45 * 0x15 + 0xb] + (longlong)iVar35 * 4) = 0;
              iVar35 = *(int *)(ppppplVar5 + lVar45 * 0x15 + 0x11);
              *(uint *)(ppppplVar5 + lVar45 * 0x15 + 0x11) = iVar35 + 1U;
              if (*(uint *)((longlong)ppppplVar5 + lVar21 + 0x8c) < iVar35 + 1U) {
                FUN_1447808da(ppppplVar26,iVar35);
              }
              *(undefined4 *)((longlong)*ppppplVar26 + (longlong)iVar35 * 4) = 0;
              uVar34 = uVar34 - 1;
            } while (uVar34 != 0);
          }
          sVar29 = local_3d0;
          ppppppplVar33 = local_458;
          *(undefined1 *)(ppppplVar5 + lVar45 * 0x15 + 0x12) = 1;
          if (*(char *)(local_458 + 0x45) == '\x01') {
            ppppppplVar43 = local_358 + (~*(uint *)(local_458 + 0x40) & 1);
          }
          else {
            ppppppplVar43 = (longlong *******)(local_458[10] + 0xf);
          }
          pppppplVar36 = *ppppppplVar43;
          if ((*(uint *)((longlong)ppppplVar5[lVar45 * 0x15 + 0x14] + 0x4c) & 1) == 0) {
            ppppplVar5[lVar45 * 0x15 + 8] = (longlong ****)pppppplVar36;
            memcpy(ppppplVar5[lVar45 * 0x15 + 9],local_458[0x41],local_3d0);
            memcpy(ppppplVar5[lVar45 * 0x15 + 0xb],ppppppplVar33[0x46],sVar29);
            ppppplVar5[lVar45 * 0x15 + 0xd] = (longlong ****)0x0;
LAB_143a92c0b:
            memcpy(ppppplVar5[lVar45 * 0x15 + 0xe],ppppppplVar33[0x41],sVar29);
            memcpy(ppppplVar5[lVar45 * 0x15 + 0x10],ppppppplVar33[0x46],sVar29);
            ppppppplVar33 = local_440;
          }
          else {
            if ((*(uint *)((longlong)ppppplVar5[lVar45 * 0x15 + 0x14] + 0x4c) & 2) != 0) {
              ppppplVar5[lVar45 * 0x15 + 8] = (longlong ****)0x0;
              memcpy(ppppplVar5[lVar45 * 0x15 + 9],local_458[0x41],local_3d0);
              memcpy(ppppplVar5[lVar45 * 0x15 + 0xb],ppppppplVar33[0x46],sVar29);
              ppppplVar5[lVar45 * 0x15 + 0xd] = (longlong ****)pppppplVar36;
              goto LAB_143a92c0b;
            }
            ppppplVar5[lVar45 * 0x15 + 8] = (longlong ****)pppppplVar36;
            memcpy(ppppplVar5[lVar45 * 0x15 + 9],local_458[0x41],local_3d0);
            ppppppplVar43 = local_360;
            if ((int)local_430 == 0) {
              ppppppplVar43 = (longlong *******)&local_2b8;
            }
            if ((short)local_3a8 != 0) {
              ppppppplVar43 = local_360;
            }
            memcpy(ppppplVar5[lVar45 * 0x15 + 0xb],*ppppppplVar43,sVar29);
            ppppppplVar43 = local_368;
            uVar47 = local_3c4;
            ppppplVar5[lVar45 * 0x15 + 0xd] =
                 (longlong ****)
                 ppppppplVar33[(ulonglong)(*(uint *)(ppppppplVar33 + 0x40) & 1) + 0x3e];
            if ((char)local_434 == '\0') {
              memcpy(*ppppplVar26,ppppppplVar33[0x46],sVar29);
              *(int *)(ppppppplVar33 + 0x40) = *(int *)(ppppppplVar33 + 0x40) + 1;
              memcpy(ppppppplVar33[0x41],*ppppplVar46,sVar29);
              *(undefined1 *)(ppppppplVar33 + 0x45) = 1;
              ppppppplVar33 = local_440;
            }
            else {
              ppppppplVar33 = (longlong *******)0x0;
              do {
                uVar11 = FUN_143a8d9ca(ppppppplVar43);
                sVar29 = local_3d0;
                ppppppplVar32 = local_458;
                *(undefined4 *)((longlong)*ppppplVar46 + (longlong)ppppppplVar33 * 4) = uVar11;
                ppppppplVar33 = (longlong *******)((longlong)ppppppplVar33 + 1);
              } while (ppppppplVar50 != ppppppplVar33);
              memcpy(*ppppplVar26,local_458[0x46],local_3d0);
              *(int *)(ppppppplVar32 + 0x40) = *(int *)(ppppppplVar32 + 0x40) + 1;
              memcpy(ppppppplVar32[0x41],*ppppplVar46,sVar29);
              ppppppplVar33 = local_440;
              *(undefined1 *)(ppppppplVar32 + 0x45) = 1;
              ppppppplVar43 = (longlong *******)0x0;
              do {
                pppplVar31 = *ppppplVar27;
                if (*(int *)((longlong)pppplVar31 + (longlong)ppppppplVar43 * 4) != -1) {
                  if ((((char)uVar47 == '\0') && (*(char *)(local_3e0 + 10) == '\x01')) &&
                     (*(int *)(local_458[1] + (longlong)ppppppplVar43) == -1)) {
                    *(undefined1 *)((longlong)local_450 + 0x2c1) = 1;
                    *(undefined4 *)((longlong)local_458[1] + (longlong)ppppppplVar43 * 8 + 4) =
                         *(undefined4 *)((longlong)*ppppplVar22 + (longlong)ppppppplVar43 * 4);
                    *(undefined4 *)(local_458[1] + (longlong)ppppppplVar43) =
                         *(undefined4 *)((longlong)*ppppplVar27 + (longlong)ppppppplVar43 * 4);
                    pppplVar31 = *ppppplVar27;
                  }
                  iVar35 = *(int *)(ppppppplVar33 + 1);
                  *(uint *)(ppppppplVar33 + 1) = iVar35 + 1U;
                  if (*(uint *)((longlong)ppppppplVar33 + 0xc) < iVar35 + 1U) {
                    FUN_1447808da(ppppppplVar33,iVar35);
                  }
                  *(undefined4 *)((longlong)*ppppppplVar33 + (longlong)iVar35 * 4) =
                       *(undefined4 *)((longlong)pppplVar31 + (longlong)ppppppplVar43 * 4);
                }
                ppppppplVar43 = (longlong *******)((longlong)ppppppplVar43 + 1);
              } while (ppppppplVar50 != ppppppplVar43);
            }
          }
          local_428 = local_428 + 1;
          uVar34 = (int)local_430 + 1;
          bVar30 = 0;
          local_430 = (longlong ******)CONCAT44(local_430._4_4_,uVar34);
          ppppppplVar43 = local_410;
          pppplVar31 = local_3e0;
        } while (uVar34 != local_3ec);
        bVar30 = 0;
        pppplVar23 = local_3f8;
        pppplVar28 = local_3b0;
      }
      pppplVar28 = (longlong ****)((longlong)pppplVar28 + 0x14);
    } while (pppplVar28 != local_370);
  }
  uVar34 = (uint)local_428;
  pppppplVar17 = *ppppppplVar43;
  lVar21 = (longlong)(int)(uVar34 - 1);
  pppppplVar36 = (longlong ******)pppppplVar17[lVar21 * 6 + 2];
  *(ushort *)(pppppplVar36 + (longlong)(*(int *)(pppppplVar17 + lVar21 * 6 + 3) + -1) * 0x15 + 2) =
       *(ushort *)
        (pppppplVar36 + (longlong)(*(int *)(pppppplVar17 + lVar21 * 6 + 3) + -1) * 0x15 + 2) | 2;
  *(uint *)(local_458 + 0x43) = uVar34 - 1;
  *(int *)((longlong)local_458 + 0x21c) = *(int *)(pppppplVar17 + lVar21 * 6 + 3) + -1;
  if ((int)local_408 < (int)uVar34) {
    local_408 = uVar34;
  }
  uVar34 = local_41c;
  if (local_2b8 != (longlong *******)0x0) {
    FUN_1400020a8();
    uVar34 = local_41c;
  }
LAB_143a92d4f:
  pppplVar23 = pppplVar23 + 0x25;
  if (pppplVar23 == local_378) goto LAB_143a92e2a;
  goto LAB_143a91c56;
LAB_143a92e2a:
  iVar35 = *(int *)(pppplVar31 + 9);
  if ((local_404 & 1) != 0) {
    if (iVar35 == 0) {
LAB_143a92f16:
      iVar35 = 0;
    }
    else {
      ppplVar6 = pppplVar31[5];
      pppppplVar17 = *ppppppplVar43;
      lVar21 = (longlong)(int)local_428;
      ppppppplVar50 = (longlong *******)((longlong)iVar35 * 0x128);
      lVar45 = 0;
      do {
        pppplVar31 = *(longlong *****)((longlong)ppplVar6 + lVar45 + 200);
        if ((((*(byte *)((longlong)pppplVar31[0xc] + 0xbc) & 1) != 0) &&
            (((ulonglong)pppplVar31[10][1][7] & 1) != 0)) &&
           (*(char *)(pppplVar31 + 0x45) == '\x01')) {
          iVar35 = *(int *)(pppppplVar17 + lVar21 * 6 + -1);
          lVar48 = (longlong)iVar35;
          *(uint *)(pppppplVar17 + lVar21 * 6 + -1) = iVar35 + 1U;
          if (*(uint *)((longlong)pppppplVar17 + lVar21 * 0x30 + -4) < iVar35 + 1U) {
            FUN_1418338c8(pppppplVar17 + lVar21 * 6 + -2,iVar35);
          }
          ppppplVar5 = pppppplVar17[lVar21 * 6 + -2];
          ppppplVar5[lVar48 * 4] = pppplVar31;
          ppppplVar5[lVar48 * 4 + 1] = (longlong ****)0x0;
          (ppppplVar5 + lVar48 * 4 + 1)[1] = (longlong ****)0x0;
          *(undefined4 *)(ppppplVar5 + lVar48 * 4 + 3) = 0;
          uVar34 = *(uint *)((longlong)local_450 + 0x29c);
          if (*(uint *)((longlong)local_450 + 0x29c) < *(uint *)(pppppplVar17 + lVar21 * 6 + -1)) {
            uVar34 = *(uint *)(pppppplVar17 + lVar21 * 6 + -1);
          }
          *(uint *)((longlong)local_450 + 0x29c) = uVar34;
        }
        lVar45 = lVar45 + 0x128;
      } while ((longlong)ppppppplVar50 - lVar45 != 0);
      iVar35 = *(int *)(local_3e0 + 9);
      ppppppplVar43 = local_410;
      pppplVar31 = local_3e0;
    }
  }
  uVar34 = iVar35 << (*(byte *)((longlong)pppplVar31 + 0x51) & 0x1f);
  iVar35 = *(int *)(pppplVar31 + 1);
  *(uint *)(pppplVar31 + 1) = uVar34 + iVar35;
  if ((uint)(*(int *)((longlong)pppplVar31 + 0xc) - iVar35) < uVar34) {
    FUN_144ab4262(pppplVar31,iVar35);
  }
  FUN_144b36941(*pppplVar31 + iVar35,uVar34);
  if (*(int *)(pppplVar31 + 9) != 0) {
    ppplVar6 = pppplVar31[5];
    uVar34 = 0;
    do {
      ppppppplVar32 = (longlong *******)(longlong)(int)uVar34;
      pppppplVar17 = (longlong ******)ppplVar6[(longlong)ppppppplVar32 * 0x25 + 0x19][0xe];
      ppppppplVar50 = ppppppplVar32;
      if (pppppplVar17 != (longlong ******)0x0) {
        bVar51 = true;
        if (*(int *)(pppppplVar17 + 5) == 0) {
          bVar51 = *(int *)((longlong)pppppplVar17 + 0x84) != 0;
        }
        uVar44 = *(uint *)((longlong)ppplVar6[(longlong)ppppppplVar32 * 0x25 + 0x19][0xc] + 0xbc);
        if (((uVar44 & 2) != 0) && (bVar51)) {
          local_488 = (longlong **)
                      (CONCAT44(local_488._4_4_,
                                *(uint *)(ppplVar6 + (longlong)ppppppplVar32 * 0x25 + 0x24) >> 2) &
                      0xffffffff00000001);
          local_480 = 1;
          pppppplVar36 = pppppplVar17;
          (**(code **)(*DAT_14ca83900 + 0x138))
                    (DAT_14ca83900,&local_2b8,ppplVar6[(longlong)ppppppplVar32 * 0x25 + 0x17]);
          ppppppplVar50 = (longlong *******)(*pppplVar31 + (longlong)ppppppplVar32);
          if ((longlong ********)ppppppplVar50 == &local_2b8) {
LAB_143a93083:
            ppppppplVar50 = local_2b8;
            if (local_2b8 != (longlong *******)0x0) {
              LOCK();
              ppppppplVar43 = local_2b8 + 1;
              pppppplVar20 = *ppppppplVar43;
              *(uint *)ppppppplVar43 = *(uint *)ppppppplVar43 - 1;
              UNLOCK();
              if (((ulonglong)pppppplVar20 & 0x3fffffff) == 1) {
                ppppppplVar43 = local_2b8 + 1;
                LOCK();
                uVar44 = *(uint *)ppppppplVar43;
                *(uint *)ppppppplVar43 = *(uint *)ppppppplVar43 | 0x40000000;
                UNLOCK();
                if ((uVar44 >> 0x1e & 1) == 0) {
                  bVar30 = *(byte *)((longlong)local_2b8 + 0xd);
                  plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar14[1] = (longlong)ppppppplVar50;
                  plVar16 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c8;
                  ppppppplVar33 = local_440;
                  if ((bVar30 & 2) == 0) {
                    do {
                      *plVar14 = (longlong)plVar16;
                      LOCK();
                      bVar51 = plVar16 != DAT_14ca843c0;
                      plVar15 = plVar14;
                      if (bVar51) {
                        plVar16 = DAT_14ca843c0;
                        plVar15 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar15;
                      UNLOCK();
                    } while (bVar51);
                  }
                  else {
                    do {
                      *plVar14 = (longlong)plVar15;
                      LOCK();
                      bVar51 = plVar15 != DAT_14ca843c8;
                      plVar16 = plVar14;
                      if (bVar51) {
                        plVar15 = DAT_14ca843c8;
                        plVar16 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar16;
                      UNLOCK();
                    } while (bVar51);
                  }
                }
              }
            }
          }
          else {
            pppppplVar20 = *ppppppplVar50;
            *ppppppplVar50 = (longlong ******)local_2b8;
            local_2b8 = (longlong *******)0x0;
            if (pppppplVar20 != (longlong ******)0x0) {
              LOCK();
              pppppplVar12 = pppppplVar20 + 1;
              ppppplVar5 = *pppppplVar12;
              *(uint *)pppppplVar12 = *(uint *)pppppplVar12 - 1;
              UNLOCK();
              if (((ulonglong)ppppplVar5 & 0x3fffffff) == 1) {
                pppppplVar12 = pppppplVar20 + 1;
                LOCK();
                uVar44 = *(uint *)pppppplVar12;
                *(uint *)pppppplVar12 = *(uint *)pppppplVar12 | 0x40000000;
                UNLOCK();
                if ((uVar44 >> 0x1e & 1) == 0) {
                  bVar30 = *(byte *)((longlong)pppppplVar20 + 0xd);
                  plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar14[1] = (longlong)pppppplVar20;
                  plVar16 = DAT_14ca843c0;
                  plVar15 = DAT_14ca843c8;
                  ppppppplVar33 = local_440;
                  if ((bVar30 & 2) == 0) {
                    do {
                      *plVar14 = (longlong)plVar16;
                      LOCK();
                      bVar51 = plVar16 != DAT_14ca843c0;
                      plVar15 = plVar14;
                      if (bVar51) {
                        plVar16 = DAT_14ca843c0;
                        plVar15 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar15;
                      UNLOCK();
                    } while (bVar51);
                  }
                  else {
                    do {
                      *plVar14 = (longlong)plVar15;
                      LOCK();
                      bVar51 = plVar15 != DAT_14ca843c8;
                      plVar16 = plVar14;
                      if (bVar51) {
                        plVar15 = DAT_14ca843c8;
                        plVar16 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar16;
                      UNLOCK();
                    } while (bVar51);
                  }
                }
              }
              goto LAB_143a93083;
            }
          }
          uVar44 = *(uint *)((longlong)ppplVar6[(longlong)ppppppplVar32 * 0x25 + 0x19][0xc] + 0xbc);
          bVar51 = true;
          ppppppplVar43 = local_410;
        }
        if (((uVar44 & 4) != 0) && (bVar51)) {
          local_488 = (longlong **)
                      (CONCAT44(local_488._4_4_,
                                *(uint *)(ppplVar6 + (longlong)ppppppplVar32 * 0x25 + 0x24) >> 2) &
                      0xffffffff00000001);
          local_480 = 1;
          (**(code **)(*DAT_14ca83900 + 0x138))
                    (DAT_14ca83900,&local_2b8,
                     (ulonglong)*(uint *)((longlong)pppppplVar17 + 0x84) +
                     (longlong)ppplVar6[(longlong)ppppppplVar32 * 0x25 + 0x17]);
          ppppppplVar32 = (longlong *******)(*pppplVar31 + (int)(*(int *)(pppplVar31 + 9) + uVar34))
          ;
          pppppplVar36 = pppppplVar17;
          if ((longlong ********)ppppppplVar32 != &local_2b8) {
            pppppplVar20 = *ppppppplVar32;
            *ppppppplVar32 = (longlong ******)local_2b8;
            local_2b8 = (longlong *******)0x0;
            if (pppppplVar20 == (longlong ******)0x0) goto LAB_143a9325f;
            LOCK();
            pppppplVar12 = pppppplVar20 + 1;
            ppppplVar5 = *pppppplVar12;
            *(uint *)pppppplVar12 = *(uint *)pppppplVar12 - 1;
            UNLOCK();
            if (((ulonglong)ppppplVar5 & 0x3fffffff) == 1) {
              pppppplVar12 = pppppplVar20 + 1;
              LOCK();
              uVar44 = *(uint *)pppppplVar12;
              *(uint *)pppppplVar12 = *(uint *)pppppplVar12 | 0x40000000;
              UNLOCK();
              if ((uVar44 >> 0x1e & 1) == 0) {
                bVar30 = *(byte *)((longlong)pppppplVar20 + 0xd);
                plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                plVar14[1] = (longlong)pppppplVar20;
                plVar16 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c8;
                ppppppplVar33 = local_440;
                pppppplVar36 = pppppplVar17;
                if ((bVar30 & 2) == 0) {
                  do {
                    *plVar14 = (longlong)plVar16;
                    LOCK();
                    bVar51 = plVar16 != DAT_14ca843c0;
                    plVar15 = plVar14;
                    if (bVar51) {
                      plVar16 = DAT_14ca843c0;
                      plVar15 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar15;
                    UNLOCK();
                  } while (bVar51);
                }
                else {
                  do {
                    *plVar14 = (longlong)plVar15;
                    LOCK();
                    bVar51 = plVar15 != DAT_14ca843c8;
                    plVar16 = plVar14;
                    if (bVar51) {
                      plVar15 = DAT_14ca843c8;
                      plVar16 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar16;
                    UNLOCK();
                  } while (bVar51);
                }
              }
            }
          }
          ppppppplVar32 = local_2b8;
          if (local_2b8 != (longlong *******)0x0) {
            LOCK();
            ppppppplVar13 = local_2b8 + 1;
            pppppplVar17 = *ppppppplVar13;
            *(uint *)ppppppplVar13 = *(uint *)ppppppplVar13 - 1;
            UNLOCK();
            if (((ulonglong)pppppplVar17 & 0x3fffffff) == 1) {
              ppppppplVar13 = local_2b8 + 1;
              LOCK();
              uVar44 = *(uint *)ppppppplVar13;
              *(uint *)ppppppplVar13 = *(uint *)ppppppplVar13 | 0x40000000;
              UNLOCK();
              if ((uVar44 >> 0x1e & 1) == 0) {
                bVar30 = *(byte *)((longlong)local_2b8 + 0xd);
                plVar14 = (longlong *)FUN_14001cc68(0x10,8);
                plVar14[1] = (longlong)ppppppplVar32;
                plVar16 = DAT_14ca843c0;
                plVar15 = DAT_14ca843c8;
                ppppppplVar33 = local_440;
                if ((bVar30 & 2) == 0) {
                  do {
                    *plVar14 = (longlong)plVar16;
                    LOCK();
                    bVar51 = plVar16 != DAT_14ca843c0;
                    plVar15 = plVar14;
                    if (bVar51) {
                      plVar16 = DAT_14ca843c0;
                      plVar15 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar15;
                    UNLOCK();
                  } while (bVar51);
                }
                else {
                  do {
                    *plVar14 = (longlong)plVar15;
                    LOCK();
                    bVar51 = plVar15 != DAT_14ca843c8;
                    plVar16 = plVar14;
                    if (bVar51) {
                      plVar15 = DAT_14ca843c8;
                      plVar16 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar16;
                    UNLOCK();
                  } while (bVar51);
                }
              }
            }
          }
        }
      }
LAB_143a9325f:
      uVar34 = uVar34 + 1;
    } while (uVar34 < *(uint *)(pppplVar31 + 9));
  }
  uVar40 = local_380 + 1;
  if (uVar40 == local_388) goto LAB_143a932ff;
  goto LAB_143a91bf0;
}



// FUNCTION 143a94042 FUN_143a94042 body=440 status=ok
// SIG undefined FUN_143a94042(void)

undefined2 * FUN_143a94042(undefined2 *param_1,undefined2 *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = *param_2;
  if (param_1 == param_2) {
    memcpy(param_1 + 0x18,param_2 + 0x18,0x198);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 4);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    puVar5 = *(undefined8 **)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 0xc) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar5 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_2 + 0x14) = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    memcpy(param_1 + 0x18,param_2 + 0x18,0x198);
    puVar5 = *(undefined8 **)(param_1 + 0xe4);
    *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(param_2 + 0xe4) = 0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar5 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  puVar5 = (undefined8 *)(param_2 + 0xe8);
  puVar6 = (undefined8 *)(param_1 + 0xe8);
  for (lVar4 = 0xd; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_1;
}



// FUNCTION 143a941fa FUN_143a941fa body=150 status=ok
// SIG undefined FUN_143a941fa(void)

void FUN_143a941fa(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((((param_4 != '\0') && (0 < *(int *)((longlong)param_3 + 0xc))) &&
       ((lVar1 = *param_3, *(char *)(lVar1 + 0x30e9) != '\0' ||
        (((*(char *)(lVar1 + 0x23ec) == '\0' && (*(char *)(lVar1 + 0x23e8) == '\0')) &&
         (*(char *)(lVar1 + 0x23eb) == '\0')))))) && ((DAT_14c7627fc != 0 && (DAT_14c7627f8 != 0))))
     && (DAT_14ca84d96 == '\x01')) {
    local_18 = (undefined4)*param_3;
    uStack_14 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_10 = (undefined4)param_3[1];
    uStack_c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_143a8da50();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a94292 FUN_143a94292 body=2295 status=ok
// SIG undefined FUN_143a94292(void)

void FUN_143a94292(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  ulonglong unaff_RBP;
  undefined6 uVar18;
  undefined8 *puVar19;
  undefined8 unaff_R13;
  ulonglong uVar20;
  bool bVar22;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  undefined1 local_2c1;
  uint local_2c0;
  undefined1 local_2b9;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_29f;
  undefined3 uStack_29b;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  longlong local_280;
  undefined *local_278;
  undefined8 local_258 [66];
  ulonglong local_48;
  undefined7 uVar21;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if ((param_5 == '\0') || (*(int *)((longlong)param_3 + 0xc) < 1)) {
LAB_143a942fa:
    uVar20 = 0;
  }
  else {
    lVar16 = *param_3;
    uVar21 = (undefined7)((ulonglong)unaff_R13 >> 8);
    uVar20 = CONCAT71(uVar21,1);
    if (*(char *)(lVar16 + 0x30e9) == '\0') {
      if ((*(char *)(lVar16 + 0x23ec) != '\0') || (*(char *)(lVar16 + 0x23e8) != '\0'))
      goto LAB_143a942fa;
      uVar20 = CONCAT71(uVar21,*(undefined1 *)(lVar16 + 0x23eb)) ^ 1;
    }
  }
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    local_2c0 = (uint)uVar20;
    if (0 < *(int *)((longlong)param_3 + 0xc)) {
      lVar16 = *param_3;
      if ((void *)(lVar16 + 0x3400) != (void *)0x0) {
        *(undefined1 *)(param_1 + 0x5b0) = 1;
        lVar15 = *(longlong *)(lVar16 + 0x3588);
        lVar8 = *(longlong *)(param_1 + 0x5b8);
        if (lVar8 != lVar15) {
          *(longlong *)(param_1 + 0x5b8) = lVar15;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
          if (lVar8 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar8 + 8);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar4 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar8 + 8);
              LOCK();
              uVar4 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar4 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)(lVar8 + 0xd);
                unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar5);
                plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                plVar9[1] = lVar8;
                plVar14 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c8;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar9 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar10 = plVar9;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar10;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar9 = (longlong)plVar10;
                    LOCK();
                    bVar22 = plVar10 != DAT_14ca843c8;
                    plVar14 = plVar9;
                    if (bVar22) {
                      plVar10 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        lVar15 = *(longlong *)(lVar16 + 0x3590);
        lVar8 = *(longlong *)(param_1 + 0x5c0);
        if (lVar8 != lVar15) {
          *(longlong *)(param_1 + 0x5c0) = lVar15;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
          if (lVar8 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar8 + 8);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar4 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar8 + 8);
              LOCK();
              uVar4 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar4 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)(lVar8 + 0xd);
                unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar5);
                plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                plVar9[1] = lVar8;
                plVar14 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c8;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar9 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar10 = plVar9;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar10;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar9 = (longlong)plVar10;
                    LOCK();
                    bVar22 = plVar10 != DAT_14ca843c8;
                    plVar14 = plVar9;
                    if (bVar22) {
                      plVar10 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        puVar13 = *(undefined8 **)(lVar16 + 0x3598);
        puVar19 = *(undefined8 **)(param_1 + 0x5c8);
        if (puVar19 != puVar13) {
          *(undefined8 **)(param_1 + 0x5c8) = puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
            UNLOCK();
          }
          if (puVar19 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar19 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar19)(puVar19,1);
            }
          }
        }
        lVar15 = *(longlong *)(lVar16 + 0x35a0);
        lVar8 = *(longlong *)(param_1 + 0x5d0);
        if (lVar8 != lVar15) {
          *(longlong *)(param_1 + 0x5d0) = lVar15;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
          if (lVar8 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar8 + 8);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar4 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar8 + 8);
              LOCK();
              uVar4 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar4 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)(lVar8 + 0xd);
                unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar5);
                plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                plVar9[1] = lVar8;
                plVar14 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c8;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar9 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar10 = plVar9;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar10;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar9 = (longlong)plVar10;
                    LOCK();
                    bVar22 = plVar10 != DAT_14ca843c8;
                    plVar14 = plVar9;
                    if (bVar22) {
                      plVar10 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        lVar15 = *(longlong *)(lVar16 + 0x35a8);
        lVar8 = *(longlong *)(param_1 + 0x5d8);
        if (lVar8 != lVar15) {
          *(longlong *)(param_1 + 0x5d8) = lVar15;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
          if (lVar8 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar8 + 8);
            uVar4 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar4 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar8 + 8);
              LOCK();
              uVar4 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar4 >> 0x1e & 1) == 0) {
                bVar5 = *(byte *)(lVar8 + 0xd);
                unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar5);
                plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                plVar9[1] = lVar8;
                plVar14 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c8;
                if ((bVar5 & 2) == 0) {
                  do {
                    *plVar9 = (longlong)plVar14;
                    LOCK();
                    bVar22 = plVar14 != DAT_14ca843c0;
                    plVar10 = plVar9;
                    if (bVar22) {
                      plVar14 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar10;
                    UNLOCK();
                  } while (bVar22);
                }
                else {
                  do {
                    *plVar9 = (longlong)plVar10;
                    LOCK();
                    bVar22 = plVar10 != DAT_14ca843c8;
                    plVar14 = plVar9;
                    if (bVar22) {
                      plVar10 = DAT_14ca843c8;
                      plVar14 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar14;
                    UNLOCK();
                  } while (bVar22);
                }
              }
            }
          }
        }
        memcpy((void *)(param_1 + 0x5e0),(void *)(lVar16 + 0x3400),0x198);
        puVar13 = *(undefined8 **)(lVar16 + 0x3598);
        puVar19 = *(undefined8 **)(param_1 + 0x778);
        uVar20 = (ulonglong)local_2c0;
        if (puVar19 != puVar13) {
          *(undefined8 **)(param_1 + 0x778) = puVar13;
          if (puVar13 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
            UNLOCK();
          }
          if (puVar19 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar19 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar19)(puVar19,1);
            }
          }
        }
        puVar13 = (undefined8 *)(lVar16 + 0x35a0);
        puVar19 = (undefined8 *)(param_1 + 0x780);
        for (lVar15 = 0xd; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar19 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar19 = puVar19 + 1;
        }
        goto LAB_143a94683;
      }
    }
    memset(&local_288,0,0x240);
    lVar16 = 0x3c;
    do {
      *(undefined8 *)((longlong)&uStack_294 + lVar16) = 0;
      *(undefined8 *)((longlong)&uStack_28c + lVar16) = 0x3f80000000000000;
      lVar16 = lVar16 + 0x10;
    } while (lVar16 != 0x9c);
    lVar16 = 0x9c;
    do {
      *(undefined8 *)((longlong)&uStack_294 + lVar16) = 0;
      *(undefined8 *)((longlong)&uStack_28c + lVar16) = 0x3f80000000000000;
      lVar16 = lVar16 + 0x10;
    } while (lVar16 != 0xfc);
    lVar16 = 0xfc;
    uVar20 = (ulonglong)local_2c0;
    do {
      *(undefined8 *)((longlong)&uStack_294 + lVar16) = 0;
      *(undefined8 *)((longlong)&uStack_28c + lVar16) = 0x3f80000000000000;
      lVar16 = lVar16 + 0x10;
    } while (lVar16 != 0x15c);
    lVar16 = 0x15c;
    do {
      *(undefined8 *)((longlong)&uStack_294 + lVar16) = 0;
      *(undefined8 *)((longlong)&uStack_28c + lVar16) = 0x3f80000000000000;
      lVar16 = lVar16 + 0x10;
    } while (lVar16 != 0x1bc);
    memset(local_258,0,0x210);
    FUN_143a94042(param_1 + 0x5b0,&local_288);
    FUN_143a8ba88(&local_288);
  }
LAB_143a94683:
  local_2c1 = *(undefined1 *)(param_1 + 0x5b1);
  *(undefined1 *)(param_1 + 0x5b1) = *(undefined1 *)(param_1 + 0x5b0);
  if ((char)uVar20 == '\0') {
    uVar11 = FUN_1448c569e(param_4,param_2);
  }
  else {
    if (0 < *(int *)((longlong)param_3 + 0xc)) {
      lVar16 = *param_3;
      lVar15 = *(longlong *)(lVar16 + 8);
      if (lVar15 != 0) {
        *(undefined8 *)(param_1 + 0x480) = *(undefined8 *)(lVar15 + 0x98);
        uVar11 = *(undefined8 *)(lVar15 + 0x90);
        *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(lVar15 + 0x88);
        *(undefined8 *)(param_1 + 0x478) = uVar11;
        lVar16 = *param_3;
      }
      uVar11 = *(undefined8 *)(lVar16 + 0x3100);
      *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(lVar16 + 0x30f8);
      *(undefined8 *)(param_1 + 0x490) = uVar11;
      lVar16 = *param_3;
      *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(lVar16 + 0x50);
      uVar11 = *(undefined8 *)(lVar16 + 0x48);
      *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(lVar16 + 0x40);
      *(undefined8 *)(param_1 + 0x4a0) = uVar11;
      puVar13 = (undefined8 *)(*param_3 + 0x60);
      puVar19 = (undefined8 *)(param_1 + 0x4b0);
      for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar19 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar19 = puVar19 + 1;
      }
      puVar13 = (undefined8 *)(*param_3 + 0xe0);
      puVar19 = (undefined8 *)(param_1 + 0x530);
      for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar19 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar19 = puVar19 + 1;
      }
    }
    uVar11 = FUN_1448c569e(param_4,param_2);
    if (((DAT_14c7627fc != 0) && (DAT_14c7627f8 != 0)) && (DAT_14ca84d96 == '\x01')) {
      uVar12 = FUN_143a94b8a(param_2,uVar11);
      local_298 = (undefined4)*param_3;
      uStack_294 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_290 = (undefined4)param_3[1];
      uStack_28c = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_1415b860c();
      FUN_140069376(param_2);
      uVar18 = (undefined6)(unaff_RBP >> 0x10);
      unaff_RBP = CONCAT62(uVar18,0x12);
      local_2c0 = (uint)uVar20;
      if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
         ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
        unaff_RBP = CONCAT62(uVar18,0x14);
      }
      puVar3 = (ulonglong *)(param_2 + 0x70);
      puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar13 = puVar19 + 0x3b;
      if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
        FUN_140023dd8(puVar3,0x1e0);
        puVar19 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar19 + 0x3b;
      }
      *puVar3 = (ulonglong)puVar13;
      local_280 = DAT_14cb3f0c0;
      if (DAT_14cb3f0c0 != 0) {
        LOCK();
        *(int *)(DAT_14cb3f0c0 + 8) = *(int *)(DAT_14cb3f0c0 + 8) + 1;
        UNLOCK();
      }
      local_278 = &DAT_14cb3f078;
      local_2d8 = 0;
      local_288 = uVar12;
      FUN_140068f1a(puVar19,&local_29f,&local_288,unaff_RBP & 0xffffffff);
      *puVar19 = &PTR_FUN_14adff7c0;
      puVar19[0x37] = param_1;
      *(undefined4 *)(puVar19 + 0x38) = local_298;
      *(undefined4 *)((longlong)puVar19 + 0x1c4) = uStack_294;
      *(undefined4 *)(puVar19 + 0x39) = uStack_290;
      *(undefined4 *)((longlong)puVar19 + 0x1cc) = uStack_28c;
      puVar19[0x3a] = uVar12;
      iVar7 = *(int *)(param_2 + 0x170);
      *(uint *)(param_2 + 0x170) = iVar7 + 1U;
      uVar20 = (ulonglong)local_2c0;
      if (*(uint *)(param_2 + 0x174) < iVar7 + 1U) {
        FUN_14470e57a(param_2 + 0x168,iVar7);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar7 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
      FUN_140069100(param_2,puVar19);
      local_2b8 = (undefined4)*param_3;
      uStack_2b4 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_2b0 = (undefined4)param_3[1];
      uStack_2ac = *(undefined4 *)((longlong)param_3 + 0xc);
      FUN_143a8da50(param_1,param_2,&local_2b8,2);
    }
  }
  uVar11 = FUN_143a94b8a(param_2,uVar11);
  uVar6 = *(undefined1 *)(param_1 + 0x2c1);
  FUN_1415b860c();
  FUN_140069376(param_2);
  uVar18 = (undefined6)(unaff_RBP >> 0x10);
  uVar17 = (undefined4)CONCAT62(uVar18,0x12);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar17 = (undefined4)CONCAT62(uVar18,0x14);
  }
  puVar3 = (ulonglong *)(param_2 + 0x70);
  puVar19 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar19 + 0x3b;
  if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
    FUN_140023dd8(puVar3,0x1e0);
    puVar19 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar19 + 0x3b;
  }
  *puVar3 = (ulonglong)puVar13;
  local_280 = DAT_14cb3f0c0;
  if (DAT_14cb3f0c0 != 0) {
    LOCK();
    *(int *)(DAT_14cb3f0c0 + 8) = *(int *)(DAT_14cb3f0c0 + 8) + 1;
    UNLOCK();
  }
  local_278 = &DAT_14cb3f078;
  local_2d8 = 0;
  local_288 = uVar11;
  FUN_140068f1a(puVar19,&local_2b9,&local_288,uVar17);
  *puVar19 = &PTR_FUN_14adff830;
  puVar19[0x37] = param_1;
  *(undefined1 *)(puVar19 + 0x38) = uVar6;
  *(undefined4 *)((longlong)puVar19 + 0x1c1) = local_298;
  *(uint *)((longlong)puVar19 + 0x1c4) = CONCAT31((undefined3)uStack_294,local_298._3_1_);
  puVar19[0x39] = uVar11;
  *(char *)(puVar19 + 0x3a) = (char)uVar20;
  *(undefined4 *)((longlong)puVar19 + 0x1d1) = local_29f;
  *(uint *)((longlong)puVar19 + 0x1d4) = CONCAT31(uStack_29b,local_29f._3_1_);
  iVar7 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar7 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar7);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar7 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar19);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  iVar7 = *(int *)(param_2 + 0x610);
  *(uint *)(param_2 + 0x610) = iVar7 + 1U;
  if (*(uint *)(param_2 + 0x614) < iVar7 + 1U) {
    FUN_140184790(param_2 + 0x608,iVar7);
  }
  lVar16 = *(longlong *)(param_2 + 0x608);
  lVar15 = (longlong)iVar7 * 0x40;
  *(code **)(lVar16 + lVar15) = FUN_143a9f104;
  *(undefined8 *)(lVar16 + 0x10 + lVar15) = 0;
  *(undefined ***)(lVar16 + 0x20 + lVar15) = &PTR_LAB_14adff850;
  *(longlong *)(lVar16 + 0x28 + lVar15) = param_1;
  *(undefined8 *)(lVar16 + 0x30 + lVar15) = uVar11;
  *(char *)(lVar16 + 0x38 + lVar15) = (char)uVar20;
  *(undefined1 *)(param_1 + 0x2c1) = 0;
  FUN_142bc9066(param_1 + 0x208,param_2);
  *(undefined1 *)(param_1 + 0x5b1) = local_2c1;
  if ((local_48 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a94b8a FUN_143a94b8a body=276 status=ok
// SIG undefined FUN_143a94b8a(void)

undefined8 * FUN_143a94b8a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar4 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x30);
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar4 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  *puVar4 = &PTR_FUN_14adfeae8;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 1;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b328) {
    FUN_144b3d300(&DAT_14ca4b328);
    if (DAT_14ca4b328 == -1) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
  }
  cVar3 = '\x02';
  if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
    cVar3 = *(char *)(DAT_14ca4b320 + 0x41);
  }
  puVar4[2] = param_2;
  *(char *)(puVar4 + 3) = cVar3;
  return puVar4 + 2;
}



// FUNCTION 143a94cc6 FUN_143a94cc6 body=1270 status=ok
// SIG undefined FUN_143a94cc6(void)

void FUN_143a94cc6(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  longlong lVar6;
  void *pvVar7;
  size_t sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  void *local_80;
  undefined8 *local_78;
  void *local_70;
  undefined8 local_68;
  int local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x398);
  if ((longlong)iVar1 != 0) {
    pvVar7 = *(void **)(param_1 + 0x390);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar10 + 4;
    if ((undefined8 *)param_2[1] < puVar3) {
      FUN_140023dd8(param_2,0x28);
      puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar10 + 4;
    }
    *param_2 = (ulonglong)puVar3;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar10;
    param_2[6] = (ulonglong)(puVar10 + 1);
    sVar8 = (longlong)iVar1 * 0x48;
    pvVar4 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
    pvVar11 = (void *)((longlong)pvVar4 + sVar8);
    if ((void *)param_2[1] < pvVar11) {
      FUN_140023dd8(param_2,(int)sVar8 + 8);
      pvVar4 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
      pvVar11 = (void *)((longlong)pvVar4 + sVar8);
    }
    *param_2 = (ulonglong)pvVar11;
    memcpy(pvVar4,pvVar7,sVar8);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_14a2687f0;
    puVar10[2] = pvVar4;
    *(int *)(puVar10 + 3) = iVar1;
    iVar1 = *(int *)(param_1 + 0x39c);
    FUN_142d62ffc(*(undefined8 *)(param_1 + 0x390),*(undefined4 *)(param_1 + 0x398));
    *(undefined4 *)(param_1 + 0x398) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x39c) != 0)) {
      FUN_1481ccbaa((undefined8 *)(param_1 + 0x390));
    }
  }
  if (DAT_14c760da4 != 0) {
    lVar6 = 0;
    uVar5 = 0;
    uVar2 = DAT_14c760da4;
    do {
      iVar1 = *(int *)(param_1 + 0x3b0 + lVar6);
      if (iVar1 != 0) {
        puVar10 = (undefined8 *)(param_1 + 0x3a8 + lVar6);
        local_58 = (void *)0x0;
        uStack_50 = 0;
        local_68 = *puVar10;
        local_60 = iVar1;
        FUN_1474131cd(&local_68,&local_58);
        pvVar7 = local_58;
        local_84 = (int)uStack_50;
        local_80 = (void *)*puVar10;
        local_88 = *(int *)(puVar10 + 1);
        puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar9 + 6;
        local_78 = puVar10;
        if ((undefined8 *)param_2[1] < puVar3) {
          FUN_140023dd8(param_2,0x38);
          puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar9 + 6;
        }
        *param_2 = (ulonglong)puVar3;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar9;
        param_2[6] = (ulonglong)(puVar9 + 1);
        if (local_84 == 0) {
          pvVar11 = (void *)0x0;
        }
        else {
          pvVar11 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
          pvVar4 = (void *)((longlong)pvVar11 + (longlong)local_84 * 8);
          sVar8 = (longlong)local_84 * 8;
          if ((void *)param_2[1] < pvVar4) {
            FUN_140023dd8(param_2,(int)sVar8 + 8);
            pvVar11 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
            pvVar4 = (void *)((longlong)pvVar11 + sVar8);
          }
          *param_2 = (ulonglong)pvVar4;
          memcpy(pvVar11,pvVar7,sVar8);
        }
        if (local_88 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          sVar8 = (longlong)local_88 * 0x48;
          pvVar7 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
          pvVar4 = (void *)((longlong)pvVar7 + sVar8);
          if ((void *)param_2[1] < pvVar4) {
            FUN_140023dd8(param_2,(int)sVar8 + 8);
            pvVar7 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
            pvVar4 = (void *)((longlong)pvVar7 + sVar8);
          }
          *param_2 = (ulonglong)pvVar4;
          memcpy(pvVar7,local_80,sVar8);
        }
        puVar9[1] = 0;
        *puVar9 = &PTR_FUN_14a2f12a8;
        puVar9[2] = pvVar7;
        *(int *)(puVar9 + 3) = local_88;
        puVar9[4] = pvVar11;
        *(int *)(puVar9 + 5) = local_84;
        local_80 = local_58;
        local_84 = (int)uStack_50;
        local_70 = (void *)*local_78;
        local_88 = *(int *)(local_78 + 1);
        puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar10 + 8;
        if ((undefined8 *)param_2[1] < puVar3) {
          FUN_140023dd8(param_2,0x48);
          puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar10 + 8;
        }
        *param_2 = (ulonglong)puVar3;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar10;
        param_2[6] = (ulonglong)(puVar10 + 1);
        puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar9 + 1;
        if ((undefined8 *)param_2[1] < puVar3) {
          FUN_140023dd8(param_2,0x10);
          puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar9 + 1;
        }
        *param_2 = (ulonglong)puVar3;
        *puVar9 = *(undefined8 *)(param_1 + 0x428 + uVar5 * 8);
        if (local_84 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
          pvVar11 = (void *)((longlong)pvVar7 + (longlong)local_84 * 8);
          sVar8 = (longlong)local_84 * 8;
          if ((void *)param_2[1] < pvVar11) {
            FUN_140023dd8(param_2,(int)sVar8 + 8);
            pvVar7 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
            pvVar11 = (void *)((longlong)pvVar7 + sVar8);
          }
          *param_2 = (ulonglong)pvVar11;
          memcpy(pvVar7,local_80,sVar8);
        }
        if (local_88 == 0) {
          pvVar11 = (void *)0x0;
        }
        else {
          local_80 = (void *)((longlong)local_88 * 0x48);
          pvVar11 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
          pvVar4 = (void *)((longlong)local_80 + (longlong)pvVar11);
          if ((void *)param_2[1] < pvVar4) {
            FUN_140023dd8(param_2,(int)local_80 + 8);
            pvVar11 = (void *)(*param_2 + 7 & 0xfffffffffffffff8);
            pvVar4 = (void *)((longlong)local_80 + (longlong)pvVar11);
          }
          *param_2 = (ulonglong)pvVar4;
          memcpy(pvVar11,local_70,(size_t)local_80);
        }
        puVar10[1] = 0;
        *puVar10 = &PTR_FUN_14a2f12b0;
        puVar10[2] = pvVar11;
        *(int *)(puVar10 + 3) = local_88;
        puVar10[4] = pvVar7;
        *(int *)(puVar10 + 5) = local_84;
        puVar10[6] = puVar9;
        *(undefined4 *)(puVar10 + 7) = 1;
        iVar1 = *(int *)(param_1 + 0x3b4 + lVar6);
        FUN_142d62ffc(*(undefined8 *)(param_1 + 0x3a8 + lVar6),
                      *(undefined4 *)(param_1 + 0x3b0 + lVar6));
        *(undefined4 *)(param_1 + 0x3b0 + lVar6) = 0;
        if ((iVar1 < 0) && (*(int *)(param_1 + 0x3b4 + lVar6) != 0)) {
          FUN_1481ccbaa(local_78);
        }
        uVar2 = DAT_14c760da4;
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
          uVar2 = DAT_14c760da4;
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar5 < uVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a951bd FUN_143a951bd body=69 status=ok
// SIG undefined FUN_143a951bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a951bd(void)

{
  _DAT_14cb3e950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a951ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e958,1);
  return;
}



// FUNCTION 143a95202 FUN_143a95202 body=69 status=ok
// SIG undefined FUN_143a95202(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a95202(void)

{
  _DAT_14cb3e960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a95244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e968,1);
  return;
}



// FUNCTION 143a95247 FUN_143a95247 body=69 status=ok
// SIG undefined FUN_143a95247(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a95247(void)

{
  _DAT_14cb3e970 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a95289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e978,1);
  return;
}



// FUNCTION 143a9528c FUN_143a9528c body=69 status=ok
// SIG undefined FUN_143a9528c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9528c(void)

{
  _DAT_14cb3e980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a952ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e988,1);
  return;
}



// FUNCTION 143a952d1 FUN_143a952d1 body=69 status=ok
// SIG undefined FUN_143a952d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a952d1(void)

{
  _DAT_14cb3e990 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a95313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e998,1);
  return;
}



// FUNCTION 143a95316 FUN_143a95316 body=69 status=ok
// SIG undefined FUN_143a95316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a95316(void)

{
  _DAT_14cb3e9a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a95358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e9a8,1);
  return;
}



// FUNCTION 143a9535b FUN_143a9535b body=69 status=ok
// SIG undefined FUN_143a9535b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9535b(void)

{
  _DAT_14cb3e9b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a9539d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e9b8,1);
  return;
}



// FUNCTION 143a953a0 FUN_143a953a0 body=69 status=ok
// SIG undefined FUN_143a953a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a953a0(void)

{
  _DAT_14cb3e9c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a953e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e9c8,1);
  return;
}



// FUNCTION 143a953e5 FUN_143a953e5 body=69 status=ok
// SIG undefined FUN_143a953e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a953e5(void)

{
  _DAT_14cb3e9d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a95427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e9d8,1);
  return;
}



// FUNCTION 143a9542a FUN_143a9542a body=4325 status=ok
// SIG undefined FUN_143a9542a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_143a9542a(longlong param_1,longlong param_2,ulonglong *param_3,uint param_4)

{
  byte bVar1;
  int *piVar2;
  ulonglong *puVar3;
  void *_Dst;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  char cVar22;
  undefined8 unaff_RDI;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  bool bVar32;
  float fVar33;
  undefined1 auStack_3f8 [32];
  uint *local_3d8;
  undefined4 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  longlong local_3b0;
  uint local_3a4;
  ulonglong *local_3a0;
  uint local_394;
  undefined8 *local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  ulonglong local_360;
  int *local_358;
  ulonglong local_350;
  undefined1 *local_348;
  undefined4 local_340;
  uint local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 local_300;
  int local_2f8;
  int iStack_2f4;
  int iStack_2f0;
  int iStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 *local_2d8;
  undefined4 local_2d0;
  longlong local_2c8;
  longlong lStack_2c0;
  undefined4 local_2b8;
  undefined1 local_2a8 [20];
  uint local_294;
  undefined1 *local_290;
  undefined1 local_288 [560];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_350 = (ulonglong)param_4;
  lVar31 = param_1 + local_350 * 0x10;
  puVar18 = (undefined8 *)(lVar31 + 0xd0);
  if ((param_4 == 0) && (0 < *(int *)(param_1 + 0x148))) {
    uVar15 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(undefined1 *)(param_2 + 0x1d1));
  }
  else {
    uVar15 = 0;
  }
  uVar13 = *(uint *)(lVar31 + 0xd8);
  puVar11 = (uint *)(ulonglong)uVar13;
  local_3b0 = param_1;
  if ((((~(byte)uVar15 & (int)uVar13 < 1) == 0) && (DAT_14c7627f8 != 0)) &&
     ((DAT_14ca84d96 & 1) != 0)) {
    local_2c8 = 0;
    lStack_2c0 = 0;
    local_2b8 = 0;
    uVar13 = uVar13 * 0x14;
    uVar14 = 0;
    if ((byte)uVar15 != 0) {
      uVar14 = *(int *)(param_1 + 0x148) << 2;
    }
    local_3d8 = (uint *)CONCAT44(local_3d8._4_4_,uVar14 + uVar13 >> 2);
    local_3c0 = 0;
    local_3c8 = 4;
    local_3d0 = CONCAT31(local_3d0._1_3_,0x1c);
    local_3a4 = (uint)uVar15;
    local_390 = puVar18;
    local_378 = param_2;
    FUN_140661c88(&local_2c8,param_3,L"NiagaraTaskInfosBuffer",4);
    lVar31 = local_2c8;
    cVar22 = *(char *)((longlong)param_3 + 0x69);
    if (cVar22 == '\0') {
      FUN_14002049c(param_3,1);
    }
    local_3d8 = (uint *)CONCAT44(local_3d8._4_4_,uVar14 + uVar13);
    local_3d0 = 1;
    _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_3,lVar31,0);
    if (cVar22 == '\0') {
      FUN_14002049c(param_3,0);
    }
    local_3a0 = param_3;
    memcpy(_Dst,(void *)*local_390,(ulonglong)uVar13);
    puVar3 = local_3a0;
    lVar31 = local_3b0;
    memcpy((void *)((longlong)_Dst + (ulonglong)uVar13),*(void **)(local_3b0 + 0x140),
           (ulonglong)uVar14);
    lVar24 = local_2c8;
    if (*(char *)((longlong)puVar3 + 0x69) == '\0') {
      FUN_14002049c(puVar3,1);
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar3,lVar24);
      FUN_14002049c(puVar3,0);
    }
    else {
      (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar3,local_2c8);
    }
    piVar2 = *(int **)(local_378 + 0x30);
    *piVar2 = *piVar2 + 1;
    local_58 = (undefined1 *)0x0;
    local_50 = 0xa00000000;
    iVar29 = *(int *)(lVar31 + 0x168);
    if (iVar29 < -2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar29 + 2);
    }
    if (8 < iVar29) {
      FUN_1481ccbda(local_288);
    }
    uVar15 = local_50;
    uVar19 = 0x20;
    if (param_4 != 1) {
      uVar19 = (ulonglong)((*(byte *)(local_378 + 0x1d1) ^ 1) << 7) | 0x20;
    }
    lVar24 = *(longlong *)(lVar31 + 8 + uVar19);
    local_370 = lVar24;
    if (lVar24 == 0) {
      local_380 = FUN_1405668b6(*(undefined8 *)(local_378 + 0x30),puVar3,0x1c,0);
      if (local_380 != 0) goto LAB_143a95713;
LAB_143a95733:
      local_380 = 0;
    }
    else {
      lVar23 = (longlong)(int)local_50;
      uVar13 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,uVar13);
      if (local_50._4_4_ < uVar13) {
        FUN_1481cccde(local_288,uVar15 & 0xffffffff);
        lVar24 = *(longlong *)(lVar31 + 8 + uVar19);
      }
      puVar9 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar9 = local_288;
      }
      lVar23 = lVar23 * 0x38;
      *(undefined8 *)(puVar9 + lVar23) = 0xffffffffffffffff;
      *(undefined4 *)(puVar9 + lVar23 + 8) = 0xffffffff;
      *(longlong *)(puVar9 + lVar23 + 0x10) = lVar24;
      puVar9[lVar23 + 0x18] = 3;
      *(undefined8 *)(puVar9 + lVar23 + 0x1c) = 0x40000000000;
      *(undefined4 *)(puVar9 + lVar23 + 0x24) = 0;
      puVar9[lVar23 + 0x30] = 0;
      local_380 = *(longlong *)(lVar31 + 8 + uVar19);
      if (local_380 == 0) goto LAB_143a95733;
LAB_143a95713:
      LOCK();
      *(int *)(local_380 + 8) = *(int *)(local_380 + 8) + 1;
      UNLOCK();
    }
    uVar15 = local_50;
    local_388 = DAT_14cb428f0;
    local_394 = param_4;
    local_360 = uVar19;
    local_358 = piVar2;
    if (*(longlong *)(lVar31 + 0x60) == 0) {
LAB_143a957e0:
      if (local_388 != 0) goto LAB_143a957e5;
      local_388 = 0;
    }
    else {
      iVar29 = *(int *)(lVar31 + 0x1c);
      local_388 = *(longlong *)(lVar31 + 0x60);
      if (iVar29 != 0x10) {
        lVar24 = (longlong)(int)local_50;
        uVar13 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar13);
        if (local_50._4_4_ < uVar13) {
          FUN_1481cccde(local_288,uVar15 & 0xffffffff);
          iVar29 = *(int *)(lVar31 + 0x1c);
        }
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_288;
        }
        lVar24 = lVar24 * 0x38;
        uVar6 = *(undefined8 *)(lVar31 + 0x58);
        *(undefined8 *)(puVar9 + lVar24) = 0xffffffffffffffff;
        *(undefined4 *)(puVar9 + lVar24 + 8) = 0xffffffff;
        *(undefined8 *)(puVar9 + lVar24 + 0x10) = uVar6;
        puVar9[lVar24 + 0x18] = 3;
        *(int *)(puVar9 + lVar24 + 0x1c) = iVar29;
        *(undefined8 *)(puVar9 + lVar24 + 0x20) = 0x10;
        puVar9[lVar24 + 0x30] = 0;
        *(undefined4 *)(lVar31 + 0x1c) = 0x10;
        local_388 = *(longlong *)(lVar31 + 0x60);
        goto LAB_143a957e0;
      }
LAB_143a957e5:
      LOCK();
      *(int *)(local_388 + 8) = *(int *)(local_388 + 8) + 1;
      UNLOCK();
    }
    iVar29 = *(int *)(lVar31 + 0x168);
    if ((longlong)iVar29 != 0) {
      lVar31 = *(longlong *)(local_3b0 + 0x160);
      lVar24 = 0;
      do {
        uVar15 = local_50;
        lVar23 = *(longlong *)(lVar31 + lVar24);
        lVar30 = (longlong)(int)local_50;
        uVar13 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar13);
        if (local_50._4_4_ < uVar13) {
          FUN_1481cccde(local_288,uVar15 & 0xffffffff);
        }
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_288;
        }
        lVar30 = lVar30 * 0x38;
        uVar6 = *(undefined8 *)(lVar23 + 8);
        *(undefined8 *)(puVar9 + lVar30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar9 + lVar30 + 8) = 0xffffffff;
        *(undefined8 *)(puVar9 + lVar30 + 0x10) = uVar6;
        puVar9[lVar30 + 0x18] = 3;
        *(undefined8 *)(puVar9 + lVar30 + 0x1c) = 0x40000000074;
        *(undefined4 *)(puVar9 + lVar30 + 0x24) = 0;
        puVar9[lVar30 + 0x30] = 0;
        lVar24 = lVar24 + 8;
      } while ((longlong)iVar29 * 8 != lVar24);
    }
    puVar3 = local_3a0;
    local_2d8 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      local_2d8 = local_288;
    }
    local_2d0 = (int)local_50;
    iVar29 = 0;
    FUN_144760590(local_3a0,&local_2d8,0);
    lVar31 = local_3b0;
    uVar6 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_3b0 + 4) * 2) * 8);
    uVar4 = FUN_1415934cc();
    FUN_1448e935e(uVar6,&local_318,uVar4);
    FUN_1415934cc();
    local_2e8 = (undefined4)local_318;
    uStack_2e4 = local_318._4_4_;
    uStack_2e0 = (undefined4)uStack_310;
    uStack_2dc = uStack_310._4_4_;
    if (local_370 != 0) {
      plVar25 = (longlong *)(*puVar3 + 7 & 0xfffffffffffffff8);
      plVar7 = plVar25 + 1;
      if ((longlong *)puVar3[1] < plVar7) {
        FUN_140023dd8(puVar3,0x10);
        plVar25 = (longlong *)(*puVar3 + 7 & 0xfffffffffffffff8);
        plVar7 = plVar25 + 1;
      }
      *puVar3 = (ulonglong)plVar7;
      *plVar25 = local_380;
      puVar5 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar5 + 4;
      if ((undefined8 *)puVar3[1] < puVar18) {
        FUN_140023dd8(puVar3,0x28);
        puVar5 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar5 + 4;
      }
      *puVar3 = (ulonglong)puVar18;
      *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
      *(undefined8 **)puVar3[6] = puVar5;
      puVar3[6] = (ulonglong)(puVar5 + 1);
      puVar5[1] = 0;
      *puVar5 = &PTR_FUN_14a2dc3b0;
      puVar5[2] = plVar25;
      *(undefined4 *)(puVar5 + 3) = 1;
    }
    uVar15 = 1;
    if (1 < (int)*(uint *)(lVar31 + 0x168)) {
      uVar15 = (ulonglong)*(uint *)(lVar31 + 0x168);
    }
    cVar22 = (char)local_3a4;
    uVar19 = 0;
    do {
      if ((longlong)uVar19 < (longlong)*(int *)(lVar31 + 0x168)) {
        lVar24 = *(longlong *)(*(longlong *)(lVar31 + 0x160) + uVar19 * 8);
        uVar6 = *(undefined8 *)(lVar24 + 8);
        iVar26 = *(int *)(lVar24 + 0x38 + local_350 * 4);
      }
      else {
        iVar26 = 0;
        uVar6 = FUN_1405668b6(*(undefined8 *)(local_378 + 0x30),local_3a0,0x1c);
      }
      iVar28 = 0;
      if ((int)uVar15 - 1 == uVar19 && cVar22 == '\x01') {
        iVar28 = *(int *)(lVar31 + 0x148);
      }
      iVar20 = iVar28 + iVar26;
      lVar31 = local_3b0;
      if (iVar20 != 0) {
        local_318 = lStack_2c0;
        uStack_310 = local_388;
        local_308 = local_380;
        local_300 = uVar6;
        local_2f8 = iVar29;
        iStack_2f4 = iVar26;
        iStack_2f0 = iVar28;
        iStack_2ec = iVar20;
        if (DAT_14ca84e68 == '\x01') {
          iVar28 = iVar20 + 0x7e;
          if (-1 < iVar20 + 0x3f) {
            iVar28 = iVar20 + 0x3f;
          }
          uVar6 = FUN_1415935ec();
          uStack_334 = 1;
          uStack_330 = 1;
          local_3d8 = &local_338;
          local_338 = iVar28 >> 6;
          FUN_144aef6a8(local_3a0,&local_2e8,uVar6);
          lVar31 = local_3b0;
        }
        else {
          if (0 < iVar26) {
            uVar6 = FUN_1415935ec();
            uStack_334 = 1;
            uStack_330 = 1;
            local_3d8 = &local_338;
            local_338 = iVar26 + 0x3fU >> 6;
            FUN_144aef6a8(local_3a0,&local_2e8,uVar6);
          }
          lVar31 = local_3b0;
          if (0 < iVar28) {
            local_338 = (uint)local_318;
            uStack_334 = (undefined4)((ulonglong)local_318 >> 0x20);
            uStack_330 = (undefined4)local_308;
            uStack_32c = (undefined4)((ulonglong)local_308 >> 0x20);
            iStack_324 = iStack_2f4;
            iStack_320 = iStack_2f0;
            iStack_31c = iStack_2ec;
            local_328 = 0;
            local_368 = *(undefined8 *)
                         (&DAT_14ca8c1f0 +
                         (ulonglong)
                         *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_3b0 + 4) * 2) * 8);
            uVar6 = FUN_145e9b46a();
            FUN_1448e935e(local_368,local_2a8,uVar6,0);
            FUN_145e9b46a();
            uVar6 = FUN_145e9b6d6();
            local_290 = &DAT_100000001;
            local_3d8 = &local_294;
            local_294 = iVar28 + 0x3fU >> 6;
            FUN_1481ccd63(local_3a0,local_2a8,uVar6);
          }
        }
        iVar29 = iVar29 + iVar26;
      }
      puVar18 = local_390;
      puVar3 = local_3a0;
      uVar19 = uVar19 + 1;
    } while (uVar15 != uVar19);
    if (local_370 != 0) {
      plVar25 = (longlong *)(*local_3a0 + 7 & 0xfffffffffffffff8);
      plVar7 = plVar25 + 1;
      if ((longlong *)local_3a0[1] < plVar7) {
        FUN_140023dd8(local_3a0,0x10);
        plVar25 = (longlong *)(*puVar3 + 7 & 0xfffffffffffffff8);
        plVar7 = plVar25 + 1;
      }
      *puVar3 = (ulonglong)plVar7;
      *plVar25 = local_380;
      puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar8 + 4;
      if ((undefined8 *)puVar3[1] < puVar5) {
        FUN_140023dd8(puVar3,0x28);
        puVar8 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar8 + 4;
      }
      *puVar3 = (ulonglong)puVar5;
      *(int *)(puVar3 + 0xc) = (int)puVar3[0xc] + 1;
      *(undefined8 **)puVar3[6] = puVar8;
      puVar3[6] = (ulonglong)(puVar8 + 1);
      puVar8[1] = 0;
      *puVar8 = &PTR_FUN_14a2dc3b8;
      puVar8[2] = plVar25;
      *(undefined4 *)(puVar8 + 3) = 1;
    }
    FUN_141830f14(local_288);
    iVar29 = *(int *)(lVar31 + 0x168);
    if ((longlong)iVar29 != 0) {
      lVar31 = *(longlong *)(local_3b0 + 0x160);
      lVar24 = 0;
      do {
        uVar15 = local_50;
        lVar23 = *(longlong *)(lVar31 + lVar24);
        lVar30 = (longlong)(int)local_50;
        uVar13 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar13);
        if (local_50._4_4_ < uVar13) {
          FUN_1481cccde(local_288,uVar15 & 0xffffffff);
        }
        puVar9 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar9 = local_288;
        }
        lVar30 = lVar30 * 0x38;
        uVar6 = *(undefined8 *)(lVar23 + 8);
        *(undefined8 *)(puVar9 + lVar30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar9 + lVar30 + 8) = 0xffffffff;
        *(undefined8 *)(puVar9 + lVar30 + 0x10) = uVar6;
        puVar9[lVar30 + 0x18] = 3;
        *(undefined8 *)(puVar9 + lVar30 + 0x1c) = 0x7400000400;
        *(undefined4 *)(puVar9 + lVar30 + 0x24) = 0;
        puVar9[lVar30 + 0x30] = 0;
        lVar24 = lVar24 + 8;
      } while ((longlong)iVar29 * 8 != lVar24);
    }
    uVar15 = local_50;
    lVar31 = (longlong)(int)local_50;
    uVar13 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar13);
    if (local_50._4_4_ < uVar13) {
      FUN_1481cccde(local_288,uVar15 & 0xffffffff);
    }
    puVar9 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar9 = local_288;
    }
    lVar31 = lVar31 * 0x38;
    uVar6 = *(undefined8 *)(local_3b0 + 8 + local_360);
    *(undefined8 *)(puVar9 + lVar31) = 0xffffffffffffffff;
    *(undefined4 *)(puVar9 + lVar31 + 8) = 0xffffffff;
    *(undefined8 *)(puVar9 + lVar31 + 0x10) = uVar6;
    puVar9[lVar31 + 0x18] = 3;
    *(undefined8 *)(puVar9 + lVar31 + 0x1c) = 0xf000000400;
    *(undefined4 *)(puVar9 + lVar31 + 0x24) = 0;
    puVar9[lVar31 + 0x30] = 0;
    local_348 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      local_348 = local_288;
    }
    local_340 = (int)local_50;
    FUN_144760590(local_3a0,&local_348,0);
    piVar2 = local_358;
    lVar24 = local_380;
    lVar31 = local_388;
    param_4 = local_394;
    uVar15 = (ulonglong)local_3a4;
    if (local_388 != 0) {
      LOCK();
      puVar11 = (uint *)(local_388 + 8);
      uVar13 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      if ((uVar13 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(local_388 + 8);
        LOCK();
        uVar13 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar13 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(local_388 + 0xd);
          puVar10 = (uint *)FUN_14001cc68(0x10,8);
          *(longlong *)(puVar10 + 2) = lVar31;
          puVar11 = DAT_14ca843c0;
          puVar12 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *(uint **)puVar10 = puVar11;
              LOCK();
              bVar32 = puVar11 != DAT_14ca843c0;
              puVar12 = puVar10;
              if (bVar32) {
                puVar11 = DAT_14ca843c0;
                puVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = puVar12;
              UNLOCK();
            } while (bVar32);
          }
          else {
            do {
              *(uint **)puVar10 = puVar12;
              LOCK();
              bVar32 = puVar12 != DAT_14ca843c8;
              puVar11 = puVar10;
              if (bVar32) {
                puVar12 = DAT_14ca843c8;
                puVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = puVar11;
              UNLOCK();
            } while (bVar32);
          }
        }
      }
    }
    if (lVar24 != 0) {
      LOCK();
      puVar11 = (uint *)(lVar24 + 8);
      uVar13 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      if ((uVar13 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(lVar24 + 8);
        LOCK();
        uVar13 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar13 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(lVar24 + 0xd);
          puVar10 = (uint *)FUN_14001cc68(0x10,8);
          *(longlong *)(puVar10 + 2) = lVar24;
          puVar11 = DAT_14ca843c0;
          puVar12 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *(uint **)puVar10 = puVar11;
              LOCK();
              bVar32 = puVar11 != DAT_14ca843c0;
              puVar12 = puVar10;
              if (bVar32) {
                puVar11 = DAT_14ca843c0;
                puVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = puVar12;
              UNLOCK();
            } while (bVar32);
          }
          else {
            do {
              *(uint **)puVar10 = puVar12;
              LOCK();
              bVar32 = puVar12 != DAT_14ca843c8;
              puVar11 = puVar10;
              if (bVar32) {
                puVar12 = DAT_14ca843c8;
                puVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = puVar11;
              UNLOCK();
            } while (bVar32);
          }
        }
      }
    }
    puVar11 = (uint *)FUN_141830f5c(local_288);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      puVar11 = (uint *)FUN_1449e245a(piVar2);
    }
    lVar31 = lStack_2c0;
    if (lStack_2c0 != 0) {
      LOCK();
      puVar11 = (uint *)(lStack_2c0 + 8);
      uVar13 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      puVar11 = (uint *)(ulonglong)(uVar13 & 0x3fffffff);
      if ((uVar13 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(lStack_2c0 + 8);
        LOCK();
        uVar13 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar13 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(lStack_2c0 + 0xd);
          puVar10 = (uint *)FUN_14001cc68(0x10,8);
          *(longlong *)(puVar10 + 2) = lVar31;
          puVar11 = DAT_14ca843c0;
          puVar12 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *(uint **)puVar10 = puVar11;
              LOCK();
              bVar32 = puVar11 != DAT_14ca843c0;
              puVar12 = puVar10;
              if (bVar32) {
                puVar11 = DAT_14ca843c0;
                puVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = puVar12;
              UNLOCK();
            } while (bVar32);
          }
          else {
            do {
              puVar11 = puVar12;
              *(uint **)puVar10 = puVar11;
              LOCK();
              bVar32 = puVar11 != DAT_14ca843c8;
              puVar12 = puVar10;
              if (bVar32) {
                puVar11 = DAT_14ca843c8;
                puVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = puVar12;
              UNLOCK();
              puVar12 = puVar11;
            } while (bVar32);
          }
        }
      }
    }
    lVar31 = local_2c8;
    if (local_2c8 != 0) {
      LOCK();
      puVar11 = (uint *)(local_2c8 + 8);
      uVar13 = *puVar11;
      *puVar11 = *puVar11 - 1;
      UNLOCK();
      puVar11 = (uint *)(ulonglong)(uVar13 & 0x3fffffff);
      if ((uVar13 & 0x3fffffff) == 1) {
        puVar11 = (uint *)(local_2c8 + 8);
        LOCK();
        uVar13 = *puVar11;
        *puVar11 = *puVar11 | 0x40000000;
        UNLOCK();
        if ((uVar13 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(local_2c8 + 0xd);
          puVar12 = (uint *)FUN_14001cc68(0x10,8);
          *(longlong *)(puVar12 + 2) = lVar31;
          param_4 = local_394;
          puVar18 = local_390;
          if ((bVar1 & 2) == 0) {
            uVar15 = (ulonglong)local_3a4;
            puVar11 = DAT_14ca843c0;
            do {
              *(uint **)puVar12 = puVar11;
              LOCK();
              bVar32 = puVar11 != DAT_14ca843c0;
              puVar10 = puVar12;
              if (bVar32) {
                puVar11 = DAT_14ca843c0;
                puVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = puVar10;
              UNLOCK();
            } while (bVar32);
          }
          else {
            uVar15 = (ulonglong)local_3a4;
            puVar11 = DAT_14ca843c8;
            do {
              *(uint **)puVar12 = puVar11;
              LOCK();
              bVar32 = puVar11 != DAT_14ca843c8;
              puVar10 = puVar12;
              if (bVar32) {
                puVar11 = DAT_14ca843c8;
                puVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = puVar10;
              UNLOCK();
            } while (bVar32);
          }
        }
      }
    }
  }
  lVar31 = local_3b0;
  if ((char)uVar15 != '\0') {
    puVar5 = (undefined8 *)(local_3b0 + 0x140);
    uVar13 = *(uint *)(local_3b0 + 0x148);
    if ((longlong)(int)uVar13 != 0) {
      plVar7 = (longlong *)(local_3b0 + 0x80);
      iVar29 = *(int *)(local_3b0 + 0x88);
      *(uint *)(local_3b0 + 0x88) = iVar29 + uVar13;
      if ((uint)(*(int *)(local_3b0 + 0x8c) - iVar29) < uVar13) {
        FUN_1447808da(plVar7,iVar29);
      }
      puVar11 = memcpy((void *)((longlong)iVar29 * 4 + *plVar7),(void *)*puVar5,
                       (longlong)(int)uVar13 << 2);
    }
    *(undefined4 *)(lVar31 + 0x148) = 0;
    if (*(int *)(lVar31 + 0x14c) != 0) {
      puVar11 = (uint *)FUN_14480809c(puVar5,0);
    }
  }
  *(undefined4 *)(puVar18 + 1) = 0;
  if (*(int *)((longlong)puVar18 + 0xc) != 0) {
    puVar11 = (uint *)FUN_141833c38(puVar18);
  }
  if (param_4 != 1) goto LAB_143a9621e;
  lVar24 = lVar31 + 0xf0;
  iVar29 = *(int *)(lVar31 + 0x138);
  if (iVar29 < 2) {
    lVar23 = lVar31 + 0x128;
    if (*(longlong *)(lVar31 + 0x130) != 0) {
      lVar23 = *(longlong *)(lVar31 + 0x130);
    }
    iVar26 = iVar29 + 3;
    if (-1 < iVar29) {
      iVar26 = iVar29;
    }
    if (*(int *)(lVar31 + 0xf8) - *(int *)(lVar31 + 0x124) < iVar26 >> 2) {
      iVar29 = *(int *)(lVar31 + 0x118);
      if (iVar29 != 0) {
        puVar11 = (uint *)(lVar31 + 0x100);
        puVar12 = *(uint **)(lVar31 + 0x110);
        if (*(uint **)(lVar31 + 0x110) == (uint *)0x0) {
          puVar12 = puVar11;
        }
        uVar13 = *puVar12;
        lVar31 = local_3b0;
        if (uVar13 == 0) {
          iVar26 = iVar29 + 0x1e;
          if (-1 < iVar29 + -1) {
            iVar26 = iVar29 + -1;
          }
          uVar15 = 0;
          uVar19 = (ulonglong)(uint)(iVar26 >> 5);
          if (iVar26 >> 5 < 1) {
            uVar19 = uVar15;
          }
          iVar26 = 0;
          do {
            if (uVar19 == uVar15) goto LAB_143a96159;
            iVar26 = iVar26 + 0x20;
            uVar13 = puVar12[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar15 = 0;
          iVar26 = 0;
        }
        uVar27 = (ulonglong)(-uVar13 & uVar13);
        uVar19 = uVar27 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar28 = (iVar26 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
        if (iVar28 < iVar29) {
          uVar13 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar23 + (longlong)
                       *(int *)(*(longlong *)(local_3b0 + 0xf0) + 0x20 + (longlong)iVar28 * 0x24) *
                       4) = 0xffffffff;
            uVar13 = ~(uint)uVar27 & uVar13;
            puVar12 = *(uint **)(local_3b0 + 0x110);
            if (*(uint **)(local_3b0 + 0x110) == (uint *)0x0) {
              puVar12 = puVar11;
            }
            iVar20 = *(int *)(local_3b0 + 0x118);
            iVar28 = (int)uVar15;
            lVar30 = (longlong)iVar28;
            uVar14 = puVar12[lVar30] & uVar13;
            if (uVar14 == 0) {
              iVar16 = iVar20 + 0x1e;
              if (-1 < iVar20 + -1) {
                iVar16 = iVar20 + -1;
              }
              iVar16 = iVar16 >> 5;
              iVar26 = iVar26 + 0x20;
              iVar17 = iVar16;
              if (iVar16 < iVar28) {
                iVar17 = iVar28;
              }
              if (iVar28 < iVar16) {
                lVar21 = 0;
                do {
                  uVar14 = puVar12[lVar30 + lVar21 + 1];
                  if (uVar14 != 0) {
                    uVar15 = (ulonglong)(iVar28 + (int)lVar21 + 1);
                    uVar13 = 0xffffffff;
                    goto LAB_143a963e9;
                  }
                  iVar26 = iVar26 + 0x20;
                  lVar21 = lVar21 + 1;
                } while (iVar17 - lVar30 != lVar21);
                uVar13 = 0xffffffff;
                lVar30 = (longlong)iVar17;
              }
              uVar15 = lVar30 + 1U & 0xffffffff;
              iVar28 = iVar20;
            }
            else {
LAB_143a963e9:
              uVar27 = (ulonglong)(-uVar14 & uVar14);
              uVar19 = uVar27 * 2 + 1;
              lVar30 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar30 == 0; lVar30 = lVar30 + -1) {
                }
              }
              iVar28 = (iVar26 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
              if (iVar20 <= iVar28) {
                iVar28 = iVar20;
              }
            }
          } while (iVar28 != iVar29);
        }
      }
    }
    else if (iVar29 == 1) {
      lVar30 = 0;
      do {
        *(undefined4 *)(lVar23 + lVar30 * 4) = 0xffffffff;
        lVar30 = lVar30 + 1;
      } while (lVar30 < *(int *)(lVar31 + 0x138));
    }
LAB_143a96159:
    FUN_1407f138e(lVar24);
  }
  else {
    FUN_1407f138e(lVar24);
    *(undefined4 *)(lVar31 + 0x138) = 1;
    FUN_1449a3bd4(lVar24);
  }
  *(undefined1 *)(lVar31 + 0x18) = 0;
  LOCK();
  uVar13 = *(uint *)(lVar31 + 0x10);
  *(uint *)(lVar31 + 0x10) = 0;
  puVar11 = (uint *)(ulonglong)uVar13;
  UNLOCK();
  iVar29 = *(int *)(lVar31 + 0x168);
  if (DAT_14c762910 == 0) {
LAB_143a961f1:
    if (iVar29 == 0) goto LAB_143a9621e;
    puVar11 = *(uint **)(lVar31 + 0x160);
    puVar12 = puVar11 + (longlong)iVar29 * 2;
  }
  else {
    if (iVar29 != 1) {
LAB_143a961e7:
      *(undefined4 *)(lVar31 + 0x170) = 0;
      goto LAB_143a961f1;
    }
    puVar11 = *(uint **)(lVar31 + 0x160);
    uVar13 = *(uint *)(*(longlong *)puVar11 + 0x30);
    if (uVar13 <= DAT_14c762908) goto LAB_143a961e7;
    fVar33 = (float)uVar13 * _DAT_14c762914;
    uVar13 = -((int)ROUND(-0.5 - (fVar33 + fVar33)) >> 1);
    if (uVar13 <= DAT_14c762908) {
      uVar13 = DAT_14c762908;
    }
    iVar29 = 0;
    if (*(uint *)(*(longlong *)puVar11 + 0x34) < uVar13) {
      iVar29 = *(int *)(lVar31 + 0x170) + 1;
    }
    *(int *)(lVar31 + 0x170) = iVar29;
    puVar12 = puVar11 + 2;
  }
  do {
    *(undefined4 *)(*(longlong *)puVar11 + 0x34) = 0;
    *(undefined8 *)(*(longlong *)puVar11 + 0x38) = 0;
    puVar11 = puVar11 + 2;
  } while (puVar11 != puVar12);
LAB_143a9621e:
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar11;
}



// FUNCTION 143a96510 FUN_143a96510 body=69 status=ok
// SIG undefined FUN_143a96510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a96510(void)

{
  _DAT_14cb3e9e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a96552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3e9e8,1);
  return;
}



// FUNCTION 143a96556 FUN_143a96556 body=540 status=ok
// SIG undefined FUN_143a96556(void)

void FUN_143a96556(longlong param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  longlong local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x100000000;
  lVar11 = **(longlong **)(param_1 + 8);
  while (lVar11 != 0) {
    lVar11 = **(longlong **)(param_1 + 8);
    local_80 = lVar11 + 0x10;
    if ((local_80 == 0) ||
       ((param_2 == '\0' &&
        (cVar4 = (**(code **)(**(longlong **)(lVar11 + 0x30) + 0x18))(), cVar4 == '\0')))) break;
    lVar9 = *(longlong *)(lVar11 + 0x20);
    if (*(longlong *)(lVar11 + 0x20) == 0) {
      lVar9 = local_80;
    }
    iVar1 = *(int *)(lVar11 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar12 = 0;
      do {
        local_90 = *(undefined4 *)(lVar9 + 8 + lVar12);
        local_98 = 0;
        uVar6 = (**(code **)(*DAT_14ca83900 + 0xf8))
                          (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(lVar9 + lVar12),
                           *(undefined8 *)(lVar11 + 0x30));
        uVar3 = local_50;
        lVar10 = (longlong)(int)local_50;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          FUN_1481cd1de(local_68,uVar3 & 0xffffffff);
        }
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_68;
        }
        *(undefined8 *)(puVar7 + lVar10 * 0x10) = uVar6;
        *(undefined4 *)(puVar7 + lVar10 * 0x10 + 8) = *(undefined4 *)(lVar9 + 8 + lVar12);
        lVar12 = lVar12 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar12);
    }
    local_78 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      local_78 = local_68;
    }
    local_70 = (int)local_50;
    pcVar2 = *(code **)(lVar11 + 0x40);
    plVar8 = (longlong *)(lVar11 + 0x60);
    if (*(longlong **)(lVar11 + 0x50) != (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar11 + 0x50);
    }
    uVar6 = (**(code **)(*plVar8 + 8))();
    (*pcVar2)(uVar6,&local_78);
    if (*(longlong *)(lVar11 + 0x20) != 0) {
      local_80 = *(longlong *)(lVar11 + 0x20);
    }
    iVar1 = *(int *)(lVar11 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar11 = 0;
      do {
        (**(code **)(*DAT_14ca83900 + 0x100))
                  (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(local_80 + lVar11));
        lVar11 = lVar11 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar11);
    }
    bVar13 = (longlong)local_50 < 0;
    local_50 = local_50 & 0xffffffff00000000;
    if (bVar13) {
      FUN_1481cd2e0(local_68);
    }
    FUN_1481c89d0(param_1);
    lVar11 = **(longlong **)(param_1 + 8);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a96774 FUN_143a96774 body=165 status=ok
// SIG undefined FUN_143a96774(void)

void FUN_143a96774(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  (**(code **)(*DAT_14ca83900 + 0x370))();
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  (**(code **)(*DAT_14ca83900 + 0x370))();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_143a96556(param_1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9681a FUN_143a9681a body=825 status=ok
// SIG undefined FUN_143a9681a(void)

void FUN_143a9681a(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4,uint param_5
                  ,longlong *param_6)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined1 local_d1;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  uint local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 local_88 [2];
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = (longlong *)0x0;
  local_9c = 1;
  local_98 = (longlong *)0x0;
  local_88[0] = 0;
  local_78 = 0;
  uVar8 = param_4;
  local_f8 = param_3;
  local_f0 = param_1;
  (**(code **)(*DAT_14ca83900 + 0xe0))(DAT_14ca83900,&local_b8);
  uVar9 = (undefined2)(uVar8 >> 0x10);
  local_a0 = 1;
  local_b0 = param_5;
  (**(code **)(*DAT_14ca83900 + 0xb8))(DAT_14ca83900,&local_d0,&DAT_14cb3e9f0);
  local_98 = local_d0;
  FUN_1481c8b38(local_88,param_6);
  (**(code **)(*local_98 + 8))();
  plVar6 = local_98;
  plVar3 = local_a8;
  if (local_a8 == (longlong *)0x0) {
    plVar3 = &local_b8;
  }
  local_e0 = *plVar3;
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
    UNLOCK();
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    UNLOCK();
  }
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar11 + 4;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x30);
    puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar11 + 4;
  }
  local_e8 = (ulonglong)param_4;
  *(undefined8 **)(param_2 + 0x70) = puVar5;
  *puVar11 = &PTR_FUN_14a20c998;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 3) = 0x80;
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar11;
  puVar11[2] = local_f8;
  *(undefined4 *)(puVar11 + 3) = 0x80;
  lVar4 = FUN_1406be90a();
  FUN_140069376(param_2);
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar10 + 0x3b;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x1e0);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar10 + 0x3b;
  }
  lVar7 = ((ulonglong)param_5 << 0x20) + local_e8;
  *puVar1 = (ulonglong)puVar5;
  local_c8 = *(longlong *)(lVar4 + 0x48);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  local_108 = 2;
  local_d0 = puVar11 + 2;
  local_c0 = lVar4;
  FUN_140068f1a(puVar10,&local_d1,&local_d0,CONCAT22(uVar9,0x18));
  *puVar10 = &PTR_FUN_14adff870;
  puVar10[0x37] = local_f8;
  puVar10[0x38] = local_e0;
  puVar10[0x39] = lVar7;
  puVar10[0x3a] = plVar6;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar10);
  puVar5 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *puVar5 = 0;
  FUN_1481cd584(puVar5 + 2,&local_b8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*local_f0;
    *local_f0 = puVar5;
    *puVar11 = puVar5;
  }
  FUN_145748882(&local_b8);
  if (*param_6 != 0) {
    plVar6 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a96b67 FUN_143a96b67 body=55 status=ok
// SIG undefined FUN_143a96b67(void)

void FUN_143a96b67(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3ea40 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3ea40 = FUN_14171c317(FUN_146475f1b,uVar1,L"ENiagaraMeshFacingMode");
  }
  return;
}



// FUNCTION 143a96b9e FUN_143a96b9e body=55 status=ok
// SIG undefined FUN_143a96b9e(void)

void FUN_143a96b9e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3ea58 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3ea58 = FUN_14171c317(FUN_146475f4a,uVar1,L"ENiagaraMeshPivotOffsetSpace");
  }
  return;
}



// FUNCTION 143a96bd5 FUN_143a96bd5 body=55 status=ok
// SIG undefined FUN_143a96bd5(void)

void FUN_143a96bd5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3ea70 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3ea70 = FUN_14171c317(FUN_146475f79,uVar1,L"ENiagaraMeshLockedAxisSpace");
  }
  return;
}



// FUNCTION 143a96c0c FUN_143a96c0c body=55 status=ok
// SIG undefined FUN_143a96c0c(void)

void FUN_143a96c0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb3ea88 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb3ea88 = FUN_14171c317(FUN_146475fa8,uVar1,L"ENiagaraMeshLODMode");
  }
  return;
}



// FUNCTION 143a96c54 FUN_143a96c54 body=69 status=ok
// SIG undefined FUN_143a96c54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a96c54(void)

{
  _DAT_14cb3eb10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a96c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3eb18,1);
  return;
}



// FUNCTION 143a96c99 FUN_143a96c99 body=51 status=ok
// SIG undefined FUN_143a96c99(void)

void FUN_143a96c99(void)

{
  if (DAT_14cb3eb38 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb3eb38 + 0x10))();
  }
  if (DAT_14cb3eb20 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a96cc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cb3eb20 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143a96ccc FUN_143a96ccc body=51 status=ok
// SIG undefined FUN_143a96ccc(void)

void FUN_143a96ccc(void)

{
  if (DAT_14cb3eb88 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb3eb88 + 0x10))();
  }
  if (DAT_14cb3eb70 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a96cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cb3eb70 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143a96cff FUN_143a96cff body=51 status=ok
// SIG undefined FUN_143a96cff(void)

void FUN_143a96cff(void)

{
  if (DAT_14cb3ebd8 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb3ebd8 + 0x10))();
  }
  if (DAT_14cb3ebc0 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a96d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cb3ebc0 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143a96d32 FUN_143a96d32 body=51 status=ok
// SIG undefined FUN_143a96d32(void)

void FUN_143a96d32(void)

{
  if (DAT_14cb3ec28 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb3ec28 + 0x10))();
  }
  if (DAT_14cb3ec10 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a96d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cb3ec10 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143a96d65 FUN_143a96d65 body=51 status=ok
// SIG undefined FUN_143a96d65(void)

void FUN_143a96d65(void)

{
  if (DAT_14cb3ec78 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb3ec78 + 0x10))();
  }
  if (DAT_14cb3ec60 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a96d8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cb3ec60 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 143a96d98 FUN_143a96d98 body=69 status=ok
// SIG undefined FUN_143a96d98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a96d98(void)

{
  _DAT_14cb3ecb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a96dda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3ecc0,1);
  return;
}



// FUNCTION 143a96ddd FUN_143a96ddd body=69 status=ok
// SIG undefined FUN_143a96ddd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a96ddd(void)

{
  _DAT_14cb3ecc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a96e1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3ecd0,1);
  return;
}



// FUNCTION 143a96e23 FUN_143a96e23 body=69 status=ok
// SIG undefined FUN_143a96e23(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a96e23(void)

{
  _DAT_14cb3ecd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a96e65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3ece0,1);
  return;
}



// FUNCTION 143a96e68 FUN_143a96e68 body=69 status=ok
// SIG undefined FUN_143a96e68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a96e68(void)

{
  _DAT_14cb3ece8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a96eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3ecf0,1);
  return;
}



// FUNCTION 143a96ead FUN_143a96ead body=69 status=ok
// SIG undefined FUN_143a96ead(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a96ead(void)

{
  _DAT_14cb3ecf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143a96eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb3ed00,1);
  return;
}



// FUNCTION 143a975da FUN_143a975da body=11393 status=ok
// SIG undefined FUN_143a975da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a975da(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_5c [4];
  char *local_58;
  undefined8 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1438e69db();
  FUN_1408c4b6c();
  FUN_145b28a92();
  FUN_140c6bc32();
  FUN_14647b7ce();
  FUN_1458513bc();
  if (DAT_14cb43590 == '\0') {
    DAT_14cb43590 = '\x01';
    DAT_14cb435a0 = 1;
    uRam000000014cb435a4 = 1;
    _DAT_14cb435a8 = 1;
    uRam000000014cb435ac = 1;
    _DAT_14cb435b0 = 1;
    uRam000000014cb435b4 = 1;
    _DAT_14cb435b8 = 1;
    uRam000000014cb435bc = 1;
  }
  FUN_1446f470e(&local_58,L"Engine.WorldDeltaTime",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41418 = pcVar3;
  DAT_14cb41420 = uVar2;
  if (DAT_14cb41428 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41428 = 0;
  _DAT_14cb41430 = 0;
  FUN_1446f470e(&local_58,L"Engine.DeltaTime",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41438 = pcVar3;
  DAT_14cb41440 = uVar2;
  if (DAT_14cb41448 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41448 = 0;
  _DAT_14cb41450 = 0;
  FUN_1446f470e(&local_58,L"Engine.InverseDeltaTime",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41458 = pcVar3;
  DAT_14cb41460 = uVar2;
  if (DAT_14cb41468 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41468 = 0;
  _DAT_14cb41470 = 0;
  FUN_1446f470e(&local_58,L"Engine.Time",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41478 = pcVar3;
  DAT_14cb41480 = uVar2;
  if (DAT_14cb41488 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41488 = 0;
  _DAT_14cb41490 = 0;
  FUN_1446f470e(&local_58,L"Engine.RealTime",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41498 = pcVar3;
  DAT_14cb414a0 = uVar2;
  if (DAT_14cb414a8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb414a8 = 0;
  _DAT_14cb414b0 = 0;
  FUN_1446f470e(&local_58,L"Engine.QualityLevel",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb414b8 = pcVar3;
  DAT_14cb414c0 = uVar2;
  if (DAT_14cb414c8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb414c8 = 0;
  _DAT_14cb414d0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.Position",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42130 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42130);
  }
  DAT_14cb414d8 = pcVar3;
  DAT_14cb414e0 = uVar2;
  if (DAT_14cb414e8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb414e8 = 0;
  _DAT_14cb414f0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.Velocity",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41518 = pcVar3;
  DAT_14cb41520 = uVar2;
  if (DAT_14cb41528 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41528 = 0;
  _DAT_14cb41530 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemXAxis",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41538 = pcVar3;
  DAT_14cb41540 = uVar2;
  if (DAT_14cb41548 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41548 = 0;
  _DAT_14cb41550 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemYAxis",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41558 = pcVar3;
  DAT_14cb41560 = uVar2;
  if (DAT_14cb41568 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41568 = 0;
  _DAT_14cb41570 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemZAxis",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41578 = pcVar3;
  DAT_14cb41580 = uVar2;
  if (DAT_14cb41588 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41588 = 0;
  _DAT_14cb41590 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.Scale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb414f8 = pcVar3;
  DAT_14cb41500 = uVar2;
  if (DAT_14cb41508 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41508 = 0;
  _DAT_14cb41510 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.Rotation",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42190 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42190);
  }
  DAT_14cb415f8 = pcVar3;
  DAT_14cb41600 = uVar2;
  if (DAT_14cb41608 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41608 = 0;
  _DAT_14cb41610 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.LWCTile",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41598 = pcVar3;
  DAT_14cb415a0 = uVar2;
  if (DAT_14cb415a8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb415a8 = 0;
  _DAT_14cb415b0 = 0;
  FUN_1446f470e(&local_58,L"Engine.ExecIndex",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb415b8 = pcVar3;
  DAT_14cb415c0 = uVar2;
  if (DAT_14cb415c8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb415c8 = 0;
  _DAT_14cb415d0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemLocalToWorld",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb41370 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb41370);
  }
  DAT_14cb41618 = pcVar3;
  DAT_14cb41620 = uVar2;
  if (DAT_14cb41628 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41628 = 0;
  _DAT_14cb41630 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemWorldToLocal",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb41370 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb41370);
  }
  DAT_14cb41638 = pcVar3;
  DAT_14cb41640 = uVar2;
  if (DAT_14cb41648 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41648 = 0;
  _DAT_14cb41650 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemLocalToWorldTransposed",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb41370 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb41370);
  }
  DAT_14cb41658 = pcVar3;
  DAT_14cb41660 = uVar2;
  if (DAT_14cb41668 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41668 = 0;
  _DAT_14cb41670 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemWorldToLocalTransposed",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb41370 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb41370);
  }
  DAT_14cb41678 = pcVar3;
  DAT_14cb41680 = uVar2;
  if (DAT_14cb41688 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41688 = 0;
  _DAT_14cb41690 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemLocalToWorldNoScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb41370 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb41370);
  }
  DAT_14cb41698 = pcVar3;
  DAT_14cb416a0 = uVar2;
  if (DAT_14cb416a8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb416a8 = 0;
  _DAT_14cb416b0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.SystemWorldToLocalNoScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb41370 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb41370);
  }
  DAT_14cb416b8 = pcVar3;
  DAT_14cb416c0 = uVar2;
  if (DAT_14cb416c8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb416c8 = 0;
  _DAT_14cb416d0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.TimeSinceRendered",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41718 = pcVar3;
  DAT_14cb41720 = uVar2;
  if (DAT_14cb41728 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41728 = 0;
  _DAT_14cb41730 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.LODDistance",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb416d8 = pcVar3;
  DAT_14cb416e0 = uVar2;
  if (DAT_14cb416e8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb416e8 = 0;
  _DAT_14cb416f0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Owner.LODDistanceFraction",1);
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb416f8 = local_58;
  DAT_14cb41700 = uVar2;
  if (DAT_14cb41708 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41708 = 0;
  _DAT_14cb41710 = 0;
  FUN_1446f470e(&local_80,L"Engine.Owner.ExecutionState",1);
  local_58 = DAT_14cb41328;
  if ((DAT_14cb41328 != (char *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar6 = local_80;
  local_50 = (undefined8 **)CONCAT53(local_50._3_5_,3);
  local_50 = (undefined8 **)CONCAT44(0xffffffff,(undefined4)local_50);
  uVar2 = 0xffffffff;
  if (local_58 != (char *)0x0) {
    uVar2 = FUN_14005ac26(&local_58);
  }
  DAT_14cb41738 = puVar6;
  DAT_14cb41740 = uVar2;
  if (DAT_14cb41748 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41748 = 0;
  _DAT_14cb41750 = 0;
  FUN_1446f470e(&local_58,L"Engine.ExecutionCount",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41758 = pcVar3;
  DAT_14cb41760 = uVar2;
  if (DAT_14cb41768 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41768 = 0;
  _DAT_14cb41770 = 0;
  FUN_1446f470e(&local_58,L"Engine.Emitter.NumParticles",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41778 = pcVar3;
  DAT_14cb41780 = uVar2;
  if (DAT_14cb41788 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41788 = 0;
  _DAT_14cb41790 = 0;
  FUN_1446f470e(&local_58,L"Engine.Emitter.SimulationPosition",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42130 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42130);
  }
  DAT_14cb41798 = pcVar3;
  DAT_14cb417a0 = uVar2;
  if (DAT_14cb417a8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb417a8 = 0;
  _DAT_14cb417b0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Emitter.TotalSpawnedParticles",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb417b8 = pcVar3;
  DAT_14cb417c0 = uVar2;
  if (DAT_14cb417c8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb417c8 = 0;
  _DAT_14cb417d0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Emitter.SpawnCountScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb417d8 = pcVar3;
  DAT_14cb417e0 = uVar2;
  if (DAT_14cb417e8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb417e8 = 0;
  _DAT_14cb417f0 = 0;
  FUN_1446f470e(&local_58,L"Engine.Emitter.InstanceSeed",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41a38 = pcVar3;
  DAT_14cb41a40 = uVar2;
  if (DAT_14cb41a48 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41a48 = 0;
  _DAT_14cb41a50 = 0;
  FUN_1446f470e(&local_80,L"Engine.Emitter.ID",1);
  pcVar3 = (char *)FUN_14647ae5a();
  local_58 = pcVar3;
  if ((pcVar3 != (char *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(pcVar3);
  }
  local_50 = (undefined8 **)CONCAT53(local_50._3_5_,2);
  local_50 = (undefined8 **)CONCAT44(0xffffffff,(undefined4)local_50);
  FUN_140c6c286(pcVar3,0);
  puVar6 = local_80;
  uVar2 = 0xffffffff;
  if (local_58 != (char *)0x0) {
    uVar2 = FUN_14005ac26(&local_58);
  }
  DAT_14cb415d8 = puVar6;
  DAT_14cb415e0 = uVar2;
  if (DAT_14cb415e8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb415e8 = 0;
  _DAT_14cb415f0 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.TickCount",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41978 = pcVar3;
  DAT_14cb41980 = uVar2;
  if (DAT_14cb41988 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41988 = 0;
  _DAT_14cb41990 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.NumEmittersAlive",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb417f8 = pcVar3;
  DAT_14cb41800 = uVar2;
  if (DAT_14cb41808 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41808 = 0;
  _DAT_14cb41810 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.SignificanceIndex",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41818 = pcVar3;
  DAT_14cb41820 = uVar2;
  if (DAT_14cb41828 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41828 = 0;
  _DAT_14cb41830 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.RandomSeed",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41838 = pcVar3;
  DAT_14cb41840 = uVar2;
  if (DAT_14cb41848 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41848 = 0;
  _DAT_14cb41850 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.CurrentTimeStep",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41858 = pcVar3;
  DAT_14cb41860 = uVar2;
  if (DAT_14cb41868 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41868 = 0;
  _DAT_14cb41870 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.NumTimeSteps",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41878 = pcVar3;
  DAT_14cb41880 = uVar2;
  if (DAT_14cb41888 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41888 = 0;
  _DAT_14cb41890 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.TimeStepFraction",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41898 = pcVar3;
  DAT_14cb418a0 = uVar2;
  if (DAT_14cb418a8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb418a8 = 0;
  _DAT_14cb418b0 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.NumParticles",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb418b8 = pcVar3;
  DAT_14cb418c0 = uVar2;
  if (DAT_14cb418c8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb418c8 = 0;
  _DAT_14cb418d0 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.NumEmitters",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb418d8 = pcVar3;
  DAT_14cb418e0 = uVar2;
  if (DAT_14cb418e8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb418e8 = 0;
  _DAT_14cb418f0 = 0;
  FUN_1446f470e(&local_58,L"Engine.NumSystemInstances",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb418f8 = pcVar3;
  DAT_14cb41900 = uVar2;
  if (DAT_14cb41908 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41908 = 0;
  _DAT_14cb41910 = 0;
  FUN_1446f470e(&local_58,L"Engine.GlobalSpawnCountScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41918 = pcVar3;
  DAT_14cb41920 = uVar2;
  if (DAT_14cb41928 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41928 = 0;
  _DAT_14cb41930 = 0;
  FUN_1446f470e(&local_58,L"Engine.GlobalSystemCountScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41938 = pcVar3;
  DAT_14cb41940 = uVar2;
  if (DAT_14cb41948 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41948 = 0;
  _DAT_14cb41950 = 0;
  FUN_1446f470e(&local_58,L"Engine.System.Age",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41958 = pcVar3;
  DAT_14cb41960 = uVar2;
  if (DAT_14cb41968 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41968 = 0;
  _DAT_14cb41970 = 0;
  FUN_1446f470e(&local_58,L"Emitter.Age",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41998 = pcVar3;
  DAT_14cb419a0 = uVar2;
  if (DAT_14cb419a8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb419a8 = 0;
  _DAT_14cb419b0 = 0;
  FUN_1446f470e(&local_58,L"Emitter.LocalSpace",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420e0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420e0);
  }
  DAT_14cb419b8 = pcVar3;
  DAT_14cb419c0 = uVar2;
  if (DAT_14cb419c8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb419c8 = 0;
  _DAT_14cb419d0 = 0;
  FUN_1446f470e(&local_58,L"Emitter.RandomSeed",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41a18 = pcVar3;
  DAT_14cb41a20 = uVar2;
  if (DAT_14cb41a28 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41a28 = 0;
  _DAT_14cb41a30 = 0;
  FUN_1446f470e(&local_58,L"Emitter.Determinism",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420e0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420e0);
  }
  DAT_14cb419d8 = pcVar3;
  DAT_14cb419e0 = uVar2;
  if (DAT_14cb419e8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb419e8 = 0;
  _DAT_14cb419f0 = 0;
  FUN_1446f470e(&local_58,L"Emitter.InterpolatedSpawn",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420e0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420e0);
  }
  DAT_14cb41ad8 = pcVar3;
  DAT_14cb41ae0 = uVar2;
  if (DAT_14cb41ae8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41ae8 = 0;
  _DAT_14cb41af0 = 0;
  FUN_1446f470e(&local_58,L"Emitter.OverrideGlobalSpawnCountScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420e0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420e0);
  }
  DAT_14cb419f8 = pcVar3;
  DAT_14cb41a00 = uVar2;
  if (DAT_14cb41a08 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41a08 = 0;
  _DAT_14cb41a10 = 0;
  FUN_1446f470e(&local_80,L"Emitter.SimulationTarget",1);
  local_58 = DAT_14cb3ed98;
  if ((DAT_14cb3ed98 != (char *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar6 = local_80;
  local_50 = (undefined8 **)CONCAT53(local_50._3_5_,3);
  local_50 = (undefined8 **)CONCAT44(0xffffffff,(undefined4)local_50);
  uVar2 = 0xffffffff;
  if (local_58 != (char *)0x0) {
    uVar2 = FUN_14005ac26(&local_58);
  }
  DAT_14cb41ab8 = puVar6;
  DAT_14cb41ac0 = uVar2;
  if (DAT_14cb41ac8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41ac8 = 0;
  _DAT_14cb41ad0 = 0;
  FUN_1446f470e(&local_58,L"Emitter.SpawnRate",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  _DAT_14cb41b78 = pcVar3;
  _DAT_14cb41b80 = uVar2;
  if (DAT_14cb41b88 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41b88 = 0;
  uRam000000014cb41b90 = 0;
  FUN_1446f470e(&local_58,L"Emitter.SpawnInterval",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41b98 = pcVar3;
  DAT_14cb41ba0 = uVar2;
  if (DAT_14cb41ba8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41ba8 = 0;
  _DAT_14cb41bb0 = 0;
  FUN_1446f470e(&local_58,L"Emitter.InterpSpawnStartDt",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41bb8 = pcVar3;
  DAT_14cb41bc0 = uVar2;
  if (DAT_14cb41bc8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41bc8 = 0;
  _DAT_14cb41bd0 = 0;
  FUN_1446f470e(&local_58,L"Emitter.SpawnGroup",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41a58 = pcVar3;
  DAT_14cb41a60 = uVar2;
  if (DAT_14cb41a68 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41a68 = 0;
  _DAT_14cb41a70 = 0;
  FUN_1446f470e(&local_58,L"Particles.UniqueID",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41bd8 = pcVar3;
  DAT_14cb41be0 = uVar2;
  if (DAT_14cb41be8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41be8 = 0;
  _DAT_14cb41bf0 = 0;
  FUN_1446f470e(&local_58,L"Particles.ID",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb421a0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb421a0);
  }
  DAT_14cb41bf8 = pcVar3;
  DAT_14cb41c00 = uVar2;
  if (DAT_14cb41c08 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41c08 = 0;
  _DAT_14cb41c10 = 0;
  FUN_1446f470e(&local_58,L"Particles.Position",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42130 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42130);
  }
  DAT_14cb41b58 = pcVar3;
  DAT_14cb41b60 = uVar2;
  if (DAT_14cb41b68 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41b68 = 0;
  _DAT_14cb41b70 = 0;
  FUN_1446f470e(&local_58,L"Particles.Velocity",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41c18 = pcVar3;
  DAT_14cb41c20 = uVar2;
  if (DAT_14cb41c28 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41c28 = 0;
  _DAT_14cb41c30 = 0;
  FUN_1446f470e(&local_58,L"Particles.Color",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42180 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42180);
  }
  DAT_14cb41c38 = pcVar3;
  DAT_14cb41c40 = uVar2;
  if (DAT_14cb41c48 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41c48 = 0;
  _DAT_14cb41c50 = 0;
  FUN_1446f470e(&local_58,L"Particles.SpriteRotation",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41c58 = pcVar3;
  DAT_14cb41c60 = uVar2;
  if (DAT_14cb41c68 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41c68 = 0;
  _DAT_14cb41c70 = 0;
  FUN_1446f470e(&local_58,L"Particles.Age",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  _DAT_14cb41308 = pcVar3;
  _DAT_14cb41310 = uVar2;
  if (DAT_14cb41318 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41318 = 0;
  uRam000000014cb41320 = 0;
  FUN_1446f470e(&local_58,L"Particles.NormalizedAge",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41c78 = pcVar3;
  DAT_14cb41c80 = uVar2;
  if (DAT_14cb41c88 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41c88 = 0;
  _DAT_14cb41c90 = 0;
  FUN_1446f470e(&local_58,L"Particles.SpriteSize",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42110 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42110);
  }
  DAT_14cb41c98 = pcVar3;
  DAT_14cb41ca0 = uVar2;
  if (DAT_14cb41ca8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41ca8 = 0;
  _DAT_14cb41cb0 = 0;
  FUN_1446f470e(&local_58,L"Particles.SpriteFacing",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41cb8 = pcVar3;
  DAT_14cb41cc0 = uVar2;
  if (DAT_14cb41cc8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41cc8 = 0;
  _DAT_14cb41cd0 = 0;
  FUN_1446f470e(&local_58,L"Particles.SpriteAlignment",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41cd8 = pcVar3;
  DAT_14cb41ce0 = uVar2;
  if (DAT_14cb41ce8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41ce8 = 0;
  _DAT_14cb41cf0 = 0;
  FUN_1446f470e(&local_58,L"Particles.SubImageIndex",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41cf8 = pcVar3;
  DAT_14cb41d00 = uVar2;
  if (DAT_14cb41d08 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41d08 = 0;
  _DAT_14cb41d10 = 0;
  FUN_1446f470e(&local_58,L"Particles.DynamicMaterialParameter",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d18 = pcVar3;
  DAT_14cb41d20 = uVar2;
  if (DAT_14cb41d28 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41d28 = 0;
  _DAT_14cb41d30 = 0;
  FUN_1446f470e(&local_58,L"Particles.DynamicMaterialParameter1",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d38 = pcVar3;
  DAT_14cb41d40 = uVar2;
  if (DAT_14cb41d48 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41d48 = 0;
  _DAT_14cb41d50 = 0;
  FUN_1446f470e(&local_58,L"Particles.DynamicMaterialParameter2",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d58 = pcVar3;
  DAT_14cb41d60 = uVar2;
  if (DAT_14cb41d68 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41d68 = 0;
  _DAT_14cb41d70 = 0;
  FUN_1446f470e(&local_58,L"Particles.DynamicMaterialParameter3",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42160 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42160);
  }
  DAT_14cb41d78 = pcVar3;
  DAT_14cb41d80 = uVar2;
  if (DAT_14cb41d88 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41d88 = 0;
  _DAT_14cb41d90 = 0;
  FUN_1446f470e(&local_58,L"Particles.Scale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41d98 = pcVar3;
  DAT_14cb41da0 = uVar2;
  if (DAT_14cb41da8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41da8 = 0;
  _DAT_14cb41db0 = 0;
  FUN_1446f470e(&local_58,L"Particles.Lifetime",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41db8 = pcVar3;
  DAT_14cb41dc0 = uVar2;
  if (DAT_14cb41dc8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41dc8 = 0;
  _DAT_14cb41dd0 = 0;
  FUN_1446f470e(&local_58,L"Particles.MeshOrientation",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42190 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42190);
  }
  DAT_14cb41dd8 = pcVar3;
  DAT_14cb41de0 = uVar2;
  if (DAT_14cb41de8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41de8 = 0;
  _DAT_14cb41df0 = 0;
  FUN_1446f470e(&local_58,L"Particles.UVScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42110 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42110);
  }
  DAT_14cb41e38 = pcVar3;
  DAT_14cb41e40 = uVar2;
  if (DAT_14cb41e48 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41e48 = 0;
  _DAT_14cb41e50 = 0;
  FUN_1446f470e(&local_58,L"Particles.PivotOffset",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42110 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42110);
  }
  DAT_14cb41e58 = pcVar3;
  DAT_14cb41e60 = uVar2;
  if (DAT_14cb41e68 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41e68 = 0;
  _DAT_14cb41e70 = 0;
  FUN_1446f470e(&local_58,L"Particles.CameraOffset",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41e18 = pcVar3;
  DAT_14cb41e20 = uVar2;
  if (DAT_14cb41e28 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41e28 = 0;
  _DAT_14cb41e30 = 0;
  FUN_1446f470e(&local_58,L"Particles.MaterialRandom",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41e78 = pcVar3;
  DAT_14cb41e80 = uVar2;
  if (DAT_14cb41e88 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41e88 = 0;
  _DAT_14cb41e90 = 0;
  FUN_1446f470e(&local_58,L"Particles.LightRadius",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41e98 = pcVar3;
  DAT_14cb41ea0 = uVar2;
  if (DAT_14cb41ea8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41ea8 = 0;
  _DAT_14cb41eb0 = 0;
  FUN_1446f470e(&local_58,L"Particles.LightExponent",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb42038 = pcVar3;
  DAT_14cb42040 = uVar2;
  if (DAT_14cb42048 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb42048 = 0;
  _DAT_14cb42050 = 0;
  FUN_1446f470e(&local_58,L"Particles.LightEnabled",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420e0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420e0);
  }
  DAT_14cb41eb8 = pcVar3;
  DAT_14cb41ec0 = uVar2;
  if (DAT_14cb41ec8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41ec8 = 0;
  _DAT_14cb41ed0 = 0;
  FUN_1446f470e(&local_58,L"Particles.LightVolumetricScattering",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb42058 = pcVar3;
  DAT_14cb42060 = uVar2;
  if (DAT_14cb42068 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb42068 = 0;
  _DAT_14cb42070 = 0;
  FUN_1446f470e(&local_58,L"Particles.LightSpecularScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb42078 = pcVar3;
  DAT_14cb42080 = uVar2;
  if (DAT_14cb42088 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb42088 = 0;
  _DAT_14cb42090 = 0;
  FUN_1446f470e(&local_58,L"Particles.LightDiffuseScale",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  _DAT_14cb42098 = pcVar3;
  _DAT_14cb420a0 = uVar2;
  if (DAT_14cb420a8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb420a8 = 0;
  uRam000000014cb420b0 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonID",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb421a0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb421a0);
  }
  DAT_14cb41ed8 = pcVar3;
  DAT_14cb41ee0 = uVar2;
  if (DAT_14cb41ee8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41ee8 = 0;
  _DAT_14cb41ef0 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonWidth",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41ef8 = pcVar3;
  DAT_14cb41f00 = uVar2;
  if (DAT_14cb41f08 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41f08 = 0;
  _DAT_14cb41f10 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonTwist",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41f18 = pcVar3;
  DAT_14cb41f20 = uVar2;
  if (DAT_14cb41f28 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41f28 = 0;
  _DAT_14cb41f30 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonFacing",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42140 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42140);
  }
  DAT_14cb41f38 = pcVar3;
  DAT_14cb41f40 = uVar2;
  if (DAT_14cb41f48 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41f48 = 0;
  _DAT_14cb41f50 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonLinkOrder",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41f58 = pcVar3;
  DAT_14cb41f60 = uVar2;
  if (DAT_14cb41f68 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41f68 = 0;
  _DAT_14cb41f70 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonUVDistance",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41f78 = pcVar3;
  DAT_14cb41f80 = uVar2;
  if (DAT_14cb41f88 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41f88 = 0;
  _DAT_14cb41f90 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonU0Override",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41f98 = pcVar3;
  DAT_14cb41fa0 = uVar2;
  if (DAT_14cb41fa8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41fa8 = 0;
  _DAT_14cb41fb0 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonV0RangeOverride",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42110 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42110);
  }
  DAT_14cb41fb8 = pcVar3;
  DAT_14cb41fc0 = uVar2;
  if (DAT_14cb41fc8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41fc8 = 0;
  _DAT_14cb41fd0 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonU1Override",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420f0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420f0);
  }
  DAT_14cb41fd8 = pcVar3;
  DAT_14cb41fe0 = uVar2;
  if (DAT_14cb41fe8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41fe8 = 0;
  _DAT_14cb41ff0 = 0;
  FUN_1446f470e(&local_58,L"Particles.RibbonV1RangeOverride",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb42110 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb42110);
  }
  DAT_14cb41ff8 = pcVar3;
  DAT_14cb42000 = uVar2;
  if (DAT_14cb42008 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb42008 = 0;
  _DAT_14cb42010 = 0;
  FUN_1446f470e(&local_58,L"Particles.VisibilityTag",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb413f8 = pcVar3;
  DAT_14cb41400 = uVar2;
  if (DAT_14cb41408 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41408 = 0;
  _DAT_14cb41410 = 0;
  FUN_1446f470e(&local_58,L"Particles.MeshIndex",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41df8 = pcVar3;
  DAT_14cb41e00 = uVar2;
  if (DAT_14cb41e08 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41e08 = 0;
  _DAT_14cb41e10 = 0;
  FUN_1446f470e(&local_58,L"Particles.ComponentsEnabled",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420e0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420e0);
  }
  DAT_14cb413d8 = pcVar3;
  DAT_14cb413e0 = uVar2;
  if (DAT_14cb413e8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb413e8 = 0;
  _DAT_14cb413f0 = 0;
  FUN_1446f470e(&local_80,L"Script.Usage",1);
  local_58 = DAT_14cb3eda8;
  if ((DAT_14cb3eda8 != (char *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar6 = local_80;
  local_50 = (undefined8 **)CONCAT53(local_50._3_5_,3);
  local_50 = (undefined8 **)CONCAT44(0xffffffff,(undefined4)local_50);
  uVar2 = 0xffffffff;
  if (local_58 != (char *)0x0) {
    uVar2 = FUN_14005ac26(&local_58);
  }
  DAT_14cb41af8 = puVar6;
  DAT_14cb41b00 = uVar2;
  if (DAT_14cb41b08 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41b08 = 0;
  _DAT_14cb41b10 = 0;
  FUN_1446f470e(&local_80,L"Script.Context",1);
  local_58 = DAT_14cb3edb0;
  if ((DAT_14cb3edb0 == (char *)0x0) || (DAT_14c950c29 == '\0')) {
    local_50 = (undefined8 **)CONCAT53(local_50._3_5_,3);
    local_50 = (undefined8 **)CONCAT44(0xffffffff,(undefined4)local_50);
    uVar2 = 0xffffffff;
    puVar6 = local_80;
    if (DAT_14cb3edb0 != (char *)0x0) goto LAB_143a99c9c;
  }
  else {
    FUN_1456cec3c();
    local_50 = (undefined8 **)CONCAT53(local_50._3_5_,3);
    local_50 = (undefined8 **)CONCAT44(0xffffffff,(undefined4)local_50);
LAB_143a99c9c:
    puVar6 = local_80;
    uVar2 = FUN_14005ac26(&local_58);
  }
  DAT_14cb41b18 = puVar6;
  DAT_14cb41b20 = uVar2;
  if (DAT_14cb41b28 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41b28 = 0;
  _DAT_14cb41b30 = 0;
  FUN_1446f470e(&local_58,L"DataInstance.Alive",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420e0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420e0);
  }
  DAT_14cb42018 = pcVar3;
  DAT_14cb42020 = uVar2;
  if (DAT_14cb42028 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb42028 = 0;
  _DAT_14cb42030 = 0;
  FUN_1446f470e(&local_80,L"Function.DebugState",1);
  local_58 = DAT_14cb3edb8;
  if ((DAT_14cb3edb8 == (char *)0x0) || (DAT_14c950c29 == '\0')) {
    local_50 = (undefined8 **)CONCAT53(local_50._3_5_,3);
    local_50 = (undefined8 **)CONCAT44(0xffffffff,(undefined4)local_50);
    uVar2 = 0xffffffff;
    if (DAT_14cb3edb8 != (char *)0x0) goto LAB_143a99da2;
  }
  else {
    FUN_1456cec3c();
    local_50 = (undefined8 **)CONCAT53(local_50._3_5_,3);
    local_50 = (undefined8 **)CONCAT44(0xffffffff,(undefined4)local_50);
LAB_143a99da2:
    uVar2 = FUN_14005ac26(&local_58);
  }
  DAT_14cb41b38 = local_80;
  DAT_14cb41b40 = uVar2;
  if (DAT_14cb41b48 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41b48 = 0;
  _DAT_14cb41b50 = 0;
  FUN_1446f470e(&local_58,L"Begin Defaults",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb3edc0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb3edc0);
  }
  DAT_14cb41a78 = pcVar3;
  DAT_14cb41a80 = uVar2;
  if (DAT_14cb41a88 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41a88 = 0;
  _DAT_14cb41a90 = 0;
  FUN_1446f470e(&local_58,L"Translator.CallID",1);
  pcVar3 = local_58;
  uVar2 = 0xffffffff;
  if (DAT_14cb420d0 != 0) {
    uVar2 = FUN_14005ac26(&DAT_14cb420d0);
  }
  DAT_14cb41a98 = pcVar3;
  DAT_14cb41aa0 = uVar2;
  if (DAT_14cb41aa8 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb41aa8 = 0;
  _DAT_14cb41ab0 = 0;
  FUN_1439f8e86();
  FUN_1464734fe();
  FUN_146474fec();
  FUN_14647a1f8();
  FUN_1464788d0();
  FUN_1464761ce();
  FUN_14646d97a();
  FUN_146211a4c();
  FUN_146221050();
  local_58 = "NiagaraShader";
  local_50 = (undefined8 **)CONCAT35(local_50._5_3_,0xd);
  uVar2 = FUN_14001a6c0(&local_58,1);
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
  uVar4 = FUN_1402c9134(&DAT_14c874628,uVar2,&local_58,1);
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  local_68 = 2;
  *local_70 = &PTR_LAB_14adff9f0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_70[2] = lVar5;
  *local_70 = &PTR_FUN_14adff980;
  FUN_145eed8e6(uVar4,&local_58,&local_70);
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  local_78 = 2;
  *local_80 = &PTR_LAB_14adffad0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_80[2] = lVar5;
  *local_80 = &PTR_FUN_14adffa60;
  local_58 = (char *)&DAT_14cb3e918;
  local_50 = &local_80;
  FUN_14605c7de(&DAT_14caf3250,local_5c,&local_58,0);
  if (local_78 != 0) {
    if (local_80 == (undefined8 *)0x0) goto LAB_143a9a06b;
    (**(code **)*local_80)(local_80,0);
    FUN_1446efa72(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143a9a06b:
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
  FUN_1446f470e(&local_88,L"SignalProcessing",1);
  FUN_1402c9134(&DAT_14c874628,local_88,&local_58,0);
  FUN_145df88ac(param_1);
  FUN_14647632e(&DAT_14c872cf8,&local_58,param_1,FUN_143a9a25c);
  FUN_14647632e(&DAT_14c8673d8,&local_58,param_1,FUN_14080c8a4);
  FUN_1464766ea(&local_58,param_1);
  FUN_14126834e(&DAT_14cb10ae8,&local_80,&local_58);
  FUN_1401cb1ee(&local_58);
  FUN_146476414(&local_58,param_1);
  FUN_14647632e(&DAT_14c867408,&local_58,param_1,FUN_1408094f0);
  uVar4 = FUN_140b631de();
  FUN_14647632e(uVar4,&local_58,param_1,&LAB_14080a0d8);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9a25c FUN_143a9a25c body=619 status=ok
// SIG undefined FUN_143a9a25c(void)

void FUN_143a9a25c(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 0x120))();
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,2,0x10);
  local_40 = 2;
  *local_48 = (longlong)&PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar7;
  *local_48 = (longlong)&PTR_FUN_14adffc90;
  if ((local_48 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_48 + 0x30))(), cVar4 == '\0')) {
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) {
        uVar9 = 0;
        goto LAB_143a9a421;
      }
      uVar9 = 0;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_143a9a40f;
    }
    uVar9 = 0;
  }
  else {
    if (*(int *)((longlong)plVar6 + 0x14) < 1) {
      iVar1 = (int)plVar6[1];
      iVar5 = (int)plVar6[2] + -1;
      *(int *)(plVar6 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar6 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar6 + (longlong)iVar8 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar6,iVar8);
              FUN_14005b248(plVar6);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)plVar6[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(plVar6 + 2) = iVar8;
        if ((iVar8 < iVar1) && (*(int *)((longlong)plVar6 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar9 = 0;
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,&local_38);
      uVar9 = local_38;
    }
    iVar1 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(plVar6,iVar1);
    }
    lVar3 = *plVar6;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar7) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar7) = 0;
    *(longlong **)(lVar3 + lVar7) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar7) = local_40;
LAB_143a9a40f:
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143a9a421:
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  FUN_140809607();
  FUN_140809508();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9a4c8 FUN_143a9a4c8 body=352 status=ok
// SIG undefined FUN_143a9a4c8(void)

void FUN_143a9a4c8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14126849c(&DAT_14cb10ae8,param_1);
  FUN_140457ffc(&DAT_14cb10838,param_1);
  FUN_140457ffc(&DAT_14c867408,param_1);
  FUN_14647bc98();
  local_20 = "NiagaraShader";
  local_18 = 0xd;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
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
  uVar2 = FUN_1402c9134(&DAT_14c874628,uVar1,&local_20,1);
  FUN_14646095c(uVar2);
  FUN_145d5c514(&DAT_14caf3250,DAT_14cb3e918);
  FUN_1481cdfc2();
  if (DAT_14cb412f0 != (undefined8 *)0x0) {
    (**(code **)*DAT_14cb412f0)(DAT_14cb412f0,0);
    DAT_14cb412f0 = (undefined8 *)0x0;
  }
  uVar2 = FUN_145c6eb82(0);
  FUN_145c6eb42(uVar2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9a629 FUN_143a9a629 body=47 status=ok
// SIG undefined FUN_143a9a629(void)

void FUN_143a9a629(void)

{
  DAT_14cb3ee48 = 0;
  if (DAT_14cb3ee40 != 0) {
    FUN_1400020a8();
  }
  FUN_145af19e2(&DAT_14cb3ee00);
  return;
}



// FUNCTION 143a9a669 FUN_143a9a669 body=47 status=ok
// SIG undefined FUN_143a9a669(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9a669(void)

{
  _DAT_14cb3eea8 = 0;
  if (DAT_14cb3eea0 != 0) {
    FUN_1400020a8();
  }
  FUN_145af19e2(&DAT_14cb3ee60);
  return;
}



// FUNCTION 143a9a698 FUN_143a9a698 body=47 status=ok
// SIG undefined FUN_143a9a698(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9a698(void)

{
  _DAT_14cb3eef8 = 0;
  if (DAT_14cb3eef0 != 0) {
    FUN_1400020a8();
  }
  FUN_1459a53be(&DAT_14cb3eeb0);
  return;
}



// FUNCTION 143a9a6c7 FUN_143a9a6c7 body=47 status=ok
// SIG undefined FUN_143a9a6c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9a6c7(void)

{
  _DAT_14cb3ef48 = 0;
  if (DAT_14cb3ef40 != 0) {
    FUN_1400020a8();
  }
  FUN_1459a53be(&DAT_14cb3ef00);
  return;
}



// FUNCTION 143a9a6f6 FUN_143a9a6f6 body=47 status=ok
// SIG undefined FUN_143a9a6f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9a6f6(void)

{
  _DAT_14cb3ef98 = 0;
  if (DAT_14cb3ef90 != 0) {
    FUN_1400020a8();
  }
  FUN_1459a53be(&DAT_14cb3ef50);
  return;
}



// FUNCTION 143a9a726 FUN_143a9a726 body=101 status=ok
// SIG undefined FUN_143a9a726(void)

void FUN_143a9a726(longlong param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x2198);
  AcquireSRWLockShared(SRWLock);
  if ((longlong)*(int *)(param_1 + 0x2010) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x2010) << 4;
    do {
      param_1 = param_1 + 0x10;
      (**(code **)(*param_2 + 0x88))(param_2,param_1,0,0);
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000143a9a784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared(SRWLock);
  return;
}



// FUNCTION 143a9a802 FUN_143a9a802 body=382 status=ok
// SIG undefined FUN_143a9a802(void)

void FUN_143a9a802(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_1447a082e(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a9a990 FUN_143a9a990 body=17 status=ok
// SIG undefined FUN_143a9a990(void)

void FUN_143a9a990(void *param_1,ulonglong param_2)

{
  memset(param_1,0,(param_2 & 0xffffffff) * 0x30);
  return;
}



// FUNCTION 143a9a9a2 FUN_143a9a9a2 body=31 status=ok
// SIG undefined FUN_143a9a9a2(void)

undefined8 FUN_143a9a9a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9a9ee FUN_143a9a9ee body=63 status=ok
// SIG undefined FUN_143a9a9ee(void)

void FUN_143a9a9ee(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    FUN_14032e8b2(lVar2);
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 143a9aa38 FUN_143a9aa38 body=12 status=ok
// SIG undefined FUN_143a9aa38(void)

void FUN_143a9aa38(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a9aa41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a9aa44 FUN_143a9aa44 body=29 status=ok
// SIG undefined FUN_143a9aa44(void)

undefined8 FUN_143a9aa44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9aa88 FUN_143a9aa88 body=282 status=ok
// SIG undefined FUN_143a9aa88(void)

undefined8 * FUN_143a9aa88(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a9aa61);
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



// FUNCTION 143a9aba2 FUN_143a9aba2 body=116 status=ok
// SIG undefined FUN_143a9aba2(void)

ulonglong FUN_143a9aba2(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = (**(code **)*puVar2)(puVar2,1);
  }
  lVar3 = param_1[0x16];
  if (lVar3 != 0) {
    FUN_14032e8b2(lVar3);
    uVar4 = FUN_1400020a8(lVar3);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9ac0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 143a9ac16 FUN_143a9ac16 body=23 status=ok
// SIG undefined FUN_143a9ac16(void)

void FUN_143a9ac16(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0x3f800000;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 143a9ac2d FUN_143a9ac2d body=19 status=ok
// SIG undefined FUN_143a9ac2d(void)

void FUN_143a9ac2d(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 143a9ac40 FUN_143a9ac40 body=56 status=ok
// SIG undefined FUN_143a9ac40(void)

void FUN_143a9ac40(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x58);
    do {
      puVar1[-3] = 0;
      puVar1[-2] = 0x1000000000;
      *(undefined4 *)(puVar1 + -1) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143a9ac78 FUN_143a9ac78 body=488 status=ok
// SIG undefined FUN_143a9ac78(void)

void FUN_143a9ac78(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_c8 [40];
  ulonglong local_a0 [2];
  ulonglong local_90;
  ulonglong local_80;
  ulonglong local_70;
  ulonglong local_60;
  ulonglong local_50;
  ulonglong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar5 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  FUN_1403ab9d2(local_a0,L"Niagara GPU External CBuffer",(int)param_1[1]);
  FUN_1404e4ca0(puVar5,local_a0);
  if (local_40 != 0 && (local_40 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0 && (local_50 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0 && (local_60 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0 && (local_70 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0 && (local_80 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0 && (local_90 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_a0[0] != 0 && (local_a0[0] & 1) == 0) {
    FUN_1400020a8();
  }
  *puVar5 = &PTR_FUN_14adff300;
  puVar4 = *(undefined8 **)(*param_1 + 0x70);
  if (puVar4 != puVar5) {
    *(undefined8 **)(*param_1 + 0x70) = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
      UNLOCK();
    }
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar4 + 1);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(puVar4 + 1);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)((longlong)puVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = (longlong)puVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a9ae6c FUN_143a9ae6c body=12 status=ok
// SIG undefined FUN_143a9ae6c(void)

void FUN_143a9ae6c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a9ae75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a9ae78 FUN_143a9ae78 body=29 status=ok
// SIG undefined FUN_143a9ae78(void)

undefined8 FUN_143a9ae78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9ae96 FUN_143a9ae96 body=282 status=ok
// SIG undefined FUN_143a9ae96(void)

undefined8 * FUN_143a9ae96(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a9aa61);
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



// FUNCTION 143a9afb0 FUN_143a9afb0 body=536 status=ok
// SIG undefined FUN_143a9afb0(void)

void FUN_143a9afb0(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_c8 [40];
  ulonglong local_a0 [2];
  ulonglong local_90;
  ulonglong local_80;
  ulonglong local_70;
  ulonglong local_60;
  ulonglong local_50;
  ulonglong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  FUN_1403ab9d2(local_a0,L"Niagara GPU External CBuffer",*(undefined4 *)(param_1 + 0x16));
  FUN_1404e4ca0(puVar6,local_a0);
  if (local_40 != 0 && (local_40 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0 && (local_50 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0 && (local_60 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0 && (local_70 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0 && (local_80 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0 && (local_90 & 1) == 0) {
    FUN_1400020a8();
  }
  if (local_a0[0] != 0 && (local_a0[0] & 1) == 0) {
    FUN_1400020a8();
  }
  *puVar6 = &PTR_FUN_14adff300;
  puVar5 = *(undefined8 **)(param_1[0x15] + 0x70);
  if (puVar5 != puVar6) {
    *(undefined8 **)(param_1[0x15] + 0x70) = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar5 + 1);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(puVar5 + 1);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)((longlong)puVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = (longlong)puVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
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
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a9b1ca FUN_143a9b1ca body=1047 status=ok
// SIG undefined FUN_143a9b1ca(void)

void FUN_143a9b1ca(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  ulonglong local_158;
  longlong *local_150;
  uint *local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar15 = (uint *)(param_1 + 0x250);
  uVar11 = *(uint *)(param_1 + 0x268);
  uVar13 = (ulonglong)uVar11;
  if (uVar11 == 0) {
    uVar16 = 1;
    uVar18 = 0;
    iVar12 = 0;
    uVar5 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar6 = puVar15;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar12 = uVar11 + 0x1e;
      if (-1 < (int)(uVar11 - 1)) {
        iVar12 = uVar11 - 1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar18) goto LAB_143a9b5aa;
        iVar12 = iVar12 + 0x20;
        uVar5 = puVar6[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar18 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar5 & uVar5);
    uVar1 = uVar16 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if ((int)uVar11 <= (int)uVar5) {
      uVar5 = uVar11;
    }
  }
  if (uVar5 != uVar11) {
    uVar11 = 0xffffffff;
    local_158 = uVar13;
    local_150 = param_2;
    local_148 = puVar15;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar5 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        FUN_143937a20(*param_3,plVar3,*(undefined4 *)param_3[1]);
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_160 = FUN_14081d0ea;
          local_168 = FUN_142b47bc4;
          local_170 = &local_120;
          local_178 = &LAB_147860ffd;
          local_180 = FUN_1463713dc;
          local_188 = L"Engine";
          local_190 = 0;
          local_198 = 0x10000005;
          local_1a0 = 0x10;
          local_1a8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
        }
        uVar13 = local_158;
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar1 = local_50, uVar13 = local_158,
           lVar7 != 0)) {
          lVar14 = (longlong)(int)local_50;
          uVar5 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar5);
          if (local_50._4_4_ < uVar5) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar14 * 8) = lVar7;
          uVar13 = local_158;
          puVar15 = local_148;
        }
      }
      plVar3 = local_150;
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar6 = puVar15;
      }
      uVar2 = *(uint *)(param_1 + 0x268);
      iVar17 = (int)uVar18;
      lVar7 = (longlong)iVar17;
      uVar5 = puVar6[lVar7] & uVar11;
      if (uVar5 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar17) {
          iVar10 = iVar17;
        }
        if (iVar17 < iVar9) {
          lVar14 = 0;
          do {
            uVar5 = puVar6[lVar7 + lVar14 + 1];
            if (uVar5 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_143a9b405;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar10 - lVar7 != lVar14);
          uVar11 = 0xffffffff;
          iVar17 = iVar10;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar13 = local_158;
        uVar5 = uVar2;
      }
      else {
LAB_143a9b405:
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar5 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar5) {
          uVar5 = uVar2;
        }
      }
    } while (uVar5 != (uint)uVar13);
    lVar7 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar7 != 0) {
      lVar14 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar14);
        local_138 = *(undefined4 *)param_3;
        uStack_134 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_130 = *(undefined4 *)(param_3 + 1);
        uStack_12c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_140 = *plVar3;
        if ((local_140 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_143a9b1ca(uVar4,&local_140,&local_138);
        lVar14 = lVar14 + 8;
      } while (lVar7 * 8 != lVar14);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143a9b5aa:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a9b5e2 FUN_143a9b5e2 body=1352 status=ok
// SIG undefined FUN_143a9b5e2(void)

void FUN_143a9b5e2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  code **local_170;
  code *local_168;
  code *local_160;
  uint *local_158;
  undefined8 *local_150;
  longlong *local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  code *local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  puVar17 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_150 = param_3;
  local_148 = param_2;
  if (iVar2 == 0) {
    uVar18 = 1;
    uVar19 = 0;
    iVar15 = 0;
    iVar7 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar9 = puVar17;
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar19;
      }
      iVar15 = 0;
      do {
        if (uVar18 == uVar19) goto LAB_143a9baf3;
        iVar15 = iVar15 + 0x20;
        uVar16 = puVar9[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar19 = 0;
      iVar15 = 0;
    }
    uVar18 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar18 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar16 = 0xffffffff;
    local_158 = puVar17;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x240) + (longlong)iVar7 * 0x10);
      if (plVar4 != (longlong *)0x0) {
        lVar10 = *local_148;
        if ((lVar10 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar10);
          puVar17 = local_158;
LAB_143a9b719:
          if (DAT_14cad00c8 == 0) {
            local_120 = FUN_144a7958c;
            local_160 = FUN_14081d0ea;
            local_168 = FUN_14081d0ea;
            local_170 = &local_120;
            local_178 = &LAB_1479b7a0c;
            local_180 = (code *)&LAB_1463b464e;
            local_188 = L"Engine";
            local_190 = 0;
            local_198 = 0x10000005;
            local_1a0 = 8;
            local_1a8 = 0x110;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar17 = local_158;
            if (DAT_14cad00c8 == 0) goto LAB_143a9b733;
          }
          if (*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_143a9b733;
          if (*(longlong *)
               (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar10 = 0;
          }
        }
        else {
          if (lVar10 != 0) goto LAB_143a9b719;
LAB_143a9b733:
          lVar10 = 0;
        }
        if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
            == lVar10 + 0x30)) {
          FUN_143937a20(*local_150,plVar4,*(undefined4 *)local_150[1]);
          puVar17 = local_158;
        }
        if (DAT_14cabf8d0 == 0) {
          local_120 = FUN_144a7958c;
          local_160 = FUN_14081d0ea;
          local_168 = FUN_142b47bc4;
          local_170 = &local_120;
          local_178 = &LAB_147860ffd;
          local_180 = FUN_1463713dc;
          local_188 = L"Engine";
          local_190 = 0;
          local_198 = 0x10000005;
          local_1a0 = 0x10;
          local_1a8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"ChildActorBaseComponent",&DAT_14cabf8d0,&DAT_147860ffc);
          puVar17 = local_158;
        }
        if (((*(int *)(DAT_14cabf8d0 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8d0 + 0x38) * 8) ==
             DAT_14cabf8d0 + 0x30)) &&
           (lVar10 = (**(code **)(*plVar4 + 0x5d8))(plVar4), uVar1 = local_50, puVar17 = local_158,
           lVar10 != 0)) {
          lVar14 = (longlong)(int)local_50;
          uVar8 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar8);
          if (local_50._4_4_ < uVar8) {
            FUN_1470e9d72(local_118,uVar1 & 0xffffffff);
          }
          puVar11 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar11 = local_118;
          }
          *(longlong *)(puVar11 + lVar14 * 8) = lVar10;
          puVar17 = local_158;
        }
      }
      puVar6 = local_150;
      uVar16 = uVar16 & ~(uint)uVar18;
      puVar9 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar9 = puVar17;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar7 = (int)uVar19;
      lVar10 = (longlong)iVar7;
      uVar8 = puVar9[lVar10] & uVar16;
      if (uVar8 == 0) {
        iVar12 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar12 = iVar3 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar7) {
          iVar13 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar14 = 0;
          do {
            uVar8 = puVar9[lVar10 + lVar14 + 1];
            if (uVar8 != 0) {
              uVar19 = (ulonglong)(iVar7 + (int)lVar14 + 1);
              uVar16 = 0xffffffff;
              goto LAB_143a9b884;
            }
            iVar15 = iVar15 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar13 - lVar10 != lVar14);
          uVar16 = 0xffffffff;
          iVar7 = iVar13;
        }
        uVar19 = (ulonglong)(iVar7 + 1);
        puVar17 = local_158;
        iVar7 = iVar3;
      }
      else {
LAB_143a9b884:
        uVar18 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
    lVar10 = (longlong)(int)local_50;
    puVar11 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar11 = local_58;
    }
    if (lVar10 != 0) {
      lVar14 = 0;
      do {
        uVar5 = *(undefined8 *)(puVar11 + lVar14);
        local_138 = *(undefined4 *)puVar6;
        uStack_134 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_130 = *(undefined4 *)(puVar6 + 1);
        uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
        local_140 = *local_148;
        if ((local_140 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_143a9b5e2(uVar5,&local_140,&local_138);
        lVar14 = lVar14 + 8;
      } while (lVar10 * 8 != lVar14);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143a9baf3:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a9bb2c FUN_143a9bb2c body=29 status=ok
// SIG undefined FUN_143a9bb2c(void)

undefined8 FUN_143a9bb2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9bb5e FUN_143a9bb5e body=85 status=ok
// SIG undefined FUN_143a9bb5e(void)

void FUN_143a9bb5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff370;
  return;
}



// FUNCTION 143a9bbb4 FUN_143a9bbb4 body=85 status=ok
// SIG undefined FUN_143a9bbb4(void)

void FUN_143a9bbb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff370;
  return;
}



// FUNCTION 143a9bc0a FUN_143a9bc0a body=118 status=ok
// SIG undefined FUN_143a9bc0a(void)

void FUN_143a9bc0a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adff370;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9bc71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a9bc86 FUN_143a9bc86 body=16 status=ok
// SIG undefined FUN_143a9bc86(void)

undefined1 FUN_143a9bc86(void)

{
  FUN_143a9bc96();
  return 1;
}



// FUNCTION 143a9bc96 FUN_143a9bc96 body=204 status=ok
// SIG undefined FUN_143a9bc96(void)

void FUN_143a9bc96(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14012e468(&local_28,0x10,1,0);
  uVar1 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      FUN_14080a7a8(*(undefined8 *)(local_28 + (uVar1 & 0xffffffff) * 8));
      FUN_140719760(local_40,*(undefined8 *)(local_28 + (longlong)(int)local_18 * 8),0);
      FUN_14071963e(local_40);
      uVar1 = (longlong)(int)local_18;
      do {
        uVar2 = uVar1;
        uVar1 = uVar2 + 1;
        local_18 = (uint)uVar1;
        if ((longlong)local_20 <= (longlong)uVar1) break;
      } while (*(longlong *)(local_28 + uVar1 * 8) == 0);
    } while ((-2 < (longlong)uVar2) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9bd63 FUN_143a9bd63 body=77 status=ok
// SIG undefined FUN_143a9bd63(void)

void FUN_143a9bd63(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143a9bdb0 FUN_143a9bdb0 body=29 status=ok
// SIG undefined FUN_143a9bdb0(void)

undefined8 FUN_143a9bdb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9bde2 FUN_143a9bde2 body=93 status=ok
// SIG undefined FUN_143a9bde2(void)

void FUN_143a9bde2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa00870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff3e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a9be40 FUN_143a9be40 body=93 status=ok
// SIG undefined FUN_143a9be40(void)

void FUN_143a9be40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa00870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff3e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a9be9e FUN_143a9be9e body=126 status=ok
// SIG undefined FUN_143a9be9e(void)

void FUN_143a9be9e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aa00870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adff3e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9bf0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a9bf26 FUN_143a9bf26 body=38 status=ok
// SIG undefined FUN_143a9bf26(void)

undefined8 FUN_143a9bf26(longlong param_1)

{
  FUN_1449e101e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143a9bf4c FUN_143a9bf4c body=29 status=ok
// SIG undefined FUN_143a9bf4c(void)

undefined8 FUN_143a9bf4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9bf7e FUN_143a9bf7e body=93 status=ok
// SIG undefined FUN_143a9bf7e(void)

void FUN_143a9bf7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffd30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff450;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a9bfdc FUN_143a9bfdc body=93 status=ok
// SIG undefined FUN_143a9bfdc(void)

void FUN_143a9bfdc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffd30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff450;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a9c03a FUN_143a9c03a body=126 status=ok
// SIG undefined FUN_143a9c03a(void)

void FUN_143a9c03a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14adffd30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adff450;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9c0a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a9c0cc FUN_143a9c0cc body=30 status=ok
// SIG undefined FUN_143a9c0cc(void)

undefined1 FUN_143a9c0cc(longlong param_1,undefined8 param_2)

{
  FUN_143a9542a(*(longlong *)(param_1 + 0x18) + 0x38,*(longlong *)(param_1 + 0x18),param_2,0);
  return 1;
}



// FUNCTION 143a9c0ea FUN_143a9c0ea body=29 status=ok
// SIG undefined FUN_143a9c0ea(void)

undefined8 FUN_143a9c0ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9c11c FUN_143a9c11c body=93 status=ok
// SIG undefined FUN_143a9c11c(void)

void FUN_143a9c11c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffd30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff4c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a9c17a FUN_143a9c17a body=93 status=ok
// SIG undefined FUN_143a9c17a(void)

void FUN_143a9c17a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14adffd30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adff4c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143a9c1d8 FUN_143a9c1d8 body=126 status=ok
// SIG undefined FUN_143a9c1d8(void)

void FUN_143a9c1d8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14adffd30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adff4c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9c247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143a9c256 FUN_143a9c256 body=51 status=ok
// SIG undefined FUN_143a9c256(void)

void FUN_143a9c256(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_143a9542a(lVar1 + 0x38,lVar1,param_2,1);
  FUN_143a94cc6(lVar1,param_2);
  return;
}



// FUNCTION 143a9c28a FUN_143a9c28a body=54 status=ok
// SIG undefined FUN_143a9c28a(void)

undefined1 FUN_143a9c28a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_143a9542a(lVar1 + 0x38,lVar1,param_2,1);
  FUN_143a94cc6(lVar1,param_2);
  return 1;
}



// FUNCTION 143a9c2c0 FUN_143a9c2c0 body=44 status=ok
// SIG undefined FUN_143a9c2c0(void)

void FUN_143a9c2c0(longlong *param_1,undefined8 param_2)

{
  FUN_143a8cba6(*param_1,param_2,0);
  FUN_1415dd2b0(*param_1 + 0x38,param_2);
  return;
}



// FUNCTION 143a9c2f6 FUN_143a9c2f6 body=12 status=ok
// SIG undefined FUN_143a9c2f6(void)

void FUN_143a9c2f6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a9c2ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a9c302 FUN_143a9c302 body=29 status=ok
// SIG undefined FUN_143a9c302(void)

undefined8 FUN_143a9c302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9c320 FUN_143a9c320 body=282 status=ok
// SIG undefined FUN_143a9c320(void)

undefined8 * FUN_143a9c320(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a9aa61);
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



// FUNCTION 143a9c43a FUN_143a9c43a body=163 status=ok
// SIG undefined FUN_143a9c43a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9c43a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a8cba6(_DAT_000000a8,&DAT_14ca85100,0);
    FUN_1415dd2b0(_DAT_000000a8 + 0x38,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a8cba6(param_1[0x15],&DAT_14ca85100,0);
  FUN_1415dd2b0(param_1[0x15] + 0x38,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9c498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a9c4de FUN_143a9c4de body=44 status=ok
// SIG undefined FUN_143a9c4de(void)

void FUN_143a9c4de(longlong *param_1,undefined8 param_2)

{
  FUN_143a8cba6(*param_1,param_2,1);
  FUN_1415dd2b0(*param_1 + 0x38,param_2);
  return;
}



// FUNCTION 143a9c514 FUN_143a9c514 body=12 status=ok
// SIG undefined FUN_143a9c514(void)

void FUN_143a9c514(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a9c51d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a9c520 FUN_143a9c520 body=29 status=ok
// SIG undefined FUN_143a9c520(void)

undefined8 FUN_143a9c520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9c53e FUN_143a9c53e body=282 status=ok
// SIG undefined FUN_143a9c53e(void)

undefined8 * FUN_143a9c53e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a9aa61);
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



// FUNCTION 143a9c658 FUN_143a9c658 body=163 status=ok
// SIG undefined FUN_143a9c658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143a9c658(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143a8cba6(_DAT_000000a8,&DAT_14ca85100,1);
    FUN_1415dd2b0(_DAT_000000a8 + 0x38,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143a8cba6(param_1[0x15],&DAT_14ca85100,1);
  FUN_1415dd2b0(param_1[0x15] + 0x38,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9c6b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143a9c6fc FUN_143a9c6fc body=56 status=ok
// SIG undefined FUN_143a9c6fc(void)

void FUN_143a9c6fc(longlong *param_1,undefined8 param_2)

{
  FUN_143a8cba6(*param_1,param_2,1);
  FUN_1415dd2b0(*param_1 + 0x38,param_2);
  FUN_143a96774(*(undefined8 *)(*param_1 + 0x28));
  return;
}



// FUNCTION 143a9c73e FUN_143a9c73e body=12 status=ok
// SIG undefined FUN_143a9c73e(void)

void FUN_143a9c73e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143a9c747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143a9c74a FUN_143a9c74a body=29 status=ok
// SIG undefined FUN_143a9c74a(void)

undefined8 FUN_143a9c74a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9c768 FUN_143a9c768 body=282 status=ok
// SIG undefined FUN_143a9c768(void)

undefined8 * FUN_143a9c768(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143a9aa61);
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



// FUNCTION 143a9c882 FUN_143a9c882 body=126 status=ok
// SIG undefined FUN_143a9c882(void)

void FUN_143a9c882(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143a8cba6(param_1[0x15],&DAT_14ca85100,1);
  FUN_1415dd2b0(param_1[0x15] + 0x38,&DAT_14ca85100);
  FUN_143a96774(*(undefined8 *)(param_1[0x15] + 0x28));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143a9c8f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143a9c900 FUN_143a9c900 body=38 status=ok
// SIG undefined FUN_143a9c900(void)

undefined8 FUN_143a9c900(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9c926 FUN_143a9c926 body=454 status=ok
// SIG undefined FUN_143a9c926(void)

void FUN_143a9c926(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_143a9542a(*(longlong *)(param_1 + 0x1b8) + 0x38,*(longlong *)(param_1 + 0x1b8),param_2,0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9cafa FUN_143a9cafa body=38 status=ok
// SIG undefined FUN_143a9cafa(void)

undefined8 FUN_143a9cafa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9cb20 FUN_143a9cb20 body=457 status=ok
// SIG undefined FUN_143a9cb20(void)

void FUN_143a9cb20(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_143a9542a(*(longlong *)(param_1 + 0x1b8) + 0x38,*(longlong *)(param_1 + 0x1b8),param_2,1);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9ccea FUN_143a9ccea body=38 status=ok
// SIG undefined FUN_143a9ccea(void)

undefined8 FUN_143a9ccea(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9cd10 FUN_143a9cd10 body=454 status=ok
// SIG undefined FUN_143a9cd10(void)

void FUN_143a9cd10(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1481c8690(*(undefined8 *)(param_1 + 0x1b8),param_2,*(undefined4 *)(param_1 + 0x1c8));
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9ced8 FUN_143a9ced8 body=38 status=ok
// SIG undefined FUN_143a9ced8(void)

undefined8 FUN_143a9ced8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9cefe FUN_143a9cefe body=593 status=ok
// SIG undefined FUN_143a9cefe(void)

void FUN_143a9cefe(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
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
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar8 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar8 = local_b8;
    }
    FUN_1446fe144(puVar9 + 2,local_b0,0);
    puVar6 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar6 = puVar9 + 2;
    }
    memcpy(puVar6,puVar8,(longlong)local_b0);
  }
  puVar9[0xd] = 0;
  *(int *)(puVar9 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    puVar8 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar8 = local_a8;
    }
    FUN_1446fe1b8(puVar9 + 5,local_60,0);
    puVar6 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar9 + 5;
    }
    memcpy(puVar6,puVar8,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar9 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar9 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  iVar2 = *(int *)(lVar3 + 0x380);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x378);
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar10);
      lVar7 = plVar5[0x26];
      if (lVar7 != 0) {
        plVar5[0x26] = 0;
        LOCK();
        piVar1 = (int *)(lVar7 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      lVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2,0);
      *(undefined4 *)(lVar7 + 0x58) = 0;
      *(undefined4 *)(plVar5[0x3e] + 0x5c) = 0xffffffff;
      *(undefined4 *)(plVar5[0x3f] + 0x5c) = 0xffffffff;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
  *(undefined4 *)(lVar3 + 0x380) = 0;
  if (*(int *)(lVar3 + 900) < 0) {
    FUN_1481cc5d0(lVar3 + 0x378);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9d150 FUN_143a9d150 body=103 status=ok
// SIG undefined FUN_143a9d150(void)

undefined8 * FUN_143a9d150(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adff6d0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_144705e08(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9d1b8 FUN_143a9d1b8 body=895 status=ok
// SIG undefined FUN_143a9d1b8(void)

void FUN_143a9d1b8(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    puVar7 = &local_c0;
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    }
    FUN_1446fe144(puVar10 + 2,local_b0,0);
    puVar8 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar8 = puVar10 + 2;
    }
    memcpy(puVar8,puVar7,(longlong)local_b0);
  }
  puVar10[0xd] = 0;
  *(int *)(puVar10 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar10 + 5,local_60,0);
    puVar7 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar10 + 5;
    }
    memcpy(puVar7,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar10 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar10 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar10 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_1 + 0x1b8);
  local_c0 = *(undefined8 *)(param_1 + 0x1c0);
  local_b8 = *(undefined4 *)(param_1 + 0x1c8);
  FUN_144760590(param_2,&local_c0,0);
  if (0 < *(int *)(param_1 + 0x1d8)) {
    local_d8 = 0;
    uStack_d0 = 0;
    FUN_144addb80();
    iVar1 = *(int *)(param_1 + 0x1d8);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1d0);
      lVar11 = 0;
      do {
        local_f8 = 0xffffffff;
        FUN_144a9a41e(param_2,*(undefined4 *)(lVar2 + 0x24),*(undefined8 *)(lVar3 + lVar11),
                      *(undefined4 *)(lVar3 + 8 + lVar11));
        uVar5 = uStack_d0;
        lVar9 = (longlong)(int)uStack_d0;
        uVar6 = (int)uStack_d0 + 1;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
        if (uStack_d0._4_4_ < uVar6) {
          FUN_141792ef4(&local_d8,uVar5 & 0xffffffff);
        }
        lVar9 = lVar9 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar11);
        *(undefined8 *)(local_d8 + lVar9) = 0xffffffffffffffff;
        *(undefined4 *)(local_d8 + 8 + lVar9) = 0xffffffff;
        *(undefined8 *)(local_d8 + 0x10 + lVar9) = uVar4;
        *(undefined1 *)(local_d8 + 0x18 + lVar9) = 3;
        *(undefined8 *)(local_d8 + 0x1c + lVar9) = 0x40000000400;
        *(undefined4 *)(local_d8 + 0x24 + lVar9) = 0;
        *(undefined1 *)(local_d8 + 0x30 + lVar9) = 0;
        lVar11 = lVar11 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar11);
    }
    local_e8 = local_d8;
    local_e0 = (int)uStack_d0;
    FUN_144760590(param_2,&local_e8,0);
    FUN_144705e08(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x60);
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar10 + 1;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x10);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 1;
  }
  *param_2 = (ulonglong)puVar7;
  *puVar10 = uVar4;
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar8 + 4;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x28);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar8 + 4;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14a2dc3b0;
  puVar8[2] = puVar10;
  *(undefined4 *)(puVar8 + 3) = 1;
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9d538 FUN_143a9d538 body=103 status=ok
// SIG undefined FUN_143a9d538(void)

undefined8 * FUN_143a9d538(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adff6d0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_144705e08(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9d5a0 FUN_143a9d5a0 body=86 status=ok
// SIG undefined FUN_143a9d5a0(void)

undefined8 * FUN_143a9d5a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adff710;
  FUN_144705e08(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9d5f6 FUN_143a9d5f6 body=632 status=ok
// SIG undefined FUN_143a9d5f6(void)

void FUN_143a9d5f6(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *_Src;
  undefined8 *puVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  *(int *)(puVar4 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    puVar2 = &local_b8;
    if ((undefined8 *)CONCAT44(uStack_ac,local_b0) != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
    }
    FUN_1446fe144(puVar4 + 2,local_a8,0);
    puVar3 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar3 = puVar4 + 2;
    }
    memcpy(puVar3,puVar2,(longlong)local_a8);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar4 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 5;
    }
    memcpy(puVar2,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar4 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,local_b0) != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x60);
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar4 + 1;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x10);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 1;
  }
  *param_2 = (ulonglong)puVar2;
  *puVar4 = uVar1;
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 4;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x28);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 4;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a2dc3b8;
  puVar3[2] = puVar4;
  *(undefined4 *)(puVar3 + 3) = 1;
  local_b8 = *(undefined8 *)(param_1 + 0x1c0);
  local_b0 = *(undefined4 *)(param_1 + 0x1c8);
  FUN_144760590(param_2,&local_b8,0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9d870 FUN_143a9d870 body=86 status=ok
// SIG undefined FUN_143a9d870(void)

undefined8 * FUN_143a9d870(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14adff710;
  FUN_144705e08(param_1[0x38],*(undefined4 *)(param_1 + 0x39));
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9d8c6 FUN_143a9d8c6 body=38 status=ok
// SIG undefined FUN_143a9d8c6(void)

undefined8 FUN_143a9d8c6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9d8ec FUN_143a9d8ec body=1288 status=ok
// SIG undefined FUN_143a9d8ec(void)

void FUN_143a9d8ec(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *_Src;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong **_Src_00;
  longlong lVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8;
  longlong local_e0;
  undefined8 **local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_b0 [4];
  undefined8 local_ac;
  undefined4 local_a4;
  undefined1 local_98;
  undefined1 *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = param_1;
  FUN_144b1c6fa(param_1 + 0x10,&local_c8);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_b8;
  if ((longlong)(int)local_b8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    _Src_00 = uStack_c0;
    if (uStack_c0 == (longlong **)0x0) {
      _Src_00 = &local_c8;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_b8,0);
    puVar8 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 2;
    }
    memcpy(puVar8,_Src_00,(longlong)(int)local_b8);
  }
  puVar11[0xd] = 0;
  *(int *)(puVar11 + 0xe) = local_68;
  if ((longlong)local_68 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    _Src = local_70;
    if (local_70 == (undefined1 *)0x0) {
      _Src = local_b0;
    }
    FUN_1446fe1b8(puVar11 + 5,local_68,0);
    puVar8 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar11 + 5;
    }
    memcpy(puVar8,_Src,(longlong)local_68 << 3);
  }
  *(undefined4 *)(puVar11 + 0xf) = local_60;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = uStack_5c;
  *(undefined4 *)(puVar11 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_54;
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (uStack_c0 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(local_e0 + 0x1b8);
  iVar1 = *(int *)(local_e0 + 0x1c8);
  local_b8 = *(undefined8 *)(lVar2 + 0x270);
  local_c8 = (longlong *)0xffffffffffffffff;
  uStack_c0._0_4_ = 0xffffffff;
  local_b0[0] = 3;
  local_ac = 0x40000000400;
  local_a4 = 0;
  local_98 = 0;
  local_d0 = 1;
  local_d8 = &local_c8;
  FUN_144760590(param_2,&local_d8,0);
  local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
  FUN_144a9a41e(param_2,*(undefined4 *)(lVar2 + 0x24),*(undefined8 *)(lVar2 + 0x270),
                *(uint *)(lVar2 + 0x280) >> 2);
  local_b8 = *(undefined8 *)(lVar2 + 0x270);
  local_c8 = (longlong *)0xffffffffffffffff;
  uStack_c0 = (longlong **)CONCAT44(uStack_c0._4_4_,0xffffffff);
  local_b0[0] = 3;
  local_ac = 0x40000000400;
  local_a4 = 0;
  local_98 = 0;
  local_d8 = &local_c8;
  local_d0 = 1;
  FUN_144760590(param_2,&local_d8,0);
  local_c8 = (longlong *)0x0;
  uStack_c0 = (longlong **)0x0;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_144addb80(&local_c8,iVar1);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x270);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar11 + 1;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x10);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar11 + 1;
  }
  *param_2 = (ulonglong)puVar8;
  *puVar11 = uVar3;
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar7 + 4;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x28);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 4;
  }
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *param_2 = (ulonglong)puVar8;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a2dc3b0;
  puVar7[2] = puVar11;
  *(undefined4 *)(puVar7 + 3) = 1;
  if (iVar1 != 0) {
    iVar9 = 0;
    do {
      lVar4 = *(longlong *)(local_e0 + 0x1c0);
      lVar10 = (longlong)iVar9 * 0x20;
      local_f0 = *(undefined8 *)(lVar2 + 0x270);
      local_f8 = *(longlong *)(lVar4 + 0x10 + lVar10);
      local_e8 = iVar9;
      FUN_144a9b249(param_2,*(undefined4 *)(lVar2 + 0x24),*(undefined8 *)(lVar4 + 8 + lVar10),
                    *(undefined4 *)(lVar4 + 0x18 + lVar10));
      uVar5 = (ulonglong)uStack_c0;
      lVar12 = (longlong)(int)uStack_c0;
      uVar6 = (int)uStack_c0 + 1;
      uStack_c0 = (longlong **)CONCAT44(uStack_c0._4_4_,uVar6);
      if (uStack_c0._4_4_ < uVar6) {
        FUN_141792ef4(&local_c8,uVar5 & 0xffffffff);
      }
      puVar8 = *(undefined8 **)(lVar4 + lVar10 + 0x10);
      local_c8[lVar12 * 7] = -1;
      *(undefined4 *)(local_c8 + lVar12 * 7 + 1) = 0xffffffff;
      local_c8[lVar12 * 7 + 2] = (longlong)puVar8;
      *(undefined1 *)(local_c8 + lVar12 * 7 + 3) = 3;
      *(undefined8 *)((longlong)local_c8 + lVar12 * 0x38 + 0x1c) = 0x1000000400;
      *(undefined4 *)((longlong)local_c8 + lVar12 * 0x38 + 0x24) = 0;
      *(undefined1 *)(local_c8 + lVar12 * 7 + 6) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar1 != iVar9);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x270);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar11 + 1;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x10);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar11 + 1;
  }
  *param_2 = (ulonglong)puVar8;
  *puVar11 = uVar3;
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar7 + 4;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x28);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 4;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a2dc3b8;
  puVar7[2] = puVar11;
  *(undefined4 *)(puVar7 + 3) = 1;
  local_d8 = (undefined8 **)local_c8;
  local_d0 = (int)uStack_c0;
  FUN_144760590(param_2,&local_d8,0);
  FUN_144705e08(local_c8,(ulonglong)uStack_c0 & 0xffffffff);
  if ((undefined8 **)local_c8 != (undefined8 **)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9ddf6 FUN_143a9ddf6 body=57 status=ok
// SIG undefined FUN_143a9ddf6(void)

void FUN_143a9ddf6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_14480a5bc(*(undefined8 *)(lVar1 + 0x10),*(undefined4 *)(lVar1 + 0x18));
  *(undefined4 *)(lVar1 + 0x18) = 0;
  if (*(int *)(lVar1 + 0x1c) != 0) {
    FUN_141833898(lVar1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 143a9de46 FUN_143a9de46 body=29 status=ok
// SIG undefined FUN_143a9de46(void)

undefined8 FUN_143a9de46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9de64 FUN_143a9de64 body=38 status=ok
// SIG undefined FUN_143a9de64(void)

undefined8 FUN_143a9de64(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9de8a FUN_143a9de8a body=1730 status=ok
// SIG undefined FUN_143a9de8a(void)

void FUN_143a9de8a(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined4 uVar6;
  int *piVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar23 = puVar26 + 0x11;
  if ((undefined8 *)param_2[1] < puVar23) {
    FUN_140023dd8(param_2,0x90);
    puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar26 + 0x11;
  }
  *param_2 = (ulonglong)puVar23;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar26;
  param_2[6] = (ulonglong)(puVar26 + 1);
  puVar26[1] = 0;
  *puVar26 = &PTR_FUN_14a1fb978;
  puVar26[3] = 0;
  *(int *)(puVar26 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar26 + 0x24) = 8;
  }
  else {
    puVar25 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar25 = local_b8;
    }
    FUN_1446fe144(puVar26 + 2,local_b0,0);
    puVar23 = (undefined8 *)puVar26[3];
    if ((undefined8 *)puVar26[3] == (undefined8 *)0x0) {
      puVar23 = puVar26 + 2;
    }
    memcpy(puVar23,puVar25,(longlong)local_b0);
  }
  puVar26[0xd] = 0;
  *(int *)(puVar26 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar26 + 0x74) = 8;
  }
  else {
    puVar25 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar25 = local_a8;
    }
    FUN_1446fe1b8(puVar26 + 5,local_60,0);
    puVar23 = (undefined8 *)puVar26[0xd];
    if ((undefined8 *)puVar26[0xd] == (undefined8 *)0x0) {
      puVar23 = puVar26 + 5;
    }
    memcpy(puVar23,puVar25,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar26 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar26 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar26 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar26 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  local_c8 = *(ulonglong *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    uVar17 = 0;
  }
  else {
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar22 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    uVar17 = *(ulonglong *)(*(longlong *)(lVar20 + 0x50) + lVar22 * 8);
    if (uVar17 == 0) {
      uVar17 = FUN_1400bafc2(lVar20,lVar22,1);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x1d0);
  uVar18 = FUN_140029432(param_2,uVar17,0);
  param_2[0x37] = uVar17;
  puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar23 = puVar26 + 3;
  if ((undefined8 *)param_2[1] < puVar23) {
    FUN_140023dd8(param_2,0x20);
    puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar26 + 3;
  }
  *param_2 = (ulonglong)puVar23;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar26;
  param_2[6] = (ulonglong)(puVar26 + 1);
  puVar26[1] = 0;
  *puVar26 = &PTR_LAB_14a37d340;
  puVar26[2] = uVar18;
  plVar19 = (longlong *)FUN_144821ef4(param_2);
  lVar20 = *plVar2;
  sVar5 = *(short *)(lVar20 + 0xe4);
  local_d8 = plVar2;
  if (sVar5 != -1) {
    uVar18 = *(undefined8 *)
              (**(longlong **)(param_1 + 0x1e0) +
              (longlong)
              ((int)((ulonglong)
                     (*(longlong *)(param_1 + 0x1e8) - (*(longlong **)(param_1 + 0x1e0))[5]) >> 3) *
              -0x6eb3e453) * 8);
    lVar22 = *plVar19;
    puVar1 = (ulonglong *)(lVar22 + 0x60);
    lVar20 = (longlong)(int)plVar19[6] + 1;
    puVar23 = *(undefined8 **)(lVar22 + 0x60);
    if ((longlong)(int)plVar19[6] == 0) {
      puVar23 = (undefined8 *)((longlong)puVar23 + 7U & 0xfffffffffffffff8);
      puVar26 = puVar23 + 2;
      puVar21 = puVar23;
      if (*(undefined8 **)(lVar22 + 0x68) < puVar26) {
        FUN_140023dd8(puVar1,0x18);
        puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar26 = puVar23 + 2;
        puVar21 = puVar23;
      }
LAB_143a9e14d:
      *puVar1 = (ulonglong)puVar26;
    }
    else {
      puVar26 = puVar23 + 2;
      if (puVar26 <= *(undefined8 **)(lVar22 + 0x68)) {
        puVar21 = (undefined8 *)plVar19[5];
        goto LAB_143a9e14d;
      }
      puVar21 = (undefined8 *)((longlong)puVar23 + 7U & 0xfffffffffffffff8);
      puVar23 = puVar21 + lVar20 * 2;
      if (*(undefined8 **)(lVar22 + 0x68) < puVar23) {
        local_d0 = lVar20 * 0x10;
        FUN_140023dd8(puVar1,(uint)(lVar20 * 0x10) | 8);
        puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar23 = (undefined8 *)(local_d0 + (longlong)puVar21);
      }
      *puVar1 = (ulonglong)puVar23;
      puVar23 = puVar21;
      if (0 < (int)plVar19[6]) {
        lVar22 = 0;
        lVar24 = 0;
        do {
          puVar3 = (undefined4 *)(plVar19[5] + lVar22);
          uVar6 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          puVar4 = (undefined4 *)((longlong)puVar21 + lVar22);
          *puVar4 = *puVar3;
          puVar4[1] = uVar6;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          lVar24 = lVar24 + 1;
          lVar22 = lVar22 + 0x10;
        } while (lVar24 < (int)plVar19[6]);
        puVar23 = (undefined8 *)(lVar22 + (longlong)puVar21);
      }
    }
    *puVar23 = uVar18;
    *(short *)(puVar23 + 1) = sVar5;
    *(undefined1 *)((longlong)puVar23 + 10) = 4;
    plVar19[5] = (longlong)puVar21;
    *(int *)(plVar19 + 6) = (int)lVar20;
    lVar20 = *local_d8;
  }
  sVar5 = *(short *)(lVar20 + 0xe6);
  if (sVar5 == -1) goto LAB_143a9e205;
  plVar2 = *(longlong **)(param_1 + 0x1e0);
  uVar18 = *(undefined8 *)
            (*plVar2 +
            (longlong)
            ((int)((ulonglong)(*(longlong *)(param_1 + 0x1e8) - plVar2[5]) >> 3) * -0x6eb3e453 +
            (int)plVar2[9]) * 8);
  lVar22 = *plVar19;
  puVar1 = (ulonglong *)(lVar22 + 0x60);
  lVar20 = (longlong)(int)plVar19[6] + 1;
  puVar23 = *(undefined8 **)(lVar22 + 0x60);
  if ((longlong)(int)plVar19[6] == 0) {
    puVar23 = (undefined8 *)((longlong)puVar23 + 7U & 0xfffffffffffffff8);
    puVar26 = puVar23 + 2;
    puVar21 = puVar23;
    if (*(undefined8 **)(lVar22 + 0x68) < puVar26) {
      FUN_140023dd8(puVar1,0x18);
      puVar23 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar26 = puVar23 + 2;
      puVar21 = puVar23;
    }
LAB_143a9e1ee:
    *puVar1 = (ulonglong)puVar26;
  }
  else {
    puVar26 = puVar23 + 2;
    if (puVar26 <= *(undefined8 **)(lVar22 + 0x68)) {
      puVar21 = (undefined8 *)plVar19[5];
      goto LAB_143a9e1ee;
    }
    puVar21 = (undefined8 *)((longlong)puVar23 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar21 + lVar20 * 2;
    if (*(undefined8 **)(lVar22 + 0x68) < puVar23) {
      local_d0 = lVar20 * 0x10;
      FUN_140023dd8(puVar1,(uint)(lVar20 * 0x10) | 8);
      puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar23 = (undefined8 *)(local_d0 + (longlong)puVar21);
    }
    *puVar1 = (ulonglong)puVar23;
    puVar23 = puVar21;
    if (0 < (int)plVar19[6]) {
      lVar22 = 0;
      lVar24 = 0;
      do {
        puVar3 = (undefined4 *)(plVar19[5] + lVar22);
        uVar6 = puVar3[1];
        uVar9 = puVar3[2];
        uVar10 = puVar3[3];
        puVar4 = (undefined4 *)((longlong)puVar21 + lVar22);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar9;
        puVar4[3] = uVar10;
        lVar24 = lVar24 + 1;
        lVar22 = lVar22 + 0x10;
      } while (lVar24 < (int)plVar19[6]);
      puVar23 = (undefined8 *)(lVar22 + (longlong)puVar21);
    }
  }
  *puVar23 = uVar18;
  *(short *)(puVar23 + 1) = sVar5;
  *(undefined1 *)((longlong)puVar23 + 10) = 4;
  plVar19[5] = (longlong)puVar21;
  *(int *)(plVar19 + 6) = (int)lVar20;
LAB_143a9e205:
  piVar7 = *(int **)(local_c8 + 0x30);
  *piVar7 = *piVar7 + 1;
  if ((byte)((*(byte *)(*(longlong *)(param_1 + 0x1d0) + 0xd0) & 0xe) - 6) < 4) {
    FUN_143236b9c(plVar19,*(longlong *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1c0),
                  *(undefined8 *)(param_1 + 0x1c8));
  }
  else {
    FUN_1446fe2ba();
  }
  iVar15 = (int)plVar19[6] + (int)plVar19[4];
  iVar16 = iVar15 + (int)plVar19[8];
  if (iVar16 != 0 && SCARRY4(iVar15,(int)plVar19[8]) == iVar16 < 0) {
    puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar26 + 0xb;
    local_c8 = uVar17;
    if ((undefined8 *)param_2[1] < puVar23) {
      FUN_140023dd8(param_2,0x60);
      puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar23 = puVar26 + 0xb;
    }
    *param_2 = (ulonglong)puVar23;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar26;
    param_2[6] = (ulonglong)(puVar26 + 1);
    lVar20 = plVar19[7];
    lVar11 = plVar19[8];
    lVar22 = plVar19[5];
    lVar12 = plVar19[6];
    lVar24 = plVar19[3];
    lVar13 = plVar19[4];
    lVar8 = plVar19[1];
    lVar14 = plVar19[2];
    puVar26[1] = 0;
    *puVar26 = &PTR_FUN_14a1e7fa8;
    puVar26[2] = local_c8;
    puVar26[3] = lVar8;
    *(int *)(puVar26 + 4) = (int)lVar14;
    puVar26[5] = lVar24;
    *(int *)(puVar26 + 6) = (int)lVar13;
    puVar26[7] = lVar22;
    *(int *)(puVar26 + 8) = (int)lVar12;
    puVar26[9] = lVar20;
    *(int *)(puVar26 + 10) = (int)lVar11;
    plVar19[1] = 0;
    *(undefined4 *)(plVar19 + 2) = 0;
    plVar19[3] = 0;
    *(undefined4 *)(plVar19 + 4) = 0;
    plVar19[5] = 0;
    *(undefined4 *)(plVar19 + 6) = 0;
    plVar19[7] = 0;
    *(undefined4 *)(plVar19 + 8) = 0;
    uVar17 = local_c8;
  }
  uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 0x28);
  uVar18 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x20) + 0x10);
  puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar23 = puVar26 + 4;
  if ((undefined8 *)param_2[1] < puVar23) {
    FUN_140023dd8(param_2,0x28);
    puVar26 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar26 + 4;
  }
  *param_2 = (ulonglong)puVar23;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar26;
  param_2[6] = (ulonglong)(puVar26 + 1);
  puVar26[1] = 0;
  *puVar26 = &PTR_LAB_14a1e7fd0;
  puVar26[2] = uVar18;
  *(undefined4 *)(puVar26 + 3) = uVar6;
  FUN_144aef493(param_2,local_d8,uVar17);
  *piVar7 = *piVar7 + -1;
  if (*piVar7 == 0) {
    FUN_1449e245a(piVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a9e54e FUN_143a9e54e body=38 status=ok
// SIG undefined FUN_143a9e54e(void)

undefined8 FUN_143a9e54e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9e574 FUN_143a9e574 body=1706 status=ok
// SIG undefined FUN_143a9e574(void)

void FUN_143a9e574(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar21 = puVar24 + 0x11;
  if ((undefined8 *)param_2[1] < puVar21) {
    FUN_140023dd8(param_2,0x90);
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar24 + 0x11;
  }
  *param_2 = (ulonglong)puVar21;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar24;
  param_2[6] = (ulonglong)(puVar24 + 1);
  puVar24[1] = 0;
  *puVar24 = &PTR_FUN_14a1fb978;
  puVar24[3] = 0;
  *(int *)(puVar24 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar24 + 0x24) = 8;
  }
  else {
    puVar23 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar23 = local_b8;
    }
    FUN_1446fe144(puVar24 + 2,local_b0,0);
    puVar21 = (undefined8 *)puVar24[3];
    if ((undefined8 *)puVar24[3] == (undefined8 *)0x0) {
      puVar21 = puVar24 + 2;
    }
    memcpy(puVar21,puVar23,(longlong)local_b0);
  }
  puVar24[0xd] = 0;
  *(int *)(puVar24 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar24 + 0x74) = 8;
  }
  else {
    puVar23 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar23 = local_a8;
    }
    FUN_1446fe1b8(puVar24 + 5,local_60,0);
    puVar21 = (undefined8 *)puVar24[0xd];
    if ((undefined8 *)puVar24[0xd] == (undefined8 *)0x0) {
      puVar21 = puVar24 + 5;
    }
    memcpy(puVar21,puVar23,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar24 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar24 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar24 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar24 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    uVar15 = 0;
  }
  else {
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 8);
    lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xd4);
    uVar15 = *(ulonglong *)(*(longlong *)(lVar20 + 0x50) + lVar19 * 8);
    if (uVar15 == 0) {
      uVar15 = FUN_1400bafc2(lVar20,lVar19,1);
    }
  }
  plVar25 = (longlong *)(param_1 + 0x1d0);
  uVar16 = FUN_140029432(param_2,uVar15,0);
  param_2[0x37] = uVar15;
  puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar21 = puVar24 + 3;
  if ((undefined8 *)param_2[1] < puVar21) {
    FUN_140023dd8(param_2,0x20);
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar24 + 3;
  }
  *param_2 = (ulonglong)puVar21;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar24;
  param_2[6] = (ulonglong)(puVar24 + 1);
  puVar24[1] = 0;
  *puVar24 = &PTR_LAB_14a37d340;
  puVar24[2] = uVar16;
  plVar17 = (longlong *)FUN_144821ef4(param_2);
  lVar20 = *plVar25;
  sVar4 = *(short *)(lVar20 + 0xe4);
  local_d0 = plVar25;
  if (sVar4 != -1) {
    uVar16 = *(undefined8 *)
              (**(longlong **)(param_1 + 0x1f0) +
              (longlong)
              ((int)((ulonglong)
                     (*(longlong *)(param_1 + 0x1f8) - (*(longlong **)(param_1 + 0x1f0))[5]) >> 3) *
              -0x6eb3e453) * 8);
    lVar19 = *plVar17;
    puVar1 = (ulonglong *)(lVar19 + 0x60);
    lVar20 = (longlong)(int)plVar17[6] + 1;
    puVar21 = *(undefined8 **)(lVar19 + 0x60);
    if ((longlong)(int)plVar17[6] == 0) {
      puVar21 = (undefined8 *)((longlong)puVar21 + 7U & 0xfffffffffffffff8);
      puVar24 = puVar21 + 2;
      puVar18 = puVar21;
      if (*(undefined8 **)(lVar19 + 0x68) < puVar24) {
        FUN_140023dd8(puVar1,0x18);
        puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar24 = puVar21 + 2;
        puVar18 = puVar21;
      }
LAB_143a9e82c:
      *puVar1 = (ulonglong)puVar24;
    }
    else {
      puVar24 = puVar21 + 2;
      if (puVar24 <= *(undefined8 **)(lVar19 + 0x68)) {
        puVar18 = (undefined8 *)plVar17[5];
        goto LAB_143a9e82c;
      }
      puVar18 = (undefined8 *)((longlong)puVar21 + 7U & 0xfffffffffffffff8);
      puVar21 = puVar18 + lVar20 * 2;
      if (*(undefined8 **)(lVar19 + 0x68) < puVar21) {
        local_c8 = lVar20 * 0x10;
        FUN_140023dd8(puVar1,(uint)(lVar20 * 0x10) | 8);
        puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar21 = (undefined8 *)(local_c8 + (longlong)puVar18);
      }
      *puVar1 = (ulonglong)puVar21;
      puVar21 = puVar18;
      if (0 < (int)plVar17[6]) {
        lVar19 = 0;
        lVar22 = 0;
        do {
          puVar2 = (undefined4 *)(plVar17[5] + lVar19);
          uVar5 = puVar2[1];
          uVar6 = puVar2[2];
          uVar7 = puVar2[3];
          puVar3 = (undefined4 *)((longlong)puVar18 + lVar19);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar3[2] = uVar6;
          puVar3[3] = uVar7;
          lVar22 = lVar22 + 1;
          lVar19 = lVar19 + 0x10;
        } while (lVar22 < (int)plVar17[6]);
        puVar21 = (undefined8 *)(lVar19 + (longlong)puVar18);
      }
    }
    *puVar21 = uVar16;
    *(short *)(puVar21 + 1) = sVar4;
    *(undefined1 *)((longlong)puVar21 + 10) = 4;
    plVar17[5] = (longlong)puVar18;
    *(int *)(plVar17 + 6) = (int)lVar20;
    lVar20 = *local_d0;
  }
  sVar4 = *(short *)(lVar20 + 0xe6);
  if (sVar4 == -1) goto LAB_143a9e8ee;
  plVar25 = *(longlong **)(param_1 + 0x1f0);
  uVar16 = *(undefined8 *)
            (*plVar25 +
            (longlong)
            ((int)((ulonglong)(*(longlong *)(param_1 + 0x1f8) - plVar25[5]) >> 3) * -0x6eb3e453 +
            (int)plVar25[9]) * 8);
  lVar19 = *plVar17;
  puVar1 = (ulonglong *)(lVar19 + 0x60);
  lVar20 = (longlong)(int)plVar17[6] + 1;
  puVar21 = *(undefined8 **)(lVar19 + 0x60);
  if ((longlong)(int)plVar17[6] == 0) {
    puVar21 = (undefined8 *)((longlong)puVar21 + 7U & 0xfffffffffffffff8);
    puVar24 = puVar21 + 2;
    puVar18 = puVar21;
    if (*(undefined8 **)(lVar19 + 0x68) < puVar24) {
      FUN_140023dd8(puVar1,0x18);
      puVar21 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar24 = puVar21 + 2;
      puVar18 = puVar21;
    }
LAB_143a9e8ce:
    *puVar1 = (ulonglong)puVar24;
  }
  else {
    puVar24 = puVar21 + 2;
    if (puVar24 <= *(undefined8 **)(lVar19 + 0x68)) {
      puVar18 = (undefined8 *)plVar17[5];
      goto LAB_143a9e8ce;
    }
    puVar18 = (undefined8 *)((longlong)puVar21 + 7U & 0xfffffffffffffff8);
    puVar21 = puVar18 + lVar20 * 2;
    if (*(undefined8 **)(lVar19 + 0x68) < puVar21) {
      local_c8 = lVar20 * 0x10;
      FUN_140023dd8(puVar1,(uint)(lVar20 * 0x10) | 8);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar21 = (undefined8 *)(local_c8 + (longlong)puVar18);
    }
    *puVar1 = (ulonglong)puVar21;
    puVar21 = puVar18;
    if (0 < (int)plVar17[6]) {
      lVar19 = 0;
      lVar22 = 0;
      do {
        puVar2 = (undefined4 *)(plVar17[5] + lVar19);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar3 = (undefined4 *)((longlong)puVar18 + lVar19);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar6;
        puVar3[3] = uVar7;
        lVar22 = lVar22 + 1;
        lVar19 = lVar19 + 0x10;
      } while (lVar22 < (int)plVar17[6]);
      puVar21 = (undefined8 *)(lVar19 + (longlong)puVar18);
    }
  }
  *puVar21 = uVar16;
  *(short *)(puVar21 + 1) = sVar4;
  *(undefined1 *)((longlong)puVar21 + 10) = 4;
  plVar17[5] = (longlong)puVar18;
  *(int *)(plVar17 + 6) = (int)lVar20;
  lVar20 = *local_d0;
LAB_143a9e8ee:
  plVar25 = local_d0;
  if ((byte)((*(byte *)(lVar20 + 0xd0) & 0xe) - 6) < 4) {
    FUN_143236b9c(plVar17,lVar20,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1c8));
  }
  else {
    FUN_1446fe2ba();
  }
  iVar13 = (int)plVar17[6] + (int)plVar17[4];
  iVar14 = iVar13 + (int)plVar17[8];
  if (iVar14 != 0 && SCARRY4(iVar13,(int)plVar17[8]) == iVar14 < 0) {
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar24 + 0xb;
    if ((undefined8 *)param_2[1] < puVar21) {
      FUN_140023dd8(param_2,0x60);
      puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar24 + 0xb;
    }
    *param_2 = (ulonglong)puVar21;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar24;
    param_2[6] = (ulonglong)(puVar24 + 1);
    lVar20 = plVar17[7];
    lVar9 = plVar17[8];
    lVar19 = plVar17[5];
    lVar10 = plVar17[6];
    lVar22 = plVar17[3];
    lVar11 = plVar17[4];
    lVar8 = plVar17[1];
    lVar12 = plVar17[2];
    puVar24[1] = 0;
    *puVar24 = &PTR_FUN_14a1e7fa8;
    puVar24[2] = uVar15;
    puVar24[3] = lVar8;
    *(int *)(puVar24 + 4) = (int)lVar12;
    puVar24[5] = lVar22;
    *(int *)(puVar24 + 6) = (int)lVar11;
    puVar24[7] = lVar19;
    *(int *)(puVar24 + 8) = (int)lVar10;
    puVar24[9] = lVar20;
    *(int *)(puVar24 + 10) = (int)lVar9;
    plVar17[1] = 0;
    *(undefined4 *)(plVar17 + 2) = 0;
    plVar17[3] = 0;
    *(undefined4 *)(plVar17 + 4) = 0;
    plVar17[5] = 0;
    *(undefined4 *)(plVar17 + 6) = 0;
    plVar17[7] = 0;
    *(undefined4 *)(plVar17 + 8) = 0;
    plVar25 = local_d0;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x1e8);
  uVar6 = *(undefined4 *)(param_1 + 0x1e0);
  uVar7 = *(undefined4 *)(param_1 + 0x1e4);
  puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar21 = puVar24 + 4;
  if ((undefined8 *)param_2[1] < puVar21) {
    FUN_140023dd8(param_2,0x28);
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar21 = puVar24 + 4;
  }
  *param_2 = (ulonglong)puVar21;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar24;
  param_2[6] = (ulonglong)(puVar24 + 1);
  puVar24[1] = 0;
  *puVar24 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar24 + 2) = uVar6;
  *(undefined4 *)((longlong)puVar24 + 0x14) = uVar7;
  *(undefined4 *)(puVar24 + 3) = uVar5;
  FUN_144aef493(param_2,plVar25,uVar15);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143a9ec20 FUN_143a9ec20 body=38 status=ok
// SIG undefined FUN_143a9ec20(void)

undefined8 FUN_143a9ec20(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9ec46 FUN_143a9ec46 body=511 status=ok
// SIG undefined FUN_143a9ec46(void)

void FUN_143a9ec46(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *_Src;
  undefined1 *_Src_00;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    _Src = &local_b8;
    if ((undefined4 *)CONCAT44(uStack_ac,uStack_b0) != (undefined4 *)0x0) {
      _Src = (undefined4 *)CONCAT44(uStack_ac,uStack_b0);
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 2;
    }
    memcpy(puVar2,_Src,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    _Src_00 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar3 + 5;
    }
    memcpy(puVar2,_Src_00,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (CONCAT44(uStack_ac,uStack_b0) != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x248);
  local_c0 = *(longlong *)(**(longlong **)(param_1 + 0x1d0) + 0x10);
  if (local_c0 != 0) {
    LOCK();
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    UNLOCK();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1c0);
  uStack_b4 = *(undefined4 *)(param_1 + 0x1c4);
  uStack_b0 = *(undefined4 *)(param_1 + 0x1c8);
  uStack_ac = *(undefined4 *)(param_1 + 0x1cc);
  local_c8 = &local_c0;
  FUN_140755c04(uVar1,param_2);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9ee52 FUN_143a9ee52 body=38 status=ok
// SIG undefined FUN_143a9ee52(void)

undefined8 FUN_143a9ee52(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9ee78 FUN_143a9ee78 body=651 status=ok
// SIG undefined FUN_143a9ee78(void)

void FUN_143a9ee78(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *_Dst;
  undefined1 *_Src;
  undefined8 *puVar6;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_b8);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar6 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar6 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  *(int *)(puVar6 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    puVar4 = &local_b8;
    if (local_b0 != (undefined8 *)0x0) {
      puVar4 = local_b0;
    }
    FUN_1446fe144(puVar6 + 2,local_a8,0);
    _Dst = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      _Dst = puVar6 + 2;
    }
    memcpy(_Dst,puVar4,(longlong)local_a8);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    _Src = local_60;
    if (local_60 == (undefined1 *)0x0) {
      _Src = local_a0;
    }
    FUN_1446fe1b8(puVar6 + 5,local_58,0);
    puVar4 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar6 + 5;
    }
    memcpy(puVar4,_Src,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar6 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    lVar2 = plVar1[0x49];
    local_c0 = *(longlong *)(**(longlong **)(param_1 + 0x1c8) + 0x10);
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    FUN_14393714a(lVar2,param_2,plVar1,&local_c0);
  }
  (**(code **)(*plVar1 + 0x108))(plVar1,param_2,0);
  if (((*(char *)(param_1 + 0x1c0) == '\x01') && (iVar3 = (int)plVar1[8], 0 < iVar3)) &&
     (iVar3 != (int)plVar1[0x18])) {
    plVar5 = (longlong *)plVar1[0x19];
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_14001cc68(0x58,0x10);
      FUN_1446f470e(&local_b8,L"Niagara GPU Instance Count Readback",1);
      FUN_1402593fa(plVar5,local_b8);
      plVar1[0x19] = (longlong)plVar5;
      iVar3 = (int)plVar1[8];
    }
    *(int *)(plVar1 + 0x1a) = iVar3;
    (**(code **)(*plVar5 + 0x10))(plVar5,param_2,plVar1[0xb],0);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143a9f104 FUN_143a9f104 body=146 status=ok
// SIG undefined FUN_143a9f104(void)

void FUN_143a9f104(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((char)param_1[2] == '\x01') {
    lVar3 = *param_1;
    FUN_14480a1ec(lVar3);
    if (0 < *(int *)(lVar3 + 0x300)) {
      plVar1 = (longlong *)(lVar3 + 0x2f8);
      uVar6 = 0;
      do {
        iVar5 = (int)uVar6;
        puVar2 = (undefined8 *)(*plVar1 + uVar6 * 0x10);
        lVar4 = *(longlong *)(*plVar1 + 8 + uVar6 * 0x10);
        if ((lVar4 == 0) || (*(int *)(lVar4 + 8) != 1)) {
          FUN_14811436a(*puVar2,lVar3,param_1[1]);
        }
        else {
          FUN_14811423e(*puVar2,lVar3);
          FUN_1481cc464(plVar1,uVar6);
          FUN_1481cc426(plVar1);
          iVar5 = iVar5 + -1;
        }
        uVar6 = (ulonglong)(iVar5 + 1U);
      } while ((int)(iVar5 + 1U) < *(int *)(lVar3 + 0x300));
    }
  }
  return;
}



// FUNCTION 143a9f1ac FUN_143a9f1ac body=29 status=ok
// SIG undefined FUN_143a9f1ac(void)

undefined8 FUN_143a9f1ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9f1d5 FUN_143a9f1d5 body=232 status=ok
// SIG undefined FUN_143a9f1d5(void)

void FUN_143a9f1d5(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 143a9f2bd FUN_143a9f2bd body=81 status=ok
// SIG undefined FUN_143a9f2bd(void)

void FUN_143a9f2bd(undefined8 param_1,longlong *param_2)

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
  FUN_1481cce06(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143a9f30e FUN_143a9f30e body=232 status=ok
// SIG undefined FUN_143a9f30e(void)

void FUN_143a9f30e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 143a9f3f6 FUN_143a9f3f6 body=81 status=ok
// SIG undefined FUN_143a9f3f6(void)

void FUN_143a9f3f6(undefined8 param_1,longlong *param_2)

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
  FUN_1481cd068(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143a9f448 FUN_143a9f448 body=300 status=ok
// SIG undefined FUN_143a9f448(void)

undefined8 * FUN_143a9f448(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14adff870;
  lVar4 = param_1[0x3a];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = param_1[0x38];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143a9f574 FUN_143a9f574 body=595 status=ok
// SIG undefined FUN_143a9f574(void)

void FUN_143a9f574(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined1 *local_b8;
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
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a1fb978;
  puVar7[3] = 0;
  *(int *)(puVar7 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x24) = 8;
  }
  else {
    puVar6 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar6 = local_b8;
    }
    FUN_1446fe144(puVar7 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar7[3];
    if ((undefined8 *)puVar7[3] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 2;
    }
    memcpy(puVar5,puVar6,(longlong)local_b0);
  }
  puVar7[0xd] = 0;
  *(int *)(puVar7 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x74) = 8;
  }
  else {
    puVar6 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar6 = local_a8;
    }
    FUN_1446fe1b8(puVar7 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar7[0xd];
    if ((undefined8 *)puVar7[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar7 + 5;
    }
    memcpy(puVar5,puVar6,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar7 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar7 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1cc);
  uVar2 = *(undefined4 *)(param_1 + 0x1c8);
  uVar3 = *(undefined8 *)(param_1 + 0x1c0);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 5;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x30);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 5;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14a338558;
  puVar7[2] = uVar4;
  puVar7[3] = uVar3;
  *(undefined4 *)(puVar7 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x24) = uVar1;
  (**(code **)(*DAT_14ca83900 + 0xc0))(DAT_14ca83900,param_2,*(undefined8 *)(param_1 + 0x1d0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


