// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144415a26 FUN_144415a26 body=282 status=ok
// SIG undefined FUN_144415a26(void)

undefined8 * FUN_144415a26(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144411f32);
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



// FUNCTION 144415b40 FUN_144415b40 body=92 status=ok
// SIG undefined FUN_144415b40(void)

void FUN_144415b40(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_144415792(param_1 + 0x15);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144415b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144415b9c FUN_144415b9c body=370 status=ok
// SIG undefined FUN_144415b9c(void)

void FUN_144415b9c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 0x1010104;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0x7f7fffff;
  local_2c = 8;
  local_24 = 0;
  (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_48);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_48) {
    lVar4 = *plVar7;
    *plVar7 = local_48;
    local_48 = 0;
    if (lVar4 == 0) goto LAB_144415cbf;
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
  lVar4 = local_48;
  if (local_48 != 0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_48 + 0xd);
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
LAB_144415cbf:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144415d10 FUN_144415d10 body=555 status=ok
// SIG undefined FUN_144415d10(void)

void FUN_144415d10(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar7 = DAT_14cbf7c40;
  if (DAT_14cbf7c40 != 0) {
    LOCK();
    *(int *)(DAT_14cbf7c40 + 8) = *(int *)(DAT_14cbf7c40 + 8) + 1;
    UNLOCK();
  }
  iVar4 = (int)param_1[2];
  FUN_14907a914(*param_1 + 0x100,iVar4);
  FUN_14907a9cc(*param_1 + 0xf0,iVar4);
  *(int *)(*param_1 + 0x110) = (int)param_1[3];
  if (iVar4 != 0) {
    iVar11 = 0;
    do {
      lVar12 = (longlong)iVar11;
      lVar5 = *(longlong *)(param_1[1] + lVar12 * 8);
      if (lVar5 != 0) {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x128) + 0x10);
        lVar6 = *(longlong *)(*(longlong *)(*param_1 + 0x100) + lVar12 * 8);
        if (lVar6 != lVar5) {
          *(longlong *)(*(longlong *)(*param_1 + 0x100) + lVar12 * 8) = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          if (lVar6 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar6 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar6 + 8);
              LOCK();
              uVar2 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar2 >> 0x1e & 1) == 0) {
                bVar3 = *(byte *)(lVar6 + 0xd);
                plVar8 = (longlong *)FUN_14001cc68(0x10,8);
                plVar8[1] = lVar6;
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c8;
                if ((bVar3 & 2) == 0) {
                  do {
                    *plVar8 = (longlong)plVar10;
                    LOCK();
                    bVar13 = plVar10 != DAT_14ca843c0;
                    plVar9 = plVar8;
                    if (bVar13) {
                      plVar10 = DAT_14ca843c0;
                      plVar9 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar9;
                    UNLOCK();
                  } while (bVar13);
                }
                else {
                  do {
                    *plVar8 = (longlong)plVar9;
                    LOCK();
                    bVar13 = plVar9 != DAT_14ca843c8;
                    plVar10 = plVar8;
                    if (bVar13) {
                      plVar9 = DAT_14ca843c8;
                      plVar10 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar10;
                    UNLOCK();
                  } while (bVar13);
                }
              }
            }
          }
        }
      }
      lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0xf0) + lVar12 * 8);
      if (lVar5 != lVar7) {
        *(longlong *)(*(longlong *)(*param_1 + 0xf0) + lVar12 * 8) = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar5 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            puVar1 = (uint *)(lVar5 + 8);
            LOCK();
            uVar2 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar2 >> 0x1e & 1) == 0) {
              bVar3 = *(byte *)(lVar5 + 0xd);
              plVar8 = (longlong *)FUN_14001cc68(0x10,8);
              plVar8[1] = lVar5;
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c8;
              if ((bVar3 & 2) == 0) {
                do {
                  *plVar8 = (longlong)plVar10;
                  LOCK();
                  bVar13 = plVar10 != DAT_14ca843c0;
                  plVar9 = plVar8;
                  if (bVar13) {
                    plVar10 = DAT_14ca843c0;
                    plVar9 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar9;
                  UNLOCK();
                } while (bVar13);
              }
              else {
                do {
                  *plVar8 = (longlong)plVar9;
                  LOCK();
                  bVar13 = plVar9 != DAT_14ca843c8;
                  plVar10 = plVar8;
                  if (bVar13) {
                    plVar9 = DAT_14ca843c8;
                    plVar10 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar10;
                  UNLOCK();
                } while (bVar13);
              }
            }
          }
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar4);
  }
  if (lVar7 != 0) {
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
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar7;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar13 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  return;
}



// FUNCTION 144415f4c FUN_144415f4c body=29 status=ok
// SIG undefined FUN_144415f4c(void)

void FUN_144415f4c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144415f6a FUN_144415f6a body=57 status=ok
// SIG undefined FUN_144415f6a(void)

undefined8 * FUN_144415f6a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba9b2a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144415fa4 FUN_144415fa4 body=282 status=ok
// SIG undefined FUN_144415fa4(void)

undefined8 * FUN_144415fa4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144411f32);
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



// FUNCTION 1444160be FUN_1444160be body=92 status=ok
// SIG undefined FUN_1444160be(void)

void FUN_1444160be(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_144415d10(param_1 + 0x15);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144416110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14441611a FUN_14441611a body=51 status=ok
// SIG undefined FUN_14441611a(void)

void FUN_14441611a(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014441614a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 144416158 FUN_144416158 body=29 status=ok
// SIG undefined FUN_144416158(void)

void FUN_144416158(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144416176 FUN_144416176 body=71 status=ok
// SIG undefined FUN_144416176(void)

undefined8 * FUN_144416176(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b320;
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



// FUNCTION 1444161be FUN_1444161be body=282 status=ok
// SIG undefined FUN_1444161be(void)

undefined8 * FUN_1444161be(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144411f32);
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



// FUNCTION 1444162d8 FUN_1444162d8 body=148 status=ok
// SIG undefined FUN_1444162d8(void)

void FUN_1444162d8(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144416360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14441636c FUN_14441636c body=167 status=ok
// SIG undefined FUN_14441636c(void)

void FUN_14441636c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    FUN_14909120c();
    plVar3 = (longlong *)*param_1;
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar3);
    }
  }
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    if (((char)param_1[2] == '\x01') && (lVar2 = plVar3[1], (longlong)(int)lVar2 != 0)) {
      lVar1 = *plVar3;
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(lVar1 + lVar4) + 0x58))();
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar4);
      plVar3 = (longlong *)param_1[1];
    }
    FUN_14909120c(plVar3);
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14441641e FUN_14441641e body=12 status=ok
// SIG undefined FUN_14441641e(void)

void FUN_14441641e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144416427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14441642a FUN_14441642a body=29 status=ok
// SIG undefined FUN_14441642a(void)

undefined8 FUN_14441642a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144416448 FUN_144416448 body=51 status=ok
// SIG undefined FUN_144416448(void)

void FUN_144416448(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000144416478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 144416486 FUN_144416486 body=29 status=ok
// SIG undefined FUN_144416486(void)

void FUN_144416486(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1444164a4 FUN_1444164a4 body=71 status=ok
// SIG undefined FUN_1444164a4(void)

undefined8 * FUN_1444164a4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b370;
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



// FUNCTION 1444164ec FUN_1444164ec body=282 status=ok
// SIG undefined FUN_1444164ec(void)

undefined8 * FUN_1444164ec(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144411f32);
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



// FUNCTION 144416606 FUN_144416606 body=148 status=ok
// SIG undefined FUN_144416606(void)

void FUN_144416606(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014441668e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14441669a FUN_14441669a body=61 status=ok
// SIG undefined FUN_14441669a(void)

void FUN_14441669a(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_14909120c();
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1444166e2 FUN_1444166e2 body=12 status=ok
// SIG undefined FUN_1444166e2(void)

void FUN_1444166e2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001444166eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1444166ee FUN_1444166ee body=29 status=ok
// SIG undefined FUN_1444166ee(void)

undefined8 FUN_1444166ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14441670c FUN_14441670c body=51 status=ok
// SIG undefined FUN_14441670c(void)

void FUN_14441670c(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014441673c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14441674a FUN_14441674a body=29 status=ok
// SIG undefined FUN_14441674a(void)

void FUN_14441674a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144416768 FUN_144416768 body=71 status=ok
// SIG undefined FUN_144416768(void)

undefined8 * FUN_144416768(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b3c0;
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



// FUNCTION 1444167b0 FUN_1444167b0 body=282 status=ok
// SIG undefined FUN_1444167b0(void)

undefined8 * FUN_1444167b0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144411f32);
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



// FUNCTION 1444168ca FUN_1444168ca body=148 status=ok
// SIG undefined FUN_1444168ca(void)

void FUN_1444168ca(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144416952. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14441695e FUN_14441695e body=110 status=ok
// SIG undefined FUN_14441695e(void)

void FUN_14441695e(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 0) {
    FUN_14909120c();
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
  }
  if (param_1[1] != 0) {
    FUN_14909120c();
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1444169d6 FUN_1444169d6 body=12 status=ok
// SIG undefined FUN_1444169d6(void)

void FUN_1444169d6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001444169df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1444169e2 FUN_1444169e2 body=29 status=ok
// SIG undefined FUN_1444169e2(void)

undefined8 FUN_1444169e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444169ff FUN_1444169ff body=2048 status=ok
// SIG undefined FUN_1444169ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444169ff(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined4 local_54;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14ba8c0c0;
  local_78 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba8c110,2,&PTR_FUN_14ba8c0e0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/HairStrandsCore",0,0,&PTR_FUN_14ba8c9f0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cbf74d0);
  if (cVar2 == '\0') {
    _DAT_14cbf74d0 = 0;
    uRam000000014cbf74d8 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uStack_68 = 0;
  local_78 = (undefined8 **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba8d160,1,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14ba8fce0;
  local_78 = (undefined8 **)0x4;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba8fda0,1,&PTR_FUN_14ba8fd00);
  local_78 = (undefined8 **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf7648,L"r.HairStrands.LoadAsset",&DAT_14c7649c0,
                L"Allow groom asset to be loaded");
  atexit(FUN_14440f16f);
  local_78 = (undefined8 **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf7658,L"r.HairStrands.AsyncLoad",&DAT_14cbf7668,
                L"Allow groom asset to be loaded asynchronously in the editor");
  atexit(FUN_14440f1b4);
  local_78 = (undefined8 **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf7670,L"r.HairStrands.UpdateGroupNames",&DAT_14cbf7680,
                L"Update groom asset groups\' names if not already serialized");
  atexit(FUN_14440f1f9);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_149e17030;
  local_50[3] = &LAB_14440f23e;
  local_54 = 0xffffffff;
  local_78 = (undefined8 **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14cbf7688,L"r.HairStrands.Log",&local_54,
                L"Enable warning log report for groom related asset (0: no logging, 1: error only, 2: error & warning only, other: all logs). By default all logging are enabled (-1). Value needs to be set at startup time."
               );
  (**(code **)(*DAT_14cbf7690 + 200))(DAT_14cbf7690,&local_50);
  if (local_48 == 0) {
LAB_144416c94:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_144416c94;
  }
  atexit(FUN_14440f248);
  local_78 = (undefined8 **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf76a0,L"r.HairStrands.DDCLog",&DAT_14cbf76b0,
                L"Enable DDC logging for groom assets and groom binding assets");
  atexit(FUN_14440f28d);
  local_78._0_4_ = 4;
  FUN_141471170(&DAT_14cbf76b8,L"r.HairStrands.CompressedPosition",&DAT_14cbf76c8,
                L"Optional compessed position");
  atexit(FUN_14440f2d2);
  local_78 = (undefined8 **)((ulonglong)local_78._4_4_ << 0x20);
  FUN_141471170(&DAT_14cbf76d0,L"r.HairStrands.MaxSimulatedLOD",&DAT_14c7649c4,
                L"Maximum hair LOD to be simulated");
  atexit(FUN_14440f317);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_149e17030;
  local_50[3] = FUN_14440f35c;
  ppuStack_70 = (undefined **)((ulonglong)ppuStack_70 & 0xffffffff00000000);
  local_78 = &local_50;
  FUN_141703554(&DAT_14cbf76e8,L"r.HairStrands.Dump.GroomAsset",&DAT_14cbf76e0,
                L"Dump information of all the loaded groom assets.");
  if (local_48 == 0) {
LAB_144416e0c:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_144416e0c;
  }
  atexit(FUN_14440f46c);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_149e17030;
  local_50[3] = FUN_14440f4b1;
  ppuStack_70 = (undefined **)((ulonglong)ppuStack_70 & 0xffffffff00000000);
  local_78 = &local_50;
  FUN_141703554(&DAT_14cbf7700,L"r.HairStrands.Dump.GroomBindingAsset",&DAT_14cbf76f8,
                L"Dump information of all the loaded groom binding assets.");
  if (local_48 == 0) {
LAB_144416eef:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_144416eef;
  }
  atexit(FUN_14440f5bc);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_149e17030;
  local_50[3] = FUN_14906f6bc;
  ppuStack_70 = (undefined **)((ulonglong)ppuStack_70 & 0xffffffff00000000);
  local_78 = &local_50;
  FUN_141703554(&DAT_14cbf7718,L"r.HairStrands.Dump",&DAT_14cbf7710,
                L"Dump all the loaded groom assets, groom binding assets, and instanciated groom components."
               );
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_144416fe0;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144416fe0:
  atexit(FUN_14440f601);
  uStack_68 = 3;
  ppuStack_70 = &PTR_FUN_14ba91510;
  local_78 = (undefined8 **)0x3;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba915f0,1,&PTR_FUN_14ba91570);
  local_78 = (undefined8 **)0x0;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba91a00,1,0);
  ppuStack_70 = &PTR_FUN_14ba92ae0;
  uStack_68 = 7;
  local_78 = (undefined8 **)0x6;
  FUN_14282b410(L"/Script/HairStrandsCore",0,0,&PTR_FUN_14ba92bc0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/HairStrandsCore",0,0,&PTR_FUN_14ba92f40);
  uStack_68 = 3;
  ppuStack_70 = &PTR_FUN_14ba94c20;
  local_78 = (undefined8 **)0xd;
  FUN_14282b410(L"/Script/HairStrandsCore",0,0,&PTR_FUN_14ba94c80);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = (undefined8 **)0x4;
  FUN_14282b410(L"/Script/HairStrandsCore",0,0,&PTR_FUN_14ba954b0);
  ppuStack_70 = &PTR_FUN_14ba97260;
  local_78 = (undefined8 **)0x1;
  uStack_68 = 2;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba972d0,2,&PTR_FUN_14ba972a0);
  local_78 = (undefined8 **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf7c20,L"r.HairStrands.Log.BindingBuilderWarning",&DAT_14c7649c8,
                L"Enable/disable warning during groom binding builder");
  atexit(FUN_144411d05);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144417200 FUN_144417200 body=69 status=ok
// SIG undefined FUN_144417200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144417200(void)

{
  _DAT_14cbf7cc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144417242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7cd0,1);
  return;
}



// FUNCTION 144417245 FUN_144417245 body=69 status=ok
// SIG undefined FUN_144417245(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144417245(void)

{
  _DAT_14cbf7cd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144417287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7ce0,1);
  return;
}



// FUNCTION 14441728a FUN_14441728a body=69 status=ok
// SIG undefined FUN_14441728a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14441728a(void)

{
  _DAT_14cbf7cf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444172cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7cf8,1);
  return;
}



// FUNCTION 1444172cf FUN_1444172cf body=69 status=ok
// SIG undefined FUN_1444172cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444172cf(void)

{
  _DAT_14cbf7d08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144417311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7d10,1);
  return;
}



// FUNCTION 144417314 FUN_144417314 body=69 status=ok
// SIG undefined FUN_144417314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144417314(void)

{
  _DAT_14cbf7d18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144417356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7d20,1);
  return;
}



// FUNCTION 144417359 FUN_144417359 body=69 status=ok
// SIG undefined FUN_144417359(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144417359(void)

{
  _DAT_14cbf7d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014441739b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf7d30,1);
  return;
}



// FUNCTION 1444173aa FUN_1444173aa body=38 status=ok
// SIG undefined FUN_1444173aa(void)

void FUN_1444173aa(void)

{
  while (DAT_14cbf7e68 != (undefined8 *)0x0) {
    DAT_14cbf7e68 = (undefined8 *)*DAT_14cbf7e68;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1444173d0 FUN_1444173d0 body=38 status=ok
// SIG undefined FUN_1444173d0(void)

void FUN_1444173d0(void)

{
  while (DAT_14cbf7e78 != (undefined8 *)0x0) {
    DAT_14cbf7e78 = (undefined8 *)*DAT_14cbf7e78;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1444173f6 FUN_1444173f6 body=448 status=ok
// SIG undefined FUN_1444173f6(void)

void FUN_1444173f6(longlong param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined **local_f8 [5];
  byte local_d0;
  undefined8 local_b8;
  longlong *local_a0;
  longlong local_80;
  undefined8 local_68;
  void **local_60;
  undefined8 local_58;
  void *local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x80))) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    local_48 = (void *)0x0;
    uStack_40 = 0;
    uVar1 = *(uint *)(lVar2 + (ulonglong)param_2 * 0x30);
    if ((int)uVar1 < 1) {
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((ulonglong)uVar1);
      }
    }
    else {
      uStack_40 = (ulonglong)uVar1;
      FUN_1447403be(&local_48);
      memset(local_48,0,(ulonglong)uVar1);
    }
    local_50 = local_48;
    FUN_14143acfc(lVar2 + (ulonglong)param_2 * 0x30 + 8,&local_50,1);
    memset(local_f8,0,0x90);
    FUN_144869430(local_f8);
    local_68 = 0;
    local_f8[0] = &PTR_FUN_149e1e050;
    local_60 = &local_48;
    local_58 = 0x7fffffffffffffff;
    local_d0 = local_d0 | 1;
    FUN_1449c2eca(local_f8,1);
    if (*(char *)(param_1 + 0x38) == '\x01') {
      local_b8 = *(undefined8 *)(param_1 + 0x30);
    }
    FUN_14907c188(param_3,local_f8);
    local_f8[0] = &PTR__purecall_149e35f70;
    if (local_a0 != (longlong *)0x0) {
      if (*local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_a0);
    }
    if (local_80 != 0) {
      if (*(longlong *)(local_80 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_80);
    }
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444175b8 FUN_1444175b8 body=55 status=ok
// SIG undefined FUN_1444175b8(void)

void FUN_1444175b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7ea0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7ea0 = FUN_14171c317(FUN_14667a411,uVar1,L"EGroomCacheAttributes");
  }
  return;
}



// FUNCTION 1444175ef FUN_1444175ef body=55 status=ok
// SIG undefined FUN_1444175ef(void)

void FUN_1444175ef(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7ed0 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7ed0 = FUN_14171c317(FUN_14667a4d6,uVar1,L"EGroomCacheType");
  }
  return;
}



// FUNCTION 144417626 FUN_144417626 body=55 status=ok
// SIG undefined FUN_144417626(void)

void FUN_144417626(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7ee8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7ee8 = FUN_14171c317(FUN_14667a505,uVar1,L"EGroomBasisType");
  }
  return;
}



// FUNCTION 14441765d FUN_14441765d body=55 status=ok
// SIG undefined FUN_14441765d(void)

void FUN_14441765d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf7f00 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf7f00 = FUN_14171c317(FUN_14667a534,uVar1,L"EGroomCurveType");
  }
  return;
}



// FUNCTION 144417694 FUN_144417694 body=978 status=ok
// SIG undefined FUN_144417694(void)

void FUN_144417694(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined4 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint *puVar20;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_80;
  uint local_7c;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar2 = *(float *)(param_2 + 0x834);
  plVar6 = (longlong *)FUN_1414c2236();
  lVar12 = plVar6[0x22];
  if (lVar12 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    lVar12 = plVar6[0x22];
  }
  local_a8 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  FUN_14907c03a(*param_1,fVar2,*(float *)(lVar12 + 0x28) + fVar2,*(undefined1 *)(param_2 + 0x832));
  lVar12 = local_78;
  lVar19 = (longlong)(int)(uint)uStack_70;
  if (lVar19 != 0) {
    lVar16 = 0;
    do {
      local_7c = *(uint *)(lVar12 + lVar16);
      FUN_1449e3bb0(param_1 + 1,&local_7c);
      lVar16 = lVar16 + 4;
    } while (lVar19 * 4 != lVar16);
    if (0 < (int)(uint)uStack_70) {
      uVar17 = 2;
      if ((uint)uStack_70 < 2) {
        uVar17 = uStack_70 & 0xffffffff;
      }
      local_90 = param_1 + 10;
      local_88 = param_1 + 0x19;
      local_98 = param_1 + 0x14;
      uVar18 = 0;
LAB_1444177a4:
      FUN_144417a68(param_1);
      local_7c = *(uint *)(local_78 + uVar18 * 4);
      uVar13 = (ulonglong)(int)local_7c;
      if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
        plVar6 = (longlong *)param_1[0xb];
        if ((longlong *)param_1[0xb] == (longlong *)0x0) {
          plVar6 = local_90;
        }
        iVar10 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[0xc] - 1U & local_7c) * 4);
        if (iVar10 != -1) {
          lVar12 = param_1[3];
          do {
            if (*(uint *)(lVar12 + (longlong)iVar10 * 0xc) == local_7c) goto LAB_144417a12;
            iVar10 = *(int *)(lVar12 + (longlong)iVar10 * 0xc + 4);
          } while (iVar10 != -1);
        }
      }
      if ((int)param_1[0x18] != *(int *)((longlong)param_1 + 0xec)) {
        plVar6 = (longlong *)param_1[0x1f];
        if ((longlong *)param_1[0x1f] == (longlong *)0x0) {
          plVar6 = param_1 + 0x1e;
        }
        uVar11 = (longlong)(int)param_1[0x20] - 1U & uVar13;
        iVar10 = *(int *)((longlong)plVar6 + (uVar11 & 0xffffffff) * 4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(param_1[0x17] + (longlong)iVar10 * 0xc) == local_7c) {
              puVar8 = (uint *)((longlong)plVar6 + uVar11 * 4);
              goto LAB_1444178d4;
            }
            iVar10 = *(int *)(param_1[0x17] + (longlong)iVar10 * 0xc + 4);
          } while (iVar10 != -1);
        }
      }
      puVar7 = (undefined8 *)
               FUN_14907cfd2(param_1,uVar13,uVar13 * 0x30 + *(longlong *)(*param_1 + 0x78));
      uVar3 = local_7c;
      if ((int)param_1[0xe] != *(int *)((longlong)param_1 + 0x9c)) {
        plVar6 = (longlong *)param_1[0x15];
        if ((longlong *)param_1[0x15] == (longlong *)0x0) {
          plVar6 = local_98;
        }
        iVar10 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[0x16] - 1U & local_7c) * 4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(param_1[0xd] + (longlong)iVar10 * 0xc) == local_7c) {
              puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
              *puVar7 = puVar9;
              break;
            }
            iVar10 = *(int *)(param_1[0xd] + (longlong)iVar10 * 0xc + 4);
          } while (iVar10 != -1);
        }
      }
      FUN_1444173f6(*param_1,uVar3,*puVar7);
      goto LAB_1444179fd;
    }
  }
LAB_144417a1e:
  FUN_144417ee6(param_1,1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    puVar1 = (uint *)(param_1[0x17] + lVar12 * 0xc);
    uVar4 = *puVar1;
    if (uVar4 == local_7c) {
      plVar6 = (longlong *)param_1[0x1f];
      if ((longlong *)param_1[0x1f] == (longlong *)0x0) {
        plVar6 = param_1 + 0x1e;
      }
      uVar14 = *(uint *)((longlong)plVar6 + (longlong)(int)puVar1[2] * 4);
      if (uVar14 == uVar3) {
        puVar20 = (uint *)((longlong)plVar6 + (longlong)(int)puVar1[2] * 4);
      }
      else {
        do {
          puVar20 = (uint *)(param_1[0x17] + (longlong)(int)uVar14 * 0xc + 4);
          uVar14 = *puVar20;
        } while (uVar14 != uVar3);
      }
      *puVar20 = puVar1[1];
      lVar19 = param_1[0x17];
      if (*(int *)((longlong)param_1 + 0xec) != 0) {
        *(uint *)(lVar19 + (longlong)(int)param_1[0x1d] * 0xc) = uVar3;
      }
      *(undefined4 *)(lVar19 + lVar12 * 0xc) = 0xffffffff;
      uVar15 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0xec)) {
        uVar15 = (undefined4)param_1[0x1d];
      }
      *(undefined4 *)(lVar19 + lVar12 * 0xc + 4) = uVar15;
      *(uint *)(param_1 + 0x1d) = uVar3;
      *(int *)((longlong)param_1 + 0xec) = *(int *)((longlong)param_1 + 0xec) + 1;
      plVar6 = (longlong *)param_1[0x1b];
      if ((longlong *)param_1[0x1b] == (longlong *)0x0) {
        plVar6 = local_88;
      }
      uVar14 = uVar3 + 0x1f;
      if (-1 < (int)uVar3) {
        uVar14 = uVar3;
      }
      bVar5 = (byte)uVar3 & 0x1f;
      puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)uVar14 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
    }
    else {
      puVar8 = puVar1 + 1;
    }
    if (uVar4 == local_7c) break;
LAB_1444178d4:
    uVar3 = *puVar8;
    lVar12 = (longlong)(int)uVar3;
    if (lVar12 == -1) break;
  }
LAB_1444179fd:
  FUN_1447cbafe(param_1 + 3,&local_80,&local_7c,0);
LAB_144417a12:
  uVar18 = uVar18 + 1;
  if (uVar18 == uVar17) goto LAB_144417a1e;
  goto LAB_1444177a4;
}



// FUNCTION 144417a68 FUN_144417a68 body=1148 status=ok
// SIG undefined FUN_144417a68(void)

void FUN_144417a68(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  uint *local_98;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_6c [4];
  longlong *local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  uint uStack_58;
  char cStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c8));
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  uStack_5b = 0;
  uStack_58 = 0;
  cStack_54 = '\0';
  cVar6 = FUN_14907d33e(param_1 + 0x160);
  if (cVar6 != '\0') {
    local_80 = param_1 + 0x18;
    local_a0 = param_1 + 0xa0;
    local_88 = param_1 + 0x78;
    local_78 = param_1 + 0x170;
    while (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
      lVar7 = *(longlong *)(param_1 + 0x148);
      if (*(longlong *)(param_1 + 0x148) == 0) {
        lVar7 = param_1 + 0x140;
      }
      uVar8 = *(uint *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & uStack_58) * 4);
      if (uVar8 == 0xffffffff) break;
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x108) + (longlong)(int)uVar8 * 0x28),
            *puVar1 != uStack_58) {
        uVar8 = puVar1[8];
        if (uVar8 == 0xffffffff) goto LAB_144417eae;
      }
      if (puVar1 + 2 == (uint *)0x0 || puVar1 == (uint *)0x0) break;
      if (*(longlong *)(puVar1 + 4) == 0) {
        if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
          lVar7 = *(longlong *)(param_1 + 0xa8);
          if (*(longlong *)(param_1 + 0xa8) == 0) {
            lVar7 = local_a0;
          }
          puVar10 = (uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0xb0) - 1U &
                                     (longlong)(int)uStack_58) * 4);
          do {
            uVar8 = *puVar10;
            lVar7 = (longlong)(int)uVar8;
            if (lVar7 == -1) break;
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x68) + lVar7 * 0xc);
            uVar3 = *puVar2;
            if (uVar3 == uStack_58) {
              lVar9 = *(longlong *)(param_1 + 0xa8);
              if (*(longlong *)(param_1 + 0xa8) == 0) {
                lVar9 = local_a0;
              }
              uVar13 = *(uint *)(lVar9 + (longlong)(int)puVar2[2] * 4);
              if (uVar13 == uVar8) {
                puVar12 = (uint *)(lVar9 + (longlong)(int)puVar2[2] * 4);
              }
              else {
                do {
                  puVar12 = (uint *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar13 * 0xc + 4
                                    );
                  uVar13 = *puVar12;
                } while (uVar13 != uVar8);
              }
              *puVar12 = puVar2[1];
              lVar9 = *(longlong *)(param_1 + 0x68);
              if (*(int *)(param_1 + 0x9c) != 0) {
                *(uint *)(lVar9 + (longlong)*(int *)(param_1 + 0x98) * 0xc) = uVar8;
              }
              *(undefined4 *)(lVar9 + lVar7 * 0xc) = 0xffffffff;
              uVar11 = 0xffffffff;
              if (0 < *(int *)(param_1 + 0x9c)) {
                uVar11 = *(undefined4 *)(param_1 + 0x98);
              }
              *(undefined4 *)(lVar9 + lVar7 * 0xc + 4) = uVar11;
              *(uint *)(param_1 + 0x98) = uVar8;
              *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
              lVar7 = *(longlong *)(param_1 + 0x88);
              if (*(longlong *)(param_1 + 0x88) == 0) {
                lVar7 = local_88;
              }
              uVar13 = uVar8 + 0x1f;
              if (-1 < (int)uVar8) {
                uVar13 = uVar8;
              }
              bVar4 = (byte)uVar8 & 0x1f;
              puVar2 = (uint *)(lVar7 + (longlong)((int)uVar13 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
              local_98 = puVar10;
            }
            else {
              puVar10 = puVar2 + 1;
            }
          } while (uVar3 != uStack_58);
        }
      }
      else if (*(longlong *)(puVar1 + 4) == CONCAT35(uStack_5b,uStack_60)) {
        if (cStack_54 == '\x01') {
          FUN_1447cbafe(local_80,local_6c,&uStack_58,0);
        }
        puVar1[4] = 0;
        puVar1[5] = 0;
        if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
          lVar7 = *(longlong *)(param_1 + 0xa8);
          if (*(longlong *)(param_1 + 0xa8) == 0) {
            lVar7 = local_a0;
          }
          puVar10 = (uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0xb0) - 1U &
                                     (longlong)(int)uStack_58) * 4);
          do {
            uVar8 = *puVar10;
            lVar7 = (longlong)(int)uVar8;
            if (lVar7 == -1) break;
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x68) + lVar7 * 0xc);
            uVar3 = *puVar2;
            if (uVar3 == uStack_58) {
              lVar9 = *(longlong *)(param_1 + 0xa8);
              if (*(longlong *)(param_1 + 0xa8) == 0) {
                lVar9 = local_a0;
              }
              uVar13 = *(uint *)(lVar9 + (longlong)(int)puVar2[2] * 4);
              if (uVar13 == uVar8) {
                puVar12 = (uint *)(lVar9 + (longlong)(int)puVar2[2] * 4);
              }
              else {
                do {
                  puVar12 = (uint *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar13 * 0xc + 4
                                    );
                  uVar13 = *puVar12;
                } while (uVar13 != uVar8);
              }
              *puVar12 = puVar2[1];
              lVar9 = *(longlong *)(param_1 + 0x68);
              if (*(int *)(param_1 + 0x9c) != 0) {
                *(uint *)(lVar9 + (longlong)*(int *)(param_1 + 0x98) * 0xc) = uVar8;
              }
              *(undefined4 *)(lVar9 + lVar7 * 0xc) = 0xffffffff;
              uVar11 = 0xffffffff;
              if (0 < *(int *)(param_1 + 0x9c)) {
                uVar11 = *(undefined4 *)(param_1 + 0x98);
              }
              *(undefined4 *)(lVar9 + lVar7 * 0xc + 4) = uVar11;
              *(uint *)(param_1 + 0x98) = uVar8;
              *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
              lVar7 = *(longlong *)(param_1 + 0x88);
              if (*(longlong *)(param_1 + 0x88) == 0) {
                lVar7 = local_88;
              }
              uVar13 = uVar8 + 0x1f;
              if (-1 < (int)uVar8) {
                uVar13 = uVar8;
              }
              bVar4 = (byte)uVar8 & 0x1f;
              puVar2 = (uint *)(lVar7 + (longlong)((int)uVar13 >> 5) * 4);
              *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
              local_98 = puVar10;
              local_8c = uVar3;
            }
            else {
              puVar10 = puVar2 + 1;
            }
          } while (uVar3 != uStack_58);
        }
      }
      plVar5 = local_68;
      if ((local_68 != (longlong *)0x0) && (local_68 != *(longlong **)(puVar1 + 2))) {
        FUN_149084299(*local_68,(int)local_68[1]);
        if (*plVar5 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar5);
      }
      FUN_14906e406(local_78,local_6c,&uStack_60);
      cVar6 = FUN_14907d33e(param_1 + 0x160,&local_68);
      if (cVar6 == '\0') break;
    }
  }
LAB_144417eae:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c8));
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144417ee6 FUN_144417ee6 body=4915 status=ok
// SIG undefined FUN_144417ee6(void)

void FUN_144417ee6(longlong *param_1,char param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined ***pppuVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  LPCRITICAL_SECTION p_Var28;
  undefined4 uVar29;
  uint uVar30;
  uint *puVar31;
  longlong lVar32;
  uint *puVar33;
  undefined1 auStack_278 [39];
  char local_251;
  LPCRITICAL_SECTION local_250;
  uint *local_248;
  longlong *local_240;
  uint *local_238;
  longlong *local_230;
  longlong local_228;
  longlong *plStack_220;
  undefined1 local_218;
  longlong local_208 [2];
  longlong *local_1f8;
  longlong local_1e8 [4];
  longlong *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  longlong local_188;
  undefined4 local_180;
  longlong local_178;
  undefined8 uStack_170;
  uint local_168 [4];
  uint *local_158;
  int local_150;
  uint local_14c;
  undefined4 uStack_148;
  int iStack_144;
  longlong local_138;
  undefined4 local_130;
  ulonglong local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_e8;
  undefined4 local_e0;
  code *local_d8;
  ulonglong uStack_d0;
  undefined ***local_c8 [2];
  undefined **local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (param_1[0x38] == DAT_14c872be0) goto LAB_144418d49;
  local_251 = param_2;
  if ((longlong)(int)param_1[2] != 0) {
    puVar31 = (uint *)param_1[1];
    puVar11 = puVar31 + (int)param_1[2];
    plVar12 = param_1 + 3;
    local_248 = (uint *)(param_1 + 0x1e);
    local_230 = param_1 + 0x19;
    p_Var28 = (LPCRITICAL_SECTION)(param_1 + 0xd);
    plVar22 = param_1 + 0x14;
    local_250 = p_Var28;
    local_240 = plVar22;
    local_238 = puVar11;
LAB_144417f75:
    uVar30 = *puVar31;
    uVar23 = (ulonglong)(int)uVar30;
    local_128 = CONCAT44(local_128._4_4_,uVar30);
    if ((int)param_1[4] != *(int *)((longlong)param_1 + 0x4c)) {
      plVar8 = (longlong *)param_1[0xb];
      if ((longlong *)param_1[0xb] == (longlong *)0x0) {
        plVar8 = param_1 + 10;
      }
      iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[0xc] - 1U & uVar30) * 4);
      if (iVar14 != -1) {
        do {
          if (*(uint *)(*plVar12 + (longlong)iVar14 * 0xc) == uVar30) goto LAB_144418207;
          iVar14 = *(int *)(*plVar12 + (longlong)iVar14 * 0xc + 4);
        } while (iVar14 != -1);
      }
    }
    if ((int)param_1[0x18] != *(int *)((longlong)param_1 + 0xec)) {
      puVar10 = (uint *)param_1[0x1f];
      if ((longlong *)param_1[0x1f] == (longlong *)0x0) {
        puVar10 = local_248;
      }
      uVar20 = (longlong)(int)param_1[0x20] - 1U & uVar23;
      iVar14 = *(int *)((longlong)puVar10 + (uVar20 & 0xffffffff) * 4);
      if (iVar14 != -1) {
        do {
          if (*(uint *)(param_1[0x17] + (longlong)iVar14 * 0xc) == uVar30) {
            puVar10 = (uint *)((longlong)puVar10 + uVar20 * 4);
            goto LAB_1444180dd;
          }
          iVar14 = *(int *)(param_1[0x17] + (longlong)iVar14 * 0xc + 4);
        } while (iVar14 != -1);
      }
    }
    if ((int)param_1[0xe] != *(int *)((longlong)param_1 + 0x9c)) {
      plVar8 = (longlong *)param_1[0x15];
      if ((longlong *)param_1[0x15] == (longlong *)0x0) {
        plVar8 = plVar22;
      }
      iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[0x16] - 1U & uVar30) * 4);
      if (iVar14 != -1) {
        do {
          if (*(uint *)(&p_Var28->DebugInfo->Type + (longlong)iVar14 * 6) == uVar30)
          goto LAB_144418207;
          iVar14 = *(int *)(&p_Var28->DebugInfo->field_0x4 + (longlong)iVar14 * 0xc);
        } while (iVar14 != -1);
      }
    }
    lVar25 = *(longlong *)(*param_1 + 0x78);
    lVar32 = uVar23 * 0x30;
    lVar26 = *(longlong *)(lVar25 + 8 + lVar32);
    puVar9 = (undefined8 *)FUN_14907cfd2(param_1,uVar23,lVar25 + lVar32);
    puVar11 = local_238;
    if (lVar26 == 0) {
      p_Var28 = local_250;
      plVar22 = local_240;
      if (puVar9[1] != 0) goto LAB_144418207;
      local_a4 = *(undefined4 *)((longlong)puVar9 + 0x14);
      local_a0 = *puVar9;
      local_c8[0] = (undefined ***)0x0;
      local_b8 = &PTR_LAB_14baa35f0;
      local_b0 = SUB84(param_1,0);
      uStack_ac = (uint)((ulonglong)param_1 >> 0x20);
      uStack_a8 = (undefined4)local_128;
      local_d8 = FUN_1444295ac;
      lVar25 = FUN_1468888b6(lVar25 + lVar32 + 8,2,&local_d8);
      puVar9[1] = lVar25;
      if (lVar25 != 0) {
        FUN_1447cbafe(local_250,&local_178,&local_128);
      }
      if (local_d8 != (code *)0x0) {
        pppuVar21 = local_c8[0];
        if (local_c8[0] == (undefined ***)0x0) {
          pppuVar21 = &local_b8;
        }
        (*(code *)(*pppuVar21)[2])();
      }
      p_Var28 = local_250;
      plVar22 = local_240;
      if (lVar25 == 0) goto LAB_144418d49;
    }
    else {
      FUN_1444173f6(*param_1,local_128 & 0xffffffff,*puVar9);
      FUN_1447cbafe(plVar12,&local_d8,&local_128);
      puVar11 = local_238;
      p_Var28 = local_250;
      plVar22 = local_240;
    }
    goto LAB_144418207;
  }
LAB_144418313:
  FUN_144417a68(param_1);
  iVar24 = 0;
  local_b8 = (undefined **)0x0;
  local_b0 = 0;
  local_d8 = (code *)0x0;
  uStack_d0 = 0;
  uStack_ac = 0x80;
  uStack_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_240 = param_1 + 3;
  local_248 = (uint *)(param_1 + 5);
  iVar14 = (int)param_1[8];
  uVar20 = 1;
  uVar23 = 0;
  iVar15 = 0;
  if (iVar14 != 0) {
    puVar11 = (uint *)param_1[7];
    if ((uint *)param_1[7] == (uint *)0x0) {
      puVar11 = local_248;
    }
    uVar30 = *puVar11;
    if (uVar30 == 0) {
      iVar15 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar15 = iVar14 + -1;
      }
      uVar23 = 0;
      uVar20 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar20 = 0;
      }
      iVar24 = 0;
      do {
        if (uVar20 == uVar23) goto LAB_1444183f9;
        iVar24 = iVar24 + 0x20;
        uVar30 = puVar11[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar30 == 0);
    }
    else {
      iVar24 = 0;
      uVar23 = 0;
    }
    uVar20 = (ulonglong)(-uVar30 & uVar30);
    uVar3 = uVar20 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar15 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar15) {
      iVar15 = iVar14;
    }
  }
  if (iVar15 != iVar14) {
    local_250 = (LPCRITICAL_SECTION)(param_1 + 0x17);
    uVar30 = 0xffffffff;
    iVar7 = iVar14;
    do {
      iVar15 = *(int *)(param_1[3] + (longlong)iVar15 * 0xc);
      local_128 = CONCAT44(local_128._4_4_,iVar15);
      if ((longlong)(int)param_1[2] != 0) {
        lVar25 = 0;
        do {
          if (*(int *)(param_1[1] + lVar25) == iVar15) goto LAB_1444188b1;
          lVar25 = lVar25 + 4;
        } while ((longlong)(int)param_1[2] * 4 != lVar25);
      }
      FUN_1447cbafe(local_250,&local_178,&local_128,0);
      FUN_1447cbafe(&local_d8,&local_178,&local_128,0);
      iVar7 = (int)param_1[8];
LAB_1444188b1:
      uVar30 = uVar30 & ~(uint)uVar20;
      puVar11 = (uint *)param_1[7];
      if ((uint *)param_1[7] == (uint *)0x0) {
        puVar11 = local_248;
      }
      iVar15 = (int)uVar23;
      lVar25 = (longlong)iVar15;
      uVar18 = puVar11[lVar25] & uVar30;
      if (uVar18 == 0) {
        iVar19 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar19 = iVar7 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar24 = iVar24 + 0x20;
        iVar16 = iVar19;
        if (iVar19 < iVar15) {
          iVar16 = iVar15;
        }
        if (iVar15 < iVar19) {
          lVar26 = 0;
          do {
            uVar18 = puVar11[lVar25 + lVar26 + 1];
            if (uVar18 != 0) {
              uVar23 = (ulonglong)(iVar15 + (int)lVar26 + 1);
              uVar30 = 0xffffffff;
              goto LAB_144418928;
            }
            iVar24 = iVar24 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar16 - lVar25 != lVar26);
          uVar30 = 0xffffffff;
          iVar15 = iVar16;
        }
        uVar23 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar7;
      }
      else {
LAB_144418928:
        uVar20 = (ulonglong)(-uVar18 & uVar18);
        uVar3 = uVar20 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar15 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar15) {
          iVar15 = iVar7;
        }
      }
    } while (iVar15 != iVar14);
  }
LAB_1444183f9:
  plVar12 = local_240;
  FUN_146286f4e(local_240,&local_128,&local_d8);
  FUN_145be27ca(plVar12,&local_128);
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  uVar30 = uStack_120._4_4_;
  uStack_120 = (ulonglong)uStack_120._4_4_ << 0x20;
  if (uVar30 != 0) {
    FUN_1447a08a2(&local_128,0);
  }
  uStack_f8 = 0xffffffff;
  uStack_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    FUN_1446efbd8(local_118,0);
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  uVar23 = 0;
  local_108 = 0;
  local_100 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0x80;
  uStack_f8 = 0xffffffff;
  uStack_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_250 = (LPCRITICAL_SECTION)(param_1 + 0x39);
  EnterCriticalSection(local_250);
  local_248 = (uint *)(param_1 + 0x17);
  iVar14 = (int)param_1[0x1c];
  uVar20 = 1;
  iVar24 = 0;
  iVar15 = 0;
  if (iVar14 != 0) {
    puVar11 = (uint *)param_1[0x1b];
    if ((uint *)param_1[0x1b] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x19);
    }
    uVar30 = *puVar11;
    if (uVar30 == 0) {
      iVar15 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar15 = iVar14 + -1;
      }
      uVar23 = 0;
      uVar20 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar20 = uVar23;
      }
      iVar24 = 0;
      do {
        if (uVar20 == uVar23) goto LAB_14441859d;
        iVar24 = iVar24 + 0x20;
        uVar30 = puVar11[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar23 = 0;
    }
    uVar20 = (ulonglong)(-uVar30 & uVar30);
    uVar3 = uVar20 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar15 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar15) {
      iVar15 = iVar14;
    }
  }
  if (iVar15 != iVar14) {
    uVar30 = 0xffffffff;
    iVar7 = iVar14;
    do {
      uVar18 = *(uint *)(param_1[0x17] + (longlong)iVar15 * 0xc);
      local_178 = CONCAT44(local_178._4_4_,uVar18);
      if ((int)param_1[0x22] != *(int *)((longlong)param_1 + 0x13c)) {
        plVar12 = (longlong *)param_1[0x29];
        if ((longlong *)param_1[0x29] == (longlong *)0x0) {
          plVar12 = param_1 + 0x28;
        }
        uVar17 = *(uint *)((longlong)plVar12 + (ulonglong)((int)param_1[0x2a] - 1U & uVar18) * 4);
        if (uVar17 != 0xffffffff) {
          do {
            puVar11 = (uint *)(param_1[0x21] + (longlong)(int)uVar17 * 0x28);
            if (*puVar11 == uVar18) goto LAB_1444189df;
            uVar17 = puVar11[8];
          } while (uVar17 != 0xffffffff);
        }
      }
      puVar11 = (uint *)0x0;
LAB_1444189df:
      if (puVar11[6] == 0) {
        FUN_14907d07e(puVar11 + 2);
        FUN_1447cbafe(&local_128,&local_1c8,&local_178,0);
        iVar7 = (int)param_1[0x1c];
      }
      uVar30 = uVar30 & ~(uint)uVar20;
      puVar11 = (uint *)param_1[0x1b];
      if ((uint *)param_1[0x1b] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x19);
      }
      iVar15 = (int)uVar23;
      lVar25 = (longlong)iVar15;
      uVar18 = puVar11[lVar25] & uVar30;
      if (uVar18 == 0) {
        iVar19 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar19 = iVar7 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar24 = iVar24 + 0x20;
        iVar16 = iVar19;
        if (iVar19 < iVar15) {
          iVar16 = iVar15;
        }
        if (iVar15 < iVar19) {
          lVar26 = 0;
          do {
            uVar18 = puVar11[lVar25 + lVar26 + 1];
            if (uVar18 != 0) {
              uVar23 = (ulonglong)(iVar15 + (int)lVar26 + 1);
              uVar30 = 0xffffffff;
              goto LAB_144418a64;
            }
            iVar24 = iVar24 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar16 - lVar25 != lVar26);
          uVar30 = 0xffffffff;
          iVar15 = iVar16;
        }
        uVar23 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar7;
      }
      else {
LAB_144418a64:
        uVar20 = (ulonglong)(-uVar18 & uVar18);
        uVar3 = uVar20 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar15 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar15) {
          iVar15 = iVar7;
        }
      }
    } while (iVar15 != iVar14);
  }
LAB_14441859d:
  LeaveCriticalSection(local_250);
  puVar11 = local_248;
  FUN_146286f4e(local_248,&local_178,&local_128);
  FUN_145be27ca(puVar11,&local_178);
  local_130 = 0;
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  uVar30 = uStack_170._4_4_;
  uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
  if (uVar30 != 0) {
    FUN_1447a08a2(&local_178,0);
  }
  uStack_148 = 0xffffffff;
  iStack_144 = 0;
  local_150 = 0;
  if (0x80 < local_14c) {
    local_14c = 0x80;
    FUN_1446efbd8(local_168,0);
  }
  if (local_158 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  uVar23 = 0;
  local_158 = (uint *)0x0;
  local_150 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_14c = 0x80;
  uStack_148 = 0xffffffff;
  iStack_144 = 0;
  local_138 = 0;
  local_130 = 0;
  plVar12 = param_1 + 0x2e;
  iVar14 = (int)param_1[0x33];
  uVar20 = 1;
  iVar24 = 0;
  iVar15 = 0;
  if (iVar14 != 0) {
    puVar11 = (uint *)param_1[0x32];
    if ((uint *)param_1[0x32] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x30);
    }
    uVar30 = *puVar11;
    if (uVar30 == 0) {
      iVar15 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar15 = iVar14 + -1;
      }
      uVar23 = 0;
      uVar20 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar20 = uVar23;
      }
      iVar24 = 0;
      do {
        if (uVar20 == uVar23) goto LAB_14441873c;
        iVar24 = iVar24 + 0x20;
        uVar30 = puVar11[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar30 == 0);
    }
    else {
      uVar23 = 0;
    }
    uVar20 = (ulonglong)(-uVar30 & uVar30);
    uVar3 = uVar20 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar15 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar15) {
      iVar15 = iVar14;
    }
  }
  if (iVar15 != iVar14) {
    uVar30 = 0xffffffff;
    do {
      local_1c8 = *(longlong **)(*plVar12 + (longlong)iVar15 * 0x10);
      cVar5 = (**(code **)(*local_1c8 + 8))();
      if (cVar5 != '\0') {
        FUN_14906e406(&local_178,local_88,&local_1c8,0);
      }
      uVar30 = uVar30 & ~(uint)uVar20;
      puVar11 = (uint *)param_1[0x32];
      if ((uint *)param_1[0x32] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x30);
      }
      iVar7 = (int)param_1[0x33];
      iVar15 = (int)uVar23;
      lVar25 = (longlong)iVar15;
      uVar18 = puVar11[lVar25] & uVar30;
      if (uVar18 == 0) {
        iVar19 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar19 = iVar7 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar24 = iVar24 + 0x20;
        iVar16 = iVar19;
        if (iVar19 < iVar15) {
          iVar16 = iVar15;
        }
        if (iVar15 < iVar19) {
          lVar26 = 0;
          do {
            uVar18 = puVar11[lVar25 + lVar26 + 1];
            if (uVar18 != 0) {
              uVar23 = (ulonglong)(iVar15 + (int)lVar26 + 1);
              uVar30 = 0xffffffff;
              goto LAB_144418b80;
            }
            iVar24 = iVar24 + 0x20;
            lVar26 = lVar26 + 1;
          } while (iVar16 - lVar25 != lVar26);
          uVar30 = 0xffffffff;
          iVar15 = iVar16;
        }
        uVar23 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar7;
      }
      else {
LAB_144418b80:
        uVar20 = (ulonglong)(-uVar18 & uVar18);
        uVar3 = uVar20 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar15 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar15) {
          iVar15 = iVar7;
        }
      }
    } while (iVar15 != iVar14);
  }
LAB_14441873c:
  FUN_14907d0ce(plVar12,&local_1c8,&local_178);
  FUN_14907d2e0(plVar12,&local_1c8);
  local_180 = 0;
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  FUN_14017e2da();
  iVar14 = local_150;
  if (iStack_144 < (int)uStack_170) {
    if (local_251 == '\0') {
      if (local_150 == 0) {
        uVar20 = 1;
        uVar23 = 0;
        iVar24 = 0;
        iVar15 = 0;
      }
      else {
        puVar11 = local_158;
        if (local_158 == (uint *)0x0) {
          puVar11 = local_168;
        }
        uVar30 = *puVar11;
        if (uVar30 == 0) {
          iVar15 = local_150 + 0x1e;
          if (-1 < local_150 + -1) {
            iVar15 = local_150 + -1;
          }
          uVar23 = 0;
          uVar20 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar20 = uVar23;
          }
          iVar24 = 0;
          do {
            if (uVar20 == uVar23) goto LAB_144418bf9;
            iVar24 = iVar24 + 0x20;
            uVar30 = puVar11[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar30 == 0);
        }
        else {
          uVar23 = 0;
          iVar24 = 0;
        }
        uVar20 = (ulonglong)(-uVar30 & uVar30);
        uVar3 = uVar20 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar15 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (local_150 <= iVar15) {
          iVar15 = local_150;
        }
      }
      if (iVar15 != local_150) {
        uVar30 = 0xffffffff;
        iVar7 = local_150;
        do {
          puVar9 = *(undefined8 **)(local_178 + (longlong)iVar15 * 0x10);
          if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9,1);
            iVar7 = local_150;
          }
          uVar30 = uVar30 & ~(uint)uVar20;
          puVar11 = local_158;
          if (local_158 == (uint *)0x0) {
            puVar11 = local_168;
          }
          iVar15 = (int)uVar23;
          lVar25 = (longlong)iVar15;
          uVar18 = puVar11[lVar25] & uVar30;
          if (uVar18 == 0) {
            iVar19 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar19 = iVar7 + -1;
            }
            iVar19 = iVar19 >> 5;
            iVar24 = iVar24 + 0x20;
            iVar16 = iVar19;
            if (iVar19 < iVar15) {
              iVar16 = iVar15;
            }
            if (iVar15 < iVar19) {
              lVar26 = 0;
              do {
                uVar18 = puVar11[lVar25 + lVar26 + 1];
                if (uVar18 != 0) {
                  uVar23 = (ulonglong)(iVar15 + (int)lVar26 + 1);
                  uVar30 = 0xffffffff;
                  goto LAB_144418e21;
                }
                iVar24 = iVar24 + 0x20;
                lVar26 = lVar26 + 1;
              } while (iVar16 - lVar25 != lVar26);
              uVar30 = 0xffffffff;
              lVar25 = (longlong)iVar16;
            }
            uVar23 = lVar25 + 1U & 0xffffffff;
            iVar15 = iVar7;
          }
          else {
LAB_144418e21:
            uVar20 = (ulonglong)(-uVar18 & uVar18);
            uVar3 = uVar20 * 2 + 1;
            lVar25 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            iVar15 = (iVar24 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
            if (iVar7 <= iVar15) {
              iVar15 = iVar7;
            }
          }
        } while (iVar15 != iVar14);
      }
    }
    else {
      local_208[0] = 0;
      local_1f8 = (longlong *)0x0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_1c8 = (longlong *)0x0;
      uStack_1c0 = 0;
      local_19c = 0xffffffff00000080;
      local_194 = 0;
      local_188 = 0;
      local_180 = 0;
      FUN_1490897f8(&local_1c8,&local_178);
      local_88[0] = (code *)0x0;
      local_78 = (longlong *)0x0;
      plVar12 = (longlong *)FUN_14001cc68(0x58,8);
      *plVar12 = (longlong)&PTR_LAB_14baa3610;
      local_78 = plVar12;
      FUN_14908a0b0(plVar12 + 1,&local_1c8);
      if (plVar12 != (longlong *)&DAT_fffffffffffffff8) {
        local_88[0] = FUN_144429792;
      }
      FUN_14170b918(&local_228,local_208);
      plVar12 = plStack_220;
      local_218 = 1;
      if (plStack_220 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_220 + 1) = (int)plStack_220[1] + 1;
        UNLOCK();
      }
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c83f0fc) &&
           (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
          uVar13 = FUN_14118da1c();
          bVar6 = FUN_14054d46e(uVar13,L"nothreading");
          DAT_14c83f0f8 = bVar6 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
        }
        pcVar4 = local_88[0];
        if (DAT_14c83f0f8 == 1) goto LAB_144418f86;
        plVar22 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar22 = &local_68;
        }
        uVar13 = (**(code **)(*plVar22 + 8))();
        (*pcVar4)(uVar13);
        *(undefined4 *)(local_228 + 0x80) = 0;
        FUN_140b576f0();
      }
      else {
LAB_144418f86:
        plVar22 = DAT_14c8442c0;
        puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        puVar9[1] = 0;
        *puVar9 = TAsyncQueuedWork<void>::vftable;
        puVar9[2] = local_88[0];
        puVar9[4] = local_78;
        local_78 = (longlong *)0x0;
        *(undefined4 *)(puVar9 + 8) = local_58;
        *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_54;
        *(undefined4 *)(puVar9 + 9) = uStack_50;
        *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
        puVar9[6] = local_68;
        puVar9[7] = uStack_60;
        if (local_88[0] != (code *)0x0) {
          local_88[0] = (code *)0x0;
        }
        puVar9[10] = local_228;
        puVar9[0xb] = plStack_220;
        local_228 = 0;
        plStack_220 = (longlong *)0x0;
        *(undefined1 *)(puVar9 + 0xc) = 0;
        (**(code **)(*plVar22 + 0x18))(plVar22,puVar9,3);
      }
      plVar22 = plStack_220;
      if (plStack_220 != (longlong *)0x0) {
        LOCK();
        plVar8 = plStack_220 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plStack_220)(plStack_220);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      if (local_88[0] != (code *)0x0) {
        plVar22 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar22 = &local_68;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (local_208[0] != 0) {
        plVar22 = local_1f8;
        if (local_1f8 == (longlong *)0x0) {
          plVar22 = local_1e8;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar12 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      local_180 = 0;
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      FUN_14017e2da(&local_1c8);
    }
  }
LAB_144418bf9:
  param_1[0x38] = DAT_14c872be0;
  local_130 = 0;
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  FUN_14017e2da(&local_178);
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  uVar23 = uStack_120 >> 0x20;
  uStack_120 = uStack_120 & 0xffffffff00000000;
  if ((int)uVar23 != 0) {
    FUN_1447a08a2(&local_128,0);
  }
  uStack_f8 = 0xffffffff;
  uStack_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    FUN_1446efbd8(local_118,0);
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  uVar23 = uStack_d0 >> 0x20;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  if ((int)uVar23 != 0) {
    FUN_1447a08a2(&local_d8,0);
  }
  uStack_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < uStack_ac) {
    uStack_ac = 0x80;
    FUN_1446efbd8(local_c8,0);
  }
  if (local_b8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_144418d49:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    puVar2 = (uint *)(param_1[0x17] + lVar25 * 0xc);
    uVar17 = *puVar2;
    if (uVar17 == uVar30) {
      puVar33 = (uint *)param_1[0x1f];
      if ((longlong *)param_1[0x1f] == (longlong *)0x0) {
        puVar33 = local_248;
      }
      uVar27 = *(uint *)((longlong)puVar33 + (longlong)(int)puVar2[2] * 4);
      if (uVar27 == uVar18) {
        puVar33 = (uint *)((longlong)puVar33 + (longlong)(int)puVar2[2] * 4);
      }
      else {
        do {
          puVar33 = (uint *)(param_1[0x17] + (longlong)(int)uVar27 * 0xc + 4);
          uVar27 = *puVar33;
        } while (uVar27 != uVar18);
      }
      *puVar33 = puVar2[1];
      lVar26 = param_1[0x17];
      if (*(int *)((longlong)param_1 + 0xec) != 0) {
        *(uint *)(lVar26 + (longlong)(int)param_1[0x1d] * 0xc) = uVar18;
      }
      *(undefined4 *)(lVar26 + lVar25 * 0xc) = 0xffffffff;
      uVar29 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0xec)) {
        uVar29 = (undefined4)param_1[0x1d];
      }
      *(undefined4 *)(lVar26 + lVar25 * 0xc + 4) = uVar29;
      *(uint *)(param_1 + 0x1d) = uVar18;
      *(int *)((longlong)param_1 + 0xec) = *(int *)((longlong)param_1 + 0xec) + 1;
      plVar22 = (longlong *)param_1[0x1b];
      if ((longlong *)param_1[0x1b] == (longlong *)0x0) {
        plVar22 = local_230;
      }
      uVar27 = uVar18 + 0x1f;
      if (-1 < (int)uVar18) {
        uVar27 = uVar18;
      }
      bVar6 = (byte)uVar18 & 0x1f;
      puVar2 = (uint *)((longlong)plVar22 + (longlong)((int)uVar27 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    }
    else {
      puVar10 = puVar2 + 1;
    }
    if (uVar17 == uVar30) break;
LAB_1444180dd:
    uVar18 = *puVar10;
    lVar25 = (longlong)(int)uVar18;
    if (lVar25 == -1) break;
  }
  FUN_1447cbafe(plVar12,&local_d8,&local_128);
  p_Var28 = local_250;
  plVar22 = local_240;
LAB_144418207:
  puVar31 = puVar31 + 1;
  if (puVar31 == puVar11) goto LAB_144418313;
  goto LAB_144417f75;
}



// FUNCTION 144419226 FUN_144419226 body=1222 status=ok
// SIG undefined FUN_144419226(void)

void FUN_144419226(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar18;
  uint *puVar19;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  uint *local_98;
  longlong local_90;
  longlong local_88;
  LPCRITICAL_SECTION local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)FUN_1414c2236();
  lVar17 = plVar4[0x22];
  if (lVar17 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar17 = plVar4[0x22];
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x110);
  EnterCriticalSection(lpCriticalSection);
  puVar19 = (uint *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar11 = 0;
    iVar12 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar9 = puVar19;
    }
    uVar18 = *puVar9;
    if (uVar18 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_1444193d2;
        iVar12 = iVar12 + 0x20;
        uVar18 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar18 & uVar18);
    uVar2 = uVar15 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar18 = 0xffffffff;
    do {
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)iVar5 * 0x18);
      *(undefined4 *)(lVar16 + 0x10) = 0;
      if (*(int *)(lVar16 + 0x14) != 0) {
        FUN_14481578e(lVar16 + 8,0);
      }
      uVar18 = uVar18 & ~(uint)uVar15;
      puVar9 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar9 = puVar19;
      }
      iVar3 = *(int *)(param_1 + 0x38);
      iVar5 = (int)uVar11;
      lVar16 = (longlong)iVar5;
      uVar6 = puVar9[lVar16] & uVar18;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar9[lVar16 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar16 == lVar10) goto LAB_1444193d2;
        }
        uVar11 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar18 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar15 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
LAB_1444193d2:
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x100);
    plVar13 = plVar4 + *(int *)(param_1 + 0x108);
    lVar16 = param_1 + 0x48;
    local_88 = lVar17;
    local_80 = lpCriticalSection;
    do {
      lVar17 = *plVar4;
      uVar11 = *(ulonglong *)(lVar17 + 0x668);
      if ((uVar11 != 0) && (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44))) {
        uVar18 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        lVar10 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar10 = lVar16;
        }
        uVar18 = *(int *)(param_1 + 0x58) - 1U & (uVar18 >> 0x10 ^ uVar18);
        iVar3 = *(int *)(lVar10 + (ulonglong)uVar18 * 4);
        if (iVar3 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 0x18);
            if (*puVar1 == uVar11) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                local_78 = 0;
                uStack_70 = 0;
                local_a8 = &local_78;
                FUN_14907c03a(uVar11,local_88,
                              *(float *)(local_88 + 0x28) + *(float *)(lVar17 + 0x834),
                              CONCAT31((int3)(uVar18 >> 8),*(undefined1 *)(lVar17 + 0x832)));
                lVar17 = local_78;
                lVar10 = (longlong)(int)uStack_70;
                if (lVar10 != 0) {
                  lVar14 = 0;
                  local_98 = puVar19;
                  local_90 = lVar16;
                  do {
                    local_64 = *(undefined4 *)(lVar17 + lVar14);
                    FUN_144aa221c(puVar1[1] + 8,&local_64);
                    lVar14 = lVar14 + 4;
                    lVar16 = local_90;
                    puVar19 = local_98;
                  } while (lVar10 * 4 != lVar14);
                }
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
              }
              break;
            }
            iVar3 = (int)puVar1[2];
          } while (iVar3 != -1);
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar13);
    iVar3 = *(int *)(param_1 + 0x38);
    lpCriticalSection = local_80;
  }
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar11 = 0;
    iVar12 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar9 = puVar19;
    }
    uVar18 = *puVar9;
    if (uVar18 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_144419698;
        iVar12 = iVar12 + 0x20;
        uVar18 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar18 & uVar18);
    uVar2 = uVar15 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar5 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar18 = 0xffffffff;
    do {
      FUN_144417ee6(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)iVar5 * 0x18),1);
      uVar18 = ~(uint)uVar15 & uVar18;
      puVar9 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar9 = puVar19;
      }
      iVar3 = *(int *)(param_1 + 0x38);
      iVar5 = (int)uVar11;
      lVar17 = (longlong)iVar5;
      uVar6 = puVar9[lVar17] & uVar18;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar16 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar9[lVar17 + lVar16 + 1];
          if (uVar6 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar8 - lVar17 == lVar16) goto LAB_144419698;
        }
        uVar11 = (ulonglong)(iVar5 + (int)lVar16 + 1);
        uVar18 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar15 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
LAB_144419698:
  LeaveCriticalSection(lpCriticalSection);
  FUN_140441118(param_1,1);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444196ee FUN_1444196ee body=424 status=ok
// SIG undefined FUN_1444196ee(void)

undefined8 FUN_1444196ee(longlong param_1,ulonglong param_2,uint param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      uVar7 = 0;
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) goto LAB_1444197ed;
          uVar3 = puVar1[1];
          FUN_144417a68(uVar3);
          if (*(int *)(uVar3 + 0x20) == *(int *)(uVar3 + 0x4c)) goto LAB_1444197ed;
          lVar5 = uVar3 + 0x50;
          if (*(longlong *)(uVar3 + 0x58) != 0) {
            lVar5 = *(longlong *)(uVar3 + 0x58);
          }
          iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(uVar3 + 0x60) - 1U & param_3) * 4);
          if (iVar6 == -1) goto LAB_1444197ed;
          uVar7 = 0;
          goto LAB_1444197d3;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
      goto LAB_1444197ef;
    }
  }
LAB_1444197ed:
  uVar7 = 0;
  goto LAB_1444197ef;
  while (iVar6 = *(int *)(*(longlong *)(uVar3 + 0x18) + (longlong)iVar6 * 0xc + 4), iVar6 != -1) {
LAB_1444197d3:
    if (*(uint *)(*(longlong *)(uVar3 + 0x18) + (longlong)iVar6 * 0xc) == param_3) {
      EnterCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0x1c8));
      if (*(int *)(uVar3 + 0x110) == *(int *)(uVar3 + 0x13c)) goto LAB_14441987d;
      lVar5 = uVar3 + 0x140;
      if (*(longlong *)(uVar3 + 0x148) != 0) {
        lVar5 = *(longlong *)(uVar3 + 0x148);
      }
      uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(uVar3 + 0x150) - 1U & param_3) * 4);
      if (uVar4 == 0xffffffff) goto LAB_14441987d;
      uVar7 = 0;
      goto LAB_144419858;
    }
  }
  goto LAB_1444197ef;
  while (uVar4 = puVar2[8], uVar4 != 0xffffffff) {
LAB_144419858:
    puVar2 = (uint *)(*(longlong *)(uVar3 + 0x108) + (longlong)(int)uVar4 * 0x28);
    if (*puVar2 == param_3) {
      if (((ulonglong)(puVar2 + 2) & 0xfffffffffffffff7) == 0) {
LAB_14441987d:
        uVar7 = 0;
      }
      else {
        puVar2[6] = puVar2[6] + 1;
        uVar7 = *(undefined8 *)(puVar2 + 2);
      }
      break;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0x1c8));
LAB_1444197ef:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  return uVar7;
}



// FUNCTION 144419896 FUN_144419896 body=327 status=ok
// SIG undefined FUN_144419896(void)

void FUN_144419896(longlong param_1,ulonglong param_2,uint param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            uVar3 = puVar1[1];
            EnterCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0x1c8));
            if (*(int *)(uVar3 + 0x110) == *(int *)(uVar3 + 0x13c)) goto LAB_1444199c1;
            lVar5 = uVar3 + 0x140;
            if (*(longlong *)(uVar3 + 0x148) != 0) {
              lVar5 = *(longlong *)(uVar3 + 0x148);
            }
            uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(uVar3 + 0x150) - 1U & param_3) * 4);
            if (uVar4 == 0xffffffff) goto LAB_1444199c1;
            goto LAB_144419999;
          }
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  goto LAB_1444199ca;
  while (uVar4 = puVar2[8], uVar4 != 0xffffffff) {
LAB_144419999:
    puVar2 = (uint *)(*(longlong *)(uVar3 + 0x108) + (longlong)(int)uVar4 * 0x28);
    if (*puVar2 == param_3) {
      if (((ulonglong)(puVar2 + 2) & 0xfffffffffffffff7) != 0) {
        puVar2[6] = puVar2[6] - 1;
      }
      break;
    }
  }
LAB_1444199c1:
  LeaveCriticalSection((LPCRITICAL_SECTION)(uVar3 + 0x1c8));
LAB_1444199ca:
                    /* WARNING: Could not recover jumptable at 0x0001444199d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  return;
}



// FUNCTION 1444199de FUN_1444199de body=76 status=ok
// SIG undefined FUN_1444199de(void)

void FUN_1444199de(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x6a8) == '\x01') && (*(char *)(param_1 + 0x6d8) != param_2)) {
    *(char *)(param_1 + 0x6d8) = param_2;
    FUN_145c58d0a(param_1);
    FUN_14907faf0(param_1);
    FUN_14441a6a0(param_1,0);
    FUN_149080166(param_1);
    return;
  }
  return;
}



// FUNCTION 144419a2a FUN_144419a2a body=69 status=ok
// SIG undefined FUN_144419a2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419a2a(void)

{
  _DAT_14cbf80e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf80f0,1);
  return;
}



// FUNCTION 144419a6f FUN_144419a6f body=69 status=ok
// SIG undefined FUN_144419a6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419a6f(void)

{
  _DAT_14cbf8100 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8108,1);
  return;
}



// FUNCTION 144419ab4 FUN_144419ab4 body=69 status=ok
// SIG undefined FUN_144419ab4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419ab4(void)

{
  _DAT_14cbf8118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419af6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8120,1);
  return;
}



// FUNCTION 144419af9 FUN_144419af9 body=69 status=ok
// SIG undefined FUN_144419af9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419af9(void)

{
  _DAT_14cbf8128 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8130,1);
  return;
}



// FUNCTION 144419b3e FUN_144419b3e body=69 status=ok
// SIG undefined FUN_144419b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419b3e(void)

{
  _DAT_14cbf8138 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8140,1);
  return;
}



// FUNCTION 144419b83 FUN_144419b83 body=69 status=ok
// SIG undefined FUN_144419b83(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419b83(void)

{
  _DAT_14cbf8150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8158,1);
  return;
}



// FUNCTION 144419bc8 FUN_144419bc8 body=69 status=ok
// SIG undefined FUN_144419bc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419bc8(void)

{
  _DAT_14cbf8168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8170,1);
  return;
}



// FUNCTION 144419c0d FUN_144419c0d body=69 status=ok
// SIG undefined FUN_144419c0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419c0d(void)

{
  _DAT_14cbf8180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8188,1);
  return;
}



// FUNCTION 144419c52 FUN_144419c52 body=69 status=ok
// SIG undefined FUN_144419c52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419c52(void)

{
  _DAT_14cbf8198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf81a0,1);
  return;
}



// FUNCTION 144419c97 FUN_144419c97 body=69 status=ok
// SIG undefined FUN_144419c97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419c97(void)

{
  _DAT_14cbf81b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144419cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf81b8,1);
  return;
}



// FUNCTION 144419ced FUN_144419ced body=49 status=ok
// SIG undefined FUN_144419ced(void)

void FUN_144419ced(void)

{
  FUN_149084299(DAT_14cbf81d8,DAT_14cbf81e0);
  if (DAT_14cbf81d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144419d1e FUN_144419d1e body=63 status=ok
// SIG undefined FUN_144419d1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419d1e(void)

{
  _DAT_14cbf81f0 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cbf81f9 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cbf81f0);
    DAT_14cbf81f9 = '\0';
  }
  return;
}



// FUNCTION 144419d5d FUN_144419d5d body=63 status=ok
// SIG undefined FUN_144419d5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419d5d(void)

{
  _DAT_14cbf8210 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cbf8219 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cbf8210);
    DAT_14cbf8219 = '\0';
  }
  return;
}



// FUNCTION 144419d9c FUN_144419d9c body=63 status=ok
// SIG undefined FUN_144419d9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419d9c(void)

{
  _DAT_14cbf8230 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cbf8239 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cbf8230);
    DAT_14cbf8239 = '\0';
  }
  return;
}



// FUNCTION 144419ddb FUN_144419ddb body=63 status=ok
// SIG undefined FUN_144419ddb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144419ddb(void)

{
  _DAT_14cbf8250 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cbf8259 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cbf8250);
    DAT_14cbf8259 = '\0';
  }
  return;
}



// FUNCTION 144419e1a FUN_144419e1a body=2180 status=ok
// SIG undefined FUN_144419e1a(void)

void FUN_144419e1a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint *puVar13;
  byte bVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_f8 [32];
  code **local_d8;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_1 + 0x850) < 1) goto LAB_144419e48;
  uVar16 = *(undefined4 *)(param_1 + 0x3d0);
  uVar5 = FUN_144b0f89b(0,0x9b);
  uVar20 = (uint)*(float *)(param_1 + 0x87c);
  local_98 = 0;
  iVar6 = *(int *)(param_1 + 0x850);
  uVar11 = *(undefined8 *)(param_1 + 0x848);
  local_90 = iVar6;
  if (iVar6 == 0) {
    local_8c = 0;
    local_b8 = *(longlong *)(param_1 + 0x660);
    uStack_b0 = *(undefined8 *)(param_1 + 0x688);
    local_c0 = 0;
LAB_144419f1f:
    local_c8 = 0;
    local_c0 = local_c0 & 0xffffffff;
  }
  else {
    FUN_14908510e(&local_98,iVar6,0);
    FUN_149085170(local_98,uVar11,iVar6);
    iVar6 = local_90;
    lVar19 = local_98;
    local_b8 = *(longlong *)(param_1 + 0x660);
    uStack_b0 = *(undefined8 *)(param_1 + 0x688);
    local_c8 = 0;
    local_c0 = CONCAT44(local_c0._4_4_,local_90);
    if (local_90 == 0) goto LAB_144419f1f;
    FUN_14908510e(&local_c8,local_90,0);
    FUN_149085170(local_c8,lVar19,iVar6);
  }
  local_a4 = CONCAT31(local_a4._1_3_,uVar5);
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar19 + 0xc60);
  local_a8 = uVar16;
  local_a0 = uVar20;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_144419f86;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_144419f8f;
      goto LAB_14441a0ba;
    }
LAB_144419f8f:
    if ((longlong)(int)local_c0 != 0) {
      lVar19 = 0;
      do {
        *(undefined4 *)(*(longlong *)(local_c8 + lVar19) + 0x108) = 0;
        if ((local_b8 != 0 & (byte)local_a4) != 0) {
          bVar14 = *(char *)(local_b8 + 0xba) - 2;
          uVar16 = 0;
          if (bVar14 < 7) {
            uVar16 = (&DAT_14baa3d0c)[bVar14];
          }
          *(undefined4 *)(*(longlong *)(local_c8 + lVar19) + 0x108) = uVar16;
        }
        lVar18 = *(longlong *)(local_c8 + lVar19);
        if (*(longlong *)(lVar18 + 0x18) != 0) {
          if ((int)local_a0 < 0) {
            *(undefined1 *)(lVar18 + 0x38) = 0;
            lVar18 = *(longlong *)(local_c8 + lVar19);
LAB_14441a058:
            uVar5 = 0;
          }
          else {
            if ((int)local_a0 < *(int *)(*(longlong *)(lVar18 + 0x3a0) + 0x438)) {
              uVar5 = *(undefined1 *)
                       (*(longlong *)(*(longlong *)(lVar18 + 0x3a0) + 0x430) + (ulonglong)local_a0);
            }
            else {
              uVar5 = 0;
            }
            *(undefined1 *)(lVar18 + 0x38) = uVar5;
            lVar18 = *(longlong *)(local_c8 + lVar19);
            if (*(int *)(*(longlong *)(lVar18 + 0x3a0) + 0x448) <= (int)local_a0)
            goto LAB_14441a058;
            uVar5 = *(undefined1 *)
                     (*(longlong *)(*(longlong *)(lVar18 + 0x3a0) + 0x440) + (ulonglong)local_a0);
          }
          *(undefined1 *)(lVar18 + 0x3a) = uVar5;
          *(undefined1 *)(*(longlong *)(local_c8 + lVar19) + 0x39) =
               *(undefined1 *)(*(longlong *)(*(longlong *)(local_c8 + lVar19) + 0x3a0) + 0x460);
          *(bool *)(*(longlong *)(local_c8 + lVar19) + 0x3b) =
               *(char *)(*(longlong *)(local_c8 + lVar19) + 0x165) == '\x02';
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)(int)local_c0 * 8 != lVar19);
    }
  }
  else {
LAB_144419f86:
    if (iVar6 == 0x10) goto LAB_144419f8f;
LAB_14441a0ba:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar6 = *(int *)(lVar19 + 0xc60), iVar6 != 2)) {
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14441a58e;
        }
        goto LAB_14441a0eb;
      }
LAB_14441a58e:
      if ((longlong)(int)local_c0 != 0) {
        lVar19 = 0;
        do {
          *(undefined4 *)(*(longlong *)(local_c8 + lVar19) + 0x108) = 0;
          if ((local_b8 != 0 & (byte)local_a4) != 0) {
            bVar14 = *(char *)(local_b8 + 0xba) - 2;
            uVar16 = 0;
            if (bVar14 < 7) {
              uVar16 = (&DAT_14baa3d0c)[bVar14];
            }
            *(undefined4 *)(*(longlong *)(local_c8 + lVar19) + 0x108) = uVar16;
          }
          lVar18 = *(longlong *)(local_c8 + lVar19);
          if (*(longlong *)(lVar18 + 0x18) != 0) {
            if ((int)local_a0 < 0) {
              *(undefined1 *)(lVar18 + 0x38) = 0;
              lVar18 = *(longlong *)(local_c8 + lVar19);
LAB_14441a657:
              uVar5 = 0;
            }
            else {
              if ((int)local_a0 < *(int *)(*(longlong *)(lVar18 + 0x3a0) + 0x438)) {
                uVar5 = *(undefined1 *)
                         (*(longlong *)(*(longlong *)(lVar18 + 0x3a0) + 0x430) + (ulonglong)local_a0
                         );
              }
              else {
                uVar5 = 0;
              }
              *(undefined1 *)(lVar18 + 0x38) = uVar5;
              lVar18 = *(longlong *)(local_c8 + lVar19);
              if (*(int *)(*(longlong *)(lVar18 + 0x3a0) + 0x448) <= (int)local_a0)
              goto LAB_14441a657;
              uVar5 = *(undefined1 *)
                       (*(longlong *)(*(longlong *)(lVar18 + 0x3a0) + 0x440) + (ulonglong)local_a0);
            }
            *(undefined1 *)(lVar18 + 0x3a) = uVar5;
            *(undefined1 *)(*(longlong *)(local_c8 + lVar19) + 0x39) =
                 *(undefined1 *)(*(longlong *)(*(longlong *)(local_c8 + lVar19) + 0x3a0) + 0x460);
            *(bool *)(*(longlong *)(local_c8 + lVar19) + 0x3b) =
                 *(char *)(*(longlong *)(local_c8 + lVar19) + 0x165) == '\x02';
          }
          lVar19 = lVar19 + 8;
        } while ((longlong)(int)local_c0 * 8 != lVar19);
      }
    }
    else {
LAB_14441a0eb:
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14441a19d;
        while( true ) {
          uVar20 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar20 | 1;
            __tlregdtor(&LAB_144425664);
          }
          lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar19 + 0x310);
          *(undefined8 *)(lVar19 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14441a19d:
          puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar17 + 0x1b);
          uVar20 = puVar10[0x12];
          if (puVar13 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar20 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar20) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar17 + 0x1b);
            uVar20 = 0;
            if (puVar13 <= puVar10 + 0x4000) {
              uVar20 = 1;
              goto LAB_14441a21d;
            }
          }
        }
        uVar20 = uVar20 + 1;
LAB_14441a21d:
        *(uint **)(puVar10 + 0x10) = puVar13;
        puVar10[0x12] = uVar20;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14baa3730;
        puVar17[0x15] = local_c8;
        local_c8 = 0;
        *(int *)(puVar17 + 0x16) = (int)local_c0;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = local_c0._4_4_;
        local_c0 = 0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_b0._4_4_;
        *(undefined4 *)(puVar17 + 0x19) = local_a8;
        *(undefined4 *)((longlong)puVar17 + 0xcc) = local_a4;
        *(uint *)(puVar17 + 0x1a) = local_a0;
        *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar17 + 0xbc) = local_b8._4_4_;
        *(undefined4 *)(puVar17 + 0x18) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_b0._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar20 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
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
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar19 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar19 == 0) {
          uVar4 = 1;
          if ((char)uVar15 != '\x06') {
            uVar4 = uVar15;
          }
          uVar15 = uVar4;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar19 + 0x30);
        }
        puVar17[0xf] = uVar11;
        puVar17[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
        if (puVar17 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
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
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x38,8);
        *local_78 = (longlong)&PTR_LAB_14baa36c0;
        local_78[1] = local_c8;
        local_c8 = 0;
        *(int *)(local_78 + 2) = (int)local_c0;
        *(undefined4 *)((longlong)local_78 + 0x14) = local_c0._4_4_;
        local_c0 = 0;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_b0._4_4_;
        *(undefined4 *)(local_78 + 5) = local_a8;
        *(undefined4 *)((longlong)local_78 + 0x2c) = local_a4;
        *(uint *)(local_78 + 6) = local_a0;
        *(undefined4 *)(local_78 + 3) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_78 + 0x1c) = local_b8._4_4_;
        *(undefined4 *)(local_78 + 4) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_b0._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = FUN_144429cfa;
        }
        local_d8 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FHairStrandsTick_UEnableSimulatedGroups",&DAT_14cbf9104);
        if (local_88[0] != (code *)0x0) {
          plVar12 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar12 = local_68;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
      }
    }
  }
  FUN_145ad6ee2(local_c8,local_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_145ad6ee2(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_144419e48:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14441a6a0 FUN_14441a6a0 body=13569 status=ok
// SIG undefined FUN_14441a6a0(void)

void FUN_14441a6a0(longlong *param_1,undefined1 param_2)

{
  int *piVar1;
  longlong *plVar2;
  void **ppvVar3;
  longlong lVar4;
  bool bVar5;
  code *_Src;
  void *pvVar6;
  byte extraout_AL;
  byte bVar7;
  byte bVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  undefined7 uVar19;
  undefined7 extraout_var;
  void *_Dst;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar20;
  undefined4 uVar21;
  undefined7 uVar23;
  longlong lVar22;
  undefined8 *puVar24;
  bool bVar25;
  int iVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  int iVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  longlong *plVar33;
  longlong *plVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong in_R11;
  ulonglong uVar37;
  int iVar38;
  int iVar39;
  longlong *plVar40;
  size_t _Size;
  bool bVar41;
  undefined1 auStack_228 [32];
  void **local_208;
  void **local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  undefined1 *local_1c8;
  code *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined2 local_19a;
  ulonglong local_198;
  longlong *local_190;
  longlong local_188;
  ulonglong local_180;
  undefined4 local_174;
  ulonglong local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  uint local_150;
  int local_14c;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  void *local_98 [2];
  void *local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_145c58d0a();
  *(undefined2 *)(param_1 + 0xf2) = 0x101;
  FUN_14907faf0(param_1);
  lVar15 = param_1[0xcc];
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0xf8) == 0)) goto LAB_14441cb52;
  param_1[0x10b] = lVar15;
  lVar15 = param_1[0x16];
  if (lVar15 == 0) {
    lVar15 = FUN_1448abda6(param_1);
    if (lVar15 != 0) {
      lVar15 = param_1[0x16];
      if (lVar15 == 0) {
        lVar15 = FUN_1448abda6(param_1);
      }
      goto LAB_14441a718;
    }
LAB_14441a77d:
    local_19a = 0x9b;
  }
  else {
LAB_14441a718:
    if (*(longlong *)(lVar15 + 0x218) == 0) goto LAB_14441a77d;
    lVar15 = param_1[0x16];
    if (lVar15 == 0) {
      lVar15 = FUN_1448abda6(param_1);
    }
    local_19a = *(undefined2 *)
                 (&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(lVar15 + 0x218) + 8) * 2);
  }
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  iVar29 = *(int *)(param_1[0xcc] + 0xf8);
  if (iVar29 < 0) {
LAB_14441d47a:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar29);
  }
  uStack_c0 = 0;
  if (iVar29 == 0) {
    iVar29 = 0;
  }
  else {
    FUN_14475e67c(&local_c8,iVar29);
    do {
      uVar27 = uStack_c0;
      lVar15 = (longlong)(int)uStack_c0;
      uVar11 = (int)uStack_c0 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar11);
      if (uStack_c0._4_4_ < uVar11) {
        FUN_1401c3474(&local_c8,uVar27 & 0xffffffff);
      }
      *(undefined1 *)(local_c8 + lVar15) = 0;
      iVar29 = iVar29 + -1;
    } while (iVar29 != 0);
    iVar29 = *(int *)(param_1[0xcc] + 0xf8);
    if (iVar29 < 0) goto LAB_14441d47a;
  }
  uVar27 = uStack_d0 >> 0x20;
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  if ((int)uVar27 != iVar29) {
    FUN_14475e67c(&local_d8,iVar29);
  }
  if (iVar29 != 0) {
    do {
      uVar27 = uStack_d0;
      lVar15 = (longlong)(int)uStack_d0;
      uVar11 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar11);
      if (uStack_d0._4_4_ < uVar11) {
        FUN_1401c3474(&local_d8,uVar27 & 0xffffffff);
      }
      *(undefined1 *)(local_d8 + lVar15) = 0;
      iVar29 = iVar29 + -1;
    } while (iVar29 != 0);
  }
  iVar29 = *(int *)(param_1[0xcc] + 0xf8);
  if (iVar29 < 0) goto LAB_14441d47a;
  uVar27 = uStack_e0 >> 0x20;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  if ((int)uVar27 != iVar29) {
    FUN_14475e67c(&local_e8,iVar29);
  }
  if (iVar29 != 0) {
    do {
      uVar27 = uStack_e0;
      lVar15 = (longlong)(int)uStack_e0;
      uVar11 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar11);
      if (uStack_e0._4_4_ < uVar11) {
        FUN_1401c3474(&local_e8,uVar27 & 0xffffffff);
      }
      *(undefined1 *)(local_e8 + lVar15) = 0;
      iVar29 = iVar29 + -1;
    } while (iVar29 != 0);
  }
  local_198 = CONCAT71(local_198._1_7_,param_2);
  local_158 = (ulonglong)*(int *)(param_1[0xcc] + 0xf8);
  local_1b8 = param_1;
  if ((longlong)local_158 < 1) {
    uVar37 = 0;
    uVar27 = 0;
    local_1a8 = (longlong *)((ulonglong)local_1a8._4_4_ << 0x20);
    plVar40 = (longlong *)0x0;
    bVar8 = 0;
  }
  else {
    uVar30 = 0;
    bVar8 = 0;
    plVar40 = (longlong *)0x0;
    local_1a8 = (longlong *)((ulonglong)local_1a8._4_4_ << 0x20);
    in_R11 = 0;
    uVar37 = 0;
    do {
      lVar15 = param_1[0xcc];
      if ((longlong)*(int *)(lVar15 + 0x80) == 0) {
        uVar11 = 0xffffffff;
LAB_14441a99f:
        local_180 = (ulonglong)uVar11;
        lVar15 = 0x15;
        local_188 = uVar30 << 4;
        uVar27 = 0;
        local_170 = in_R11;
        do {
          local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,(int)uVar37);
          lVar35 = param_1[0xcc];
          if ((((int)uVar27 < 0 || *(int *)(lVar35 + 0x80) <= (int)uVar30) ||
              (*(int *)(*(longlong *)(lVar35 + 0x78) + 8 + local_188) <= (int)uVar27)) ||
             (*(char *)(*(longlong *)(*(longlong *)(lVar35 + 0x78) + local_188) + lVar15) == '\0'))
          {
            FUN_144b0f89b(0,local_19a);
            lVar35 = param_1[0xcc];
          }
          uVar18 = FUN_149071ca8(lVar35,uVar30 & 0xffffffff,uVar27 & 0xffffffff);
          cVar9 = (char)uVar18;
          uVar19 = (undefined7)((ulonglong)uVar18 >> 8);
          bVar7 = 1;
          uVar37 = local_d8;
          if (*(char *)(local_d8 + uVar30) == '\0') {
            lVar35 = local_1b8[0xcc];
            if (lVar35 == 0) {
              bVar7 = 0;
              uVar19 = 0;
              uVar37 = 0;
            }
            else {
              uVar18 = FUN_149071d40(lVar35,uVar30 & 0xffffffff,uVar27 & 0xffffffff);
              bVar7 = *(byte *)(local_1b8 + 0xd5);
              uVar23 = (undefined7)((ulonglong)lVar35 >> 8);
              uVar37 = CONCAT71(uVar23,bVar7);
              uVar19 = (undefined7)((ulonglong)uVar18 >> 8);
              if (((byte)uVar18 & bVar7) == 1) {
                bVar7 = *(byte *)(local_1b8 + 0xdb);
              }
              else {
                uVar37 = CONCAT71(uVar23,bVar7) ^ 1;
                bVar7 = (byte)uVar18 & (byte)uVar37;
              }
            }
          }
          lVar36 = local_c8;
          *(byte *)(local_d8 + uVar30) = bVar7;
          bVar7 = *(byte *)(local_c8 + uVar30);
          bVar20 = cVar9 != '\x02' | bVar7;
          lVar35 = CONCAT71((int7)(uVar37 >> 8),bVar20);
          if (bVar20 == 0) {
            lVar35 = local_1b8[0xcc];
            FUN_149071dd0(lVar35,uVar30 & 0xffffffff,uVar27 & 0xffffffff);
            bVar7 = extraout_AL;
            uVar19 = extraout_var;
          }
          *(byte *)(lVar36 + uVar30) = bVar7;
          uVar23 = (undefined7)((ulonglong)lVar35 >> 8);
          uVar11 = (uint)CONCAT71(uVar23,1);
          uVar13 = (undefined4)CONCAT71(uVar19,1);
          if (((ulonglong)local_1a8 & 1) == 0) {
            uVar13 = (undefined4)CONCAT71((int7)(local_d8 >> 8),*(undefined1 *)(local_d8 + uVar30));
          }
          local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,uVar13);
          if (((ulonglong)local_1b0 & 1) == 0) {
            uVar11 = (uint)CONCAT71(uVar23,*(undefined1 *)(local_c8 + uVar30));
          }
          plVar40 = (longlong *)(ulonglong)(byte)((byte)plVar40 | cVar9 == '\x01');
          bVar8 = bVar8 | cVar9 == '\x02';
          uVar27 = uVar27 + 1;
          lVar15 = lVar15 + 0x1c;
          uVar37 = (ulonglong)uVar11;
          param_1 = local_1b8;
        } while (local_180 != uVar27);
        lVar15 = local_1b8[0xcc];
        uVar37 = (ulonglong)uVar11;
        in_R11 = local_170;
      }
      else {
        uVar11 = 0xffffffff;
        lVar35 = 0;
        do {
          uVar14 = *(uint *)(*(longlong *)(lVar15 + 0x78) + 8 + lVar35);
          if ((int)uVar11 < (int)uVar14) {
            uVar11 = uVar14;
          }
          lVar35 = lVar35 + 0x10;
        } while ((longlong)*(int *)(lVar15 + 0x80) * 0x10 != lVar35);
        if (uVar11 != 0) goto LAB_14441a99f;
      }
      if ((int)uVar30 < *(int *)(lVar15 + 0x70)) {
        bVar41 = *(char *)(*(longlong *)(lVar15 + 0x68) + 8 + uVar30 * 0x28) == '\x02';
        uVar19 = (undefined7)((ulonglong)*(longlong *)(lVar15 + 0x68) >> 8);
      }
      else {
        bVar41 = false;
        uVar19 = 0;
      }
      *(bool *)(local_e8 + uVar30) = bVar41;
      uVar27 = CONCAT71(uVar19,1);
      if ((in_R11 & 1) == 0) {
        uVar27 = CONCAT71((int7)((ulonglong)local_e8 >> 8),*(undefined1 *)(local_e8 + uVar30));
      }
      uVar30 = uVar30 + 1;
      in_R11 = uVar27 & 0xffffffff;
    } while (uVar30 != local_158);
  }
  uVar30 = CONCAT71((int7)(uVar37 >> 8),(byte)uVar37 | bVar8);
  uVar11 = 2;
  if (*(float *)((longlong)param_1 + 0x87c) < 0.0) {
    uVar11 = (byte)((byte)uVar27 | (byte)local_1a8) & 1;
  }
  *(uint *)((longlong)param_1 + 0x874) = uVar11;
  plVar16 = (longlong *)param_1[0x24];
  if (plVar16 == (longlong *)0x0) {
LAB_14441ac02:
    plVar16 = (longlong *)0x0;
LAB_14441ac05:
    lVar35 = param_1[0xcc];
  }
  else {
    lVar35 = FUN_14081cebe();
    lVar15 = plVar16[2];
    iVar29 = *(int *)(lVar15 + 0x38);
    if ((iVar29 < *(int *)(lVar35 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar35 + 0x38) * 8) !=
        lVar35 + 0x30)) goto LAB_14441ac02;
    if ((uVar37 & 1) == 0 && bVar8 == 0) {
      if (plVar40 != (longlong *)0x0) {
        if (DAT_14cad2858 == 0) {
          local_1d0 = &local_128;
          local_128 = FUN_144a7958c;
          local_1c0 = FUN_14081d0ea;
          local_1c8 = &LAB_146395584;
          local_1d8 = &LAB_147a0ba80;
          local_1e0 = &LAB_14575ccce;
          local_1e8 = L"Engine";
          local_1f0 = 0x40000000000;
          local_1f8 = 0x10000004;
          local_200 = (void **)CONCAT44(local_200._4_4_,0x10);
          local_208 = (void **)CONCAT44(local_208._4_4_,0x1180);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          lVar15 = plVar16[2];
          iVar29 = *(int *)(lVar15 + 0x38);
        }
        if ((*(int *)(DAT_14cad2858 + 0x38) <= iVar29) &&
           (*(longlong *)
             (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
            DAT_14cad2858 + 0x30)) {
          lVar15 = plVar16[0xcb];
          if (lVar15 == 0) {
            lVar15 = plVar16[0xcc];
            param_1 = local_1b8;
            if ((DAT_14c950c29 & lVar15 != 0) != 0) goto LAB_14441da74;
            if (lVar15 != 0) goto LAB_14441b2ee;
LAB_14441d2ef:
            lVar15 = 0;
          }
          else {
            if (DAT_14c950c29 == 1) {
LAB_14441da74:
              FUN_1456cec3c(lVar15);
            }
LAB_14441b2ee:
            if (DAT_14cb06da8 == 0) {
              local_1d0 = &local_128;
              local_128 = FUN_1449e2820;
              local_1c0 = FUN_14081d0ea;
              local_1c8 = &LAB_1464003b0;
              local_1d8 = &LAB_147d17bdf;
              local_1e0 = &LAB_1417edf22;
              local_1e8 = L"Engine";
              local_1f0 = 0;
              local_1f8 = 0x10000000;
              local_200 = (void **)CONCAT44(local_200._4_4_,8);
              local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
            }
            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
            goto LAB_14441d2ef;
          }
          if (lVar15 == 0) {
            plVar16 = (longlong *)0x0;
          }
          goto LAB_14441ac05;
        }
      }
      goto LAB_14441ac02;
    }
    lVar35 = param_1[0xcc];
    lVar36 = param_1[0xd1];
    if (lVar36 != 0 && lVar35 != 0) {
      local_1b0 = (longlong *)CONCAT44(local_1b0._4_4_,(int)uVar30);
      cVar9 = *(char *)((longlong)param_1 + 0x872);
      if (*(char *)(lVar36 + 0x30) == '\0') {
        if (DAT_14cad2858 == 0) {
          local_1d0 = &local_128;
          local_128 = FUN_144a7958c;
          local_1c0 = FUN_14081d0ea;
          local_1c8 = &LAB_146395584;
          local_1d8 = &LAB_147a0ba80;
          local_1e0 = &LAB_14575ccce;
          local_1e8 = L"Engine";
          local_1f0 = 0x40000000000;
          local_1f8 = 0x10000004;
          local_200 = (void **)CONCAT44(local_200._4_4_,0x10);
          local_208 = (void **)CONCAT44(local_208._4_4_,0x1180);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
          lVar15 = plVar16[2];
          iVar29 = *(int *)(lVar15 + 0x38);
        }
        if ((iVar29 < *(int *)(DAT_14cad2858 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
            DAT_14cad2858 + 0x30)) goto LAB_14441cbba;
        if (cVar9 == '\0') goto LAB_14441d1bd;
        iVar29 = (**(code **)(*plVar16 + 0x7b0))(plVar16);
        plVar40 = local_1b0;
        bVar41 = iVar29 < 0xff;
        lVar15 = plVar16[0xcb];
        if (lVar15 == 0) {
          lVar15 = plVar16[0xcc];
          if ((DAT_14c950c29 & lVar15 != 0) != 0) goto LAB_14441da88;
          if (lVar15 != 0) goto LAB_14441cc04;
LAB_14441d32f:
          uVar30 = (ulonglong)plVar40 & 0xffffffff;
          param_1 = local_1b8;
          if (0xfe < iVar29) {
LAB_14441cd1e:
            FUN_1400b22c2(&local_128,&DAT_149e02088);
            if (param_1[0x15] != 0) {
              FUN_1400b22c2(&local_88,L"/Disabled");
              local_78 = *(void **)(param_1[0x15] + 0x18);
              FUN_1400021e4(&local_78,local_98);
              FUN_1401c7f3e(&local_78,local_98,&local_88);
              iVar29 = (int)uStack_70 + -1;
              if ((int)uStack_70 == 0) {
                iVar29 = 0;
              }
              FUN_1400020e8(&local_128,local_78,iVar29);
              if (local_78 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_98[0] != (void *)0x0) {
                FUN_1400020a8();
              }
              param_1 = local_1b8;
              if (local_88 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            local_78 = *(void **)(lVar35 + 0x18);
            FUN_1400021e4(&local_78,&local_88);
            FUN_1400b22c2(local_a8,L"/Disabled");
            local_78 = (void *)param_1[3];
            FUN_1400021e4(&local_78,local_b8);
            FUN_1401c7f3e(local_98,local_b8,local_a8);
            FUN_1401c7f3e(&local_78,local_98,&local_88);
            iVar29 = (int)uStack_70 + -1;
            if ((int)uStack_70 == 0) {
              iVar29 = 0;
            }
            FUN_1400020e8(&local_128,local_78,iVar29);
            if (local_78 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_98[0] != (void *)0x0) {
              FUN_1400020a8();
            }
            param_1 = local_1b8;
            if (local_b8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_a8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_88 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_128 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          if (DAT_14c950c29 == 1) {
LAB_14441da88:
            FUN_1456cec3c(lVar15);
          }
LAB_14441cc04:
          uVar30 = (ulonglong)plVar40 & 0xffffffff;
          if (DAT_14cb06da8 == 0) {
            local_1d0 = &local_128;
            local_128 = FUN_1449e2820;
            local_1c0 = FUN_14081d0ea;
            local_1c8 = &LAB_1464003b0;
            local_1d8 = &LAB_147d17bdf;
            local_1e0 = &LAB_1417edf22;
            local_1e8 = L"Engine";
            local_1f0 = 0;
            local_1f8 = 0x10000000;
            local_200 = (void **)CONCAT44(local_200._4_4_,8);
            local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
          goto LAB_14441d32f;
          plVar40 = (longlong *)plVar16[0xcb];
          if (plVar40 == (longlong *)0x0) {
            plVar40 = (longlong *)plVar16[0xcc];
            if ((DAT_14c950c29 & plVar40 != (longlong *)0x0) != 0) goto LAB_14441dab1;
            uVar30 = (ulonglong)local_1b0 & 0xffffffff;
            if (plVar40 != (longlong *)0x0) goto LAB_14441cc59;
LAB_14441d3af:
            plVar40 = (longlong *)0x0;
          }
          else {
            if (DAT_14c950c29 != 0) {
LAB_14441dab1:
              FUN_1456cec3c(plVar40);
              if (DAT_14cb06da8 == 0) {
                local_1d0 = &local_128;
                local_128 = FUN_1449e2820;
                local_1c0 = FUN_14081d0ea;
                local_1c8 = &LAB_1464003b0;
                local_1d8 = &LAB_147d17bdf;
                local_1e0 = &LAB_1417edf22;
                local_1e8 = L"Engine";
                local_1f0 = 0;
                local_1f8 = 0x10000000;
                local_200 = (void **)CONCAT44(local_200._4_4_,8);
                local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
              }
              uVar30 = (ulonglong)local_1b0 & 0xffffffff;
            }
LAB_14441cc59:
            if ((*(int *)(plVar40[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar40[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
                != DAT_14cb06da8 + 0x30)) goto LAB_14441d3af;
          }
          param_1 = local_1b8;
          lVar15 = (**(code **)(*plVar40 + 0x388))(plVar40);
          if (lVar15 != 0) {
            plVar40 = (longlong *)plVar16[0xcb];
            if (plVar40 == (longlong *)0x0) {
              plVar40 = (longlong *)plVar16[0xcc];
              param_1 = local_1b8;
              if ((DAT_14c950c29 & plVar40 != (longlong *)0x0) != 0) {
                uVar30 = (ulonglong)local_1b0 & 0xffffffff;
                goto LAB_14441db7f;
              }
              uVar30 = (ulonglong)local_1b0 & 0xffffffff;
              if (plVar40 != (longlong *)0x0) goto LAB_14441ccae;
LAB_14441d3e8:
              plVar40 = (longlong *)0x0;
            }
            else {
              if (DAT_14c950c29 == 1) {
LAB_14441db7f:
                FUN_1456cec3c(plVar40);
              }
LAB_14441ccae:
              if (DAT_14cb06da8 == 0) {
                local_1d0 = &local_128;
                local_128 = FUN_1449e2820;
                local_1c0 = FUN_14081d0ea;
                local_1c8 = &LAB_1464003b0;
                local_1d8 = &LAB_147d17bdf;
                local_1e0 = &LAB_1417edf22;
                local_1e8 = L"Engine";
                local_1f0 = 0;
                local_1f8 = 0x10000000;
                local_200 = (void **)CONCAT44(local_200._4_4_,8);
                local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
                FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
              }
              if ((*(int *)(plVar40[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar40[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
                  != DAT_14cb06da8 + 0x30)) goto LAB_14441d3e8;
            }
            plVar40 = (longlong *)(**(code **)(*plVar40 + 0x388))(plVar40);
            if ((int)plVar40[1] != 0) {
              iVar29 = 0;
              do {
                bVar41 = (bool)(bVar41 & *(int *)(*(longlong *)(*plVar40 + (longlong)iVar29 * 8) +
                                                 0x18) < 0xff);
                iVar29 = iVar29 + 1;
              } while ((int)plVar40[1] != iVar29);
            }
          }
          if (!bVar41) goto LAB_14441cd1e;
        }
        plVar40 = (longlong *)plVar16[0xcb];
        if (plVar40 == (longlong *)0x0) {
          plVar40 = (longlong *)plVar16[0xcc];
          param_1 = local_1b8;
          if ((DAT_14c950c29 & plVar40 != (longlong *)0x0) != 0) {
            uVar30 = (ulonglong)local_1b0 & 0xffffffff;
            goto LAB_14441daa1;
          }
          uVar30 = (ulonglong)local_1b0 & 0xffffffff;
          if (plVar40 != (longlong *)0x0) goto LAB_14441cf19;
LAB_14441d376:
          plVar40 = (longlong *)0x0;
        }
        else {
          if (DAT_14c950c29 == 1) {
LAB_14441daa1:
            FUN_1456cec3c(plVar40);
          }
LAB_14441cf19:
          if (DAT_14cb06da8 == 0) {
            local_1d0 = &local_128;
            local_128 = FUN_1449e2820;
            local_1c0 = FUN_14081d0ea;
            local_1c8 = &LAB_1464003b0;
            local_1d8 = &LAB_147d17bdf;
            local_1e0 = &LAB_1417edf22;
            local_1e8 = L"Engine";
            local_1f0 = 0;
            local_1f8 = 0x10000000;
            local_200 = (void **)CONCAT44(local_200._4_4_,8);
            local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          if ((*(int *)(plVar40[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar40[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
              DAT_14cb06da8 + 0x30)) goto LAB_14441d376;
        }
        cVar9 = FUN_1444117f2(plVar40,lVar36,1);
        if (((cVar9 == '\0') || (cVar9 = FUN_144411a1a(lVar35,lVar36,1), cVar9 == '\0')) ||
           (cVar9 = FUN_144411c14(lVar36,local_198 & 0xff,1), cVar9 == '\0')) goto LAB_14441ac02;
        local_1a8 = (longlong *)plVar16[0xcb];
        local_190 = plVar16;
        if (local_1a8 == (longlong *)0x0) {
          local_1a8 = (longlong *)plVar16[0xcc];
          if ((DAT_14c950c29 & local_1a8 != (longlong *)0x0) != 0) goto LAB_14441da5a;
          if (local_1a8 != (longlong *)0x0) goto LAB_14441cfbf;
LAB_14441d469:
          local_1a8 = (longlong *)0x0;
        }
        else {
          if (DAT_14c950c29 == 1) {
LAB_14441da5a:
            FUN_1456cec3c(local_1a8);
          }
LAB_14441cfbf:
          if (DAT_14cb06da8 == 0) {
            local_1d0 = &local_128;
            local_128 = FUN_1449e2820;
            local_1c0 = FUN_14081d0ea;
            local_1c8 = &LAB_1464003b0;
            local_1d8 = &LAB_147d17bdf;
            local_1e0 = &LAB_1417edf22;
            local_1e8 = L"Engine";
            local_1f0 = 0;
            local_1f8 = 0x10000000;
            local_200 = (void **)CONCAT44(local_200._4_4_,8);
            local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          if ((*(int *)(local_1a8[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(local_1a8[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
              != DAT_14cb06da8 + 0x30)) goto LAB_14441d469;
        }
        local_188 = (longlong)*(int *)(lVar35 + 0xf8);
        if (0 < local_188) {
          lVar15 = 0;
          do {
            lVar22 = (longlong)*(int *)(*(longlong *)(lVar35 + 0xf0) + 0x628 + lVar15 * 0x690);
            if (lVar22 != 0) {
              lVar4 = *(longlong *)(*(longlong *)(lVar35 + 0xf0) + 0x620 + lVar15 * 0x690);
              local_180 = lVar22 * 0x390;
              uVar27 = 0;
              plVar40 = (longlong *)(lVar15 * 0x20);
              uVar11 = 0;
              do {
                if ((0 < *(int *)(lVar4 + 0x28 + uVar27)) &&
                   (((param_1 = local_1b8, local_1a8 == (longlong *)0x0 ||
                     (*(int *)(lVar36 + 0x80) <= lVar15)) ||
                    ((*(uint *)(*(longlong *)(lVar36 + 0x78) + 0x18 + (longlong)plVar40) <= uVar11
                     || ((*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar36 + 0x78) + 0x10 + (longlong)plVar40) +
                           (longlong)(int)uVar11 * 8) == 0 ||
                         (iVar29 = (**(code **)(*local_1a8 + 0x3c0))(), param_1 = local_1b8,
                         iVar29 != *(int *)(*(longlong *)
                                             (*(longlong *)
                                               (*(longlong *)(lVar36 + 0x78) + 0x10 +
                                               (longlong)plVar40) + (longlong)(int)uVar11 * 8) + 8))
                         ))))))) goto LAB_14441cbba;
                uVar11 = uVar11 + 1;
                uVar27 = uVar27 + 0x390;
              } while (local_180 != uVar27);
            }
            lVar15 = lVar15 + 1;
          } while (lVar15 != local_188);
        }
        cVar9 = FUN_1490855b4(local_190);
        if (((cVar9 == '\0') && (lVar15 = (**(code **)(*local_190 + 0xa90))(), lVar15 != 0)) &&
           (iVar29 = *(int *)(lVar15 + 8), iVar29 != 0)) {
          iVar38 = 0;
          uVar11 = 0;
          do {
            uVar14 = 1;
            if ((uVar11 & 1) == 0) {
              uVar14 = FUN_1401d3bb0(local_190);
            }
            iVar38 = iVar38 + 1;
            uVar11 = uVar14;
          } while (iVar29 != iVar38);
        }
        plVar16 = local_190;
        iVar29 = *(int *)(lVar35 + 0xf8);
        param_1 = local_1b8;
        if (0 < iVar29) {
          iVar38 = 0;
          do {
            if ((longlong)*(int *)(lVar35 + 0x80) == 0) {
              iVar39 = -1;
LAB_14441d19c:
              iVar26 = 0;
              do {
                FUN_149071ca8(lVar35,iVar38,iVar26);
                iVar26 = iVar26 + 1;
              } while (iVar39 != iVar26);
            }
            else {
              iVar39 = -1;
              lVar15 = 0;
              do {
                iVar26 = *(int *)(*(longlong *)(lVar35 + 0x78) + 8 + lVar15);
                if (iVar39 < iVar26) {
                  iVar39 = iVar26;
                }
                lVar15 = lVar15 + 0x10;
              } while ((longlong)*(int *)(lVar35 + 0x80) * 0x10 != lVar15);
              if (iVar39 != 0) goto LAB_14441d19c;
            }
            iVar38 = iVar38 + 1;
            param_1 = local_1b8;
          } while (iVar38 != iVar29);
        }
LAB_14441d1bd:
        uVar30 = (ulonglong)local_1b0 & 0xffffffff;
        if (param_1[0xd1] != 0) {
          cVar9 = *(char *)(param_1[0xd1] + 0x30);
          if (cVar9 == '\0') {
            if (DAT_14cad2858 == 0) {
              local_1d0 = &local_128;
              local_128 = FUN_144a7958c;
              local_1c0 = FUN_14081d0ea;
              local_1c8 = &LAB_146395584;
              local_1d8 = &LAB_147a0ba80;
              local_1e0 = &LAB_14575ccce;
              local_1e8 = L"Engine";
              local_1f0 = 0x40000000000;
              local_1f8 = 0x10000004;
              local_200 = (void **)CONCAT44(local_200._4_4_,0x10);
              local_208 = (void **)CONCAT44(local_208._4_4_,0x1180);
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if ((*(int *)(plVar16[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
               (plVar33 = plVar16,
               *(longlong *)
                (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
               DAT_14cad2858 + 0x30)) {
              plVar33 = (longlong *)0x0;
            }
            lVar15 = plVar33[0xcb];
            if (lVar15 == 0) {
              lVar15 = plVar33[0xcc];
              param_1 = local_1b8;
              if ((DAT_14c950c29 == 1) && (lVar15 != 0)) {
                uVar30 = (ulonglong)local_1b0 & 0xffffffff;
                goto LAB_14441db95;
              }
              uVar30 = (ulonglong)local_1b0 & 0xffffffff;
              if (lVar15 == 0) goto LAB_14441ac02;
            }
            else if (DAT_14c950c29 == 1) {
LAB_14441db95:
              FUN_1456cec3c(lVar15);
            }
            if (DAT_14cb06da8 == 0) {
              local_1d0 = &local_128;
              local_128 = FUN_1449e2820;
              local_1c0 = FUN_14081d0ea;
              local_1c8 = &LAB_1464003b0;
              local_1d8 = &LAB_147d17bdf;
              local_1e0 = &LAB_1417edf22;
              local_1e8 = L"Engine";
              local_1f0 = 0;
              local_1f8 = 0x10000000;
              local_200 = (void **)CONCAT44(local_200._4_4_,8);
              local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
            }
            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
            goto LAB_14441ac02;
            cVar9 = *(char *)(param_1[0xd1] + 0x30);
          }
          if (cVar9 == '\x01') {
            lVar15 = FUN_1458d5f9a();
            if ((*(int *)(plVar16[2] + 0x38) < *(int *)(lVar15 + 0x38)) ||
               (plVar33 = plVar16,
               *(longlong *)
                (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
               lVar15 + 0x30)) {
              plVar33 = (longlong *)0x0;
            }
            uVar30 = (ulonglong)local_1b0 & 0xffffffff;
            param_1 = local_1b8;
            if (plVar33[0xca] == 0) goto LAB_14441ac02;
          }
        }
      }
      else {
        if (*(char *)(lVar36 + 0x30) == '\x01') {
          lVar15 = FUN_1458d5f9a();
          if ((*(int *)(lVar15 + 0x38) <= *(int *)(plVar16[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
              lVar15 + 0x30)) {
            if (cVar9 != '\0') {
              iVar29 = (**(code **)(*plVar16 + 0x7b0))(plVar16);
              if (0xfe < iVar29) {
                FUN_1400b22c2(&local_128,&DAT_149e02088);
                if (local_1b8[0x15] != 0) {
                  FUN_1400b22c2(&local_88,L"/Disabled");
                  local_78 = *(void **)(local_1b8[0x15] + 0x18);
                  FUN_1400021e4(&local_78,local_98);
                  FUN_1401c7f3e(&local_78,local_98,&local_88);
                  iVar29 = (int)uStack_70 + -1;
                  if ((int)uStack_70 == 0) {
                    iVar29 = 0;
                  }
                  FUN_1400020e8(&local_128,local_78,iVar29);
                  if (local_78 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_98[0] != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_88 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                }
                local_78 = *(void **)(lVar35 + 0x18);
                FUN_1400021e4(&local_78,&local_88);
                FUN_1400b22c2(local_a8,L"/Disabled");
                local_78 = (void *)local_1b8[3];
                FUN_1400021e4(&local_78,local_b8);
                FUN_1401c7f3e(local_98,local_b8,local_a8);
                FUN_1401c7f3e(&local_78,local_98,&local_88);
                iVar29 = (int)uStack_70 + -1;
                if ((int)uStack_70 == 0) {
                  iVar29 = 0;
                }
                FUN_1400020e8(&local_128,local_78,iVar29);
                if (local_78 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_98[0] != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_b8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_a8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_88 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_128 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              plVar40 = (longlong *)plVar16[0xca];
              if ((plVar40 != (longlong *)0x0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c(plVar40);
              }
              cVar9 = FUN_14441190a(plVar40,lVar36,1);
              param_1 = local_1b8;
              if (((cVar9 == '\0') ||
                  (cVar9 = FUN_144411a1a(lVar35,lVar36,1), param_1 = local_1b8, cVar9 == '\0')) ||
                 (cVar9 = FUN_144411c14(lVar36,local_198 & 0xff,1), param_1 = local_1b8,
                 cVar9 == '\0')) goto LAB_14441cbba;
            }
            goto LAB_14441d1bd;
          }
        }
LAB_14441cbba:
        plVar16 = (longlong *)0x0;
        uVar30 = (ulonglong)local_1b0 & 0xffffffff;
      }
      goto LAB_14441ac05;
    }
    plVar16 = (longlong *)0x0;
  }
  plVar33 = param_1;
  local_190 = plVar16;
  if ((lVar35 != 0) && (*(longlong **)(lVar35 + 0xc0) != (longlong *)0x0)) {
    lVar15 = (**(code **)(**(longlong **)(lVar35 + 0xc0) + 0x3f8))();
    param_1[0x10d] = 0;
    if (param_1 != (longlong *)0x0) {
      plVar40 = &DAT_14cb06da8;
      do {
        if (DAT_14cad2858 == 0) {
          local_128 = FUN_144a7958c;
          local_1c0 = FUN_14081d0ea;
          local_1c8 = &LAB_146395584;
          local_1d0 = &local_128;
          local_1d8 = &LAB_147a0ba80;
          local_1e0 = &LAB_14575ccce;
          local_1e8 = L"Engine";
          local_1f0 = 0x40000000000;
          local_1f8 = 0x10000004;
          local_200 = (void **)CONCAT44(local_200._4_4_,0x10);
          local_208 = (void **)CONCAT44(local_208._4_4_,0x1180);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
            DAT_14cad2858 + 0x30)) {
          lVar35 = param_1[0xcb];
          if (lVar35 == 0) {
            lVar35 = param_1[0xcc];
            if ((DAT_14c950c29 == 1) && (lVar35 != 0)) goto LAB_14441aece;
            if (lVar35 != 0) goto LAB_14441acb5;
          }
          else {
            if (DAT_14c950c29 == 1) {
LAB_14441aece:
              FUN_1456cec3c(lVar35);
            }
LAB_14441acb5:
            if (DAT_14cb06da8 == 0) {
              local_128 = FUN_1449e2820;
              local_1c0 = FUN_14081d0ea;
              local_1c8 = &LAB_1464003b0;
              local_1d0 = &local_128;
              local_1d8 = &LAB_147d17bdf;
              local_1e0 = &LAB_1417edf22;
              local_1e8 = L"Engine";
              local_1f0 = 0;
              local_1f8 = 0x10000000;
              local_200 = (void **)CONCAT44(local_200._4_4_,8);
              local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
            }
            if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar35 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar35 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
              plVar33 = (longlong *)param_1[0xcb];
              if (plVar33 == (longlong *)0x0) {
                plVar33 = (longlong *)param_1[0xcc];
                if ((DAT_14c950c29 == 1) && (plVar33 != (longlong *)0x0)) goto LAB_14441aedb;
                if (plVar33 != (longlong *)0x0) goto LAB_14441acf9;
LAB_14441ad84:
                plVar33 = (longlong *)0x0;
              }
              else {
                if (DAT_14c950c29 != 0) {
LAB_14441aedb:
                  FUN_1456cec3c(plVar33);
                  plVar16 = local_190;
                  if (DAT_14cb06da8 == 0) {
                    local_128 = FUN_1449e2820;
                    local_1c0 = FUN_14081d0ea;
                    local_1c8 = &LAB_1464003b0;
                    local_1d0 = &local_128;
                    local_1d8 = &LAB_147d17bdf;
                    local_1e0 = &LAB_1417edf22;
                    local_1e8 = L"Engine";
                    local_1f0 = 0;
                    local_1f8 = 0x10000000;
                    local_200 = (void **)CONCAT44(local_200._4_4_,8);
                    local_208 = (void **)CONCAT44(local_208._4_4_,0x588);
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                    plVar16 = local_190;
                  }
                }
LAB_14441acf9:
                if ((*(int *)(plVar33[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar33[2] + 0x30) +
                     (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
                goto LAB_14441ad84;
              }
              lVar35 = (**(code **)(*plVar33 + 0x3f8))(plVar33);
              if (lVar35 == lVar15) {
                local_1b8[0x10d] = (longlong)param_1;
                goto LAB_14441b339;
              }
            }
          }
        }
        param_1 = (longlong *)param_1[0x24];
      } while (param_1 != (longlong *)0x0);
      param_1 = (longlong *)local_1b8[0x10d];
      plVar33 = local_1b8;
      if (param_1 != (longlong *)0x0) {
LAB_14441b339:
        plVar33 = local_1b8;
        (**(code **)(*local_1b8 + 0x440))(local_1b8,param_1);
      }
    }
  }
  if (plVar16 == (longlong *)0x0) {
LAB_14441b497:
    iVar29 = *(int *)(plVar33[0xcc] + 0xf8);
    if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar29);
    }
    uVar27 = uStack_c0 >> 0x20;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    if ((int)uVar27 != iVar29) {
      FUN_14475e67c(&local_c8,iVar29);
    }
    in_R11 = CONCAT71((int7)(in_R11 >> 8),1);
    if (iVar29 == 0) {
      local_198 = 0;
      uVar27 = local_198;
    }
    else {
      local_198 = 0;
      do {
        uVar27 = uStack_c0;
        lVar15 = (longlong)(int)uStack_c0;
        uVar11 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar11);
        if (uStack_c0._4_4_ < uVar11) {
          FUN_1401c3474(&local_c8,uVar27 & 0xffffffff);
          in_R11 = CONCAT71((int7)(in_R11 >> 8),1);
        }
        *(undefined1 *)(local_c8 + lVar15) = 0;
        iVar29 = iVar29 + -1;
        uVar27 = local_198;
      } while (iVar29 != 0);
    }
  }
  else {
    plVar33[0x10c] = (longlong)plVar16;
    (**(code **)(*plVar33 + 0x440))(plVar33,plVar16);
    *(byte *)((longlong)plVar33 + 0x1f9) = *(byte *)((longlong)plVar33 + 0x1f9) & 0xdf;
    if (((uVar30 & 1) == 0) || (uVar27 = plVar33[0xd1], uVar27 == 0)) goto LAB_14441b497;
    lVar15 = 0;
    if ((*(int *)(uVar27 + 0x80) == *(int *)(plVar33[0xcc] + 0xf8)) &&
       (lVar15 = uVar27, 0 < DAT_14c7649e0)) {
      in_R11 = 0;
      if (*(uint *)(uVar27 + 0x80) != 0) {
        lVar35 = *(longlong *)(plVar33[0xcc] + 0x100);
        do {
          iVar29 = (int)in_R11;
          lVar36 = (longlong)iVar29 * 0x58;
          plVar34 = (longlong *)((longlong)iVar29 * 0x20 + *(longlong *)(uVar27 + 0x78));
          if (((*(longlong *)(lVar35 + lVar36) != 0) &&
              ((*plVar34 == 0 || (*(int *)(*plVar34 + 8) == 0)))) ||
             ((lVar36 = lVar36 + lVar35, *(longlong *)(lVar36 + 8) != 0 &&
              ((plVar34[1] == 0 || (*(int *)(plVar34[1] + 8) == 0)))))) goto LAB_14441b497;
          uVar11 = *(uint *)(lVar36 + 0x38);
          if (0 < (int)uVar11) {
            if (uVar11 != *(uint *)(plVar34 + 3)) goto LAB_14441b497;
            plVar32 = *(longlong **)(lVar36 + 0x30);
            bVar41 = true;
            uVar37 = 0;
            do {
              if (*plVar32 != 0) {
                if ((bVar41) && (lVar36 = *(longlong *)(plVar34[2] + uVar37 * 8), lVar36 != 0)) {
                  bVar41 = *(int *)(lVar36 + 8) != 0;
                }
                else {
                  bVar41 = false;
                }
              }
              uVar37 = uVar37 + 1;
              plVar32 = plVar32 + 6;
            } while (uVar11 != uVar37);
            if (!bVar41) goto LAB_14441b497;
          }
          in_R11 = (ulonglong)(iVar29 + 1U);
        } while (iVar29 + 1U != *(uint *)(uVar27 + 0x80));
        goto LAB_14441b482;
      }
    }
    else {
LAB_14441b482:
      if (lVar15 == 0) goto LAB_14441b497;
      in_R11 = 0;
      uVar27 = lVar15;
    }
  }
  local_198 = uVar27;
  cVar9 = DAT_14c7649dc;
  local_168 = in_R11;
  if (plVar33[0xcd] == 0) {
    plVar33[0x107] = 0;
    plVar34 = (longlong *)plVar33[0x108];
    if (plVar34 != (longlong *)0x0) {
      plVar33[0x108] = 0;
      LOCK();
      plVar32 = plVar34 + 1;
      *(int *)plVar32 = (int)*plVar32 + -1;
      UNLOCK();
      if ((int)*plVar32 == 0) {
        (**(code **)*plVar34)(plVar34);
        LOCK();
        piVar1 = (int *)((longlong)plVar34 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
        }
      }
    }
  }
  else {
    if (DAT_14c7649dc == '\x01') {
      plVar34 = (longlong *)FUN_14001cc68(0x98,0x10);
      FUN_14908c232(plVar34,plVar33 + 0xcd);
      plVar33 = plVar34 + 2;
      if (plVar34 == (longlong *)0x0) goto LAB_14441b5fb;
      LOCK();
      *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
      UNLOCK();
LAB_14441b602:
      LOCK();
      *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
      UNLOCK();
      bVar41 = false;
    }
    else {
      plVar34 = (longlong *)FUN_14001cc68(0x88,0x10);
      FUN_14908c4b0(plVar34,plVar33 + 0xcd);
      plVar33 = plVar34 + 2;
      if (plVar34 != (longlong *)0x0) goto LAB_14441b602;
LAB_14441b5fb:
      bVar41 = true;
      plVar34 = (longlong *)0x0;
    }
    local_1b8[0x107] = (longlong)plVar33;
    plVar33 = (longlong *)local_1b8[0x108];
    if (plVar34 == plVar33) {
      if (plVar34 != (longlong *)0x0) {
        LOCK();
        plVar33 = plVar34 + 1;
        *(int *)plVar33 = (int)*plVar33 + -1;
        UNLOCK();
        if ((int)*plVar33 == 0) {
          (**(code **)*plVar34)(plVar34);
          LOCK();
          piVar1 = (int *)((longlong)plVar34 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar29 = *piVar1;
          UNLOCK();
          plVar33 = plVar34;
joined_r0x00014441b65c:
          if (iVar29 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
    }
    else {
      local_1b8[0x108] = (longlong)plVar34;
      if (plVar33 != (longlong *)0x0) {
        LOCK();
        plVar32 = plVar33 + 1;
        *(int *)plVar32 = (int)*plVar32 + -1;
        UNLOCK();
        if ((int)*plVar32 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar1 = (int *)((longlong)plVar33 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar29 = *piVar1;
          UNLOCK();
          goto joined_r0x00014441b65c;
        }
      }
    }
    if (!bVar41) {
      LOCK();
      plVar33 = plVar34 + 1;
      *(int *)plVar33 = (int)*plVar33 + -1;
      UNLOCK();
      if ((int)*plVar33 == 0) {
        (**(code **)*plVar34)(plVar34);
        LOCK();
        piVar1 = (int *)((longlong)plVar34 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
        }
      }
    }
    plVar33 = local_1b8;
    if (plVar34 != (longlong *)0x0 && cVar9 == '\x01') {
      LOCK();
      plVar32 = plVar34 + 1;
      *(int *)plVar32 = (int)*plVar32 + -1;
      UNLOCK();
      if ((int)*plVar32 == 0) {
        (**(code **)*plVar34)(plVar34);
        LOCK();
        piVar1 = (int *)((longlong)plVar34 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar34 + 0x10))(plVar34);
        }
      }
    }
    FUN_149082792(plVar33,*(undefined4 *)((longlong)plVar33 + 0x834));
  }
  if (0 < (longlong)*(int *)(plVar33[0xcc] + 0xf8)) {
    local_148 = plVar33 + 0x109;
    local_140 = plVar33 + 0x48;
    local_150 = (uint)(local_198 != 0) * 2;
    plVar34 = (longlong *)0x0;
    local_138 = (longlong *)(longlong)*(int *)(plVar33[0xcc] + 0xf8);
    do {
      plVar32 = local_138;
      _Dst = (void *)FUN_14001cc68(0x3d0);
      memset(_Dst,0,0x3d0);
      FUN_149082870(_Dst);
      if (_Dst != (void *)0x0) {
        LOCK();
        *(int *)((longlong)_Dst + 8) = *(int *)((longlong)_Dst + 8) + 1;
        UNLOCK();
      }
      iVar29 = (int)plVar33[0x10a];
      *(uint *)(plVar33 + 0x10a) = iVar29 + 1U;
      if (*(uint *)((longlong)plVar33 + 0x854) < iVar29 + 1U) {
        FUN_14908c55a(local_148,iVar29);
      }
      *(void **)(plVar33[0x109] + (longlong)iVar29 * 8) = _Dst;
      *(int *)((longlong)_Dst + 0x130) = (int)plVar34;
      *(int *)((longlong)_Dst + 0x134) = (int)plVar32;
      lVar15 = plVar33[0xcc];
      *(undefined4 *)((longlong)_Dst + 0x14c) = *(undefined4 *)(lVar15 + 0x124);
      local_78 = *(void **)(lVar15 + 0x18);
      FUN_1400021e4(&local_78,&local_128);
      if (*(longlong *)((longlong)_Dst + 0x138) != 0) {
        FUN_1400020a8();
      }
      *(code **)((longlong)_Dst + 0x138) = local_128;
      local_128 = (void *)0x0;
      *(int *)((longlong)_Dst + 0x140) = (int)uStack_120;
      *(uint *)((longlong)_Dst + 0x144) = uStack_120._4_4_;
      *(longlong *)((longlong)_Dst + 0x188) = plVar33[0x10c];
      *(longlong **)((longlong)_Dst + 400) = plVar33;
      lVar15 = plVar33[0xd1];
      if (lVar15 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined1 *)(lVar15 + 0x30);
      }
      *(undefined1 *)((longlong)_Dst + 0x164) = uVar10;
      uVar13 = 0;
      cVar9 = '\0';
      if ((plVar33[0xcc] != 0 && plVar33[0xcd] != 0) &&
         (cVar9 = *(char *)(plVar33[0xcd] + 0x54), cVar9 == '\x02')) {
        cVar9 = *(char *)(plVar33[0xcc] + 0xb9) * '\x02';
      }
      *(char *)((longlong)_Dst + 0x165) = cVar9;
      if (lVar15 != 0) {
        uVar13 = *(undefined4 *)(lVar15 + 0xb4);
      }
      *(undefined4 *)((longlong)_Dst + 0x150) = uVar13;
      lVar15 = plVar33[0x107];
      lVar35 = plVar33[0x108];
      if (lVar35 != 0) {
        LOCK();
        *(int *)(lVar35 + 8) = *(int *)(lVar35 + 8) + 1;
        UNLOCK();
      }
      plVar32 = *(longlong **)((longlong)_Dst + 0x328);
      *(longlong *)((longlong)_Dst + 800) = lVar15;
      *(longlong *)((longlong)_Dst + 0x328) = lVar35;
      if (plVar32 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar32 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar32)(plVar32);
          LOCK();
          piVar1 = (int *)((longlong)plVar32 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar32 + 0x10))(plVar32);
          }
        }
      }
      *(undefined4 *)((longlong)_Dst + 0x158) = *(undefined4 *)((longlong)plVar33 + 0x87c);
      *(int *)((longlong)_Dst + 0x154) = (int)plVar33[0x10f];
      *(undefined4 *)((longlong)_Dst + 0x15c) = *(undefined4 *)((longlong)plVar33 + 0x874);
      *(longlong *)((longlong)_Dst + 0x3b8) = plVar33[0x10d];
      lVar15 = plVar33[0xcc];
      uVar13 = 0xffffffff;
      if ((longlong)plVar34 < (longlong)*(int *)(lVar15 + 0xd0)) {
        uVar13 = *(undefined4 *)(*(longlong *)(lVar15 + 200) + (longlong)plVar34 * 4);
      }
      uVar21 = 0;
      *(undefined4 *)((longlong)_Dst + 0x3c0) = uVar13;
      if (plVar16 != (longlong *)0x0) {
        uVar21 = (undefined4)plVar16[0x7a];
      }
      *(undefined4 *)((longlong)_Dst + 0x180) = uVar21;
      *(undefined4 *)((longlong)_Dst + 0x184) = 0xffffffff;
      if (plVar33[0x10c] == 0) {
        lVar35 = 0;
      }
      else {
        local_128 = (void *)0x0;
        uStack_120 = 0;
        FUN_1401031ac(plVar33[0x10c],0,&local_128);
        if (*(longlong *)((longlong)_Dst + 0x170) != 0) {
          FUN_1400020a8();
        }
        *(code **)((longlong)_Dst + 0x170) = local_128;
        local_128 = (void *)0x0;
        *(int *)((longlong)_Dst + 0x178) = (int)uStack_120;
        *(uint *)((longlong)_Dst + 0x17c) = uStack_120._4_4_;
        lVar15 = plVar33[0xcc];
        lVar35 = plVar33[0x10c];
      }
      *(undefined8 *)((longlong)_Dst + 0x3a8) = 3;
      puVar24 = (undefined8 *)(lVar35 + 0x240);
      if (lVar35 == 0) {
        puVar24 = &DAT_14c846480;
      }
      puVar28 = puVar24;
      puVar31 = (undefined8 *)((longlong)_Dst + 0x200);
      for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
        *puVar31 = *puVar28;
        puVar28 = puVar28 + 1;
        puVar31 = puVar31 + 1;
      }
      memmove((void *)((longlong)_Dst + 0x2c0),puVar24,0x60);
      plVar16 = local_140;
      plVar32 = (longlong *)((longlong)_Dst + 0x1a0);
      for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
        *plVar32 = *plVar16;
        plVar16 = plVar16 + 1;
        plVar32 = plVar32 + 1;
      }
      plVar16 = local_140;
      plVar32 = (longlong *)((longlong)_Dst + 0x260);
      for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
        *plVar32 = *plVar16;
        plVar16 = plVar16 + 1;
        plVar32 = plVar32 + 1;
      }
      plVar16 = local_140;
      plVar32 = (longlong *)((longlong)_Dst + 0x340);
      for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
        *plVar32 = *plVar16;
        plVar16 = plVar16 + 1;
        plVar32 = plVar32 + 1;
      }
      local_1a8 = (longlong *)((longlong)plVar34 * 0x690 + *(longlong *)(lVar15 + 0xf0));
      local_180 = (longlong)plVar34 * 0x58 + *(longlong *)(lVar15 + 0x100);
      bVar8 = *(char *)(lVar15 + 0xba) - 2;
      local_174 = 0;
      if (bVar8 < 7) {
        local_174 = (&DAT_14baa3d0c)[bVar8];
      }
      local_98[0] = (void *)0x0;
      puVar24 = (undefined8 *)FUN_14001cc68(0x500,0x10);
      FUN_14716d3c2(puVar24,(ulonglong)plVar34 & 0xffffffff,local_98);
      *(undefined8 **)((longlong)_Dst + 0x3a0) = puVar24;
      *puVar24 = _Dst;
      *(undefined1 *)(puVar24 + 0x9d) = *(undefined1 *)((longlong)plVar33 + 0x873);
      *(undefined4 *)((longlong)puVar24 + 0x4ec) = 0;
      FUN_14907f4f0(&local_128,(ulonglong)plVar34 & 0xffffffff);
      lVar15 = *(longlong *)((longlong)_Dst + 0x3a0);
      *(undefined4 *)(lVar15 + 0x4f0) = (undefined4)local_128;
      *(undefined4 *)(lVar15 + 0x4f4) = local_128._4_4_;
      *(int *)(lVar15 + 0x4f8) = (int)uStack_120;
      *(uint *)(lVar15 + 0x4fc) = uStack_120._4_4_;
      local_128 = (code *)0x0;
      uStack_120 = 0;
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_88 = (void *)0x0;
      uStack_80 = 0;
      local_160 = (longlong)plVar34 * 0x10;
      local_14c = *(int *)(*(longlong *)(plVar33[0xcc] + 0x78) + 8 + local_160);
      iVar29 = 0;
      local_1b0 = plVar34;
      if (local_14c == 0) {
        uVar11 = 0;
      }
      else {
        local_130 = (longlong *)(*(longlong *)(plVar33[0xcc] + 0x78) + local_160);
        lVar15 = 0x15;
        uVar11 = 0;
        do {
          plVar16 = local_1b0;
          local_188 = CONCAT44(local_188._4_4_,uVar11);
          lVar35 = (longlong)iVar29 * 0x1c + *local_130;
          iVar38 = (int)local_1b0;
          cVar9 = FUN_149071ca8(plVar33[0xcc],(ulonglong)local_1b0 & 0xffffffff);
          if (cVar9 == '\x01') {
            uVar11 = (uint)(plVar33[0x10c] != 0);
          }
          else {
            uVar11 = local_150;
            if (cVar9 != '\x02') {
              uVar11 = 0;
            }
          }
          if ((iVar29 < 0 || *(int *)(plVar33[0xcc] + 0x80) <= iVar38) ||
             (lVar36 = *(longlong *)(plVar33[0xcc] + 0x78),
             *(int *)(lVar36 + 8 + local_160) <= iVar29)) {
LAB_14441bc35:
            lVar36 = plVar33[0x106];
            uVar14 = 0;
            cVar9 = FUN_144b0f89b(0,local_19a);
            if (((char)lVar36 != '\0') ||
               (uVar18 = CONCAT71((int7)((ulonglong)plVar40 >> 8),1), cVar9 == '\0')) {
LAB_14441bc59:
              uVar14 = 1;
              goto LAB_14441bc5e;
            }
          }
          else {
            bVar8 = *(byte *)(*(longlong *)(lVar36 + local_160) + lVar15);
            uVar14 = (uint)bVar8;
            if (bVar8 != 2) {
              if (bVar8 == 1) goto LAB_14441bc59;
              plVar33 = local_1b8;
              if (bVar8 == 0) goto LAB_14441bc35;
              uVar14 = 3;
            }
LAB_14441bc5e:
            uVar18 = 0;
          }
          local_170 = CONCAT44(local_170._4_4_,(int)uVar18);
          if (local_1b8[0xcc] == 0) {
            plVar40 = (longlong *)0x0;
          }
          else {
            uVar17 = FUN_149071d40(local_1b8[0xcc],(ulonglong)plVar16 & 0xffffffff,iVar29);
            if (((byte)uVar17 & *(byte *)(local_1b8 + 0xd5)) == 1) {
              plVar40 = (longlong *)CONCAT71((int7)((ulonglong)uVar18 >> 8),(char)local_1b8[0xdb]);
            }
            else {
              plVar40 = (longlong *)
                        (CONCAT71((int7)((ulonglong)uVar17 >> 8),
                                  (byte)uVar17 & (*(byte *)(local_1b8 + 0xd5) ^ 1)) & 0xffffffff);
            }
          }
          uVar13 = 0;
          if ((local_198 != 0) && (uVar11 == 2)) {
            uVar13 = FUN_149071dd0(local_1b8[0xcc],(ulonglong)plVar16 & 0xffffffff,iVar29);
          }
          uVar27 = uStack_120;
          local_158 = CONCAT44(local_158._4_4_,uVar13);
          lVar36 = (longlong)(int)uStack_120;
          uVar12 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar12);
          if (uStack_120._4_4_ < uVar12) {
            FUN_14475e4ac(&local_128,uVar27 & 0xffffffff);
          }
          uVar27 = uStack_70;
          *(undefined4 *)(local_128 + lVar36 * 4) = *(undefined4 *)(lVar35 + 0xc);
          lVar36 = (longlong)(int)uStack_70;
          uVar12 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar12);
          if (uStack_70._4_4_ < uVar12) {
            FUN_1401c3474(&local_78,uVar27 & 0xffffffff);
          }
          uVar27 = uStack_80;
          *(undefined1 *)((longlong)local_78 + lVar36) = *(undefined1 *)(lVar35 + 0x14);
          lVar35 = (longlong)(int)uStack_80;
          uVar12 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar12);
          if (uStack_80._4_4_ < uVar12) {
            FUN_14908c5e0(&local_88,uVar27 & 0xffffffff);
          }
          *(uint *)((longlong)local_88 + lVar35 * 4) = uVar14;
          lVar35 = *(longlong *)((longlong)_Dst + 0x3a0);
          iVar38 = *(int *)(lVar35 + 0x470);
          *(uint *)(lVar35 + 0x470) = iVar38 + 1U;
          if (*(uint *)(lVar35 + 0x474) < iVar38 + 1U) {
            FUN_14908c666((longlong *)(lVar35 + 0x468),iVar38);
          }
          *(uint *)(*(longlong *)(lVar35 + 0x468) + (longlong)iVar38 * 4) = uVar11;
          lVar35 = *(longlong *)((longlong)_Dst + 0x3a0);
          iVar38 = *(int *)(lVar35 + 0x438);
          *(uint *)(lVar35 + 0x438) = iVar38 + 1U;
          if (*(uint *)(lVar35 + 0x43c) < iVar38 + 1U) {
            FUN_1401c3474((longlong *)(lVar35 + 0x430),iVar38);
          }
          lVar36 = local_188;
          *(char *)(*(longlong *)(lVar35 + 0x430) + (longlong)iVar38) = (char)plVar40;
          lVar35 = *(longlong *)((longlong)_Dst + 0x3a0);
          iVar38 = *(int *)(lVar35 + 0x448);
          *(uint *)(lVar35 + 0x448) = iVar38 + 1U;
          if (*(uint *)(lVar35 + 0x44c) < iVar38 + 1U) {
            FUN_1401c3474((longlong *)(lVar35 + 0x440),iVar38);
          }
          uVar11 = CONCAT31((int3)((ulonglong)lVar36 >> 8),(byte)lVar36 | (byte)local_170);
          *(char *)(*(longlong *)(lVar35 + 0x440) + (longlong)iVar38) = (char)local_158;
          iVar29 = iVar29 + 1;
          lVar15 = lVar15 + 0x1c;
          plVar33 = local_1b8;
        } while (local_14c != iVar29);
      }
      _Src = local_128;
      *(bool *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x461) =
           *(char *)((longlong)_Dst + 0x165) == '\x02';
      if ((int)local_1b0 < *(int *)(plVar33[0xcc] + 0x70)) {
        bVar41 = *(char *)(*(longlong *)(plVar33[0xcc] + 0x68) + 8 + (longlong)local_1b0 * 0x28) ==
                 '\x02';
      }
      else {
        bVar41 = false;
      }
      *(bool *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x460) = bVar41;
      lVar15 = *(longlong *)((longlong)_Dst + 0x3a0);
      puVar24 = (undefined8 *)(lVar15 + 0x420);
      if (puVar24 != &local_128) {
        iVar29 = (int)uStack_120;
        lVar35 = (longlong)(int)uStack_120;
        *(int *)(lVar15 + 0x428) = (int)uStack_120;
        if ((int)uStack_120 == 0 && *(int *)(lVar15 + 0x42c) == 0) {
          *(undefined4 *)(lVar15 + 0x42c) = 0;
        }
        else {
          FUN_1447c510a(puVar24,uStack_120 & 0xffffffff);
          if (iVar29 != 0) {
            memcpy((void *)*puVar24,_Src,lVar35 << 2);
          }
        }
      }
      pvVar6 = local_78;
      lVar15 = *(longlong *)((longlong)_Dst + 0x3a0);
      ppvVar3 = (void **)(lVar15 + 0x410);
      if (ppvVar3 != &local_78) {
        iVar29 = (int)uStack_70;
        _Size = (size_t)(int)uStack_70;
        *(int *)(lVar15 + 0x418) = (int)uStack_70;
        if ((int)uStack_70 == 0 && *(int *)(lVar15 + 0x41c) == 0) {
          *(undefined4 *)(lVar15 + 0x41c) = 0;
        }
        else {
          FUN_1447cd5fa(ppvVar3,uStack_70 & 0xffffffff);
          if (iVar29 != 0) {
            memcpy(*ppvVar3,pvVar6,_Size);
          }
        }
      }
      pvVar6 = local_88;
      lVar15 = *(longlong *)((longlong)_Dst + 0x3a0);
      ppvVar3 = (void **)(lVar15 + 0x450);
      if (ppvVar3 != &local_88) {
        iVar29 = (int)uStack_80;
        lVar35 = (longlong)(int)uStack_80;
        *(int *)(lVar15 + 0x458) = (int)uStack_80;
        if ((int)uStack_80 == 0 && *(int *)(lVar15 + 0x45c) == 0) {
          *(undefined4 *)(lVar15 + 0x45c) = 0;
        }
        else {
          FUN_1490856be(ppvVar3,uStack_80 & 0xffffffff);
          if (iVar29 != 0) {
            memcpy(*ppvVar3,pvVar6,lVar35 << 2);
          }
        }
      }
      cVar9 = *(char *)(plVar33[0xcc] + 0x30);
      if (cVar9 == '\0') {
        iVar29 = FUN_147430e74();
        cVar9 = '\x02' - (iVar29 == 0);
      }
      plVar40 = local_1b0;
      *(bool *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x485) = cVar9 == '\x02';
      *(undefined4 *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x488) =
           *(undefined4 *)(plVar33[0xcc] + 0x34);
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_128 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (((*(int *)((longlong)local_1a8 + 0xc) == 0) ||
          (((*(char *)(local_d8 + (longlong)plVar40) == '\0' &&
            (*(char *)(local_c8 + (longlong)plVar40) == '\0')) &&
           (*(char *)(local_e8 + (longlong)plVar40) == '\0')))) &&
         (*(char *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x461) == '\0')) {
        bVar41 = false;
      }
      else {
        if ((char)local_168 == '\0') {
          uVar18 = *(undefined8 *)(*(longlong *)(local_198 + 0x78) + (longlong)plVar40 * 0x20);
          *(undefined8 *)((longlong)_Dst + 0x28) = uVar18;
          uVar17 = FUN_14001cc68(0x18,0x10);
          local_208 = local_98;
          FUN_14909194e(uVar17,uVar18,0,&local_78);
          *(undefined8 *)((longlong)_Dst + 0x30) = uVar17;
        }
        uVar18 = FUN_149071720(plVar33[0xcc],(ulonglong)plVar40 & 0xffffffff);
        *(undefined8 *)((longlong)_Dst + 0x18) = uVar18;
        uVar18 = FUN_14001cc68(0x198,0x10);
        local_208 = local_98;
        bVar8 = 0;
        FUN_14908f1ea(uVar18,local_1a8,0,&local_78);
        *(undefined8 *)((longlong)_Dst + 0x20) = uVar18;
        if (plVar33[0xcc] != 0) {
          bVar8 = FUN_149071d40(plVar33[0xcc],(ulonglong)plVar40 & 0xffffffff,0xffffffff);
          if ((bVar8 & *(byte *)(plVar33 + 0xd5)) == 1) {
            bVar8 = *(byte *)(plVar33 + 0xdb);
          }
          else {
            bVar8 = bVar8 & (*(byte *)(plVar33 + 0xd5) ^ 1);
          }
        }
        *(byte *)((longlong)_Dst + 0x38) = bVar8;
        lVar15 = plVar33[0xcc];
        if ((char)local_168 == '\0') {
          uVar10 = *(undefined1 *)(lVar15 + 0xb8);
        }
        else {
          uVar10 = 0;
        }
        *(undefined1 *)((longlong)_Dst + 0x3a) = uVar10;
        if ((int)plVar40 < *(int *)(lVar15 + 0x70)) {
          bVar41 = *(char *)(*(longlong *)(lVar15 + 0x68) + 8 + (longlong)plVar40 * 0x28) == '\x02';
        }
        else {
          bVar41 = false;
        }
        *(bool *)((longlong)_Dst + 0x39) = bVar41;
        *(undefined1 *)((longlong)_Dst + 0x3b) =
             *(undefined1 *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x461);
        bVar41 = true;
      }
      FUN_14441e31f(&local_128);
      *(undefined4 *)((longlong)_Dst + 0xe8) = local_f8;
      *(undefined4 *)((longlong)_Dst + 0xec) = uStack_f4;
      *(undefined4 *)((longlong)_Dst + 0xf0) = uStack_f0;
      *(undefined4 *)((longlong)_Dst + 0xf4) = uStack_ec;
      *(undefined4 *)((longlong)_Dst + 0xd8) = local_108;
      *(undefined4 *)((longlong)_Dst + 0xdc) = uStack_104;
      *(undefined4 *)((longlong)_Dst + 0xe0) = uStack_100;
      *(undefined4 *)((longlong)_Dst + 0xe4) = uStack_fc;
      *(undefined4 *)((longlong)_Dst + 200) = local_118;
      *(undefined4 *)((longlong)_Dst + 0xcc) = uStack_114;
      *(undefined4 *)((longlong)_Dst + 0xd0) = uStack_110;
      *(undefined4 *)((longlong)_Dst + 0xd4) = uStack_10c;
      *(undefined4 *)((longlong)_Dst + 0xb8) = (undefined4)local_128;
      *(undefined4 *)((longlong)_Dst + 0xbc) = local_128._4_4_;
      *(int *)((longlong)_Dst + 0xc0) = (int)uStack_120;
      *(uint *)((longlong)_Dst + 0xc4) = uStack_120._4_4_;
      if (((uVar11 & 1) != 0) && (*(int *)((longlong)local_1a8 + 0x24c) != 0)) {
        *(int *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x3f8) =
             *(int *)((longlong)local_1a8 + 0x24c);
        *(int *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x3fc) = (int)local_1a8[0x49];
        *(undefined4 *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x400) = 0;
        *(undefined4 *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x404) = 0;
        if (bVar41) {
          uVar18 = FUN_149071840(plVar33[0xcc]);
          *(undefined8 *)((longlong)_Dst + 0x50) = uVar18;
        }
        uVar27 = (ulonglong)*(uint *)(*(longlong *)(plVar33[0xcc] + 0x78) + 8 + local_160);
        bVar41 = false;
        lVar15 = *(longlong *)((longlong)_Dst + 0x3a0);
        bVar25 = false;
        if (uVar27 != 0) {
          uVar37 = 0;
          bVar25 = false;
          bVar5 = false;
          do {
            iVar29 = (int)uVar37;
            bVar41 = bVar5;
            if (((-1 < iVar29) && (iVar29 < *(int *)(lVar15 + 0x458))) &&
               (*(int *)(*(longlong *)(lVar15 + 0x450) + uVar37 * 4) == 0)) {
              if ((char)local_168 == '\0') {
                if (((iVar29 < *(int *)(lVar15 + 0x470)) &&
                    (*(int *)(*(longlong *)(lVar15 + 0x468) + uVar37 * 4) == 2)) ||
                   ((iVar29 < *(int *)(lVar15 + 0x448) &&
                    (*(char *)(*(longlong *)(lVar15 + 0x440) + uVar37) == '\x01')))) {
                  bVar25 = true;
                }
                if ((iVar29 < *(int *)(lVar15 + 0x470)) &&
                   (bVar41 = true, *(int *)(*(longlong *)(lVar15 + 0x468) + uVar37 * 4) == 2))
                goto LAB_14441c883;
              }
              bVar41 = bVar5;
              if ((iVar29 < *(int *)(lVar15 + 0x438)) &&
                 (*(char *)(*(longlong *)(lVar15 + 0x430) + uVar37) != '\0')) {
                bVar41 = true;
              }
            }
LAB_14441c883:
            uVar37 = uVar37 + 1;
            bVar5 = bVar41;
          } while (uVar27 != uVar37);
        }
        if (*(char *)(plVar33[0x104] + 0x3c + (longlong)plVar40 * 0x40) != '\0') {
          bVar41 = true;
        }
        if (*(char *)((longlong)_Dst + 0x165) != '\0') {
          bVar41 = true;
        }
        if (*(char *)(lVar15 + 0x460) != '\0') {
          bVar41 = true;
        }
        if (plVar33[0xe7] != 0) {
          *(undefined1 *)((longlong)_Dst + 0x3b2) = 0;
          bVar41 = true;
        }
        plVar16 = local_1a8 + 0x48;
        cVar9 = FUN_14716d320();
        if (((cVar9 != '\0') && (*(char *)((longlong)_Dst + 0xe1) == '\x01')) &&
           ((*(byte *)((longlong)local_1b8 + 0x2d4) & 8) != 0)) {
          *(undefined4 *)((longlong)_Dst + 0x84) = 3;
          if (bVar41) {
            uVar18 = FUN_14001cc68(0x150,0x10);
            FUN_149091da0(uVar18,plVar16,&local_78,local_98);
            *(undefined8 *)((longlong)_Dst + 0x78) = uVar18;
            *(undefined1 *)((longlong)_Dst + 0x80) = 1;
          }
          else {
            *(undefined1 *)((longlong)_Dst + 0x80) = 0;
            uVar18 = FUN_149071b08(local_1b8[0xcc],(ulonglong)plVar40 & 0xffffffff);
            *(undefined8 *)((longlong)_Dst + 0x78) = uVar18;
          }
        }
        if (bVar25) {
          uVar18 = *(undefined8 *)(*(longlong *)(local_198 + 0x78) + 8 + (longlong)plVar40 * 0x20);
          *(undefined8 *)((longlong)_Dst + 0x68) = uVar18;
          plVar40 = (longlong *)FUN_14001cc68(0x18,0x10);
          local_208 = local_98;
          FUN_14909194e(plVar40,uVar18,1,&local_78);
          *(longlong **)((longlong)_Dst + 0x70) = plVar40;
        }
        *(undefined8 *)((longlong)_Dst + 0x40) = *(undefined8 *)(local_180 + 8);
        if (bVar41) {
          uVar18 = FUN_14001cc68(0x198,0x10);
          local_208 = local_98;
          FUN_14908f1ea(uVar18,plVar16,1,&local_78);
          *(undefined8 *)((longlong)_Dst + 0x48) = uVar18;
        }
        lVar15 = *(longlong *)(local_180 + 0x18);
        *(longlong *)((longlong)_Dst + 0x58) = lVar15;
        if (lVar15 != 0) {
          *(undefined4 *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x400) =
               *(undefined4 *)(*(longlong *)(lVar15 + 0xb0) + 0x20);
          *(undefined4 *)(*(longlong *)((longlong)_Dst + 0x3a0) + 0x404) =
               *(undefined4 *)(*(longlong *)(*(longlong *)((longlong)_Dst + 0x58) + 0xb0) + 0x24);
        }
        lVar35 = FUN_14001cc68(0xe8,0x10);
        lVar15 = *(longlong *)((longlong)_Dst + 0x3a0);
        local_200 = local_98;
        local_208 = &local_78;
        FUN_14908fd94(lVar35,*(undefined4 *)(lVar15 + 0x3f8),*(undefined4 *)(lVar15 + 0x3fc),
                      *(undefined4 *)(lVar15 + 0x400));
        *(longlong *)((longlong)_Dst + 0x60) = lVar35;
        *(longlong *)(*(longlong *)((longlong)_Dst + 0x3a0) + 8) = lVar35 + 0x60;
        *(undefined4 *)((longlong)_Dst + 0x108) = local_174;
      }
      iVar29 = (int)local_1a8[0xc5];
      if (iVar29 != 0) {
        local_188 = (longlong)_Dst + 0x110;
        iVar38 = 0;
        local_170 = CONCAT44(local_170._4_4_,iVar29);
        do {
          lVar15 = local_1a8[0xc4];
          lVar35 = (longlong)iVar38 * 0x390;
          plVar33 = (longlong *)((longlong)iVar38 * 0x30 + *(longlong *)(local_180 + 0x30));
          uVar11 = *(uint *)((longlong)_Dst + 0x118);
          uVar27 = (ulonglong)uVar11;
          plVar16 = (longlong *)FUN_1490829c6(local_188);
          if (0 < *(int *)(lVar15 + 0x28 + lVar35)) {
            lVar15 = lVar15 + lVar35;
            local_128 = (code *)0x0;
            lVar35 = *(longlong *)((longlong)_Dst + 0x3a0);
            if ((int)uVar11 < 0) {
              cVar9 = *(char *)(lVar35 + 0x460);
              bVar8 = 0;
              iVar29 = 0;
LAB_14441c278:
              if (cVar9 != '\0') goto LAB_14441c2d0;
              bVar8 = bVar8 | iVar29 == 2;
              *plVar16 = *plVar33;
              plVar16[2] = plVar33[1];
              if (bVar8 == 1) goto LAB_14441c2e6;
              bVar41 = false;
            }
            else {
              iVar29 = 0;
              if ((int)uVar11 < *(int *)(lVar35 + 0x470)) {
                iVar29 = *(int *)(*(longlong *)(lVar35 + 0x468) + uVar27 * 4);
              }
              if (*(int *)(lVar35 + 0x438) <= (int)uVar11) {
                cVar9 = *(char *)(lVar35 + 0x460);
                if ((int)uVar11 < *(int *)(lVar35 + 0x448)) {
                  bVar8 = *(byte *)(*(longlong *)(lVar35 + 0x440) + uVar27);
                }
                else {
                  bVar8 = 0;
                }
                goto LAB_14441c278;
              }
              cVar9 = *(char *)(lVar35 + 0x460);
              if ((int)uVar11 < *(int *)(lVar35 + 0x448)) {
                bVar8 = *(byte *)(*(longlong *)(lVar35 + 0x440) + uVar27);
              }
              else {
                bVar8 = 0;
              }
              if (*(char *)(*(longlong *)(lVar35 + 0x430) + uVar27) == '\0') goto LAB_14441c278;
LAB_14441c2d0:
              bVar8 = bVar8 | iVar29 == 2;
              *plVar16 = *plVar33;
              plVar16[2] = plVar33[1];
LAB_14441c2e6:
              lVar35 = FUN_14001cc68(0xc0,0x10);
              local_208 = (void **)&local_128;
              FUN_14908de64(lVar35,lVar15,0,&local_88);
              plVar16[1] = lVar35;
              bVar41 = true;
            }
            if ((DAT_14ca96da8 == '\0') || ((*(byte *)((longlong)local_1b8 + 0x2d4) & 8) == 0)) {
              if (bVar41) goto LAB_14441c36b;
            }
            else if (bVar41) {
              lVar35 = FUN_14001cc68(0x150,0x10);
              FUN_149091e62(lVar35,*(undefined8 *)(*plVar16 + 0x140),&local_88,&local_128);
              plVar16[3] = lVar35;
              *(undefined1 *)(plVar16 + 4) = 1;
LAB_14441c36b:
              plVar16[9] = plVar33[3];
              if (bVar8 != 0) {
                plVar16[7] = *(longlong *)
                              (*(longlong *)
                                (*(longlong *)(local_198 + 0x78) + 0x10 + (longlong)local_1b0 * 0x20
                                ) + (longlong)(int)uVar11 * 8);
                lVar35 = FUN_14001cc68(0x18,0x10);
                local_208 = (void **)&local_128;
                FUN_14909194e(lVar35,plVar16[7],2,&local_88);
                plVar16[8] = lVar35;
              }
              plVar16[5] = plVar33[2];
              lVar35 = FUN_14001cc68(0x198,0x10);
              local_208 = (void **)&local_128;
              FUN_14908f1ea(lVar35,lVar15 + 0xb8,2,&local_88);
              plVar16[6] = lVar35;
              *(undefined4 *)(plVar16 + 10) = local_174;
            }
            else {
              *(undefined1 *)(plVar16 + 4) = 0;
              lVar15 = FUN_149071916(local_1b8[0xcc],local_1b0);
              plVar16[3] = lVar15;
            }
            plVar40 = plVar16;
            iVar29 = (int)local_170;
          }
          iVar38 = iVar38 + 1;
        } while (iVar29 != iVar38);
      }
      local_188 = CONCAT44(local_188._4_4_,(int)local_1a8[199]);
      if ((int)local_1a8[199] != 0) {
        iVar29 = 0;
        do {
          lVar15 = local_1a8[0xc6];
          lVar35 = (longlong)iVar29 * 0x80;
          plVar33 = (longlong *)((longlong)iVar29 * 0x18 + *(longlong *)(local_180 + 0x40));
          uVar11 = *(uint *)((longlong)_Dst + 0x128);
          plVar16 = (longlong *)FUN_149082a02((longlong)_Dst + 0x120);
          if (0 < *(int *)(lVar15 + 8 + lVar35)) {
            lVar15 = lVar15 + lVar35;
            local_128 = (code *)0x0;
            if ((int)uVar11 < 0) {
LAB_14441c555:
              *plVar16 = *plVar33;
              bVar41 = false;
            }
            else {
              lVar35 = *(longlong *)((longlong)_Dst + 0x3a0);
              iVar38 = 0;
              if ((int)uVar11 < *(int *)(lVar35 + 0x470)) {
                iVar38 = *(int *)(*(longlong *)(lVar35 + 0x468) + (ulonglong)uVar11 * 4);
              }
              if (*(int *)(lVar35 + 0x448) <= (int)uVar11) goto LAB_14441c555;
              cVar9 = *(char *)(*(longlong *)(lVar35 + 0x440) + (ulonglong)uVar11);
              *plVar16 = *plVar33;
              bVar41 = false;
              if ((iVar38 == 2) && (bVar41 = false, cVar9 != '\0')) {
                lVar35 = FUN_14001cc68(0xa0,0x10);
                local_208 = (void **)&local_128;
                bVar41 = true;
                FUN_14908e5e0(lVar35,lVar15,1,&local_88);
                plVar16[1] = lVar35;
              }
            }
            plVar40 = plVar16;
            if ((DAT_14ca96da8 != '\0') && ((*(byte *)((longlong)local_1b8 + 0x2d4) & 8) != 0)) {
              if (bVar41) {
                lVar35 = FUN_14001cc68(0x150,0x10);
                FUN_149091f02(lVar35,lVar15,&local_88,&local_128);
                plVar16[2] = lVar35;
                *(undefined1 *)(plVar16 + 3) = 1;
              }
              else {
                *(undefined1 *)(plVar16 + 3) = 0;
                lVar15 = FUN_149071a10(local_1b8[0xcc],local_1b0,uVar11);
                plVar16[2] = lVar15;
              }
            }
          }
          iVar29 = iVar29 + 1;
        } while ((int)local_188 != iVar29);
      }
      plVar34 = (longlong *)((longlong)local_1b0 + 1);
      plVar33 = local_1b8;
      plVar16 = local_190;
    } while (plVar34 != local_138);
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_14441cb52:
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14441dba2 FUN_14441dba2 body=1916 status=ok
// SIG undefined FUN_14441dba2(void)

void FUN_14441dba2(longlong param_1,uint param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  byte bVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  uint local_78;
  uint local_74;
  undefined1 local_70;
  byte local_6f;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x874) == 1) {
    fVar25 = *(float *)(param_1 + 0x878);
  }
  else if (*(int *)(param_1 + 0x874) == 2) {
    fVar25 = *(float *)(param_1 + 0x87c);
  }
  else {
    fVar25 = -1.0;
  }
  lVar10 = *(longlong *)(param_1 + 0x660);
  if (lVar10 == 0) {
    uVar18 = ~param_2 >> 0x1e & 0xfffffffe;
  }
  else {
    if ((longlong)*(int *)(lVar10 + 0x80) != 0) {
      iVar7 = -1;
      lVar22 = 0;
      do {
        iVar19 = *(int *)(*(longlong *)(lVar10 + 0x78) + 8 + lVar22);
        if (iVar7 < iVar19) {
          iVar7 = iVar19;
        }
        lVar22 = lVar22 + 0x10;
      } while ((longlong)*(int *)(lVar10 + 0x80) * 0x10 != lVar22);
      if ((int)(iVar7 - 1U) <= (int)param_2) {
        param_2 = iVar7 - 1U;
      }
      uVar18 = 2;
      if (-1 < (int)param_2) goto LAB_14441dd1b;
    }
    iVar7 = *(int *)(lVar10 + 0xf8);
    iVar19 = 0;
    bVar23 = 0;
    if (0 < iVar7) {
      bVar23 = 0;
      do {
        lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x660) + 0x80);
        if (lVar10 == 0) {
          iVar24 = -1;
LAB_14441dcc7:
          iVar17 = 0;
          do {
            if (*(longlong *)(param_1 + 0x660) != 0) {
              bVar6 = FUN_149071d40(*(longlong *)(param_1 + 0x660),iVar19,iVar17);
              if ((bVar6 & *(byte *)(param_1 + 0x6a8)) == 1) {
                bVar6 = *(byte *)(param_1 + 0x6d8);
              }
              else {
                bVar6 = bVar6 & (*(byte *)(param_1 + 0x6a8) ^ 1);
              }
              if (bVar6 != 0) {
                bVar23 = 1;
                break;
              }
            }
            iVar17 = iVar17 + 1;
          } while (iVar24 != iVar17);
        }
        else {
          iVar24 = -1;
          lVar22 = 0;
          do {
            iVar17 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x660) + 0x78) + 8 + lVar22);
            if (iVar24 < iVar17) {
              iVar24 = iVar17;
            }
            lVar22 = lVar22 + 0x10;
          } while (lVar10 * 0x10 != lVar22);
          if (iVar24 != 0) goto LAB_14441dcc7;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != iVar7);
    }
    uVar18 = (uint)bVar23;
    param_2 = 0xffffffff;
  }
LAB_14441dd1b:
  FUN_149080326(param_1,(int)fVar25,param_2);
  fVar26 = (float)(int)param_2;
  *(float *)(param_1 + 0x87c) = fVar26;
  *(uint *)(param_1 + 0x874) = uVar18;
  lVar10 = *(longlong *)(param_1 + 0x5a8);
  if (lVar10 == 0) goto LAB_14441ded4;
  bVar4 = fVar25 != fVar26;
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar22 + 0xc60);
  bVar23 = ((fVar26 < fVar25 && 0 < (int)param_2) && bVar4) & DAT_14cbf8148;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14441dd94;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14441dd9d;
      goto LAB_14441de27;
    }
  }
  else {
LAB_14441dd94:
    if (iVar7 != 0x10) {
LAB_14441de27:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar22 + 0xc60), iVar7 == 2)) {
LAB_14441e298:
          iVar7 = *(int *)(lVar10 + 0x2a0);
          if ((longlong)iVar7 != 0) {
            lVar10 = *(longlong *)(lVar10 + 0x298);
            lVar22 = 0;
            do {
              *(float *)(*(longlong *)(lVar10 + lVar22) + 0x158) = fVar26;
              *(uint *)(*(longlong *)(lVar10 + lVar22) + 0x15c) = uVar18;
              if ((fVar25 != fVar26) || (NAN(fVar25) || NAN(fVar26))) {
                FUN_14908d074(*(undefined8 *)(lVar10 + lVar22),param_2);
              }
              if (bVar23 != 0) {
                FUN_14908d074(*(undefined8 *)(lVar10 + lVar22),param_2 - 1);
              }
              lVar22 = lVar22 + 8;
            } while ((longlong)iVar7 * 8 != lVar22);
          }
          goto LAB_14441ded4;
        }
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14441e298;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14441dfad;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_144425664);
          }
          lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar22 + 0x310);
          *(undefined8 *)(lVar22 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_14441dfad:
          puVar21 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar21 + 0x18);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
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
            puVar21 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar21 + 0x18);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14441e02d;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14441e02d:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar7 = 0;
        FUN_1447247dc(puVar21,0);
        *puVar21 = &PTR_FUN_14baa36a8;
        puVar21[0x15] = lVar10;
        *(uint *)(puVar21 + 0x16) = param_2;
        *(uint *)((longlong)puVar21 + 0xb4) = uVar18;
        *(bool *)(puVar21 + 0x17) = bVar4;
        *(byte *)((longlong)puVar21 + 0xb9) = bVar23;
        *(undefined4 *)((longlong)puVar21 + 0xba) = (undefined4)local_a8;
        *(undefined2 *)((longlong)puVar21 + 0xbe) = local_a8._4_2_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar18 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
            iVar7 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
        }
        puVar21[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar21[9] = puVar21;
        puVar21[10] = puVar21;
        lVar10 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar10 == 0) {
          uVar5 = 1;
          if ((char)uVar20 != '\x06') {
            uVar5 = uVar20;
          }
          uVar20 = uVar5;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar10 + 0x30);
        }
        puVar21[0xf] = uVar13;
        puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar21 + 0x1c) = iVar7;
        if (puVar21 == (undefined8 *)0x0) {
          local_a9 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_a9 = 1;
          FUN_1447439e4(puVar21);
          LOCK();
          piVar1 = (int *)(puVar21 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
      }
      else {
        local_b8 = &local_a8;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_14baa3650;
        local_a8 = FUN_144429a4e;
        local_80 = lVar10;
        local_78 = param_2;
        local_74 = uVar18;
        local_70 = bVar4;
        local_6f = bVar23;
        FUN_14005a792(&DAT_14ca9a440,L"FHairComponentSendLODIndex",&DAT_14cbf9100);
        if (local_a8 != (code *)0x0) {
          pppuVar15 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar15 = &local_88;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_14441ded4;
    }
  }
LAB_14441dd9d:
  iVar7 = *(int *)(lVar10 + 0x2a0);
  if ((longlong)iVar7 != 0) {
    lVar10 = *(longlong *)(lVar10 + 0x298);
    lVar22 = 0;
    do {
      *(float *)(*(longlong *)(lVar10 + lVar22) + 0x158) = fVar26;
      *(uint *)(*(longlong *)(lVar10 + lVar22) + 0x15c) = uVar18;
      if ((fVar25 != fVar26) || (NAN(fVar25) || NAN(fVar26))) {
        FUN_14908d074(*(undefined8 *)(lVar10 + lVar22),param_2);
      }
      if (bVar23 != 0) {
        FUN_14908d074(*(undefined8 *)(lVar10 + lVar22),param_2 - 1);
      }
      lVar22 = lVar22 + 8;
    } while ((longlong)iVar7 * 8 != lVar22);
  }
LAB_14441ded4:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14441e31f FUN_14441e31f body=381 status=ok
// SIG undefined FUN_14441e31f(void)

void FUN_14441e31f(undefined8 *param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined8 *puVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  
  if ((param_2 == 0) || (*(uint *)(param_3 + 0x828) <= param_4)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined4 *)((longlong)param_1 + 4) = 0x3dcccccd;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 7) = 0x3f800000;
  }
  else {
    lVar14 = (longlong)(int)param_4;
    lVar3 = *(longlong *)(param_2 + 0xf0);
    lVar4 = *(longlong *)(param_3 + 0x820);
    lVar13 = lVar14 * 0x40;
    uVar5 = *(undefined8 *)(lVar4 + lVar13);
    uVar6 = ((undefined8 *)(lVar4 + lVar13))[1];
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar13);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar13);
    uVar9 = *puVar1;
    uVar10 = puVar1[1];
    lVar12 = lVar14 * 0x30 + *(longlong *)(param_2 + 0x48);
    puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar13);
    uVar11 = puVar1[1];
    param_1[6] = *puVar1;
    param_1[7] = uVar11;
    param_1[4] = uVar9;
    param_1[5] = uVar10;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + 0x25c + lVar14 * 0x690);
    fVar15 = *(float *)(*(longlong *)(param_2 + 0xe0) + lVar14 * 4);
    fVar2 = *(float *)((longlong)param_1 + 0x2c);
    fVar16 = fVar2;
    if (fVar2 <= fVar15) {
      fVar16 = fVar15;
    }
    *(uint *)((longlong)param_1 + 0x2c) =
         ~-(uint)(0.0 < fVar15) & (uint)fVar2 | (uint)fVar16 & -(uint)(0.0 < fVar15);
    if (*(char *)(param_1 + 1) == '\0') {
      if (*(char *)(lVar12 + 0x14) == '\0') {
        fVar15 = *(float *)(lVar3 + lVar14 * 0x690 + 0x260);
        fVar15 = fVar15 + fVar15;
      }
      else {
        fVar15 = *(float *)(lVar12 + 0x10);
      }
      *(float *)((longlong)param_1 + 4) = fVar15;
    }
    if (*(char *)(param_1 + 2) == '\0') {
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar12 + 0x18);
    }
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar12 + 0x1c);
    }
    if (*(char *)((longlong)param_1 + 0x35) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)(lVar12 + 0x29);
    }
    if (*(char *)(param_1 + 4) == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(lVar12 + 0x20);
    }
    if (*(char *)(param_1 + 5) == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar12 + 0x24);
    }
    if (*(char *)((longlong)param_1 + 0x2a) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)(lVar12 + 0x28);
    }
    if (*(char *)((longlong)param_1 + 0x31) == '\0') {
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(lVar12 + 0x2c);
    }
    if (*(char *)((longlong)param_1 + 0x33) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)(lVar12 + 0x2d);
    }
  }
  return;
}



// FUNCTION 14441e49c FUN_14441e49c body=299 status=ok
// SIG undefined FUN_14441e49c(void)

undefined8 FUN_14441e49c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((((*(longlong *)(param_1 + 0x660) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x660) + 0xf8) != 0)) && (*(int *)(param_1 + 0x850) != 0))
     && (((cVar5 = FUN_14490dacc(param_1,1), cVar5 == '\0' || (DAT_14c761950 != 1)) ||
         (DAT_14cafb288 == 1)))) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x660) + 0xf8);
    if ((iVar2 == *(int *)(param_1 + 0x850)) && (iVar2 != 0)) {
      plVar6 = *(longlong **)(param_1 + 0x848);
      plVar1 = plVar6 + iVar2;
      bVar4 = false;
LAB_14441e522:
      bVar8 = bVar4;
      lVar3 = *plVar6;
      if ((longlong)*(int *)(lVar3 + 0x128) != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0x120) + lVar9) != 0) goto LAB_14441e588;
          lVar9 = lVar9 + 0x30;
        } while ((longlong)*(int *)(lVar3 + 0x128) * 0x30 != lVar9);
      }
      if ((longlong)*(int *)(lVar3 + 0x118) != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 0x110) + lVar9) != 0) goto LAB_14441e588;
          lVar9 = lVar9 + 0x68;
        } while ((longlong)*(int *)(lVar3 + 0x118) * 0x68 - lVar9 != 0);
      }
      bVar10 = *(longlong *)(lVar3 + 0x40) != 0;
      goto LAB_14441e58b;
    }
  }
  return 0;
LAB_14441e588:
  bVar10 = true;
LAB_14441e58b:
  plVar6 = plVar6 + 1;
  bVar4 = (bool)(bVar8 | bVar10);
  if (plVar6 == plVar1) {
    if (!bVar8 && !bVar10) {
      return 0;
    }
    uVar7 = FUN_14001cc68(0x2e0,0x10);
    FUN_14908074a(uVar7,param_1);
    return uVar7;
  }
  goto LAB_14441e522;
}



// FUNCTION 14441e5c8 FUN_14441e5c8 body=95 status=ok
// SIG undefined FUN_14441e5c8(void)

void FUN_14441e5c8(longlong *param_1)

{
  longlong lVar1;
  
  FUN_144842962();
  if (param_1[0xcc] != 0) {
    FUN_1400337aa();
  }
  if (param_1[0xd1] == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1400337aa();
    lVar1 = param_1[0xd1];
  }
  FUN_14908044c(param_1,param_1[0xcc],lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00014441e620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1);
  return;
}



// FUNCTION 14441e628 FUN_14441e628 body=2248 status=ok
// SIG undefined FUN_14441e628(void)

void FUN_14441e628(longlong param_1,float param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  code *pcVar14;
  undefined8 *puVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_158 [32];
  code **local_138;
  code *local_128;
  longlong *local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  longlong *local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8 [2];
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*(longlong *)(param_1 + 0x668) == 0) || (*(char *)(param_1 + 0x831) != '\x01')) ||
     (*(char *)(param_1 + 0x833) != '\x01')) goto LAB_14441eb07;
  if (DAT_14c7649dc == '\x01') {
    fVar20 = param_2 - *(float *)(param_1 + 0x834);
    plVar8 = (longlong *)FUN_1414c2236();
    lVar9 = plVar8[0x22];
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 1000))();
      lVar9 = plVar8[0x22];
    }
    if ((fVar20 < 0.0) || (*(float *)(lVar9 + 0x28) <= fVar20 && fVar20 != *(float *)(lVar9 + 0x28))
       ) {
      *(float *)(param_1 + 0x834) = param_2;
      FUN_145d22e9c();
      (**(code **)(DAT_14cbf7f28 + 0xa8))(&DAT_14cbf7f28,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_158);
    }
  }
  local_118 = (longlong *)0x0;
  local_108 = &PTR_LAB_14baa38b0;
  uStack_100 = param_1;
  local_f8 = param_2;
  local_128 = (code *)&LAB_14442a698;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar18 = DAT_14cbf9550 == '\0';
    if (bVar18) {
      DAT_14cbf9550 = '\x01';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_1447d2058(&DAT_14cbf9550);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cbf9548) {
      local_a8[0] = local_128;
      local_98 = local_118;
      local_118 = (longlong *)0x0;
      local_88 = (undefined4)local_108;
      uStack_84 = local_108._4_4_;
      uStack_80 = (undefined4)uStack_100;
      uStack_7c = uStack_100._4_4_;
      local_78 = local_f8;
      uStack_74 = uStack_f4;
      uStack_70 = uStack_f0;
      uStack_6c = uStack_ec;
      if (local_128 != (code *)0x0) {
        local_128 = (code *)0x0;
      }
      local_68 = 1;
      FUN_1401a96bc(&DAT_14cbf9548,local_a8,L"FGroomCacheUpdate",&DAT_14cbf9108);
LAB_14441e877:
      (*(code *)(&PTR_LAB_14a3931f0)[local_68])();
      bVar18 = false;
    }
    else {
      if (DAT_14cbf9558 != 0) {
        local_a8[0] = local_128;
        local_98 = local_118;
        local_118 = (longlong *)0x0;
        local_88 = (undefined4)local_108;
        uStack_84 = local_108._4_4_;
        uStack_80 = (undefined4)uStack_100;
        uStack_7c = uStack_100._4_4_;
        local_78 = local_f8;
        uStack_74 = uStack_f4;
        uStack_70 = uStack_f0;
        uStack_6c = uStack_ec;
        if (local_128 != (code *)0x0) {
          local_128 = (code *)0x0;
        }
        local_68 = 1;
        FUN_1401a98c8(&DAT_14cbf9548,local_a8,L"FGroomCacheUpdate",&DAT_14cbf9108);
        goto LAB_14441e877;
      }
      bVar18 = true;
    }
    LOCK();
    bVar19 = DAT_14cbf9550 == '\x01';
    if (bVar19) {
      DAT_14cbf9550 = '\0';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_14008cdb0(&DAT_14cbf9550);
    }
    if (bVar18) {
      local_e8 = local_128;
      local_d8 = local_118;
      uStack_b0 = CONCAT44(uStack_ec,uStack_f0);
      local_c8 = local_108;
      uStack_c0 = uStack_100;
      local_b8 = CONCAT44(uStack_f4,local_f8);
      if (local_128 != (code *)0x0) goto LAB_14441e8e8;
      pcVar14 = (code *)0x0;
      goto LAB_14441e8f1;
    }
  }
  else {
    local_e8 = (code *)&LAB_14442a698;
    local_d8 = (longlong *)0x0;
    local_c8 = &PTR_LAB_14baa38b0;
    uStack_c0 = param_1;
    local_b8 = CONCAT44(uStack_f4,param_2);
    uStack_b0 = CONCAT44(uStack_ec,uStack_f0);
LAB_14441e8e8:
    local_128 = (code *)0x0;
    pcVar14 = local_e8;
LAB_14441e8f1:
    local_118 = (longlong *)0x0;
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar16 = *(int *)(lVar9 + 0xc60);
    local_108 = local_c8;
    uStack_100 = uStack_c0;
    if (DAT_14c86a9fc == 0) {
      if (iVar16 != 2) {
        if (iVar16 != 1) goto LAB_14441e918;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        pcVar14 = local_e8;
        if (DVar6 == DVar7) goto LAB_14441e921;
        goto LAB_14441e9c7;
      }
LAB_14441e921:
      plVar8 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar8 = &local_c8;
      }
      uVar10 = (**(code **)(*plVar8 + 8))();
      (*pcVar14)(uVar10,&DAT_14ca85100);
    }
    else {
LAB_14441e918:
      if (iVar16 == 0x10) goto LAB_14441e921;
LAB_14441e9c7:
      if (DAT_14ca9a438 == '\0') {
        pcVar14 = local_e8;
        if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar9 + 0xc60), iVar16 == 2))
        goto LAB_14441e921;
        if (iVar16 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          pcVar14 = local_e8;
          if (DVar6 == DVar7) goto LAB_14441e921;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14441ebe0;
        while( true ) {
          uVar5 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar5 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar5 | 1;
            __tlregdtor(&LAB_144425664);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_14441ebe0:
          puVar15 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar13 = (uint *)(puVar15 + 0x1e);
          uVar5 = puVar12[0x12];
          if (puVar13 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar5 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar5) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar15 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
            puVar13 = (uint *)(puVar15 + 0x1e);
            uVar5 = 0;
            if (puVar13 <= puVar12 + 0x4000) {
              uVar5 = 1;
              goto LAB_14441ec60;
            }
          }
        }
        uVar5 = uVar5 + 1;
LAB_14441ec60:
        *(uint **)(puVar12 + 0x10) = puVar13;
        puVar12[0x12] = uVar5;
        FUN_1447247dc(puVar15,0);
        *puVar15 = &PTR_FUN_14baa38a0;
        puVar15[0x16] = local_e8;
        puVar15[0x18] = local_d8;
        local_d8 = (longlong *)0x0;
        *(undefined4 *)(puVar15 + 0x1c) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar15 + 0xe4) = local_b8._4_4_;
        *(undefined4 *)(puVar15 + 0x1d) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)puVar15 + 0xec) = uStack_b0._4_4_;
        *(undefined4 *)(puVar15 + 0x1a) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar15 + 0xd4) = local_c8._4_4_;
        *(undefined4 *)(puVar15 + 0x1b) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)puVar15 + 0xdc) = uStack_c0._4_4_;
        if (local_e8 != (code *)0x0) {
          local_e8 = (code *)0x0;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar5 = DAT_14c7585c8 >> 10 & 3;
          iVar16 = 0;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
            iVar16 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
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
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar4 = 1;
          if ((char)uVar17 != '\x06') {
            uVar4 = uVar17;
          }
          uVar17 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar15[0xf] = uVar10;
        puVar15[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar16;
        if (puVar15 == (undefined8 *)0x0) {
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          local_a8[0] = (code *)CONCAT71(local_a8[0]._1_7_,1);
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
        local_a8[0] = (code *)0x0;
        local_98 = (longlong *)FUN_14001cc68(0x50,0x10);
        *local_98 = (longlong)&PTR_LAB_14baa3880;
        local_98[2] = (longlong)local_e8;
        local_98[4] = (longlong)local_d8;
        local_d8 = (longlong *)0x0;
        *(undefined4 *)(local_98 + 8) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_98 + 0x44) = local_b8._4_4_;
        *(undefined4 *)(local_98 + 9) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)local_98 + 0x4c) = uStack_b0._4_4_;
        *(undefined4 *)(local_98 + 6) = (undefined4)local_c8;
        *(undefined4 *)((longlong)local_98 + 0x34) = local_c8._4_4_;
        *(undefined4 *)(local_98 + 7) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)local_98 + 0x3c) = uStack_c0._4_4_;
        if (local_e8 != (code *)0x0) {
          local_e8 = (code *)0x0;
        }
        if (local_98 != (longlong *)&DAT_fffffffffffffff0) {
          local_a8[0] = FUN_14442a446;
        }
        local_138 = local_a8;
        FUN_14005a792(&DAT_14ca9a440,L"FGroomCacheUpdate",&DAT_14cbf9108);
        if (local_a8[0] != (code *)0x0) {
          plVar8 = local_98;
          if (local_98 == (longlong *)0x0) {
            plVar8 = (longlong *)&local_88;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
    if (local_e8 != (code *)0x0) {
      plVar8 = &local_c8;
      if (local_d8 != (longlong *)0x0) {
        plVar8 = local_d8;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (local_128 != (code *)0x0) {
    plVar8 = &local_108;
    if (local_118 != (longlong *)0x0) {
      plVar8 = local_118;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14441eb07:
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14441ef1a FUN_14441ef1a body=5956 status=ok
// SIG undefined FUN_14441ef1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14441ef1a(longlong *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  code *pcVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  double *pdVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  code **ppcVar22;
  longlong lVar23;
  longlong *plVar24;
  uint *puVar25;
  float *pfVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong *plVar29;
  double *pdVar30;
  longlong lVar31;
  undefined8 *puVar32;
  longlong lVar33;
  bool bVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auStack_2e8 [32];
  code **local_2c8;
  uint local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  wchar_t *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  undefined8 *local_290;
  undefined1 *local_288;
  code *local_280;
  double local_278;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  double local_248 [2];
  undefined1 local_238 [16];
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  int local_1ac;
  bool local_1a8;
  double local_198 [6];
  double local_168;
  double dStack_160;
  double local_158;
  code *local_138;
  double dStack_130;
  longlong *local_128;
  double dStack_120;
  longlong local_118 [5];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_1c8 = (code *)CONCAT44(local_1c8._4_4_,param_2);
    uVar19 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar19,&local_1c8);
    if ((DAT_14c761388 != 0) &&
       ((lVar35 = param_1[0x16], lVar35 != 0 || (lVar35 = FUN_1448abda6(param_1), lVar35 != 0)))) {
      uVar19 = FUN_14119d0a4(lVar35);
      FUN_140e65914(uVar19,param_1,*(undefined4 *)(lVar35 + 0x6f4));
    }
  }
  uVar3 = (undefined4)param_1[0x7a];
  lVar35 = param_1[0x16];
  if (lVar35 == 0) {
    lVar35 = FUN_1448abda6(param_1);
    if (lVar35 != 0) {
      lVar35 = param_1[0x16];
      if (lVar35 == 0) {
        lVar35 = FUN_1448abda6(param_1);
      }
      goto LAB_14441efd7;
    }
    uVar21 = 5;
  }
  else {
LAB_14441efd7:
    uVar21 = (uint)*(byte *)(lVar35 + 0x150);
  }
  lVar35 = param_1[0x10c];
  if (lVar35 != 0) {
    if (DAT_14cad2858 == 0) {
      local_290 = &local_1c8;
      local_1c8 = FUN_144a7958c;
      local_280 = FUN_14081d0ea;
      local_288 = &LAB_146395584;
      local_298 = &LAB_147a0ba80;
      local_2a0 = &LAB_14575ccce;
      local_2a8 = L"Engine";
      local_2b0 = 0x40000000000;
      local_2b8 = 0x10000004;
      local_2c0 = 0x10;
      local_2c8 = (code **)CONCAT44(local_2c8._4_4_,0x1180);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar35 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar35 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      lVar33 = *(longlong *)(lVar35 + 0x658);
      if (lVar33 == 0) {
        lVar33 = *(longlong *)(lVar35 + 0x660);
        if ((DAT_14c950c29 & lVar33 != 0) != 0) goto LAB_144420525;
        if (lVar33 != 0) goto LAB_14441f03f;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_144420525:
          FUN_1456cec3c(lVar33);
        }
LAB_14441f03f:
        if (DAT_14cb06da8 == 0) {
          local_290 = &local_1c8;
          local_1c8 = FUN_1449e2820;
          local_280 = FUN_14081d0ea;
          local_288 = &LAB_1464003b0;
          local_298 = &LAB_147d17bdf;
          local_2a0 = &LAB_1417edf22;
          local_2a8 = L"Engine";
          local_2b0 = 0;
          local_2b8 = 0x10000000;
          local_2c0 = 8;
          local_2c8 = (code **)CONCAT44(local_2c8._4_4_,0x588);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar33 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar33 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
            (1 < (int)param_1[0xf1])) &&
           ((FUN_1446f82e2(&local_1c8,(int)param_1[0xf1] + -1,param_1[0xf0],1), pcVar8 = local_1c8,
            (code *)param_1[0x25] != local_1c8 && (iVar11 = FUN_144909502(lVar35), iVar11 != -1))))
        {
          local_1c8 = (code *)((ulonglong)local_1c8 & 0xffffffff00000000);
          (**(code **)(*param_1 + 0x490))(param_1,lVar35,&local_1c8,pcVar8);
          plVar24 = *(longlong **)(lVar35 + 0x658);
          if (plVar24 == (longlong *)0x0) {
            plVar24 = *(longlong **)(lVar35 + 0x660);
            if ((DAT_14c950c29 & plVar24 != (longlong *)0x0) != 0) goto LAB_144420532;
            if (plVar24 != (longlong *)0x0) goto LAB_14441f107;
LAB_14441fccb:
            plVar24 = (longlong *)0x0;
          }
          else {
            if (DAT_14c950c29 == 1) {
LAB_144420532:
              FUN_1456cec3c(plVar24);
            }
LAB_14441f107:
            if (DAT_14cb06da8 == 0) {
              local_1c8 = FUN_1449e2820;
              local_280 = FUN_14081d0ea;
              local_288 = &LAB_1464003b0;
              local_298 = &LAB_147d17bdf;
              local_2a0 = &LAB_1417edf22;
              local_2a8 = L"Engine";
              local_2b0 = 0;
              local_2b8 = 0x10000000;
              local_2c0 = 8;
              local_2c8 = (code **)CONCAT44(local_2c8._4_4_,0x588);
              local_290 = &local_1c8;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
            }
            if ((*(int *)(plVar24[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
                != DAT_14cb06da8 + 0x30)) goto LAB_14441fccb;
          }
          (**(code **)(*plVar24 + 0x340))(plVar24,&local_1c8,iVar11);
          dVar45 = local_158;
          dVar42 = dStack_160;
          dVar36 = local_168;
          ppcVar22 = &local_138;
          uVar12 = FUN_14481fd10(ppcVar22,&local_1c8);
          lVar35 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464c0._8_8_));
          auVar56._8_4_ = (int)lVar35;
          auVar56._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464c0));
          auVar56._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
          iVar11 = movmskpd(uVar12,auVar56);
          lVar35 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464d0._8_8_));
          auVar61._8_4_ = (int)lVar35;
          auVar61._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464d0));
          auVar61._12_4_ = (int)((ulonglong)lVar35 >> 0x20);
          uVar20 = movmskpd((int)ppcVar22,auVar61);
          dVar5 = DAT_14c846490;
          dVar6 = DAT_14c846498;
          dVar37 = DAT_14c8464a0;
          dVar38 = DAT_14c8464a8;
          dVar51 = DAT_14c8464b0;
          dVar59 = DAT_14c846480;
          dVar60 = DAT_14c846488;
          if ((uVar20 & 0x3fffffff) != 0 || iVar11 != 0) {
            auVar61 = divpd(_DAT_149934d80,_DAT_14c8464c0);
            auVar56 = divpd(ZEXT816(0x3ff0000000000000),_DAT_14c8464d0);
            dVar36 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464c0)) &
                             auVar61._0_8_) * dVar36;
            dVar42 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464c0._8_8_)) &
                             auVar61._8_8_) * dVar42;
            dVar45 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464d0)) &
                             auVar56._0_8_) * dVar45;
            dVar5 = (double)local_128 * -1.0;
            dVar6 = dStack_120 * 1.0;
            dVar59 = -(double)local_138;
            dVar60 = -dStack_130;
            dVar49 = dVar42 * dVar59 - dVar36 * dVar60;
            dVar50 = dVar45 * dVar60 - dVar42 * dVar5;
            dVar51 = dVar36 * dVar5 - dVar59 * dVar45;
            dVar50 = dVar50 + dVar50;
            dVar51 = dVar51 + dVar51;
            dVar49 = dVar49 + dVar49;
            dVar37 = 0.0 - ((dVar49 * dVar60 - dVar51 * dVar5) + dVar6 * dVar50 + dVar36);
            dVar38 = 0.0 - (dVar49 * (double)local_138 + dVar5 * dVar50 + dVar6 * dVar51 + dVar42);
            dVar51 = 0.0 - (dVar6 * dVar49 + dVar45 + (dVar51 * dVar59 - dVar50 * dVar60));
          }
          auVar56 = *(undefined1 (*) [16])(param_1 + 0x36);
          dVar42 = auVar56._0_8_;
          dVar45 = auVar56._8_8_;
          dVar36 = (double)param_1[0x38];
          pdVar16 = (double *)param_1[0x46];
          if (pdVar16 == (double *)0x0) {
            pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
            dVar49 = DAT_14c8463d8;
            *pdVar16 = DAT_14c8463d0;
            pdVar16[1] = dVar49;
            dVar49 = DAT_14c8463e8;
            pdVar16[2] = DAT_14c8463e0;
            pdVar16[3] = dVar49;
            dVar49 = DAT_14c846500;
            pdVar16[4] = DAT_14c8464f8;
            pdVar16[5] = dVar49;
            pdVar16[6] = DAT_14c846508;
            param_1[0x46] = (longlong)pdVar16;
          }
          auVar61 = _DAT_1499387d0;
          if ((((pdVar16[4] != dVar42) || (NAN(pdVar16[4]) || NAN(dVar42))) ||
              (pdVar16[5] != dVar45)) || (NAN(pdVar16[5]) || NAN(dVar45))) {
LAB_14441f3da:
            auVar46._8_8_ = 0;
            auVar46._0_8_ = dVar36;
            dVar49 = (double)DAT_1499387d0;
            dVar50 = DAT_1499387d0._8_8_;
            auVar56 = divpd(auVar56,_DAT_1499387d0);
            auVar43 = divpd(auVar46,_DAT_1499387d0);
            auVar56 = roundpd(auVar56,auVar56,3);
            auVar43 = roundpd(auVar43,auVar43,3);
            auVar57._0_8_ = dVar42 - auVar56._0_8_ * dVar49;
            auVar57._8_8_ = dVar45 - auVar56._8_8_ * dVar50;
            auVar47._0_8_ = dVar36 - auVar43._0_8_ * dVar49;
            auVar47._8_8_ = 0.0 - auVar43._8_8_ * dVar50;
            auVar54._0_8_ = auVar57._0_8_ + dVar49;
            auVar54._8_8_ = auVar57._8_8_ + dVar50;
            auVar44._0_8_ = auVar47._0_8_ + dVar49;
            auVar44._8_8_ = auVar47._8_8_ + dVar50;
            auVar55._8_8_ = -(ulonglong)(0.0 <= auVar57._8_8_);
            auVar55._0_8_ = -(ulonglong)(0.0 <= auVar57._0_8_);
            auVar43 = blendvpd(auVar54,auVar57,auVar55);
            auVar39._8_8_ = -(ulonglong)(0.0 <= auVar47._8_8_);
            auVar39._0_8_ = -(ulonglong)(0.0 <= auVar47._0_8_);
            auVar56 = blendvpd(auVar44,auVar47,auVar39);
            auVar48._0_8_ = auVar43._0_8_ + -360.0;
            auVar48._8_8_ = auVar43._8_8_ + -360.0;
            auVar40._8_8_ = -(ulonglong)(180.0 < auVar43._8_8_);
            auVar40._0_8_ = -(ulonglong)(180.0 < auVar43._0_8_);
            auVar55 = blendvpd(auVar43,auVar48,auVar40);
            auVar41._8_8_ = -(ulonglong)(180.0 < auVar56._8_8_);
            auVar41._0_8_ = -(ulonglong)(180.0 < auVar56._0_8_);
            auVar43._8_8_ = auVar56._8_8_ + 0.0;
            auVar43._0_8_ = auVar56._0_8_ + -360.0;
            auVar56 = blendvpd(auVar56,auVar43,auVar41);
            *(undefined1 (*) [16])(pdVar16 + 4) = auVar55;
            dVar36 = auVar56._0_8_;
            pdVar16[6] = dVar36;
            auVar58._8_8_ = 0;
            auVar58._0_8_ = dVar36;
            auVar56 = divpd(auVar55,auVar61);
            auVar61 = divpd(auVar58,auVar61);
            auVar56 = roundpd(auVar56,auVar56,3);
            auVar61 = roundpd(auVar61,auVar61,3);
            dVar42 = (auVar55._0_8_ - auVar56._0_8_ * dVar49) * 0.008726646259971648;
            dVar45 = (auVar55._8_8_ - auVar56._8_8_ * dVar50) * 0.008726646259971648;
            dVar49 = (dVar36 - auVar61._0_8_ * dVar49) * 0.008726646259971648;
            dVar50 = (0.0 - auVar61._8_8_ * dVar50) * 0.008726646259971648;
            local_278 = sin(dVar42);
            local_268 = dVar59;
            dStack_260 = dVar60;
            dVar36 = sin(dVar45);
            local_258._8_4_ = SUB84(dVar38,0);
            local_258._0_8_ = dVar37;
            local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
            dVar37 = sin(dVar49);
            sin(dVar50);
            dVar38 = cos(dVar42);
            dVar60 = dStack_260;
            dVar59 = local_268;
            dVar42 = cos(dVar45);
            dVar45 = cos(dVar49);
            cos(dVar50);
            *pdVar16 = local_278 * dVar36 * dVar45 - dVar38 * dVar42 * dVar37;
            pdVar16[1] = -(local_278 * dVar42 * dVar45) - dVar38 * dVar36 * dVar37;
            pdVar16[2] = -(dVar42 * local_278 * dVar37) + dVar36 * dVar38 * dVar45;
            pdVar16[3] = dVar36 * local_278 * dVar37 + dVar42 * dVar38 * dVar45;
            dVar37 = (double)local_258._0_8_;
            dVar38 = (double)local_258._8_8_;
          }
          else if ((pdVar16[6] != dVar36) || (NAN(pdVar16[6]) || NAN(dVar36))) goto LAB_14441f3da;
          local_248[0] = *pdVar16;
          local_248[1] = pdVar16[1];
          local_238 = *(undefined1 (*) [16])(pdVar16 + 2);
          local_1e8._8_4_ = SUB84(dVar38,0);
          local_1e8._0_8_ = dVar37;
          local_1e8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          local_2c0 = local_2c0 & 0xffffff00;
          local_2c8 = (code **)0x0;
          local_1d8 = dVar51;
          FUN_144927ad4(param_1,local_1e8,local_248,0);
          local_238._8_4_ = SUB84(dVar6,0);
          local_238._0_8_ = dVar5;
          local_238._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          local_1d8 = (double)param_1[0x35];
          local_1e8 = *(undefined1 (*) [16])(param_1 + 0x33);
          local_2c0 = local_2c0 & 0xffffff00;
          local_2c8 = (code **)0x0;
          local_248[0] = dVar59;
          local_248[1] = dVar60;
          FUN_144927ad4(param_1,local_1e8,local_248,0);
        }
      }
    }
  }
  *(char *)(param_1 + 0xf2) = *(char *)((longlong)param_1 + 0x791);
  if (*(char *)((longlong)param_1 + 0x791) == '\0') {
    if ((((*(char *)((longlong)param_1 + 0x6b2) != '\x01') ||
         (*(float *)((longlong)param_1 + 0x6b4) != 0.0)) ||
        ((*(float *)(param_1 + 0xd7) != 0.0 || (NAN(*(float *)(param_1 + 0xd7)))))) &&
       (lVar35 = param_1[0x24], lVar35 != 0)) {
      if (DAT_14cad2858 == 0) {
        local_290 = &local_1c8;
        local_1c8 = FUN_144a7958c;
        local_280 = FUN_14081d0ea;
        local_288 = &LAB_146395584;
        local_298 = &LAB_147a0ba80;
        local_2a0 = &LAB_14575ccce;
        local_2a8 = L"Engine";
        local_2b0 = 0x40000000000;
        local_2b8 = 0x10000004;
        local_2c0 = 0x10;
        local_2c8 = (code **)CONCAT44(local_2c8._4_4_,0x1180);
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar35 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar35 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) &&
         (iVar11 = FUN_1417c02a0(lVar35), 0 < iVar11)) {
        iVar13 = FUN_1417c02a0(lVar35);
        iVar11 = 2;
        if (iVar13 < 2) {
          iVar11 = iVar13;
        }
        FUN_1401ff402(lVar35,&local_1c8,iVar11 + -1);
        fVar52 = *(float *)(param_1 + 0xda);
        if ((0.0 < fVar52) &&
           (fVar52 * fVar52 <
            (float)((local_158 - (double)param_1[0x102]) * (local_158 - (double)param_1[0x102]) +
                   (dStack_160 - (double)param_1[0x101]) * (dStack_160 - (double)param_1[0x101]) +
                   (local_168 - (double)param_1[0x100]) * (local_168 - (double)param_1[0x100])))) {
          *(undefined1 *)(param_1 + 0xf2) = 1;
        }
        plVar24 = &local_1c8;
        plVar29 = param_1 + 0xf4;
        for (lVar35 = 0x10; lVar35 != 0; lVar35 = lVar35 + -1) {
          *plVar29 = *plVar24;
          plVar24 = plVar24 + 1;
          plVar29 = plVar29 + 1;
        }
      }
    }
    *(byte *)(param_1 + 0xf2) = *(byte *)(param_1 + 0xf2) | *(byte *)(param_1 + 0xd6);
    cVar10 = (**(code **)(*param_1 + 0x4e8))(param_1);
    if ((cVar10 == '\0') || ((param_1[0x15] != 0 && (*(char *)(param_1[0x15] + 0x60) < '\0')))) {
      *(undefined1 *)(param_1 + 0xf2) = 1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x791) = 0;
  if ((int)param_1[0x10a] == 0) goto LAB_14441f8ee;
  if (param_1[0x10c] != 0) {
    FUN_1448c69c8(param_1);
  }
  if (param_1[0xcd] != 0) {
    lVar35 = param_1[0x16];
    if (lVar35 == 0) {
      lVar35 = FUN_1448abda6(param_1);
    }
    if ((((*(char *)(lVar35 + 0x154) < '\0') && (*(longlong *)(lVar35 + 0x30) != 0)) &&
        (*(int *)(*(longlong *)(lVar35 + 0x30) + 0xa8) != 0)) &&
       ((*(char *)((longlong)param_1 + 0x831) == '\x01' &&
        (*(char *)((longlong)param_1 + 0x833) == '\0')))) {
      *(float *)((longlong)param_1 + 0x834) = param_2 + *(float *)((longlong)param_1 + 0x834);
      FUN_149082792(param_1);
    }
  }
  if (*(int *)((longlong)param_1 + 0x874) == 2) {
    fVar52 = *(float *)((longlong)param_1 + 0x87c);
  }
  else if (*(int *)((longlong)param_1 + 0x874) == 1) {
    if ((longlong)(int)param_1[0x10a] == 0) {
      fVar52 = -1.0;
    }
    else {
      lVar35 = 0;
      fVar53 = -1.0;
      do {
        fVar2 = *(float *)(*(longlong *)(param_1[0x109] + lVar35) + 0x154);
        fVar52 = fVar53;
        if (((0.0 < fVar2) && (fVar52 = fVar2, 0.0 <= fVar53)) && (fVar53 <= fVar2)) {
          fVar52 = fVar53;
        }
        lVar35 = lVar35 + 8;
        fVar53 = fVar52;
      } while ((longlong)(int)param_1[0x10a] * 8 != lVar35);
    }
    FUN_149080326(param_1,(int)*(float *)(param_1 + 0x10f),(int)fVar52);
    *(float *)(param_1 + 0x10f) = fVar52;
  }
  else {
    fVar52 = -1.0;
  }
  bVar34 = DAT_14c7649e8 == 2;
  pdVar16 = &DAT_14c846480;
  pdVar30 = local_248;
  for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
    *pdVar30 = *pdVar16;
    pdVar16 = pdVar16 + 1;
    pdVar30 = pdVar30 + 1;
  }
  if (param_1[0x10c] != 0) {
    pdVar16 = (double *)(param_1[0x10c] + 0x240);
    pdVar30 = local_248;
    for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
      *pdVar30 = *pdVar16;
      pdVar16 = pdVar16 + 1;
      pdVar30 = pdVar30 + 1;
    }
  }
  if (uVar21 != 5) {
    iVar11 = (int)param_1[0x10a];
    lVar35 = param_1[0x109];
    auVar7._4_4_ = local_1e8._12_4_;
    auVar7._0_4_ = iVar11;
    auVar7._8_8_ = 0;
    local_1e8 = auVar7 << 0x40;
    if (iVar11 == 0) {
      local_1e8 = ZEXT416(0) << 0x40;
      local_1ac = *(int *)((longlong)param_1 + 0x874);
      local_1c8 = (code *)CONCAT44(uVar21,uVar3);
      local_1c0 = 0;
      local_1b8 = 0;
LAB_14441fa3c:
      local_1c8 = (code *)CONCAT44(uVar21,uVar3);
      local_1c0 = 0;
      local_1b8 = local_1b8 & 0xffffffff;
    }
    else {
      FUN_14908510e(local_1e8,iVar11,0);
      FUN_149085170(local_1e8._0_8_,lVar35,iVar11);
      uVar12 = local_1e8._8_4_;
      uVar19 = local_1e8._0_8_;
      local_1ac = *(int *)((longlong)param_1 + 0x874);
      local_1c8 = (code *)CONCAT44(uVar21,uVar3);
      local_1c0 = 0;
      local_1b8 = CONCAT44(local_1b8._4_4_,local_1e8._8_4_);
      if (local_1e8._8_4_ == 0) goto LAB_14441fa3c;
      FUN_14908510e(&local_1c0,local_1e8._8_4_,0);
      FUN_149085170(local_1c0,uVar19,uVar12);
    }
    local_1b0 = fVar52;
    local_1a8 = bVar34;
    pdVar16 = local_248;
    pdVar30 = local_198;
    for (lVar35 = 0xc; lVar35 != 0; lVar35 = lVar35 + -1) {
      *pdVar30 = *pdVar16;
      pdVar16 = pdVar16 + 1;
      pdVar30 = pdVar30 + 1;
    }
    lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar11 = *(int *)(lVar35 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar11 == 2) goto LAB_14441fb28;
      if (iVar11 != 1) goto LAB_14441fb1f;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_14441fb28;
LAB_14441fcfa:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar11 = *(int *)(lVar35 + 0xc60), iVar11 == 2)) {
LAB_144420563:
          lVar35 = local_1c0;
          lVar33 = (longlong)(int)local_1b8;
          if (lVar33 != 0) {
            lVar31 = 0;
            do {
              *(float *)(*(longlong *)(lVar35 + lVar31) + 0x158) = local_1b0;
              *(int *)(*(longlong *)(lVar35 + lVar31) + 0x15c) = local_1ac;
              if ((local_1ac == 1) && (0.0 <= local_1b0)) {
                FUN_14908d074(*(undefined8 *)(lVar35 + lVar31),(int)local_1b0);
              }
              if (local_1a8 == true) {
                puVar27 = (undefined8 *)(*(longlong *)(lVar35 + lVar31) + 0x200);
                puVar32 = (undefined8 *)(*(longlong *)(lVar35 + lVar31) + 0x2c0);
                for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
                  *puVar32 = *puVar27;
                  puVar27 = puVar27 + 1;
                  puVar32 = puVar32 + 1;
                }
                pdVar16 = local_198;
                pdVar30 = (double *)(*(longlong *)(lVar35 + lVar31) + 0x200);
                for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
                  *pdVar30 = *pdVar16;
                  pdVar16 = pdVar16 + 1;
                  pdVar30 = pdVar30 + 1;
                }
                lVar23 = *(longlong *)(lVar35 + lVar31);
                lVar4 = *(longlong *)(lVar23 + 0x20);
                if (lVar4 != 0) {
                  *(int *)(lVar4 + 0x188) = 1 - *(int *)(lVar4 + 0x188);
                  lVar23 = *(longlong *)(lVar35 + lVar31);
                }
                lVar23 = *(longlong *)(lVar23 + 0x48);
                if (lVar23 != 0) {
                  *(int *)(lVar23 + 0x188) = 1 - *(int *)(lVar23 + 0x188);
                }
              }
              lVar31 = lVar31 + 8;
            } while (lVar33 * 8 != lVar31);
          }
          goto LAB_14442018a;
        }
        if (iVar11 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_144420563;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar27 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar18 = (uint *)*puVar27;
        if (puVar18 != (uint *)0x0) goto LAB_14441fde0;
        while( true ) {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_144425664);
          }
          lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar17 = *(undefined4 **)(lVar35 + 0x310);
          *(undefined8 *)(lVar35 + 0x310) = 0;
          if (puVar17 == (undefined4 *)0x0) {
            puVar17 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar17 = 0xffffffff;
          *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar27 = puVar17;
          FUN_140217a48(puVar27);
          puVar18 = (uint *)*puVar27;
LAB_14441fde0:
          puVar32 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar25 = (uint *)(puVar32 + 0x28);
          uVar21 = puVar18[0x12];
          if (puVar25 <= puVar18 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
            LOCK();
            uVar20 = *puVar18;
            *puVar18 = *puVar18 + uVar21 + 1;
            UNLOCK();
            if ((uVar20 ^ uVar21) != 0xffffffff) break;
            puVar18 = (uint *)*puVar27;
            *puVar18 = 0xffffffff;
            *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
            puVar18[0x12] = 0;
            *puVar27 = puVar18;
            puVar32 = (undefined8 *)((longlong)puVar18 + 0x67U & 0xfffffffffffffff0);
            puVar25 = (uint *)(puVar32 + 0x28);
            uVar21 = 0;
            if (puVar25 <= puVar18 + 0x4000) {
              uVar21 = 1;
              goto LAB_14441fe60;
            }
          }
        }
        uVar21 = uVar21 + 1;
LAB_14441fe60:
        *(uint **)(puVar18 + 0x10) = puVar25;
        puVar18[0x12] = uVar21;
        iVar11 = 0;
        FUN_1447247dc(puVar32,0);
        *puVar32 = &PTR_FUN_14baa3938;
        puVar32[0x16] = local_1c8;
        puVar32[0x17] = 0;
        puVar32[0x17] = local_1c0;
        local_1c0 = 0;
        *(int *)(puVar32 + 0x18) = (int)local_1b8;
        *(undefined4 *)((longlong)puVar32 + 0xc4) = local_1b8._4_4_;
        local_1b8 = 0;
        pfVar26 = &local_1b0;
        plVar24 = puVar32 + 0x19;
        for (lVar35 = 0xf; lVar35 != 0; lVar35 = lVar35 + -1) {
          *plVar24 = *(longlong *)pfVar26;
          pfVar26 = pfVar26 + 2;
          plVar24 = plVar24 + 1;
        }
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar21 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar21 < 2) {
            uVar28 = (ulonglong)(byte)(&DAT_149e38edc)[uVar21];
          }
          else {
            uVar28 = 2;
          }
        }
        else {
          iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar28 = 5;
        }
        if (*(code **)(puVar32[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar32[0xe] + 0x18))(puVar32 + 0xe,puVar32 + 9);
        }
        puVar32[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar32[9] = puVar32;
        puVar32[10] = puVar32;
        lVar35 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar35 == 0) {
          uVar9 = 1;
          if ((char)uVar28 != '\x06') {
            uVar9 = uVar28;
          }
          uVar28 = uVar9;
          uVar19 = 0;
        }
        else {
          if ((char)uVar28 == '\x06') {
            uVar28 = *(ulonglong *)(lVar35 + 0x38) >> 0x3b;
          }
          uVar19 = *(undefined8 *)(lVar35 + 0x30);
        }
        puVar32[0xf] = uVar19;
        puVar32[0x10] = uVar28 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar32 + 0x1c) = iVar11;
        if (puVar32 == (undefined8 *)0x0) {
          local_138 = (code *)CONCAT71(local_138._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
          UNLOCK();
          local_138 = (code *)CONCAT71(local_138._1_7_,1);
          FUN_1447439e4(puVar32);
          LOCK();
          piVar1 = (int *)(puVar32 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar32)(puVar32,1);
          }
        }
      }
      else {
        local_138 = (code *)0x0;
        local_128 = (longlong *)FUN_14001cc68(0xa0,0x10);
        *local_128 = (longlong)&PTR_LAB_14baa38d0;
        local_128[2] = (longlong)local_1c8;
        local_128[3] = 0;
        local_128[3] = local_1c0;
        local_1c0 = 0;
        *(int *)(local_128 + 4) = (int)local_1b8;
        *(undefined4 *)((longlong)local_128 + 0x24) = local_1b8._4_4_;
        local_1b8 = 0;
        pfVar26 = &local_1b0;
        plVar24 = local_128 + 5;
        for (lVar35 = 0xf; lVar35 != 0; lVar35 = lVar35 + -1) {
          *plVar24 = *(longlong *)pfVar26;
          pfVar26 = pfVar26 + 2;
          plVar24 = plVar24 + 1;
        }
        if ((ulonglong *)(local_128 + 2) != (ulonglong *)0x0) {
          local_138 = FUN_14442a6e4;
        }
        local_2c8 = &local_138;
        FUN_14005a792(&DAT_14ca9a440,L"FHairStrandsTick_TransformUpdate",&DAT_14cbf910c);
        if (local_138 != (code *)0x0) {
          plVar24 = local_128;
          if (local_128 == (longlong *)0x0) {
            plVar24 = local_118;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
      }
    }
    else {
LAB_14441fb1f:
      if (iVar11 != 0x10) goto LAB_14441fcfa;
LAB_14441fb28:
      lVar35 = local_1c0;
      lVar33 = (longlong)(int)local_1b8;
      if (lVar33 != 0) {
        lVar31 = 0;
        do {
          *(float *)(*(longlong *)(lVar35 + lVar31) + 0x158) = local_1b0;
          *(int *)(*(longlong *)(lVar35 + lVar31) + 0x15c) = local_1ac;
          if ((local_1ac == 1) && (0.0 <= local_1b0)) {
            FUN_14908d074(*(undefined8 *)(lVar35 + lVar31),(int)local_1b0);
          }
          if (local_1a8 == true) {
            puVar27 = (undefined8 *)(*(longlong *)(lVar35 + lVar31) + 0x200);
            puVar32 = (undefined8 *)(*(longlong *)(lVar35 + lVar31) + 0x2c0);
            for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
              *puVar32 = *puVar27;
              puVar27 = puVar27 + 1;
              puVar32 = puVar32 + 1;
            }
            pdVar16 = local_198;
            pdVar30 = (double *)(*(longlong *)(lVar35 + lVar31) + 0x200);
            for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
              *pdVar30 = *pdVar16;
              pdVar16 = pdVar16 + 1;
              pdVar30 = pdVar30 + 1;
            }
            lVar23 = *(longlong *)(lVar35 + lVar31);
            lVar4 = *(longlong *)(lVar23 + 0x20);
            if (lVar4 != 0) {
              *(int *)(lVar4 + 0x188) = 1 - *(int *)(lVar4 + 0x188);
              lVar23 = *(longlong *)(lVar35 + lVar31);
            }
            lVar23 = *(longlong *)(lVar23 + 0x48);
            if (lVar23 != 0) {
              *(int *)(lVar23 + 0x188) = 1 - *(int *)(lVar23 + 0x188);
            }
          }
          lVar31 = lVar31 + 8;
        } while (lVar33 * 8 != lVar31);
      }
    }
LAB_14442018a:
    FUN_145ad6ee2(local_1c0,local_1b8 & 0xffffffff);
    if (local_1c0 != 0) {
      FUN_1400020a8();
    }
    FUN_145ad6ee2(local_1e8._0_8_,local_1e8._8_4_);
    if (local_1e8._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c7649e8 == 3) || (param_1[0xe8] != 0)) {
    FUN_1448c6f34(param_1);
  }
LAB_14441f8ee:
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144420660 FUN_144420660 body=2207 status=ok
// SIG undefined FUN_144420660(void)

void FUN_144420660(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined1 auStack_188 [32];
  code **local_168;
  longlong local_158;
  int local_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int iStack_138;
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8 [12];
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfb;
  if (DAT_14c7649e8 == 3) {
    plVar14 = &DAT_14c846480;
    plVar18 = local_d8;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *plVar18 = *plVar14;
      plVar14 = plVar14 + 1;
      plVar18 = plVar18 + 1;
    }
    if (*(longlong *)(param_1 + 0x860) != 0) {
      plVar14 = (longlong *)(*(longlong *)(param_1 + 0x860) + 0x240);
      plVar18 = local_d8;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *plVar18 = *plVar14;
        plVar14 = plVar14 + 1;
        plVar18 = plVar18 + 1;
      }
    }
    local_e8 = 0;
    local_e0 = *(int *)(param_1 + 0x850);
    uVar10 = *(undefined8 *)(param_1 + 0x848);
    if (local_e0 == 0) {
      local_dc = 0;
      local_150 = 0;
LAB_14442082c:
      local_158 = 0;
      uStack_14c = 0;
    }
    else {
      FUN_14908510e(&local_e8,local_e0,0);
      FUN_149085170(local_e8,uVar10);
      lVar12 = local_e8;
      local_158 = 0;
      local_150 = local_e0;
      if (local_e0 == 0) goto LAB_14442082c;
      FUN_14908510e(&local_158,local_e0,0);
      FUN_149085170(local_158,lVar12);
    }
    plVar14 = local_d8;
    plVar18 = &uStack_148;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *plVar18 = *plVar14;
      plVar14 = plVar14 + 1;
      plVar18 = plVar18 + 1;
    }
    lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar5 = *(int *)(lVar12 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar5 != 2) {
        if (iVar5 != 1) goto LAB_144420894;
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_14442089d;
        goto LAB_14442095c;
      }
LAB_14442089d:
      if ((longlong)local_150 != 0) {
        lVar12 = 0;
        do {
          puVar16 = (undefined8 *)(*(longlong *)(local_158 + lVar12) + 0x200);
          puVar19 = (undefined8 *)(*(longlong *)(local_158 + lVar12) + 0x2c0);
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar19 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar19 = puVar19 + 1;
          }
          plVar14 = &uStack_148;
          plVar18 = (longlong *)(*(longlong *)(local_158 + lVar12) + 0x200);
          for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
            *plVar18 = *plVar14;
            plVar14 = plVar14 + 1;
            plVar18 = plVar18 + 1;
          }
          lVar13 = *(longlong *)(local_158 + lVar12);
          lVar3 = *(longlong *)(lVar13 + 0x20);
          if (lVar3 != 0) {
            *(int *)(lVar3 + 0x188) = 1 - *(int *)(lVar3 + 0x188);
            lVar13 = *(longlong *)(local_158 + lVar12);
          }
          lVar13 = *(longlong *)(lVar13 + 0x48);
          if (lVar13 != 0) {
            *(int *)(lVar13 + 0x188) = 1 - *(int *)(lVar13 + 0x188);
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)local_150 * 8 != lVar12);
      }
    }
    else {
LAB_144420894:
      if (iVar5 == 0x10) goto LAB_14442089d;
LAB_14442095c:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (iVar5 = *(int *)(lVar12 + 0xc60), iVar5 != 2)) {
          if (iVar5 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            if (DVar6 == DVar7) goto LAB_144420e5b;
          }
          goto LAB_14442098d;
        }
LAB_144420e5b:
        if ((longlong)local_150 != 0) {
          lVar12 = 0;
          do {
            puVar16 = (undefined8 *)(*(longlong *)(local_158 + lVar12) + 0x200);
            puVar19 = (undefined8 *)(*(longlong *)(local_158 + lVar12) + 0x2c0);
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *puVar19 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar19 = puVar19 + 1;
            }
            plVar14 = &uStack_148;
            plVar18 = (longlong *)(*(longlong *)(local_158 + lVar12) + 0x200);
            for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
              *plVar18 = *plVar14;
              plVar14 = plVar14 + 1;
              plVar18 = plVar18 + 1;
            }
            lVar13 = *(longlong *)(local_158 + lVar12);
            lVar3 = *(longlong *)(lVar13 + 0x20);
            if (lVar3 != 0) {
              *(int *)(lVar3 + 0x188) = 1 - *(int *)(lVar3 + 0x188);
              lVar13 = *(longlong *)(local_158 + lVar12);
            }
            lVar13 = *(longlong *)(lVar13 + 0x48);
            if (lVar13 != 0) {
              *(int *)(lVar13 + 0x188) = 1 - *(int *)(lVar13 + 0x188);
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)local_150 * 8 != lVar12);
        }
      }
      else {
LAB_14442098d:
        if (DAT_14ca9a43c == 0) {
          puVar16 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar9 = (uint *)*puVar16;
          if (puVar9 != (uint *)0x0) goto LAB_144420a3a;
          while( true ) {
            uVar11 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar11 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar11 | 1;
              __tlregdtor(&LAB_144425664);
            }
            lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar8 = *(undefined4 **)(lVar12 + 0x310);
            *(undefined8 *)(lVar12 + 0x310) = 0;
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar8 = 0xffffffff;
            *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
            puVar8[0x12] = 0;
            *puVar16 = puVar8;
            FUN_140217a48(puVar16);
            puVar9 = (uint *)*puVar16;
LAB_144420a3a:
            puVar19 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 0xfU & 0xfffffffffffffff0);
            puVar15 = (uint *)(puVar19 + 0x24);
            uVar11 = puVar9[0x12];
            if (puVar15 <= puVar9 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
              LOCK();
              uVar2 = *puVar9;
              *puVar9 = *puVar9 + uVar11 + 1;
              UNLOCK();
              if ((uVar2 ^ uVar11) != 0xffffffff) break;
              puVar9 = (uint *)*puVar16;
              *puVar9 = 0xffffffff;
              *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
              puVar9[0x12] = 0;
              *puVar16 = puVar9;
              puVar19 = (undefined8 *)((longlong)puVar9 + 0x67U & 0xfffffffffffffff0);
              puVar15 = (uint *)(puVar19 + 0x24);
              uVar11 = 0;
              if (puVar15 <= puVar9 + 0x4000) {
                uVar11 = 1;
                goto LAB_144420aba;
              }
            }
          }
          uVar11 = uVar11 + 1;
LAB_144420aba:
          *(uint **)(puVar9 + 0x10) = puVar15;
          puVar9[0x12] = uVar11;
          iVar5 = 0;
          FUN_1447247dc(puVar19,0);
          *puVar19 = &PTR_FUN_14baa3970;
          puVar19[0x16] = local_158;
          local_158 = 0;
          *(int *)(puVar19 + 0x17) = local_150;
          *(undefined4 *)((longlong)puVar19 + 0xbc) = uStack_14c;
          local_150 = 0;
          uStack_14c = 0;
          plVar14 = &uStack_148;
          plVar18 = puVar19 + 0x18;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *plVar18 = *plVar14;
            plVar14 = plVar14 + 1;
            plVar18 = plVar18 + 1;
          }
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar11 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
              uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
            }
            else {
              uVar17 = 2;
            }
          }
          else {
            iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar17 = 5;
          }
          if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
          }
          puVar19[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar19[9] = puVar19;
          puVar19[10] = puVar19;
          lVar12 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar12 == 0) {
            uVar4 = 1;
            if ((char)uVar17 != '\x06') {
              uVar4 = uVar17;
            }
            uVar17 = uVar4;
            uVar10 = 0;
          }
          else {
            if ((char)uVar17 == '\x06') {
              uVar17 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
            }
            uVar10 = *(undefined8 *)(lVar12 + 0x30);
          }
          puVar19[0xf] = uVar10;
          puVar19[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar19 + 0x1c) = iVar5;
          if (puVar19 == (undefined8 *)0x0) {
            local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
            UNLOCK();
            local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
            FUN_1447439e4(puVar19);
            LOCK();
            piVar1 = (int *)(puVar19 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar19)(puVar19,1);
            }
          }
        }
        else {
          local_78[0] = (code *)0x0;
          local_68 = (longlong *)FUN_14001cc68(0x80,0x10);
          *local_68 = (longlong)&PTR_LAB_14baa3950;
          local_68[2] = local_158;
          local_158 = 0;
          *(int *)(local_68 + 3) = local_150;
          *(undefined4 *)((longlong)local_68 + 0x1c) = uStack_14c;
          local_150 = 0;
          uStack_14c = 0;
          plVar14 = &uStack_148;
          plVar18 = local_68 + 4;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *plVar18 = *plVar14;
            plVar14 = plVar14 + 1;
            plVar18 = plVar18 + 1;
          }
          if (local_68 + 2 != (longlong *)0x0) {
            local_78[0] = FUN_14442ab00;
          }
          local_168 = local_78;
          FUN_14005a792(&DAT_14ca9a440,L"FHairStrandsTick_TransformUpdate",&DAT_14cbf9110);
          if (local_78[0] != (code *)0x0) {
            plVar14 = local_68;
            if (local_68 == (longlong *)0x0) {
              plVar14 = local_58;
            }
            (**(code **)(*plVar14 + 0x10))();
          }
        }
      }
    }
    FUN_145ad6ee2(local_158,local_150);
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    FUN_145ad6ee2(local_e8,local_e0);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  plVar14 = *(longlong **)(param_1 + 0x740);
  if ((plVar14 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x660) != 0)) {
    local_150 = 2;
    uStack_14c = 0;
    uStack_140 = 0;
    uStack_13c = 0;
    iStack_138 = 0;
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      local_158 = 0;
    }
    else {
      local_158 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218);
    }
    uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x660) + 0x18);
    uStack_148._0_4_ = (undefined4)uVar10;
    uStack_148._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    (**(code **)(*plVar14 + 0x2b0))(plVar14,&local_158);
    if (iStack_138 != 0) {
      puVar16 = (undefined8 *)CONCAT44(uStack_13c,uStack_140);
      if (puVar16 == (undefined8 *)0x0) goto LAB_144420749;
      (**(code **)*puVar16)(puVar16,0);
      FUN_1446efa72(&uStack_140,0,0,0x10);
      iStack_138 = 0;
    }
    if (CONCAT44(uStack_13c,uStack_140) != 0) {
      FUN_1400020a8();
    }
  }
LAB_144420749:
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144420f00 FUN_144420f00 body=374 status=ok
// SIG undefined FUN_144420f00(void)

void FUN_144420f00(void)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong local_40;
  int local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490736aa(&local_40,0x10,1,0);
  uVar8 = (ulonglong)local_30;
  lVar2 = local_40;
  if ((int)local_30 < local_38 && -1 < (int)local_30) {
    iVar7 = local_38;
    do {
      uVar5 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + (uVar8 & 0xffffffff) * 8) + 0x850);
      uVar4 = (uint)uVar8;
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          iVar7 = (int)uVar8;
          if (iVar7 < 0) {
LAB_144420fdb:
            puVar6 = (undefined8 *)0x0;
          }
          else {
            lVar2 = *(longlong *)(local_40 + (longlong)(int)local_30 * 8);
            iVar3 = *(int *)(lVar2 + 0x850);
            if ((iVar7 < iVar3) &&
               (puVar6 = *(undefined8 **)(*(longlong *)(lVar2 + 0x848) + uVar8 * 8),
               puVar6 != (undefined8 *)0x0)) {
              LOCK();
              *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
              UNLOCK();
              LOCK();
              piVar1 = (int *)(puVar6 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar6)(puVar6,1);
              }
              lVar2 = *(longlong *)(local_40 + (longlong)(int)local_30 * 8);
              iVar3 = *(int *)(lVar2 + 0x850);
            }
            if ((iVar3 <= iVar7) ||
               (puVar6 = *(undefined8 **)(*(longlong *)(lVar2 + 0x848) + uVar8 * 8),
               puVar6 == (undefined8 *)0x0)) goto LAB_144420fdb;
            LOCK();
            *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
            UNLOCK();
            LOCK();
            piVar1 = (int *)(puVar6 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
          FUN_149083422(local_50,puVar6);
          uVar8 = uVar8 + 1;
          lVar2 = local_40;
          iVar7 = local_38;
          uVar4 = local_30;
        } while (uVar5 != uVar8);
      }
      uVar8 = (longlong)(int)uVar4;
      do {
        uVar5 = uVar8;
        uVar8 = uVar5 + 1;
        local_30 = (uint)uVar8;
        if ((longlong)iVar7 <= (longlong)uVar8) break;
      } while (*(longlong *)(lVar2 + uVar8 * 8) == 0);
    } while ((-2 < (longlong)uVar5) && ((int)local_30 < iVar7));
  }
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144421077 FUN_144421077 body=69 status=ok
// SIG undefined FUN_144421077(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144421077(void)

{
  _DAT_14cbf8270 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444210b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8278,1);
  return;
}



// FUNCTION 1444210bc FUN_1444210bc body=69 status=ok
// SIG undefined FUN_1444210bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444210bc(void)

{
  _DAT_14cbf8288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444210fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8290,1);
  return;
}



// FUNCTION 144421101 FUN_144421101 body=55 status=ok
// SIG undefined FUN_144421101(void)

void FUN_144421101(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf82b8 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf82b8 = FUN_14171c317(FUN_14667a8fe,uVar1,L"EFollicleMaskChannel");
  }
  return;
}



// FUNCTION 144421138 FUN_144421138 body=55 status=ok
// SIG undefined FUN_144421138(void)

void FUN_144421138(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf8300 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf8300 = FUN_14171c317(FUN_14667aa2b,uVar1,L"EStrandsTexturesTraceType");
  }
  return;
}



// FUNCTION 14442116f FUN_14442116f body=55 status=ok
// SIG undefined FUN_14442116f(void)

void FUN_14442116f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf8318 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf8318 = FUN_14171c317(FUN_14667aa5a,uVar1,L"EStrandsTexturesMeshType");
  }
  return;
}



// FUNCTION 1444211a6 FUN_1444211a6 body=69 status=ok
// SIG undefined FUN_1444211a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444211a6(void)

{
  _DAT_14cbf8340 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444211e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8348,1);
  return;
}



// FUNCTION 1444211eb FUN_1444211eb body=69 status=ok
// SIG undefined FUN_1444211eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444211eb(void)

{
  _DAT_14cbf8358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442122d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8360,1);
  return;
}



// FUNCTION 144421230 FUN_144421230 body=69 status=ok
// SIG undefined FUN_144421230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144421230(void)

{
  _DAT_14cbf8370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144421272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8378,1);
  return;
}



// FUNCTION 144421275 FUN_144421275 body=69 status=ok
// SIG undefined FUN_144421275(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144421275(void)

{
  _DAT_14cbf8388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444212b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8390,1);
  return;
}



// FUNCTION 1444212ba FUN_1444212ba body=69 status=ok
// SIG undefined FUN_1444212ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444212ba(void)

{
  _DAT_14cbf83a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444212fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf83a8,1);
  return;
}



// FUNCTION 1444212ff FUN_1444212ff body=69 status=ok
// SIG undefined FUN_1444212ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444212ff(void)

{
  _DAT_14cbf83b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144421341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf83c0,1);
  return;
}



// FUNCTION 144421344 FUN_144421344 body=69 status=ok
// SIG undefined FUN_144421344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144421344(void)

{
  _DAT_14cbf83c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144421386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf83d0,1);
  return;
}



// FUNCTION 144421389 FUN_144421389 body=69 status=ok
// SIG undefined FUN_144421389(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144421389(void)

{
  _DAT_14cbf83e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444213cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf83e8,1);
  return;
}



// FUNCTION 1444213ce FUN_1444213ce body=69 status=ok
// SIG undefined FUN_1444213ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444213ce(void)

{
  _DAT_14cbf83f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144421410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8400,1);
  return;
}



// FUNCTION 144421413 FUN_144421413 body=69 status=ok
// SIG undefined FUN_144421413(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144421413(void)

{
  _DAT_14cbf8410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144421455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8418,1);
  return;
}



// FUNCTION 144421458 FUN_144421458 body=69 status=ok
// SIG undefined FUN_144421458(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144421458(void)

{
  _DAT_14cbf8428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442149a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8430,1);
  return;
}



// FUNCTION 14442149d FUN_14442149d body=69 status=ok
// SIG undefined FUN_14442149d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442149d(void)

{
  _DAT_14cbf8440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444214df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8448,1);
  return;
}



// FUNCTION 1444214e2 FUN_1444214e2 body=69 status=ok
// SIG undefined FUN_1444214e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444214e2(void)

{
  _DAT_14cbf8458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144421524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf8460,1);
  return;
}



// FUNCTION 14442153f FUN_14442153f body=1821 status=ok
// SIG undefined FUN_14442153f(void)

void FUN_14442153f(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,char param_6,longlong *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  bool bVar29;
  float fVar30;
  undefined1 auStack_3e8 [32];
  int *local_3c8;
  longlong local_3c0;
  uint local_3b4;
  longlong local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined1 local_385;
  int local_384;
  undefined1 *local_380;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  longlong lStack_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_398 = param_2;
  local_390 = param_3;
  if ((*(longlong *)
        (&DAT_14ca814b0 +
        (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) * 0x3c) !=
       DAT_14ca80038) ||
     ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) *
                0x3c + 3) & 1) != 0)) {
    if (*(longlong *)(param_4 + 0x48) == 0) {
      iVar7 = 0x3e800;
    }
    else {
      iVar7 = ((uint)((ulonglong)
                      *(uint *)(*(longlong *)(*(longlong *)(param_4 + 0x48) + 0x40) + 100) *
                      0xaaaaaaab >> 0x20) & 0x3ffffffc) << 2;
    }
    DAT_14ca4d100 = 1;
    DAT_14ca4d330 = DAT_14ca4d330 + *(int *)(param_4 + 0x18) * 0x10 + iVar7;
    DAT_14ca4d32c = DAT_14ca4d32c + *(int *)(param_4 + 0x18) * 0x20 + 0x800;
    if (param_5 != 0) {
      local_378 = 0;
      uStack_370 = 0;
      iVar7 = (int)param_7[1];
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      local_3c0 = param_1;
      if (iVar7 != 0) {
        FUN_14908c86e(&local_378);
        param_1 = local_3c0;
        if ((longlong)(int)param_7[1] != 0) {
          lVar15 = *param_7;
          lVar12 = (longlong)(int)param_7[1] * 0x70;
          do {
            lVar26 = (longlong)(int)uStack_370;
            uVar22 = (int)uStack_370 + 1;
            uStack_370 = CONCAT44(uStack_370._4_4_,uVar22);
            if (uStack_370._4_4_ < uVar22) {
              FUN_14908c8c4(&local_378);
              param_1 = local_3c0;
            }
            *(longlong *)(local_378 + lVar26 * 8) = lVar15;
            lVar15 = lVar15 + 0x70;
            lVar12 = lVar12 + -0x70;
          } while (lVar12 != 0);
        }
      }
      lVar15 = local_378;
      iVar7 = (int)uStack_370;
      lVar12 = (longlong)(int)uStack_370;
      local_3a0 = param_4;
      if (1 < lVar12) {
        memset(local_358,0,0x2f0);
        local_368 = lVar15;
        lStack_360 = lVar15 + lVar12 * 8 + -8;
        fVar30 = logf((float)iVar7);
        local_358[0] = (int)(longlong)(fVar30 + fVar30);
        plVar10 = &local_368;
        do {
          puVar28 = (undefined8 *)*plVar10;
          puVar14 = (undefined8 *)plVar10[1];
          iVar7 = (int)plVar10[2];
          iVar16 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar28) >> 3);
          uVar23 = (ulonglong)(iVar16 + 1);
          puVar11 = puVar28;
          puVar13 = puVar28;
          puVar8 = puVar14;
          if (iVar7 != 0) {
LAB_1444216d6:
            if (8 < (int)(uint)uVar23) {
              uVar22 = (uint)uVar23 >> 1;
              uVar2 = puVar13[uVar22];
              puVar13[uVar22] = *puVar13;
              *puVar13 = uVar2;
              puVar24 = puVar8 + 1;
              puVar28 = puVar13;
              do {
                puVar5 = puVar28 + 1;
                puVar18 = puVar28 + 1;
                do {
                  puVar28 = puVar18;
                  puVar27 = puVar5;
                  if (puVar8 < puVar28) break;
                  puVar5 = puVar27 + 1;
                  puVar18 = puVar28 + 1;
                } while (*(uint *)*puVar28 <= *(uint *)*puVar13);
                puVar5 = puVar24 + -2;
                do {
                  puVar18 = puVar24;
                  puVar25 = puVar5;
                  puVar24 = puVar18 + -1;
                  if (puVar24 <= puVar13) break;
                  puVar5 = puVar25 + -1;
                } while (*(uint *)*puVar13 <= *(uint *)*puVar24);
                if (puVar24 < puVar28) goto LAB_144421764;
                uVar2 = *puVar28;
                *puVar28 = *puVar24;
                *puVar24 = uVar2;
              } while( true );
            }
            if (puVar13 < puVar8) {
              do {
                puVar28 = puVar13;
                if (puVar13 + 1 <= puVar8) {
                  uVar22 = *(uint *)*puVar13;
                  puVar14 = puVar13 + 1;
                  do {
                    uVar1 = *(uint *)*puVar14;
                    bVar29 = uVar22 < uVar1;
                    if (uVar22 <= uVar1) {
                      uVar22 = uVar1;
                    }
                    if (bVar29) {
                      puVar28 = puVar14;
                    }
                    puVar14 = puVar14 + 1;
                  } while (puVar14 <= puVar8);
                }
                uVar2 = *puVar28;
                *puVar28 = *puVar8;
                *puVar8 = uVar2;
                puVar8 = puVar8 + -1;
              } while (puVar13 < puVar8);
            }
            goto LAB_14442197d;
          }
LAB_1444217f7:
          iVar7 = (int)uVar23;
          if (iVar7 != 0) {
            iVar16 = (iVar16 - (iVar16 + -1 >> 0x1f)) + -1 >> 1;
            iVar21 = iVar16;
joined_r0x00014442181e:
            do {
              iVar20 = iVar16 * 2 + 1;
              if (iVar20 < iVar7) {
                iVar19 = iVar16 * 2 + 2;
                if ((iVar19 < iVar7) && (*(uint *)puVar28[iVar20] <= *(uint *)puVar28[iVar19])) {
                  iVar20 = iVar19;
                }
                puVar3 = (uint *)puVar28[iVar16];
                if (*puVar3 < *(uint *)puVar28[iVar20]) {
                  puVar28[iVar16] = (uint *)puVar28[iVar20];
                  puVar28[iVar20] = puVar3;
                  iVar16 = iVar20;
                  goto joined_r0x00014442181e;
                }
              }
              bVar29 = iVar21 != 0;
              iVar16 = iVar21 + -1;
              iVar21 = iVar16;
            } while (bVar29);
            if (1 < iVar7) {
              uVar2 = *puVar28;
              *puVar28 = puVar28[uVar23 - 1];
              puVar28[uVar23 - 1] = uVar2;
              if (iVar7 != 2) {
                do {
                  uVar17 = uVar23 - 1;
                  iVar7 = 0;
                  iVar21 = 1;
                  iVar16 = 0;
                  do {
                    iVar7 = iVar7 + 2;
                    iVar20 = iVar21;
                    if (((longlong)iVar7 < (longlong)uVar17) &&
                       (*(uint *)puVar28[iVar21] <= *(uint *)puVar28[iVar7])) {
                      iVar20 = iVar7;
                    }
                    puVar3 = (uint *)puVar28[iVar16];
                    if (*(uint *)puVar28[iVar20] <= *puVar3) break;
                    puVar28[iVar16] = (uint *)puVar28[iVar20];
                    puVar28[iVar20] = puVar3;
                    iVar7 = iVar20 * 2;
                    iVar21 = iVar20 * 2 + 1;
                    iVar16 = iVar20;
                  } while ((longlong)iVar21 < (longlong)uVar17);
                  uVar2 = *puVar28;
                  *puVar28 = puVar28[uVar23 - 2];
                  puVar28[uVar23 - 2] = uVar2;
                  uVar23 = uVar17;
                } while (2 < uVar17);
              }
            }
          }
LAB_14442197d:
          plVar10 = plVar10 + -3;
        } while (&local_368 <= plVar10);
        param_1 = local_3c0;
      }
      lVar15 = local_378;
      if ((int)uStack_370 != 0) {
        local_3b4 = (uint)(param_6 == '\x0f');
        local_3a8 = (longlong *)(param_1 + 0x70);
        local_3b0 = param_1 + 0x98;
        lVar26 = (longlong)(int)uStack_370 << 3;
        lVar12 = 0;
        do {
          piVar4 = *(int **)(lVar15 + lVar12 * 8);
          FUN_145e9cc8c();
          FUN_1448e935e(local_390,&local_368,&DAT_14cbf8600,0);
          FUN_145e9cc8c();
          plVar10 = local_3a8;
          puVar28 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar8 = puVar28 + 0xe;
          if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
            FUN_140023dd8(local_3a8,0x80);
            puVar28 = (undefined8 *)(*plVar10 + 0xfU & 0xfffffffffffffff0);
            puVar8 = puVar28 + 0xe;
            param_1 = local_3c0;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar8;
          *puVar28 = &PTR_FUN_14baa3980;
          puVar28[2] = 0;
          *(undefined1 *)(puVar28 + 3) = 1;
          puVar28[10] = 0;
          puVar28[4] = 0;
          puVar28[5] = 0;
          *(undefined1 *)(puVar28 + 0xb) = 1;
          puVar28[0xc] = 0;
          puVar28[0xd] = 0;
          iVar7 = *(int *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0xa4) < iVar7 + 1U) {
            FUN_1448cfae8(local_3b0,iVar7);
            param_1 = local_3c0;
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 8) = puVar28;
          *(int *)(puVar28 + 6) = *piVar4;
          lVar9 = FUN_1447e4f80();
          cVar6 = *(char *)(lVar9 + 0x41);
          if (*(char *)(lVar9 + 0x41) == '\x03') {
            cVar6 = '\x02';
          }
          puVar28[2] = *(undefined8 *)(local_398 + 0x18);
          *(char *)(puVar28 + 3) = cVar6;
          *(undefined4 *)((longlong)puVar28 + 0x34) =
               *(undefined4 *)(*(longlong *)(local_3a0 + 0x30) + (longlong)*piVar4 * 8);
          *(undefined4 *)(puVar28 + 7) =
               *(undefined4 *)(*(longlong *)(local_3a0 + 0x30) + 4 + (longlong)*piVar4 * 8);
          *(undefined4 *)((longlong)puVar28 + 0x3c) =
               *(undefined4 *)(*(longlong *)(piVar4 + 0x1a) + 0x48c);
          *(undefined4 *)(puVar28 + 8) = *(undefined4 *)(*(longlong *)(piVar4 + 0x1a) + 0x490);
          *(int *)((longlong)puVar28 + 0x44) = (int)lVar12;
          *(uint *)(puVar28 + 9) = local_3b4;
          puVar28[4] = *(undefined8 *)(local_3a0 + 0x48);
          puVar28[5] = *(undefined8 *)(local_3a0 + 0x28);
          FUN_1472ea582(param_1,param_5,puVar28 + 10);
          iVar7 = *(int *)(puVar28 + 7) + 0x3f;
          local_384 = *(int *)(puVar28 + 7) + 0x7e;
          if (-1 < iVar7) {
            local_384 = iVar7;
          }
          local_384 = local_384 >> 6;
          local_380 = &DAT_100000001;
          local_3c8 = &local_384;
          FUN_14908396a(param_1,&local_385,&local_368);
          lVar12 = lVar12 + 1;
          lVar26 = lVar26 + -8;
        } while (lVar26 != 0);
      }
      if (local_378 != 0) {
        FUN_1400020a8(local_378);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144421764:
  uVar2 = *puVar13;
  *puVar13 = *puVar24;
  *puVar24 = uVar2;
  iVar7 = iVar7 + -1;
  puVar18 = puVar18 + -2;
  if ((longlong)puVar25 - (longlong)puVar11 < (longlong)puVar14 - (longlong)puVar27) {
    if (puVar28 < puVar8) {
      *plVar10 = (longlong)puVar28;
      plVar10[1] = (longlong)puVar8;
      *(int *)(plVar10 + 2) = iVar7;
      plVar10 = plVar10 + 3;
    }
    puVar28 = puVar13;
    puVar14 = puVar25;
    if (puVar24 <= puVar13 + 1) goto LAB_14442197d;
  }
  else {
    if (puVar13 + 1 < puVar24) {
      *plVar10 = (longlong)puVar13;
      plVar10[1] = (longlong)puVar18;
      *(int *)(plVar10 + 2) = iVar7;
      plVar10 = plVar10 + 3;
    }
    puVar13 = puVar27;
    puVar18 = puVar8;
    puVar14 = puVar8;
    if (puVar8 <= puVar28) goto LAB_14442197d;
  }
  iVar16 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar13) >> 3);
  uVar23 = (ulonglong)(iVar16 + 1);
  puVar11 = puVar13;
  puVar13 = puVar28;
  puVar8 = puVar18;
  if (iVar7 == 0) goto LAB_1444217f7;
  goto LAB_1444216d6;
}



// FUNCTION 144421c9a FUN_144421c9a body=11372 status=ok
// SIG undefined FUN_144421c9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144421c9a(ulonglong param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,undefined8 param_7,int *param_8,
                  longlong param_9,undefined8 param_10,undefined8 *param_11,undefined8 param_12)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  void *_Src;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  byte bVar16;
  char cVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong lVar24;
  undefined4 *puVar25;
  int *piVar26;
  undefined8 *puVar27;
  uint uVar28;
  undefined4 uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  undefined1 *puVar33;
  uint uVar34;
  float fVar35;
  undefined2 *puVar36;
  wchar_t *pwVar37;
  ulonglong uVar38;
  int iVar39;
  ulonglong uVar40;
  undefined **ppuVar41;
  int iVar42;
  longlong *plVar43;
  longlong lVar44;
  ulonglong uVar45;
  longlong *plVar46;
  longlong *plVar47;
  longlong lVar48;
  undefined8 *puVar49;
  int iVar50;
  longlong lVar51;
  undefined8 *puVar52;
  bool bVar53;
  undefined1 auVar54 [16];
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auStack_298 [32];
  int *local_278;
  undefined1 local_270;
  longlong *local_260;
  longlong *local_258;
  ulonglong local_250;
  longlong *local_248;
  longlong *local_240;
  longlong local_238;
  undefined8 *local_230;
  ulonglong local_228;
  uint *local_220;
  uint local_214;
  undefined8 *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  int *local_1c8;
  int *local_1c0;
  undefined2 *local_1b8;
  int local_1b0;
  longlong local_1a8 [2];
  undefined8 local_198;
  undefined8 uStack_190;
  int local_188;
  int local_184;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  int local_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138 [2];
  undefined8 local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_228 = param_2;
  bVar16 = FUN_14352174c(param_4);
  local_238 = CONCAT71(local_238._1_7_,bVar16);
  uVar34 = (uint)bVar16;
  local_250 = param_1;
  if (bVar16 == 0x1b) {
    local_148 = 0;
    local_1f8 = local_228;
    local_1f0 = *param_11;
    local_1e8 = param_11[1];
    local_1e0 = param_12;
    local_1d8 = (void *)0x0;
    local_1d0 = (int)param_5[1];
    lVar44 = (longlong)local_1d0;
    _Src = (void *)*param_5;
    local_208 = param_1;
    uStack_200 = param_4;
    if (lVar44 == 0) {
      local_1cc = 0;
    }
    else {
      FUN_14908cd02(&local_1d8,local_1d0);
      memcpy(local_1d8,_Src,lVar44 << 3);
    }
    local_1c8 = param_8;
    local_1c0 = &local_148;
    FUN_144424908(&local_208,0);
    FUN_144424908(&local_208,1);
    if (local_1d8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else if ((bVar16 == 0x13) &&
          ((*(longlong *)
             (&DAT_14ca814b0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) *
             0x3c) != DAT_14ca80038 ||
           ((*(byte *)((longlong)&DAT_14ca814d0 +
                      (ulonglong)
                      *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) * 0x3c
                      + 3) & 1) != 0)))) {
    uVar28 = *(uint *)(param_5 + 1);
    plVar43 = (longlong *)(ulonglong)uVar28;
    local_128 = (undefined1 *)0x0;
    uStack_120 = 0;
    local_208 = local_208 & 0xffffffff00000000;
    FUN_146f37e98(&local_128,&local_208,5);
    if (plVar43 != (longlong *)0x0) {
      uVar19 = 0;
      do {
        *(int *)(local_128 +
                (ulonglong)
                *(byte *)(*param_6 +
                         (longlong)
                         *(int *)(*(longlong *)(*param_5 + (longlong)(int)uVar19 * 8) + 0x10)) * 4)
             = *(int *)(local_128 +
                       (ulonglong)
                       *(byte *)(*param_6 +
                                (longlong)
                                *(int *)(*(longlong *)(*param_5 + (longlong)(int)uVar19 * 8) + 0x10)
                                ) * 4) + 1;
        uVar19 = uVar19 + 1;
      } while (uVar28 != uVar19);
    }
    DAT_14ca4d100 = 1;
    DAT_14ca4d330 = DAT_14ca4d330 + uVar28 * 0x40;
    DAT_14ca4d32c = uVar28 * 0x100 + DAT_14ca4d32c + 0x200;
    if (param_8 != (int *)0x0 && uVar28 != 0) {
      FUN_1472ebdac(&local_208,uVar28,0x20);
      local_198 = 0;
      uStack_190 = 0;
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(plVar43);
      }
      FUN_1444275fa(&local_198,plVar43);
      auVar15 = _DAT_1499319a0;
      iVar42 = 0;
      local_214 = 0x13;
      local_258 = plVar43;
      do {
        lVar44 = *(longlong *)(*param_5 + (longlong)iVar42 * 8);
        puVar36 = &DAT_149dfb77a;
        if (*(int *)(lVar44 + 0x140) != 0) {
          puVar36 = *(undefined2 **)(lVar44 + 0x138);
        }
        FUN_140056680(&local_148,puVar36);
        FUN_1472ebde2(&local_208,&local_148,iVar42);
        if (CONCAT44(iStack_144,local_148) != 0) {
          FUN_1400020a8();
        }
        fVar35 = *(float *)(*(longlong *)(lVar44 + 0x3a0) + 0x47c);
        uVar28 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 0x428);
        uVar18 = FUN_14909b932(lVar44);
        uVar40 = uStack_190;
        local_240 = (longlong *)CONCAT71(local_240._1_7_,uVar18);
        local_260 = (longlong *)
                    CONCAT71(local_260._1_7_,
                             *(undefined1 *)(*param_6 + (longlong)*(int *)(lVar44 + 0x10)));
        lVar48 = (longlong)(int)uStack_190;
        uVar34 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar34);
        if (uStack_190._4_4_ < uVar34) {
          FUN_1444276ea(&local_198,uVar40 & 0xffffffff);
        }
        lVar7 = local_198;
        lVar51 = local_198 + lVar48 * 0x50;
        FUN_1444276d3();
        uVar34 = local_214;
        uVar19 = (uVar28 & 0xff) << 0x10 | (uint)*(byte *)(lVar44 + 0x130) |
                 (*(uint *)(lVar44 + 0x134) & 0xff) << 8;
        *(uint *)(lVar7 + lVar48 * 0x50) =
             (uint)*(byte *)(lVar44 + 0x3a) << 0x1f |
             *(int *)(lVar44 + 0x38) << 0x1e |
             (*(uint *)(lVar44 + 0x3ac) & 7) << 0x1b |
             (*(uint *)(lVar44 + 0x3a8) & 7) << 0x18 | uVar19;
        uVar28 = auVar15._0_4_;
        fVar31 = (float)((uint)fVar35 & uVar28);
        if ((uint)fVar31 < 0x47800000) {
          if ((uint)fVar31 < 0x38800000) {
            fVar31 = fVar31 + 0.5;
          }
          else {
            fVar31 = (float)((int)fVar31 + 0x8000fff + (uint)(((uint)fVar31 >> 0xd & 1) != 0) >> 0xd
                            );
          }
        }
        else {
          fVar31 = (float)((0x7f800000 < (uint)fVar31 | 0x3e) << 9);
        }
        auVar54 = ZEXT416(0xbf800000);
        if (*(char *)(lVar44 + 0xf4) == '\x01') {
          auVar54 = ZEXT416(*(uint *)(lVar44 + 0xf0));
        }
        fVar32 = (float)(auVar54._0_4_ & uVar28);
        if ((uint)fVar32 < 0x47800000) {
          if ((uint)fVar32 < 0x38800000) {
            fVar32 = fVar32 + 0.5;
          }
          else {
            fVar32 = (float)((int)fVar32 + 0x8000fff + (uint)(((uint)fVar32 >> 0xd & 1) != 0) >> 0xd
                            );
          }
        }
        else {
          fVar32 = (float)((0x7f800000 < (uint)fVar32 | 0x3e) << 9);
        }
        uVar40 = (ulonglong)fVar35;
        uVar19 = movmskps(uVar19,ZEXT416((uint)fVar35));
        uVar19 = (uVar19 & 1) << 0xf;
        iVar39 = movmskps(uVar19,auVar54);
        *(uint *)(lVar51 + 4) =
             (int)fVar32 << 0x10 | iVar39 << 0x1f | (uint)fVar31 & 0xffff | uVar19;
        iVar39 = *(int *)(lVar44 + 0x3a8);
        iVar50 = (int)uVar40;
        if (iVar39 == 2) {
          if (((iVar50 < 0) || (*(int *)(lVar44 + 0x128) <= iVar50)) ||
             (*(longlong *)(*(longlong *)(lVar44 + 0x120) + (uVar40 & 0xffffffff) * 0x30) == 0))
          goto LAB_144423a98;
          *(undefined4 *)(lVar51 + 8) = 0;
          lVar48 = (uVar40 & 0xffffffff) * 0x30;
          uVar29 = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(lVar44 + 0x120) + lVar48) + 0x118) +
                    8);
          *(undefined4 *)(lVar51 + 0xc) = uVar29;
          *(uint *)(lVar51 + 0x20) =
               (uint)((char)local_260 == '\x03') + (uint)((char)local_260 == '\x04') * 2;
          *(undefined4 *)(lVar51 + 0x24) = uVar29;
          *(undefined8 *)(lVar51 + 0x28) = 0;
          lVar48 = *(longlong *)(*(longlong *)(lVar44 + 0x120) + 0x10 + lVar48);
LAB_144423b41:
          *(undefined4 *)(lVar51 + 0x40) = 0;
LAB_144423ebc:
          uVar28 = 0;
          uVar19 = (uint)*(byte *)(*(longlong *)(lVar44 + 0x3a0) + 0x382);
          if (lVar48 != 0) {
            uVar28 = 2;
          }
        }
        else {
          if (iVar39 == 1) {
            if ((-1 < iVar50) && (iVar50 < *(int *)(lVar44 + 0x118))) {
              lVar48 = (uVar40 & 0xffffffff) * 0x68;
              if (*(longlong *)(*(longlong *)(lVar44 + 0x110) + lVar48) != 0) {
                lVar7 = *(longlong *)(*(longlong *)(lVar44 + 0x110) + 0x28 + lVar48);
                uVar29 = 0;
                if (lVar7 != 0) {
                  uVar29 = *(undefined4 *)(*(longlong *)(lVar7 + 0x130) + 8);
                }
                *(undefined4 *)(lVar51 + 8) = uVar29;
                uVar6 = *(undefined4 *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar44 + 0x110) + lVar48) + 0x140) + 0x28);
                *(undefined4 *)(lVar51 + 0xc) = uVar6;
                *(undefined4 *)(lVar51 + 0x2c) = 0;
                *(uint *)(lVar51 + 0x20) =
                     (uint)((char)local_260 == '\x03') + (uint)((char)local_260 == '\x04') * 2;
                *(undefined4 *)(lVar51 + 0x24) = uVar6;
                *(undefined4 *)(lVar51 + 0x28) = uVar29;
                lVar48 = *(longlong *)(*(longlong *)(lVar44 + 0x110) + 0x18 + lVar48);
                goto LAB_144423b41;
              }
            }
          }
          else if ((iVar39 == 0) && (*(longlong *)(lVar44 + 0x40) != 0)) {
            *(undefined4 *)(lVar51 + 8) =
                 *(undefined4 *)(*(longlong *)(*(longlong *)(lVar44 + 0x40) + 0x130) + 8);
            *(undefined4 *)(lVar51 + 0xc) =
                 *(undefined4 *)(*(longlong *)(*(longlong *)(lVar44 + 0x40) + 0x130) + 0xc);
            uVar19 = (uint)*(float *)(*(longlong *)(lVar44 + 0x3a0) + 0x478);
            if ((-1 < (int)uVar19) &&
               ((plVar43 = *(longlong **)(lVar44 + 0x68), plVar43 != (longlong *)0x0 &&
                ((int)uVar19 < (int)plVar43[1])))) {
              uVar40 = (ulonglong)uVar19;
              lVar48 = *(longlong *)(*plVar43 + uVar40 * 8);
              if (*(int *)(lVar48 + 0x50) == 2) {
                *(undefined4 *)(lVar51 + 0x10) =
                     *(undefined4 *)(*(longlong *)(lVar48 + 0x140) + 0x28);
                *(undefined4 *)(lVar51 + 0x14) =
                     *(undefined4 *)
                      (*(longlong *)
                        (*(longlong *)(**(longlong **)(lVar44 + 0x68) + uVar40 * 8) + 0x140) + 0x1c)
                ;
                *(undefined4 *)(lVar51 + 0x18) =
                     *(undefined4 *)
                      (*(longlong *)
                        (*(longlong *)(**(longlong **)(lVar44 + 0x68) + uVar40 * 8) + 0x140) + 0xc);
                *(undefined4 *)(lVar51 + 0x1c) =
                     *(undefined4 *)
                      (*(longlong *)
                        (*(longlong *)(**(longlong **)(lVar44 + 0x68) + uVar40 * 8) + 0x140) + 0x10)
                ;
              }
            }
            uVar20 = (uint)((char)local_260 == '\x01') + (uint)((char)local_260 == '\x02') * 2;
            *(undefined4 *)(lVar51 + 0x2c) = 0;
            *(undefined8 *)(lVar51 + 0x24) = 0;
            *(uint *)(lVar51 + 0x20) = uVar20;
            uVar20 = (uint)((char)local_240 == '\x01') * 0x10 +
                     (uint)((char)local_240 == '\x02') * 8 +
                     (uint)*(byte *)(*(longlong *)(lVar44 + 0x3a0) + 0x408) * 4 | uVar20;
            *(uint *)(lVar51 + 0x20) = uVar20;
            uVar20 = *(int *)(*(longlong *)(lVar44 + 0x3a0) + 0x284) << 8 | uVar20;
            *(uint *)(lVar51 + 0x20) = uVar20;
            uVar19 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 0x49c);
            fVar35 = (float)(uVar19 & uVar28);
            if ((uint)fVar35 < 0x47800000) {
              if ((uint)fVar35 < 0x38800000) {
                fVar31 = fVar35 + 0.5;
              }
              else {
                fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0) >>
                                0xd);
                fVar31 = fVar35;
              }
            }
            else {
              fVar31 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
            }
            iVar39 = movmskps(fVar35,ZEXT416(uVar19));
            uVar20 = iVar39 << 0x1f | uVar20 | (int)fVar31 << 0x10;
            *(uint *)(lVar51 + 0x20) = uVar20;
            *(undefined4 *)(lVar51 + 0x24) = *(undefined4 *)(*(longlong *)(lVar44 + 0x3a0) + 0x48c);
            *(undefined4 *)(lVar51 + 0x28) = *(undefined4 *)(*(longlong *)(lVar44 + 0x3a0) + 0x490);
            *(undefined4 *)(lVar51 + 0x2c) =
                 *(undefined4 *)(*(longlong *)(*(longlong *)(lVar44 + 0x40) + 0x130) + 0x84);
            *(undefined8 *)(lVar51 + 0x30) = 0;
            *(undefined8 *)(lVar51 + 0x38) = 0;
            uVar19 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 0x254);
            fVar35 = (float)(uVar19 & uVar28);
            if ((uint)fVar35 < 0x47800000) {
              if ((uint)fVar35 < 0x38800000) {
                fVar35 = fVar35 + 0.5;
              }
              else {
                fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0) >>
                                0xd);
              }
            }
            else {
              fVar35 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
            }
            iVar39 = movmskps(uVar20,ZEXT416(uVar19));
            uVar20 = (iVar39 << 0xf | (uint)fVar35) & 0xffff;
            *(uint *)(lVar51 + 0x30) = uVar20;
            uVar19 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 0x250);
            fVar35 = (float)(uVar19 & uVar28);
            if ((uint)fVar35 < 0x47800000) {
              if ((uint)fVar35 < 0x38800000) {
                fVar31 = fVar35 + 0.5;
              }
              else {
                fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0) >>
                                0xd);
                fVar31 = fVar35;
              }
            }
            else {
              fVar31 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
            }
            iVar39 = movmskps(fVar35,ZEXT416(uVar19));
            *(uint *)(lVar51 + 0x30) = (int)fVar31 << 0x10 | iVar39 << 0x1f | uVar20;
            uVar19 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 600);
            fVar35 = (float)(uVar19 & uVar28);
            if ((uint)fVar35 < 0x47800000) {
              if ((uint)fVar35 < 0x38800000) {
                fVar31 = fVar35 + 0.5;
              }
              else {
                fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0) >>
                                0xd);
                fVar31 = fVar35;
              }
            }
            else {
              fVar31 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
            }
            iVar39 = movmskps(fVar35,ZEXT416(uVar19));
            uVar20 = (iVar39 << 0xf | (uint)fVar31) & 0xffff;
            *(uint *)(lVar51 + 0x34) = uVar20;
            uVar19 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 0x25c);
            fVar35 = (float)(uVar19 & uVar28);
            if ((uint)fVar35 < 0x47800000) {
              if ((uint)fVar35 < 0x38800000) {
                fVar31 = fVar35 + 0.5;
              }
              else {
                fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0) >>
                                0xd);
                fVar31 = fVar35;
              }
            }
            else {
              fVar31 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
            }
            iVar39 = movmskps(fVar35,ZEXT416(uVar19));
            *(uint *)(lVar51 + 0x34) = (int)fVar31 << 0x10 | iVar39 << 0x1f | uVar20;
            uVar19 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 0x260);
            fVar35 = (float)(uVar19 & uVar28);
            if ((uint)fVar35 < 0x47800000) {
              if ((uint)fVar35 < 0x38800000) {
                fVar31 = fVar35 + 0.5;
              }
              else {
                fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0) >>
                                0xd);
                fVar31 = fVar35;
              }
            }
            else {
              fVar31 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
            }
            iVar39 = movmskps(fVar35,ZEXT416(uVar19));
            uVar20 = (iVar39 << 0xf | (uint)fVar31) & 0xffff;
            *(uint *)(lVar51 + 0x38) = uVar20;
            uVar19 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 0x264);
            fVar35 = (float)(uVar19 & uVar28);
            if ((uint)fVar35 < 0x47800000) {
              if ((uint)fVar35 < 0x38800000) {
                fVar31 = fVar35 + 0.5;
              }
              else {
                fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0) >>
                                0xd);
                fVar31 = fVar35;
              }
            }
            else {
              fVar31 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
            }
            iVar39 = movmskps(fVar35,ZEXT416(uVar19));
            *(uint *)(lVar51 + 0x38) = (int)fVar31 << 0x10 | iVar39 << 0x1f | uVar20;
            uVar19 = *(uint *)(*(longlong *)(lVar44 + 0x3a0) + 0x4a0);
            fVar35 = (float)(uVar19 & uVar28);
            if ((uint)fVar35 < 0x47800000) {
              if ((uint)fVar35 < 0x38800000) {
                fVar31 = fVar35 + 0.5;
              }
              else {
                fVar35 = (float)((int)fVar35 + 0x8000fff + (uint)(((uint)fVar35 >> 0xd & 1) != 0) >>
                                0xd);
                fVar31 = fVar35;
              }
            }
            else {
              fVar31 = (float)((0x7f800000 < (uint)fVar35 | 0x3e) << 9);
            }
            uVar28 = movmskps(fVar35,ZEXT416(uVar19));
            uVar28 = (uint)fVar31 & 0xffff | (uVar28 & 1) << 0xf;
            *(uint *)(lVar51 + 0x3c) = uVar28;
            *(uint *)(lVar51 + 0x3c) =
                 (uint)(0 < DAT_14cbf93f0 | *(byte *)(*(longlong *)(lVar44 + 0x3a0) + 0x485)) <<
                 0x10 | uVar28;
            lVar48 = *(longlong *)(lVar44 + 0x78);
            *(undefined4 *)(lVar51 + 0x40) = 0;
            goto LAB_144423ebc;
          }
LAB_144423a98:
          *(undefined4 *)(lVar51 + 0x40) = 0;
          uVar19 = (uint)*(byte *)(*(longlong *)(lVar44 + 0x3a0) + 0x382);
          uVar28 = 0;
        }
        *(uint *)(lVar51 + 0x40) = uVar19 | uVar28;
        iVar42 = iVar42 + 1;
        iVar39 = (int)local_258;
      } while (iVar39 != iVar42);
      local_138[0] = 0;
      local_138[1] = 0;
      local_148 = 0;
      iStack_144 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      FUN_144893a1c(local_138,0x1000);
      uVar28 = 0;
      ppuVar41 = &PTR_u_RootUV_14baa3c98;
      do {
        pwVar37 = L"UNKNOWN";
        if (uVar28 < 7) {
          pwVar37 = (wchar_t *)*ppuVar41;
        }
        FUN_140056680(&local_108,pwVar37);
        FUN_1472ebde2(&local_148,&local_108,uVar28);
        if (local_108 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar40 = local_250;
        uVar28 = uVar28 + 1;
        ppuVar41 = ppuVar41 + 1;
      } while (uVar28 != 7);
      local_278 = (int *)(ulonglong)(uint)((int)uStack_190 * 0x50);
      local_f8 = 0;
      uStack_100 = CONCAT44(uStack_100._4_4_,0x4109);
      local_108 = (undefined1 *)CONCAT44((int)uStack_190 * 0x14,4);
      local_270 = 0;
      lVar44 = FUN_1400489e9(local_250,L"Hair.Debug.InstanceInfos",&local_108,local_198);
      plVar43 = (longlong *)(uVar40 + 0x70);
      puVar49 = (undefined8 *)(*(longlong *)(uVar40 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar27 = puVar49 + 0x16;
      if (*(undefined8 **)(uVar40 + 0x78) < puVar27) {
        FUN_140023dd8(plVar43,0xc0);
        puVar49 = (undefined8 *)(*plVar43 + 0xfU & 0xfffffffffffffff0);
        puVar27 = puVar49 + 0x16;
      }
      *(undefined8 **)(uVar40 + 0x70) = puVar27;
      *puVar49 = &PTR_FUN_14baa34a0;
      puVar49[6] = 0;
      puVar49[7] = 0x3f80000000000000;
      puVar49[9] = 0;
      puVar49[10] = 0;
      puVar49[0xd] = 0;
      puVar49[0xe] = 0;
      puVar49[0x10] = 0;
      puVar49[0x11] = 0;
      puVar49[0x12] = 0;
      *(undefined1 *)(puVar49 + 0x13) = 1;
      puVar49[0x14] = 0;
      puVar49[0x15] = 0;
      iVar42 = *(int *)(uVar40 + 0xa0);
      *(uint *)(uVar40 + 0xa0) = iVar42 + 1U;
      if (*(uint *)(uVar40 + 0xa4) < iVar42 + 1U) {
        FUN_1448cfae8(uVar40 + 0x98,iVar42);
      }
      *(undefined8 **)(*(longlong *)(uVar40 + 0x98) + (longlong)iVar42 * 8) = puVar49;
      *(int *)(puVar49 + 2) = iVar39;
      *(undefined4 *)(puVar49 + 3) = *(undefined4 *)(local_128 + 4);
      *(undefined4 *)((longlong)puVar49 + 0x1c) = *(undefined4 *)(local_128 + 8);
      *(undefined4 *)(puVar49 + 4) = *(undefined4 *)(local_128 + 0xc);
      *(undefined4 *)((longlong)puVar49 + 0x24) = *(undefined4 *)(local_128 + 0x10);
      FUN_1472ebeae(&local_208,&local_108,uVar40);
      puVar49[10] = local_f8;
      puVar49[8] = local_108;
      puVar49[9] = uStack_100;
      FUN_1472ebeae(&local_148,&local_108,uVar40);
      puVar49[0xe] = local_f8;
      puVar49[0xc] = local_108;
      puVar49[0xd] = uStack_100;
      puVar52 = (undefined8 *)(*(longlong *)(uVar40 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar27 = puVar52 + 9;
      if (*(undefined8 **)(uVar40 + 0x78) < puVar27) {
        FUN_140023dd8(plVar43,0x50);
        puVar52 = (undefined8 *)(*plVar43 + 7U & 0xfffffffffffffff8);
        puVar27 = puVar52 + 9;
      }
      *(undefined8 **)(uVar40 + 0x70) = puVar27;
      puVar52[1] = *(undefined8 *)(lVar44 + 8);
      puVar52[2] = 0;
      *(undefined1 *)(puVar52 + 3) = 3;
      *(undefined8 *)((longlong)puVar52 + 0x1c) = 0xffffffffffffffff;
      *puVar52 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar52 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar52 + 0x2c) = 0xffffffff00000000;
      puVar52[7] = 0;
      puVar52[8] = lVar44;
      iVar42 = *(int *)(uVar40 + 0x1a0);
      *(uint *)(uVar40 + 0x1a0) = iVar42 + 1U;
      if (*(uint *)(uVar40 + 0x1a4) < iVar42 + 1U) {
        FUN_1447568fc(uVar40 + 0x198,iVar42);
      }
      *(undefined8 **)(*(longlong *)(uVar40 + 0x198) + (longlong)iVar42 * 8) = puVar52;
      *(int *)((longlong)puVar52 + 0x1c) = *(int *)(uVar40 + 0x1a0) + -1;
      puVar49[0x10] = puVar52;
      FUN_1472ea582(uVar40,param_8,puVar49 + 0x12);
      FUN_145f5e678();
      FUN_1448e935e(local_228,&local_108,&DAT_14cbf8aa0,0);
      FUN_145f5e678();
      lVar44 = (longlong)local_108;
      local_158 = (longlong)local_108;
      uStack_150 = uStack_100;
      FUN_145f5e8e6();
      local_108 = (undefined1 *)0x0;
      uStack_100 = 0;
      FUN_1448f70da(lVar44,&DAT_14cbf8fc0,puVar49 + 2,&local_108);
      local_108 = &DAT_100000001;
      uStack_100 = CONCAT44(uStack_100._4_4_,1);
      local_278 = (int *)&local_108;
      FUN_149087793(uVar40,&local_168,&local_158,puVar49 + 2);
      if (local_138[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(iStack_144,local_148) != 0) {
        FUN_1400020a8();
      }
      if (local_198 != 0) {
        FUN_1400020a8();
      }
      if (local_1f8 != 0) {
        FUN_1400020a8();
      }
      if (local_208 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_128 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((0 < (int)DAT_14cbf8468) && ((longlong)(int)param_5[1] != 0)) {
    plVar47 = (longlong *)*param_5;
    plVar1 = plVar47 + (int)param_5[1];
    plVar43 = (longlong *)(local_250 + 0x70);
    plVar46 = (longlong *)(local_250 + 0x98);
    local_260 = (longlong *)(local_250 + 0x198);
    do {
      lVar44 = *plVar47;
      if ((((*(longlong *)
              (&DAT_14ca814b0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) *
              0x3c) != DAT_14ca80038) ||
           ((*(byte *)((longlong)&DAT_14ca814d0 +
                      (ulonglong)
                      *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) * 0x3c
                      + 3) & 1) != 0)) && (param_8 != (int *)0x0)) &&
         (*(int *)(*(longlong *)(lVar44 + 0x3a0) + 900) == 1)) {
        fVar35 = *(float *)(*(longlong *)(lVar44 + 0x3a0) + 0x47c);
        uVar28 = (int)ROUND(fVar35 + fVar35 + -0.5) >> 1;
        if ((int)uVar28 < 1) {
          uVar28 = 0;
        }
        if (((int)uVar28 < *(int *)(lVar44 + 0x118)) &&
           (lVar44 = *(longlong *)(*(longlong *)(lVar44 + 0x110) + (ulonglong)uVar28 * 0x68),
           lVar44 != 0)) {
          uVar28 = *(int *)(lVar44 + 0x130) - 1;
          if ((int)DAT_14cbf8468 < (int)uVar28) {
            uVar28 = DAT_14cbf8468;
          }
          if ((int)uVar28 < 2) {
            uVar28 = 1;
          }
          if (((int)uVar28 < *(int *)(lVar44 + 0x130)) &&
             (plVar23 = *(longlong **)(*(longlong *)(lVar44 + 0x128) + (ulonglong)uVar28 * 8),
             plVar23 != (longlong *)0x0)) {
            LOCK();
            *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
            UNLOCK();
            local_258 = plVar46;
            local_248 = plVar43;
            local_240 = plVar23;
            FUN_145e79ad4();
            FUN_1448e935e(local_228,&local_208,&DAT_14cbf8728,0);
            FUN_145e79ad4();
            plVar43 = local_248;
            puVar49 = (undefined8 *)(*(longlong *)(local_250 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar27 = puVar49 + 0xe;
            if (*(undefined8 **)(local_250 + 0x78) < puVar27) {
              FUN_140023dd8(local_248,0x80);
              puVar49 = (undefined8 *)(*plVar43 + 0xfU & 0xfffffffffffffff0);
              puVar27 = puVar49 + 0xe;
            }
            *(undefined8 **)(local_250 + 0x70) = puVar27;
            *puVar49 = &PTR_FUN_14baa34e8;
            puVar49[2] = 0;
            *(undefined1 *)(puVar49 + 3) = 1;
            *(undefined1 (*) [16])(puVar49 + 4) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(puVar49 + 9) = (undefined1  [16])0x0;
            *(undefined1 *)(puVar49 + 0xb) = 1;
            *(undefined1 (*) [16])(puVar49 + 0xc) = (undefined1  [16])0x0;
            iVar42 = *(int *)(local_250 + 0xa0);
            *(uint *)(local_250 + 0xa0) = iVar42 + 1U;
            local_230 = puVar49;
            if (*(uint *)(local_250 + 0xa4) < iVar42 + 1U) {
              FUN_1448cfae8(local_258,iVar42);
            }
            puVar27 = local_230;
            *(undefined8 **)(*local_258 + (longlong)iVar42 * 8) = local_230;
            lVar44 = FUN_1447e4f80();
            cVar17 = *(char *)(lVar44 + 0x41);
            if (*(char *)(lVar44 + 0x41) == '\x03') {
              cVar17 = '\x02';
            }
            puVar27[2] = *(undefined8 *)(param_4 + 0x18);
            *(char *)(puVar27 + 3) = cVar17;
            puVar27[6] = *(undefined8 *)(param_9 + 0x84);
            lVar44 = (**(code **)(*local_240 + 8))();
            uVar40 = 0;
            switch(*(undefined1 *)(lVar44 + 0x32)) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
              uVar40 = (ulonglong)*(uint *)(lVar44 + 0x28);
            }
            lVar44 = (**(code **)(*local_240 + 8))();
            plVar43 = local_248;
            uVar19 = 0;
            switch(*(undefined1 *)(lVar44 + 0x32)) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
              uVar19 = *(uint *)(lVar44 + 0x24);
            }
            local_230[7] = (ulonglong)uVar19 | uVar40 << 0x20;
            local_230[4] = local_240;
            *(uint *)(local_230 + 8) = uVar28;
            local_230[9] = DAT_14c9c0de0;
            uVar18 = *(undefined1 *)(param_9 + 0x94);
            puVar49 = (undefined8 *)(*(longlong *)(local_250 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar27 = puVar49 + 9;
            if (*(undefined8 **)(local_250 + 0x78) < puVar27) {
              FUN_140023dd8(local_248,0x50);
              puVar49 = (undefined8 *)(*plVar43 + 7U & 0xfffffffffffffff8);
              puVar27 = puVar49 + 9;
            }
            uVar40 = local_250;
            *(undefined8 **)(local_250 + 0x70) = puVar27;
            puVar49[1] = *(undefined8 *)(param_9 + 8);
            puVar49[2] = 0;
            *(undefined1 *)(puVar49 + 3) = 0;
            *(undefined8 *)((longlong)puVar49 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar49 + 5) = 0;
            *puVar49 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar49 + 6) = uVar18;
            *(undefined1 *)(puVar49 + 7) = 0;
            *(undefined4 *)((longlong)puVar49 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar49 + 0x35) = 0;
            puVar49[8] = param_9;
            local_220 = (uint *)(longlong)*(int *)(local_250 + 0x1a0);
            uVar28 = *(int *)(local_250 + 0x1a0) + 1;
            *(uint *)(local_250 + 0x1a0) = uVar28;
            if (*(uint *)(local_250 + 0x1a4) < uVar28) {
              FUN_1447568fc(local_260);
            }
            puVar27 = local_230;
            local_210 = local_230 + 2;
            *(undefined8 **)(*(longlong *)(uVar40 + 0x198) + (longlong)local_220 * 8) = puVar49;
            *(int *)((longlong)puVar49 + 0x1c) = *(int *)(uVar40 + 0x1a0) + -1;
            local_230[5] = puVar49;
            local_220 = (uint *)(local_240 + 1);
            FUN_1472ea582(uVar40,param_8,local_230 + 10);
            iVar39 = *(int *)(puVar27 + 6);
            iVar50 = *(int *)((longlong)puVar27 + 0x34);
            iVar42 = iVar50 + 7;
            iStack_144 = iVar50 + 0xe;
            if (-1 < iVar42) {
              iStack_144 = iVar42;
            }
            iStack_144 = iStack_144 >> 3;
            iVar42 = iVar39 + 7;
            local_148 = iVar39 + 0xe;
            if (-1 < iVar42) {
              local_148 = iVar42;
            }
            local_148 = local_148 >> 3;
            uStack_140 = 1;
            local_278 = &local_148;
            FUN_1490880d7(uVar40,&local_108,&local_208,local_210);
            plVar23 = local_240;
            LOCK();
            uVar28 = *local_220;
            *local_220 = *local_220 - 1;
            UNLOCK();
            plVar43 = local_248;
            plVar46 = local_258;
            if ((uVar28 & 0x3fffffff) == 1) {
              LOCK();
              uVar28 = *local_220;
              *local_220 = *local_220 | 0x40000000;
              UNLOCK();
              if ((uVar28 >> 0x1e & 1) == 0) {
                local_230 = (undefined8 *)
                            CONCAT71(local_230._1_7_,*(undefined1 *)((longlong)local_240 + 0xd));
                plVar21 = (longlong *)FUN_14001cc68(0x10,8);
                plVar21[1] = (longlong)plVar23;
                plVar23 = DAT_14ca843c0;
                plVar22 = DAT_14ca843c8;
                plVar43 = local_248;
                plVar46 = local_258;
                if (((ulonglong)local_230 & 2) == 0) {
                  do {
                    *plVar21 = (longlong)plVar23;
                    LOCK();
                    bVar53 = plVar23 != DAT_14ca843c0;
                    plVar22 = plVar21;
                    if (bVar53) {
                      plVar23 = DAT_14ca843c0;
                      plVar22 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar22;
                    UNLOCK();
                  } while (bVar53);
                }
                else {
                  do {
                    *plVar21 = (longlong)plVar22;
                    LOCK();
                    bVar53 = plVar22 != DAT_14ca843c8;
                    plVar23 = plVar21;
                    if (bVar53) {
                      plVar22 = DAT_14ca843c8;
                      plVar23 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar23;
                    UNLOCK();
                  } while (bVar53);
                }
              }
            }
          }
        }
      }
      plVar47 = plVar47 + 1;
    } while (plVar47 != plVar1);
  }
  if ((int)uVar34 < 0x22) {
    if ((uVar34 != 1) && (uVar34 != 0x12)) goto LAB_144422b37;
LAB_1444224e3:
    if ((longlong)(int)param_5[1] == 0) goto LAB_144422b37;
    lVar44 = *param_5;
    local_260 = (longlong *)(local_250 + 0x70);
    local_240 = (longlong *)(local_250 + 0x98);
    local_258 = (longlong *)(local_250 + 0x198);
    lVar51 = (longlong)(int)param_5[1] << 3;
    lVar48 = 0;
    uVar40 = local_250;
    cVar17 = (char)local_238;
    do {
      lVar7 = *(longlong *)(lVar44 + lVar48 * 8);
      if (cVar17 == '\x01') {
        local_270 = 0;
LAB_144422a61:
        local_278 = param_8;
        FUN_144424cb7(uVar40,param_4,local_228);
      }
      else if (uVar34 == 0x12) {
        if ((*(longlong *)
              (&DAT_14ca814b0 +
              (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) *
              0x3c) != DAT_14ca80038) ||
           ((*(byte *)((longlong)&DAT_14ca814d0 +
                      (ulonglong)
                      *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) * 0x3c
                      + 3) & 1) != 0)) {
          DAT_14ca4d330 = DAT_14ca4d330 + 0x100;
          DAT_14ca4d32c = DAT_14ca4d32c + 0x100;
          DAT_14ca4d100 = 1;
          if ((param_8 != (int *)0x0) &&
             ((*(int *)(*(longlong *)(lVar7 + 0x3a0) + 900) == 0 &&
              (*(longlong *)(lVar7 + 0x40) != 0)))) {
            FUN_145e072a4();
            FUN_1448e935e(local_228,&local_208,&DAT_14cbf8850,0);
            FUN_145e072a4();
            plVar43 = local_260;
            puVar49 = (undefined8 *)(*(longlong *)(uVar40 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar27 = puVar49 + 0x1a;
            if (*(undefined8 **)(uVar40 + 0x78) < puVar27) {
              FUN_140023dd8(local_260,0xe0);
              puVar49 = (undefined8 *)(*plVar43 + 0xfU & 0xfffffffffffffff0);
              puVar27 = puVar49 + 0x1a;
            }
            *(undefined8 **)(uVar40 + 0x70) = puVar27;
            *puVar49 = &PTR_FUN_14baa3528;
            puVar49[2] = 0;
            *(undefined1 *)(puVar49 + 3) = 1;
            puVar49[0x14] = 0;
            puVar49[0x10] = 0;
            puVar49[0x11] = 0;
            puVar49[0x12] = 0;
            *(undefined1 *)(puVar49 + 0x15) = 1;
            puVar49[0x16] = 0;
            *(undefined1 *)(puVar49 + 0x17) = 1;
            puVar49[0x18] = 0;
            puVar49[0x19] = 0;
            iVar42 = *(int *)(uVar40 + 0xa0);
            *(uint *)(uVar40 + 0xa0) = iVar42 + 1U;
            if (*(uint *)(uVar40 + 0xa4) < iVar42 + 1U) {
              FUN_1448cfae8(local_240,iVar42);
            }
            *(undefined8 **)(*(longlong *)(local_250 + 0x98) + (longlong)iVar42 * 8) = puVar49;
            lVar24 = FUN_1447e4f80();
            cVar17 = *(char *)(lVar24 + 0x41);
            if (*(char *)(lVar24 + 0x41) == '\x03') {
              cVar17 = '\x02';
            }
            puVar49[2] = *(undefined8 *)(param_4 + 0x18);
            *(char *)(puVar49 + 3) = cVar17;
            lVar24 = FUN_145e07818();
            plVar43 = local_260;
            cVar17 = *(char *)(lVar24 + 0x41);
            if (cVar17 == '\x03') {
              cVar17 = '\x02';
            }
            puVar49[0x14] = *(undefined8 *)(lVar7 + 0xf8);
            *(char *)(puVar49 + 0x15) = cVar17;
            dVar9 = *(double *)(lVar7 + 0x340);
            dVar10 = *(double *)(lVar7 + 0x348);
            dVar11 = *(double *)(lVar7 + 0x350);
            dVar12 = *(double *)(lVar7 + 0x380);
            dVar13 = *(double *)(lVar7 + 0x388);
            dVar14 = *(double *)(lVar7 + 0x390);
            dVar56 = dVar10 + dVar10;
            dVar57 = dVar11 + dVar11;
            dVar8 = dVar9 * (dVar9 + dVar9);
            dVar55 = *(double *)(lVar7 + 0x358);
            dVar58 = dVar57 * dVar55;
            dVar59 = (dVar9 + dVar9) * *(double *)(lVar7 + 0x358);
            dVar55 = dVar56 * dVar55;
            dVar2 = *(double *)(lVar7 + 0x360);
            dVar3 = *(double *)(lVar7 + 0x368);
            dVar4 = *(double *)(lVar7 + 0x370);
            *(float *)(puVar49 + 8) = (float)((1.0 - (dVar11 * dVar57 + dVar10 * dVar56)) * dVar12);
            *(float *)((longlong)puVar49 + 0x44) = (float)((dVar56 * dVar9 + dVar58) * dVar12);
            *(float *)(puVar49 + 9) = (float)((dVar57 * dVar9 - dVar55) * dVar12);
            *(undefined4 *)((longlong)puVar49 + 0x4c) = 0;
            *(float *)(puVar49 + 10) = (float)((dVar56 * dVar9 - dVar58) * dVar13);
            *(float *)((longlong)puVar49 + 0x54) =
                 (float)((1.0 - (dVar11 * dVar57 + dVar8)) * dVar13);
            *(float *)(puVar49 + 0xb) = (float)((dVar57 * dVar10 + dVar59) * dVar13);
            *(undefined4 *)((longlong)puVar49 + 0x5c) = 0;
            *(float *)(puVar49 + 0xc) = (float)((dVar55 + dVar57 * dVar9) * dVar14);
            *(float *)((longlong)puVar49 + 100) = (float)((dVar57 * dVar10 - dVar59) * dVar14);
            *(float *)(puVar49 + 0xd) = (float)((1.0 - (dVar8 + dVar10 * dVar56)) * dVar14);
            *(undefined4 *)((longlong)puVar49 + 0x6c) = 0;
            *(float *)(puVar49 + 0xe) = (float)dVar2;
            *(float *)((longlong)puVar49 + 0x74) = (float)dVar3;
            *(float *)(puVar49 + 0xf) = (float)dVar4;
            *(undefined4 *)((longlong)puVar49 + 0x7c) = 0x3f800000;
            *(undefined4 *)(puVar49 + 4) =
                 *(undefined4 *)(*(longlong *)(*(longlong *)(lVar7 + 0x40) + 0x130) + 0xc);
            puVar52 = (undefined8 *)(*(longlong *)(local_250 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar27 = puVar52 + 9;
            uVar18 = *(undefined1 *)(param_9 + 0x94);
            if (*(undefined8 **)(local_250 + 0x78) < puVar27) {
              local_248 = (longlong *)CONCAT71(local_248._1_7_,*(undefined1 *)(param_9 + 0x94));
              FUN_140023dd8(local_260);
              puVar52 = (undefined8 *)(*plVar43 + 7U & 0xfffffffffffffff8);
              puVar27 = puVar52 + 9;
              uVar18 = local_248._0_1_;
            }
            *(undefined8 **)(local_250 + 0x70) = puVar27;
            puVar52[1] = *(undefined8 *)(param_9 + 8);
            puVar52[2] = 0;
            *(undefined1 *)(puVar52 + 3) = 0;
            *(undefined8 *)((longlong)puVar52 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar52 + 5) = 0;
            *puVar52 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar52 + 6) = uVar18;
            *(undefined1 *)(puVar52 + 7) = 0;
            *(undefined4 *)((longlong)puVar52 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar52 + 0x35) = 0;
            puVar52[8] = param_9;
            local_248 = (longlong *)(longlong)*(int *)(local_250 + 0x1a0);
            uVar28 = *(int *)(local_250 + 0x1a0) + 1;
            *(uint *)(local_250 + 0x1a0) = uVar28;
            if (*(uint *)(local_250 + 0x1a4) < uVar28) {
              FUN_1447568fc(local_258,local_248);
            }
            uVar40 = local_250;
            local_230 = puVar49 + 0x16;
            *(undefined8 **)(*(longlong *)(local_250 + 0x198) + (longlong)local_248 * 8) = puVar52;
            *(int *)((longlong)puVar52 + 0x1c) = *(int *)(local_250 + 0x1a0) + -1;
            puVar49[0x12] = puVar52;
            puVar49[0x11] = param_10;
            puVar49[0x10] = DAT_14c9c0de0;
            *(int *)((longlong)puVar49 + 0x24) = (int)lVar48;
            local_248 = puVar49 + 2;
            FUN_14907f4f0(&local_148,*(undefined4 *)(lVar7 + 0x130));
            puVar49[6] = CONCAT44(iStack_144,local_148);
            *(undefined4 *)(puVar49 + 7) = uStack_140;
            FUN_1472ea582(uVar40,param_8,local_230);
            iVar39 = *(int *)(*(longlong *)(lVar7 + 0x3a0) + 0x278);
            iVar42 = iVar39 + 0xff;
            local_148 = iVar39 + 0x1fe;
            if (-1 < iVar42) {
              local_148 = iVar42;
            }
            local_148 = local_148 >> 8;
            iStack_144 = 1;
            uStack_140 = 1;
            local_278 = &local_148;
            FUN_1490889ab(uVar40,&local_108,&local_208);
            cVar17 = (char)local_238;
          }
        }
      }
      else if (uVar34 == 0x22) {
        local_270 = 1;
        goto LAB_144422a61;
      }
      lVar48 = lVar48 + 1;
      lVar51 = lVar51 + -8;
    } while (lVar51 != 0);
    if (cVar17 != '$') goto LAB_144422b37;
  }
  else if (uVar34 != 0x24) {
    if (uVar34 != 0x22) goto LAB_144422b37;
    goto LAB_1444224e3;
  }
  if (((*(longlong *)
         (&DAT_14ca814b0 +
         (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) * 0x3c)
        != DAT_14ca80038) ||
      ((*(byte *)((longlong)&DAT_14ca814d0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_4 + 0x3090) * 2) *
                 0x3c + 3) & 1) != 0)) && (DAT_14ca4d100 = 1, param_8 != (int *)0x0)) {
    plVar43 = (longlong *)0x0;
    FUN_1490736aa(&local_208,0x10,1,0);
    uVar40 = local_1f8 & 0xffffffff;
    if ((int)local_1f8 < (int)uStack_200 && -1 < (int)local_1f8) {
      plVar43 = (longlong *)0x0;
      do {
        plVar43 = (longlong *)
                  (ulonglong)
                  (uint)((int)plVar43 + *(int *)(*(longlong *)(local_208 + uVar40 * 8) + 0x850));
        lVar44 = (longlong)(int)uVar40;
        do {
          lVar48 = lVar44;
          lVar44 = lVar48 + 1;
          uVar34 = (int)uVar40 + 1;
          uVar40 = (ulonglong)uVar34;
          local_1f8 = CONCAT44(local_1f8._4_4_,uVar34);
          if ((int)uStack_200 <= lVar44) goto LAB_144422c31;
        } while (*(longlong *)(local_208 + lVar44 * 8) == 0);
      } while ((-2 < lVar48) && ((int)uVar34 < (int)uStack_200));
    }
LAB_144422c31:
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    FUN_1472ebdac(&local_148,plVar43,0x20);
    local_158 = 0;
    uStack_150 = 0;
    if ((int)plVar43 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(plVar43);
    }
    if ((int)plVar43 != 0) {
      FUN_144429096(&local_158,plVar43);
    }
    local_240 = plVar43;
    FUN_1490736aa(&local_208,0x10,1,0);
    uVar45 = local_1f8 & 0xffffffff;
    uVar40 = local_208;
    if ((int)local_1f8 < (int)uStack_200 && -1 < (int)local_1f8) {
      iVar42 = (int)uStack_200;
      do {
        uVar38 = (ulonglong)*(uint *)(*(longlong *)(uVar40 + (uVar45 & 0xffffffff) * 8) + 0x850);
        iVar39 = (int)uVar45;
        if (uVar38 != 0) {
          uVar40 = 0;
          do {
            if ((int)uVar40 < 0) {
LAB_144422d2c:
              puVar27 = (undefined8 *)0x0;
            }
            else {
              lVar44 = *(longlong *)(local_208 + (longlong)(int)local_1f8 * 8);
              if ((*(int *)(lVar44 + 0x850) <= (int)uVar40) ||
                 (puVar27 = *(undefined8 **)(*(longlong *)(lVar44 + 0x848) + uVar40 * 8),
                 puVar27 == (undefined8 *)0x0)) goto LAB_144422d2c;
              LOCK();
              *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
              UNLOCK();
              LOCK();
              piVar26 = (int *)(puVar27 + 1);
              *piVar26 = *piVar26 + -1;
              UNLOCK();
              if (*piVar26 == 0) {
                (**(code **)*puVar27)(puVar27,1);
              }
            }
            FUN_149083422(&local_108,puVar27);
            puVar36 = &DAT_149dfb77a;
            if (*(int *)(puVar27 + 0x28) != 0) {
              puVar36 = (undefined2 *)puVar27[0x27];
            }
            FUN_140056680(&local_128,puVar36);
            FUN_1472ebde2(&local_148,&local_128,uStack_140);
            if (local_128 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            puVar25 = (undefined4 *)FUN_14442901e(&local_158);
            *puVar25 = *(undefined4 *)(puVar27 + 0x26);
            puVar25[1] = *(undefined4 *)((longlong)puVar27 + 0x134);
            puVar25[2] = *(undefined4 *)(puVar27[0x74] + 0x490);
            if (puVar27[8] == 0) {
              uVar29 = 0;
            }
            else {
              uVar29 = *(undefined4 *)(*(longlong *)(puVar27[8] + 0x130) + 8);
            }
            puVar25[3] = uVar29;
            puVar25[4] = (int)local_108;
            puVar25[5] = local_108._4_4_;
            puVar25[6] = (undefined4)uStack_100;
            puVar25[7] = uStack_100._4_4_;
            puVar25[8] = (int)local_108;
            puVar25[9] = local_108._4_4_;
            puVar25[10] = (undefined4)uStack_100;
            puVar25[0xb] = uStack_100._4_4_;
            *(undefined8 *)(puVar25 + 0xc) = 0;
            *(undefined8 *)(puVar25 + 0xe) = 0;
            uVar40 = uVar40 + 1;
          } while (uVar38 != uVar40);
          uVar40 = local_208;
          iVar42 = (int)uStack_200;
          iVar39 = (int)local_1f8;
        }
        uVar45 = (longlong)iVar39;
        do {
          uVar38 = uVar45;
          uVar45 = uVar38 + 1;
          local_1f8 = CONCAT44(local_1f8._4_4_,(int)uVar45);
          if ((longlong)iVar42 <= (longlong)uVar45) break;
        } while (*(longlong *)(uVar40 + uVar45 * 8) == 0);
      } while ((-2 < (longlong)uVar38) && ((int)uVar45 < iVar42));
    }
    if (uVar40 != 0) {
      FUN_1400020a8();
    }
    plVar43 = (longlong *)0x0;
    FUN_14906fd76(&local_208,0x10,1,0);
    uVar40 = local_1f8 & 0xffffffff;
    if ((int)local_1f8 < (int)uStack_200 && -1 < (int)local_1f8) {
      plVar43 = (longlong *)0x0;
      do {
        uVar34 = (uint)uVar40;
        plVar43 = (longlong *)
                  (ulonglong)
                  (uint)((int)plVar43 + *(int *)(*(longlong *)(local_208 + uVar40 * 8) + 0xf8));
        lVar44 = (longlong)(int)uVar34;
        do {
          lVar48 = lVar44;
          uVar34 = uVar34 + 1;
          uVar40 = (ulonglong)uVar34;
          local_1f8 = CONCAT44(local_1f8._4_4_,uVar34);
          if ((longlong)(int)uStack_200 <= lVar48 + 1) break;
          lVar44 = lVar48 + 1;
        } while (*(longlong *)(local_208 + 8 + lVar48 * 8) == 0);
      } while ((-2 < lVar48) && ((int)uVar34 < (int)uStack_200));
    }
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    FUN_1472ebdac(&local_108,plVar43,0x20);
    local_168 = 0;
    uStack_160 = 0;
    local_260 = plVar43;
    if ((int)plVar43 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(plVar43);
    }
    if ((int)plVar43 != 0) {
      FUN_144429096(&local_168,plVar43);
      iVar42 = 0;
      do {
        local_238 = CONCAT44(local_238._4_4_,iVar42);
        FUN_14906fd76(&local_128,0x10,1,0);
        uVar40 = local_118 & 0xffffffff;
        puVar33 = local_128;
        iVar42 = (int)uStack_120;
        if ((int)local_118 < (int)uStack_120 && -1 < (int)local_118) {
          do {
            iVar39 = *(int *)(*(longlong *)(puVar33 + (uVar40 & 0xffffffff) * 8) + 0xf8);
            iVar50 = (int)uVar40;
            if (iVar39 != 0) {
              iVar42 = 0;
              do {
                lVar44 = (longlong)iVar42 * 0x690 +
                         *(longlong *)
                          (*(longlong *)(local_128 + (longlong)(int)local_118 * 8) + 0xf0);
                lVar48 = (longlong)iVar42 * 0x58 +
                         *(longlong *)
                          (*(longlong *)(local_128 + (longlong)(int)local_118 * 8) + 0x100);
                FUN_14906f882(&local_208,lVar44,lVar48);
                local_178 = *(longlong *)
                             (*(longlong *)(local_128 + (longlong)(int)local_118 * 8) + 0x18);
                FUN_1400021e4(&local_178,&local_198);
                FUN_1472ebde2(&local_108,&local_198,uStack_100 & 0xffffffff);
                if (local_198 != 0) {
                  FUN_1400020a8();
                }
                piVar26 = (int *)FUN_14442901e();
                *piVar26 = iVar42;
                piVar26[1] = iVar39;
                lVar48 = *(longlong *)(lVar48 + 8);
                iVar50 = 0;
                if (lVar48 != 0) {
                  iVar50 = *(int *)(lVar48 + 0x48);
                }
                piVar26[2] = iVar50;
                iVar50 = 0;
                if ((*(int *)(lVar44 + 0x248) != 0) &&
                   (iVar50 = *(int *)(lVar44 + 0x248), *(int *)(lVar44 + 0x24c) == 0)) {
                  iVar50 = 0;
                }
                piVar26[3] = iVar50;
                piVar26[4] = (int)local_208;
                piVar26[5] = local_208._4_4_;
                piVar26[6] = (int)uStack_200;
                piVar26[7] = uStack_200._4_4_;
                piVar26[8] = (int)local_1f8;
                piVar26[9] = local_1f8._4_4_;
                piVar26[10] = (int)local_1f0;
                piVar26[0xb] = local_1f0._4_4_;
                piVar26[0xc] = (int)local_1e8;
                piVar26[0xd] = local_1e8._4_4_;
                piVar26[0xe] = (int)local_1e0;
                piVar26[0xf] = local_1e0._4_4_;
                piVar26[0x10] = (int)local_1d8;
                piVar26[0x11] = local_1d8._4_4_;
                piVar26[0x12] = local_1d0;
                piVar26[0x13] = local_1cc;
                iVar42 = iVar42 + 1;
              } while (iVar39 != iVar42);
              puVar33 = local_128;
              iVar42 = (int)uStack_120;
              iVar50 = (int)local_118;
            }
            uVar40 = (longlong)iVar50;
            do {
              uVar45 = uVar40;
              uVar40 = uVar45 + 1;
              local_118 = CONCAT44(local_118._4_4_,(int)uVar40);
              if ((longlong)iVar42 <= (longlong)uVar40) break;
            } while (*(longlong *)(puVar33 + uVar40 * 8) == 0);
          } while ((-2 < (longlong)uVar45) && ((int)uVar40 < iVar42));
        }
        iVar42 = (int)local_238;
        if (puVar33 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        iVar42 = iVar42 + 1;
      } while (iVar42 != (int)local_260);
    }
    iVar42 = 0;
    FUN_14906ffe8(&local_208,0x10,1,0);
    uVar40 = local_1f8 & 0xffffffff;
    if ((int)local_1f8 < (int)uStack_200 && -1 < (int)local_1f8) {
      iVar42 = 0;
      do {
        uVar34 = (uint)uVar40;
        iVar42 = iVar42 + *(int *)(*(longlong *)(local_208 + uVar40 * 8) + 0xa8);
        lVar44 = (longlong)(int)uVar34;
        do {
          lVar48 = lVar44;
          uVar34 = uVar34 + 1;
          uVar40 = (ulonglong)uVar34;
          local_1f8 = CONCAT44(local_1f8._4_4_,uVar34);
          if ((longlong)(int)uStack_200 <= lVar48 + 1) break;
          lVar44 = lVar48 + 1;
        } while (*(longlong *)(local_208 + 8 + lVar48 * 8) == 0);
      } while ((-2 < lVar48) && ((int)uVar34 < (int)uStack_200));
    }
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    FUN_1472ebdac(&local_208,iVar42,0x20);
    local_178 = 0;
    uStack_170 = 0;
    if (iVar42 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar42);
    }
    if (iVar42 != 0) {
      FUN_144429096(&local_178,iVar42);
      iVar39 = 0;
      do {
        FUN_14906ffe8(&local_128,0x10,1,0);
        uVar40 = local_118 & 0xffffffff;
        puVar33 = local_128;
        iVar50 = (int)uStack_120;
        if ((int)local_118 < (int)uStack_120 && -1 < (int)local_118) {
          do {
            iVar5 = *(int *)(*(longlong *)(puVar33 + (uVar40 & 0xffffffff) * 8) + 0xa8);
            iVar30 = (int)uVar40;
            if (iVar5 != 0) {
              iVar50 = 0;
              do {
                lVar44 = (longlong)iVar50 * 0x20 +
                         *(longlong *)
                          (*(longlong *)(local_128 + (longlong)(int)local_118 * 8) + 0x78);
                FUN_14906fdfc(&local_198,
                              (longlong)iVar50 * 0x30 +
                              *(longlong *)
                               (*(longlong *)(local_128 + (longlong)(int)local_118 * 8) + 0xa0),
                              lVar44);
                local_1a8[0] = *(longlong *)
                                (*(longlong *)(local_128 + (longlong)(int)local_118 * 8) + 0x18);
                FUN_1400021e4(local_1a8,&local_1b8);
                puVar36 = &DAT_149dfb77a;
                if (local_1b0 != 0) {
                  puVar36 = local_1b8;
                }
                FUN_140056680(local_1a8,puVar36);
                FUN_1472ebde2(&local_208,local_1a8,iVar39);
                if (local_1a8[0] != 0) {
                  FUN_1400020a8();
                }
                if (local_1b8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                piVar26 = (int *)FUN_14442901e();
                *piVar26 = iVar50;
                piVar26[1] = iVar5;
                piVar26[2] = 0;
                puVar27 = *(undefined8 **)(lVar44 + 8);
                iVar30 = 0;
                if (((puVar27 != (undefined8 *)0x0) && (iVar30 = 0, 0 < *(int *)(puVar27 + 1))) &&
                   (*(longlong *)*puVar27 != 0)) {
                  iVar30 = *(int *)(*(longlong *)(*(longlong *)*puVar27 + 0x140) + 0xc);
                }
                piVar26[3] = iVar30;
                piVar26[4] = (int)local_198;
                piVar26[5] = local_198._4_4_;
                piVar26[6] = (int)uStack_190;
                piVar26[7] = 0;
                piVar26[8] = uStack_190._4_4_;
                piVar26[9] = local_188;
                piVar26[10] = local_184;
                piVar26[0xb] = 0;
                iVar50 = iVar50 + 1;
              } while (iVar5 != iVar50);
              puVar33 = local_128;
              iVar50 = (int)uStack_120;
              iVar30 = (int)local_118;
            }
            uVar40 = (longlong)iVar30;
            do {
              uVar45 = uVar40;
              uVar40 = uVar45 + 1;
              local_118 = CONCAT44(local_118._4_4_,(int)uVar40);
              if ((longlong)iVar50 <= (longlong)uVar40) break;
            } while (*(longlong *)(puVar33 + uVar40 * 8) == 0);
          } while ((-2 < (longlong)uVar45) && ((int)uVar40 < iVar50));
        }
        if (puVar33 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        iVar39 = iVar39 + 1;
      } while (iVar39 != iVar42);
    }
    iVar50 = (int)local_260;
    iVar39 = (int)local_240;
    if ((iVar50 != 0 || iVar39 != 0) || iVar42 != 0) {
      if ((int)uStack_150 == 0) {
        FUN_14442905e(&local_158);
      }
      uVar40 = local_250;
      if ((int)uStack_160 == 0) {
        FUN_14442905e(&local_168);
      }
      if ((int)uStack_170 == 0) {
        FUN_14442905e(&local_178);
      }
      DAT_14ca4d32c = (iVar50 + iVar39 + iVar42) * 0x100 + DAT_14ca4d32c + 0x200;
      plVar43 = (longlong *)(uVar40 + 0x70);
      puVar49 = (undefined8 *)(*(longlong *)(uVar40 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar27 = puVar49 + 0x18;
      if (*(undefined8 **)(uVar40 + 0x78) < puVar27) {
        FUN_140023dd8(plVar43,0xd0);
        puVar49 = (undefined8 *)(*plVar43 + 0xfU & 0xfffffffffffffff0);
        puVar27 = puVar49 + 0x18;
      }
      *(undefined8 **)(uVar40 + 0x70) = puVar27;
      *puVar49 = &PTR_FUN_14baa35c0;
      puVar49[0x14] = 0;
      puVar49[5] = 0;
      puVar49[6] = 0;
      puVar49[9] = 0;
      puVar49[10] = 0;
      puVar49[0xd] = 0;
      puVar49[0xe] = 0;
      puVar49[0x10] = 0;
      puVar49[0x11] = 0;
      puVar49[0x12] = 0;
      *(undefined1 *)(puVar49 + 0x15) = 1;
      puVar49[0x16] = 0;
      puVar49[0x17] = 0;
      iVar50 = *(int *)(uVar40 + 0xa0);
      *(uint *)(uVar40 + 0xa0) = iVar50 + 1U;
      local_258 = plVar43;
      if (*(uint *)(uVar40 + 0xa4) < iVar50 + 1U) {
        FUN_1448cfae8(uVar40 + 0x98,iVar50);
      }
      *(undefined8 **)(*(longlong *)(uVar40 + 0x98) + (longlong)iVar50 * 8) = puVar49;
      *(int *)(puVar49 + 2) = iVar39;
      FUN_1472ebeae(&local_148,&local_128,uVar40);
      puVar49[6] = local_118;
      puVar49[4] = local_128;
      puVar49[5] = uStack_120;
      local_278 = (int *)(ulonglong)(uint)((int)uStack_150 * 0x50);
      local_118 = 0;
      uStack_120 = CONCAT44(uStack_120._4_4_,0x4109);
      local_128 = (undefined1 *)CONCAT44((int)uStack_150 * 0x14,4);
      local_270 = 0;
      lVar44 = FUN_1400489e9(uVar40,L"Hair.Debug.Component",&local_128,local_158);
      plVar43 = local_258;
      puVar52 = (undefined8 *)(*(longlong *)(uVar40 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar27 = puVar52 + 9;
      if (*(undefined8 **)(uVar40 + 0x78) < puVar27) {
        FUN_140023dd8(local_258,0x50);
        puVar52 = (undefined8 *)(*plVar43 + 7U & 0xfffffffffffffff8);
        puVar27 = puVar52 + 9;
      }
      local_238 = uVar40 + 0x198;
      *(undefined8 **)(uVar40 + 0x70) = puVar27;
      puVar52[1] = *(undefined8 *)(lVar44 + 8);
      puVar52[2] = 0;
      *(undefined1 *)(puVar52 + 3) = 3;
      *(undefined8 *)((longlong)puVar52 + 0x1c) = 0xffffffffffffffff;
      *puVar52 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar52 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar52 + 0x2c) = 0xffffffff00000000;
      puVar52[7] = 0;
      puVar52[8] = lVar44;
      iVar39 = *(int *)(uVar40 + 0x1a0);
      *(uint *)(uVar40 + 0x1a0) = iVar39 + 1U;
      if (*(uint *)(uVar40 + 0x1a4) < iVar39 + 1U) {
        FUN_1447568fc(local_238,iVar39);
      }
      *(undefined8 **)(*(longlong *)(uVar40 + 0x198) + (longlong)iVar39 * 8) = puVar52;
      *(int *)((longlong)puVar52 + 0x1c) = *(int *)(uVar40 + 0x1a0) + -1;
      puVar49[0x10] = puVar52;
      *(int *)((longlong)puVar49 + 0x14) = (int)local_260;
      FUN_1472ebeae(&local_108,&local_128,uVar40);
      puVar49[10] = local_118;
      puVar49[8] = local_128;
      puVar49[9] = uStack_120;
      local_278 = (int *)(ulonglong)(uint)((int)uStack_160 * 0x50);
      local_118 = 0;
      uStack_120 = CONCAT44(uStack_120._4_4_,0x4109);
      local_128 = (undefined1 *)CONCAT44((int)uStack_160 * 0x14,4);
      local_270 = 0;
      lVar44 = FUN_1400489e9(uVar40,L"Hair.Debug.Groom",&local_128,local_168);
      plVar43 = local_258;
      puVar52 = (undefined8 *)(*(longlong *)(uVar40 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar27 = puVar52 + 9;
      if (*(undefined8 **)(uVar40 + 0x78) < puVar27) {
        FUN_140023dd8(local_258,0x50);
        puVar52 = (undefined8 *)(*plVar43 + 7U & 0xfffffffffffffff8);
        puVar27 = puVar52 + 9;
      }
      *(undefined8 **)(uVar40 + 0x70) = puVar27;
      puVar52[1] = *(undefined8 *)(lVar44 + 8);
      puVar52[2] = 0;
      *(undefined1 *)(puVar52 + 3) = 3;
      *(undefined8 *)((longlong)puVar52 + 0x1c) = 0xffffffffffffffff;
      *puVar52 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar52 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar52 + 0x2c) = 0xffffffff00000000;
      puVar52[7] = 0;
      puVar52[8] = lVar44;
      iVar39 = *(int *)(uVar40 + 0x1a0);
      *(uint *)(uVar40 + 0x1a0) = iVar39 + 1U;
      if (*(uint *)(uVar40 + 0x1a4) < iVar39 + 1U) {
        FUN_1447568fc(local_238,iVar39);
      }
      *(undefined8 **)(*(longlong *)(uVar40 + 0x198) + (longlong)iVar39 * 8) = puVar52;
      *(int *)((longlong)puVar52 + 0x1c) = *(int *)(uVar40 + 0x1a0) + -1;
      puVar49[0x11] = puVar52;
      *(int *)(puVar49 + 3) = iVar42;
      FUN_1472ebeae(&local_208,&local_128,uVar40);
      puVar49[0xe] = local_118;
      puVar49[0xc] = local_128;
      puVar49[0xd] = uStack_120;
      local_278 = (int *)(ulonglong)(uint)((int)uStack_170 * 0x50);
      local_118 = 0;
      uStack_120 = CONCAT44(uStack_120._4_4_,0x4109);
      local_128 = (undefined1 *)CONCAT44((int)uStack_170 * 0x14,4);
      local_270 = 0;
      lVar44 = FUN_1400489e9(uVar40,L"Hair.Debug.Binding",&local_128,local_178);
      plVar43 = local_258;
      puVar52 = (undefined8 *)(*(longlong *)(uVar40 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar27 = puVar52 + 9;
      if (*(undefined8 **)(uVar40 + 0x78) < puVar27) {
        FUN_140023dd8(local_258,0x50);
        puVar52 = (undefined8 *)(*plVar43 + 7U & 0xfffffffffffffff8);
        puVar27 = puVar52 + 9;
      }
      *(undefined8 **)(uVar40 + 0x70) = puVar27;
      puVar52[1] = *(undefined8 *)(lVar44 + 8);
      puVar52[2] = 0;
      *(undefined1 *)(puVar52 + 3) = 3;
      *(undefined8 *)((longlong)puVar52 + 0x1c) = 0xffffffffffffffff;
      *puVar52 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar52 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar52 + 0x2c) = 0xffffffff00000000;
      puVar52[7] = 0;
      puVar52[8] = lVar44;
      iVar42 = *(int *)(uVar40 + 0x1a0);
      *(uint *)(uVar40 + 0x1a0) = iVar42 + 1U;
      if (*(uint *)(uVar40 + 0x1a4) < iVar42 + 1U) {
        FUN_1447568fc(local_238,iVar42);
      }
      *(undefined8 **)(*(longlong *)(uVar40 + 0x198) + (longlong)iVar42 * 8) = puVar52;
      *(int *)((longlong)puVar52 + 0x1c) = *(int *)(uVar40 + 0x1a0) + -1;
      puVar49[0x12] = puVar52;
      FUN_1472ea582(uVar40,param_8,puVar49 + 0x14);
      FUN_145f6f6ce();
      FUN_1448e935e(local_228,&local_128,&DAT_14cbf8bc8,0);
      FUN_145f6f6ce();
      lVar44 = (longlong)local_128;
      local_198 = (longlong)local_128;
      uStack_190 = uStack_120;
      FUN_145f6f93c();
      local_128 = (undefined1 *)0x0;
      uStack_120 = 0;
      FUN_1448f70da(lVar44,&DAT_14cbf9048,puVar49 + 2,&local_128);
      local_128 = &DAT_100000001;
      uStack_120 = CONCAT44(uStack_120._4_4_,1);
      local_278 = (int *)&local_128;
      FUN_149088e15(uVar40,local_1a8,&local_198,puVar49 + 2);
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_1f8 != 0) {
      FUN_1400020a8();
    }
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    if (local_138[0] != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(iStack_144,local_148) != 0) {
      FUN_1400020a8();
    }
  }
LAB_144422b37:
  if ((local_e0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144424908 FUN_144424908 body=942 status=ok
// SIG undefined FUN_144424908(void)

void FUN_144424908(undefined8 *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  char local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  char local_a9;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(param_1 + 7);
  if ((longlong)iVar1 != 0) {
    lVar10 = param_1[6];
    lVar9 = 0;
    local_a9 = param_2;
    local_a8 = lVar10;
    do {
      plVar3 = *(longlong **)(lVar10 + lVar9);
      if ((plVar3[0x74] != 0) && (*(int *)((longlong)plVar3 + 0x3ac) == 2)) {
        if (param_2 == '\0') {
          iVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
          if (iVar5 != 0) {
            iVar5 = (**(code **)(*plVar3 + 0x20))(plVar3);
            if (iVar5 == 1) {
              iVar5 = (int)ROUND(*(float *)(plVar3[0x74] + 0x47c) + *(float *)(plVar3[0x74] + 0x47c)
                                 + -0.5);
              if (iVar5 >> 1 < 1) {
                iVar5 = 0;
              }
              if (iVar5 >> 1 < (int)plVar3[0x23]) {
                lVar7 = (ulonglong)(uint)(iVar5 >> 1) * 0x68;
                if (*(longlong *)(plVar3[0x22] + lVar7) != 0) {
                  lVar7 = plVar3[0x22] + lVar7;
                  plVar8 = (longlong *)(lVar7 + 0x38);
                  plVar6 = (longlong *)(lVar7 + 0x40);
                  goto LAB_144424a0f;
                }
              }
            }
            goto LAB_144424c74;
          }
          plVar8 = plVar3 + 0xd;
          plVar6 = plVar3 + 0xe;
        }
        else {
          plVar8 = plVar3 + 5;
          plVar6 = plVar3 + 6;
        }
LAB_144424a0f:
        lVar7 = *plVar8;
        if ((lVar7 != 0) && (lVar4 = *plVar6, lVar4 != 0)) {
          uVar2 = (undefined4)plVar3[0x2c];
          local_d8 = *(int *)param_1[9];
          *(int *)param_1[9] = local_d8 + 1;
          local_e0 = plVar3[0x74] + 0x390;
          local_70 = param_1[3];
          local_100 = param_1[5];
          local_68 = param_1[4];
          local_c0 = 0;
          local_c8 = 0;
          local_d0 = local_a9;
          local_108 = &local_70;
          local_f8 = uVar2;
          local_f0 = lVar7;
          local_e8 = lVar4;
          FUN_144427b0f(*param_1,param_1[1],param_1[2],param_1[8]);
          local_d8 = *(int *)param_1[9];
          *(int *)param_1[9] = local_d8 + 1;
          local_e0 = plVar3[0x74] + 0x390;
          local_80 = param_1[3];
          local_100 = param_1[5];
          local_78 = param_1[4];
          local_c0 = 0;
          local_c8 = 1;
          local_d0 = local_a9;
          local_108 = &local_80;
          local_f8 = uVar2;
          local_f0 = lVar7;
          local_e8 = lVar4;
          FUN_144427b0f(*param_1,param_1[1],param_1[2],param_1[8]);
          local_d8 = *(int *)param_1[9];
          *(int *)param_1[9] = local_d8 + 1;
          local_e0 = plVar3[0x74] + 0x390;
          local_90 = param_1[3];
          local_100 = param_1[5];
          local_88 = param_1[4];
          local_c0 = 1;
          local_c8 = 0;
          local_d0 = local_a9;
          local_108 = &local_90;
          local_f8 = uVar2;
          local_f0 = lVar7;
          local_e8 = lVar4;
          FUN_144427b0f(*param_1,param_1[1],param_1[2],param_1[8]);
          lVar10 = local_a8;
          param_2 = local_a9;
          local_d8 = *(int *)param_1[9];
          *(int *)param_1[9] = local_d8 + 1;
          local_e0 = plVar3[0x74] + 0x390;
          local_a0 = param_1[3];
          local_100 = param_1[5];
          local_98 = param_1[4];
          local_c0 = 1;
          local_c8 = 1;
          local_d0 = local_a9;
          local_108 = &local_a0;
          local_f8 = uVar2;
          local_f0 = lVar7;
          local_e8 = lVar4;
          FUN_144427b0f(*param_1,param_1[1],param_1[2],param_1[8]);
        }
      }
LAB_144424c74:
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144424cb7 FUN_144424cb7 body=2419 status=ok
// SIG undefined FUN_144424cb7(void)

void FUN_144424cb7(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  char *param_5,char param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  float *pfVar19;
  undefined8 uVar20;
  int *piVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  undefined8 *puVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_138 [32];
  int *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined1 local_cd;
  int local_cc;
  undefined1 *local_c8;
  undefined1 local_c0 [16];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)
        (&DAT_14ca814b0 +
        (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) * 0x3c) !=
       DAT_14ca80038) ||
     ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) *
                0x3c + 3) & 1) != 0)) {
    DAT_14ca4d100 = 1;
    if ((param_5 != (char *)0x0) &&
       ((*param_5 == '\x01' && (*(int *)(*(longlong *)(param_4 + 0x3a0) + 900) == 1)))) {
      fVar1 = *(float *)(*(longlong *)(param_4 + 0x3a0) + 0x47c);
      uVar17 = (int)ROUND(fVar1 + fVar1 + -0.5) >> 1;
      uVar26 = 0;
      if (0 < (int)uVar17) {
        uVar26 = uVar17;
      }
      if ((int)uVar26 < *(int *)(param_4 + 0x118)) {
        if (*(longlong *)(*(longlong *)(param_4 + 0x110) + (ulonglong)uVar26 * 0x68) != 0) {
          lVar27 = *(longlong *)(param_4 + 0x110) + (ulonglong)uVar26 * 0x68;
          if (*(longlong *)(lVar27 + 0x28) != 0) {
            uVar9 = *(int *)(*(longlong *)(*(longlong *)(lVar27 + 0x28) + 0x130) + 0xc) * 2;
            uVar17 = 0;
            if (*(longlong *)(param_4 + 0x18) != 0) {
              uVar17 = *(int *)(*(longlong *)(*(longlong *)(param_4 + 0x18) + 0x130) + 0xc) * 2;
            }
            if (uVar17 < uVar9) {
              uVar17 = uVar9;
            }
            DAT_14ca4d330 = DAT_14ca4d330 + uVar17;
            FUN_145f5e166();
            FUN_1448e935e(param_3,local_c0,&DAT_14cbf8978,0);
            FUN_145f5e166();
            if ((param_6 == '\0') || (*(longlong *)(lVar27 + 0x28) != 0)) {
              plVar23 = (longlong *)(param_4 + 0x18);
              if (param_6 != '\0') {
                plVar23 = (longlong *)(lVar27 + 0x30);
              }
              if ((*plVar23 != 0) && (*(longlong *)(param_4 + 0x20) != 0 || param_6 != '\0')) {
                local_110 = 0;
                local_118 = (int *)CONCAT44(local_118._4_4_,2);
                local_e8 = (longlong *)(lVar27 + 0x30);
                local_e0 = (longlong *)(param_4 + 0x18);
                local_f0 = (undefined8 *)FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,8);
                cVar16 = *(char *)((longlong)local_f0 + 0x68);
                local_108 = (longlong *)(param_1 + 0x70);
                puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar24 = puVar22 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar24) {
                  FUN_140023dd8(local_108,0x50);
                  puVar22 = (undefined8 *)(*local_108 + 7U & 0xfffffffffffffff8);
                  puVar24 = puVar22 + 9;
                }
                local_100 = (undefined8 *)(param_1 + 0x198);
                *(undefined8 **)(param_1 + 0x70) = puVar24;
                puVar22[1] = *(undefined8 *)((longlong)local_f0 + 8);
                puVar22[2] = 0;
                *(undefined1 *)(puVar22 + 3) = 3;
                *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
                *puVar22 = &PTR_FUN_14a1fb168;
                *(byte *)(puVar22 + 5) = cVar16 >> 7 & 0x1c;
                *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
                puVar22[7] = 0;
                puVar22[8] = local_f0;
                puVar24 = (undefined8 *)(longlong)*(int *)(param_1 + 0x1a0);
                uVar17 = *(int *)(param_1 + 0x1a0) + 1;
                *(uint *)(param_1 + 0x1a0) = uVar17;
                local_f0 = puVar22;
                if (*(uint *)(param_1 + 0x1a4) < uVar17) {
                  local_f8 = puVar24;
                  FUN_1447568fc(local_100,puVar24);
                  puVar24 = local_f8;
                }
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)puVar24 * 8) = local_f0;
                *(int *)((longlong)local_f0 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                local_f8 = (undefined8 *)FUN_144aba046(&DAT_14ca63b10,param_1,8,0);
                puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar24 = puVar22 + 9;
                if (*(undefined8 **)(param_1 + 0x78) < puVar24) {
                  FUN_140023dd8(local_108,0x50);
                  puVar22 = (undefined8 *)(*local_108 + 7U & 0xfffffffffffffff8);
                  puVar24 = puVar22 + 9;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar24;
                puVar22[1] = *(undefined8 *)((longlong)local_f8 + 8);
                puVar22[2] = 0;
                *(undefined1 *)(puVar22 + 3) = 3;
                *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
                *puVar22 = &PTR_FUN_14a1fb168;
                *(undefined1 *)(puVar22 + 5) = 0x22;
                *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
                puVar22[7] = 0;
                puVar22[8] = local_f8;
                iVar5 = *(int *)(param_1 + 0x1a0);
                *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
                local_f8 = puVar22;
                if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
                  FUN_1447568fc(local_100,iVar5);
                }
                plVar23 = local_108;
                *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = local_f8;
                *(int *)((longlong)local_f8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
                puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar24 = puVar22 + 0x20;
                if (*(undefined8 **)(param_1 + 0x78) < puVar24) {
                  FUN_140023dd8(local_108,0x110);
                  puVar22 = (undefined8 *)(*plVar23 + 0xfU & 0xfffffffffffffff0);
                  puVar24 = puVar22 + 0x20;
                }
                *(undefined8 **)(param_1 + 0x70) = puVar24;
                *puVar22 = &PTR_FUN_14baa3508;
                puVar22[2] = 0;
                *(undefined1 *)(puVar22 + 3) = 1;
                puVar22[0x12] = 0;
                puVar22[0x1c] = 0;
                puVar22[0x16] = 0;
                puVar22[0x17] = 0;
                puVar22[0x18] = 0;
                puVar22[0x19] = 0;
                puVar22[0x1a] = 0;
                *(undefined1 *)(puVar22 + 0x1d) = 1;
                plVar23 = (longlong *)(param_1 + 0x98);
                puVar22[0x1e] = 0;
                puVar22[0x1f] = 0;
                local_100 = (undefined8 *)(longlong)*(int *)(param_1 + 0xa0);
                uVar17 = *(int *)(param_1 + 0xa0) + 1;
                *(uint *)(param_1 + 0xa0) = uVar17;
                if (*(uint *)(param_1 + 0xa4) < uVar17) {
                  local_108 = plVar23;
                  FUN_1448cfae8(plVar23,local_100);
                  plVar23 = local_108;
                }
                local_d8 = puVar22 + 0x1c;
                *(undefined8 **)(*plVar23 + (longlong)local_100 * 8) = puVar22;
                local_100 = puVar22 + 2;
                lVar18 = FUN_1447e4f80();
                local_108 = (longlong *)CONCAT44(local_108._4_4_,2);
                cVar16 = *(char *)(lVar18 + 0x41);
                if (*(char *)(lVar18 + 0x41) == '\x03') {
                  cVar16 = '\x02';
                }
                puVar22[2] = *(undefined8 *)(param_2 + 0x18);
                *(char *)(puVar22 + 3) = cVar16;
                *(undefined4 *)(puVar22 + 4) = *(undefined4 *)(param_4 + 0x10);
                *(uint *)((longlong)puVar22 + 0x24) = uVar26;
                *(undefined4 *)(puVar22 + 0xe) = 0;
                *(undefined4 *)(puVar22 + 0x11) = DAT_14c846338;
                puVar22[0x10] = DAT_14c846330;
                puVar22[0x17] = local_f0;
                puVar22[0x12] = local_f8;
                puVar22[0x18] = local_f0;
                *(undefined4 *)(puVar22 + 0x13) = 0;
                puVar22[0x14] = DAT_14c846330;
                *(undefined4 *)(puVar22 + 0x15) = DAT_14c846338;
                puVar22[0x19] = local_f0;
                puVar22[0x16] = local_f8;
                puVar22[0x1a] = local_f0;
                if (param_6 == '\0') {
                  puVar24 = puVar22 + 0x16;
                  puVar28 = puVar22 + 0x19;
                  local_f0 = puVar22 + 0x1a;
                  pfVar19 = (float *)(puVar22 + 0x14);
                  *(undefined4 *)(puVar22 + 0x13) =
                       *(undefined4 *)(*(longlong *)(*local_e0 + 0x130) + 0xc);
                  lVar18 = 0xa8;
                  lVar25 = 0xa4;
                  local_108 = (longlong *)CONCAT44(local_108._4_4_,4);
                  plVar23 = local_e0;
                  local_e8 = (longlong *)(param_4 + 0x20);
                }
                else {
                  puVar24 = puVar22 + 0x12;
                  puVar28 = puVar22 + 0x17;
                  local_f0 = puVar22 + 0x18;
                  pfVar19 = (float *)(puVar22 + 0x10);
                  *(undefined4 *)(puVar22 + 0xe) =
                       *(undefined4 *)(*(longlong *)(*(longlong *)(lVar27 + 0x28) + 0x130) + 0xc);
                  lVar18 = 0x88;
                  lVar25 = 0x84;
                  plVar23 = (longlong *)(lVar27 + 0x28);
                }
                lVar27 = *(longlong *)(*plVar23 + 0x130);
                dVar29 = *(double *)(lVar27 + 0x38);
                dVar2 = *(double *)(lVar27 + 0x50);
                dVar3 = *(double *)(lVar27 + 0x30);
                dVar4 = *(double *)(lVar27 + 0x48);
                *pfVar19 = (float)((*(double *)(lVar27 + 0x28) + *(double *)(lVar27 + 0x40)) * 0.5);
                *(float *)((longlong)puVar22 + lVar25) = (float)((dVar3 + dVar4) * 0.5);
                *(float *)((longlong)puVar22 + lVar18) = (float)((dVar29 + dVar2) * 0.5);
                uVar20 = FUN_14716d181(param_1,*plVar23 + 0x50);
                plVar23 = local_e8;
                *puVar28 = uVar20;
                uVar20 = FUN_14716d181(param_1,*local_e8 +
                                               (ulonglong)*(uint *)(*local_e8 + 0x188) * 0x20 + 0x90
                                      );
                *puVar24 = uVar20;
                uVar20 = FUN_14716d181(param_1,*plVar23 +
                                               (ulonglong)*(uint *)(*plVar23 + 0x188) * 0x20 + 0x50)
                ;
                *local_f0 = uVar20;
                dVar10 = *(double *)(param_4 + 0x340);
                dVar11 = *(double *)(param_4 + 0x348);
                dVar12 = *(double *)(param_4 + 0x350);
                dVar13 = *(double *)(param_4 + 0x380);
                dVar14 = *(double *)(param_4 + 0x388);
                dVar15 = *(double *)(param_4 + 0x390);
                dVar30 = dVar11 + dVar11;
                dVar31 = dVar12 + dVar12;
                dVar6 = dVar10 * (dVar10 + dVar10);
                dVar29 = *(double *)(param_4 + 0x358);
                dVar7 = dVar31 * dVar29;
                dVar8 = (dVar10 + dVar10) * *(double *)(param_4 + 0x358);
                dVar29 = dVar30 * dVar29;
                dVar2 = *(double *)(param_4 + 0x360);
                dVar3 = *(double *)(param_4 + 0x368);
                dVar4 = *(double *)(param_4 + 0x370);
                *(float *)(puVar22 + 6) =
                     (float)((1.0 - (dVar12 * dVar31 + dVar11 * dVar30)) * dVar13);
                *(float *)((longlong)puVar22 + 0x34) = (float)((dVar30 * dVar10 + dVar7) * dVar13);
                *(float *)(puVar22 + 7) = (float)((dVar31 * dVar10 - dVar29) * dVar13);
                *(undefined4 *)((longlong)puVar22 + 0x3c) = 0;
                *(float *)(puVar22 + 8) = (float)((dVar30 * dVar10 - dVar7) * dVar14);
                *(float *)((longlong)puVar22 + 0x44) =
                     (float)((1.0 - (dVar12 * dVar31 + dVar6)) * dVar14);
                *(float *)(puVar22 + 9) = (float)((dVar31 * dVar11 + dVar8) * dVar14);
                *(undefined4 *)((longlong)puVar22 + 0x4c) = 0;
                *(float *)(puVar22 + 10) = (float)((dVar29 + dVar31 * dVar10) * dVar15);
                *(float *)((longlong)puVar22 + 0x54) = (float)((dVar31 * dVar11 - dVar8) * dVar15);
                *(float *)(puVar22 + 0xb) = (float)((1.0 - (dVar6 + dVar11 * dVar30)) * dVar15);
                *(undefined4 *)((longlong)puVar22 + 0x5c) = 0;
                *(float *)(puVar22 + 0xc) = (float)dVar2;
                *(float *)((longlong)puVar22 + 100) = (float)dVar3;
                *(float *)(puVar22 + 0xd) = (float)dVar4;
                *(undefined4 *)((longlong)puVar22 + 0x6c) = 0x3f800000;
                *(undefined4 *)(puVar22 + 5) = local_108._0_4_;
                FUN_1472ea582(param_1,param_5,local_d8);
                piVar21 = (int *)(puVar22 + 0x13);
                if (*(uint *)(puVar22 + 5) < 3) {
                  piVar21 = (int *)(puVar22 + 0xe);
                }
                iVar5 = *piVar21 + 0x1f;
                local_cc = *piVar21 + 0x3e;
                if (-1 < iVar5) {
                  local_cc = iVar5;
                }
                local_cc = local_cc >> 5;
                local_118 = &local_cc;
                local_c8 = &DAT_100000001;
                FUN_149088541(param_1,&local_cd,local_c0,local_100);
              }
            }
          }
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14442562c FUN_14442562c body=48 status=ok
// SIG undefined FUN_14442562c(void)

longlong FUN_14442562c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_145ad6db8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444256b8 FUN_1444256b8 body=1811 status=ok
// SIG undefined FUN_1444256b8(void)

void FUN_1444256b8(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  longlong lVar30;
  char cVar31;
  double *pdVar32;
  double *pdVar33;
  longlong *plVar34;
  longlong lVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  undefined1 uVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  double dVar52;
  undefined1 auStack_238 [32];
  int local_218;
  undefined8 local_210;
  longlong local_208;
  longlong local_200;
  double *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  uint local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  longlong local_170;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 uStack_148;
  byte bStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined4 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  cVar31 = FUN_14716d320();
  if ((cVar31 != '\0') && (*(int *)(param_1 + 0x2a0) != 0)) {
    uVar5 = *(undefined2 *)
             (&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_2 + 0x148) + 0x3090) * 2);
    cVar31 = FUN_144b0f89b(0,uVar5);
    if ((cVar31 != '\0') ||
       ((cVar31 = FUN_144b0f89b(1,uVar5), cVar31 != '\0' ||
        (cVar31 = FUN_144b0f89b(2,uVar5), cVar31 != '\0')))) {
      iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if ((iVar6 != 0x40000002) && ((iVar6 == 1 && (DAT_14c86a9f8 != '\0')))) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
      bVar4 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x148) + 8) + 0x60);
      iVar6 = *(int *)(param_1 + 0x2a0);
      if (iVar6 != 0) {
        local_1f8 = (double *)(param_1 + 0x160);
        iVar38 = 0;
        do {
          uVar47 = 0;
          uVar46 = 0;
          lVar40 = *(longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar38 * 8);
          if (DAT_14c7649dd == '\x01') {
            if (*(int *)(lVar40 + 0x3ac) == 2) {
LAB_144425899:
              lVar35 = 0x200;
              goto LAB_14442589e;
            }
            dVar14 = *(double *)(param_1 + 0x100);
            dVar17 = *(double *)(param_1 + 0x108);
            dVar45 = *(double *)(param_1 + 0x110);
            dVar41 = *(double *)(param_1 + 0x118);
            dVar11 = *(double *)(param_1 + 0x120);
            dVar15 = *(double *)(param_1 + 0x128);
            auVar3 = *(undefined1 (*) [16])(param_1 + 0x130);
            dVar18 = auVar3._0_8_;
            uVar46 = auVar3._8_4_;
            uVar47 = auVar3._12_4_;
            dVar9 = *(double *)(param_1 + 0x140);
            dVar12 = *(double *)(param_1 + 0x148);
            dVar43 = *(double *)(param_1 + 0x150);
            dVar52 = *(double *)(param_1 + 0x158);
            uVar48 = *(undefined4 *)(param_1 + 0x170);
            uVar49 = *(undefined4 *)(param_1 + 0x174);
            pdVar33 = local_1f8;
            uVar50 = *(undefined4 *)(param_1 + 0x178);
            uVar51 = *(undefined4 *)(param_1 + 0x17c);
          }
          else {
            lVar35 = 0x1a0;
            if (*(int *)(lVar40 + 0x3ac) == 2) goto LAB_144425899;
LAB_14442589e:
            pdVar32 = (double *)(lVar35 + lVar40);
            pdVar33 = pdVar32 + 4;
            dVar19 = *pdVar32;
            dVar20 = pdVar32[1];
            dVar41 = pdVar32[2];
            uVar48 = *(undefined4 *)(pdVar32 + 6);
            uVar49 = *(undefined4 *)((longlong)pdVar32 + 0x34);
            dVar45 = pdVar32[8];
            dVar11 = pdVar32[9];
            dVar42 = dVar20 + dVar20;
            dVar52 = dVar41 + dVar41;
            dVar44 = dVar19 * (dVar19 + dVar19);
            dVar14 = (1.0 - (dVar41 * dVar52 + dVar20 * dVar42)) * dVar45;
            dVar15 = (1.0 - (dVar41 * dVar52 + dVar44)) * dVar11;
            dVar12 = pdVar32[10];
            dVar43 = (1.0 - (dVar44 + dVar20 * dVar42)) * dVar12;
            dVar41 = pdVar32[3];
            dVar44 = dVar52 * dVar41;
            dVar8 = (dVar19 + dVar19) * pdVar32[3];
            dVar41 = dVar42 * dVar41;
            dVar17 = (dVar42 * dVar19 + dVar44) * dVar45;
            dVar18 = (dVar52 * dVar20 + dVar8) * dVar11;
            dVar9 = (dVar41 + *pdVar32 * dVar52) * dVar12;
            dVar45 = (*pdVar32 * dVar52 - dVar41) * dVar45;
            dVar11 = (dVar42 * dVar19 - dVar44) * dVar11;
            dVar12 = (dVar52 * dVar20 - dVar8) * dVar12;
            dVar52 = 0.0;
            dVar41 = 0.0;
            uVar50 = 0;
            uVar51 = 0x3ff00000;
          }
          fVar2 = *(float *)(*(longlong *)(lVar40 + 0x3a0) + 0x47c);
          iVar36 = (int)ROUND(fVar2 + fVar2 + -0.5);
          if (iVar36 >> 1 < 1) {
            iVar36 = 0;
          }
          dVar44 = *pdVar33;
          dVar8 = pdVar33[1];
          iVar7 = *(int *)(*(longlong *)(lVar40 + 0x3a0) + 900);
          if (iVar7 == 2) {
            plVar34 = (longlong *)
                      (*(longlong *)(lVar40 + 0x120) + (ulonglong)(uint)(iVar36 >> 1) * 0x30 + 0x10)
            ;
LAB_144425a19:
            uVar37 = 3;
            uVar39 = 0;
LAB_144425a21:
            if ((((uVar37 & 2 - ((bVar4 & 2) == 0)) != 0) && (lVar40 = *plVar34, lVar40 != 0)) &&
               ((*(byte *)(lVar40 + 0x130) & 2) != 0)) {
              local_210 = 0;
              local_218 = iVar38;
              lVar35 = FUN_1444261d0(param_1,param_2,1);
              if (lVar35 != 0) {
                local_170 = lVar40 + 0x90;
                uStack_158 = 0;
                uStack_154 = 0;
                uStack_150 = 0;
                local_168 = 0;
                uStack_15c = 0;
                uStack_148 = 0xff;
                bStack_147 = bStack_147 & 0xe0;
                uStack_146 = 0;
                uStack_145 = 0;
                uStack_144 = 0x100;
                uStack_140 = 0;
                local_f8 = 0;
                uStack_128 = 0;
                uStack_124 = 0;
                uStack_120 = 0;
                local_138 = 0;
                local_130 = 0;
                local_12c = 0;
                uStack_108 = 0;
                uStack_104 = 0;
                local_118 = 0;
                uStack_110 = 0;
                uStack_10c = 0;
                uStack_160 = 1;
                local_200 = param_2;
                FUN_147471df6(&local_168,0);
                lVar30 = local_168;
                *(undefined8 *)(local_168 + 0xa8) = 0;
                iVar36 = *(int *)(lVar35 + 0xb0);
                lVar40 = *(longlong *)(lVar35 + 0xa8);
                *(int *)(local_168 + 0xb0) = iVar36;
                if (iVar36 == 0) {
                  *(undefined4 *)(local_168 + 0xb4) = 1;
                }
                else {
                  local_208 = lVar35;
                  if (lVar40 != 0) {
                    local_208 = lVar40;
                  }
                  FUN_14473945a(local_168,iVar36,0);
                  lVar40 = *(longlong *)(lVar30 + 0xa8);
                  if (*(longlong *)(lVar30 + 0xa8) == 0) {
                    lVar40 = lVar30;
                  }
                  FUN_1447393f1(lVar40,local_208,iVar36);
                }
                uVar37 = uStack_110;
                *(undefined1 *)(lVar30 + 0xe8) = *(undefined1 *)(lVar35 + 0xe8);
                uVar21 = *(undefined4 *)(lVar35 + 0xb8);
                uVar22 = *(undefined4 *)(lVar35 + 0xbc);
                uVar23 = *(undefined4 *)(lVar35 + 0xc0);
                uVar24 = *(undefined4 *)(lVar35 + 0xc4);
                uVar25 = *(undefined4 *)(lVar35 + 200);
                uVar26 = *(undefined4 *)(lVar35 + 0xcc);
                uVar27 = *(undefined4 *)(lVar35 + 0xd0);
                uVar28 = *(undefined4 *)(lVar35 + 0xd4);
                uVar29 = *(undefined8 *)(lVar35 + 0xe0);
                *(undefined8 *)(lVar30 + 0xd8) = *(undefined8 *)(lVar35 + 0xd8);
                *(undefined8 *)(lVar30 + 0xe0) = uVar29;
                *(undefined4 *)(lVar30 + 200) = uVar25;
                *(undefined4 *)(lVar30 + 0xcc) = uVar26;
                *(undefined4 *)(lVar30 + 0xd0) = uVar27;
                *(undefined4 *)(lVar30 + 0xd4) = uVar28;
                *(undefined4 *)(lVar30 + 0xb8) = uVar21;
                *(undefined4 *)(lVar30 + 0xbc) = uVar22;
                *(undefined4 *)(lVar30 + 0xc0) = uVar23;
                *(undefined4 *)(lVar30 + 0xc4) = uVar24;
                lVar40 = (longlong)(int)uStack_110;
                uStack_110 = uStack_110 + 1;
                if (uStack_10c < uStack_110) {
                  FUN_140518214(&local_118,uVar37);
                }
                param_2 = local_200;
                lVar40 = lVar40 * 0x80;
                auVar3._8_4_ = SUB84(dVar17,0);
                auVar3._0_8_ = dVar14;
                auVar3._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
                *(undefined1 (*) [16])(local_118 + lVar40) = auVar3;
                pdVar33 = (double *)(local_118 + 0x10 + lVar40);
                *pdVar33 = dVar45;
                pdVar33[1] = dVar41;
                auVar13._8_4_ = SUB84(dVar15,0);
                auVar13._0_8_ = dVar11;
                auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                *(undefined1 (*) [16])(local_118 + 0x20 + lVar40) = auVar13;
                auVar16._8_4_ = uVar46;
                auVar16._0_8_ = dVar18;
                auVar16._12_4_ = uVar47;
                *(undefined1 (*) [16])(local_118 + 0x30 + lVar40) = auVar16;
                auVar10._8_4_ = SUB84(dVar12,0);
                auVar10._0_8_ = dVar9;
                auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                *(undefined1 (*) [16])(local_118 + 0x40 + lVar40) = auVar10;
                pdVar33 = (double *)(local_118 + 0x50 + lVar40);
                *pdVar33 = dVar43;
                pdVar33[1] = dVar52;
                pdVar33 = (double *)(local_118 + 0x60 + lVar40);
                *pdVar33 = dVar44;
                pdVar33[1] = dVar8;
                puVar1 = (undefined4 *)(local_118 + 0x70 + lVar40);
                *puVar1 = uVar48;
                puVar1[1] = uVar49;
                puVar1[2] = uVar50;
                puVar1[3] = uVar51;
                local_1f0 = local_170;
                uStack_1e0 = CONCAT44(uStack_15c,uStack_160);
                local_1e8 = local_168;
                local_168 = 0;
                uStack_160 = 0;
                uStack_15c = 0;
                local_1d8 = CONCAT44(uStack_154,uStack_158);
                uStack_1d0 = CONCAT44(uStack_14c,uStack_150);
                uStack_1c8 = CONCAT13(uVar39,CONCAT12(uStack_146,CONCAT11(bStack_147,uStack_148)));
                uStack_1c4 = CONCAT22(uStack_142,uStack_144);
                uStack_1c0 = uStack_140;
                local_1b8 = local_138;
                local_138 = 0;
                local_1b0 = local_130;
                local_1ac = local_12c;
                local_130 = 0;
                local_12c = 0;
                local_1a8 = CONCAT44(uStack_124,uStack_128);
                uStack_1a0 = CONCAT44(uStack_11c,uStack_120);
                local_198 = local_118;
                local_118 = 0;
                local_190 = uStack_110;
                local_18c = uStack_10c;
                uStack_110 = 0;
                uStack_10c = 0;
                local_188 = uStack_108;
                uStack_184 = (undefined4)uStack_104;
                uStack_180 = uStack_104._4_4_;
                uStack_17c = uStack_fc;
                local_178 = local_f8;
                local_f8 = 0;
                uStack_145 = uVar39;
                FUN_147cee9b0(local_200,&local_1f0);
                FUN_1472aaabe(&local_170);
              }
            }
          }
          else {
            if (iVar7 == 1) {
              plVar34 = (longlong *)
                        (*(longlong *)(lVar40 + 0x110) + (ulonglong)(uint)(iVar36 >> 1) * 0x68 +
                        0x18);
              goto LAB_144425a19;
            }
            if (iVar7 == 0) {
              plVar34 = (longlong *)(lVar40 + 0x78);
              uVar37 = *(uint *)(lVar40 + 0x84);
              uVar39 = 1;
              goto LAB_144425a21;
            }
          }
          iVar38 = iVar38 + 1;
        } while (iVar6 != iVar38);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144425dcc FUN_144425dcc body=1027 status=ok
// SIG undefined FUN_144425dcc(void)

void FUN_144425dcc(longlong param_1,longlong *param_2,longlong param_3,uint param_4,longlong param_5
                  )

{
  undefined2 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auStack_128 [32];
  double *local_108;
  undefined8 local_100;
  uint local_f0;
  int local_ec;
  longlong *local_e8;
  longlong *local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  piVar8 = &DAT_14c760db4;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    piVar8 = (int *)(*(longlong *)(param_3 + 0x40) + 8);
  }
  uVar1 = *(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar8 * 2);
  local_f0 = param_4;
  cVar6 = FUN_144b0f89b(0,uVar1);
  if ((((cVar6 != '\0') || (cVar6 = FUN_144b0f89b(1,uVar1), cVar6 != '\0')) ||
      (cVar6 = FUN_144b0f89b(2,uVar1), cVar6 != '\0')) &&
     ((iVar15 = *(int *)(param_1 + 0x2a0), iVar15 != 0 && (0 < (int)param_2[1])))) {
    local_e8 = (longlong *)(param_5 + 0xa8);
    uVar14 = 0;
    local_ec = iVar15;
    local_e0 = param_2;
    do {
      lVar2 = *(longlong *)(*local_e0 + uVar14 * 8);
      if (((*(char *)(lVar2 + 0x23eb) == '\0') &&
          ((cVar6 = FUN_144914152(param_1,lVar2), cVar6 != '\0' ||
           (cVar6 = FUN_14480c900(param_1,lVar2), cVar6 != '\0')))) &&
         ((local_f0 >> ((uint)uVar14 & 0x1f) & 1) != 0)) {
        iVar13 = 0;
        do {
          uVar7 = FUN_14352174c(lVar2);
          if ((byte)uVar7 < 0x12) {
            if ((0xc006U >> (uVar7 & 0x1f) & 1) == 0) {
              uVar10 = 0;
              if ((0x33df8U >> (uVar7 & 0x1f) & 1) == 0) goto LAB_144425f43;
            }
            else if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar13 * 8) +
                             0x3a8) != 0) goto LAB_144425f41;
            fVar18 = 0.0;
            uVar17 = 0;
            if ((byte)(uVar7 - 3) < 0xf) {
              uVar17 = *(undefined4 *)(&DAT_14baa3cd0 + (ulonglong)(uVar7 - 3 & 0xff) * 4);
            }
            if ((longlong)*(int *)(param_1 + 0x2a0) != 0) {
              lVar9 = 0;
              do {
                fVar16 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x298) + lVar9) + 0xbc) *
                         0.5;
                if (fVar18 <= fVar16) {
                  fVar18 = fVar16;
                }
                lVar9 = lVar9 + 8;
              } while ((longlong)*(int *)(param_1 + 0x2a0) * 8 != lVar9);
            }
            dVar3 = DAT_14c8464f0;
            dVar4 = DAT_14c8464e8;
            dVar5 = DAT_14c8464e0;
            if ((byte)uVar7 == 0xd) {
              iVar15 = DAT_14cbf8190;
              if (1 < DAT_14cbf8190) {
                iVar15 = 2;
              }
              if (iVar15 < 1) {
                iVar15 = 0;
              }
              fVar18 = (float)iVar15;
            }
            else if ((uVar7 & 0xff) == 0x10) {
              FUN_14907f4f0(&local_c0,iVar13);
              dVar3 = (double)local_b8;
              dVar4 = (double)local_bc;
              dVar5 = (double)local_c0;
            }
            else if ((uVar7 & 0xff) == 0x11) {
              lVar9 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar13 * 8) + 0x3a0
                       );
              fVar18 = 0.0;
              if (lVar9 != 0) {
                fVar18 = *(float *)(lVar9 + 0x47c);
              }
              uVar7 = *(int *)(DAT_14cb0d2b0 + 0x7a8) - 1;
              if ((int)fVar18 < (int)uVar7) {
                uVar7 = (int)fVar18;
              }
              if ((int)uVar7 < 1) {
                uVar7 = 0;
              }
              lVar9 = *(longlong *)(DAT_14cb0d2b0 + 0x7a0);
              lVar12 = (ulonglong)uVar7 * 0x10;
              dVar3 = (double)*(float *)(lVar9 + 8 + lVar12);
              dVar4 = (double)*(float *)(lVar9 + 4 + lVar12);
              dVar5 = (double)*(float *)(lVar9 + lVar12);
            }
            uVar10 = FUN_14001cc68(0x118,0x10);
            local_d8 = dVar5;
            local_d0 = dVar4;
            local_c8 = dVar3;
            if (*(longlong **)(param_1 + 0x2d0) == (longlong *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0x2f0))();
            }
            local_108 = &local_d8;
            FUN_1490852fe(uVar10,uVar11,uVar17,fVar18);
            iVar15 = *(int *)(param_5 + 0xb0);
            *(uint *)(param_5 + 0xb0) = iVar15 + 1U;
            if (*(uint *)(param_5 + 0xb4) < iVar15 + 1U) {
              FUN_1479cc194(local_e8,iVar15);
            }
            *(undefined8 *)(*local_e8 + (longlong)iVar15 * 8) = uVar10;
            iVar15 = local_ec;
          }
          else {
LAB_144425f41:
            uVar10 = 0;
          }
LAB_144425f43:
          local_108 = (double *)CONCAT44(local_108._4_4_,iVar13);
          local_100 = uVar10;
          lVar9 = FUN_1444261d0(param_1,param_5,0);
          if (lVar9 != 0) {
            FUN_1436a14f8(param_5,uVar14 & 0xffffffff);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 != iVar15);
      }
      uVar14 = uVar14 + 1;
    } while ((longlong)uVar14 < (longlong)(int)local_e0[1]);
  }
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444261d0 FUN_1444261d0 body=5050 status=ok
// SIG undefined FUN_1444261d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1444261d0(longlong param_1,longlong *param_2,int param_3,longlong param_4,int param_5,
                       longlong param_6)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  undefined4 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong *plVar13;
  double *pdVar14;
  longlong lVar15;
  uint *puVar16;
  void *_Src;
  void *_Dst;
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  double *pdVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar40;
  double dVar41;
  undefined1 auVar39 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined4 uVar55;
  double dVar56;
  undefined1 auStack_798 [32];
  undefined4 *local_778;
  longlong local_770;
  longlong local_768;
  ulonglong local_760;
  ulonglong local_758;
  longlong *local_750;
  undefined1 local_748 [16];
  int local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  ulonglong local_728;
  longlong local_720;
  ulonglong local_718;
  int local_710;
  uint local_70c;
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  longlong local_6e8;
  int *local_6e0;
  double local_6d8;
  undefined8 uStack_6d0;
  double local_6c8;
  undefined8 uStack_6c0;
  double local_6b8;
  undefined8 uStack_6b0;
  double local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  double local_688;
  undefined8 uStack_680;
  double local_678;
  undefined8 uStack_670;
  double local_668;
  double dStack_660;
  undefined4 uStack_654;
  undefined4 local_650;
  undefined1 local_649;
  undefined4 local_648 [92];
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  float local_458;
  float local_454;
  float local_450;
  float local_448;
  float local_444;
  float local_440;
  undefined4 auStack_3c8 [48];
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  int local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  double local_268 [22];
  uint local_1b4;
  byte local_1a3;
  double local_178 [4];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  lVar15 = DAT_14ca97140;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_798;
  uVar28 = *(uint *)(param_4 + 0x3a8);
  uVar29 = 0;
  if (uVar28 == 3) goto LAB_144427361;
  lVar24 = *(longlong *)(param_4 + 0x3a0);
  uVar21 = (int)ROUND(*(float *)(lVar24 + 0x47c) + *(float *)(lVar24 + 0x47c) + -0.5) >> 1;
  if (0 < (int)uVar21) {
    uVar29 = (ulonglong)uVar21;
  }
  cVar5 = *(char *)(lVar24 + 0x484);
  local_768 = param_1;
  if (uVar28 == 1) {
    if ((int)uVar29 < *(int *)(param_4 + 0x118)) {
      lVar15 = *(longlong *)(*(longlong *)(param_4 + 0x110) + uVar29 * 0x68);
      if (lVar15 != 0) {
        local_748._0_8_ = *(undefined8 *)(*(longlong *)(param_4 + 0x110) + 0x60 + uVar29 * 0x68);
        uVar27 = (ulonglong)(uint)((*(int *)(*(longlong *)(lVar15 + 0x140) + 0x68) / 3) * 3);
        uVar26 = uVar27 / 3;
        uVar30 = lVar15 + 0x78;
        if (param_6 == 0) {
          plVar13 = (longlong *)
                    (uVar29 * 8 +
                    *(longlong *)(*(longlong *)(param_1 + 0x2a8) + 8 + (longlong)param_5 * 0x28));
          goto LAB_1444264b3;
        }
LAB_1444263c9:
        iVar18 = 1;
        uVar25 = 0;
        local_738 = param_3;
        goto LAB_1444264bd;
      }
    }
  }
  else {
    if (uVar28 != 2) {
      local_748._0_8_ = *(undefined8 *)(param_4 + 0x100);
      uVar21 = *(uint *)(lVar24 + 0x48c);
      iVar18 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      uVar30 = 0;
      if (iVar18 == 0x40000002) {
        uVar29 = 0;
        local_738 = param_3;
      }
      else {
        bVar31 = true;
        local_738 = param_3;
        if ((DAT_14c86a9f8 == '\x01') && (iVar18 != 2)) {
          if (iVar18 == 1) {
            local_760 = (ulonglong)uVar21;
            uVar10 = FUN_140ad26c0();
            local_758 = CONCAT44(local_758._4_4_,uVar10);
            DVar11 = GetCurrentThreadId();
            uVar21 = (uint)local_760;
            bVar31 = (DWORD)local_758 == DVar11;
          }
          else {
            bVar31 = false;
          }
        }
        uVar29 = (ulonglong)(bVar31 ^ 1);
      }
      uVar27 = (ulonglong)(((uint)(*(int *)(lVar15 + uVar29 * 4) < 1) * 4 + 2) * uVar21);
      uVar25 = (uint)CONCAT71((int7)((ulonglong)lVar15 >> 8),*(char *)(param_4 + 0x10c));
      uVar26 = (ulonglong)(uVar21 * 2);
      if (*(char *)(param_4 + 0x10c) != '\0') {
        uVar26 = uVar30;
      }
      if (param_6 == 0) {
        plVar13 = (longlong *)((longlong)param_5 * 0x28 + *(longlong *)(local_768 + 0x2a8));
        iVar18 = 2;
        uVar30 = 0;
LAB_1444264ba:
        param_6 = *plVar13;
      }
      else {
        iVar18 = 2;
      }
LAB_1444264bd:
      lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar22 = *(int *)(lVar15 + 0xc60);
      if (((iVar22 != 0x40000002) && (iVar22 == 1)) && (DAT_14c86a9f8 != '\0')) {
        local_760 = uVar26;
        local_750 = param_2;
        local_718 = uVar27;
        FUN_140ad26c0();
        GetCurrentThreadId();
        uVar26 = local_760;
        uVar27 = local_718;
        param_2 = local_750;
      }
      uVar29 = 0;
      if (((param_6 != 0) && (cVar5 != '\0')) && (uVar29 = 0, (int)uVar26 != 0 || (uVar25 & 1) != 0)
         ) {
        local_708._0_8_ = lVar15;
        iVar22 = (int)param_2[1];
        iVar6 = (int)param_2[2];
        iVar9 = (iVar6 + 0x44) / 0x44;
        *(int *)(param_2 + 2) = iVar6 + 1;
        local_760 = uVar26;
        local_758 = (ulonglong)uVar28;
        local_718 = uVar27;
        local_710 = iVar18;
        local_70c = uVar25;
        if (iVar22 < iVar9) {
          local_6f8._0_8_ = param_6;
          local_750 = param_2;
          local_728 = uVar30;
          local_6e8 = param_4;
          do {
            local_720 = CONCAT44(local_720._4_4_,iVar22);
            lVar15 = FUN_14001cc68(0x3fc0,0x10);
            lVar24 = 0;
            do {
              *(undefined8 *)(lVar15 + 0xa8 + lVar24) = 0;
              puVar1 = (undefined8 *)(lVar15 + 0xb8 + lVar24);
              *puVar1 = 0;
              puVar1[1] = 0;
              *(undefined8 *)(lVar15 + 200 + lVar24) = 0;
              *(undefined8 *)(lVar15 + 0xd0 + lVar24) = 0xffffffff;
              *(undefined8 *)(lVar15 + 0xd8 + lVar24) = 0xff0000ffffffff;
              *(undefined1 *)(lVar15 + 0xe0 + lVar24) = 0;
              *(undefined4 *)(lVar15 + 0xe4 + lVar24) = 0x40c00f07;
              pbVar2 = (byte *)(lVar15 + 0xe8 + lVar24);
              *pbVar2 = *pbVar2 & 0xfc;
              *(undefined1 **)(lVar15 + 0xb0 + lVar24) = &DAT_100000001;
              FUN_14470b9e0(lVar15 + lVar24,1);
              lVar24 = lVar24 + 0xf0;
            } while (lVar24 != 0x3fc0);
            iVar18 = (int)local_750[1];
            *(uint *)(local_750 + 1) = iVar18 + 1U;
            if (*(uint *)((longlong)local_750 + 0xc) < iVar18 + 1U) {
              FUN_14002baf6(local_750,iVar18);
            }
            *(longlong *)(*local_750 + (longlong)iVar18 * 8) = lVar15;
            iVar22 = (int)local_720 + 1;
            uVar28 = (uint)local_758;
            param_6 = local_6f8._0_8_;
            param_2 = local_750;
            param_4 = local_6e8;
            uVar30 = local_728;
          } while (iVar22 != iVar9);
        }
        lVar24 = local_768;
        lVar15 = *(longlong *)(*param_2 + (longlong)(iVar6 / 0x44) * 8);
        lVar19 = (ulonglong)(uint)(iVar6 % 0x44) * 0xf0;
        uVar29 = lVar15 + lVar19;
        uVar28 = uVar28 - 1;
        uVar21 = 0x500;
        if (uVar28 >= 2) {
          uVar21 = 0;
        }
        *(uint *)(lVar15 + 0xe4 + lVar19) =
             (uint)(uVar28 < 2 || local_738 == 1) << 9 | uVar21 |
             *(uint *)(lVar15 + 0xe4 + lVar19) & 0xfffff8ff;
        *(undefined4 *)(lVar15 + 0xd8 + lVar19) = 0;
        uVar26 = *(ulonglong *)(lVar15 + 0xa8 + lVar19);
        if (uVar26 == 0) {
          uVar26 = uVar29;
        }
        *(ulonglong *)(uVar26 + 0x18) = uVar30;
        pbVar2 = (byte *)(lVar15 + 0xe5 + lVar19);
        *pbVar2 = *pbVar2 & 0xef;
        local_728 = CONCAT44(local_728._4_4_,uVar28);
        uStack_654._3_1_ = uVar28 < 2;
        *(undefined8 *)(lVar15 + 0xb8 + lVar19) = local_748._0_8_;
        *(longlong *)(lVar15 + 0xc0 + lVar19) = param_6;
        local_770 = (longlong)&uStack_654 + 3;
        local_720 = *(longlong *)(local_768 + 0x218);
        local_778 = &local_650;
        (**(code **)(**(longlong **)(local_768 + 0x210) + 0x238))
                  (*(longlong **)(local_768 + 0x210),local_720,&local_649,local_178);
        if (0 < DAT_14cbf81a8) {
          uStack_654._3_1_ = 1;
        }
        iVar18 = *(int *)(param_4 + 0x3ac);
        if ((DAT_14c7649dd == '\x01') && (bVar31 = iVar18 != 2, iVar18 = 2, bVar31)) {
          local_748 = *(undefined1 (*) [16])(lVar24 + 0x100);
          local_2d8 = *(double *)(lVar24 + 0x110);
          uStack_2d0 = *(undefined8 *)(lVar24 + 0x118);
          dVar56 = *(double *)(lVar24 + 0x120);
          dVar51 = *(double *)(lVar24 + 0x128);
          auVar3 = *(undefined1 (*) [16])(lVar24 + 0x130);
          dVar54 = auVar3._0_8_;
          uVar33 = auVar3._8_4_;
          uVar34 = auVar3._12_4_;
          local_2a8 = *(double *)(lVar24 + 0x140);
          dStack_2a0 = *(double *)(lVar24 + 0x148);
          local_298 = *(double *)(lVar24 + 0x150);
          uStack_290 = *(undefined8 *)(lVar24 + 0x158);
          pdVar14 = (double *)(lVar24 + 0x160);
          local_278 = *(int *)(lVar24 + 0x170);
          uStack_274 = *(undefined4 *)(lVar24 + 0x174);
          uStack_270 = *(undefined4 *)(lVar24 + 0x178);
          uStack_26c = *(undefined4 *)(lVar24 + 0x17c);
          dVar47 = local_148._0_8_;
          uVar10 = local_148._8_4_;
          uVar32 = local_148._12_4_;
          bVar31 = true;
        }
        else {
          pdVar14 = (double *)(param_4 + 0x1a0);
          if (iVar18 == 2) {
            pdVar14 = (double *)(param_4 + 0x200);
          }
          dVar50 = *pdVar14;
          dVar45 = pdVar14[1];
          dVar37 = pdVar14[2];
          local_278 = *(int *)(pdVar14 + 6);
          uStack_274 = *(undefined4 *)((longlong)pdVar14 + 0x34);
          dVar42 = pdVar14[8];
          dVar56 = pdVar14[9];
          dVar40 = dVar45 + dVar45;
          dVar7 = dVar37 + dVar37;
          dVar47 = dVar50 * (dVar50 + dVar50);
          pdVar20 = (double *)(param_4 + 0x2c0);
          if (iVar18 != 2) {
            pdVar20 = (double *)(param_4 + 0x260);
          }
          uStack_730 = 0;
          uStack_72c = 0x3ff00000;
          local_108 = pdVar20[6];
          uStack_100 = 0x3ff0000000000000;
          dVar51 = (1.0 - (dVar37 * dVar7 + dVar47)) * dVar56;
          dStack_2a0 = pdVar14[10];
          local_298 = (1.0 - (dVar47 + dVar45 * dVar40)) * dStack_2a0;
          dVar47 = pdVar14[3];
          dVar8 = dVar7 * dVar47;
          dVar46 = (dVar50 + dVar50) * pdVar14[3];
          dVar47 = dVar40 * dVar47;
          dVar53 = (dVar40 * dVar50 + dVar8) * dVar42;
          dVar54 = (dVar7 * dVar45 + dVar46) * dVar56;
          local_2a8 = (dVar47 + *pdVar14 * dVar7) * dStack_2a0;
          local_2d8 = (*pdVar14 * dVar7 - dVar47) * dVar42;
          dVar56 = (dVar40 * dVar50 - dVar8) * dVar56;
          dStack_2a0 = (dVar7 * dVar45 - dVar46) * dStack_2a0;
          dVar8 = *pdVar20;
          dVar46 = pdVar20[1];
          dVar50 = pdVar20[2];
          dVar52 = dVar46 + dVar46;
          dVar35 = dVar50 + dVar50;
          dVar47 = dVar8 * (dVar8 + dVar8);
          local_178[2] = pdVar20[8];
          local_158._0_8_ = pdVar20[9];
          local_178[0] = (1.0 - (dVar50 * dVar35 + dVar46 * dVar52)) * local_178[2];
          local_158._8_8_ = (1.0 - (dVar50 * dVar35 + dVar47)) * (double)local_158._0_8_;
          dVar50 = pdVar20[3];
          dVar36 = dVar35 * dVar50;
          dVar41 = (dVar8 + dVar8) * pdVar20[3];
          dVar50 = dVar52 * dVar50;
          local_138._8_8_ = pdVar20[10];
          local_128 = (1.0 - (dVar47 + dVar46 * dVar52)) * (double)local_138._8_8_;
          local_178[1] = (dVar52 * dVar8 + dVar36) * local_178[2];
          dVar47 = (dVar35 * dVar46 + dVar41) * (double)local_158._0_8_;
          local_138._0_8_ = (dVar50 + *pdVar20 * dVar35) * (double)local_138._8_8_;
          local_178[2] = (*pdVar20 * dVar35 - dVar50) * local_178[2];
          local_748._8_4_ = SUB84(dVar53,0);
          local_748._0_8_ = (1.0 - (dVar37 * dVar7 + dVar45 * dVar40)) * dVar42;
          local_748._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
          uVar33 = 0;
          uVar34 = 0;
          local_158._0_8_ = (dVar52 * dVar8 - dVar36) * (double)local_158._0_8_;
          local_138._8_8_ = (dVar35 * dVar46 - dVar41) * (double)local_138._8_8_;
          uVar10 = 0;
          uVar32 = 0;
          uStack_290 = 0;
          uStack_2d0 = 0;
          pdVar14 = pdVar14 + 4;
          uStack_270 = 0;
          uStack_26c = 0x3ff00000;
          local_118 = pdVar20[4];
          dStack_110 = pdVar20[5];
          uStack_120 = 0;
          local_178[3] = 0.0;
          bVar31 = false;
          local_738 = local_278;
          uStack_734 = uStack_274;
        }
        uVar30 = (ulonglong)local_138._8_8_ >> 0x20;
        uVar27 = (ulonglong)local_158._8_8_ >> 0x20;
        uVar55 = (undefined4)((ulonglong)dVar51 >> 0x20);
        local_288 = *(undefined4 *)pdVar14;
        uStack_284 = *(undefined4 *)((longlong)pdVar14 + 4);
        uStack_280 = *(undefined4 *)(pdVar14 + 1);
        uStack_27c = *(undefined4 *)((longlong)pdVar14 + 0xc);
        local_158._8_4_ = (int)local_158._8_8_;
        local_158._12_4_ = (int)uVar27;
        local_148._8_4_ = uVar10;
        local_148._0_8_ = dVar47;
        local_148._12_4_ = uVar32;
        local_138._8_4_ = (int)local_138._8_8_;
        local_138._12_4_ = (int)uVar30;
        if ((*(char *)(*(longlong *)(param_4 + 0x3a0) + 0x382) == '\x01') &&
           (*(char *)(*(longlong *)(param_4 + 0x3a0) + 899) == '\x01')) {
          local_178[0] = (double)local_748._0_8_;
          local_178[1] = (double)local_748._8_8_;
          local_158._8_4_ = SUB84(dVar51,0);
          local_158._0_8_ = dVar56;
          local_158._12_4_ = uVar55;
          local_148._8_4_ = uVar33;
          local_148._0_8_ = dVar54;
          local_148._12_4_ = uVar34;
          local_138._8_8_ = dStack_2a0;
          local_138._0_8_ = local_2a8;
          local_108 = (double)CONCAT44(uStack_274,local_278);
          uStack_100 = CONCAT44(uStack_26c,uStack_270);
          local_178[2] = local_2d8;
          local_178[3] = (double)uStack_2d0;
          local_128 = local_298;
          uStack_120 = uStack_290;
          local_118 = *pdVar14;
          dStack_110 = pdVar14[1];
        }
        local_6e0 = (int *)(local_708._0_8_ + 0xc60);
        local_4d8 = 0;
        uStack_4d4 = 0;
        uStack_4d0 = 0;
        uStack_4cc = 0x3f800000;
        local_488 = 0;
        uStack_484 = 0;
        uStack_480 = 0;
        uStack_47c = 0x3f800000;
        lVar15 = 0x28c;
        do {
          *(undefined4 *)((longlong)&uStack_654 + lVar15) = 0;
          *(undefined4 *)((longlong)&local_650 + lVar15) = 0;
          *(undefined4 *)(&stack0xfffffffffffff9b4 + lVar15) = 0;
          *(undefined4 *)((longlong)local_648 + lVar15) = 0x3f800000;
          lVar15 = lVar15 + 0x10;
        } while (lVar15 != 0x31c);
        uVar10 = SUB84(local_648,0);
        local_308 = 0;
        uStack_304 = 0;
        uStack_300 = 0;
        uStack_2fc = 0x3f800000;
        FUN_144787006(lVar24);
        local_708._8_4_ = SUB84(dVar51,0);
        local_708._0_8_ = dVar56;
        local_708._12_4_ = uVar55;
        local_6f8._8_4_ = uVar33;
        local_6f8._0_8_ = dVar54;
        local_6f8._12_4_ = uVar34;
        if (bVar31) {
          dVar7 = *(double *)(lVar24 + 0x1b8);
          dVar56 = *(double *)(lVar24 + 0x1c0);
          dVar45 = *(double *)(lVar24 + 0x1c8);
          dVar50 = *(double *)(lVar24 + 0x1d0);
          dVar40 = *(double *)(lVar24 + 0x1d8);
          dVar37 = *(double *)(lVar24 + 0x1e0);
        }
        else {
          lVar15 = 0x1a0;
          if (*(int *)(param_4 + 0x3ac) == 2) {
            lVar15 = 0x200;
          }
          auVar3 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar15);
          auVar4 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar15);
          auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
          auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
          iVar18 = movmskpd(0x200,auVar39);
          auVar49._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_));
          auVar49._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_));
          uVar28 = movmskpd(uVar10,auVar49);
          if ((uVar28 & 0x3fffffff) == 0 && iVar18 == 0) {
            local_6d8 = DAT_14c8464b0;
            uStack_6d0 = DAT_14c8464b8;
            uVar10 = (undefined4)DAT_14c8464c0;
            uVar32 = DAT_14c8464c0._4_4_;
            uVar33 = (undefined4)DAT_14c8464c8;
            uVar34 = DAT_14c8464c8._4_4_;
            dVar37 = DAT_14c846480;
            dVar42 = DAT_14c846488;
            dVar45 = DAT_14c846498;
            dVar50 = DAT_14c846490;
            dVar7 = DAT_14c8464a0;
            dVar56 = DAT_14c8464a8;
            local_6b8 = DAT_14c8464d0;
            uStack_6b0 = uRam000000014c8464d8;
          }
          else {
            auVar49 = divpd(_DAT_149934d80,auVar3);
            auVar39 = divpd(ZEXT816(0x3ff0000000000000),auVar4);
            dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar49._0_8_)
            ;
            dVar56 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar49._8_8_
                             );
            local_6b8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) &
                                auVar39._0_8_);
            dVar8 = *(double *)(param_4 + lVar15);
            pdVar14 = (double *)(param_4 + 0x10 + lVar15);
            dVar37 = -dVar8;
            dVar42 = -((double *)(param_4 + lVar15))[1];
            dVar50 = *pdVar14 * -1.0;
            dVar45 = pdVar14[1] * 1.0;
            pdVar14 = (double *)(param_4 + 0x20 + lVar15);
            dVar51 = *pdVar14 * dVar7;
            dVar53 = pdVar14[1] * dVar56;
            dVar54 = *(double *)(param_4 + 0x30 + lVar15) * local_6b8;
            dVar40 = dVar53 * dVar37 - dVar42 * dVar51;
            dVar46 = dVar54 * dVar42 - dVar50 * dVar53;
            dVar47 = dVar51 * dVar50 - dVar37 * dVar54;
            dVar46 = dVar46 + dVar46;
            dVar47 = dVar47 + dVar47;
            dVar40 = dVar40 + dVar40;
            local_6d8 = 0.0 - (dVar45 * dVar40 + dVar54 + (dVar47 * dVar37 - dVar46 * dVar42));
            uStack_6d0 = 0;
            uVar10 = SUB84(dVar7,0);
            uVar32 = (int)((ulonglong)dVar7 >> 0x20);
            uVar33 = SUB84(dVar56,0);
            uVar34 = (int)((ulonglong)dVar56 >> 0x20);
            dVar7 = 0.0 - ((dVar40 * dVar42 - dVar47 * dVar50) + dVar45 * dVar46 + dVar51);
            dVar56 = 0.0 - (dVar40 * dVar8 + dVar50 * dVar46 + dVar45 * dVar47 + dVar53);
            uStack_6b0 = 0;
          }
          local_6a8 = *(double *)(lVar24 + 0x180);
          uStack_6a0 = 0;
          local_6c8 = *(double *)(lVar24 + 400);
          uStack_6c0 = 0;
          dVar35 = dVar42 + dVar42;
          dVar52 = dVar50 + dVar50;
          dVar44 = dVar37 * (dVar37 + dVar37);
          dVar36 = (1.0 - (dVar50 * dVar52 + dVar42 * dVar35)) * (double)CONCAT44(uVar32,uVar10);
          dVar41 = (1.0 - (dVar50 * dVar52 + dVar44)) * (double)CONCAT44(uVar34,uVar33);
          dVar50 = (dVar37 + dVar37) * dVar45;
          dVar38 = (dVar35 * dVar37 + dVar52 * dVar45) * (double)CONCAT44(uVar32,uVar10);
          dVar43 = (dVar52 * dVar42 + dVar50) * (double)CONCAT44(uVar34,uVar33);
          dVar48 = (dVar35 * dVar45 + dVar37 * dVar52) * local_6b8;
          dVar53 = (dVar35 * dVar37 - dVar52 * dVar45) * (double)CONCAT44(uVar34,uVar33);
          dVar54 = (dVar52 * dVar42 - dVar50) * local_6b8;
          dVar47 = *(double *)(lVar24 + 0x188);
          dVar7 = local_6c8 * dVar48 + dVar47 * dVar53 + local_6a8 * dVar36 + dVar7;
          dVar56 = local_6c8 * dVar54 + *(double *)(lVar24 + 0x188) * dVar41 + local_6a8 * dVar38 +
                   dVar56;
          dVar8 = *(double *)(lVar24 + 0x198);
          dVar46 = *(double *)(lVar24 + 0x1a0);
          dVar51 = *(double *)(lVar24 + 0x1a8);
          dVar50 = ABS(dVar51 * dVar48) + ABS(dVar53 * dVar46) + ABS(dVar8 * dVar36);
          dVar40 = ABS(dVar51 * dVar54) +
                   ABS(dVar41 * *(double *)(lVar24 + 0x1a0)) + ABS(dVar8 * dVar38);
          dVar52 = (dVar37 * dVar52 - dVar35 * dVar45) * (double)CONCAT44(uVar32,uVar10);
          dVar42 = (1.0 - (dVar44 + dVar42 * dVar35)) * local_6b8;
          dVar44 = local_6a8 * dVar52;
          dVar35 = local_6c8 * dVar42;
          dVar45 = dVar48 * dVar48 + dVar53 * dVar53 + dVar36 * dVar36;
          dVar37 = dVar54 * dVar54 + dVar41 * dVar41 + dVar38 * dVar38;
          dVar53 = dVar42 * dVar42 + dVar43 * dVar43 + dVar52 * dVar52;
          if (dVar45 <= dVar37) {
            dVar45 = dVar37;
          }
          if (dVar45 <= dVar53) {
            dVar45 = dVar53;
          }
          local_738 = local_278;
          uStack_734 = uStack_274;
          uStack_730 = uStack_270;
          uStack_72c = uStack_26c;
          local_698 = local_288;
          uStack_694 = uStack_284;
          uStack_690 = uStack_280;
          uStack_68c = uStack_27c;
          local_688 = local_2d8;
          uStack_680 = uStack_2d0;
          local_678 = local_298;
          uStack_670 = uStack_290;
          local_668 = local_2a8;
          dStack_660 = dStack_2a0;
          if (dVar45 < 0.0) {
            sqrt(dVar45);
          }
          dVar37 = ABS(dVar46 * dVar43) + ABS(dVar8 * dVar52) + ABS(dVar51 * dVar42);
          dVar45 = local_6d8 + dVar35 + dVar47 * dVar43 + dVar44;
          local_288 = local_698;
          uStack_284 = uStack_694;
          uStack_280 = uStack_690;
          uStack_27c = uStack_68c;
          local_278 = local_738;
          uStack_274 = uStack_734;
          uStack_270 = uStack_730;
          uStack_26c = uStack_72c;
          local_2a8 = local_668;
          dStack_2a0 = dStack_660;
          local_2d8 = local_688;
          uStack_2d0 = uStack_680;
          local_298 = local_678;
          uStack_290 = uStack_670;
        }
        local_2e8 = local_748._0_8_;
        uStack_2e0 = local_748._8_8_;
        local_2c8 = local_708._0_8_;
        uStack_2c0 = local_708._8_8_;
        local_2b8 = local_6f8._0_8_;
        uStack_2b0 = local_6f8._8_8_;
        local_450 = (float)(dVar45 - dVar37);
        local_454 = (float)(dVar56 - dVar40);
        local_458 = (float)(dVar7 - dVar50);
        pdVar14 = local_178;
        pdVar20 = local_268;
        for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
          *pdVar20 = *pdVar14;
          pdVar14 = pdVar14 + 1;
          pdVar20 = pdVar20 + 1;
        }
        local_440 = (float)(dVar37 + dVar45);
        local_444 = (float)(dVar40 + dVar56);
        local_448 = (float)(dVar50 + dVar7);
        local_1b4 = (uint)uStack_654._3_1_ * 0x80 + (local_1b4 & 0xfffdff5f) + 0x20000;
        local_1a3 = *(byte *)(lVar24 + 0x77) >> 6 & 1;
        plVar13 = (longlong *)param_2[0x1d];
        lVar15 = param_2[0x22];
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xea8);
        puVar16 = (uint *)*puVar1;
        if (puVar16 != (uint *)0x0) goto LAB_1444270e5;
        while( true ) {
          FUN_14472e504(puVar1);
          puVar16 = (uint *)*puVar1;
LAB_1444270e5:
          puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
          uVar28 = puVar16[0x12];
          if (puVar23 + 8 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar21 = *puVar16;
            *puVar16 = *puVar16 + uVar28 + 1;
            UNLOCK();
            if ((uVar21 ^ uVar28) != 0xffffffff) break;
            puVar16 = (uint *)*puVar1;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar1 = puVar16;
            puVar23 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
            uVar28 = 0;
            if (puVar23 + 8 <= puVar16 + 0x4000) {
              uVar28 = 1;
              goto LAB_14442715b;
            }
          }
        }
        uVar28 = uVar28 + 1;
LAB_14442715b:
        *(undefined8 **)(puVar16 + 0x10) = puVar23 + 9;
        puVar16[0x12] = uVar28;
        *(int *)(puVar23 + -1) = ((int)puVar23 + -8) - (int)puVar16;
        *(undefined4 *)((longlong)puVar23 + -4) = 0x40;
        puVar23[1] = 0;
        *puVar23 = &PTR_FUN_14a5a8d50;
        lVar24 = *plVar13;
        do {
          puVar23[1] = lVar24;
          LOCK();
          lVar19 = *plVar13;
          bVar31 = lVar24 == lVar19;
          if (bVar31) {
            *plVar13 = (longlong)puVar23;
            lVar19 = lVar24;
          }
          UNLOCK();
          lVar24 = lVar19;
        } while (!bVar31);
        puVar23[2] = &PTR_FUN_14aa71480;
        puVar1 = puVar23 + 3;
        *(undefined4 *)(puVar23 + 4) = 0xffffffff;
        *(undefined2 *)((longlong)puVar23 + 0x24) = 0x105;
        *(undefined1 *)((longlong)puVar23 + 0x26) = 0;
        puVar23[3] = &PTR_FUN_14a1ca300;
        puVar23[6] = 0;
        puVar23[7] = 0;
        *(undefined4 *)(puVar23 + 5) = 1;
        _Src = (void *)FUN_144788782(local_648);
        _Dst = (void *)puVar23[7];
        if (_Dst == (void *)0x0) {
          _Dst = (void *)FUN_14001cc68(0x360,0x10);
          puVar23[7] = _Dst;
        }
        memcpy(_Dst,_Src,0x360);
        FUN_1447fd100(puVar1,lVar15);
        FUN_14006bf18(puVar1,lVar15);
        *(undefined8 **)(uVar26 + 8) = puVar1;
        *(undefined4 *)(uVar26 + 0x58) = 0;
        *(undefined4 *)(uVar26 + 0x60) = 1;
        *(uint *)(uVar26 + 0x54) = (*(uint *)(uVar26 + 0x54) & 0xfffffff8) + local_710;
        if ((char)local_70c == '\0') {
          *(int *)(uVar26 + 0x5c) = (int)local_760;
          uVar17 = 0;
        }
        else {
          *(undefined4 *)(uVar26 + 0x5c) = 0;
          uVar17 = *(undefined8 *)(**(longlong **)(*(longlong *)(param_4 + 0x3a0) + 8) + 0x28);
        }
        uVar28 = 0;
        *(undefined8 *)(uVar26 + 0x48) = uVar17;
        *(undefined4 *)(uVar26 + 0x50) = 0;
        *(undefined8 *)(uVar26 + 0x40) = *(undefined8 *)(param_4 + 0x3a0);
        *(undefined4 *)(uVar26 + 0x68) = 0;
        *(int *)(uVar26 + 0x6c) = (int)local_718;
        *(ulonglong *)(uVar26 + 0x38) = (ulonglong)*(uint *)(local_768 + 0x2b8);
        uVar21 = 0;
        if ((uint)local_728 < 2) {
          uVar21 = (*(byte *)(local_768 + 0x6b) & 1) << 6;
        }
        uVar21 = (uint)((int)local_758 == 0) << 7 | uVar21 | *(uint *)(uVar29 + 0xe4) & 0xffffff3f;
        *(uint *)(uVar29 + 0xe4) = uVar21;
        lVar15 = DAT_14ca97140;
        if ((int)local_758 == 0) {
          iVar18 = *local_6e0;
          if (((iVar18 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar18 == 2)) {
            uVar26 = 0;
          }
          else if (iVar18 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            uVar26 = (ulonglong)(DVar11 != DVar12);
            uVar21 = *(uint *)(uVar29 + 0xe4);
          }
          else {
            uVar26 = 1;
          }
          uVar28 = (uint)(0 < *(int *)(lVar15 + uVar26 * 4)) << 0xe;
        }
        *(uint *)(uVar29 + 0xe4) = uVar21 & 0xffe03fff | uVar28;
        *(undefined4 *)(uVar29 + 0xd0) = *(undefined4 *)(local_720 + 0x138);
      }
      goto LAB_144427361;
    }
    if ((int)uVar29 < *(int *)(param_4 + 0x128)) {
      lVar15 = *(longlong *)(*(longlong *)(param_4 + 0x120) + uVar29 * 0x30);
      if (lVar15 != 0) {
        local_748._0_8_ = *(undefined8 *)(*(longlong *)(param_4 + 0x120) + 0x28 + uVar29 * 0x30);
        uVar27 = (ulonglong)(uint)((*(int *)(*(longlong *)(lVar15 + 0x118) + 0x38) / 3) * 3);
        uVar26 = uVar27 / 3;
        uVar30 = lVar15 + 0x78;
        if (param_6 != 0) goto LAB_1444263c9;
        plVar13 = (longlong *)
                  (uVar29 * 8 +
                  *(longlong *)(*(longlong *)(param_1 + 0x2a8) + 0x18 + (longlong)param_5 * 0x28));
LAB_1444264b3:
        iVar18 = 1;
        uVar25 = 0;
        local_738 = param_3;
        goto LAB_1444264ba;
      }
    }
  }
  uVar29 = 0;
LAB_144427361:
  if ((local_f0 ^ (ulonglong)auStack_798) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar29;
}



// FUNCTION 1444275fa FUN_1444275fa body=217 status=ok
// SIG undefined FUN_1444275fa(void)

undefined8 FUN_1444275fa(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2 * 0x50;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x19a) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
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
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 / 0x50)) {
    uVar4 = uVar3 / 0x50 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x50,4);
  }
  return uVar2;
}



// FUNCTION 1444276d3 FUN_1444276d3 body=23 status=ok
// SIG undefined FUN_1444276d3(void)

void FUN_1444276d3(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1444276ea FUN_1444276ea body=265 status=ok
// SIG undefined FUN_1444276ea(void)

void FUN_1444276ea(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1444277f4 FUN_1444277f4 body=481 status=ok
// SIG undefined FUN_1444277f4(void)

void FUN_1444277f4(longlong param_1,ulonglong *param_2)

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
  FUN_1490879e4(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444279d6 FUN_1444279d6 body=232 status=ok
// SIG undefined FUN_1444279d6(void)

void FUN_1444279d6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 144427abe FUN_144427abe body=81 status=ok
// SIG undefined FUN_144427abe(void)

void FUN_144427abe(undefined8 param_1,longlong *param_2)

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
  FUN_149087a87(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144427b0f FUN_144427b0f body=2206 status=ok
// SIG undefined FUN_144427b0f(void)

void FUN_144427b0f(longlong param_1,longlong param_2,undefined8 param_3,char *param_4,int *param_5,
                  undefined8 *param_6,uint param_7,longlong *param_8,longlong *param_9,
                  double *param_10,undefined4 param_11,byte param_12,int param_13,int param_14)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *plVar14;
  undefined4 uVar15;
  DWORD DVar16;
  DWORD DVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  char cVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  undefined8 *puVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_138 [32];
  uint *local_118;
  longlong local_108;
  longlong *local_100;
  DWORD local_f8;
  int local_f4;
  longlong local_f0;
  uint local_e4;
  undefined1 *local_e0;
  undefined8 local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  ulonglong local_b0;
  
  lVar20 = DAT_14c9d2450;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((param_2 == 0) ||
      (((*(longlong *)
          (&DAT_14ca814b0 +
          (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) * 0x3c)
         == DAT_14ca80038 &&
        ((*(byte *)((longlong)&DAT_14ca814d0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2)
                   * 0x3c + 3) & 1) == 0)) || (DAT_14ca4d100 = 1, (int)param_7 < 0)))) ||
     ((int)param_8[1] <= (int)param_7)) goto LAB_144427d1a;
  uVar22 = (ulonglong)param_7;
  lVar24 = ((longlong *)*param_8)[uVar22];
  if (((*(int *)(lVar24 + 0x50) != 2) || ((int)param_9[1] <= (int)param_7)) ||
     (1 < *(int *)(*(longlong *)(*param_9 + uVar22 * 8) + 0x50) - 1U)) goto LAB_144427d1a;
  if (param_13 == 1) {
    iVar26 = *(int *)(lVar24 + 0xd8) * 3;
  }
  else {
    lVar24 = *(longlong *)*param_8;
    if (lVar24 == 0) goto LAB_144427d1a;
    iVar26 = *(int *)(*(longlong *)(lVar24 + 0x140) + 0xc);
  }
  if (((param_4 == (char *)0x0) || (iVar26 == 0)) || (*param_4 != '\x01')) goto LAB_144427d1a;
  DAT_14ca4d330 = DAT_14ca4d330 + iVar26 * 10;
  DAT_14ca4d334 = DAT_14ca4d334 + iVar26 * 3;
  lVar24 = *(longlong *)(*param_8 + uVar22 * 8);
  if (param_13 == 0) {
    lVar23 = *(longlong *)(lVar24 + 0x98);
joined_r0x000144427caa:
    if (lVar23 == 0) goto LAB_144427d1a;
  }
  else if (param_13 == 1) {
    lVar23 = *(longlong *)(lVar24 + 0x120);
    goto joined_r0x000144427caa;
  }
  if ((*(longlong *)(lVar24 + 0xb8) != 0) &&
     (lVar23 = *(longlong *)(*param_9 + uVar22 * 8), *(longlong *)(lVar23 + 0x58) != 0)) {
    lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar4 = *(int *)(lVar25 + 0xc60);
    if ((iVar4 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar4 == 2)))) {
      uVar22 = 0;
    }
    else if (iVar4 == 1) {
      local_108 = lVar23;
      uVar15 = FUN_140ad26c0();
      local_100 = (longlong *)CONCAT44(local_100._4_4_,uVar15);
      DVar16 = GetCurrentThreadId();
      uVar22 = (ulonglong)((DWORD)local_100 != DVar16);
      lVar23 = local_108;
    }
    else {
      uVar22 = 1;
    }
    if ((*(int *)(lVar20 + uVar22 * 4) < 1) || (*(longlong *)(lVar23 + 0x78) != 0)) {
      local_f8 = param_5[3] - param_5[1];
      local_f4 = param_5[2] - *param_5;
      puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar18 = puVar27 + 0x20;
      local_108 = lVar23;
      if (*(undefined8 **)(param_1 + 0x78) < puVar18) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x110);
        puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar27 + 0x20;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar18;
      *puVar27 = &PTR_FUN_14baa34c8;
      puVar27[0x1a] = 0;
      puVar27[0x13] = 0;
      puVar27[0x14] = 0;
      puVar27[0x15] = 0;
      puVar27[0x16] = 0;
      puVar27[0x17] = 0;
      puVar27[0x18] = 0;
      *(undefined1 *)(puVar27 + 0x1b) = 1;
      puVar27[0x1c] = 0;
      *(undefined1 *)(puVar27 + 0x1d) = 1;
      local_100 = (longlong *)(param_1 + 0x98);
      puVar27[0x1e] = 0;
      puVar27[0x1f] = 0;
      iVar4 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
        local_f0 = lVar25;
        FUN_1448cfae8(local_100,iVar4);
        lVar25 = local_f0;
      }
      *(undefined8 **)(*local_100 + (longlong)iVar4 * 8) = puVar27;
      *(float *)(puVar27 + 2) = (float)local_f4;
      *(float *)((longlong)puVar27 + 0x14) = (float)(int)local_f8;
      *(int *)(puVar27 + 3) = iVar26;
      dVar8 = *param_10;
      dVar9 = param_10[1];
      dVar10 = param_10[2];
      dVar11 = param_10[8];
      dVar12 = param_10[9];
      dVar13 = param_10[10];
      dVar29 = dVar9 + dVar9;
      dVar30 = dVar10 + dVar10;
      dVar5 = dVar8 * (dVar8 + dVar8);
      dVar28 = param_10[3];
      dVar6 = dVar30 * dVar28;
      dVar7 = (dVar8 + dVar8) * param_10[3];
      dVar28 = dVar29 * dVar28;
      dVar1 = param_10[4];
      dVar2 = param_10[5];
      dVar3 = param_10[6];
      *(float *)(puVar27 + 4) = (float)((1.0 - (dVar10 * dVar30 + dVar9 * dVar29)) * dVar11);
      *(float *)((longlong)puVar27 + 0x24) = (float)((dVar29 * dVar8 + dVar6) * dVar11);
      *(float *)(puVar27 + 5) = (float)((dVar30 * dVar8 - dVar28) * dVar11);
      *(undefined4 *)((longlong)puVar27 + 0x2c) = 0;
      *(float *)(puVar27 + 6) = (float)((dVar29 * dVar8 - dVar6) * dVar12);
      *(float *)((longlong)puVar27 + 0x34) = (float)((1.0 - (dVar10 * dVar30 + dVar5)) * dVar12);
      *(float *)(puVar27 + 7) = (float)((dVar30 * dVar9 + dVar7) * dVar12);
      *(undefined4 *)((longlong)puVar27 + 0x3c) = 0;
      *(float *)(puVar27 + 8) = (float)((dVar28 + dVar30 * dVar8) * dVar13);
      *(float *)((longlong)puVar27 + 0x44) = (float)((dVar30 * dVar9 - dVar7) * dVar13);
      *(float *)(puVar27 + 9) = (float)((1.0 - (dVar5 + dVar9 * dVar29)) * dVar13);
      *(undefined4 *)((longlong)puVar27 + 0x4c) = 0;
      *(float *)(puVar27 + 10) = (float)dVar1;
      *(float *)((longlong)puVar27 + 0x54) = (float)dVar2;
      *(float *)(puVar27 + 0xb) = (float)dVar3;
      *(undefined4 *)((longlong)puVar27 + 0x5c) = 0x3f800000;
      *(uint *)((longlong)puVar27 + 0x1c) = (uint)(param_14 == 1);
      *(undefined4 *)(puVar27 + 0xc) = param_11;
      *(uint *)((longlong)puVar27 + 100) = (uint)param_12;
      *(uint *)(puVar27 + 0xd) = (uint)(param_14 == 0);
      *(uint *)((longlong)puVar27 + 0x6c) = (uint)(0 < DAT_14cbf8368);
      *(uint *)(puVar27 + 0xe) = (uint)(0 < DAT_14cbf8380);
      *(uint *)((longlong)puVar27 + 0x74) = (uint)(0 < DAT_14cbf8398);
      *(uint *)(puVar27 + 0xf) = (uint)(0 < DAT_14cbf83b0);
      *(uint *)((longlong)puVar27 + 0x7c) = (uint)(0 < DAT_14c7649e4);
      *(uint *)(puVar27 + 0x10) = (uint)(0 < DAT_14cbf83d8);
      *(uint *)((longlong)puVar27 + 0x84) = (uint)(0 < DAT_14cbf83f0);
      *(uint *)(puVar27 + 0x11) = (uint)(0 < DAT_14cbf8408);
      *(uint *)((longlong)puVar27 + 0x8c) = (uint)(0 < DAT_14cbf8420);
      *(uint *)(puVar27 + 0x12) = (uint)(0 < DAT_14cbf8438);
      local_100 = (longlong *)(lVar25 + 0xc60);
      *(uint *)((longlong)puVar27 + 0x94) = (uint)(0 < DAT_14cbf8450);
      if (param_13 == 0) {
        uVar19 = FUN_14716d181(param_1,lVar24 + 0x98);
        puVar27[0x17] = uVar19;
      }
      uVar19 = FUN_14716d181(param_1,lVar24 + 0x78);
      puVar27[0x18] = uVar19;
      uVar19 = FUN_14716d181(param_1,lVar24 + 0xb8);
      puVar27[0x13] = uVar19;
      lVar20 = DAT_14c9d2450;
      iVar4 = (int)*local_100;
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar22 = 0;
      }
      else if (iVar4 == 1) {
        local_f8 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        uVar22 = (ulonglong)(local_f8 != DVar16);
      }
      else {
        uVar22 = 1;
      }
      lVar23 = local_108 + 0x58;
      if (0 < *(int *)(lVar20 + uVar22 * 4)) {
        lVar23 = lVar23 + (ulonglong)*(uint *)(local_108 + 0x120) * 0x20;
      }
      uVar19 = FUN_14716d181(param_1,lVar23);
      puVar27[0x14] = uVar19;
      uVar19 = FUN_14716d181(param_1,lVar24 + 0x120);
      puVar27[0x15] = uVar19;
      lVar20 = DAT_14c9d2450;
      iVar4 = (int)*local_100;
      if (iVar4 == 0x40000002) {
        uVar22 = 0;
      }
      else if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
        if (iVar4 == 1) {
          DVar16 = FUN_140ad26c0();
          DVar17 = GetCurrentThreadId();
          uVar22 = (ulonglong)(DVar16 != DVar17);
        }
        else {
          uVar22 = 1;
        }
      }
      else {
        uVar22 = 0;
      }
      local_100 = puVar27 + 2;
      lVar24 = local_108 + 0xa0;
      if (0 < *(int *)(lVar20 + uVar22 * 4)) {
        lVar24 = lVar24 + (ulonglong)*(uint *)(local_108 + 0x120) * 0x20;
      }
      uVar19 = FUN_14716d181(param_1,lVar24);
      puVar27[0x16] = uVar19;
      lVar20 = FUN_1447e4f80();
      cVar21 = '\x02';
      if (*(char *)(lVar20 + 0x41) != '\x03') {
        cVar21 = *(char *)(lVar20 + 0x41);
      }
      puVar27[0x1a] = *param_6;
      *(char *)(puVar27 + 0x1b) = cVar21;
      FUN_1472ea582(param_1,param_4,puVar27 + 0x1c);
      local_b8 = (uint)(param_13 != 0);
      FUN_149087bfe(local_d8,param_3);
      FUN_145f3ab64();
      plVar14 = local_100;
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_1448f70da(local_d8[0],&DAT_14cbf8d18,local_100);
      local_e4 = iVar26 + 0xffU >> 8;
      local_118 = &local_e4;
      local_e0 = &DAT_100000001;
      FUN_149087c6e(param_1,&local_c8,local_d8,plVar14);
    }
  }
LAB_144427d1a:
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444283ae FUN_1444283ae body=481 status=ok
// SIG undefined FUN_1444283ae(void)

void FUN_1444283ae(longlong param_1,ulonglong *param_2)

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
  FUN_149087ebe(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144428590 FUN_144428590 body=232 status=ok
// SIG undefined FUN_144428590(void)

void FUN_144428590(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 144428678 FUN_144428678 body=81 status=ok
// SIG undefined FUN_144428678(void)

void FUN_144428678(undefined8 param_1,longlong *param_2)

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
  FUN_149087f61(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1444286ca FUN_1444286ca body=481 status=ok
// SIG undefined FUN_1444286ca(void)

void FUN_1444286ca(longlong param_1,ulonglong *param_2)

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
  FUN_149088328(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444288ac FUN_1444288ac body=232 status=ok
// SIG undefined FUN_1444288ac(void)

void FUN_1444288ac(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 144428994 FUN_144428994 body=81 status=ok
// SIG undefined FUN_144428994(void)

void FUN_144428994(undefined8 param_1,longlong *param_2)

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
  FUN_1490883cb(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1444289e6 FUN_1444289e6 body=481 status=ok
// SIG undefined FUN_1444289e6(void)

void FUN_1444289e6(longlong param_1,ulonglong *param_2)

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
  FUN_149088792(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144428bc8 FUN_144428bc8 body=232 status=ok
// SIG undefined FUN_144428bc8(void)

void FUN_144428bc8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 144428cb0 FUN_144428cb0 body=81 status=ok
// SIG undefined FUN_144428cb0(void)

void FUN_144428cb0(undefined8 param_1,longlong *param_2)

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
  FUN_149088835(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144428d02 FUN_144428d02 body=481 status=ok
// SIG undefined FUN_144428d02(void)

void FUN_144428d02(longlong param_1,ulonglong *param_2)

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
  FUN_149088bfc(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144428ee4 FUN_144428ee4 body=232 status=ok
// SIG undefined FUN_144428ee4(void)

void FUN_144428ee4(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 144428fcc FUN_144428fcc body=81 status=ok
// SIG undefined FUN_144428fcc(void)

void FUN_144428fcc(undefined8 param_1,longlong *param_2)

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
  FUN_149088c9f(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14442901e FUN_14442901e body=63 status=ok
// SIG undefined FUN_14442901e(void)

longlong FUN_14442901e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144429186(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_14442916f(lVar2);
  return lVar2;
}



// FUNCTION 14442905e FUN_14442905e body=56 status=ok
// SIG undefined FUN_14442905e(void)

void FUN_14442905e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144429186(param_1,iVar1);
  }
  FUN_14442916f((longlong)iVar1 * 0x50 + *param_1);
  return;
}



// FUNCTION 144429096 FUN_144429096 body=217 status=ok
// SIG undefined FUN_144429096(void)

undefined8 FUN_144429096(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2 * 0x50;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x19a) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
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
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 / 0x50)) {
    uVar4 = uVar3 / 0x50 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x50,4);
  }
  return uVar2;
}



// FUNCTION 14442916f FUN_14442916f body=23 status=ok
// SIG undefined FUN_14442916f(void)

void FUN_14442916f(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 144429186 FUN_144429186 body=265 status=ok
// SIG undefined FUN_144429186(void)

void FUN_144429186(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144429290 FUN_144429290 body=481 status=ok
// SIG undefined FUN_144429290(void)

void FUN_144429290(longlong param_1,ulonglong *param_2)

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
  FUN_149089066(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144429472 FUN_144429472 body=232 status=ok
// SIG undefined FUN_144429472(void)

void FUN_144429472(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 14442955a FUN_14442955a body=81 status=ok
// SIG undefined FUN_14442955a(void)

void FUN_14442955a(undefined8 param_1,longlong *param_2)

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
  FUN_149089109(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1444295ac FUN_1444295ac body=404 status=ok
// SIG undefined FUN_1444295ac(void)

undefined8 FUN_1444295ac(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 auStack_118 [32];
  undefined **local_f8 [5];
  byte local_d0;
  undefined8 local_b8;
  longlong *local_a0;
  longlong local_80;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar3 = (longlong *)*param_3;
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[2];
  lVar7 = param_1[1];
  lVar8 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    iVar2 = *(int *)((longlong)param_1 + 0xc);
    memset(local_f8,0,0x90);
    FUN_144869430(local_f8);
    local_68 = 0;
    local_f8[0] = &PTR_FUN_149e1ddc0;
    local_50 = 0x7fffffffffffffff;
    local_d0 = local_d0 | 1;
    local_60 = lVar8;
    local_58 = (longlong)iVar2;
    FUN_1449c2eca(local_f8,1);
    lVar6 = *plVar4;
    if (*(char *)(lVar6 + 0x38) == '\x01') {
      local_b8 = *(undefined8 *)(lVar6 + 0x30);
    }
    FUN_14907c188(param_1[2],local_f8);
    FUN_1400020a8(lVar8);
    local_f8[0] = &PTR__purecall_149e35f70;
    if (local_a0 != (longlong *)0x0) {
      if (*local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_a0);
    }
    if (local_80 != 0) {
      if (*(longlong *)(local_80 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_80);
    }
    uVar11 = 1;
  }
  puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar9 = 0;
  puVar9[1] = lVar5;
  puVar9[2] = plVar3;
  *(int *)(puVar9 + 3) = (int)lVar7;
  *(undefined1 *)((longlong)puVar9 + 0x1c) = uVar11;
  uVar10 = 0;
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    plVar4 = plVar4 + 0x2c;
    puVar1 = (undefined8 *)*plVar4;
    *plVar4 = (longlong)puVar9;
    UNLOCK();
    LOCK();
    uVar10 = *puVar1;
    *puVar1 = puVar9;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144429768 FUN_144429768 body=12 status=ok
// SIG undefined FUN_144429768(void)

void FUN_144429768(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144429771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144429774 FUN_144429774 body=29 status=ok
// SIG undefined FUN_144429774(void)

undefined8 FUN_144429774(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144429792 FUN_144429792 body=393 status=ok
// SIG undefined FUN_144429792(void)

void FUN_144429792(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar5;
    if (uVar13 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar13 = 0xffffffff;
    iVar4 = iVar2;
    do {
      puVar3 = *(undefined8 **)(*param_1 + (longlong)iVar6 * 0x10);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        iVar4 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)uVar14;
      lVar11 = (longlong)iVar6;
      uVar7 = puVar5[lVar11] & uVar13;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar12 = 0;
          do {
            uVar7 = puVar5[lVar11 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar14 = (ulonglong)(iVar6 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1444298d3;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar9 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar14 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_1444298d3:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar2);
  }
  return;
}



// FUNCTION 144429920 FUN_144429920 body=5 status=ok
// SIG undefined FUN_144429920(void)

longlong FUN_144429920(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144429926 FUN_144429926 body=29 status=ok
// SIG undefined FUN_144429926(void)

void FUN_144429926(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144429944 FUN_144429944 body=73 status=ok
// SIG undefined FUN_144429944(void)

undefined8 * FUN_144429944(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14baa3610;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14017e2da(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14442998e FUN_14442998e body=140 status=ok
// SIG undefined FUN_14442998e(void)

void FUN_14442998e(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 1), -1 < (int)uVar1)
      ) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0xc))) &&
       ((uVar2 = *param_1, (*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        (lVar3 = *plVar5, lVar3 != 0)))) {
      lVar4 = FUN_14586a468();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        FUN_14907de3c(uVar2,lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144429a30 FUN_144429a30 body=29 status=ok
// SIG undefined FUN_144429a30(void)

undefined8 FUN_144429a30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144429a4e FUN_144429a4e body=137 status=ok
// SIG undefined FUN_144429a4e(void)

void FUN_144429a4e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)*(int *)(*param_1 + 0x2a0);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x298);
    lVar3 = 0;
    do {
      *(float *)(*(longlong *)(lVar1 + lVar3) + 0x158) = (float)(int)param_1[1];
      *(undefined4 *)(*(longlong *)(lVar1 + lVar3) + 0x15c) =
           *(undefined4 *)((longlong)param_1 + 0xc);
      if ((char)param_1[2] == '\x01') {
        FUN_14908d074(*(undefined8 *)(lVar1 + lVar3),(int)param_1[1]);
      }
      if (*(char *)((longlong)param_1 + 0x11) == '\x01') {
        FUN_14908d074(*(undefined8 *)(lVar1 + lVar3),(int)param_1[1] + -1);
      }
      lVar3 = lVar3 + 8;
    } while (lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 144429ae2 FUN_144429ae2 body=12 status=ok
// SIG undefined FUN_144429ae2(void)

void FUN_144429ae2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144429aeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144429aee FUN_144429aee body=29 status=ok
// SIG undefined FUN_144429aee(void)

undefined8 FUN_144429aee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144429b0c FUN_144429b0c body=282 status=ok
// SIG undefined FUN_144429b0c(void)

undefined8 * FUN_144429b0c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144425664);
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



// FUNCTION 144429c26 FUN_144429c26 body=212 status=ok
// SIG undefined FUN_144429c26(void)

void FUN_144429c26(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar3 = (longlong)*(int *)(param_1[0x15] + 0x2a0);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(param_1[0x15] + 0x298);
    lVar4 = 0;
    do {
      *(float *)(*(longlong *)(lVar2 + lVar4) + 0x158) = (float)*(int *)(param_1 + 0x16);
      *(undefined4 *)(*(longlong *)(lVar2 + lVar4) + 0x15c) =
           *(undefined4 *)((longlong)param_1 + 0xb4);
      if (*(char *)(param_1 + 0x17) == '\x01') {
        FUN_14908d074(*(undefined8 *)(lVar2 + lVar4),*(undefined4 *)(param_1 + 0x16));
      }
      if (*(char *)((longlong)param_1 + 0xb9) == '\x01') {
        FUN_14908d074(*(undefined8 *)(lVar2 + lVar4),*(int *)(param_1 + 0x16) + -1);
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144429cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144429cfa FUN_144429cfa body=263 status=ok
// SIG undefined FUN_144429cfa(void)

void FUN_144429cfa(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar2 + lVar5) + 0x108) = 0;
      if ((*(char *)((longlong)param_1 + 0x24) == '\x01') && (param_1[2] != 0)) {
        bVar7 = *(char *)(param_1[2] + 0xba) - 2;
        uVar6 = 0;
        if (bVar7 < 7) {
          uVar6 = (&DAT_14baa3d0c)[bVar7];
        }
        *(undefined4 *)(*(longlong *)(lVar2 + lVar5) + 0x108) = uVar6;
      }
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        iVar1 = (int)param_1[5];
        if (((longlong)iVar1 < 0) || (*(int *)(*(longlong *)(lVar3 + 0x3a0) + 0x438) <= iVar1)) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined1 *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x3a0) + 0x430) + (longlong)iVar1);
        }
        *(undefined1 *)(lVar3 + 0x38) = uVar8;
        iVar1 = (int)param_1[5];
        if (((longlong)iVar1 < 0) ||
           (lVar3 = *(longlong *)(*(longlong *)(lVar2 + lVar5) + 0x3a0),
           *(int *)(lVar3 + 0x448) <= iVar1)) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined1 *)(*(longlong *)(lVar3 + 0x440) + (longlong)iVar1);
        }
        *(undefined1 *)(*(longlong *)(lVar2 + lVar5) + 0x3a) = uVar8;
        *(undefined1 *)(*(longlong *)(lVar2 + lVar5) + 0x39) =
             *(undefined1 *)(*(longlong *)(*(longlong *)(lVar2 + lVar5) + 0x3a0) + 0x460);
        *(bool *)(*(longlong *)(lVar2 + lVar5) + 0x3b) =
             *(char *)(*(longlong *)(lVar2 + lVar5) + 0x165) == '\x02';
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  return;
}



// FUNCTION 144429e0c FUN_144429e0c body=29 status=ok
// SIG undefined FUN_144429e0c(void)

void FUN_144429e0c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144429e2a FUN_144429e2a body=69 status=ok
// SIG undefined FUN_144429e2a(void)

undefined8 * FUN_144429e2a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14baa36c0;
  FUN_145ad6ee2(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144429e70 FUN_144429e70 body=282 status=ok
// SIG undefined FUN_144429e70(void)

undefined8 * FUN_144429e70(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144425664);
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



// FUNCTION 144429f8a FUN_144429f8a body=378 status=ok
// SIG undefined FUN_144429f8a(void)

void FUN_144429f8a(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined1 uVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar5 = param_1[0x15];
  iVar2 = *(int *)(param_1 + 0x16);
  uVar7 = 0;
  if ((longlong)iVar2 != 0) {
    lVar6 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar5 + lVar6) + 0x108) = 0;
      if ((*(char *)((longlong)param_1 + 0xcc) == '\x01') && (param_1[0x17] != 0)) {
        bVar8 = *(char *)(param_1[0x17] + 0xba) - 2;
        uVar7 = 0;
        if (bVar8 < 7) {
          uVar7 = (&DAT_14baa3d0c)[bVar8];
        }
        *(undefined4 *)(*(longlong *)(lVar5 + lVar6) + 0x108) = uVar7;
      }
      lVar4 = *(longlong *)(lVar5 + lVar6);
      if (*(longlong *)(lVar4 + 0x18) != 0) {
        iVar3 = *(int *)(param_1 + 0x1a);
        if (((longlong)iVar3 < 0) || (*(int *)(*(longlong *)(lVar4 + 0x3a0) + 0x438) <= iVar3)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined1 *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x3a0) + 0x430) + (longlong)iVar3);
        }
        *(undefined1 *)(lVar4 + 0x38) = uVar9;
        iVar3 = *(int *)(param_1 + 0x1a);
        if (((longlong)iVar3 < 0) ||
           (lVar4 = *(longlong *)(*(longlong *)(lVar5 + lVar6) + 0x3a0),
           *(int *)(lVar4 + 0x448) <= iVar3)) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined1 *)(*(longlong *)(lVar4 + 0x440) + (longlong)iVar3);
        }
        *(undefined1 *)(*(longlong *)(lVar5 + lVar6) + 0x3a) = uVar9;
        *(undefined1 *)(*(longlong *)(lVar5 + lVar6) + 0x39) =
             *(undefined1 *)(*(longlong *)(*(longlong *)(lVar5 + lVar6) + 0x3a0) + 0x460);
        *(bool *)(*(longlong *)(lVar5 + lVar6) + 0x3b) =
             *(char *)(*(longlong *)(lVar5 + lVar6) + 0x165) == '\x02';
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
    uVar7 = *(undefined4 *)(param_1 + 0x16);
    lVar5 = param_1[0x15];
  }
  FUN_145ad6ee2(lVar5,uVar7);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014442a0fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14442a104 FUN_14442a104 body=446 status=ok
// SIG undefined FUN_14442a104(void)

void FUN_14442a104(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  int *local_58;
  longlong local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_44 = 0;
  local_58 = &local_48;
  local_48 = 0;
  local_50 = param_1 + 0x70;
  FUN_14907bf2e(*(undefined8 *)(param_1 + 0x30),param_2,param_3,&local_44);
  iVar3 = local_44;
  if (local_44 != *(int *)(param_1 + 0x68)) {
    iVar1 = *(int *)(param_1 + 0x6c);
    FUN_145d22e9c();
    if (iVar3 == iVar1) {
      lVar2 = (**(code **)(DAT_14cbf7f28 + 0xb0))
                        (&DAT_14cbf7f28,*(undefined8 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x6c));
      if (lVar2 == 0) goto LAB_14442a171;
      FUN_145d22e9c();
      (**(code **)(DAT_14cbf7f28 + 0xb8))
                (&DAT_14cbf7f28,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
      iVar3 = *(int *)(param_1 + 0x6c);
    }
    else {
      lVar2 = (**(code **)(DAT_14cbf7f28 + 0xb0))
                        (&DAT_14cbf7f28,*(undefined8 *)(param_1 + 0x30),iVar3);
      if (lVar2 == 0) goto LAB_14442a171;
      FUN_145d22e9c();
      (**(code **)(DAT_14cbf7f28 + 0xb8))
                (&DAT_14cbf7f28,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x68));
      *(longlong *)(param_1 + 0x78) = lVar2;
    }
    *(int *)(param_1 + 0x68) = iVar3;
  }
LAB_14442a171:
  iVar3 = local_48;
  if (local_48 != *(int *)(param_1 + 0x6c)) {
    FUN_145d22e9c();
    lVar2 = (**(code **)(DAT_14cbf7f28 + 0xb0))
                      (&DAT_14cbf7f28,*(undefined8 *)(param_1 + 0x30),iVar3);
    if (lVar2 != 0) {
      FUN_145d22e9c();
      (**(code **)(DAT_14cbf7f28 + 0xb8))
                (&DAT_14cbf7f28,*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x6c));
      *(longlong *)(param_1 + 0x80) = lVar2;
      *(int *)(param_1 + 0x6c) = iVar3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014442a1a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14442a2c4 FUN_14442a2c4 body=206 status=ok
// SIG undefined FUN_14442a2c4(void)

void FUN_14442a2c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  int *local_58;
  longlong local_50;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = 0;
  local_58 = &local_40;
  local_40 = 0;
  local_50 = param_1 + 0x70;
  FUN_14907bf2e(*(undefined8 *)(param_1 + 0x30),local_58,param_3,&local_3c);
  iVar3 = local_3c;
  if (local_3c != *(int *)(param_1 + 0x68)) {
    if (local_3c == *(int *)(param_1 + 0x6c)) {
      local_28 = *(undefined8 *)(param_1 + 0x48);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x60) = local_28;
      local_38._0_4_ = (undefined4)uVar1;
      local_38._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar2;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      *(undefined4 *)(param_1 + 0x50) = (undefined4)local_38;
      *(undefined4 *)(param_1 + 0x54) = local_38._4_4_;
      *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_30;
      *(undefined4 *)(param_1 + 0x5c) = uStack_30._4_4_;
      local_38 = uVar1;
      uStack_30 = uVar2;
    }
    else {
      FUN_1444173f6(*(undefined8 *)(param_1 + 0x30),local_3c);
    }
    *(int *)(param_1 + 0x68) = iVar3;
  }
  iVar3 = local_40;
  if (local_40 != *(int *)(param_1 + 0x6c)) {
    FUN_1444173f6(*(undefined8 *)(param_1 + 0x30),local_40,param_1 + 0x50);
    *(int *)(param_1 + 0x6c) = iVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14442a394 FUN_14442a394 body=126 status=ok
// SIG undefined FUN_14442a394(void)

void FUN_14442a394(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = FUN_14586a468();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_1448c69c8(lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14442a428 FUN_14442a428 body=29 status=ok
// SIG undefined FUN_14442a428(void)

undefined8 FUN_14442a428(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14442a446 FUN_14442a446 body=51 status=ok
// SIG undefined FUN_14442a446(void)

void FUN_14442a446(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014442a476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14442a484 FUN_14442a484 body=29 status=ok
// SIG undefined FUN_14442a484(void)

void FUN_14442a484(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14442a4a2 FUN_14442a4a2 body=71 status=ok
// SIG undefined FUN_14442a4a2(void)

undefined8 * FUN_14442a4a2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14baa3880;
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



// FUNCTION 14442a4ea FUN_14442a4ea body=282 status=ok
// SIG undefined FUN_14442a4ea(void)

undefined8 * FUN_14442a4ea(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144425664);
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



// FUNCTION 14442a604 FUN_14442a604 body=148 status=ok
// SIG undefined FUN_14442a604(void)

void FUN_14442a604(undefined8 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pcVar2 = (code *)param_1[0x16];
  plVar4 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar4 = param_1 + 0x1a;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    plVar4 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014442a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14442a6b4 FUN_14442a6b4 body=5 status=ok
// SIG undefined FUN_14442a6b4(void)

longlong FUN_14442a6b4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14442a6ba FUN_14442a6ba body=12 status=ok
// SIG undefined FUN_14442a6ba(void)

void FUN_14442a6ba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014442a6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14442a6c6 FUN_14442a6c6 body=29 status=ok
// SIG undefined FUN_14442a6c6(void)

undefined8 FUN_14442a6c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14442a6e4 FUN_14442a6e4 body=267 status=ok
// SIG undefined FUN_14442a6e4(void)

void FUN_14442a6e4(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar8 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar3 + lVar8) + 0x158) = *(undefined4 *)(param_1 + 0x18);
      iVar2 = *(int *)(param_1 + 0x1c);
      *(int *)(*(longlong *)(lVar3 + lVar8) + 0x15c) = iVar2;
      if ((iVar2 == 1) && (0.0 <= *(float *)(param_1 + 0x18))) {
        FUN_14908d074(*(undefined8 *)(lVar3 + lVar8),(int)*(float *)(param_1 + 0x18));
      }
      if (*(char *)(param_1 + 0x20) == '\x01') {
        puVar6 = (undefined8 *)(*(longlong *)(lVar3 + lVar8) + 0x200);
        puVar7 = (undefined8 *)(*(longlong *)(lVar3 + lVar8) + 0x2c0);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = (undefined8 *)(param_1 + 0x30);
        puVar7 = (undefined8 *)(*(longlong *)(lVar3 + lVar8) + 0x200);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        lVar5 = *(longlong *)(lVar3 + lVar8);
        lVar4 = *(longlong *)(lVar5 + 0x20);
        if (lVar4 != 0) {
          *(int *)(lVar4 + 0x188) = 1 - *(int *)(lVar4 + 0x188);
          lVar5 = *(longlong *)(lVar3 + lVar8);
        }
        lVar5 = *(longlong *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          *(int *)(lVar5 + 0x188) = 1 - *(int *)(lVar5 + 0x188);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  return;
}



// FUNCTION 14442a7fa FUN_14442a7fa body=29 status=ok
// SIG undefined FUN_14442a7fa(void)

void FUN_14442a7fa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14442a818 FUN_14442a818 body=69 status=ok
// SIG undefined FUN_14442a818(void)

undefined8 * FUN_14442a818(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14baa38d0;
  FUN_145ad6ee2(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14442a85e FUN_14442a85e body=282 status=ok
// SIG undefined FUN_14442a85e(void)

undefined8 * FUN_14442a85e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144425664);
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



// FUNCTION 14442a978 FUN_14442a978 body=392 status=ok
// SIG undefined FUN_14442a978(void)

void FUN_14442a978(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar10 = param_1[0x17];
  iVar2 = *(int *)(param_1 + 0x18);
  uVar6 = 0;
  if ((longlong)iVar2 != 0) {
    lVar9 = 0;
    do {
      *(undefined4 *)(*(longlong *)(lVar10 + lVar9) + 0x158) = *(undefined4 *)(param_1 + 0x19);
      iVar3 = *(int *)((longlong)param_1 + 0xcc);
      *(int *)(*(longlong *)(lVar10 + lVar9) + 0x15c) = iVar3;
      if ((iVar3 == 1) && (0.0 <= *(float *)(param_1 + 0x19))) {
        FUN_14908d074(*(undefined8 *)(lVar10 + lVar9),(int)*(float *)(param_1 + 0x19));
      }
      if (*(char *)(param_1 + 0x1a) == '\x01') {
        puVar7 = (undefined8 *)(*(longlong *)(lVar10 + lVar9) + 0x200);
        puVar8 = (undefined8 *)(*(longlong *)(lVar10 + lVar9) + 0x2c0);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        puVar7 = param_1 + 0x1c;
        puVar8 = (undefined8 *)(*(longlong *)(lVar10 + lVar9) + 0x200);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        lVar5 = *(longlong *)(lVar10 + lVar9);
        lVar4 = *(longlong *)(lVar5 + 0x20);
        if (lVar4 != 0) {
          *(int *)(lVar4 + 0x188) = 1 - *(int *)(lVar4 + 0x188);
          lVar5 = *(longlong *)(lVar10 + lVar9);
        }
        lVar5 = *(longlong *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          *(int *)(lVar5 + 0x188) = 1 - *(int *)(lVar5 + 0x188);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
    uVar6 = *(undefined4 *)(param_1 + 0x18);
    lVar10 = param_1[0x17];
  }
  FUN_145ad6ee2(lVar10,uVar6);
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014442aae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14442ab00 FUN_14442ab00 body=156 status=ok
// SIG undefined FUN_14442ab00(void)

void FUN_14442ab00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar9 = 0;
    do {
      puVar5 = (undefined8 *)(*(longlong *)(lVar1 + lVar9) + 0x200);
      puVar7 = (undefined8 *)(*(longlong *)(lVar1 + lVar9) + 0x2c0);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      plVar6 = param_1 + 2;
      plVar8 = (longlong *)(*(longlong *)(lVar1 + lVar9) + 0x200);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar8 = *plVar6;
        plVar6 = plVar6 + 1;
        plVar8 = plVar8 + 1;
      }
      lVar4 = *(longlong *)(lVar1 + lVar9);
      lVar2 = *(longlong *)(lVar4 + 0x20);
      if (lVar2 != 0) {
        *(int *)(lVar2 + 0x188) = 1 - *(int *)(lVar2 + 0x188);
        lVar4 = *(longlong *)(lVar1 + lVar9);
      }
      lVar4 = *(longlong *)(lVar4 + 0x48);
      if (lVar4 != 0) {
        *(int *)(lVar4 + 0x188) = 1 - *(int *)(lVar4 + 0x188);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar9);
  }
  return;
}



// FUNCTION 14442aba6 FUN_14442aba6 body=29 status=ok
// SIG undefined FUN_14442aba6(void)

void FUN_14442aba6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14442abc4 FUN_14442abc4 body=69 status=ok
// SIG undefined FUN_14442abc4(void)

undefined8 * FUN_14442abc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14baa3950;
  FUN_145ad6ee2(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14442ac0a FUN_14442ac0a body=282 status=ok
// SIG undefined FUN_14442ac0a(void)

undefined8 * FUN_14442ac0a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_144425664);
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



// FUNCTION 14442ad24 FUN_14442ad24 body=267 status=ok
// SIG undefined FUN_14442ad24(void)

void FUN_14442ad24(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar4 = param_1[0x16];
  iVar2 = *(int *)(param_1 + 0x17);
  uVar6 = 0;
  if ((longlong)iVar2 != 0) {
    lVar9 = 0;
    do {
      puVar7 = (undefined8 *)(*(longlong *)(lVar4 + lVar9) + 0x200);
      puVar8 = (undefined8 *)(*(longlong *)(lVar4 + lVar9) + 0x2c0);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar7 = param_1 + 0x18;
      puVar8 = (undefined8 *)(*(longlong *)(lVar4 + lVar9) + 0x200);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      lVar5 = *(longlong *)(lVar4 + lVar9);
      lVar3 = *(longlong *)(lVar5 + 0x20);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x188) = 1 - *(int *)(lVar3 + 0x188);
        lVar5 = *(longlong *)(lVar4 + lVar9);
      }
      lVar5 = *(longlong *)(lVar5 + 0x48);
      if (lVar5 != 0) {
        *(int *)(lVar5 + 0x188) = 1 - *(int *)(lVar5 + 0x188);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
    uVar6 = *(undefined4 *)(param_1 + 0x17);
    lVar4 = param_1[0x16];
  }
  FUN_145ad6ee2(lVar4,uVar6);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014442ae23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14442ae30 FUN_14442ae30 body=481 status=ok
// SIG undefined FUN_14442ae30(void)

void FUN_14442ae30(longlong param_1,ulonglong *param_2)

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
  FUN_14908cae8(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14442b012 FUN_14442b012 body=232 status=ok
// SIG undefined FUN_14442b012(void)

void FUN_14442b012(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 14442b0fa FUN_14442b0fa body=81 status=ok
// SIG undefined FUN_14442b0fa(void)

void FUN_14442b0fa(undefined8 param_1,longlong *param_2)

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
  FUN_14908cb8b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14442b14b FUN_14442b14b body=2832 status=ok
// SIG undefined FUN_14442b14b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442b14b(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 **local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cbf7c78);
  if (cVar2 == '\0') {
    _DAT_14cbf7c78 = 0;
    uRam000000014cbf7c80 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = (undefined8 **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba9c380,1,0);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cbf7cc8,L"r.HairStrands.InterpolationMetric.Distance",&DAT_14c7649cc,
                L"Hair strands interpolation metric weights for distance");
  atexit(FUN_144417200);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cbf7cd8,L"r.HairStrands.InterpolationMetric.Angle",&DAT_14cbf7ce8,
                L"Hair strands interpolation metric weights for angle");
  atexit(FUN_144417245);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cbf7cf0,L"r.HairStrands.InterpolationMetric.Length",&DAT_14cbf7d00,
                L"Hair strands interpolation metric weights for length");
  atexit(FUN_14441728a);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cbf7d08,L"r.HairStrands.InterpolationMetric.AngleAttenuation",&DAT_14c7649d0,
                L"Hair strands interpolation angle attenuation");
  atexit(FUN_1444172cf);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf7d18,L"r.HairStrands.ClusterBuilder.MaxVoxelResolution",&DAT_14c7649d4,
                L"Max voxel resolution used when building hair strands cluster data to avoid too long building time (default:128).  "
               );
  atexit(FUN_144417314);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf7d28,L"r.HairStrands.HairGroupBuilder.MaxVoxelResolution",&DAT_14c7649d8,
                L"Max voxel resolution used when voxelizing hair strands to transfer group index grom strands to cards. This avoids too long building time (default:64).  "
               );
  atexit(FUN_144417359);
  local_48 = FUN_145f1fca8;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf7e50,&local_50);
  _DAT_14cbf7e60 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *_DAT_14cbf7e60 = 0;
  DAT_14cbf7e68 = _DAT_14cbf7e60;
  atexit(FUN_1444173aa);
  _DAT_14cbf7e70 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *_DAT_14cbf7e70 = 0;
  DAT_14cbf7e78 = _DAT_14cbf7e70;
  atexit(FUN_1444173d0);
  local_58 = 0;
  local_68 = (undefined8 **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba9ce00,1,0);
  ppuStack_60 = &PTR_FUN_14ba9d4e0;
  local_58 = 4;
  local_68 = (undefined8 **)0x2;
  FUN_14282b410(L"/Script/HairStrandsCore",0,0,&PTR_FUN_14ba9d560);
  local_50 = (undefined8 *)&DAT_14a19662d;
  local_48 = (code *)CONCAT35(local_48._5_3_,4);
  FUN_14001a6c0(&local_50,1);
  local_58 = 0;
  local_68 = (undefined8 **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14ba9f3e0,1,0);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf80e8,L"r.HairStrands.EnableAdaptiveSubsteps",&DAT_14cbf80f8,
                L"Enable adaptive solver substeps");
  atexit(FUN_144419a2a);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8100,L"r.HairStrands.BindingValidation",&DAT_14cbf8110,
                L"Enable groom binding validation, which report error/warnings with details about the cause."
               );
  atexit(FUN_144419a6f);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cbf8118,L"GroomCache.EnableStreaming",&DAT_14c7649dc,
                L"Enable groom cache streaming and prebuffering. Do not switch while groom caches are in use."
               );
  atexit(FUN_144419ab4);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cbf8128,L"r.HairStrands.UseProxyLocalToWorld",&DAT_14c7649dd,
                L"Enable the use of the groom proxy local to world instead of extracting it from the game thread."
               );
  atexit(FUN_144419af9);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cbf8138,L"r.HairStrands.Streaming.Prediction",&DAT_14cbf8148,
                L"Enable LOD streaming prediction.");
  atexit(FUN_144419b3e);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8150,L"r.HairStrands.BoundMode",&DAT_14cbf8160,
                L"Define how hair bound are computed at runtime when attached to a skel. mesh.\n 0: Use skel.mesh extented with grooms bounds.\n 1: Use skel.mesh bounds.\n 2: Use skel.mesh extented with grooms bounds (conservative)"
               );
  atexit(FUN_144419b83);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8168,L"r.HairStrands.UseAttachedSimulationComponents",&DAT_14cbf8178,
                L"Boolean to check if we are using already attached niagara components for simulation (WIP)"
               );
  atexit(FUN_144419bc8);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8180,L"r.HairStrands.ViewMode.ClumpIndex",&DAT_14cbf8190,
                L"Define the ClumpID index (0, 1, or 2) which should be visualized");
  atexit(FUN_144419c0d);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8198,L"r.HairStrands.ForceVelocityOutput",&DAT_14cbf81a8,
                L"When enabled, force the cards/meshes to write velocity vectors.");
  atexit(FUN_144419c52);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf81b0,L"r.HairStrands.GroomBindingValidationOnComponent",&DAT_14c7649e0,
                L"When enabled, force groom binding validation on the groom component to ensure they are compatible."
               );
  atexit(FUN_144419c97);
  DAT_14cbf81d8 = 0;
  _DAT_14cbf81e0 = 0;
  atexit(FUN_144419ced);
  local_50 = (undefined8 *)0x0;
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_149e17030;
  local_50[3] = FUN_144420f00;
  ppuStack_60 = (undefined **)((ulonglong)ppuStack_60 & 0xffffffff00000000);
  local_68 = &local_50;
  FUN_141703554(&DAT_14cbf8270,L"r.HairStrands.Dump.GroomComponent",&DAT_14cbf826c,
                L"Dump information of all active groom components.");
  if ((int)local_48 == 0) {
LAB_14442b6fb:
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
    goto LAB_14442b6fb;
  }
  atexit(FUN_144421077);
  local_50 = (undefined8 *)0x0;
  local_48._0_4_ = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48._0_4_ = 2;
  *local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_50[2] = lVar3;
  *local_50 = &PTR_FUN_149e17030;
  local_50[3] = FUN_149083633;
  ppuStack_60 = (undefined **)((ulonglong)ppuStack_60 & 0xffffffff00000000);
  local_68 = &local_50;
  FUN_141703554(&DAT_14cbf8288,L"r.HairStrands.Simulation.ResetAll",&DAT_14cbf8280,
                L"Reset hair strands simulation on all groom components.");
  if ((int)local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_14442b7ec;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48._0_4_ = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14442b7ec:
  atexit(FUN_1444210bc);
  local_58 = 0;
  local_68 = (undefined8 **)0x0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14baa0700,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14baa0d70;
  local_68 = (undefined8 **)0x1;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14baa0dc0,1,&PTR_FUN_14baa0d90);
  ppuStack_60 = &PTR_FUN_14baa1680;
  local_68 = (undefined8 **)0x0;
  local_58 = 2;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14baa16c0,1,0);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8340,L"r.HairStrands.MeshProjection.DebugInUVsSpace",&DAT_14cbf8350,
                L"Render debug mes projection in UVs space");
  atexit(FUN_1444211a6);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8358,L"r.HairStrands.MeshProjection",&DAT_14cbf8368,
                L"Override in shader settings for displaying root debug data");
  atexit(FUN_1444211eb);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8370,L"r.HairStrands.MeshProjection.Render.Rest.Triangles",&DAT_14cbf8380,
                L"Render strands rest triangles");
  atexit(FUN_144421230);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8388,L"r.HairStrands.MeshProjection.Render.Rest.Frames",&DAT_14cbf8398,
                L"Render strands rest frames");
  atexit(FUN_144421275);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf83a0,L"r.HairStrands.MeshProjection.Render.Deformed.Triangles",
                &DAT_14cbf83b0,L"Render strands deformed triangles");
  atexit(FUN_1444212ba);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf83b8,L"r.HairStrands.MeshProjection.Render.Deformed.Frames",&DAT_14c7649e4
                ,L"Render strands deformed frames");
  atexit(FUN_1444212ff);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf83c8,L"r.HairStrands.MeshProjection.Sim.Rest.Triangles",&DAT_14cbf83d8,
                L"Render guides rest triangles");
  atexit(FUN_144421344);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf83e0,L"r.HairStrands.MeshProjection.Sim.Rest.Frames",&DAT_14cbf83f0,
                L"Render guides rest frames");
  atexit(FUN_144421389);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf83f8,L"r.HairStrands.MeshProjection.Sim.Rest.Samples",&DAT_14cbf8408,
                L"Render guides rest samples");
  atexit(FUN_1444213ce);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8410,L"r.HairStrands.MeshProjection.Sim.Deformed.Triangles",&DAT_14cbf8420
                ,L"Render guides deformed triangles");
  atexit(FUN_144421413);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8428,L"r.HairStrands.MeshProjection.Sim.Deformed.Frames",&DAT_14cbf8438,
                L"Render guides deformed frames");
  atexit(FUN_144421458);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8440,L"r.HairStrands.MeshProjection.Sim.Deformed.Samples",&DAT_14cbf8450,
                L"Render guides deformed samples");
  atexit(FUN_14442149d);
  local_68 = (undefined8 **)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf8458,L"r.HairStrands.Cards.DebugAtlas",&DAT_14cbf8468,
                L"Draw debug hair cards atlas.");
  atexit(FUN_1444214e2);
  local_48 = FUN_145f3a8f6;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf8588,&local_50);
  local_48 = FUN_145e9cc8c;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf86b0,&local_50);
  local_48 = FUN_145e79ad4;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf87d8,&local_50);
  local_48 = FUN_145e072a4;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf8900,&local_50);
  local_48 = FUN_145f5e166;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf8a28,&local_50);
  local_48 = FUN_145f5e678;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf8b50,&local_50);
  local_48 = FUN_145f6f6ce;
  local_50 = (undefined8 *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf8c78,&local_50);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14442bc5c FUN_14442bc5c body=69 status=ok
// SIG undefined FUN_14442bc5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442bc5c(void)

{
  _DAT_14cbf9348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442bc9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf9350,1);
  return;
}



// FUNCTION 14442bca1 FUN_14442bca1 body=69 status=ok
// SIG undefined FUN_14442bca1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442bca1(void)

{
  _DAT_14cbf9360 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442bce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf9368,1);
  return;
}



// FUNCTION 14442bce6 FUN_14442bce6 body=69 status=ok
// SIG undefined FUN_14442bce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442bce6(void)

{
  _DAT_14cbf9378 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442bd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf9380,1);
  return;
}



// FUNCTION 14442bd2b FUN_14442bd2b body=69 status=ok
// SIG undefined FUN_14442bd2b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442bd2b(void)

{
  _DAT_14cbf9388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442bd6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf9390,1);
  return;
}



// FUNCTION 14442bd70 FUN_14442bd70 body=69 status=ok
// SIG undefined FUN_14442bd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442bd70(void)

{
  _DAT_14cbf9398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442bdb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf93a0,1);
  return;
}



// FUNCTION 14442bdb5 FUN_14442bdb5 body=69 status=ok
// SIG undefined FUN_14442bdb5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442bdb5(void)

{
  _DAT_14cbf93a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442bdf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf93b0,1);
  return;
}



// FUNCTION 14442bdfa FUN_14442bdfa body=69 status=ok
// SIG undefined FUN_14442bdfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442bdfa(void)

{
  _DAT_14cbf93c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442be3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf93c8,1);
  return;
}



// FUNCTION 14442be3f FUN_14442be3f body=69 status=ok
// SIG undefined FUN_14442be3f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442be3f(void)

{
  _DAT_14cbf93d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442be81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf93d8,1);
  return;
}



// FUNCTION 14442be84 FUN_14442be84 body=69 status=ok
// SIG undefined FUN_14442be84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442be84(void)

{
  _DAT_14cbf93e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442bec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf93e8,1);
  return;
}



// FUNCTION 14442bec9 FUN_14442bec9 body=69 status=ok
// SIG undefined FUN_14442bec9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14442bec9(void)

{
  _DAT_14cbf93f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014442bf0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf9400,1);
  return;
}



// FUNCTION 14442bf1a FUN_14442bf1a body=199 status=ok
// SIG undefined FUN_14442bf1a(void)

uint FUN_14442bf1a(longlong param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_14cbf9370 < 1) {
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 0x450) + (longlong)param_2 * 4);
    if (*(char *)(param_1 + 0x3b0) == '\0') {
      bVar1 = 0;
      cVar2 = FUN_144b0f89b(0,param_3);
      if (cVar2 != '\0') goto LAB_14442bf76;
    }
  }
  else {
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 0x450) + (longlong)param_2 * 4);
  }
  bVar1 = FUN_144b0f89b(1,param_3);
LAB_14442bf76:
  if (iVar4 == 2) {
    bVar1 = FUN_144b0f89b(2,param_3);
    uVar3 = bVar1 ^ 3;
  }
  else if (iVar4 == 1) {
    bVar1 = FUN_144b0f89b(1,param_3);
    uVar3 = (uint)(bVar1 ^ 1) * 2 + 1;
  }
  else {
    uVar3 = 3;
    if (iVar4 == 0) {
      cVar2 = FUN_144b0f89b(0,param_3);
      uVar3 = (uint)(bVar1 ^ 1) * 2 + 1;
      if (cVar2 != '\0') {
        uVar3 = (uint)bVar1;
      }
    }
  }
  return uVar3;
}



// FUNCTION 14442bfe1 FUN_14442bfe1 body=34211 status=ok
// SIG undefined FUN_14442bfe1(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14442bfe1(longlong param_1,byte param_2,PRTL_CRITICAL_SECTION_DEBUG param_3)

{
  int *piVar1;
  code *pcVar2;
  LPCRITICAL_SECTION p_Var3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ushort uVar10;
  LONG LVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  void *pvVar15;
  HANDLE pvVar16;
  undefined8 uVar17;
  float *pfVar18;
  double dVar19;
  LPCRITICAL_SECTION p_Var20;
  longlong lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [8];
  code cVar26;
  byte bVar27;
  byte bVar28;
  uint uVar33;
  byte bVar29;
  char cVar30;
  undefined1 uVar31;
  uint uVar34;
  uint uVar35;
  undefined4 uVar36;
  char cVar32;
  DWORD DVar37;
  DWORD DVar38;
  longlong lVar39;
  PRTL_CRITICAL_SECTION_DEBUG p_Var40;
  undefined8 *puVar41;
  _RTL_CRITICAL_SECTION *p_Var42;
  LONG *pLVar43;
  DWORD *pDVar44;
  PRTL_CRITICAL_SECTION_DEBUG p_Var45;
  _LIST_ENTRY **pp_Var46;
  undefined8 uVar47;
  LIST_ENTRY *pLVar48;
  undefined8 uVar49;
  longlong *plVar50;
  longlong lVar51;
  ulonglong *puVar52;
  undefined1 auVar53 [8];
  ulonglong uVar54;
  ulonglong uVar55;
  bool bVar56;
  undefined2 *puVar57;
  undefined4 uVar58;
  int iVar76;
  longlong *plVar59;
  undefined8 *puVar60;
  _LIST_ENTRY *p_Var61;
  LONG *pLVar62;
  PRTL_CRITICAL_SECTION_DEBUG p_Var63;
  PRTL_CRITICAL_SECTION_DEBUG p_Var64;
  longlong lVar65;
  ulonglong uVar66;
  longlong *plVar67;
  longlong *plVar68;
  _LIST_ENTRY *p_Var69;
  PRTL_CRITICAL_SECTION_DEBUG p_Var70;
  int iVar71;
  code *pcVar72;
  ulonglong uVar73;
  longlong *plVar74;
  PRTL_CRITICAL_SECTION_DEBUG p_Var75;
  ulonglong uVar77;
  undefined7 uVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  longlong lVar84;
  ulonglong uVar85;
  longlong *plVar86;
  longlong lVar87;
  _RTL_CRITICAL_SECTION *p_Var88;
  ulonglong uVar89;
  longlong lVar90;
  undefined8 *puVar91;
  undefined4 uVar92;
  float fVar93;
  undefined4 uVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  double dVar98;
  double dVar99;
  double dVar100;
  float fVar101;
  undefined1 auVar102 [16];
  undefined4 uVar103;
  float fVar104;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 uVar105;
  float fVar106;
  float fVar107;
  undefined1 auStack_818 [32];
  PRTL_CRITICAL_SECTION_DEBUG local_7f8;
  undefined8 uStack_7f0;
  ulonglong local_7e8;
  undefined1 *puStack_7e0;
  _RTL_CRITICAL_SECTION *local_7d8;
  _LIST_ENTRY *local_7d0;
  _LIST_ENTRY **local_7c8;
  PRTL_CRITICAL_SECTION_DEBUG local_7c0;
  DWORD *local_7b8;
  PRTL_CRITICAL_SECTION_DEBUG local_7b0;
  PRTL_CRITICAL_SECTION_DEBUG local_7a8;
  LIST_ENTRY *local_7a0;
  _LIST_ENTRY **local_798;
  undefined8 local_790;
  PRTL_CRITICAL_SECTION_DEBUG local_788;
  PRTL_CRITICAL_SECTION_DEBUG local_780;
  PRTL_CRITICAL_SECTION_DEBUG local_778;
  PRTL_CRITICAL_SECTION_DEBUG *local_770;
  undefined8 *local_768;
  undefined1 local_760;
  PRTL_CRITICAL_SECTION_DEBUG *local_758;
  PRTL_CRITICAL_SECTION_DEBUG *local_750;
  undefined1 *local_748;
  undefined1 *local_740;
  undefined1 *local_738;
  undefined1 *local_730;
  undefined4 local_728;
  longlong local_720;
  PRTL_CRITICAL_SECTION_DEBUG local_718;
  PRTL_CRITICAL_SECTION_DEBUG local_710;
  PRTL_CRITICAL_SECTION_DEBUG local_708;
  undefined2 local_6fa;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  _RTL_CRITICAL_SECTION *local_6c0;
  longlong *local_6b8;
  longlong *local_6b0;
  double local_6a8;
  longlong *local_6a0;
  PRTL_CRITICAL_SECTION_DEBUG local_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  double local_688;
  float local_67c;
  _RTL_CRITICAL_SECTION *local_678;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  ulonglong local_668;
  longlong local_660;
  LONG local_658;
  undefined4 uStack_654;
  LONG LStack_650;
  undefined4 uStack_64c;
  longlong *local_648;
  longlong *local_640;
  longlong *local_638;
  undefined8 local_630;
  undefined1 local_628 [16];
  _LIST_ENTRY *local_618;
  _LIST_ENTRY *local_610;
  void *local_608;
  int local_600;
  undefined4 local_5fc;
  void *local_5f8;
  int local_5f0;
  undefined4 local_5ec;
  undefined1 local_5e8 [32];
  PRTL_CRITICAL_SECTION_DEBUG p_Stack_5c8;
  undefined8 local_5c0;
  char local_5b8;
  longlong local_5b0;
  ulonglong uStack_5a8;
  LIST_ENTRY local_598;
  PRTL_CRITICAL_SECTION_DEBUG local_588;
  undefined8 local_580;
  undefined1 local_578 [8];
  undefined8 uStack_570;
  _LIST_ENTRY *local_568;
  PRTL_CRITICAL_SECTION_DEBUG local_558;
  PRTL_CRITICAL_SECTION_DEBUG local_550;
  undefined1 local_548 [8];
  _LIST_ENTRY local_540;
  undefined1 local_530 [40];
  undefined1 local_508 [16];
  undefined1 local_4f8 [32];
  _RTL_CRITICAL_SECTION_DEBUG local_4d8;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined1 local_166 [118];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_818;
  local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
  local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
  if ((DAT_14c7649f0 < 1 && param_2 == 5) ||
     (p_Var42 = (_RTL_CRITICAL_SECTION *)param_3[2].ProcessLocksList.Blink,
     local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_),
     local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_),
     p_Var42 == (_RTL_CRITICAL_SECTION *)0x0)) goto LAB_14442f20d;
  p_Var40 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_3 + 2);
  if ((*(_LIST_ENTRY **)&p_Var42->LockCount != (_LIST_ENTRY *)0x0) &&
     (local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_),
     local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_),
     ((ulonglong)(*(_LIST_ENTRY **)&p_Var42->LockCount)[6].Flink & 0x20000000) == 0))
  goto LAB_14442f20d;
  local_720 = param_1;
  if (0 < DAT_14c7649f0) {
    if (param_2 == 4) {
      p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)&param_3[1].CriticalSection;
    }
    else {
      if (param_2 != 5) {
        switch(param_2) {
        case 0:
          goto switchD_14442c102_caseD_0;
        case 1:
          goto switchD_14442c102_caseD_1;
        case 2:
          goto switchD_14442c102_caseD_2;
        case 3:
          goto switchD_14442c102_caseD_3;
        default:
          goto switchD_14442c102_caseD_4;
        case 6:
          p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)&param_3->Flags;
          goto LAB_14442e372;
        case 8:
          goto switchD_14442c102_caseD_8;
        }
      }
      p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)&param_3[1].ProcessLocksList.Blink;
    }
LAB_14442ca75:
    local_708 = *(PRTL_CRITICAL_SECTION_DEBUG *)param_3;
    p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)param_3->CriticalSection;
    p_Var63 = *(PRTL_CRITICAL_SECTION_DEBUG *)&param_3[1].Flags;
    lVar84 = *(longlong *)&param_3[2].EntryCount;
    bVar27 = FUN_144b0f89b(1,*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(lVar84 + 8) * 2));
    bVar28 = FUN_144b0f89b(2,*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(lVar84 + 8) * 2));
    local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
    local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
    if (((bVar27 | bVar28) != 1) ||
       (iVar71 = *(int *)&p_Var40->CriticalSection,
       local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_),
       local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_), iVar71 == 0))
    goto LAB_14442f20d;
    local_578 = (undefined1  [8])0x0;
    uStack_570 = (_RTL_CRITICAL_SECTION *)0x0;
    local_508._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_508._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
    local_530._24_8_ = (longlong *)0x0;
    local_530._32_8_ = 0;
    if (iVar71 < 0) goto LAB_144434052;
    FUN_14480809c(local_508);
    iVar71 = *(int *)&p_Var40->CriticalSection;
    if (iVar71 < 0) goto LAB_144434052;
    local_718 = p_Var75;
    local_6f8 = p_Var63;
    local_6d8 = p_Var42;
    if ((int)local_530._36_4_ < iVar71) {
      FUN_14480809c((longlong)local_530 + 0x18);
      iVar71 = *(int *)&p_Var40->CriticalSection;
    }
    if (iVar71 != 0) {
      uVar55 = *(ulonglong *)p_Var40;
      lVar84 = 0;
      do {
        uVar49 = local_508._8_8_;
        uVar47 = local_530._32_8_;
        plVar50 = (longlong *)((longlong)local_530 + 0x18);
        lVar51 = *(longlong *)(uVar55 + lVar84);
        if (*(int *)(lVar51 + 0x3a8) - 1U < 2) {
          uVar73 = (ulonglong)*(float *)(*(longlong *)(lVar51 + 0x3a0) + 0x47c);
          iVar76 = (int)uVar73;
          uVar36 = (int)uStack_570;
          if (*(int *)(lVar51 + 0x3a8) == 1) {
            if (((bVar27 != 0) && (-1 < iVar76)) &&
               ((iVar76 < *(int *)(lVar51 + 0x118) &&
                (*(longlong *)(*(longlong *)(lVar51 + 0x110) + (uVar73 & 0xffffffff) * 0x68) != 0)))
               ) {
              iVar81 = local_530._32_4_;
              uVar33 = local_530._32_4_ + 1;
              local_530._32_4_ = uVar33;
              if ((uint)local_530._36_4_ < uVar33) {
                local_6e8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_6e8._4_4_,(int)uStack_570);
                FUN_1447808da(plVar50,uVar47 & 0xffffffff);
                plVar50 = (longlong *)((longlong)local_530 + 0x18);
                uVar36 = (LONG)local_6e8;
              }
LAB_14442cc9f:
              p_Var42 = uStack_570;
              *(undefined4 *)(*plVar50 + (longlong)iVar81 * 4) = uVar36;
              lVar65 = (longlong)(int)uStack_570;
              uVar33 = (int)uStack_570 + 1;
              uStack_570 = (_RTL_CRITICAL_SECTION *)CONCAT44(uStack_570._4_4_,uVar33);
              if (uStack_570._4_4_ < uVar33) {
                FUN_144438be0(local_578,(ulonglong)p_Var42 & 0xffffffff);
              }
              local_710 = (PRTL_CRITICAL_SECTION_DEBUG)local_578;
              local_6e8 = (PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar65 * 4 * 0x30);
              FUN_144438b8e();
              uVar36 = *(undefined4 *)(lVar51 + 0x10);
              local_710[lVar65 * 4].Type = (short)uVar36;
              local_710[lVar65 * 4].CreatorBackTraceIndex = (short)((uint)uVar36 >> 0x10);
              local_710[lVar65 * 4 + 3].EntryCount = (int)lVar51;
              local_710[lVar65 * 4 + 3].ContentionCount = (int)((ulonglong)lVar51 >> 0x20);
              *(undefined4 *)((longlong)&local_710[lVar65 * 4].CriticalSection + 4) =
                   *(undefined4 *)(lVar51 + 0x3ac);
              *(int *)&local_710[lVar65 * 4].field_0x4 = iVar76;
              if (iVar76 < *(int *)(*(longlong *)(lVar51 + 0x3a0) + 0x438)) {
                uVar31 = *(undefined1 *)
                          (*(longlong *)(*(longlong *)(lVar51 + 0x3a0) + 0x430) +
                          (uVar73 & 0xffffffff));
              }
              else {
                uVar31 = 0;
              }
              *(undefined1 *)&(local_6e8->ProcessLocksList).Flink = uVar31;
              *(undefined1 *)((longlong)&(local_6e8->ProcessLocksList).Flink + 1) =
                   *(undefined1 *)(*(longlong *)(lVar51 + 0x3a0) + 0x460);
              if (iVar76 < *(int *)(*(longlong *)(lVar51 + 0x3a0) + 0x448)) {
                uVar31 = *(undefined1 *)
                          (*(longlong *)(*(longlong *)(lVar51 + 0x3a0) + 0x440) +
                          (uVar73 & 0xffffffff));
              }
              else {
                uVar31 = 0;
              }
              *(undefined1 *)((longlong)&(local_6e8->ProcessLocksList).Flink + 2) = uVar31;
              *(int *)&local_6e8->CriticalSection =
                   (int)*(float *)(*(longlong *)(lVar51 + 0x3a0) + 0x478);
              iVar76 = *(int *)(lVar51 + 0x10);
              p_Var61 = local_6f8[2].ProcessLocksList.Flink;
              LVar11 = *(LONG *)&p_Var61[(longlong)iVar76 * 8].Flink;
              local_6e8[1].Type = (short)LVar11;
              local_6e8[1].CreatorBackTraceIndex = (short)((uint)LVar11 >> 0x10);
              FUN_1490946c2(&local_6e8[1].CriticalSection);
              p_Var61 = p_Var61 + (longlong)iVar76 * 8 + 2;
              pDVar44 = &local_6e8[1].EntryCount;
              for (lVar65 = 0xc; lVar65 != 0; lVar65 = lVar65 + -1) {
                *(_LIST_ENTRY **)pDVar44 = p_Var61->Flink;
                p_Var61 = (_LIST_ENTRY *)&p_Var61->Blink;
                pDVar44 = pDVar44 + 2;
              }
              if (*(int *)(lVar51 + 0x3a8) == 2) {
                lVar65 = (longlong)*(int *)&local_6e8->field_0x4 * 0x30;
                *(bool *)((longlong)&(local_6e8->ProcessLocksList).Flink + 5) =
                     *(longlong *)(*(longlong *)(lVar51 + 0x120) + 8 + lVar65) != 0;
                *(longlong *)&local_6e8->Flags = lVar65 + *(longlong *)(lVar51 + 0x120);
              }
              else if (*(int *)(lVar51 + 0x3a8) == 1) {
                *(longlong *)&local_6e8->EntryCount =
                     (longlong)*(int *)&local_6e8->field_0x4 * 0x68 + *(longlong *)(lVar51 + 0x110);
                lVar65 = *(longlong *)&local_6e8[3].EntryCount;
                bVar29 = 1;
                if (((*(char *)(lVar65 + 0x38) == '\0') && (*(char *)(lVar65 + 0x3a) == '\0')) &&
                   (*(char *)(lVar65 + 0x39) == '\0')) {
                  bVar29 = *(byte *)(lVar65 + 0x3b);
                }
                *(byte *)((longlong)&(local_6e8->ProcessLocksList).Flink + 3) = bVar29;
                bVar56 = -1 < *(int *)&local_6e8->CriticalSection &&
                         *(LONG *)((longlong)&local_6e8->CriticalSection + 4) == 2;
                *(bool *)((longlong)&(local_6e8->ProcessLocksList).Flink + 4) = bVar56;
                *(byte *)((longlong)&(local_6e8->ProcessLocksList).Flink + 5) = bVar56 | bVar29;
                *(undefined4 *)&(local_6e8->ProcessLocksList).Blink = 0;
                if ((bVar56) || (bVar29 != 0)) {
                  iVar76 = DAT_14c764a18;
                  if (1 < DAT_14c764a18) {
                    iVar76 = 2;
                  }
                  if (iVar76 < 1) {
                    iVar76 = 0;
                  }
                  if (iVar76 != 0) {
                    if (iVar76 == 2) {
                      *(undefined4 *)&(local_6e8->ProcessLocksList).Blink = 2;
                    }
                    else {
                      *(undefined4 *)&(local_6e8->ProcessLocksList).Blink = 1;
                    }
                  }
                }
              }
              *(undefined4 *)(*(longlong *)(*(longlong *)&local_6e8[3].EntryCount + 0x3a0) + 900) =
                   *(undefined4 *)(*(longlong *)&local_6e8[3].EntryCount + 0x3a8);
              puVar41 = (undefined8 *)(lVar51 + 0x1a0);
              if (*(int *)(lVar51 + 0x3ac) == 2) {
                puVar41 = (undefined8 *)(lVar51 + 0x200);
              }
              puVar60 = (undefined8 *)
                        (*(longlong *)(*(longlong *)&local_6e8[3].EntryCount + 0x3a0) + 0x390);
              for (lVar51 = 0xc; lVar51 != 0; lVar51 = lVar51 + -1) {
                *puVar60 = *puVar41;
                puVar41 = puVar41 + 1;
                puVar60 = puVar60 + 1;
              }
              *(undefined1 *)(*(longlong *)(*(longlong *)&local_6e8[3].EntryCount + 0x3a0) + 0x408)
                   = 0;
            }
          }
          else if ((((bVar28 != 0) && (-1 < iVar76)) && (iVar76 < *(int *)(lVar51 + 0x128))) &&
                  (*(longlong *)(*(longlong *)(lVar51 + 0x120) + (uVar73 & 0xffffffff) * 0x30) != 0)
                  ) {
            iVar81 = local_508._8_4_;
            uVar33 = local_508._8_4_ + 1;
            local_508._8_4_ = uVar33;
            if ((uint)local_508._12_4_ < uVar33) {
              local_6e8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_6e8._4_4_,(int)uStack_570);
              FUN_1447808da(local_508,uVar49 & 0xffffffff);
              uVar36 = (LONG)local_6e8;
            }
            plVar50 = (longlong *)local_508;
            goto LAB_14442cc9f;
          }
        }
        lVar84 = lVar84 + 8;
      } while ((longlong)iVar71 * 8 != lVar84);
    }
    uVar47 = local_530._24_8_;
    p_Var75 = local_708;
    p_Var40 = local_718;
    lVar84 = local_720;
    lVar51 = (longlong)(int)local_530._32_4_;
    if (lVar51 == 0) {
LAB_14442d655:
      local_530._8_8_ = (longlong *)0x0;
      local_530._16_8_ = 0;
    }
    else {
      lVar65 = 0;
      do {
        lVar39 = (longlong)*(int *)(uVar47 + lVar65);
        if ((-1 < *(int *)&((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))
                           ->CriticalSection) &&
           ((*(int *)((longlong)
                      &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                       CriticalSection + 4) == 2 ||
            (*(char *)((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                        ProcessLocksList).Flink + 2) == '\x01')))) {
          local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                       (*(longlong *)
                         &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                          EntryCount + 0x38);
          uStack_7f0 = *(_LIST_ENTRY **)
                        (*(longlong *)
                          &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))
                           ->EntryCount + 0x40);
          FUN_1444429d4(lVar84,p_Var40,
                        *(int *)&((PRTL_CRITICAL_SECTION_DEBUG)
                                 ((longlong)local_578 + lVar39 * 4 * 0x30))->CriticalSection,
                        (PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + (lVar39 * 4 + 1) * 0x30)
                       );
        }
        uVar49 = local_530._24_8_;
        lVar65 = lVar65 + 4;
      } while (lVar51 * 4 != lVar65);
      lVar51 = (longlong)(int)local_530._32_4_;
      if (lVar51 == 0) goto LAB_14442d655;
      lVar65 = 0;
      do {
        if ((-1 < *(int *)&((PRTL_CRITICAL_SECTION_DEBUG)
                           ((longlong)local_578 + (longlong)*(int *)(uVar49 + lVar65) * 4 * 0x30))->
                           CriticalSection) &&
           ((p_Var63 = (PRTL_CRITICAL_SECTION_DEBUG)
                       ((longlong)local_578 + (longlong)*(int *)(uVar49 + lVar65) * 4 * 0x30),
            *(int *)((longlong)&p_Var63->CriticalSection + 4) == 2 ||
            (*(char *)((longlong)&(p_Var63->ProcessLocksList).Flink + 2) == '\x01')))) {
          puStack_7e0 = *(undefined1 **)(*(longlong *)&p_Var63->EntryCount + 0x30);
          local_7e8 = *(ulonglong *)(*(longlong *)&p_Var63->EntryCount + 0x40);
          uVar36._0_2_ = p_Var63->Type;
          uVar36._2_2_ = p_Var63->CreatorBackTraceIndex;
          uStack_7f0 = (_LIST_ENTRY *)
                       CONCAT44(uStack_7f0._4_4_,
                                *(int *)&((PRTL_CRITICAL_SECTION_DEBUG)
                                         ((longlong)local_578 +
                                         (longlong)*(int *)(uVar49 + lVar65) * 4 * 0x30))->
                                         CriticalSection);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                      CONCAT44(local_7f8._4_4_,*(undefined4 *)&p_Var63->field_0x4);
          FUN_144444c57(lVar84,p_Var40,CONCAT71((int7)((ulonglong)puStack_7e0 >> 8),2),uVar36);
        }
        uVar47 = local_530._24_8_;
        lVar65 = lVar65 + 4;
      } while (lVar51 * 4 != lVar65);
      lVar51 = (longlong)(int)local_530._32_4_;
      if (lVar51 == 0) goto LAB_14442d655;
      lVar65 = 0;
      do {
        lVar39 = (longlong)*(int *)(uVar47 + lVar65);
        if ((((-1 < *(int *)&((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30)
                             )->CriticalSection) &&
             (*(int *)((longlong)
                       &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                        CriticalSection + 4) != 2)) &&
            (p_Var63 = (PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30),
            *(char *)((longlong)&(p_Var63->ProcessLocksList).Flink + 2) == '\0')) &&
           ((*(char *)&(p_Var63->ProcessLocksList).Flink != '\0' ||
            (*(char *)((longlong)&(p_Var63->ProcessLocksList).Flink + 1) == '\x01')))) {
          puStack_7e0 = *(undefined1 **)(*(longlong *)&p_Var63->EntryCount + 0x30);
          uVar94._0_2_ = p_Var63->Type;
          uVar94._2_2_ = p_Var63->CreatorBackTraceIndex;
          uStack_7f0 = (_LIST_ENTRY *)
                       CONCAT44(uStack_7f0._4_4_,
                                *(int *)&((PRTL_CRITICAL_SECTION_DEBUG)
                                         ((longlong)local_578 + lVar39 * 4 * 0x30))->CriticalSection
                               );
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                      CONCAT44(local_7f8._4_4_,*(undefined4 *)&p_Var63->field_0x4);
          local_7e8 = 0;
          FUN_144444c57(lVar84,p_Var40,2,uVar94);
        }
        uVar49 = local_530._24_8_;
        lVar65 = lVar65 + 4;
      } while (lVar51 * 4 != lVar65);
      lVar84 = (longlong)(int)local_530._32_4_;
      local_530._8_8_ = (longlong *)0x0;
      local_530._16_8_ = 0;
      if (lVar84 != 0) {
        lVar51 = 0;
        do {
          auVar53 = local_578;
          lVar65 = local_720;
          lVar39 = (longlong)*(int *)(uVar49 + lVar51);
          if ((*(char *)((longlong)
                         &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))
                          ->ProcessLocksList).Flink + 5) == '\x01') &&
             (*(int *)&(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                       ProcessLocksList).Blink == 1)) {
            lVar87 = *(longlong *)
                      &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                       EntryCount;
            local_530._0_8_ =
                 FUN_14716d252(local_720,
                               *(longlong *)(lVar87 + 0x30) +
                               (ulonglong)*(uint *)(*(longlong *)(lVar87 + 0x30) + 0x188) * 0x20 +
                               0x50,0);
            uVar33 = *(uint *)(*(longlong *)(*(longlong *)(lVar87 + 0x48) + 0x90) + 8);
            local_4d8._0_8_ = local_4d8._1_8_ << 8;
            local_4d8.Flags = 0;
            local_4d8.CreatorBackTraceIndexHigh = 0;
            local_4d8.SpareWORD = 0;
            uStack_4a8 = 0;
            local_4d8.EntryCount = 0;
            local_4d8.ContentionCount = 0;
            local_4d8.CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
            local_4d8.ProcessLocksList = (LIST_ENTRY)ZEXT816(0);
            local_540.Blink = (HANDLE)0x0;
            if (*(char *)((longlong)
                          &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + lVar39 * 4 * 0x30))->
                           ProcessLocksList).Flink + 3) == '\x01') {
              lVar90 = *(longlong *)
                        (*(longlong *)
                          &((PRTL_CRITICAL_SECTION_DEBUG)
                           ((longlong)auVar53 + (lVar39 * 4 + 3) * 0x30))->EntryCount + 0x20);
              local_540.Flink =
                   (_LIST_ENTRY *)
                   FUN_14716d181(lVar65,lVar90 + (ulonglong)*(uint *)(lVar90 + 0x188) * 0x20 + 0x50)
              ;
            }
            else {
              local_540.Flink._0_4_ = 0;
              local_540.Flink._4_4_ = 0;
            }
            if (*(char *)((longlong)
                          &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + lVar39 * 4 * 0x30))->
                           ProcessLocksList).Flink + 3) == '\x01') {
              local_548 = (undefined1  [8])
                          FUN_14716d181(local_720,
                                        *(longlong *)
                                         (*(longlong *)
                                           &((PRTL_CRITICAL_SECTION_DEBUG)
                                            ((longlong)auVar53 + (lVar39 * 4 + 3) * 0x30))->
                                            EntryCount + 0x18) + 0x50);
            }
            else {
              local_548 = (undefined1  [8])0x0;
            }
            if (*(char *)((longlong)
                          &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + lVar39 * 4 * 0x30))->
                           ProcessLocksList).Flink + 3) == '\x01') {
              local_550 = (PRTL_CRITICAL_SECTION_DEBUG)
                          FUN_14716d181(local_720,*(longlong *)(lVar87 + 0x48) + 0x70);
            }
            else {
              local_550 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            }
            lVar65 = local_720;
            if (*(char *)((longlong)
                          &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + lVar39 * 4 * 0x30))->
                           ProcessLocksList).Flink + 3) == '\x01') {
              local_558 = (PRTL_CRITICAL_SECTION_DEBUG)
                          FUN_14716d181(local_720,*(longlong *)(lVar87 + 0x48) + 0x50);
            }
            else {
              local_558 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            }
            local_580 = FUN_14716d181(lVar65,*(longlong *)(lVar87 + 0x28) + 0x110);
            local_588 = (PRTL_CRITICAL_SECTION_DEBUG)
                        FUN_14716d181(lVar65,*(longlong *)(lVar87 + 0x28) + 0x50);
            lVar65 = local_720;
            p_Var61 = (((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + lVar39 * 4 * 0x30))->
                      ProcessLocksList).Flink;
            if (*(char *)((longlong)
                          &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + lVar39 * 4 * 0x30))->
                           ProcessLocksList).Flink + 4) == '\0') {
              if (((ulonglong)p_Var61 & 0x1000000) == 0) {
                uVar47 = 0;
                local_6f8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                goto LAB_14442d393;
              }
              lVar90._0_4_ = ((PRTL_CRITICAL_SECTION_DEBUG)
                             ((longlong)auVar53 + (lVar39 * 4 + 3) * 0x30))->EntryCount;
              lVar90._4_4_ = ((PRTL_CRITICAL_SECTION_DEBUG)
                             ((longlong)auVar53 + (lVar39 * 4 + 3) * 0x30))->ContentionCount;
              uVar47 = 0;
              local_6f8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              local_6e8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              local_710 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
LAB_14442d348:
              local_598.Blink =
                   (_LIST_ENTRY *)
                   FUN_14716d181(local_720,
                                 *(longlong *)(lVar90 + 0x20) +
                                 (ulonglong)*(uint *)(*(longlong *)(lVar90 + 0x20) + 0x188) * 0x20 +
                                 0x90);
            }
            else {
              if (((ulonglong)p_Var61 & 0x1000000) != 0) {
                lVar90 = *(longlong *)
                          &((PRTL_CRITICAL_SECTION_DEBUG)
                           ((longlong)auVar53 + (lVar39 * 4 + 3) * 0x30))->EntryCount;
                local_710 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar90 + 0x28);
                local_6e8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar90 + 0x30);
                uVar47 = *(undefined8 *)(lVar87 + 0x38);
                local_6f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar87 + 0x40);
                goto LAB_14442d348;
              }
              uVar47 = *(undefined8 *)(lVar87 + 0x38);
              local_6f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar87 + 0x40);
LAB_14442d393:
              local_6e8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              local_710 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              local_598.Blink = (_LIST_ENTRY *)0x0;
            }
            local_598.Flink =
                 (_LIST_ENTRY *)
                 FUN_14716d181(lVar65,*(longlong *)(lVar87 + 0x30) +
                                      (ulonglong)*(uint *)(*(longlong *)(lVar87 + 0x30) + 0x188) *
                                      0x20 + 0x90);
            p_Var75 = local_708;
            p_Var40 = local_718;
            if (*(char *)((longlong)
                          &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + lVar39 * 4 * 0x30))->
                           ProcessLocksList).Flink + 3) == '\x01') {
              lVar65 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            &((PRTL_CRITICAL_SECTION_DEBUG)
                             ((longlong)auVar53 + (lVar39 * 4 + 3) * 0x30))->EntryCount + 0x18) +
                        0x130);
              local_5e8._0_8_ = (*(double *)(lVar65 + 0x28) + *(double *)(lVar65 + 0x40)) * 0.5;
              local_5e8._8_8_ =
                   (_RTL_CRITICAL_SECTION *)
                   ((*(double *)(lVar65 + 0x30) + *(double *)(lVar65 + 0x48)) * 0.5);
              local_5e8._16_8_ =
                   (_LIST_ENTRY *)((*(double *)(lVar65 + 0x38) + *(double *)(lVar65 + 0x50)) * 0.5);
            }
            else {
              local_5e8._0_8_ = DAT_14c8464e0;
              local_5e8._8_8_ = DAT_14c8464e8;
              local_5e8._16_8_ = DAT_14c8464f0;
            }
            lVar65 = *(longlong *)(*(longlong *)(lVar87 + 0x28) + 0x130);
            local_4f8._16_8_ = (*(double *)(lVar65 + 0x38) + *(double *)(lVar65 + 0x50)) * 0.5;
            local_4f8._8_8_ = (*(double *)(lVar65 + 0x30) + *(double *)(lVar65 + 0x48)) * 0.5;
            local_4f8._0_8_ = (*(double *)(lVar65 + 0x28) + *(double *)(lVar65 + 0x40)) * 0.5;
            local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                         &((PRTL_CRITICAL_SECTION_DEBUG)
                          ((longlong)auVar53 + (lVar39 * 4 + 3) * 0x30))->EntryCount;
            local_760 = (undefined1)((uVar33 & 2) >> 1);
            local_778 = local_6e8;
            local_780 = local_6f8;
            local_788 = local_710;
            local_7c8 = (_LIST_ENTRY **)CONCAT44(local_7c8._4_4_,*(undefined4 *)(lVar87 + 0x50));
            local_7d8 = (_RTL_CRITICAL_SECTION *)
                        CONCAT44(local_7d8._4_4_,
                                 *(undefined4 *)
                                  &((PRTL_CRITICAL_SECTION_DEBUG)
                                   ((longlong)auVar53 + lVar39 * 4 * 0x30))->CriticalSection);
            puStack_7e0 = (undefined1 *)CONCAT44(puStack_7e0._4_4_,*(undefined4 *)(lVar65 + 0x14));
            local_7e8 = CONCAT44(local_7e8._4_4_,*(undefined4 *)(lVar65 + 8));
            local_728 = 1;
            local_730 = local_548 + 0x18;
            local_738 = local_548 + 0x10;
            local_740 = local_548 + 8;
            local_748 = local_548;
            local_750 = &local_550;
            local_758 = &local_558;
            local_768 = &local_580;
            local_770 = &local_588;
            local_798 = &local_598.Blink;
            local_7a0 = &local_598;
            local_7a8 = (PRTL_CRITICAL_SECTION_DEBUG)local_5e8;
            local_7b0 = (PRTL_CRITICAL_SECTION_DEBUG)(local_508 + 0x10);
            local_7b8 = (DWORD *)&local_4d8;
            local_7c0 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_7c0._4_4_,1);
            uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,*(undefined4 *)(lVar65 + 0xc));
            local_7d0 = (_LIST_ENTRY *)CONCAT44(local_7d0._4_4_,0x3f800000);
            local_790 = uVar47;
            FUN_14443f12b(local_720,local_718,
                          *(undefined2 *)
                           (&DAT_14ca85070 + (longlong)(int)local_6d8[0x136].SpinCount * 2),
                          local_708);
          }
          uVar47 = local_530._24_8_;
          p_Var42 = local_6d8;
          lVar65 = local_720;
          lVar51 = lVar51 + 4;
        } while (lVar84 * 4 != lVar51);
        lVar84 = (longlong)(int)local_530._32_4_;
        if (lVar84 != 0) {
          lVar51 = 0;
          do {
            lVar39 = (longlong)*(int *)(uVar47 + lVar51);
            if ((*(char *)((longlong)
                           &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30)
                             )->ProcessLocksList).Flink + 5) == '\x01') &&
               (*(int *)&(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                         ProcessLocksList).Blink == 1)) {
              local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                           &((PRTL_CRITICAL_SECTION_DEBUG)
                            ((longlong)local_578 + (lVar39 * 4 + 3) * 0x30))->EntryCount;
              local_7e8 = CONCAT44(local_7e8._4_4_,
                                   *(undefined4 *)
                                    &((PRTL_CRITICAL_SECTION_DEBUG)
                                     ((longlong)local_578 + lVar39 * 4 * 0x30))->CriticalSection);
              uStack_7f0 = (_LIST_ENTRY *)
                           CONCAT44(uStack_7f0._4_4_,
                                    *(undefined4 *)
                                     &((PRTL_CRITICAL_SECTION_DEBUG)
                                      ((longlong)local_578 + lVar39 * 4 * 0x30))->field_0x4);
              FUN_14444058f(lVar65,p_Var40,(int)p_Var42[0x136].SpinCount,p_Var75);
            }
            uVar49 = local_530._24_8_;
            lVar39 = local_720;
            lVar51 = lVar51 + 4;
          } while (lVar84 * 4 != lVar51);
          lVar84 = (longlong)(int)local_530._32_4_;
          if (lVar84 != 0) {
            lVar51 = 0;
            do {
              lVar65 = (longlong)*(int *)(uVar49 + lVar51);
              if ((*(char *)((longlong)
                             &(((PRTL_CRITICAL_SECTION_DEBUG)
                               ((longlong)local_578 + lVar65 * 4 * 0x30))->ProcessLocksList).Flink +
                            5) == '\x01') &&
                 (*(int *)&(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar65 * 4 * 0x30))
                           ->ProcessLocksList).Blink == 2)) {
                local_7e8 = *(ulonglong *)
                             (*(longlong *)
                               &((PRTL_CRITICAL_SECTION_DEBUG)
                                ((longlong)local_578 + (lVar65 * 4 + 3) * 0x30))->EntryCount + 0x28)
                ;
                puStack_7e0 = *(undefined1 **)
                               (*(longlong *)
                                 &((PRTL_CRITICAL_SECTION_DEBUG)
                                  ((longlong)local_578 + (lVar65 * 4 + 3) * 0x30))->EntryCount +
                               0x30);
                local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                            **(undefined8 **)
                              &((PRTL_CRITICAL_SECTION_DEBUG)
                               ((longlong)local_578 + lVar65 * 4 * 0x30))->EntryCount;
                uStack_7f0 = (_LIST_ENTRY *)
                             (*(undefined8 **)
                               &((PRTL_CRITICAL_SECTION_DEBUG)
                                ((longlong)local_578 + lVar65 * 4 * 0x30))->EntryCount)[1];
                FUN_144443529(lVar39,p_Var40,1,
                              *(undefined4 *)
                               &((PRTL_CRITICAL_SECTION_DEBUG)
                                ((longlong)local_578 + lVar65 * 4 * 0x30))->CriticalSection);
              }
              uVar47 = local_530._24_8_;
              lVar51 = lVar51 + 4;
            } while (lVar84 * 4 != lVar51);
            lVar84 = (longlong)(int)local_530._32_4_;
            if (lVar84 != 0) {
              lVar51 = 0;
              do {
                lVar65 = (longlong)*(int *)(uVar47 + lVar51);
                if (*(char *)((longlong)
                              &(((PRTL_CRITICAL_SECTION_DEBUG)
                                ((longlong)local_578 + lVar65 * 4 * 0x30))->ProcessLocksList).Flink
                             + 5) == '\x01') {
                  puVar41 = *(undefined8 **)
                             &((PRTL_CRITICAL_SECTION_DEBUG)
                              ((longlong)local_578 + lVar65 * 4 * 0x30))->EntryCount;
                  if (*(int *)&(((PRTL_CRITICAL_SECTION_DEBUG)
                                ((longlong)local_578 + lVar65 * 4 * 0x30))->ProcessLocksList).Blink
                      == 2) {
                    local_7e8 = *(ulonglong *)
                                 (*(longlong *)
                                   &((PRTL_CRITICAL_SECTION_DEBUG)
                                    ((longlong)local_578 + (lVar65 * 4 + 3) * 0x30))->EntryCount +
                                 0x28);
                    puStack_7e0 = *(undefined1 **)
                                   (*(longlong *)
                                     &((PRTL_CRITICAL_SECTION_DEBUG)
                                      ((longlong)local_578 + (lVar65 * 4 + 3) * 0x30))->EntryCount +
                                   0x30);
                    local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)*puVar41;
                    uStack_7f0 = (_LIST_ENTRY *)puVar41[1];
                    FUN_144443529(local_720,p_Var40,1,
                                  *(undefined4 *)
                                   &((PRTL_CRITICAL_SECTION_DEBUG)
                                    ((longlong)local_578 + lVar65 * 4 * 0x30))->CriticalSection);
                  }
                  if (puVar41[1] != 0) {
                    local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                                ((ulonglong)local_7f8 & 0xffffffffffffff00);
                    FUN_14716cfd3(&local_4d8,local_720,puVar41[1] + 0x50,0);
                    uVar49 = local_530._16_8_;
                    uVar17 = local_4d8._0_8_;
                    if ((_LIST_ENTRY *)local_4d8._0_8_ != (_LIST_ENTRY *)0x0) {
                      lVar65 = (longlong)(int)local_530._16_4_;
                      uVar33 = local_530._16_4_ + 1;
                      local_530._16_4_ = uVar33;
                      if ((uint)local_530._20_4_ < uVar33) {
                        FUN_144904f42((longlong)local_530 + 8U,uVar49 & 0xffffffff);
                      }
                      *(undefined8 *)(local_530._8_8_ + lVar65 * 2 * 8) = uVar17;
                      *(undefined4 *)(local_530._8_8_ + (lVar65 * 2 + 1) * 8) = 0x70;
                      *(undefined1 *)(local_530._8_8_ + lVar65 * 0x10 + 0xc) = 1;
                    }
                    local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                                ((ulonglong)local_7f8 & 0xffffffffffffff00);
                    FUN_14716cfd3(&local_4d8,local_720,puVar41[1] + 0x70,0);
                    uVar49 = local_530._16_8_;
                    p_Var40 = local_718;
                    uVar17 = local_4d8._0_8_;
                    if ((_LIST_ENTRY *)local_4d8._0_8_ != (_LIST_ENTRY *)0x0) {
                      lVar65 = (longlong)(int)local_530._16_4_;
                      uVar33 = local_530._16_4_ + 1;
                      local_530._16_4_ = uVar33;
                      if ((uint)local_530._20_4_ < uVar33) {
                        FUN_144904f42((longlong)local_530 + 8U,uVar49 & 0xffffffff);
                      }
                      *(undefined8 *)(local_530._8_8_ + lVar65 * 2 * 8) = uVar17;
                      *(undefined4 *)(local_530._8_8_ + (lVar65 * 2 + 1) * 8) = 0x70;
                      *(undefined1 *)(local_530._8_8_ + lVar65 * 0x10 + 0xc) = 1;
                    }
                  }
                }
                lVar51 = lVar51 + 4;
              } while (lVar84 * 4 != lVar51);
            }
          }
        }
      }
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca97070) {
      FUN_144b3d300(&DAT_14ca97070);
      if (DAT_14ca97070 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar50 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar50 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar50 + 0x68))(plVar50);
        }
        _Init_thread_footer(&DAT_14ca97070);
        p_Var40 = local_718;
      }
    }
    lVar84 = DAT_14ca97068;
    bVar56 = true;
    cVar30 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      iVar71 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar71 == 0x40000002) {
        cVar30 = '\x02';
        uVar55 = 0;
      }
      else {
        bVar56 = true;
        cVar30 = '\x02';
        if ((DAT_14c86a9f8 == '\x01') && (iVar71 != 2)) {
          if (iVar71 == 1) {
            DVar37 = FUN_140ad26c0();
            DVar38 = GetCurrentThreadId();
            bVar56 = DVar37 == DVar38;
            cVar30 = DAT_14ca96da8;
          }
          else {
            bVar56 = false;
          }
        }
        uVar55 = (ulonglong)(bVar56 ^ 1);
      }
      bVar56 = *(int *)(lVar84 + uVar55 * 4) != 0;
      p_Var40 = local_718;
    }
    uVar47 = local_530._24_8_;
    lVar84 = local_720;
    if ((bVar56) && (cVar30 != '\0')) {
      lVar51 = (longlong)(int)local_530._32_4_;
      if (lVar51 != 0) {
        lVar65 = 0;
        do {
          lVar39 = (longlong)*(int *)(uVar47 + lVar65);
          if (*(longlong *)
               (*(longlong *)
                 &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                  EntryCount + 0x18) != 0) {
            uVar49._0_4_ = ((PRTL_CRITICAL_SECTION_DEBUG)
                           ((longlong)local_578 + (lVar39 * 4 + 3) * 0x30))->EntryCount;
            uVar49._4_4_ = ((PRTL_CRITICAL_SECTION_DEBUG)
                           ((longlong)local_578 + (lVar39 * 4 + 3) * 0x30))->ContentionCount;
            FUN_144441a79(lVar84,uVar49,
                          *(undefined4 *)
                           &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))
                            ->field_0x4,
                          *(undefined1 *)
                           ((longlong)
                            &(((PRTL_CRITICAL_SECTION_DEBUG)
                              ((longlong)local_578 + lVar39 * 4 * 0x30))->ProcessLocksList).Flink +
                           5));
          }
          lVar65 = lVar65 + 4;
        } while (lVar51 * 4 != lVar65);
      }
    }
    uVar47 = local_508._0_8_;
    lVar84 = (longlong)(int)local_508._8_4_;
    if (lVar84 != 0) {
      lVar51 = 0;
      do {
        auVar53 = local_578;
        lVar65 = local_720;
        lVar39 = (longlong)*(int *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar51);
        if (*(char *)((longlong)
                      &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                       ProcessLocksList).Flink + 5) == '\x01') {
          local_7e8 = *(ulonglong *)
                       (*(longlong *)
                         &((PRTL_CRITICAL_SECTION_DEBUG)
                          ((longlong)local_578 + (lVar39 * 4 + 3) * 0x30))->EntryCount + 0x28);
          puStack_7e0 = *(undefined1 **)
                         (*(longlong *)
                           &((PRTL_CRITICAL_SECTION_DEBUG)
                            ((longlong)local_578 + (lVar39 * 4 + 3) * 0x30))->EntryCount + 0x30);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                      **(ulonglong **)
                        &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                         Flags;
          uStack_7f0 = (_LIST_ENTRY *)
                       (*(ulonglong **)
                         &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                          Flags)[1];
          FUN_144443208(local_720,p_Var40,0,
                        *(undefined4 *)
                         &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->
                          CriticalSection);
          lVar39 = *(longlong *)
                    (*(longlong *)
                      &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + lVar39 * 4 * 0x30))->Flags
                    + 8);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
          FUN_14716cfd3(&local_4d8,lVar65,lVar39 + (ulonglong)*(uint *)(lVar39 + 0x9c) * 0x20 + 0x50
                        ,0);
          uVar49 = local_530._16_8_;
          uVar17 = local_4d8._0_8_;
          if ((_LIST_ENTRY *)local_4d8._0_8_ != (_LIST_ENTRY *)0x0) {
            lVar65 = (longlong)(int)local_530._16_4_;
            uVar33 = local_530._16_4_ + 1;
            local_530._16_4_ = uVar33;
            if ((uint)local_530._20_4_ < uVar33) {
              FUN_144904f42((longlong)local_530 + 8,uVar49 & 0xffffffff);
            }
            *(undefined8 *)(local_530._8_8_ + lVar65 * 2 * 8) = uVar17;
            *(undefined4 *)(local_530._8_8_ + (lVar65 * 2 + 1) * 8) = 0x70;
            *(undefined1 *)(local_530._8_8_ + lVar65 * 0x10 + 0xc) = 1;
          }
        }
        lVar51 = lVar51 + 4;
      } while (lVar84 * 4 != lVar51);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca97070) {
      FUN_144b3d300(&DAT_14ca97070);
      if (DAT_14ca97070 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar50 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
        if (plVar50 == (longlong *)0x0) {
          DAT_14ca97068 = 0;
        }
        else {
          DAT_14ca97068 = (**(code **)(*plVar50 + 0x68))(plVar50);
        }
        _Init_thread_footer(&DAT_14ca97070);
      }
    }
    lVar84 = DAT_14ca97068;
    bVar56 = true;
    cVar30 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      iVar71 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      cVar30 = '\x02';
      if (((iVar71 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar71 == 2)) {
        uVar55 = 0;
      }
      else if (iVar71 == 1) {
        DVar37 = FUN_140ad26c0();
        DVar38 = GetCurrentThreadId();
        uVar55 = (ulonglong)(DVar37 != DVar38);
        cVar30 = DAT_14ca96da8;
      }
      else {
        uVar55 = 1;
      }
      bVar56 = *(int *)(lVar84 + uVar55 * 4) != 0;
    }
    uVar47 = local_508._0_8_;
    lVar84 = local_720;
    if ((bVar56) && (cVar30 != '\0')) {
      lVar51 = (longlong)(int)local_508._8_4_;
      if (lVar51 != 0) {
        lVar65 = 0;
        do {
          lVar39 = (longlong)*(int *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar65);
          if (*(longlong *)
               (*(longlong *)
                 &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))->Flags +
               0x10) != 0) {
            uVar17._0_4_ = ((PRTL_CRITICAL_SECTION_DEBUG)
                           ((longlong)local_578 + (lVar39 * 4 + 3) * 0x30))->EntryCount;
            uVar17._4_4_ = ((PRTL_CRITICAL_SECTION_DEBUG)
                           ((longlong)local_578 + (lVar39 * 4 + 3) * 0x30))->ContentionCount;
            FUN_144441d13(lVar84,uVar17,
                          *(undefined4 *)
                           &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_578 + lVar39 * 4 * 0x30))
                            ->field_0x4,
                          *(undefined1 *)
                           ((longlong)
                            &(((PRTL_CRITICAL_SECTION_DEBUG)
                              ((longlong)local_578 + lVar39 * 4 * 0x30))->ProcessLocksList).Flink +
                           5));
          }
          lVar65 = lVar65 + 4;
        } while (lVar51 * 4 != lVar65);
      }
    }
    if ((longlong)(int)local_530._16_4_ != 0) {
      plVar68 = (longlong *)(local_530._8_8_ + (longlong)(int)local_530._16_4_ * 2 * 8);
      plVar50 = (longlong *)(local_720 + 0x598);
      plVar86 = (longlong *)local_530._8_8_;
      do {
        bVar27 = 1;
        if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
           ((DAT_14ca84e6a == '\x01' &&
            (bVar27 = *(byte *)((longlong)plVar86 + 0xc) & 3, DAT_14ca84e99 != '\0')))) {
          bVar27 = 1;
        }
        lVar84 = *plVar86;
        if ((*(byte *)(lVar84 + 0x20) & 0xc) == 0) {
          lVar51 = plVar86[1];
          if ((*(byte *)(lVar84 + 0x20) & 0x10) != 0) {
            FUN_140069376(local_720);
          }
          iVar71 = *(int *)(local_720 + 0x5a0);
          *(uint *)(local_720 + 0x5a0) = iVar71 + 1U;
          if (*(uint *)(local_720 + 0x5a4) < iVar71 + 1U) {
            FUN_1400f155a(plVar50,iVar71);
          }
          *(longlong *)(*plVar50 + (longlong)iVar71 * 8) = lVar84;
          *(int *)(lVar84 + 0x1c) = (int)lVar51;
          *(byte *)(lVar84 + 0x20) = bVar27 | *(byte *)(lVar84 + 0x20) & 0xe8 | 0x14;
          *(int *)(lVar84 + 0x58) = (int)lVar51;
        }
        plVar86 = plVar86 + 2;
      } while (plVar86 != plVar68);
    }
    iVar71 = SUB84(local_530._16_8_,4);
    local_530._16_8_ = local_530._16_8_ & 0xffffffff00000000;
    if (iVar71 != 0) {
      FUN_1400f146c((longlong)local_530 + 8,0);
    }
    if ((longlong *)local_530._24_8_ != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((PRTL_CRITICAL_SECTION_DEBUG)local_508._0_8_ != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FUN_1400020a8();
    }
    FUN_144438ce9(local_578,(ulonglong)uStack_570 & 0xffffffff);
    auVar53 = local_578;
    goto LAB_14442f203;
  }
  switch(param_2) {
  case 0:
switchD_14442c102_caseD_0:
    local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
    local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
    if ((*DAT_14cbf9798 == 0) ||
       (local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_),
       local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_),
       *DAT_14cbf9798 == 0)) goto LAB_14442f20d;
    local_5e8._16_4_ = 0;
    local_5e8._20_4_ = 0;
    local_5e8._24_4_ = 0;
    local_5e8._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_5e8._8_4_ = 0;
    local_5e8._12_4_ = 0;
    local_5e8[0x1c] = 0x25;
    p_Stack_5c8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_718 = (PRTL_CRITICAL_SECTION_DEBUG)param_3->CriticalSection;
    cVar30 = FUN_1490923fa();
    if (cVar30 != '\0') {
      local_6e8 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1 + 0x70);
      local_710 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1 + 0x98);
      local_6b8 = (longlong *)(param_1 + 0x168);
      do {
        uVar47 = local_5e8._0_8_;
        lVar84 = (longlong)(int)local_5e8._8_4_;
        if ((((0 < lVar84) && (local_5e8._24_4_ != 0)) && (0 < (int)local_5e8._16_4_)) &&
           (0 < (int)local_5e8._20_4_)) {
          local_6f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_6f8._4_4_,local_5e8._24_4_);
          local_708 = p_Stack_5c8;
          local_6d8 = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
          uStack_4a8 = 0;
          local_4a0 = 0;
          local_4d8.EntryCount = 0;
          local_4d8.ContentionCount = 0;
          local_4d8.Flags = 0;
          local_4d8.CreatorBackTraceIndexHigh = 0;
          local_4d8.SpareWORD = 0;
          local_4d8.ProcessLocksList = (LIST_ENTRY)ZEXT816(0);
          local_4d8._0_16_ = ZEXT816(0);
          iVar71 = -1;
          lVar51 = 0;
          bVar27 = 0;
          do {
            if (iVar71 == -1) {
              iVar71 = *(int *)((longlong)(uVar47 + 8) + lVar51 + 4);
              bVar27 = *(byte *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar51) ^ 1;
            }
            lVar65 = *(longlong *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar51);
            if ((lVar65 != 0) && (uVar55 = FUN_149092960(lVar65), (uVar55 & 1) != 0)) {
              local_4f8._16_8_ = (_LIST_ENTRY *)0x0;
              local_4f8._8_4_ = 0x4109;
              local_4f8._4_4_ = *(int *)(lVar65 + 0x98);
              local_4f8._0_4_ = 8;
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                          (ulonglong)(uint)(*(int *)(lVar65 + 0x98) << 3);
              uStack_7f0 = (_LIST_ENTRY *)((ulonglong)uStack_7f0 & 0xffffffffffffff00);
              uVar49 = FUN_1400489e9(local_720,L"RootUVBuffer",local_508 + 0x10,
                                     *(undefined8 *)
                                      (*(longlong *)
                                        ((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar51) +
                                      0x90));
              lVar65 = (longlong)*(int *)((longlong)(uVar47 + 8) + lVar51) * 0x10;
              iVar76 = *(int *)((longlong)&local_4d8 + lVar65 + 8);
              *(uint *)((longlong)&local_4d8 + lVar65 + 8) = iVar76 + 1U;
              if (*(uint *)((longlong)&local_4d8 + lVar65 + 0xc) < iVar76 + 1U) {
                FUN_1471a5e98((longlong *)((longlong)&local_4d8 + lVar65),iVar76);
              }
              *(undefined8 *)(*(longlong *)((longlong)&local_4d8 + lVar65) + (longlong)iVar76 * 8) =
                   uVar49;
            }
            p_Var40 = local_708;
            lVar51 = lVar51 + 0x18;
          } while (lVar84 * 0x18 != lVar51);
          uVar36 = 0x25;
          if ((bVar27 & 1) != 0) {
            uVar36 = 2;
          }
          if ((local_708 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) &&
             (lVar84 = FUN_1447b4020(local_708), lVar84 != 0)) {
            lVar84 = FUN_1447b4020(p_Var40);
            if ((*(longlong *)(lVar84 + 0x10) != 0) &&
               (*(char *)(*(longlong *)(lVar84 + 0x10) + 0x52) == '\0')) {
              if (((((uint)local_4d8.CriticalSection != 0) ||
                   ((int)local_4d8.ProcessLocksList.Blink != 0)) || (local_4d8.Flags != 0)) ||
                 ((int)local_4a0 != 0)) {
                local_578 = (undefined1  [8])0x0;
                if ((uint)local_4d8.CriticalSection != 0) {
                  local_7d8 = (_RTL_CRITICAL_SECTION *)local_578;
                  puStack_7e0 = (undefined1 *)&local_4d8;
                  uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,iVar71);
                  local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                              CONCAT44(local_7f8._4_4_,(undefined4)local_6f8);
                  local_7e8 = local_7e8 & 0xffffffff00000000;
                  FUN_14444408b(local_720,local_718,uVar36,local_6d8);
                }
                if ((int)local_4d8.ProcessLocksList.Blink != 0) {
                  local_7d8 = (_RTL_CRITICAL_SECTION *)local_578;
                  puStack_7e0 = (undefined1 *)((longlong)&local_4d8 + 0x10);
                  uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,iVar71);
                  local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                              CONCAT44(local_7f8._4_4_,(undefined4)local_6f8);
                  local_7e8 = CONCAT44(local_7e8._4_4_,1);
                  FUN_14444408b(local_720,local_718,uVar36,local_6d8);
                }
                if (local_4d8.Flags != 0) {
                  local_7d8 = (_RTL_CRITICAL_SECTION *)local_578;
                  puStack_7e0 = (undefined1 *)((longlong)&local_4d8 + 0x20);
                  uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,iVar71);
                  local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                              CONCAT44(local_7f8._4_4_,(undefined4)local_6f8);
                  local_7e8 = CONCAT44(local_7e8._4_4_,2);
                  FUN_14444408b(local_720,local_718,uVar36,local_6d8);
                }
                if ((int)local_4a0 != 0) {
                  local_7d8 = (_RTL_CRITICAL_SECTION *)local_578;
                  puStack_7e0 = (undefined1 *)&uStack_4a8;
                  uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,iVar71);
                  local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                              CONCAT44(local_7f8._4_4_,(undefined4)local_6f8);
                  local_7e8 = CONCAT44(local_7e8._4_4_,3);
                  FUN_14444408b(local_720,local_718,uVar36,local_6d8);
                }
                lVar84 = local_720;
                FUN_14444475f(local_720,local_718,local_578);
                auVar53 = local_578;
                p_Var40 = local_6e8;
                puVar60 = (undefined8 *)(*(longlong *)(lVar84 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar41 = puVar60 + 6;
                if (*(undefined8 **)(lVar84 + 0x78) < puVar41) {
                  FUN_140023dd8(local_6e8,0x40);
                  puVar60 = (undefined8 *)(*(ulonglong *)p_Var40 + 0xf & 0xfffffffffffffff0);
                  puVar41 = puVar60 + 6;
                }
                *(undefined8 **)(local_720 + 0x70) = puVar41;
                *puVar60 = &PTR_FUN_14a2d3740;
                puVar60[2] = 0;
                puVar60[3] = 0;
                *(undefined4 *)(puVar60 + 4) = 0;
                iVar71 = *(int *)(local_720 + 0xa0);
                *(uint *)(local_720 + 0xa0) = iVar71 + 1U;
                if (*(uint *)(local_720 + 0xa4) < iVar71 + 1U) {
                  FUN_1448cfae8(local_710,iVar71);
                }
                *(undefined8 **)(*(ulonglong *)local_710 + (longlong)iVar71 * 8) = puVar60;
                if (auVar53 == (undefined1  [8])0x0) {
                  uVar47 = 0;
                }
                else {
                  uVar47 = *(undefined8 *)
                            ((longlong)
                             &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x90))->
                              ProcessLocksList).Blink + 4);
                }
                puVar60[2] = auVar53;
                puVar60[3] = uVar47;
                *(undefined4 *)(puVar60 + 4) = 0x80;
                p_Var61 = (_LIST_ENTRY *)FUN_14600fd94();
                lVar84 = local_720;
                FUN_140069376(local_720);
                p_Var40 = local_6e8;
                puVar91 = (undefined8 *)(*(longlong *)(lVar84 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar41 = puVar91 + 0x3a;
                if (*(undefined8 **)(lVar84 + 0x78) < puVar41) {
                  FUN_140023dd8(local_6e8,0x1d8);
                  puVar91 = (undefined8 *)(*(ulonglong *)p_Var40 + 7 & 0xfffffffffffffff8);
                  puVar41 = puVar91 + 0x3a;
                }
                local_4f8._0_8_ = puVar60 + 2;
                *(undefined8 **)local_6e8 = puVar41;
                local_4f8._8_8_ = p_Var61[4].Blink;
                if ((_RTL_CRITICAL_SECTION *)local_4f8._8_8_ != (_RTL_CRITICAL_SECTION *)0x0) {
                  LOCK();
                  ((_RTL_CRITICAL_SECTION *)local_4f8._8_8_)->LockCount =
                       ((_RTL_CRITICAL_SECTION *)local_4f8._8_8_)->LockCount + 1;
                  UNLOCK();
                }
                local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00)
                ;
                local_4f8._16_8_ = p_Var61;
                FUN_140068f1a(puVar91,local_508,local_508 + 0x10,0x18);
                *puVar91 = &PTR_FUN_14baa9cf0;
                puVar91[0x37] = auVar53;
                *(undefined4 *)(puVar91 + 0x38) = (undefined4)local_6f8;
                puVar91[0x39] = local_708;
                iVar71 = *(int *)(local_720 + 0x170);
                *(uint *)(local_720 + 0x170) = iVar71 + 1U;
                if (*(uint *)(local_720 + 0x174) < iVar71 + 1U) {
                  FUN_14470e57a(local_6b8,iVar71);
                }
                *(undefined8 **)(*(longlong *)(local_720 + 0x168) + (longlong)iVar71 * 8) = puVar91;
                *(int *)((longlong)puVar91 + 0x2c) = *(int *)(local_720 + 0x170) + -1;
                FUN_140069100(local_720,puVar91);
              }
            }
          }
          lVar84 = 0x40;
          do {
            if (*(longlong *)(local_4f8 + lVar84 + 0x10) != 0) {
              FUN_1400020a8();
            }
            uVar47 = local_5e8._0_8_;
            lVar84 = lVar84 + -0x10;
          } while (lVar84 != 0);
          lVar84 = (longlong)(int)local_5e8._8_4_;
          if (lVar84 != 0) {
            lVar51 = 0;
            do {
              lVar65 = *(longlong *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar51);
              if (lVar65 != 0) {
                FUN_149083f94(lVar65 + 0x60);
                FUN_149084048(lVar65);
                FUN_1400020a8(lVar65);
                *(undefined8 *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar51) = 0;
              }
              lVar51 = lVar51 + 0x18;
            } while (lVar84 * 0x18 != lVar51);
          }
        }
        cVar30 = FUN_1490923fa(local_5e8);
      } while (cVar30 != '\0');
    }
LAB_14442ec92:
    auVar53 = (undefined1  [8])local_5e8._0_8_;
    break;
  case 1:
switchD_14442c102_caseD_1:
    if (DAT_14c7649e8 == 0) {
      local_5f8 = (void *)0x0;
      local_5f0._0_2_ = param_3[3].Type;
      local_5f0._2_2_ = param_3[3].CreatorBackTraceIndex;
      lVar84 = (longlong)local_5f0;
      pvVar15 = *(void **)&param_3[2].Flags;
      if (lVar84 == 0) {
        local_5ec = 0;
      }
      else {
        FUN_1400f69e4(&local_5f8,local_5f0,0);
        memcpy(local_5f8,pvVar15,lVar84 << 3);
        p_Var40 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_3 + 2);
      }
      FUN_144434585(p_Var40);
      p_Var40 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_3 + 2);
    }
    iVar12._0_2_ = param_3[3].Type;
    iVar12._2_2_ = param_3[3].CreatorBackTraceIndex;
    if ((longlong)iVar12 < 1) {
      local_6fa = 0x9b;
      if (iVar12 != 0) goto LAB_14442f2ff;
      bVar27 = 0;
    }
    else {
      local_6fa = *(undefined2 *)
                   (&DAT_14ca85070 +
                   (longlong)*(int *)(**(longlong **)&param_3[2].Flags + 0x3090) * 2);
LAB_14442f2ff:
      lVar84 = 0;
      do {
        bVar27 = (*(byte *)(*(longlong *)
                             (*(longlong *)((longlong)*(longlong **)&param_3[2].Flags + lVar84) + 8)
                           + 0x60) & 2) >> 1;
        if (bVar27 != 0) break;
        bVar56 = (longlong)iVar12 * 8 + -8 != lVar84;
        lVar84 = lVar84 + 8;
      } while (bVar56);
    }
    local_630._0_4_ = param_3[2].EntryCount;
    local_630._4_4_ = param_3[2].ContentionCount;
    local_578 = (undefined1  [8])0x0;
    uStack_570 = (_RTL_CRITICAL_SECTION *)0x0;
    iVar71 = *(int *)&p_Var40->CriticalSection;
    local_718 = param_3;
    if (iVar71 < 0) {
LAB_144434052:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar71);
    }
    if (iVar71 != 0) {
      FUN_1444378c2(local_578);
    }
    local_508._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_508._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
    iVar71 = *(int *)&p_Var40->CriticalSection;
    if (iVar71 < 0) goto LAB_144434052;
    if ((int)uStack_570._4_4_ < iVar71) {
      FUN_1444378c2(local_578);
    }
    local_530._24_8_ = (longlong *)0x0;
    local_530._32_8_ = 0;
    iVar71 = *(int *)&p_Var40->CriticalSection;
    if (iVar71 < 0) goto LAB_144434052;
    if (iVar71 != 0) {
      FUN_1444379a4((longlong)local_530 + 0x18);
      if ((longlong)*(int *)&p_Var40->CriticalSection != 0) {
        plVar86 = *(longlong **)p_Var40;
        plVar50 = plVar86 + *(int *)&p_Var40->CriticalSection;
        local_648 = plVar50;
        do {
          uVar47 = local_530._32_8_;
          plVar68 = (longlong *)*plVar86;
          lVar84 = (longlong)(int)local_530._32_4_;
          uVar33 = local_530._32_4_ + 1;
          local_530._32_4_ = uVar33;
          if ((uint)local_530._36_4_ < uVar33) {
            FUN_144437ae8((longlong)local_530 + 0x18,uVar47 & 0xffffffff);
          }
          uVar47 = local_530._24_8_;
          local_6a0 = (longlong *)(local_530._24_8_ + lVar84 * 0x1e * 8);
          FUN_144437a7c();
          *(longlong **)(uVar47 + lVar84 * 0x1e * 8) = plVar68;
          lVar51 = plVar68[0x74];
          *(longlong *)(uVar47 + (lVar84 * 0x1eU + 1) * 8) = lVar51;
          *(undefined4 *)(uVar47 + ((lVar84 * 0xf + 0xe) * 2U + 1) * 8) =
               *(undefined4 *)(lVar51 + 0x47c);
          *(int *)(uVar47 + (lVar84 * 0xf + 0xe) * 0x10 + 4) =
               (int)*(float *)(plVar68[0x74] + 0x478);
          iVar71 = DAT_14cbf9358;
          if (DAT_14cbf9358 < 1) {
            iVar71 = 0;
          }
          local_668 = (ulonglong)*(uint *)(plVar68[0x74] + 0x418);
          local_710 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_710._4_4_,(float)iVar71);
          fVar93 = 0.0;
          cVar30 = FUN_14716db6c();
          fVar95 = 0.0;
          if (cVar30 == '\0') {
            fVar101 = *(float *)(plVar68 + 0x2b);
            fVar95 = -1.0;
            if ((0.0 <= fVar101) && (fVar95 = fVar101, fVar101 <= local_710._0_4_)) {
              fVar95 = local_710._0_4_;
            }
          }
          puVar41 = (undefined8 *)(**(code **)(*plVar68 + 8))(plVar68);
          dVar6 = (double)puVar41[6];
          uVar36 = SUB84(dVar6,0);
          uVar94 = (undefined4)((ulonglong)dVar6 >> 0x20);
          p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)*puVar41;
          uStack_6f0 = 0;
          p_Var42 = (_RTL_CRITICAL_SECTION *)puVar41[1];
          uStack_6d0 = 0;
          p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)puVar41[2];
          uStack_6e0 = 0;
          iVar13._0_2_ = local_718[3].Type;
          iVar13._2_2_ = local_718[3].CreatorBackTraceIndex;
          lVar84 = plVar68[0x74];
          fVar101 = 0.0;
          fVar107 = 0.0;
          fVar106 = 0.0;
          fVar104 = -1.0;
          local_6f8 = p_Var40;
          local_6e8 = p_Var75;
          local_6d8 = p_Var42;
          if ((longlong)iVar13 != 0) {
            local_628 = ZEXT416((uint)fVar95);
            plVar50 = *(longlong **)&local_718[2].Flags;
            local_6b8 = plVar50 + iVar13;
            local_6c0 = (_RTL_CRITICAL_SECTION *)CONCAT44(local_6c0._4_4_,(float)dVar6);
            local_6f8._0_4_ = SUB84(p_Var40,0);
            local_6f8._4_4_ = (undefined4)((ulonglong)p_Var40 >> 0x20);
            uStack_690 = (undefined4)local_6f8;
            uStack_68c = local_6f8._4_4_;
            local_6d8._0_4_ = SUB84(p_Var42,0);
            local_6d8._4_4_ = (undefined4)((ulonglong)p_Var42 >> 0x20);
            uStack_670 = (undefined4)local_6d8;
            uStack_66c = local_6d8._4_4_;
            local_6e8._0_4_ = (LONG)p_Var75;
            local_6e8._4_4_ = (undefined4)((ulonglong)p_Var75 >> 0x20);
            local_658 = (LONG)local_6e8;
            uStack_654 = local_6e8._4_4_;
            dVar7 = (double)plVar68[0x70];
            uVar36 = SUB84(dVar7,0);
            uVar94 = (undefined4)((ulonglong)dVar7 >> 0x20);
            dVar8 = (double)plVar68[0x71];
            if (dVar7 <= dVar8) {
              uVar36 = SUB84(dVar8,0);
              uVar94 = (undefined4)((ulonglong)dVar8 >> 0x20);
            }
            dVar7 = (double)plVar68[0x72];
            if ((double)CONCAT44(uVar94,uVar36) <= dVar7) {
              uVar36 = SUB84(dVar7,0);
              uVar94 = (undefined4)((ulonglong)dVar7 >> 0x20);
            }
            local_6a8 = (double)CONCAT44(uVar94,uVar36);
            lVar51 = plVar68[8];
            uVar33 = *(uint *)(lVar84 + 0x428);
            local_67c = (float)(uVar33 - 1);
            fVar104 = -1.0;
            local_6b0 = (longlong *)CONCAT44(local_6b0._4_4_,*(float *)((longlong)plVar68 + 0xe4));
            fVar93 = *(float *)((longlong)plVar68 + 0xe4);
            local_698 = p_Var40;
            local_688 = dVar6;
            local_678 = p_Var42;
            local_660 = lVar84;
            LStack_650 = (LONG)local_6e8;
            uStack_64c = local_6e8._4_4_;
            local_640 = plVar68;
            local_638 = plVar86;
            do {
              local_6e8 = p_Var75;
              p_Var42 = local_6d8;
              p_Var75 = local_6e8;
              p_Var40 = local_6f8;
              fVar95 = 0.0;
              fVar96 = 0.0;
              fVar101 = 0.0;
              if (lVar51 != 0) {
                lVar84 = *(longlong *)(lVar51 + 0x130);
                fVar101 = (float)((*(double *)(lVar84 + 0x50) - *(double *)(lVar84 + 0x38)) * 0.5);
                fVar96 = (float)((*(double *)(lVar84 + 0x48) - *(double *)(lVar84 + 0x30)) * 0.5);
                fVar95 = (float)((*(double *)(lVar84 + 0x40) - *(double *)(lVar84 + 0x28)) * 0.5);
              }
              if (fVar95 <= fVar96) {
                fVar95 = fVar96;
              }
              if (fVar95 <= fVar101) {
                fVar95 = fVar101;
              }
              lVar84 = *plVar50;
              local_4d8._0_8_ = local_6f8;
              local_4d8.CriticalSection = local_6d8;
              local_4d8.ProcessLocksList.Flink = (_LIST_ENTRY *)local_6e8;
              local_4d8.ProcessLocksList.Blink = (_LIST_ENTRY *)&DAT_3ff0000000000000;
              fVar95 = (float)FUN_140196400(&local_4d8,(float)((double)fVar95 * local_6a8),lVar84);
              local_4d8.CriticalSection = p_Var42;
              local_4d8._0_8_ = p_Var40;
              local_4d8.ProcessLocksList.Blink = (_LIST_ENTRY *)&DAT_3ff0000000000000;
              local_4d8.ProcessLocksList.Flink = (_LIST_ENTRY *)p_Var75;
              fVar101 = (float)FUN_140196400(&local_4d8,(uint)local_6c0,lVar84);
              if (1.0 <= fVar101) {
                fVar101 = 1.0;
              }
              if (fVar101 <= 0.0) {
                fVar101 = 0.0;
              }
              fVar96 = 0.0;
              if (1 < uVar33) {
                pfVar18 = *(float **)(local_660 + 0x420);
                fVar96 = 0.0;
                if (fVar101 < *pfVar18) {
                  uVar34 = 1;
                  do {
                    fVar97 = pfVar18[(int)uVar34];
                    if (fVar97 <= fVar101) {
                      fVar96 = 0.0;
                      if (pfVar18[(int)(uVar34 - 1)] - fVar97 != 0.0) {
                        fVar96 = ABS((fVar101 - fVar97) / (pfVar18[(int)(uVar34 - 1)] - fVar97));
                        if (1.0 <= fVar96) {
                          fVar96 = 1.0;
                        }
                        if (fVar96 <= 0.0) {
                          fVar96 = 0.0;
                        }
                      }
                      fVar96 = (1.0 - fVar96) + (float)(uVar34 - 1);
                      break;
                    }
                    if (uVar34 - uVar33 == -1) {
                      fVar96 = (float)uVar34;
                    }
                    uVar34 = uVar34 + 1;
                  } while (uVar34 != uVar33);
                }
              }
              local_708 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_708._4_4_,fVar107);
              if ((fVar93 != 0.0) || (NAN(fVar93))) {
                fVar97 = fVar96 + fVar93;
                if (local_67c <= fVar96 + fVar93) {
                  fVar97 = local_67c;
                }
                fVar96 = fVar97;
                if (fVar97 <= 0.0) {
                  fVar96 = 0.0;
                }
              }
              p_Var40 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar84 + 0x4e8);
              local_5e8._8_4_ = (undefined4)*(undefined8 *)(lVar84 + 0x4f0);
              uVar36 = local_5e8._8_4_;
              local_5e8._12_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar84 + 0x4f0) >> 0x20);
              uVar94 = local_5e8._12_4_;
              dVar8 = *(double *)(lVar84 + 0x9f8) * (double)CONCAT44(uStack_64c,LStack_650) +
                      *(double *)(lVar84 + 0x9d8) * (double)CONCAT44(uStack_66c,uStack_670) +
                      *(double *)(lVar84 + 0x9b8) * (double)CONCAT44(uStack_68c,uStack_690) +
                      *(double *)(lVar84 + 0xa18);
              dVar6 = *(double *)(lVar84 + 0xa00) * (double)CONCAT44(uStack_654,local_658) +
                      *(double *)(lVar84 + 0x9e0) * (double)local_678 +
                      *(double *)(lVar84 + 0x9c0) * (double)local_698 + *(double *)(lVar84 + 0xa20);
              dVar7 = *(double *)(lVar84 + 0xa08) * (double)CONCAT44(uStack_64c,LStack_650) +
                      *(double *)(lVar84 + 0x9e8) * (double)CONCAT44(uStack_66c,uStack_670) +
                      *(double *)(lVar84 + 0x9c8) * (double)CONCAT44(uStack_68c,uStack_690) +
                      *(double *)(lVar84 + 0xa28);
              local_4d8.CriticalSection._0_4_ = SUB84(dVar8,0);
              local_4d8._0_8_ =
                   *(double *)(lVar84 + 0x9f0) * (double)CONCAT44(uStack_654,local_658) +
                   *(double *)(lVar84 + 0x9d0) * (double)local_678 +
                   *(double *)(lVar84 + 0x9b0) * (double)local_698 + *(double *)(lVar84 + 0xa10);
              local_4d8.CriticalSection._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
              local_4d8.ProcessLocksList.Blink._0_4_ = SUB84(dVar7,0);
              local_4d8.ProcessLocksList.Flink = (_LIST_ENTRY *)dVar6;
              local_4d8.ProcessLocksList.Blink._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
              p_Var61 = (_LIST_ENTRY *)(double)(*(float *)(lVar84 + 0x2170) + 1e-08);
              if (dVar6 <= (double)p_Var61) {
                local_4d8.ProcessLocksList.Flink = p_Var61;
              }
              if (1.0 <= fVar95) {
                fVar95 = 1.0;
              }
              if (fVar95 <= 0.0) {
                fVar95 = 0.0;
              }
              if (fVar106 <= fVar95) {
                fVar106 = fVar95;
              }
              fVar93 = local_710._0_4_;
              if (local_710._0_4_ <= fVar96) {
                fVar93 = fVar96;
              }
              if (fVar107 <= fVar101) {
                fVar107 = fVar101;
              }
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
              local_5e8._0_8_ = p_Var40;
              FUN_1401ca69e(&local_4d8,local_5e8,lVar84 + 0x830);
              fVar95 = fVar104;
              if (fVar93 <= fVar104) {
                fVar95 = fVar93;
              }
              fVar104 = (float)(-(uint)(fVar104 < 0.0) & (uint)fVar93 |
                               ~-(uint)(fVar104 < 0.0) & (uint)fVar95);
              plVar50 = plVar50 + 1;
              unaff_XMM11_Dc = 0;
              unaff_XMM11_Dd = 0;
              fVar93 = local_6b0._0_4_;
              p_Var75 = local_6e8;
            } while (plVar50 != local_6b8);
            fVar93 = (float)(int)((ulonglong)
                                  (longlong)
                                  ROUND((double)local_4f8._0_8_ + (double)local_4f8._0_8_ + -0.5) >>
                                 1);
            fVar101 = (float)(int)((ulonglong)
                                   (longlong)
                                   ROUND((double)local_4f8._8_8_ + (double)local_4f8._8_8_ + -0.5)
                                  >> 1);
            if ((float)(int)uVar36 <= fVar93) {
              fVar93 = (float)(int)uVar36;
            }
            if (fVar93 <= (float)(int)p_Var40) {
              fVar93 = (float)(int)p_Var40;
            }
            if ((float)(int)uVar94 <= fVar101) {
              fVar101 = (float)(int)uVar94;
            }
            fVar95 = (float)(int)((ulonglong)p_Var40 >> 0x20);
            if (fVar101 <= fVar95) {
              fVar101 = fVar95;
            }
            uVar36 = SUB84(local_688,0);
            uVar94 = (undefined4)((ulonglong)local_688 >> 0x20);
            lVar84 = local_660;
            plVar86 = local_638;
            plVar50 = local_648;
            plVar68 = local_640;
            fVar95 = (float)local_628._0_4_;
          }
          uVar58 = *(undefined4 *)(lVar84 + 0x3f8);
          uVar33 = *(uint *)(lVar84 + 0x3fc);
          if ((longlong)*(int *)(lVar84 + 0x458) == 0) {
            iVar71 = -1;
            uVar34 = 0xffffffff;
          }
          else {
            lVar51 = (longlong)*(int *)(lVar84 + 0x458) << 2;
            uVar34 = 0xffffffff;
            uVar54 = 0;
            uVar55 = 0xffffffff;
            uVar73 = 0xffffffff;
            do {
              if (uVar34 == 0xffffffff) {
                uVar73 = uVar54 & 0xffffffff;
              }
              iVar71 = (int)uVar55;
              if (*(int *)(*(longlong *)(lVar84 + 0x450) + uVar54 * 4) == 0) {
                uVar55 = uVar54 & 0xffffffff;
                iVar71 = (int)uVar54;
              }
              else {
                uVar73 = (ulonglong)uVar34;
              }
              uVar54 = uVar54 + 1;
              uVar34 = (uint)uVar73;
              lVar51 = lVar51 + -4;
            } while (lVar51 != 0);
          }
          fVar96 = (float)((int)local_668 - 1);
          fVar95 = (float)(~-(uint)(fVar95 < 0.0) & (uint)fVar95 |
                          -(uint)(fVar95 < 0.0) & (uint)fVar104);
          if (fVar96 <= fVar95) {
            fVar95 = fVar96;
          }
          auVar102 = ZEXT416((uint)fVar95);
          if (fVar95 <= 0.0) {
            auVar102 = ZEXT1216((undefined1  [12])0x0) << 0x20;
          }
          fVar95 = auVar102._0_4_;
          lVar51 = plVar68[0xb];
          if (lVar51 == 0) {
            uVar103 = 0x3f800000;
            uVar92 = 0x3f800000;
          }
          else {
            lVar65 = plVar68[8];
            if (lVar65 == 0) {
              uVar103 = 0x3f800000;
              uVar92 = 0x3f800000;
            }
            else {
              local_688 = (double)CONCAT44(uVar94,uVar36);
              uVar105 = auVar102._12_4_;
              if ((iVar71 == -1 || iVar71 < (int)fVar95) ||
                 ((*(char *)(lVar84 + 0x485) == '\0' && (DAT_14cbf93f0 < 1)))) {
                uVar33 = FUN_149099418(*(undefined8 *)(lVar51 + 0xb0),fVar95);
                uVar55 = (ulonglong)uVar33;
                unaff_XMM11_Dc = auVar102._8_4_;
                fVar96 = fVar95;
                if (uVar33 != 0) goto LAB_14443005d;
                lVar84 = *(longlong *)(lVar65 + 0x130);
                uVar55 = 0;
                uVar58 = 0;
              }
              else {
                fVar96 = DAT_14c7649fc;
                if (1.0 <= DAT_14c7649fc) {
                  fVar96 = 1.0;
                }
                if (fVar96 <= -1.0) {
                  fVar96 = -1.0;
                }
                fVar96 = fVar96 + *(float *)(lVar84 + 0x488);
                if (1.0 <= fVar96) {
                  fVar96 = 1.0;
                }
                if (fVar96 <= -1.0) {
                  fVar96 = -1.0;
                }
                fVar96 = fVar96 + fVar106;
                if (1.0 <= fVar96) {
                  fVar96 = 1.0;
                }
                if (fVar96 <= 0.0) {
                  fVar96 = 0.0;
                }
                uVar73 = (ulonglong)*(uint *)(lVar84 + 0x400);
                if (*(uint *)(lVar84 + 0x400) < (uint)(longlong)(fVar96 * (float)uVar33)) {
                  uVar73 = (longlong)(fVar96 * (float)uVar33) & 0xffffffff;
                }
                uVar55 = (longlong)(int)uVar33;
                if ((longlong)uVar73 < (longlong)(int)uVar33) {
                  uVar55 = uVar73;
                }
                if ((longlong)uVar55 < 2) {
                  uVar55 = 1;
                }
                fVar96 = (float)(int)uVar34;
                uVar105 = unaff_XMM11_Dd;
LAB_14443005d:
                lVar84 = *(longlong *)(lVar65 + 0x130);
                uVar58 = *(undefined4 *)
                          (*(longlong *)(lVar84 + 0x90) + (longlong)((int)uVar55 + -1) * 4);
              }
              uVar33 = (uint)uVar55;
              uVar103 = FUN_149098bd0((float)*(uint *)(lVar84 + 8),
                                      (float)(uVar55 & 0xffffffff) / (float)*(uint *)(lVar84 + 8));
              uVar92 = FUN_144437bf0(lVar51,fVar95);
              auVar102._4_4_ = 0;
              auVar102._0_4_ = fVar96;
              auVar102._8_4_ = unaff_XMM11_Dc;
              auVar102._12_4_ = uVar105;
              uVar36 = SUB84(local_688,0);
              uVar94 = (undefined4)((ulonglong)local_688 >> 0x20);
              unaff_XMM11_Dd = uVar105;
            }
          }
          plVar59 = local_6a0;
          *(int *)(local_6a0 + 2) = auVar102._0_4_;
          *(float *)((longlong)local_6a0 + 0x14) = local_710._0_4_;
          *(int *)(local_6a0 + 3) = (int)local_668;
          *(float *)((longlong)local_6a0 + 0x1c) = fVar104;
          *(float *)(local_6a0 + 4) = fVar107;
          *(undefined4 *)((longlong)local_6a0 + 0x24) = uVar58;
          *(uint *)(local_6a0 + 5) = uVar33;
          *(float *)((longlong)local_6a0 + 0x2c) = fVar106;
          *(float *)(local_6a0 + 6) = fVar93;
          *(float *)((longlong)local_6a0 + 0x34) = fVar101;
          local_6a0[7] = (longlong)local_6f8;
          local_6a0[8] = (longlong)local_6d8;
          *(LONG *)(local_6a0 + 9) = (LONG)local_6e8;
          *(undefined4 *)((longlong)local_6a0 + 0x4c) = local_6e8._4_4_;
          local_6a0[10] = CONCAT44(uVar94,uVar36);
          local_6a0[0xb] = CONCAT44(uVar94,uVar36);
          local_6a0[0xc] = CONCAT44(uVar94,uVar36);
          local_6a0[0xd] = CONCAT44(uVar94,uVar36);
          *(undefined4 *)(local_6a0 + 0xe) = uVar103;
          *(undefined4 *)((longlong)local_6a0 + 0x74) = uVar92;
          lVar84 = FUN_144437c88(local_630,plVar68);
          uVar36 = 0xffffffff;
          if (lVar84 != 0) {
            if (*(char *)((longlong)plVar68 + 0x164) == '\x01') {
              if (*(longlong *)(lVar84 + 8) != 0) {
                FUN_1448ac920(&local_4d8,*(longlong *)(lVar84 + 8) + 0x100);
                plVar67 = (longlong *)&local_4d8;
                plVar74 = plVar59 + 0x10;
                for (lVar84 = 0xc; lVar84 != 0; lVar84 = lVar84 + -1) {
                  *plVar74 = *plVar67;
                  plVar67 = plVar67 + 1;
                  plVar74 = plVar74 + 1;
                }
                uVar36 = 0;
              }
            }
            else if ((*(char *)((longlong)plVar68 + 0x164) == '\0') &&
                    (lVar84 = *(longlong *)(lVar84 + 8), lVar84 != 0)) {
              if (*(longlong **)(lVar84 + 0x2a0) != (longlong *)0x0) {
                uVar36 = (**(code **)(**(longlong **)(lVar84 + 0x2a0) + 0x90))();
              }
              FUN_1448ac920(&local_4d8,lVar84 + 0x100);
              plVar67 = (longlong *)&local_4d8;
              plVar74 = plVar59 + 0x10;
              for (lVar84 = 0xc; plVar59 = local_6a0, lVar84 != 0; lVar84 = lVar84 + -1) {
                *plVar74 = *plVar67;
                plVar67 = plVar67 + 1;
                plVar74 = plVar74 + 1;
              }
            }
          }
          *(undefined4 *)(plVar59 + 0x1c) = uVar36;
          iVar76 = FUN_14442bf1a(plVar68,(int)*(float *)(plVar59 + 2),local_6fa);
          p_Var42 = uStack_570;
          uVar33 = (uint)*(float *)(plVar59 + 2);
          iVar71 = 0;
          if ((-1 < (int)uVar33) && (iVar71 = 0, (int)uVar33 < *(int *)(plVar68[0x74] + 0x470))) {
            iVar71 = *(int *)(*(longlong *)(plVar68[0x74] + 0x468) + (ulonglong)uVar33 * 4);
          }
          if (iVar76 == 0) {
            local_708 = (PRTL_CRITICAL_SECTION_DEBUG)(local_6a0 + 2);
            lVar84 = (longlong)(int)uStack_570;
            if (lVar84 != 0) {
              lVar51 = lVar84 * 0xa0;
              auVar53 = local_578;
              do {
                if ((*(int *)&(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x60))->
                              ProcessLocksList).Flink == *(int *)((longlong)plVar68 + 0x14c)) &&
                   (*(int *)((longlong)
                             &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x60))->
                              ProcessLocksList).Flink + 4) == (int)plVar68[0x26])) {
                  if (auVar53 != (undefined1  [8])0x0) {
                    if ((uint)*(ULONG_PTR *)&((PRTL_CRITICAL_SECTION_DEBUG)auVar53)->EntryCount <
                        (uint)local_6a0[5]) {
                      p_Var75 = local_708;
                      p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)auVar53;
                      for (lVar84 = 0xd;
                          p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var40->CriticalSection,
                          lVar84 != 0; lVar84 = lVar84 + -1) {
                        *(_RTL_CRITICAL_SECTION **)p_Var40 = *(_RTL_CRITICAL_SECTION **)p_Var75;
                        p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var75->CriticalSection;
                      }
                    }
                    goto LAB_14442fdaf;
                  }
                  break;
                }
                auVar53 = (undefined1  [8])
                          &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x90))->
                           ProcessLocksList;
                lVar51 = lVar51 + -0xa0;
              } while (lVar51 != 0);
            }
            uVar33 = (int)uStack_570 + 1;
            uStack_570 = (_RTL_CRITICAL_SECTION *)CONCAT44(uStack_570._4_4_,uVar33);
            if (uStack_570._4_4_ < uVar33) {
              FUN_144437dba(local_578,(ulonglong)p_Var42 & 0xffffffff);
            }
            auVar25 = local_578;
            auVar53 = (undefined1  [8])((longlong)local_578 + lVar84 * 0xa0);
            FUN_144437d6f(auVar53);
            p_Var3 = (LPCRITICAL_SECTION)((longlong)auVar25 + lVar84 * 0xa0);
            *(undefined4 *)((longlong)(p_Var3 + 2) + 0x20) =
                 *(undefined4 *)((longlong)plVar68 + 0x14c);
            *(int *)((longlong)(p_Var3 + 2) + 0x24) = (int)plVar68[0x26];
            p_Var40 = local_708;
            p_Var20 = p_Var3;
            for (lVar84 = 0xd; lVar84 != 0; lVar84 = lVar84 + -1) {
              uVar55._0_2_ = p_Var40->Type;
              uVar55._2_2_ = p_Var40->CreatorBackTraceIndex;
              uVar55._4_4_ = *(undefined4 *)&p_Var40->field_0x4;
              p_Var20->LockCount = (int)uVar55;
              p_Var20->RecursionCount = (int)(uVar55 >> 0x20);
              p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var40->CriticalSection;
              p_Var20 = (LPCRITICAL_SECTION)&p_Var20->LockCount;
            }
            *(undefined4 *)((longlong)(p_Var3 + 3) + 4) = *(undefined4 *)(plVar68[0x74] + 0x3fc);
LAB_14442fdaf:
            uVar47 = local_508._8_8_;
            plVar59 = local_6a0;
            *(int *)auVar53 = *(int *)auVar53 + 1;
            lVar84._0_4_ = ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->EntryCount;
            lVar84._4_4_ = ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->
                           ContentionCount;
            if (lVar84 == 0) {
              lVar84 = plVar68[8];
              ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->EntryCount = (int)lVar84;
              ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->ContentionCount =
                   (int)((ulonglong)lVar84 >> 0x20);
            }
            lVar51._0_4_ = ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->Flags;
            lVar51._4_2_ = ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->
                           CreatorBackTraceIndexHigh;
            lVar51._6_2_ = ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->SpareWORD;
            if (lVar51 == 0) {
              lVar84 = plVar68[10];
              ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->Flags = (int)lVar84;
              ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->CreatorBackTraceIndexHigh
                   = (short)((ulonglong)lVar84 >> 0x20);
              ((_RTL_CRITICAL_SECTION_DEBUG *)((longlong)auVar53 + 0x60))->SpareWORD =
                   (short)((ulonglong)lVar84 >> 0x30);
            }
            if (*(HANDLE *)((longlong)auVar53 + 0x90) == (HANDLE)0x0) {
              *(HANDLE *)((longlong)auVar53 + 0x90) = (HANDLE)plVar68[0xb];
            }
            if ((((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x90))->CriticalSection ==
                 (_RTL_CRITICAL_SECTION *)0x0) && ((char)plVar68[0x10] == '\0')) {
              ((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x90))->CriticalSection =
                   (_RTL_CRITICAL_SECTION *)plVar68[0xf];
            }
            if (iVar71 == 2) {
              lVar84 = (longlong)(int)local_508._8_4_;
              if (lVar84 != 0) {
                lVar51 = lVar84 * 0x88;
                p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)local_508._0_8_;
                do {
                  if (((*(int *)&p_Var40[2].ProcessLocksList.Flink == *(int *)(*local_6a0 + 0x150))
                      && (*(int *)((longlong)&p_Var40[2].ProcessLocksList.Flink + 4) ==
                          *(int *)(*local_6a0 + 0x130))) &&
                     (*(int *)&p_Var40[2].ProcessLocksList.Blink == (int)local_6a0[0x1c])) {
                    if (p_Var40 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
                      if ((uint)*(ULONG_PTR *)&p_Var40->EntryCount < (uint)local_6a0[5]) {
                        p_Var63 = local_708;
                        p_Var75 = p_Var40;
                        for (lVar84 = 0xd;
                            p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var75->CriticalSection,
                            lVar84 != 0; lVar84 = lVar84 + -1) {
                          *(_RTL_CRITICAL_SECTION **)p_Var75 = *(_RTL_CRITICAL_SECTION **)p_Var63;
                          p_Var63 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var63->CriticalSection;
                        }
                      }
                      goto LAB_14442ff09;
                    }
                    break;
                  }
                  p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var40[2].Flags;
                  lVar51 = lVar51 + -0x88;
                } while (lVar51 != 0);
              }
              uVar33 = local_508._8_4_ + 1;
              local_508._8_4_ = uVar33;
              if ((uint)local_508._12_4_ < uVar33) {
                FUN_144437f02(local_508,uVar47 & 0xffffffff);
              }
              uVar47 = local_508._0_8_;
              p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(local_508._0_8_ + lVar84 * 0x88);
              FUN_144437ec3(p_Var40);
              pcVar2 = (code *)(uVar47 + lVar84 * 0x88);
              *(int *)(pcVar2 + 0x70) = (int)plVar68[0x2a];
              *(int *)(pcVar2 + 0x74) = (int)plVar68[0x26];
              p_Var75 = local_708;
              pcVar72 = pcVar2;
              for (lVar84 = 0xd; pcVar72 = pcVar72 + 8, lVar84 != 0; lVar84 = lVar84 + -1) {
                *(ulonglong *)pcVar72 = *(ulonglong *)p_Var75;
                p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var75->CriticalSection;
              }
              *(undefined4 *)(pcVar2 + 0x7c) = *(undefined4 *)(plVar68[0x74] + 0x3fc);
              *(int *)(pcVar2 + 0x78) = (int)plVar59[0x1c];
LAB_14442ff09:
              *(int *)p_Var40 = *(int *)p_Var40 + 1;
              lVar65._0_4_ = p_Var40[2].EntryCount;
              lVar65._4_4_ = p_Var40[2].ContentionCount;
              if (lVar65 == 0) {
                lVar84 = plVar68[0xd];
                p_Var40[2].EntryCount = (int)lVar84;
                p_Var40[2].ContentionCount = (int)((ulonglong)lVar84 >> 0x20);
              }
            }
          }
          plVar86 = plVar86 + 1;
        } while (plVar86 != plVar50);
      }
    }
    auVar53 = local_578;
    lVar84 = (longlong)(int)uStack_570;
    if (lVar84 != 0) {
      lVar51 = 0;
      do {
        auVar24 = (undefined1  [16])local_4d8._0_16_;
        uVar36 = *(undefined4 *)
                  ((longlong)&((LIST_ENTRY *)((longlong)auVar53 + 0x10))->Blink + lVar51 + 4);
        uVar94 = *(undefined4 *)((longlong)((longlong)auVar53 + 0x20) + lVar51);
        local_4d8._0_4_ = local_4d8._1_4_ << 8;
        local_4d8.CriticalSection = auVar24._8_8_;
        local_4d8._4_4_ =
             *(undefined4 *)
              ((longlong)
               &(((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x60))->ProcessLocksList).Blink
              + lVar51 + 4);
        lVar65 = *(longlong *)
                  ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x60))->EntryCount
                  + lVar51);
        if (lVar65 != 0) {
          uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,uVar36);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_7f8._4_4_,uVar94);
          local_7e8 = CONCAT71(local_7e8._1_7_,1);
          FUN_14908d67c(lVar65,local_720,0,&local_4d8);
        }
        lVar65 = *(longlong *)
                  ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x90))->Type +
                  lVar51);
        if (lVar65 != 0) {
          uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,uVar36);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_7f8._4_4_,uVar94);
          local_7e8 = CONCAT71(local_7e8._1_7_,1);
          FUN_14908d67c(lVar65,local_720,0,&local_4d8);
        }
        lVar65 = *(longlong *)
                  ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x60))->Flags +
                  lVar51);
        if (lVar65 != 0) {
          uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,uVar36);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_7f8._4_4_,uVar94);
          local_7e8 = CONCAT71(local_7e8._1_7_,1);
          FUN_14908d67c(lVar65,local_720,0,&local_4d8);
        }
        lVar65 = *(longlong *)
                  ((longlong)
                   &((PRTL_CRITICAL_SECTION_DEBUG)((longlong)auVar53 + 0x90))->CriticalSection +
                  lVar51);
        if (lVar65 != 0) {
          uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,uVar36);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_7f8._4_4_,uVar94);
          local_7e8 = CONCAT71(local_7e8._1_7_,1);
          FUN_14908d67c(lVar65,local_720,0,&local_4d8);
        }
        lVar51 = lVar51 + 0xa0;
      } while (lVar84 * 0xa0 != lVar51);
    }
    uVar47 = local_508._0_8_;
    lVar84 = (longlong)(int)local_508._8_4_;
    if (lVar84 != 0) {
      lVar51 = 0;
      do {
        auVar24 = (undefined1  [16])local_4d8._0_16_;
        local_4d8._0_4_ = local_4d8._1_4_ << 8;
        local_4d8.CriticalSection = auVar24._8_8_;
        local_4d8._4_4_ =
             *(undefined4 *)
              ((longlong)&(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x60))->ProcessLocksList).Blink +
              lVar51 + 4);
        lVar65 = *(longlong *)
                  ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x60))->EntryCount + lVar51);
        if (lVar65 != 0) {
          local_7e8 = CONCAT44(local_7e8._4_4_,
                               *(undefined4 *)
                                ((longlong)
                                 &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x60))->ProcessLocksList)
                                  .Blink + lVar51));
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                      CONCAT44(local_7f8._4_4_,
                               *(undefined4 *)
                                ((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Blink + lVar51 + 4));
          uStack_7f0 = (_LIST_ENTRY *)CONCAT71(uStack_7f0._1_7_,1);
          FUN_1490911aa(lVar65,local_720,&local_4d8,
                        *(undefined4 *)((longlong)(uVar47 + 0x20) + lVar51));
        }
        lVar51 = lVar51 + 0x88;
      } while (lVar84 * 0x88 != lVar51);
    }
    if ((longlong)(int)local_530._32_4_ != 0) {
      plVar86 = (longlong *)(local_530._24_8_ + (longlong)(int)local_530._32_4_ * 0x1e * 8);
      plVar50 = (longlong *)local_530._24_8_;
      do {
        lVar84 = *plVar50;
        *(undefined4 *)(lVar84 + 0x154) = *(undefined4 *)((longlong)plVar50 + 0x1c);
        *(int *)(*(longlong *)(lVar84 + 0x3a0) + 0x4ec) = (int)plVar50[4];
        *(undefined4 *)(*(longlong *)(lVar84 + 0x3a0) + 0x494) =
             *(undefined4 *)(*(longlong *)(lVar84 + 0x3a0) + 0x48c);
        *(undefined4 *)(*(longlong *)(lVar84 + 0x3a0) + 0x498) =
             *(undefined4 *)(*(longlong *)(lVar84 + 0x3a0) + 0x490);
        *(undefined4 *)(*(longlong *)(lVar84 + 0x3a0) + 0x48c) =
             *(undefined4 *)((longlong)plVar50 + 0x24);
        *(int *)(*(longlong *)(lVar84 + 0x3a0) + 0x490) = (int)plVar50[5];
        *(undefined4 *)(*(longlong *)(lVar84 + 0x3a0) + 0x49c) =
             *(undefined4 *)((longlong)plVar50 + 0x2c);
        *(longlong *)(*(longlong *)(lVar84 + 0x3a0) + 0x4a8) = plVar50[6];
        lVar51 = *(longlong *)(lVar84 + 0x3a0);
        *(longlong *)(lVar51 + 0x4e0) = plVar50[0xd];
        lVar65 = plVar50[7];
        lVar39 = plVar50[8];
        lVar87 = plVar50[9];
        lVar90 = plVar50[10];
        lVar21 = plVar50[0xc];
        *(longlong *)(lVar51 + 0x4d0) = plVar50[0xb];
        *(longlong *)(lVar51 + 0x4d8) = lVar21;
        *(longlong *)(lVar51 + 0x4c0) = lVar87;
        *(longlong *)(lVar51 + 0x4c8) = lVar90;
        *(longlong *)(lVar51 + 0x4b0) = lVar65;
        *(longlong *)(lVar51 + 0x4b8) = lVar39;
        *(int *)(*(longlong *)(lVar84 + 0x3a0) + 0x4a0) = (int)plVar50[0xe];
        *(undefined4 *)(*(longlong *)(lVar84 + 0x3a0) + 0x4a4) =
             *(undefined4 *)((longlong)plVar50 + 0x74);
        local_7d8 = (_RTL_CRITICAL_SECTION *)CONCAT71(local_7d8._1_7_,bVar27);
        puStack_7e0 = (undefined1 *)
                      CONCAT44(puStack_7e0._4_4_,(float)*(int *)((longlong)plVar50 + 0xe4));
        local_7e8 = CONCAT44(local_7e8._4_4_,(float)(int)plVar50[0x1c]);
        uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,(float)(uint)plVar50[3]);
        local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_7f8._4_4_,(int)plVar50[0x1d]);
        cVar30 = FUN_144436c24(local_720,local_6fa,*plVar50,(int)plVar50[2]);
        if (cVar30 == '\0') {
          uVar33 = (uint)plVar50[3];
          uVar34 = (int)ROUND(*(float *)(plVar50 + 2) + 1.0 + *(float *)(plVar50 + 2) + 1.0 + -0.5)
                   >> 1;
          if ((int)(uVar33 - 1) <= (int)uVar34) {
            uVar34 = uVar33 - 1;
          }
          if ((int)uVar34 < 1) {
            uVar34 = 0;
          }
          if (uVar34 < uVar33) {
            lVar84 = plVar50[1];
            uVar55 = (ulonglong)uVar34;
            do {
              iVar71 = (int)uVar55;
              if ((((-1 < iVar71) && (iVar71 < *(int *)(lVar84 + 0x470))) &&
                  ((*(int *)(*(longlong *)(lVar84 + 0x468) + uVar55 * 4) == 1 &&
                   ((*(int *)(lVar84 + 0x438) <= iVar71 ||
                    (*(char *)(*(longlong *)(lVar84 + 0x430) + uVar55) == '\0')))))) &&
                 ((*(int *)(lVar84 + 0x448) <= iVar71 ||
                  (*(char *)(*(longlong *)(lVar84 + 0x440) + uVar55) == '\0')))) {
                local_7d8 = (_RTL_CRITICAL_SECTION *)CONCAT71(local_7d8._1_7_,bVar27);
                puStack_7e0 = (undefined1 *)
                              CONCAT44(puStack_7e0._4_4_,(float)*(int *)((longlong)plVar50 + 0xe4));
                local_7e8 = CONCAT44(local_7e8._4_4_,(float)(int)plVar50[0x1c]);
                uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,(float)uVar33);
                local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                            CONCAT44(local_7f8._4_4_,(int)plVar50[0x1d]);
                cVar30 = FUN_144436c24(local_720,local_6fa,*plVar50,(float)iVar71);
                if (cVar30 != '\0') goto LAB_1444304aa;
                break;
              }
              uVar55 = uVar55 + 1;
            } while (uVar33 != (uint)uVar55);
          }
          *(undefined4 *)(*plVar50 + 0x3a8) = 3;
          *(undefined4 *)(*plVar50 + 0x3ac) = 0;
        }
LAB_1444304aa:
        iVar14._0_2_ = local_718[3].Type;
        iVar14._2_2_ = local_718[3].CreatorBackTraceIndex;
        if ((longlong)iVar14 != 0) {
          lVar84 = *(longlong *)&local_718[2].Flags;
          lVar51 = 0;
          do {
            uVar47 = *(undefined8 *)(lVar84 + lVar51);
            cVar30 = FUN_14480c900(*(undefined8 *)(*plVar50 + 0x168),uVar47);
            if ((cVar30 == '\0') &&
               (cVar30 = FUN_144914152(*(undefined8 *)(*plVar50 + 0x168),uVar47), cVar30 == '\0')) {
              *(undefined4 *)(*plVar50 + 0x3a8) = 3;
              *(undefined4 *)(*plVar50 + 0x3ac) = 0;
              break;
            }
            lVar51 = lVar51 + 8;
          } while ((longlong)iVar14 * 8 != lVar51);
        }
        if ((DAT_14c7649e8 & 0xfffffffe) != 2) {
          puVar41 = (undefined8 *)(*plVar50 + 0x200);
          puVar60 = (undefined8 *)(*plVar50 + 0x2c0);
          for (lVar84 = 0xc; lVar84 != 0; lVar84 = lVar84 + -1) {
            *puVar60 = *puVar41;
            puVar41 = puVar41 + 1;
            puVar60 = puVar60 + 1;
          }
          plVar68 = plVar50 + 0x10;
          plVar59 = (longlong *)(*plVar50 + 0x200);
          for (lVar84 = 0xc; lVar84 != 0; lVar84 = lVar84 + -1) {
            *plVar59 = *plVar68;
            plVar68 = plVar68 + 1;
            plVar59 = plVar59 + 1;
          }
        }
        lVar84 = *plVar50;
        puVar41 = (undefined8 *)(lVar84 + 0x1a0);
        if (*(int *)(lVar84 + 0x3ac) == 2) {
          puVar41 = (undefined8 *)(lVar84 + 0x200);
        }
        puVar60 = (undefined8 *)(lVar84 + 0x340);
        for (lVar51 = 0xc; lVar51 != 0; lVar51 = lVar51 + -1) {
          *puVar60 = *puVar41;
          puVar41 = puVar41 + 1;
          puVar60 = puVar60 + 1;
        }
        plVar50 = plVar50 + 0x1e;
      } while (plVar50 != plVar86);
    }
    if ((longlong *)local_530._24_8_ != (longlong *)0x0) {
      FUN_1400020a8(local_530._24_8_);
    }
    auVar53 = local_578;
    if ((PRTL_CRITICAL_SECTION_DEBUG)local_508._0_8_ != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FUN_1400020a8();
      auVar53 = local_578;
    }
    break;
  case 2:
switchD_14442c102_caseD_2:
    local_6b8 = *(longlong **)param_3;
    p_Var88 = param_3->CriticalSection;
    lVar84 = *(longlong *)&param_3[1].Flags;
    p_Var75 = *(PRTL_CRITICAL_SECTION_DEBUG *)&param_3[2].EntryCount;
    LVar11 = *(LONG *)&p_Var40->CriticalSection;
    local_708 = (PRTL_CRITICAL_SECTION_DEBUG)(lVar84 + 0x60);
    FUN_149093128(local_708,LVar11);
    p_Var63 = (PRTL_CRITICAL_SECTION_DEBUG)(lVar84 + 0x70);
    FUN_149093128(p_Var63,LVar11);
    cVar30 = FUN_144b0f89b(0,*(undefined2 *)
                              (&DAT_14ca85070 + (longlong)*(int *)&p_Var75->CriticalSection * 2));
    local_718 = p_Var75;
    uVar31 = FUN_144b0f89b(1,*(undefined2 *)
                              (&DAT_14ca85070 + (longlong)*(int *)&p_Var75->CriticalSection * 2));
    local_6d8 = p_Var42;
    cVar32 = FUN_14352174c(p_Var42);
    local_5e8._0_8_ = &DAT_00000400;
    local_5e8._8_4_ = 0;
    local_5e8._16_4_ = 0x4c7585e0;
    local_5e8._20_4_ = 1;
    local_5b8 = cVar32 == '\x1b';
    local_5e8._24_4_ = 0;
    local_5e8._28_4_ = 0;
    p_Stack_5c8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_5c0._0_4_ = 0;
    local_5c0._4_2_ = 0;
    local_5c0._6_2_ = 0;
    local_5b0 = 0;
    uStack_5a8 = 0;
    iVar71 = *(int *)&p_Var40->CriticalSection;
    local_710 = p_Var40;
    if ((longlong)iVar71 != 0) {
      uVar55 = *(ulonglong *)p_Var40;
      local_6f8 = (PRTL_CRITICAL_SECTION_DEBUG)(CONCAT71(local_6f8._1_7_,uVar31) ^ 1);
      lVar84 = 0;
      local_6e8 = p_Var63;
      local_6c0 = p_Var88;
      do {
        lVar51 = *(longlong *)(uVar55 + lVar84);
        if (*(int *)(lVar51 + 0x3a8) != 3) {
          lVar65 = *(longlong *)(lVar51 + 0x3a0);
          uVar73 = (ulonglong)*(float *)(lVar65 + 0x47c);
          iVar76 = (int)uVar73;
          if (((*(longlong *)(lVar51 + 0x18) == 0) || (*(int *)(lVar51 + 0x3ac) != 2)) ||
             (((iVar76 < 0 ||
               (((*(int *)(lVar65 + 0x448) <= iVar76 ||
                 (*(char *)(*(longlong *)(lVar65 + 0x440) + (uVar73 & 0xffffffff)) == '\0')) &&
                ((*(int *)(lVar65 + 0x438) <= iVar76 ||
                 (*(char *)(*(longlong *)(lVar65 + 0x430) + (uVar73 & 0xffffffff)) == '\0')))))) &&
              (*(char *)(lVar65 + 0x460) != '\x01')))) {
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          }
          else {
            local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar51 + 0x28);
          }
          uStack_7f0 = (_LIST_ENTRY *)
                       CONCAT71(uStack_7f0._1_7_,local_7f8 != (PRTL_CRITICAL_SECTION_DEBUG)0x0);
          puStack_7e0 = local_5e8;
          local_7e8 = local_7e8 & 0xffffffffffffff00;
          FUN_144438070(&local_4d8,local_720,local_718,lVar51);
          lVar65 = (longlong)*(int *)(lVar51 + 0x10) * 0x80;
          puVar4 = (undefined1 *)(*(ulonglong *)local_708 + lVar65);
          *(undefined4 *)(*(ulonglong *)local_708 + lVar65) = local_4d8._0_4_;
          if ((_RTL_CRITICAL_SECTION_DEBUG *)puVar4 != &local_4d8) {
            if (*(longlong *)((longlong)puVar4 + 8) != 0) {
              FUN_1400020a8();
            }
            *(_RTL_CRITICAL_SECTION **)((longlong)puVar4 + 8) = local_4d8.CriticalSection;
            local_4d8.CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
            *(undefined4 *)((longlong)puVar4 + 0x10) = local_4d8.ProcessLocksList.Flink._0_4_;
            *(undefined4 *)((longlong)puVar4 + 0x14) = local_4d8.ProcessLocksList.Flink._4_4_;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = local_4d8.ProcessLocksList.Blink;
            local_4d8.ProcessLocksList = (LIST_ENTRY)(auVar22 << 0x40);
          }
          puVar41 = (undefined8 *)((longlong)&local_4d8 + 0x20);
          puVar60 = (undefined8 *)((longlong)puVar4 + 0x20);
          for (lVar65 = 0xc; lVar65 != 0; lVar65 = lVar65 + -1) {
            *puVar60 = *puVar41;
            puVar41 = puVar41 + 1;
            puVar60 = puVar60 + 1;
          }
          if (local_4d8.CriticalSection != (_RTL_CRITICAL_SECTION *)0x0) {
            FUN_1400020a8();
          }
          iVar81 = *(int *)(*(ulonglong *)local_708 + (longlong)*(int *)(lVar51 + 0x10) * 0x80);
          if (*(int *)(lVar51 + 0x3a8) == 0 && cVar30 == '\x01') {
            if (*(longlong *)(lVar51 + 0x40) != 0) {
              local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar51 + 0x68);
              local_7e8 = CONCAT71(local_7e8._1_7_,1);
LAB_144430bd0:
              puStack_7e0 = local_5e8;
              uStack_7f0 = (_LIST_ENTRY *)
                           CONCAT71(uStack_7f0._1_7_,local_7f8 != (PRTL_CRITICAL_SECTION_DEBUG)0x0);
              FUN_144438070(&local_4d8,local_720,local_718,lVar51);
              p_Var40 = local_6e8;
              lVar65 = (longlong)*(int *)(lVar51 + 0x10) * 0x80;
              puVar4 = (undefined1 *)(*(ulonglong *)local_6e8 + lVar65);
              *(undefined4 *)(*(ulonglong *)local_6e8 + lVar65) = local_4d8._0_4_;
              if ((_RTL_CRITICAL_SECTION_DEBUG *)puVar4 != &local_4d8) {
                if (*(longlong *)((longlong)puVar4 + 8) != 0) {
                  FUN_1400020a8();
                }
                *(_RTL_CRITICAL_SECTION **)((longlong)puVar4 + 8) = local_4d8.CriticalSection;
                local_4d8.CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
                *(undefined4 *)((longlong)puVar4 + 0x10) = local_4d8.ProcessLocksList.Flink._0_4_;
                *(undefined4 *)((longlong)puVar4 + 0x14) = local_4d8.ProcessLocksList.Flink._4_4_;
                auVar23._8_8_ = 0;
                auVar23._0_8_ = local_4d8.ProcessLocksList.Blink;
                local_4d8.ProcessLocksList = (LIST_ENTRY)(auVar23 << 0x40);
              }
              puVar41 = (undefined8 *)((longlong)&local_4d8 + 0x20);
              puVar60 = (undefined8 *)((longlong)puVar4 + 0x20);
              for (lVar65 = 0xc; lVar65 != 0; lVar65 = lVar65 + -1) {
                *puVar60 = *puVar41;
                puVar41 = puVar41 + 1;
                puVar60 = puVar60 + 1;
              }
              if (local_4d8.CriticalSection != (_RTL_CRITICAL_SECTION *)0x0) {
                FUN_1400020a8();
              }
              iVar81 = *(int *)(*(ulonglong *)p_Var40 + (longlong)*(int *)(lVar51 + 0x10) * 0x80);
            }
          }
          else if (((*(int *)(lVar51 + 0x3a8) == 1 && (char)local_6f8 == '\0') && (-1 < iVar76)) &&
                  (iVar76 < *(int *)(lVar51 + 0x118))) {
            lVar65 = (uVar73 & 0xffffffff) * 0x68;
            if (*(longlong *)(*(longlong *)(lVar51 + 0x110) + lVar65) != 0) {
              if (((*(int *)(lVar51 + 0x3ac) == 2) ||
                  ((lVar39 = *(longlong *)(lVar51 + 0x3a0), iVar76 < *(int *)(lVar39 + 0x448) &&
                   (*(char *)((uVar73 & 0xffffffff) + *(longlong *)(lVar39 + 0x440)) != '\0')))) ||
                 (*(char *)(lVar39 + 0x460) == '\x01')) {
                local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                             (*(longlong *)(lVar51 + 0x110) + 0x38 + lVar65);
              }
              else {
                local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              }
              local_7e8 = CONCAT71(local_7e8._1_7_,2);
              goto LAB_144430bd0;
            }
          }
          *(float *)(*(longlong *)(lVar51 + 0x3a0) + 0x478) = (float)iVar81;
          *(int *)(lVar51 + 0x160) = iVar81;
        }
        p_Var88 = local_6c0;
        lVar51 = local_720;
        lVar84 = lVar84 + 8;
      } while ((longlong)iVar71 * 8 != lVar84);
      if ((longlong)(int)(DWORD)local_5c0 != 0) {
        lVar84 = (longlong)(int)(DWORD)local_5c0 * 0x90;
        p_Var40 = p_Stack_5c8 + 2;
        do {
          local_7e8._0_4_ = p_Var40[-2].EntryCount;
          local_7e8._4_4_ = p_Var40[-2].ContentionCount;
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)p_Var40[-2].ProcessLocksList.Flink;
          uStack_7f0 = p_Var40[-2].ProcessLocksList.Blink;
          FUN_14444216d(lVar51,p_Var88,p_Var40[-2].CriticalSection,p_Var40);
          p_Var40 = p_Var40 + 3;
          lVar84 = lVar84 + -0x90;
        } while (lVar84 != 0);
      }
    }
    p_Var42 = local_6d8;
    if (((local_5b8 == '\x01') &&
        ((*(longlong *)
           (&DAT_14ca814b0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)local_6d8[0x136].SpinCount * 2) *
           0x3c) != DAT_14ca80038 ||
         ((*(byte *)((longlong)&DAT_14ca814d0 +
                    (ulonglong)
                    *(ushort *)(&DAT_14ca85070 + (longlong)(int)local_6d8[0x136].SpinCount * 2) *
                    0x3c + 3) & 1) != 0)))) &&
       ((local_6b8 != (longlong *)0x0 && (*(int *)&local_710->CriticalSection != 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbf9ff0) && (FUN_144b3d300(&DAT_14cbf9ff0), DAT_14cbf9ff0 == -1))
      {
        FUN_140056680(&DAT_14cbf9fd8,L"r.SkinCache.CompileShaders");
        DAT_14cbf9fe8 = (longlong *)0x0;
        atexit((_func_5014 *)&LAB_14443842b);
        _Init_thread_footer(&DAT_14cbf9ff0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbfa010) && (FUN_144b3d300(&DAT_14cbfa010), DAT_14cbfa010 == -1))
      {
        FUN_140056680(&DAT_14cbf9ff8,L"r.SkinCache.Mode");
        DAT_14cbfa008 = (longlong *)0x0;
        atexit((_func_5014 *)&LAB_14443843c);
        _Init_thread_footer(&DAT_14cbfa010);
      }
      uVar10 = *(ushort *)(&DAT_14ca85070 + (longlong)(int)p_Var42[0x136].SpinCount * 2);
      puVar41 = &DAT_14ca84468;
      if (uVar10 == 0x31) goto switchD_1444340ad_caseD_33;
      p_Var42 = local_6d8;
      switch(uVar10) {
      case 0x30:
switchD_1444340ad_caseD_30:
        puVar41 = &DAT_14ca84470;
        break;
      case 0x31:
      case 0x32:
switchD_1444340ad_caseD_31:
        if ((uVar10 & 0xfff0) == 0x20) {
          lVar84 = FUN_14741392a();
          puVar41 = (undefined8 *)(lVar84 + (ulonglong)(uVar10 & 0xf) * 0x18);
          p_Var42 = local_6d8;
          break;
        }
        uVar47 = 0;
        goto LAB_1444311f0;
      case 0x33:
        break;
      case 0x34:
switchD_1444340ad_caseD_34:
        puVar41 = &DAT_14ca84480;
        break;
      case 0x35:
switchD_1444340ad_caseD_35:
        puVar41 = &DAT_14ca84478;
        break;
      default:
        switch((uint)uVar10) {
        case 0:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x14:
          break;
        default:
          goto switchD_1444340ad_caseD_31;
        case 0xb:
        case 0xc:
          goto switchD_1444340ad_caseD_35;
        case 0x10:
        case 0x16:
        case 0x1b:
          goto switchD_1444340ad_caseD_34;
        case 0x15:
        case 0x18:
          goto switchD_1444340ad_caseD_30;
        case 0x1e:
        case 0x1f:
          puVar41 = &DAT_14ca84488;
        }
      }
switchD_1444340ad_caseD_33:
      uVar47 = *puVar41;
LAB_1444311f0:
      if (DAT_14cbf9fe8 == (longlong *)0x0) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        puVar57 = DAT_14cbf9fd8;
        if (DAT_14cbf9fe0 == 0) {
          puVar57 = &DAT_149dfb77a;
        }
        DAT_14cbf9fe8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar57,1);
        p_Var42 = local_6d8;
      }
      cVar30 = FUN_14002b5e0(uVar47,"Windows",7);
      uVar33 = 0;
      if (((cVar30 != '\0') || (p_Var40 = local_710, uVar10 == DAT_14ca85550)) &&
         (iVar71 = (**(code **)(*DAT_14cbf9fe8 + 0xb0))(), p_Var40 = local_710, iVar71 != 0)) {
        uVar10 = *(ushort *)(&DAT_14ca85070 + (longlong)(int)p_Var42[0x136].SpinCount * 2);
        puVar41 = &DAT_14ca84468;
        if (uVar10 == 0x31) goto switchD_1444340e1_caseD_33;
        switch(uVar10) {
        case 0x30:
switchD_1444340e1_caseD_30:
          puVar41 = &DAT_14ca84470;
          break;
        case 0x31:
        case 0x32:
switchD_1444340e1_caseD_31:
          if ((uVar10 & 0xfff0) == 0x20) {
            lVar84 = FUN_14741392a();
            puVar41 = (undefined8 *)(lVar84 + (ulonglong)(uVar10 & 0xf) * 0x18);
            break;
          }
          uVar47 = 0;
          goto LAB_14443126b;
        case 0x33:
          break;
        case 0x34:
switchD_1444340e1_caseD_34:
          puVar41 = &DAT_14ca84480;
          break;
        case 0x35:
switchD_1444340e1_caseD_35:
          puVar41 = &DAT_14ca84478;
          break;
        default:
          switch((uint)uVar10) {
          case 0:
          case 0xe:
          case 0xf:
          case 0x11:
          case 0x14:
            break;
          default:
            goto switchD_1444340e1_caseD_31;
          case 0xb:
          case 0xc:
            goto switchD_1444340e1_caseD_35;
          case 0x10:
          case 0x16:
          case 0x1b:
            goto switchD_1444340e1_caseD_34;
          case 0x15:
          case 0x18:
            goto switchD_1444340e1_caseD_30;
          case 0x1e:
          case 0x1f:
            puVar41 = &DAT_14ca84488;
          }
        }
switchD_1444340e1_caseD_33:
        uVar47 = *puVar41;
LAB_14443126b:
        if (DAT_14cbfa008 == (longlong *)0x0) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          puVar57 = DAT_14cbf9ff8;
          if (DAT_14cbfa000 == 0) {
            puVar57 = &DAT_149dfb77a;
          }
          DAT_14cbfa008 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar57,1);
        }
        p_Var40 = local_710;
        uVar33 = 0;
        cVar30 = FUN_14002b5e0(uVar47,"Windows",7);
        if ((cVar30 != '\0') || (uVar10 == DAT_14ca85550)) {
          iVar71 = (**(code **)(*DAT_14cbfa008 + 0xb0))();
          uVar33 = (uint)(iVar71 != 0);
        }
      }
      uVar55 = uStack_5a8;
      LVar11 = *(LONG *)&p_Var40->CriticalSection;
      iVar71 = (int)uStack_5a8;
      uVar73 = uStack_5a8 & 0xffffffff;
      DAT_14ca4d100 = 1;
      DAT_14ca4d330 = DAT_14ca4d330 + (int)uStack_5a8 * 0x40;
      DAT_14ca4d32c = (int)uStack_5a8 * 0x100 + DAT_14ca4d32c + 0x200;
      FUN_1472ebdac(&local_4d8,uVar73,0x20);
      local_578 = (undefined1  [8])0x0;
      uStack_570 = (_RTL_CRITICAL_SECTION *)0x0;
      if (iVar71 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar73);
      }
      local_708 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_708._4_4_,LVar11);
      local_6c0 = p_Var88;
      if (iVar71 == 0) {
        FUN_140056680(local_508 + 0x10,L"DummyName");
        FUN_1472ebde2(&local_4d8,local_508 + 0x10,0);
        if ((PRTL_CRITICAL_SECTION_DEBUG)local_4f8._0_8_ != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          FUN_1400020a8();
        }
        p_Var42 = uStack_570;
        lVar84 = local_720;
        lVar51 = (longlong)(int)uStack_570;
        uVar34 = (int)uStack_570 + 1;
        uStack_570 = (_RTL_CRITICAL_SECTION *)CONCAT44(uStack_570._4_4_,uVar34);
        if (uStack_570._4_4_ < uVar34) {
          FUN_144438520(local_578,(ulonglong)p_Var42 & 0xffffffff);
        }
        ((LIST_ENTRY *)((longlong)local_578 + 0x10))[lVar51 * 2].Flink = (_LIST_ENTRY *)0x0;
        ((LIST_ENTRY *)((longlong)local_578 + 0x10))[lVar51 * 2].Blink = (_LIST_ENTRY *)0x0;
        ((PRTL_CRITICAL_SECTION_DEBUG *)local_578)[lVar51 * 4] = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        *(undefined8 *)((longlong)((PRTL_CRITICAL_SECTION_DEBUG *)local_578 + lVar51 * 4) + 8) = 0;
      }
      else {
        local_718 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_718._4_4_,uVar33);
        FUN_14443844e(local_578,uVar55 & 0xffffffff);
        uVar55 = 0;
        do {
          lVar84 = local_5b0;
          FUN_1472ebde2(&local_4d8,local_5b0 + uVar55 * 0x48 + 8,uVar55 & 0xffffffff);
          p_Var42 = uStack_570;
          lVar51 = (longlong)(int)uStack_570;
          uVar33 = (int)uStack_570 + 1;
          uStack_570 = (_RTL_CRITICAL_SECTION *)CONCAT44(uStack_570._4_4_,uVar33);
          if (uStack_570._4_4_ < uVar33) {
            FUN_144438520(local_578,(ulonglong)p_Var42 & 0xffffffff);
          }
          auVar53 = local_578;
          lVar84 = lVar84 + uVar55 * 0x48;
          pcVar2 = (code *)((PRTL_CRITICAL_SECTION_DEBUG *)local_578 + lVar51 * 4);
          FUN_144438515(pcVar2);
          *(int *)((PRTL_CRITICAL_SECTION_DEBUG *)auVar53 + lVar51 * 4) = (int)uVar55;
          *(undefined4 *)((undefined1 *)((longlong)auVar53 + 4) + lVar51 * 0x20) =
               *(undefined4 *)(lVar84 + 0x24);
          *(LONG *)((_RTL_CRITICAL_SECTION **)((longlong)auVar53 + 8) + lVar51 * 4) =
               *(LONG *)(lVar84 + 0x20);
          *(undefined4 *)((longlong)((longlong)auVar53 + 8) + lVar51 * 0x20 + 4) =
               *(undefined4 *)(lVar84 + 0x1c);
          uVar33 = *(uint *)(lVar84 + 0x40);
          lVar51 = lVar84 + 0x28;
          if (*(longlong *)(lVar84 + 0x38) != 0) {
            lVar51 = *(longlong *)(lVar84 + 0x38);
          }
          uVar34 = 0xffffffff >> (-(char)((int)uVar33 % 0x20) & 0x1fU);
          if ((int)uVar33 % 0x20 < 1) {
            uVar34 = 0xffffffff;
          }
          if ((int)uVar33 < 1) {
            iVar76 = 0;
          }
          else {
            uVar54 = (ulonglong)uVar33 + 0x1f >> 5;
            uVar35 = 0xffffffff;
            if (uVar33 < 0x21) {
              uVar35 = uVar34;
            }
            uVar82 = 0;
            iVar76 = 0;
            do {
              uVar35 = uVar35 & *(uint *)(lVar51 + uVar82 * 4);
              uVar83 = (ulonglong)uVar35 - (ulonglong)(uVar35 >> 1 & 0x55555555);
              uVar83 = (uVar83 >> 2 & 0x3333333333333333) + (uVar83 & 0x3333333333333333);
              iVar76 = iVar76 + (uint)(byte)(((uVar83 >> 4) + uVar83 & 0xf0f0f0f0f0f0f0f) *
                                             0x101010101010101 >> 0x38);
              bVar56 = uVar54 - 2 == uVar82;
              uVar82 = uVar82 + 1;
              uVar35 = 0xffffffff;
              if (bVar56) {
                uVar35 = uVar34;
              }
            } while (uVar54 != uVar82);
          }
          *(int *)(pcVar2 + 0x10) = iVar76;
          *(undefined4 *)(pcVar2 + 0x14) = *(undefined4 *)(lVar84 + 0x40);
          *(undefined4 *)(pcVar2 + 0x18) = *(undefined4 *)(lVar84 + 0x18);
          *(undefined4 *)(pcVar2 + 0x1c) = 0;
          uVar55 = uVar55 + 1;
        } while (uVar55 != uVar73);
        lVar84 = local_720;
        uVar33 = (uint)local_718;
      }
      local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)(uint)((int)uStack_570 << 5);
      local_4f8._16_8_ = (_LIST_ENTRY *)0x0;
      local_4f8._8_4_ = 0x4109;
      local_4f8._4_4_ = (int)uStack_570 << 3;
      local_4f8._0_4_ = 4;
      uStack_7f0 = (_LIST_ENTRY *)((ulonglong)uStack_7f0 & 0xffffffffffffff00);
      lVar51 = FUN_1400489e9(lVar84,L"Hair.Debug.UniqueMeshNames",local_508 + 0x10,local_578);
      plVar50 = (longlong *)(lVar84 + 0x70);
      puVar60 = (undefined8 *)(*(longlong *)(lVar84 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar41 = puVar60 + 0xe;
      if (*(undefined8 **)(lVar84 + 0x78) < puVar41) {
        FUN_140023dd8(plVar50,0x80);
        puVar60 = (undefined8 *)(*plVar50 + 0xfU & 0xfffffffffffffff0);
        puVar41 = puVar60 + 0xe;
      }
      *(undefined8 **)(lVar84 + 0x70) = puVar41;
      *puVar60 = &PTR_FUN_14baa96f0;
      puVar60[8] = 0;
      puVar60[10] = 0;
      puVar60[5] = 0;
      puVar60[6] = 0;
      *(undefined1 *)(puVar60 + 0xb) = 1;
      puVar60[0xc] = 0;
      puVar60[0xd] = 0;
      iVar76 = *(int *)(lVar84 + 0xa0);
      *(uint *)(lVar84 + 0xa0) = iVar76 + 1U;
      if (*(uint *)(lVar84 + 0xa4) < iVar76 + 1U) {
        FUN_1448cfae8(lVar84 + 0x98,iVar76);
      }
      *(undefined8 **)(*(longlong *)(lVar84 + 0x98) + (longlong)iVar76 * 8) = puVar60;
      *(uint *)(puVar60 + 2) = (uint)(0 < DAT_14c7649ec);
      *(uint *)((longlong)puVar60 + 0x14) = uVar33;
      *(undefined4 *)(puVar60 + 3) = local_708._0_4_;
      *(int *)((longlong)puVar60 + 0x1c) = iVar71;
      FUN_1472ebeae(&local_4d8,local_508 + 0x10,lVar84);
      puVar60[6] = local_4f8._16_8_;
      *(undefined4 *)(puVar60 + 4) = local_4f8._0_4_;
      *(undefined4 *)((longlong)puVar60 + 0x24) = local_4f8._4_4_;
      *(undefined4 *)(puVar60 + 5) = local_4f8._8_4_;
      *(undefined4 *)((longlong)puVar60 + 0x2c) = local_4f8._12_4_;
      puVar91 = (undefined8 *)(*(longlong *)(lVar84 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar41 = puVar91 + 9;
      if (*(undefined8 **)(lVar84 + 0x78) < puVar41) {
        FUN_140023dd8(plVar50,0x50);
        puVar91 = (undefined8 *)(*plVar50 + 7U & 0xfffffffffffffff8);
        puVar41 = puVar91 + 9;
      }
      *(undefined8 **)(lVar84 + 0x70) = puVar41;
      puVar91[1] = *(undefined8 *)(lVar51 + 8);
      puVar91[2] = 0;
      *(undefined1 *)(puVar91 + 3) = 3;
      *(undefined8 *)((longlong)puVar91 + 0x1c) = 0xffffffffffffffff;
      *puVar91 = &PTR_FUN_14a1fb168;
      *(undefined1 *)(puVar91 + 5) = 0x1c;
      *(undefined8 *)((longlong)puVar91 + 0x2c) = 0xffffffff00000000;
      puVar91[7] = 0;
      puVar91[8] = lVar51;
      iVar71 = *(int *)(lVar84 + 0x1a0);
      *(uint *)(lVar84 + 0x1a0) = iVar71 + 1U;
      if (*(uint *)(lVar84 + 0x1a4) < iVar71 + 1U) {
        FUN_1447568fc(lVar84 + 0x198,iVar71);
      }
      *(undefined8 **)(*(longlong *)(lVar84 + 0x198) + (longlong)iVar71 * 8) = puVar91;
      *(int *)((longlong)puVar91 + 0x1c) = *(int *)(lVar84 + 0x1a0) + -1;
      puVar60[8] = puVar91;
      FUN_1472ea582(lVar84,local_6b8,puVar60 + 10);
      FUN_145e4cf06();
      FUN_1448e935e(local_6c0,local_508 + 0x10,&DAT_14cbf9470,0);
      FUN_145e4cf06();
      local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)local_508;
      local_508._0_8_ = &DAT_100000001;
      local_508._8_4_ = 1;
      FUN_149094187(lVar84,(longlong)local_530 + 0x18,local_508 + 0x10,puVar60 + 2);
      if (local_578 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      if (local_4d8.ProcessLocksList.Flink != (_LIST_ENTRY *)0x0) {
        FUN_1400020a8();
      }
      if ((_LIST_ENTRY *)local_4d8._0_8_ != (_LIST_ENTRY *)0x0) {
        FUN_1400020a8();
      }
    }
    p_Var40 = p_Stack_5c8;
    lVar84 = (longlong)(int)(DWORD)local_5c0;
    if (lVar84 != 0) {
      lVar51 = 0;
      do {
        puVar41 = *(undefined8 **)((longlong)&p_Var40->CriticalSection + lVar51);
        LOCK();
        piVar1 = (int *)(puVar41 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (puVar41 != (undefined8 *)0x0 && *piVar1 == 0) {
          (**(code **)*puVar41)(puVar41,1);
        }
        lVar51 = lVar51 + 0x90;
      } while (lVar84 * 0x90 != lVar51);
    }
    FUN_1490931a2(local_5e8);
    local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
    local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
    goto LAB_14442f20d;
  case 3:
switchD_14442c102_caseD_3:
    local_708 = (PRTL_CRITICAL_SECTION_DEBUG)param_3->CriticalSection;
    local_718 = *(PRTL_CRITICAL_SECTION_DEBUG *)&param_3[1].Flags;
    local_508._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_508._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
    iVar71 = *(int *)&p_Var40->CriticalSection;
    if (iVar71 < 0) goto LAB_144434052;
    iVar76 = 0;
    if (iVar71 == 0) {
LAB_14442da3e:
      uVar55 = 0;
    }
    else {
      FUN_144438934(local_508);
      iVar71 = *(int *)&p_Var40->CriticalSection;
      if ((longlong)iVar71 == 0) goto LAB_14442da3e;
      uVar73 = *(ulonglong *)p_Var40;
      lVar84 = 0;
      uVar55 = 0;
      do {
        uVar47 = local_508._8_8_;
        lVar51 = *(longlong *)(uVar73 + lVar84);
        if (*(int *)(lVar51 + 0x3a8) != 3) {
          local_6f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_6f8._4_4_,(int)uVar55);
          lVar65 = (longlong)(int)local_508._8_4_;
          uVar33 = local_508._8_4_ + 1;
          local_508._8_4_ = uVar33;
          if ((uint)local_508._12_4_ < uVar33) {
            FUN_144438a54(local_508,uVar47 & 0xffffffff);
          }
          uVar47 = local_508._0_8_;
          lVar65 = lVar65 * 0xb0;
          pcVar2 = (code *)(local_508._0_8_ + lVar65);
          FUN_144438a0c(pcVar2);
          *(longlong *)(uVar47 + lVar65 + 0xa0) = lVar51;
          cVar26 = (code)FUN_14909b932(lVar51);
          *(code *)(uVar47 + lVar65 + 8) = cVar26;
          *(undefined4 *)(uVar47 + lVar65 + 0xc) = *(undefined4 *)(lVar51 + 0x3ac);
          uVar33 = (uint)*(float *)(*(longlong *)(lVar51 + 0x3a0) + 0x47c);
          *(uint *)(uVar47 + lVar65) = uVar33;
          if ((int)uVar33 < 0) {
            pcVar2[0x10] = (code)0x0;
            pcVar2[0x11] = *(code *)(*(longlong *)(lVar51 + 0x3a0) + 0x460);
LAB_14442c98c:
            cVar26 = (code)0x0;
          }
          else {
            if ((int)uVar33 < *(int *)(*(longlong *)(lVar51 + 0x3a0) + 0x438)) {
              cVar26 = *(code *)(*(longlong *)(*(longlong *)(lVar51 + 0x3a0) + 0x430) +
                                (ulonglong)uVar33);
            }
            else {
              cVar26 = (code)0x0;
            }
            pcVar2[0x10] = cVar26;
            pcVar2[0x11] = *(code *)(*(longlong *)(lVar51 + 0x3a0) + 0x460);
            if (*(int *)(*(longlong *)(lVar51 + 0x3a0) + 0x448) <= (int)uVar33) goto LAB_14442c98c;
            cVar26 = *(code *)(*(longlong *)(*(longlong *)(lVar51 + 0x3a0) + 0x440) +
                              (ulonglong)uVar33);
          }
          pcVar2[0x12] = cVar26;
          *(int *)(pcVar2 + 4) = (int)*(float *)(*(longlong *)(lVar51 + 0x3a0) + 0x478);
          pvVar16 = *(HANDLE *)(local_718 + 2);
          lVar65 = (longlong)*(int *)(lVar51 + 0x10) * 0x80;
          *(undefined4 *)(pcVar2 + 0x20) = *(undefined4 *)((longlong)pvVar16 + lVar65);
          FUN_1490946c2(pcVar2 + 0x28);
          puVar52 = (ulonglong *)((longlong)pvVar16 + lVar65 + 0x20);
          pcVar72 = pcVar2 + 0x40;
          for (lVar51 = 0xc; lVar51 != 0; lVar51 = lVar51 + -1) {
            *(ulonglong *)pcVar72 = *puVar52;
            puVar52 = puVar52 + 1;
            pcVar72 = pcVar72 + 8;
          }
          uVar55 = (ulonglong)
                   CONCAT31((int3)((ulonglong)local_6f8 >> 8),
                            (byte)local_6f8 | pcVar2[8] == (code)0x2);
        }
        lVar84 = lVar84 + 8;
      } while ((longlong)iVar71 * 8 != lVar84);
    }
    uVar47 = local_508._0_8_;
    p_Var40 = local_708;
    lVar84 = local_720;
    lVar51 = (longlong)(int)local_508._8_4_;
    if (lVar51 != 0) {
      local_6f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_6f8._4_4_,(int)uVar55);
      lVar65 = 0;
      do {
        if (((-1 < *(int *)((undefined1 *)(uVar47 + 4) + lVar65)) &&
            (*(int *)((longlong)(uVar47 + 8) + lVar65 + 4) == 2)) &&
           ((*(char *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar65 + 2) != '\0' ||
            ((*(char *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar65) != '\0' ||
             (*(char *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar65 + 1) == '\x01')))
            ))) {
          lVar39 = *(longlong *)
                    ((longlong)
                     &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                    lVar65);
          local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar39 + 0x28);
          uStack_7f0 = *(_LIST_ENTRY **)(lVar39 + 0x30);
          FUN_1444429d4(lVar84,p_Var40,*(int *)((undefined1 *)(uVar47 + 4) + lVar65),
                        (longlong)(uVar47 + 0x20) + lVar65);
        }
        uVar49 = local_508._0_8_;
        lVar65 = lVar65 + 0xb0;
      } while (lVar51 * 0xb0 - lVar65 != 0);
      lVar51 = (longlong)(int)local_508._8_4_;
      if (lVar51 == 0) {
LAB_14442edfb:
        iVar76 = 0;
      }
      else {
        lVar65 = 0;
        do {
          if (((-1 < *(int *)((undefined1 *)(uVar49 + 4) + lVar65)) &&
              (*(int *)((longlong)(uVar49 + 8) + lVar65 + 4) == 2)) &&
             (*(char *)((longlong)&((LIST_ENTRY *)(uVar49 + 0x10))->Flink + lVar65 + 2) == '\x01'))
          {
            lVar39 = *(longlong *)
                      ((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).Flink +
                      lVar65);
            local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar39 + 0x28);
            uStack_7f0 = *(_LIST_ENTRY **)(lVar39 + 0x30);
            FUN_14444383b(lVar84,p_Var40,*(int *)((undefined1 *)(uVar49 + 4) + lVar65),
                          (longlong)(uVar49 + 0x20) + lVar65);
          }
          uVar47 = local_508._0_8_;
          lVar65 = lVar65 + 0xb0;
        } while (lVar51 * 0xb0 - lVar65 != 0);
        lVar51 = (longlong)(int)local_508._8_4_;
        if (lVar51 == 0) goto LAB_14442edfb;
        lVar65 = 0;
        do {
          if (((-1 < *(int *)((undefined1 *)(uVar47 + 4) + lVar65)) &&
              (*(int *)((longlong)(uVar47 + 8) + lVar65 + 4) == 2)) &&
             (*(char *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar65 + 2) == '\x01'))
          {
            lVar39 = *(longlong *)
                      ((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                      lVar65);
            local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar39 + 0x28);
            uStack_7f0 = *(_LIST_ENTRY **)(lVar39 + 0x30);
            FUN_144443d71(lVar84,p_Var40,*(int *)((undefined1 *)(uVar47 + 4) + lVar65),
                          (longlong)(uVar47 + 0x20) + lVar65);
          }
          uVar49 = local_508._0_8_;
          lVar65 = lVar65 + 0xb0;
        } while (lVar51 * 0xb0 - lVar65 != 0);
        lVar51 = (longlong)(int)local_508._8_4_;
        if (lVar51 == 0) goto LAB_14442edfb;
        local_718 = (PRTL_CRITICAL_SECTION_DEBUG)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
        plVar50 = (longlong *)(lVar84 + 0x598);
        lVar84 = 0;
        do {
          if (((-1 < *(int *)((undefined1 *)(uVar49 + 4) + lVar84)) &&
              (*(int *)((longlong)(uVar49 + 8) + lVar84 + 4) == 2)) &&
             ((*(char *)((longlong)&((LIST_ENTRY *)(uVar49 + 0x10))->Flink + lVar84 + 2) != '\0' ||
              ((*(char *)((longlong)&((LIST_ENTRY *)(uVar49 + 0x10))->Flink + lVar84) != '\0' ||
               (*(char *)((longlong)&((LIST_ENTRY *)(uVar49 + 0x10))->Flink + lVar84 + 1) == '\x01')
               ))))) {
            lVar65 = *(longlong *)
                      ((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).Flink +
                      lVar84);
            puStack_7e0 = *(undefined1 **)(lVar65 + 0x20);
            local_7e8 = *(ulonglong *)(lVar65 + 0x30);
            uStack_7f0 = (_LIST_ENTRY *)
                         CONCAT44(uStack_7f0._4_4_,*(int *)((undefined1 *)(uVar49 + 4) + lVar84));
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                        CONCAT44(local_7f8._4_4_,
                                 *(undefined4 *)
                                  ((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar49 + lVar84));
            FUN_144444c57(local_720,local_708,0,*(undefined4 *)(lVar65 + 0x10));
            lVar39 = DAT_14c9d2450;
            lVar65 = *(longlong *)
                      (**(longlong **)
                         (*(longlong *)
                           ((longlong)
                            &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).
                             Flink + lVar84) + 0x30) +
                      (longlong)*(int *)((undefined1 *)(uVar49 + 4) + lVar84) * 8);
            iVar76._0_2_ = local_718->Type;
            iVar76._2_2_ = local_718->CreatorBackTraceIndex;
            if (iVar76 == 0x40000002) {
              uVar55 = 0;
            }
            else {
              bVar56 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar76 != 2)) {
                if (iVar76 == 1) {
                  DVar37 = FUN_140ad26c0();
                  DVar38 = GetCurrentThreadId();
                  bVar56 = DVar37 == DVar38;
                }
                else {
                  bVar56 = false;
                }
              }
              uVar55 = (ulonglong)(bVar56 ^ 1);
            }
            lVar87 = lVar65 + 0x58;
            if (0 < *(int *)(lVar39 + uVar55 * 4)) {
              lVar87 = lVar87 + (ulonglong)*(uint *)(lVar65 + 0x120) * 0x20;
            }
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
            FUN_14716cfd3(&local_4d8,local_720,lVar87,1);
            uVar47 = local_4d8._0_8_;
            if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0xc) == 0) {
              if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0x10) != 0) {
                FUN_140069376(local_720);
              }
              iVar71 = *(int *)(local_720 + 0x5a0);
              *(uint *)(local_720 + 0x5a0) = iVar71 + 1U;
              if (*(uint *)(local_720 + 0x5a4) < iVar71 + 1U) {
                FUN_1400f155a(plVar50,iVar71);
              }
              *(undefined8 *)(*plVar50 + (longlong)iVar71 * 8) = uVar47;
              bVar27 = *(byte *)&((_LIST_ENTRY *)(uVar47 + 0x20))->Flink;
              *(undefined4 *)(uVar47 + 0x10 + 0xc) = 0x70;
              *(byte *)&((_LIST_ENTRY *)(uVar47 + 0x20))->Flink = bVar27 & 0xe8 | 0x15;
              *(undefined4 *)(uVar47 + 0x50 + 8) = 0x70;
            }
            lVar65 = DAT_14c9d2450;
            if (*(char *)((longlong)&((LIST_ENTRY *)(uVar49 + 0x10))->Flink + lVar84 + 2) == '\x01')
            {
              lVar39 = *(longlong *)
                        (**(longlong **)
                           (*(longlong *)
                             ((longlong)
                              &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).
                               Flink + lVar84) + 0x30) +
                        (longlong)*(int *)((undefined1 *)(uVar49 + 4) + lVar84) * 8);
              iVar81._0_2_ = local_718->Type;
              iVar81._2_2_ = local_718->CreatorBackTraceIndex;
              if (iVar81 == 0x40000002) {
                uVar55 = 0;
              }
              else {
                bVar56 = true;
                if ((DAT_14c86a9f8 == '\x01') && (iVar81 != 2)) {
                  if (iVar81 == 1) {
                    DVar37 = FUN_140ad26c0();
                    DVar38 = GetCurrentThreadId();
                    bVar56 = DVar37 == DVar38;
                  }
                  else {
                    bVar56 = false;
                  }
                }
                uVar55 = (ulonglong)(bVar56 ^ 1);
              }
              lVar87 = lVar39 + 0xa0;
              if (0 < *(int *)(lVar65 + uVar55 * 4)) {
                lVar87 = lVar87 + (ulonglong)*(uint *)(lVar39 + 0x120) * 0x20;
              }
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
              FUN_14716cfd3(&local_4d8,local_720,lVar87,1);
              uVar47 = local_4d8._0_8_;
              if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0xc) == 0) {
                if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0x10) != 0) {
                  FUN_140069376(local_720);
                }
                iVar71 = *(int *)(local_720 + 0x5a0);
                *(uint *)(local_720 + 0x5a0) = iVar71 + 1U;
                if (*(uint *)(local_720 + 0x5a4) < iVar71 + 1U) {
                  FUN_1400f155a(plVar50,iVar71);
                }
                *(undefined8 *)(*plVar50 + (longlong)iVar71 * 8) = uVar47;
                bVar27 = *(byte *)&((_LIST_ENTRY *)(uVar47 + 0x20))->Flink;
                *(undefined4 *)(uVar47 + 0x10 + 0xc) = 0x70;
                *(byte *)&((_LIST_ENTRY *)(uVar47 + 0x20))->Flink = bVar27 & 0xe8 | 0x15;
                *(undefined4 *)(uVar47 + 0x50 + 8) = 0x70;
              }
              lVar39 = DAT_14c9d2450;
              lVar65 = *(longlong *)
                        (**(longlong **)
                           (*(longlong *)
                             ((longlong)
                              &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).
                               Flink + lVar84) + 0x30) +
                        (longlong)*(int *)((undefined1 *)(uVar49 + 4) + lVar84) * 8);
              iVar80._0_2_ = local_718->Type;
              iVar80._2_2_ = local_718->CreatorBackTraceIndex;
              if (iVar80 == 0x40000002) {
                uVar55 = 0;
              }
              else {
                bVar56 = true;
                if ((DAT_14c86a9f8 == '\x01') && (iVar80 != 2)) {
                  if (iVar80 == 1) {
                    DVar37 = FUN_140ad26c0();
                    DVar38 = GetCurrentThreadId();
                    bVar56 = DVar37 == DVar38;
                  }
                  else {
                    bVar56 = false;
                  }
                }
                uVar55 = (ulonglong)(bVar56 ^ 1);
              }
              lVar87 = lVar65 + 0xe0;
              if (0 < *(int *)(lVar39 + uVar55 * 4)) {
                lVar87 = lVar87 + (ulonglong)*(uint *)(lVar65 + 0x120) * 0x20;
              }
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
              FUN_14716cfd3(&local_4d8,local_720,lVar87,1);
              uVar47 = local_4d8._0_8_;
              if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0xc) == 0) {
                if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0x10) != 0) {
                  FUN_140069376(local_720);
                }
                iVar71 = *(int *)(local_720 + 0x5a0);
                *(uint *)(local_720 + 0x5a0) = iVar71 + 1U;
                if (*(uint *)(local_720 + 0x5a4) < iVar71 + 1U) {
                  FUN_1400f155a(plVar50,iVar71);
                }
                *(undefined8 *)(*plVar50 + (longlong)iVar71 * 8) = uVar47;
                bVar27 = *(byte *)&((_LIST_ENTRY *)(uVar47 + 0x20))->Flink;
                *(undefined4 *)(uVar47 + 0x10 + 0xc) = 0x70;
                *(byte *)&((_LIST_ENTRY *)(uVar47 + 0x20))->Flink = bVar27 & 0xe8 | 0x15;
                *(undefined4 *)(uVar47 + 0x50 + 8) = 0x70;
              }
            }
            lVar65 = *(longlong *)
                      (*(longlong *)
                        ((longlong)
                         &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).Flink +
                        lVar84) + 0x20);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
            FUN_14716cfd3(&local_4d8,local_720,
                          lVar65 + (ulonglong)*(uint *)(lVar65 + 0x188) * 0x20 + 0x90,1);
            uVar47 = local_4d8._0_8_;
            if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0xc) == 0) {
              if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0x10) != 0) {
                FUN_140069376(local_720);
              }
              iVar71 = *(int *)(local_720 + 0x5a0);
              *(uint *)(local_720 + 0x5a0) = iVar71 + 1U;
              if (*(uint *)(local_720 + 0x5a4) < iVar71 + 1U) {
                FUN_1400f155a(plVar50,iVar71);
              }
              *(undefined8 *)(*plVar50 + (longlong)iVar71 * 8) = uVar47;
              bVar27 = *(byte *)&((_LIST_ENTRY *)(uVar47 + 0x20))->Flink;
              *(undefined4 *)(uVar47 + 0x10 + 0xc) = 0x70;
              *(byte *)&((_LIST_ENTRY *)(uVar47 + 0x20))->Flink = bVar27 & 0xe8 | 0x15;
              *(undefined4 *)(uVar47 + 0x50 + 8) = 0x70;
            }
          }
          uVar47 = local_508._0_8_;
          lVar84 = lVar84 + 0xb0;
        } while (lVar51 * 0xb0 - lVar84 != 0);
        lVar84 = (longlong)(int)local_508._8_4_;
        if (lVar84 == 0) goto LAB_14442edfb;
        lVar51 = 0;
        do {
          lVar65 = local_720;
          if (((-1 < *(int *)((undefined1 *)(uVar47 + 4) + lVar51)) &&
              (*(int *)((longlong)(uVar47 + 8) + lVar51 + 4) != 2)) &&
             ((*(char *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar51) != '\0' ||
              (*(char *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar51 + 1) == '\x01'))
             )) {
            lVar39 = *(longlong *)
                      ((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                      lVar51);
            puStack_7e0 = *(undefined1 **)(lVar39 + 0x20);
            uStack_7f0 = (_LIST_ENTRY *)
                         CONCAT44(uStack_7f0._4_4_,*(int *)((undefined1 *)(uVar47 + 4) + lVar51));
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                        CONCAT44(local_7f8._4_4_,
                                 *(undefined4 *)
                                  ((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar51));
            local_7e8 = 0;
            FUN_144444c57(local_720,local_708,0,*(undefined4 *)(lVar39 + 0x10));
            lVar39 = *(longlong *)
                      (*(longlong *)
                        ((longlong)
                         &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                        lVar51) + 0x20);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
            FUN_14716cfd3(&local_4d8,lVar65,
                          lVar39 + (ulonglong)*(uint *)(lVar39 + 0x188) * 0x20 + 0x90,1);
            uVar49 = local_4d8._0_8_;
            if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0xc) == 0) {
              if ((*(byte *)&((_LIST_ENTRY *)(local_4d8._0_8_ + 0x20))->Flink & 0x10) != 0) {
                FUN_140069376(local_720);
              }
              iVar71 = *(int *)(local_720 + 0x5a0);
              *(uint *)(local_720 + 0x5a0) = iVar71 + 1U;
              if (*(uint *)(local_720 + 0x5a4) < iVar71 + 1U) {
                FUN_1400f155a(plVar50,iVar71);
              }
              *(undefined8 *)(*plVar50 + (longlong)iVar71 * 8) = uVar49;
              bVar27 = *(byte *)&((_LIST_ENTRY *)(uVar49 + 0x20))->Flink;
              *(undefined4 *)(uVar49 + 0x10 + 0xc) = 0x70;
              *(byte *)&((_LIST_ENTRY *)(uVar49 + 0x20))->Flink = bVar27 & 0xe8 | 0x15;
              *(undefined4 *)(uVar49 + 0x50 + 8) = 0x70;
            }
          }
          uVar49 = local_508._0_8_;
          lVar51 = lVar51 + 0xb0;
        } while (lVar84 * 0xb0 - lVar51 != 0);
        lVar84 = (longlong)(int)local_508._8_4_;
        uVar55 = (ulonglong)local_6f8 & 0xffffffff;
        if (lVar84 == 0) {
LAB_144431091:
          iVar76 = 0;
          goto LAB_14442ee04;
        }
        lVar51 = 0;
        do {
          lVar39 = DAT_14c9d23d8;
          lVar65 = *(longlong *)
                    ((longlong)
                     &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).Flink +
                    lVar51);
          if ((((*(char *)(lVar65 + 0x38) == '\0') && (*(char *)(lVar65 + 0x39) == '\0')) &&
              (*(char *)(lVar65 + 0x3b) == '\0')) && (*(char *)(lVar65 + 0x3a) == '\x01')) {
            iVar79._0_2_ = local_718->Type;
            iVar79._2_2_ = local_718->CreatorBackTraceIndex;
            if (iVar79 == 0x40000002) {
              uVar73 = 0;
            }
            else {
              bVar56 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar79 != 2)) {
                if (iVar79 == 1) {
                  DVar37 = FUN_140ad26c0();
                  DVar38 = GetCurrentThreadId();
                  bVar56 = DVar37 == DVar38;
                  uVar55 = (ulonglong)local_6f8 & 0xffffffff;
                }
                else {
                  bVar56 = false;
                }
              }
              uVar73 = (ulonglong)(bVar56 ^ 1);
            }
            lVar65 = local_720;
            if (0 < *(int *)(lVar39 + uVar73 * 4)) {
              lVar39 = *(longlong *)
                        (*(longlong *)
                          ((longlong)
                           &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).Flink
                          + lVar51) + 0x20);
              lVar87 = (ulonglong)*(uint *)(lVar39 + 0x188) * 0x20;
              local_4d8._0_8_ = *(longlong *)(lVar39 + 0x50 + lVar87);
              if ((_LIST_ENTRY *)local_4d8._0_8_ != (_LIST_ENTRY *)0x0) {
                LOCK();
                *(int *)&((_LIST_ENTRY *)local_4d8._0_8_)->Blink =
                     *(int *)&((_LIST_ENTRY *)local_4d8._0_8_)->Blink + 1;
                UNLOCK();
              }
              lVar39 = lVar39 + lVar87;
              local_4d8.CriticalSection = *(_RTL_CRITICAL_SECTION **)(lVar39 + 0x58);
              if (local_4d8.CriticalSection != (_RTL_CRITICAL_SECTION *)0x0) {
                LOCK();
                *(int *)&((_LIST_ENTRY *)local_4d8.CriticalSection)->Blink =
                     *(int *)&((_LIST_ENTRY *)local_4d8.CriticalSection)->Blink + 1;
                UNLOCK();
              }
              p_Var61 = *(_LIST_ENTRY **)(lVar39 + 0x60);
              if (p_Var61 != (_LIST_ENTRY *)0x0) {
                LOCK();
                *(int *)&p_Var61->Blink = *(int *)&p_Var61->Blink + 1;
                UNLOCK();
              }
              local_4d8.ProcessLocksList.Blink._0_1_ = *(undefined1 *)(lVar39 + 0x68);
              local_4d8.ProcessLocksList.Flink = p_Var61;
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
              FUN_14716cfd3((_LIST_ENTRY *)local_5e8,local_720,&local_4d8,2);
              lVar39 = *(longlong *)
                        ((longlong)
                         &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).Flink +
                        lVar51);
              local_6d8 = (_RTL_CRITICAL_SECTION *)
                          CONCAT71(local_6d8._1_7_,*(undefined1 *)(lVar39 + 0x3a));
              lVar39 = *(longlong *)(lVar39 + 0x20);
              p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)
                        FUN_14716d181(lVar65,lVar39 + (ulonglong)*(uint *)(lVar39 + 0x188) * 0x20 +
                                             0x90);
              lVar39 = *(longlong *)
                        (*(longlong *)
                          ((longlong)
                           &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).Flink
                          + lVar51) + 0x18);
              lVar87 = *(longlong *)(lVar39 + 0x130);
              local_4f8._16_8_ = (*(double *)(lVar87 + 0x38) + *(double *)(lVar87 + 0x50)) * 0.5;
              local_4f8._8_8_ = (*(double *)(lVar87 + 0x30) + *(double *)(lVar87 + 0x48)) * 0.5;
              local_4f8._0_8_ = (*(double *)(lVar87 + 0x28) + *(double *)(lVar87 + 0x40)) * 0.5;
              p_Var42 = (_RTL_CRITICAL_SECTION *)FUN_14716d181(lVar65,lVar39 + 0xf0);
              puStack_7e0 = (undefined1 *)
                            FUN_14716d181(lVar65,*(longlong *)
                                                  (*(longlong *)
                                                    ((longlong)
                                                     &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90)
                                                       )->ProcessLocksList).Flink + lVar51) + 0x18)
                                                 + 0x50);
              lVar39 = *(longlong *)
                        ((longlong)
                         &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).Flink +
                        lVar51);
              uStack_7f0 = *(_LIST_ENTRY **)(lVar39 + 0x28);
              local_7e8 = *(ulonglong *)(lVar39 + 0x30);
              local_7b8 = (DWORD *)CONCAT71(local_7b8._1_7_,(undefined1)local_6d8);
              local_7c8 = (_LIST_ENTRY **)(local_508 + 0x10);
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                          CONCAT44(local_7f8._4_4_,
                                   *(undefined4 *)
                                    (*(longlong *)(*(longlong *)(lVar39 + 0x18) + 0x130) + 0xc));
              local_7b0 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              local_7d8 = p_Var42;
              local_7d0 = (_LIST_ENTRY *)local_5e8;
              local_7c0 = p_Var40;
              FUN_14443eca4(lVar65,local_708,*(undefined4 *)(lVar39 + 0x10),
                            *(undefined4 *)((undefined1 *)(uVar49 + 4) + lVar51));
              FUN_14908489c(&local_4d8);
              uVar55 = (ulonglong)local_6f8 & 0xffffffff;
            }
          }
          uVar47 = local_508._0_8_;
          lVar51 = lVar51 + 0xb0;
        } while (lVar84 * 0xb0 - lVar51 != 0);
        lVar84 = (longlong)(int)local_508._8_4_;
        if (lVar84 == 0) goto LAB_144431091;
        lVar51 = 0;
        do {
          if (((*(char *)((longlong)(uVar47 + 8) + lVar51) == '\0') &&
              (lVar65 = *(longlong *)
                         ((longlong)
                          &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink
                         + lVar51), *(char *)(lVar65 + 0x39) == '\x01')) &&
             ((*(longlong *)(lVar65 + 0x20) != 0 &&
              ((lVar39 = *(longlong *)(lVar65 + 0x3b8), lVar39 != 0 &&
               (*(int *)(lVar65 + 0x3c0) != -1)))))) {
            if (DAT_14cad2858 == 0) {
              local_4d8._0_8_ = FUN_144a7958c;
              local_7b0 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_14081d0ea;
              local_7b8 = (DWORD *)&LAB_146395584;
              local_7c8 = (_LIST_ENTRY **)&LAB_147a0ba80;
              local_7d0 = (_LIST_ENTRY *)&LAB_14575ccce;
              local_7d8 = (_RTL_CRITICAL_SECTION *)0x149e2b68a;
              puStack_7e0 = (undefined1 *)0x40000000000;
              local_7e8 = CONCAT44(local_7e8._4_4_,0x10000004);
              uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,0x10);
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_7f8._4_4_,0x1180);
              local_7c0 = &local_4d8;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar39 + 0x10) + 0x38))
                && (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar39 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) &&
               (plVar50 = *(longlong **)(lVar39 + 0x8a8), plVar50 != (longlong *)0x0)) {
              iVar76 = (**(code **)(*plVar50 + 0x90))(plVar50);
              iVar71 = *(int *)(*(longlong *)
                                 ((longlong)
                                  &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList
                                   ).Flink + lVar51) + 0x3c0);
              if ((-1 < iVar71) &&
                 (iVar71 < *(int *)(*(longlong *)(*(longlong *)plVar50[8] + (longlong)iVar76 * 8) +
                                   0x18))) {
                local_718 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_147d1cbd0(plVar50,iVar76,iVar71,0);
                lVar87 = local_720;
                lVar65 = *(longlong *)
                          (*(longlong *)
                            ((longlong)
                             &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).
                              Flink + lVar51) + 0x20);
                local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00)
                ;
                FUN_14716cfd3(&local_4d8,local_720,
                              lVar65 + (ulonglong)*(uint *)(lVar65 + 0x188) * 0x20 + 0x50,2);
                lVar65 = *(longlong *)
                          ((longlong)
                           &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink
                          + lVar51);
                local_6d8 = (_RTL_CRITICAL_SECTION *)
                            CONCAT71(local_6d8._1_7_,*(undefined1 *)(lVar65 + 0x3a));
                lVar65 = *(longlong *)(lVar65 + 0x20);
                local_6e8 = (PRTL_CRITICAL_SECTION_DEBUG)
                            FUN_14716d181(lVar87,lVar65 + (ulonglong)*(uint *)(lVar65 + 0x188) *
                                                          0x20 + 0x90);
                lVar65 = *(longlong *)
                          (*(longlong *)
                            ((longlong)
                             &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).
                              Flink + lVar51) + 0x18);
                lVar39 = *(longlong *)(lVar65 + 0x130);
                local_5e8._16_8_ = (*(double *)(lVar39 + 0x38) + *(double *)(lVar39 + 0x50)) * 0.5;
                local_5e8._8_8_ = (*(double *)(lVar39 + 0x30) + *(double *)(lVar39 + 0x48)) * 0.5;
                local_5e8._0_8_ = (*(double *)(lVar39 + 0x28) + *(double *)(lVar39 + 0x40)) * 0.5;
                p_Var42 = (_RTL_CRITICAL_SECTION *)FUN_14716d181(lVar87,lVar65 + 0xf0);
                puStack_7e0 = (undefined1 *)
                              FUN_14716d181(lVar87,*(longlong *)
                                                    (*(longlong *)
                                                      ((longlong)
                                                       &(((PRTL_CRITICAL_SECTION_DEBUG)
                                                         (uVar47 + 0x90))->ProcessLocksList).Flink +
                                                      lVar51) + 0x18) + 0x50);
                lVar65 = *(longlong *)
                          ((longlong)
                           &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink
                          + lVar51);
                uStack_7f0 = *(_LIST_ENTRY **)(lVar65 + 0x28);
                local_7e8 = *(ulonglong *)(lVar65 + 0x30);
                local_7b0 = local_718;
                local_7b8 = (DWORD *)CONCAT71(local_7b8._1_7_,(undefined1)local_6d8);
                local_7c0 = local_6e8;
                local_7c8 = (_LIST_ENTRY **)local_5e8;
                local_7d0 = (_LIST_ENTRY *)&local_4d8;
                local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                            CONCAT44(local_7f8._4_4_,
                                     *(undefined4 *)
                                      (*(longlong *)(*(longlong *)(lVar65 + 0x18) + 0x130) + 0xc));
                local_7d8 = p_Var42;
                FUN_14443eca4(lVar87,local_708,*(undefined4 *)(lVar65 + 0x10),
                              *(undefined4 *)((undefined1 *)(uVar47 + 4) + lVar51));
              }
            }
          }
          lVar51 = lVar51 + 0xb0;
        } while (lVar84 * 0xb0 - lVar51 != 0);
        iVar76 = local_508._8_4_;
      }
      uVar55 = (ulonglong)local_6f8 & 0xffffffff;
    }
LAB_14442ee04:
    uVar47 = local_508._0_8_;
    p_Var40 = local_708;
    if ((uVar55 & 1) != 0) {
      if (iVar76 == 0) {
        iVar76 = 0;
      }
      else {
        lVar84 = 0;
        do {
          if (*(char *)((longlong)(uVar47 + 8) + lVar84) == '\x02') {
            local_718 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                         (*(longlong *)
                           ((longlong)
                            &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).
                             Flink + lVar84) + 800);
            EnterCriticalSection((LPCRITICAL_SECTION)&local_718->CriticalSection);
            plVar50 = (longlong *)
                      (**(code **)(**(longlong **)
                                     (*(longlong *)
                                       ((longlong)
                                        &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->
                                         ProcessLocksList).Flink + lVar84) + 800) + 8))();
            lVar51 = *(longlong *)
                      ((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                      lVar84);
            lVar65 = *plVar50;
            lVar90 = (longlong)*(int *)(lVar51 + 0x130) * 0xa0;
            local_6f8 = (PRTL_CRITICAL_SECTION_DEBUG)(lVar65 + lVar90);
            plVar50 = (longlong *)(**(code **)(**(longlong **)(lVar51 + 800) + 0x10))();
            lVar51 = *(longlong *)
                      ((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                      lVar84);
            lVar39 = *plVar50;
            lVar87 = (longlong)*(int *)(lVar51 + 0x130) * 0xa0;
            local_6d8 = (_RTL_CRITICAL_SECTION *)(lVar39 + lVar87);
            fVar93 = (float)(**(code **)(**(longlong **)(lVar51 + 800) + 0x28))();
            lVar51 = *(longlong *)
                      (*(longlong *)
                        ((longlong)
                         &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                        lVar84) + 0x20);
            dVar6 = *(double *)(lVar39 + 0x78 + lVar87);
            dVar7 = *(double *)(lVar39 + 0x90 + lVar87);
            dVar8 = *(double *)(lVar39 + 0x70 + lVar87);
            dVar9 = *(double *)(lVar39 + 0x88 + lVar87);
            dVar98 = (*(double *)(lVar65 + 0x78 + lVar90) + *(double *)(lVar65 + 0x90 + lVar90)) *
                     0.5;
            dVar100 = (*(double *)(lVar65 + 0x70 + lVar90) + *(double *)(lVar65 + 0x88 + lVar90)) *
                      0.5;
            dVar99 = (*(double *)(lVar65 + 0x68 + lVar90) + *(double *)(lVar65 + 0x80 + lVar90)) *
                     0.5;
            dVar19 = (double)fVar93;
            uVar55 = (ulonglong)*(uint *)(lVar51 + 0x188);
            *(double *)(lVar51 + 0x150 + uVar55 * 0x18) =
                 ((*(double *)(lVar39 + 0x68 + lVar87) + *(double *)(lVar39 + 0x80 + lVar87)) * 0.5
                 - dVar99) * dVar19 + dVar99;
            *(double *)(lVar51 + 0x158 + uVar55 * 0x18) =
                 ((dVar8 + dVar9) * 0.5 - dVar100) * dVar19 + dVar100;
            *(double *)(lVar51 + 0x160 + uVar55 * 0x18) =
                 ((dVar6 + dVar7) * 0.5 - dVar98) * dVar19 + dVar98;
            lVar51 = *(longlong *)
                      ((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                      lVar84);
            puStack_7e0 = *(undefined1 **)(lVar51 + 0x20);
            local_7e8 = *(undefined8 *)(lVar51 + 0x30);
            uStack_7f0._0_4_ = *(undefined4 *)((undefined1 *)(uVar47 + 4) + lVar84);
            local_7f8._0_4_ =
                 *(undefined4 *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar84);
            FUN_144444c57(local_720,p_Var40,0,*(undefined4 *)(lVar51 + 0x10));
            FUN_149099af3(&local_4d8,local_720,local_6f8);
            FUN_149099af3(local_5e8,local_720,local_6d8);
            lVar51 = *(longlong *)
                      (*(longlong *)
                        ((longlong)
                         &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                        lVar84) + 0x20);
            p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)
                      FUN_14716d252(local_720,
                                    lVar51 + (ulonglong)*(uint *)(lVar51 + 0x188) * 0x20 + 0x50,0);
            lVar51 = *(longlong *)
                      (*(longlong *)
                        ((longlong)
                         &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                        lVar84) + 0x20);
            pDVar44 = (DWORD *)FUN_14716d181(local_720,
                                             lVar51 + 0x90 +
                                             (ulonglong)*(uint *)(lVar51 + 0x188) * 0x20);
            p_Var63 = (PRTL_CRITICAL_SECTION_DEBUG)
                      FUN_14716d181(local_720,
                                    *(longlong *)
                                     (*(longlong *)
                                       ((longlong)
                                        &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->
                                         ProcessLocksList).Flink + lVar84) + 0x18) + 0xf0);
            pp_Var46 = (_LIST_ENTRY **)
                       FUN_14716d181(local_720,
                                     *(longlong *)
                                      (*(longlong *)
                                        ((longlong)
                                         &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->
                                          ProcessLocksList).Flink + lVar84) + 0x18) + 0x110);
            local_7d0 = (_LIST_ENTRY *)
                        FUN_14716d181(local_720,
                                      *(longlong *)
                                       (*(longlong *)
                                         ((longlong)
                                          &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->
                                           ProcessLocksList).Flink + lVar84) + 0x18) + 0x50);
            local_4f8._8_8_ = local_5e8._8_8_;
            local_4f8._0_8_ = local_5e8._0_8_;
            local_4f8._16_8_ = local_5e8._16_8_;
            local_578 = local_4d8._0_8_;
            uStack_570 = local_4d8.CriticalSection;
            local_568 = local_4d8.ProcessLocksList.Flink;
            lVar51 = *(longlong *)
                      ((longlong)
                       &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink +
                      lVar84);
            lVar65 = *(longlong *)(*(longlong *)(lVar51 + 0x18) + 0x130);
            local_7d8 = (_RTL_CRITICAL_SECTION *)(local_508 + 0x10);
            puStack_7e0 = local_578;
            uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,fVar93);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                        CONCAT44(local_7f8._4_4_,*(undefined4 *)(lVar65 + 8));
            local_7e8 = CONCAT44(local_7e8._4_4_,0x3f800000);
            local_7c8 = pp_Var46;
            local_7c0 = p_Var63;
            local_7b8 = pDVar44;
            local_7b0 = p_Var75;
            FUN_14443e989(local_720,p_Var40,*(undefined4 *)(lVar51 + 0x10),
                          *(undefined4 *)(lVar65 + 0xc));
            if (&local_718->CriticalSection != (_RTL_CRITICAL_SECTION **)0x0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)&local_718->CriticalSection);
            }
          }
          lVar84 = lVar84 + 0xb0;
        } while ((longlong)iVar76 * 0xb0 - lVar84 != 0);
        iVar76 = local_508._8_4_;
      }
    }
    FUN_144438b5c(local_508._0_8_,iVar76);
    auVar53 = (undefined1  [8])local_508._0_8_;
    break;
  default:
switchD_14442c102_caseD_4:
    if ((param_2 & 0xfe) == 4) goto LAB_14442ca75;
    if (param_2 == 7) {
      local_5e8._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_5e8._8_4_ = 0;
      local_5e8._12_4_ = 0;
      local_710 = p_Var40;
      if (0 < DAT_14c7649f0) {
        uVar33._0_2_ = param_3[1].Type;
        uVar33._2_2_ = param_3[1].CreatorBackTraceIndex;
        if ((longlong)(int)uVar33 != 0) {
          local_5e8._8_4_ = uVar33;
          FUN_14717cbb8(local_5e8,0);
          memcpy((void *)local_5e8._0_8_,*(void **)&param_3->Flags,(longlong)(int)uVar33 << 3);
        }
        uVar36 = local_5e8._8_4_;
        uVar33 = *(uint *)&param_3[1].ProcessLocksList.Flink;
        if ((longlong)(int)uVar33 != 0) {
          uVar34 = uVar33 + local_5e8._8_4_;
          uVar35 = local_5e8._12_4_ - local_5e8._8_4_;
          local_5e8._8_4_ = uVar34;
          if (uVar35 < uVar33) {
            FUN_14717cbb8(local_5e8,uVar36);
          }
          memcpy((PRTL_CRITICAL_SECTION_DEBUG *)local_5e8._0_8_ + (int)uVar36,
                 param_3[1].CriticalSection,(longlong)(int)uVar33 << 3);
        }
        uVar36 = local_5e8._8_4_;
        uVar33 = param_3[1].EntryCount;
        if ((longlong)(int)uVar33 != 0) {
          uVar34 = uVar33 + local_5e8._8_4_;
          uVar35 = local_5e8._12_4_ - local_5e8._8_4_;
          local_5e8._8_4_ = uVar34;
          if (uVar35 < uVar33) {
            FUN_14717cbb8(local_5e8,uVar36);
          }
          memcpy((PRTL_CRITICAL_SECTION_DEBUG *)local_5e8._0_8_ + (int)uVar36,
                 param_3[1].ProcessLocksList.Blink,(longlong)(int)uVar33 << 3);
        }
        uVar36 = local_5e8._8_4_;
        uVar47 = local_5e8._0_8_;
        local_710 = (PRTL_CRITICAL_SECTION_DEBUG)local_5e8;
        if (1 < (int)local_5e8._8_4_) {
          memset((void *)((longlong)&local_4d8 + 0x10),0,0x2f0);
          uVar49 = local_5e8._0_8_;
          local_4d8.CriticalSection =
               (_RTL_CRITICAL_SECTION *)(uVar47 + (ulonglong)(uint)uVar36 * 8 + -8);
          local_5e8._0_2_ = (undefined2)uVar47;
          local_5e8._2_2_ = SUB82(uVar47,2);
          local_5e8._4_4_ = SUB84(uVar47,4);
          local_4d8.Type = local_5e8._0_2_;
          local_4d8.CreatorBackTraceIndex = local_5e8._2_2_;
          local_4d8._4_4_ = local_5e8._4_4_;
          local_5e8._0_8_ = uVar49;
          fVar93 = logf((float)(int)uVar36);
          local_4d8.ProcessLocksList.Flink._0_4_ = (int)(longlong)(fVar93 + fVar93);
          puVar52 = (ulonglong *)&local_4d8;
          do {
            uVar73 = *puVar52;
            uVar54 = puVar52[1];
            iVar71 = *(int *)(puVar52 + 2);
            iVar76 = (int)(uVar54 - uVar73 >> 3);
            uVar82 = (ulonglong)(iVar76 + 1);
            uVar83 = uVar73;
            uVar66 = uVar73;
            uVar55 = uVar54;
            if (iVar71 != 0) {
LAB_14442e915:
              if (8 < (int)(uint)uVar82) {
                uVar73 = (ulonglong)((uint)uVar82 >> 1);
                uVar47 = *(undefined8 *)(uVar66 + uVar73 * 8);
                *(undefined8 *)(uVar66 + uVar73 * 8) = *(undefined8 *)uVar66;
                *(undefined8 *)uVar66 = uVar47;
                lVar84 = uVar55 + 8;
                uVar73 = uVar66;
                do {
                  uVar82 = uVar73 + 8;
                  uVar85 = uVar73 + 8;
                  do {
                    uVar73 = uVar85;
                    uVar89 = uVar82;
                    if (uVar55 < uVar73) break;
                    uVar82 = uVar89 + 8;
                    uVar85 = uVar73 + 8;
                  } while (*(int *)(*(longlong *)uVar73 + 0x10) <=
                           *(int *)(*(longlong *)uVar66 + 0x10));
                  uVar82 = lVar84 + 0xfffffffffffffff0;
                  do {
                    lVar51 = lVar84;
                    uVar85 = uVar82;
                    lVar84 = lVar51 + 0xfffffffffffffff8;
                    if ((ulonglong)lVar84 <= uVar66) break;
                    uVar82 = uVar85 + 0xfffffffffffffff8;
                  } while (*(int *)(*(longlong *)uVar66 + 0x10) <=
                           *(int *)(*(longlong *)lVar84 + 0x10));
                  if ((ulonglong)lVar84 < uVar73) goto LAB_14442e9a6;
                  uVar47 = *(undefined8 *)uVar73;
                  *(undefined8 *)uVar73 = *(undefined8 *)lVar84;
                  *(undefined8 *)lVar84 = uVar47;
                } while( true );
              }
              if (uVar66 < uVar55) {
                do {
                  uVar73 = uVar66;
                  if (uVar66 + 8 <= uVar55) {
                    lVar84 = *(longlong *)uVar66;
                    uVar54 = uVar66 + 8;
                    do {
                      lVar51 = *(longlong *)uVar54;
                      uVar82 = uVar54;
                      if (*(int *)(*(longlong *)uVar54 + 0x10) <= *(int *)(lVar84 + 0x10)) {
                        lVar51 = lVar84;
                        uVar82 = uVar73;
                      }
                      uVar73 = uVar82;
                      uVar54 = uVar54 + 8;
                      lVar84 = lVar51;
                    } while (uVar54 <= uVar55);
                  }
                  uVar47 = *(undefined8 *)uVar73;
                  *(undefined8 *)uVar73 = *(undefined8 *)uVar55;
                  *(undefined8 *)uVar55 = uVar47;
                  uVar55 = uVar55 + 0xfffffffffffffff8;
                } while (uVar66 < uVar55);
              }
              goto LAB_14442ebfc;
            }
LAB_14442ea44:
            iVar71 = (int)uVar82;
            if (iVar71 != 0) {
              iVar76 = (iVar76 - (iVar76 + -1 >> 0x1f)) + -1 >> 1;
              iVar81 = iVar76;
joined_r0x00014442ea6b:
              do {
                iVar80 = iVar76 * 2 + 1;
                if (iVar80 < iVar71) {
                  iVar79 = iVar76 * 2 + 2;
                  if ((iVar79 < iVar71) &&
                     (*(int *)(*(longlong *)(uVar73 + (longlong)iVar80 * 8) + 0x10) <=
                      *(int *)(*(longlong *)(uVar73 + (longlong)iVar79 * 8) + 0x10))) {
                    iVar80 = iVar79;
                  }
                  lVar84 = *(longlong *)(uVar73 + (longlong)iVar80 * 8);
                  lVar51 = *(longlong *)(uVar73 + (longlong)iVar76 * 8);
                  if (*(int *)(lVar51 + 0x10) < *(int *)(lVar84 + 0x10)) {
                    *(longlong *)(uVar73 + (longlong)iVar76 * 8) = lVar84;
                    *(longlong *)(uVar73 + (longlong)iVar80 * 8) = lVar51;
                    iVar76 = iVar80;
                    goto joined_r0x00014442ea6b;
                  }
                }
                bVar56 = iVar81 != 0;
                iVar76 = iVar81 + -1;
                iVar81 = iVar76;
              } while (bVar56);
              if (1 < iVar71) {
                uVar47 = *(undefined8 *)uVar73;
                *(undefined8 *)uVar73 = *(undefined8 *)(uVar73 + (uVar82 - 1) * 8);
                *(undefined8 *)(uVar73 + (uVar82 - 1) * 8) = uVar47;
                if (iVar71 != 2) {
                  do {
                    uVar55 = uVar82 - 1;
                    iVar71 = 0;
                    iVar81 = 1;
                    iVar76 = 0;
                    do {
                      iVar71 = iVar71 + 2;
                      iVar80 = iVar81;
                      if (((longlong)iVar71 < (longlong)uVar55) &&
                         (*(int *)(*(longlong *)(uVar73 + (longlong)iVar81 * 8) + 0x10) <=
                          *(int *)(*(longlong *)(uVar73 + (longlong)iVar71 * 8) + 0x10))) {
                        iVar80 = iVar71;
                      }
                      lVar84 = *(longlong *)(uVar73 + (longlong)iVar80 * 8);
                      lVar51 = *(longlong *)(uVar73 + (longlong)iVar76 * 8);
                      if (*(int *)(lVar84 + 0x10) <= *(int *)(lVar51 + 0x10)) break;
                      *(longlong *)(uVar73 + (longlong)iVar76 * 8) = lVar84;
                      *(longlong *)(uVar73 + (longlong)iVar80 * 8) = lVar51;
                      iVar71 = iVar80 * 2;
                      iVar81 = iVar80 * 2 + 1;
                      iVar76 = iVar80;
                    } while ((longlong)iVar81 < (longlong)uVar55);
                    uVar47 = *(undefined8 *)uVar73;
                    *(undefined8 *)uVar73 = *(undefined8 *)(uVar73 + (uVar82 - 2) * 8);
                    *(undefined8 *)(uVar73 + (uVar82 - 2) * 8) = uVar47;
                    uVar82 = uVar55;
                  } while (2 < uVar55);
                }
              }
            }
LAB_14442ebfc:
            puVar52 = puVar52 + 0xfffffffffffffffd;
            param_1 = local_720;
          } while (&local_4d8 <= puVar52);
        }
      }
      p_Var61 = param_3[2].ProcessLocksList.Blink;
      local_7c0 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var61[1].Blink;
      local_618 = p_Var61[0x4d].Blink;
      local_7c8 = &local_618;
      local_610 = p_Var61[0x4e].Flink;
      local_7d0 = param_3[3].ProcessLocksList.Flink;
      local_7d8 = param_3[3].CriticalSection;
      local_7e8._0_4_ = param_3[1].Flags;
      local_7e8._4_2_ = param_3[1].CreatorBackTraceIndexHigh;
      local_7e8._6_2_ = param_3[1].SpareWORD;
      uStack_7f0 = (_LIST_ENTRY *)&param_3[2].CriticalSection;
      uVar47._0_4_ = param_3[2].EntryCount;
      uVar47._4_4_ = param_3[2].ContentionCount;
      puStack_7e0 = *(undefined1 **)param_3;
      local_7f8 = local_710;
      FUN_144421c9a(param_1,param_3->CriticalSection,uVar47);
      goto LAB_14442ec92;
    }
    p_Var75 = p_Var40;
    local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
    local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
    if (param_2 != 6) goto LAB_14442f20d;
LAB_14442e372:
    local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
    local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
    if (*(int *)&p_Var75->CriticalSection == 0) goto LAB_14442f20d;
    p_Var63 = *(PRTL_CRITICAL_SECTION_DEBUG *)param_3;
    p_Var70 = (PRTL_CRITICAL_SECTION_DEBUG)param_3->CriticalSection;
    p_Var64 = *(PRTL_CRITICAL_SECTION_DEBUG *)&param_3[1].Flags;
    LVar11 = *(LONG *)&p_Var40->CriticalSection;
    uVar36 = *(undefined4 *)&(param_3->ProcessLocksList).Flink;
    cVar30 = FUN_144b0f89b(0,*(undefined2 *)
                              (&DAT_14ca85070 +
                              (longlong)*(int *)(*(longlong *)&param_3[2].EntryCount + 8) * 2));
    local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
    local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
    if (cVar30 == '\0') goto LAB_14442f20d;
    local_6c0 = (_RTL_CRITICAL_SECTION *)
                CONCAT44(local_6c0._4_4_,
                         2 - (uint)(((ulonglong)(*(_LIST_ENTRY **)&p_Var42->LockCount)[6].Flink & 2)
                                   == 0));
    local_508._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_508._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
    iVar71 = *(int *)&p_Var75->CriticalSection;
    if (iVar71 < 0) goto LAB_144434052;
    local_718 = param_3;
    local_708 = p_Var70;
    local_6f8 = p_Var63;
    local_6e8 = p_Var64;
    local_6d8 = p_Var42;
    local_658 = LVar11;
    if (iVar71 == 0) {
LAB_14442e442:
      local_678 = (_RTL_CRITICAL_SECTION *)0x0;
      local_6b8 = (longlong *)0x0;
      local_710 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      local_698 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_698._4_4_,uVar36);
      FUN_144438d1c(local_508);
      iVar71 = *(int *)&p_Var75->CriticalSection;
      if ((longlong)iVar71 == 0) goto LAB_14442e442;
      uVar55 = *(ulonglong *)p_Var75;
      lVar84 = 0;
      local_710 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_6b8 = (longlong *)0x0;
      local_678 = (_RTL_CRITICAL_SECTION *)0x0;
      do {
        lVar51 = *(longlong *)(uVar55 + lVar84);
        if (*(int *)(lVar51 + 0x3a8) == 0) {
          cVar30 = (**(code **)(**(longlong **)(lVar51 + 0x168) + 0x1f0))();
          uVar47 = local_508._8_8_;
          if ((cVar30 == '\0') ||
             (bVar27 = 1, (*(byte *)(*(longlong *)(lVar51 + 0x168) + 0x70) & 1) == 0)) {
            bVar27 = (*(byte *)(*(longlong *)(lVar51 + 0x168) + 0x72) & 0x20) >> 5;
          }
          lVar65 = (longlong)(int)local_508._8_4_;
          uVar33 = local_508._8_4_ + 1;
          local_508._8_4_ = uVar33;
          if ((uint)local_508._12_4_ < uVar33) {
            FUN_144438e92(local_508,uVar47 & 0xffffffff);
          }
          uVar47 = local_508._0_8_;
          p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(local_508._0_8_ + lVar65 * 8 * 0x30);
          FUN_144438df2(p_Var40);
          uVar36 = *(undefined4 *)(lVar51 + 0x10);
          ((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->Type = (short)uVar36;
          ((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->CreatorBackTraceIndex =
               (short)((uint)uVar36 >> 0x10);
          ((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + (lVar65 * 8 + 6) * 0x30))->EntryCount =
               (int)lVar51;
          ((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + (lVar65 * 8 + 6) * 0x30))->ContentionCount =
               (int)((ulonglong)lVar51 >> 0x20);
          *(undefined4 *)
           ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->CriticalSection
           + 4) = *(undefined4 *)(*(longlong *)(lVar51 + 0x3a0) + 0x48c);
          *(undefined4 *)
           &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->ProcessLocksList).Flink =
               *(undefined4 *)(*(longlong *)(lVar51 + 0x3a0) + 0x490);
          *(undefined4 *)
           ((longlong)
            &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->ProcessLocksList).Flink +
           4) = *(undefined4 *)(*(longlong *)(lVar51 + 0x3a0) + 0x494);
          *(undefined4 *)
           &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->ProcessLocksList).Blink =
               *(undefined4 *)(*(longlong *)(lVar51 + 0x3a0) + 0x498);
          uVar31 = FUN_14909b932(lVar51);
          p_Var70 = local_708;
          lVar39 = local_720;
          *(undefined1 *)
           ((longlong)
            &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->ProcessLocksList).Blink +
           4) = uVar31;
          ((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->EntryCount =
               *(DWORD *)(lVar51 + 0x3ac);
          uVar33 = (uint)*(float *)(*(longlong *)(lVar51 + 0x3a0) + 0x47c);
          *(uint *)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + lVar65 * 8 * 0x30))->field_0x4 = uVar33;
          if ((int)uVar33 < 0) {
            *(undefined1 *)&p_Var40->ContentionCount = 0;
            *(undefined1 *)((longlong)&p_Var40->ContentionCount + 1) =
                 *(undefined1 *)(*(longlong *)(lVar51 + 0x3a0) + 0x460);
            uVar31 = 0;
          }
          else {
            if ((int)uVar33 < *(int *)(*(longlong *)(lVar51 + 0x3a0) + 0x438)) {
              uVar31 = *(undefined1 *)
                        (*(longlong *)(*(longlong *)(lVar51 + 0x3a0) + 0x430) + (ulonglong)uVar33);
            }
            else {
              uVar31 = 0;
            }
            *(undefined1 *)&p_Var40->ContentionCount = uVar31;
            *(undefined1 *)((longlong)&p_Var40->ContentionCount + 1) =
                 *(undefined1 *)(*(longlong *)(lVar51 + 0x3a0) + 0x460);
            if ((int)uVar33 < *(int *)(*(longlong *)(lVar51 + 0x3a0) + 0x448)) {
              uVar31 = *(undefined1 *)
                        (*(longlong *)(*(longlong *)(lVar51 + 0x3a0) + 0x440) + (ulonglong)uVar33);
            }
            else {
              uVar31 = 0;
            }
          }
          *(undefined1 *)((longlong)&p_Var40->ContentionCount + 2) = uVar31;
          *(int *)&p_Var40->CriticalSection = (int)*(float *)(*(longlong *)(lVar51 + 0x3a0) + 0x478)
          ;
          lVar65 = *(longlong *)(lVar51 + 0x48);
          *(bool *)((longlong)&p_Var40->ContentionCount + 3) = lVar65 != 0;
          *(undefined2 *)&p_Var40->Flags = 0;
          *(undefined1 *)((longlong)&p_Var40->Flags + 2) = 0;
          *(byte *)((longlong)&p_Var40->Flags + 3) = bVar27 & *(byte *)(lVar51 + 0xec);
          if (lVar65 == 0) {
            uVar73 = FUN_14716d181(local_720,*(longlong *)(lVar51 + 0x40) + 0x50);
            p_Var40[1].Type = (short)uVar73;
            p_Var40[1].CreatorBackTraceIndex = (short)(uVar73 >> 0x10);
            *(int *)&p_Var40[1].field_0x4 = (int)(uVar73 >> 0x20);
            p_Var40[1].EntryCount = 0;
            p_Var40[1].ContentionCount = 0;
            p_Var42 = (_RTL_CRITICAL_SECTION *)
                      FUN_14716d181(lVar39,*(longlong *)(lVar51 + 0x40) + 0x70);
            p_Var40[1].CriticalSection = p_Var42;
            p_Var40[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
            p_Var61 = (_LIST_ENTRY *)0x0;
          }
          else {
            *(undefined4 *)
             (*(longlong *)(lVar51 + 0x48) + 0x18c +
             (ulonglong)*(uint *)(*(longlong *)(lVar51 + 0x48) + 0x188) * 4) = local_698._0_4_;
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
            FUN_14716cfd3(&local_4d8,local_720,
                          *(longlong *)(lVar51 + 0x48) +
                          (ulonglong)*(uint *)(*(longlong *)(lVar51 + 0x48) + 0x188) * 0x20 + 0x50,3
                         );
            auVar24 = (undefined1  [16])local_4d8._0_16_;
            p_Var40[2].ProcessLocksList.Flink = local_4d8.ProcessLocksList.Flink;
            p_Var40[2].Type = local_4d8.Type;
            p_Var40[2].CreatorBackTraceIndex = local_4d8.CreatorBackTraceIndex;
            *(undefined4 *)&p_Var40[2].field_0x4 = local_4d8._4_4_;
            *(uint *)&p_Var40[2].CriticalSection = (uint)local_4d8.CriticalSection;
            *(uint *)((longlong)&p_Var40[2].CriticalSection + 4) = local_4d8.CriticalSection._4_4_;
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
            local_4d8._0_16_ = auVar24;
            FUN_14716cfd3(&local_4d8,lVar39,
                          *(longlong *)(lVar51 + 0x48) +
                          (ulonglong)(1 - *(int *)(*(longlong *)(lVar51 + 0x48) + 0x188)) * 0x20 +
                          0x50,3);
            *(_LIST_ENTRY **)&p_Var40[2].Flags = local_4d8.ProcessLocksList.Flink;
            *(undefined4 *)&p_Var40[2].ProcessLocksList.Blink = local_4d8._0_4_;
            *(undefined4 *)((longlong)&p_Var40[2].ProcessLocksList.Blink + 4) = local_4d8._4_4_;
            p_Var40[2].EntryCount = (uint)local_4d8.CriticalSection;
            p_Var40[2].ContentionCount = local_4d8.CriticalSection._4_4_;
            p_Var61 = p_Var40[2].ProcessLocksList.Flink;
            *(_RTL_CRITICAL_SECTION **)(p_Var40 + 1) = p_Var40[2].CriticalSection;
            *(_LIST_ENTRY **)&p_Var40[1].EntryCount = p_Var61;
            p_Var42 = (_RTL_CRITICAL_SECTION *)
                      FUN_14716d181(lVar39,*(longlong *)(lVar51 + 0x48) +
                                           (ulonglong)
                                           *(uint *)(*(longlong *)(lVar51 + 0x48) + 0x188) * 0x20 +
                                           0x90);
            p_Var40[1].CriticalSection = p_Var42;
            p_Var61 = (_LIST_ENTRY *)FUN_14716d181(lVar39,*(longlong *)(lVar51 + 0x48) + 0xd0);
            p_Var40[1].ProcessLocksList.Flink = p_Var61;
            uVar47 = FUN_14716d252(lVar39,*(longlong *)(lVar51 + 0x48) + 0xd0,0);
            p_Var40[1].Flags = (int)uVar47;
            p_Var40[1].CreatorBackTraceIndexHigh = (short)((ulonglong)uVar47 >> 0x20);
            p_Var40[1].SpareWORD = (short)((ulonglong)uVar47 >> 0x30);
            p_Var61 = (_LIST_ENTRY *)FUN_14716d181(lVar39,*(longlong *)(lVar51 + 0x48) + 0xf0);
          }
          lVar39 = local_720;
          p_Var40[1].ProcessLocksList.Blink = p_Var61;
          lVar65 = *(longlong *)&p_Var40[6].EntryCount;
          if (*(longlong *)(lVar65 + 0x78) == 0) {
            *(undefined1 *)&p_Var40->Flags = 0;
          }
          else {
            bVar56 = (*(uint *)(lVar65 + 0x84) & (uint)local_6c0) != 0;
            *(bool *)&p_Var40->Flags = bVar56;
            if (bVar56) {
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
              FUN_14716cfd3(&local_4d8,local_720,*(longlong *)(lVar65 + 0x78) + 0x50,3);
              auVar24 = (undefined1  [16])local_4d8._0_16_;
              p_Var40[3].ProcessLocksList.Flink = local_4d8.ProcessLocksList.Flink;
              p_Var40[3].Type = local_4d8.Type;
              p_Var40[3].CreatorBackTraceIndex = local_4d8.CreatorBackTraceIndex;
              *(undefined4 *)&p_Var40[3].field_0x4 = local_4d8._4_4_;
              *(uint *)&p_Var40[3].CriticalSection = (uint)local_4d8.CriticalSection;
              *(uint *)((longlong)&p_Var40[3].CriticalSection + 4) = local_4d8.CriticalSection._4_4_
              ;
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
              local_4d8._0_16_ = auVar24;
              FUN_14716cfd3(&local_4d8,lVar39,
                            *(longlong *)(*(longlong *)&p_Var40[6].EntryCount + 0x78) + 0x70,3);
              *(_LIST_ENTRY **)&p_Var40[3].Flags = local_4d8.ProcessLocksList.Flink;
              *(undefined4 *)&p_Var40[3].ProcessLocksList.Blink = local_4d8._0_4_;
              *(undefined4 *)((longlong)&p_Var40[3].ProcessLocksList.Blink + 4) = local_4d8._4_4_;
              p_Var40[3].EntryCount = (uint)local_4d8.CriticalSection;
              p_Var40[3].ContentionCount = local_4d8.CriticalSection._4_4_;
              local_678 = (_RTL_CRITICAL_SECTION *)
                          CONCAT71(local_4d8.ProcessLocksList.Flink._1_7_,1);
            }
          }
          cVar30 = *(char *)((longlong)&(p_Var40->ProcessLocksList).Blink + 4);
          local_710 = (PRTL_CRITICAL_SECTION_DEBUG)
                      CONCAT71((int7)((ulonglong)local_710 >> 8),(byte)local_710 | cVar30 == '\x02')
          ;
          local_6b8 = (longlong *)
                      CONCAT71((int7)((ulonglong)local_6b8 >> 8),(byte)local_6b8 | cVar30 == '\x01')
          ;
          iVar76 = *(int *)(lVar51 + 0x10);
          p_Var61 = local_6e8[2].ProcessLocksList.Flink;
          uVar36 = *(undefined4 *)&p_Var61[(longlong)iVar76 * 8].Flink;
          p_Var40[4].Type = (short)uVar36;
          p_Var40[4].CreatorBackTraceIndex = (short)((uint)uVar36 >> 0x10);
          FUN_1490946c2(&p_Var40[4].CriticalSection);
          p_Var61 = p_Var61 + (longlong)iVar76 * 8 + 2;
          pDVar44 = &p_Var40[4].EntryCount;
          for (lVar65 = 0xc; lVar65 != 0; lVar65 = lVar65 + -1) {
            *(_LIST_ENTRY **)pDVar44 = p_Var61->Flink;
            p_Var61 = (_LIST_ENTRY *)&p_Var61->Blink;
            pDVar44 = pDVar44 + 2;
          }
          memset(&local_4d8,0,0x370);
          FUN_149094788(*(longlong *)(lVar51 + 0x3a0) + 0x10,&local_4d8);
          FUN_1490846d2(&local_4d8);
        }
        lVar84 = lVar84 + 8;
      } while ((longlong)iVar71 * 8 != lVar84);
    }
    local_530._24_8_ = (longlong *)0x0;
    local_530._32_8_ = 0;
    uVar31 = FUN_14352174c(local_6d8);
    p_Var40 = local_6e8;
    local_6c0 = (_RTL_CRITICAL_SECTION *)CONCAT71(local_6c0._1_7_,uVar31);
    local_530._8_8_ = (longlong *)0x0;
    local_530._16_8_ = 0;
    local_4d8._0_16_ = ZEXT816(0);
    iVar71 = local_508._8_4_;
    if ((int)local_508._8_4_ < 0) goto LAB_144434052;
    if (local_508._8_4_ != 0) {
      FUN_1471b0e7a(&local_4d8);
      uVar47 = local_508._0_8_;
      lVar84 = (longlong)(int)local_508._8_4_;
      if (lVar84 != 0) {
        lVar51 = 0;
        do {
          lVar65 = *(longlong *)
                    ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount + lVar51
                    );
          if (*(char *)(lVar65 + 0x10c) == '\x01') {
            FUN_149097c36(lVar65,(longlong)local_530 + 8);
            uVar49 = FUN_14716d181(local_720,
                                   *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)
                                        ((longlong)
                                         &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->
                                          EntryCount + lVar51) + 0x3a0) + 8) + 0x60);
            iVar71 = (uint)local_4d8.CriticalSection;
            lVar65 = (longlong)(int)(uint)local_4d8.CriticalSection;
            uVar33 = (uint)local_4d8.CriticalSection + 1;
            local_4d8.CriticalSection._0_4_ = uVar33;
            if (local_4d8.CriticalSection._4_4_ < uVar33) {
              FUN_1471b0eda(&local_4d8,iVar71);
            }
            *(undefined8 *)(local_4d8._0_8_ + lVar65 * 8) = uVar49;
            uVar49 = FUN_14716d181(local_720,
                                   *(longlong *)
                                    (*(longlong *)
                                      (*(longlong *)
                                        ((longlong)
                                         &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->
                                          EntryCount + lVar51) + 0x3a0) + 8) + 0x20);
            iVar71 = (uint)local_4d8.CriticalSection;
            lVar65 = (longlong)(int)(uint)local_4d8.CriticalSection;
            uVar33 = (uint)local_4d8.CriticalSection + 1;
            local_4d8.CriticalSection._0_4_ = uVar33;
            if (local_4d8.CriticalSection._4_4_ < uVar33) {
              FUN_1471b0eda(&local_4d8,iVar71);
            }
            *(undefined8 *)(local_4d8._0_8_ + lVar65 * 8) = uVar49;
          }
          else {
            *(undefined1 *)(*(longlong *)(*(longlong *)(lVar65 + 0x3a0) + 8) + 0x80) = 0;
          }
          lVar51 = lVar51 + 0x180;
        } while (lVar84 * 0x180 != lVar51);
      }
    }
    p_Var42 = local_6d8;
    p_Var75 = local_718;
    lVar84 = local_720;
    iVar71._0_2_ = local_718[3].Type;
    iVar71._2_2_ = local_718[3].CreatorBackTraceIndex;
    if ((0 < iVar71) && (0 < (int)local_530._16_4_)) {
      p_Var69 = *(_LIST_ENTRY **)&p_Var40[1].EntryCount;
      cVar30 = *(char *)&p_Var69[6].Blink;
      uStack_7f0 = (_LIST_ENTRY *)(*(longlong *)(local_720 + 0x70) + 7U & 0xfffffffffffffff8);
      p_Var61 = uStack_7f0 + 4;
      if (*(_LIST_ENTRY **)(local_720 + 0x78) < p_Var61) {
        plVar50 = (longlong *)(local_720 + 0x70);
        FUN_140023dd8(plVar50,0x48);
        uStack_7f0 = (_LIST_ENTRY *)(*plVar50 + 7U & 0xfffffffffffffff8);
        p_Var61 = uStack_7f0 + 4;
      }
      *(_LIST_ENTRY **)(lVar84 + 0x70) = p_Var61;
      uStack_7f0->Blink = p_Var69->Blink;
      uStack_7f0[1].Flink = (_LIST_ENTRY *)0x0;
      *(undefined1 *)&uStack_7f0[1].Blink = 2;
      *(undefined8 *)((longlong)&uStack_7f0[1].Blink + 4) = 0xffffffffffffffff;
      *(undefined1 *)&uStack_7f0[2].Blink = 1;
      uStack_7f0->Flink = (_LIST_ENTRY *)&PTR_FUN_14a1fb3e8;
      *(byte *)&uStack_7f0[3].Flink = cVar30 >> 7 & 0x1c;
      *(undefined2 *)((longlong)&uStack_7f0[3].Flink + 1) = 0;
      uStack_7f0[3].Blink = p_Var69;
      iVar71 = *(int *)(lVar84 + 0x1a0);
      *(uint *)(lVar84 + 0x1a0) = iVar71 + 1U;
      if (*(uint *)(lVar84 + 0x1a4) < iVar71 + 1U) {
        FUN_1447568fc(lVar84 + 0x198,iVar71);
      }
      *(_LIST_ENTRY **)(*(longlong *)(lVar84 + 0x198) + (longlong)iVar71 * 8) = uStack_7f0;
      *(int *)((longlong)&uStack_7f0[1].Blink + 4) = *(int *)(lVar84 + 0x1a0) + -1;
      local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((longlong)local_530 + 8);
      FUN_14443dce6(lVar84,p_Var70,**(undefined8 **)&p_Var75[2].Flags,local_6f8);
      FUN_1471807f4(lVar84,p_Var70,
                    *(undefined2 *)(&DAT_14ca85070 + (longlong)(int)p_Var42[0x136].SpinCount * 2),
                    &local_4d8);
    }
    if ((_LIST_ENTRY *)local_4d8._0_8_ != (_LIST_ENTRY *)0x0) {
      FUN_1400020a8();
    }
    local_4d8._0_16_ = ZEXT816(0);
    iVar71 = local_508._8_4_;
    if ((int)local_508._8_4_ < 0) goto LAB_144434052;
    if (local_508._8_4_ != 0) {
      FUN_1471b0e7a(&local_4d8);
      if ((longlong)(int)local_508._8_4_ != 0) {
        lVar84 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        lVar51 = (longlong)(int)local_508._8_4_ * 0x180;
        p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(local_508._0_8_ + 0xc0);
        do {
          if ((-1 < *(int *)&p_Var40[-4].CriticalSection) &&
             ((p_Var40[-4].EntryCount == 2 ||
              (*(char *)((longlong)&p_Var40[-4].ContentionCount + 2) == '\x01')))) {
            local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(*(longlong *)&p_Var40[2].EntryCount + 0x68)
            ;
            uStack_7f0 = *(_LIST_ENTRY **)(*(longlong *)&p_Var40[2].EntryCount + 0x70);
            FUN_1444429d4(local_720,p_Var70,*(int *)&p_Var40[-4].CriticalSection,p_Var40);
            lVar39 = DAT_14c9d2450;
            lVar65 = *(longlong *)
                      (**(longlong **)(*(longlong *)&p_Var40[2].EntryCount + 0x70) +
                      (longlong)*(int *)&p_Var40[-4].CriticalSection * 8);
            iVar71 = *(int *)(lVar84 + 0xc60);
            if (iVar71 == 0x40000002) {
              uVar55 = 0;
            }
            else {
              bVar56 = true;
              if ((DAT_14c86a9f8 == '\x01') && (iVar71 != 2)) {
                if (iVar71 == 1) {
                  DVar37 = FUN_140ad26c0();
                  DVar38 = GetCurrentThreadId();
                  bVar56 = DVar37 == DVar38;
                }
                else {
                  bVar56 = false;
                }
              }
              uVar55 = (ulonglong)(bVar56 ^ 1);
            }
            p_Var42 = local_6d8;
            lVar87 = lVar65 + 0x58;
            if (0 < *(int *)(lVar39 + uVar55 * 4)) {
              lVar87 = lVar87 + (ulonglong)*(uint *)(lVar65 + 0x120) * 0x20;
            }
            uVar47 = FUN_14716d181(local_720,lVar87);
            iVar71 = (uint)local_4d8.CriticalSection;
            lVar65 = (longlong)(int)(uint)local_4d8.CriticalSection;
            uVar33 = (uint)local_4d8.CriticalSection + 1;
            local_4d8.CriticalSection._0_4_ = uVar33;
            if (local_4d8.CriticalSection._4_4_ < uVar33) {
              FUN_1471b0eda(&local_4d8,iVar71);
            }
            *(undefined8 *)(local_4d8._0_8_ + lVar65 * 8) = uVar47;
            p_Var70 = local_708;
          }
          p_Var40 = p_Var40 + 8;
          lVar51 = lVar51 + -0x180;
        } while (lVar51 != 0);
      }
    }
    FUN_1471807f4(local_720,p_Var70,
                  *(undefined2 *)(&DAT_14ca85070 + (longlong)(int)p_Var42[0x136].SpinCount * 2),
                  &local_4d8);
    if ((_LIST_ENTRY *)local_4d8._0_8_ != (_LIST_ENTRY *)0x0) {
      FUN_1400020a8();
    }
    p_Var40 = local_6e8;
    local_4d8._0_16_ = ZEXT816(0);
    iVar71 = local_508._8_4_;
    if ((int)local_508._8_4_ < 0) goto LAB_144434052;
    if (local_508._8_4_ != 0) {
      FUN_1471b0e7a(&local_4d8);
      uVar47 = local_508._0_8_;
      lVar84 = (longlong)(int)local_508._8_4_;
      if (lVar84 != 0) {
        lVar51 = 0;
        do {
          lVar65 = local_720;
          iVar71 = *(int *)((longlong)(uVar47 + 8) + lVar51);
          if ((-1 < iVar71) &&
             ((*(int *)((longlong)(uVar47 + 0x20) + lVar51) == 2 ||
              (*(char *)((longlong)(uVar47 + 0x24) + lVar51 + 2) == '\x01')))) {
            lVar39 = *(longlong *)
                      ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                      lVar51);
            puStack_7e0 = *(undefined1 **)(lVar39 + 0x48);
            local_7e8 = *(ulonglong *)(lVar39 + 0x70);
            uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,iVar71);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                        CONCAT44(local_7f8._4_4_,
                                 *(undefined4 *)((undefined1 *)(uVar47 + 4) + lVar51));
            FUN_144444c57(local_720,p_Var70,CONCAT71((int7)(local_7e8 >> 8),1),
                          *(undefined4 *)(lVar39 + 0x10));
            lVar39 = *(longlong *)
                      (*(longlong *)
                        ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                        lVar51) + 0x48);
            uVar49 = FUN_14716d181(lVar65,lVar39 + (ulonglong)*(uint *)(lVar39 + 0x188) * 0x20 +
                                          0x90);
            iVar71 = (uint)local_4d8.CriticalSection;
            lVar65 = (longlong)(int)(uint)local_4d8.CriticalSection;
            uVar33 = (uint)local_4d8.CriticalSection + 1;
            local_4d8.CriticalSection._0_4_ = uVar33;
            if (local_4d8.CriticalSection._4_4_ < uVar33) {
              FUN_1471b0eda(&local_4d8,iVar71);
            }
            *(undefined8 *)(local_4d8._0_8_ + lVar65 * 8) = uVar49;
          }
          uVar49 = local_508._0_8_;
          lVar51 = lVar51 + 0x180;
        } while (lVar84 * 0x180 != lVar51);
        lVar84 = (longlong)(int)local_508._8_4_;
        if (lVar84 != 0) {
          lVar51 = 0;
          do {
            lVar65 = local_720;
            iVar71 = *(int *)((longlong)(uVar49 + 8) + lVar51);
            if ((-1 < iVar71) &&
               ((*(char *)((longlong)(uVar49 + 0x24) + lVar51) != '\0' ||
                (*(char *)((longlong)(uVar49 + 0x24) + lVar51 + 1) == '\x01')))) {
              lVar39 = *(longlong *)
                        ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x120))->EntryCount +
                        lVar51);
              puStack_7e0 = *(undefined1 **)(lVar39 + 0x48);
              uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,iVar71);
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                          CONCAT44(local_7f8._4_4_,
                                   *(undefined4 *)((undefined1 *)(uVar49 + 4) + lVar51));
              local_7e8 = 0;
              FUN_144444c57(local_720,p_Var70,
                            CONCAT71((uint7)(uint3)((uint)*(undefined4 *)
                                                           ((undefined1 *)(uVar49 + 4) + lVar51) >>
                                                   8),1),*(undefined4 *)(lVar39 + 0x10));
              lVar39 = *(longlong *)
                        (*(longlong *)
                          ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x120))->EntryCount +
                          lVar51) + 0x48);
              uVar47 = FUN_14716d181(lVar65,lVar39 + (ulonglong)*(uint *)(lVar39 + 0x188) * 0x20 +
                                            0x90);
              iVar71 = (uint)local_4d8.CriticalSection;
              lVar65 = (longlong)(int)(uint)local_4d8.CriticalSection;
              uVar33 = (uint)local_4d8.CriticalSection + 1;
              local_4d8.CriticalSection._0_4_ = uVar33;
              if (local_4d8.CriticalSection._4_4_ < uVar33) {
                FUN_1471b0eda(&local_4d8,iVar71);
              }
              *(undefined8 *)(local_4d8._0_8_ + lVar65 * 8) = uVar47;
            }
            lVar51 = lVar51 + 0x180;
          } while (lVar84 * 0x180 != lVar51);
        }
      }
    }
    uVar47 = local_508._0_8_;
    if (((ulonglong)local_710 & 1) != 0) {
      lVar84 = (longlong)(int)local_508._8_4_;
      if (lVar84 != 0) {
        lVar51 = 0;
        do {
          lVar65 = local_720;
          if ((*(char *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Blink + lVar51 + 4) == '\x02')
             && (*(char *)((longlong)(uVar47 + 0x24) + lVar51 + 3) == '\x01')) {
            lVar39 = *(longlong *)
                      ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                      lVar51);
            lVar87 = *(longlong *)(lVar39 + 0x20);
            lVar39 = *(longlong *)(lVar39 + 0x48);
            uVar33 = *(uint *)(lVar39 + 0x188);
            puVar5 = (undefined4 *)(lVar87 + 0x150 + (ulonglong)*(uint *)(lVar87 + 0x188) * 0x18);
            uVar36 = *puVar5;
            uVar94 = puVar5[1];
            uVar58 = puVar5[2];
            uVar92 = puVar5[3];
            *(undefined8 *)(lVar39 + 0x160 + (ulonglong)uVar33 * 0x18) =
                 *(undefined8 *)(lVar87 + 0x160 + (ulonglong)*(uint *)(lVar87 + 0x188) * 0x18);
            puVar5 = (undefined4 *)(lVar39 + 0x150 + (ulonglong)uVar33 * 0x18);
            *puVar5 = uVar36;
            puVar5[1] = uVar94;
            puVar5[2] = uVar58;
            puVar5[3] = uVar92;
            lVar39 = *(longlong *)
                      ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                      lVar51);
            puStack_7e0 = *(undefined1 **)(lVar39 + 0x48);
            local_7e8 = *(ulonglong *)(lVar39 + 0x70);
            uVar36 = *(undefined4 *)((longlong)(uVar47 + 8) + lVar51);
            uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,uVar36);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffff00000000);
            FUN_144444c57(local_720,p_Var70,CONCAT71((uint7)(uint3)((uint)uVar36 >> 8),1),
                          *(undefined4 *)(lVar39 + 0x10));
            lVar39 = *(longlong *)
                      (*(longlong *)
                        ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                        lVar51) + 0x48);
            uVar49 = FUN_14716d181(lVar65,lVar39 + (ulonglong)*(uint *)(lVar39 + 0x188) * 0x20 +
                                          0x90);
            iVar71 = (uint)local_4d8.CriticalSection;
            lVar65 = (longlong)(int)(uint)local_4d8.CriticalSection;
            uVar33 = (uint)local_4d8.CriticalSection + 1;
            local_4d8.CriticalSection._0_4_ = uVar33;
            if (local_4d8.CriticalSection._4_4_ < uVar33) {
              FUN_1471b0eda(&local_4d8,iVar71);
            }
            *(undefined8 *)(local_4d8._0_8_ + lVar65 * 8) = uVar49;
          }
          lVar51 = lVar51 + 0x180;
        } while (lVar84 * 0x180 != lVar51);
      }
    }
    p_Var42 = local_6d8;
    lVar84 = local_720;
    FUN_1471807f4(local_720,p_Var70,
                  *(undefined2 *)(&DAT_14ca85070 + (longlong)(int)local_6d8[0x136].SpinCount * 2),
                  &local_4d8);
    if ((_LIST_ENTRY *)local_4d8._0_8_ != (_LIST_ENTRY *)0x0) {
      FUN_1400020a8();
    }
    p_Var75 = p_Var40 + 1;
    FUN_147198ed2(p_Var75,&DAT_14c9dd490,local_658);
    iVar71 = 0;
    if ((longlong)(int)local_508._8_4_ != 0) {
      lVar51 = 0;
      iVar71 = 0;
      do {
        if (*(char *)((longlong)(local_508._0_8_ + 0x24) + lVar51 + 3) == '\x01') {
          *(int *)(*(ulonglong *)p_Var75 +
                  (longlong)
                  *(int *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)local_508._0_8_ + lVar51) * 8) =
               iVar71;
          *(undefined4 *)
           (*(ulonglong *)p_Var75 + 4 +
           (longlong)*(int *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)local_508._0_8_ + lVar51) * 8
           ) = *(undefined4 *)
                (*(longlong *)
                  (*(longlong *)
                    ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(local_508._0_8_ + 0x120))->EntryCount
                    + lVar51) + 0x3a0) + 0x400);
          iVar71 = iVar71 + *(int *)(*(longlong *)
                                      (*(longlong *)
                                        ((longlong)
                                         &((PRTL_CRITICAL_SECTION_DEBUG)(local_508._0_8_ + 0x120))->
                                          EntryCount + lVar51) + 0x3a0) + 0x400);
        }
        lVar51 = lVar51 + 0x180;
      } while ((longlong)(int)local_508._8_4_ * 0x180 != lVar51);
    }
    iVar71 = iVar71 + (uint)(iVar71 == 0);
    uVar33 = iVar71 * 6;
    uVar34 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar34 = DAT_14ca84e48;
    }
    local_4d8.CriticalSection._0_4_ = 0x4109;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = local_4d8.ProcessLocksList.Blink;
    local_4d8.ProcessLocksList = (LIST_ENTRY)(auVar24 << 0x40);
    uVar35 = DAT_14ca84e48;
    if (uVar33 < DAT_14ca84e48) {
      uVar35 = uVar33;
    }
    local_4d8._4_4_ = uVar35 + (uVar35 == 0);
    local_4d8._0_4_ = uVar34 + (uVar34 == 0);
    plVar50 = (longlong *)(lVar84 + 0x70);
    p_Var69 = (_LIST_ENTRY *)(*(longlong *)(lVar84 + 0x70) + 0xfU & 0xfffffffffffffff0);
    p_Var61 = p_Var69 + 0x15;
    if (*(_LIST_ENTRY **)(lVar84 + 0x78) < p_Var61) {
      FUN_140023dd8(plVar50,0x160);
      p_Var69 = (_LIST_ENTRY *)(*plVar50 + 0xfU & 0xfffffffffffffff0);
      p_Var61 = p_Var69 + 0x15;
    }
    *(_LIST_ENTRY **)(lVar84 + 0x70) = p_Var61;
    local_6b0 = plVar50;
    FUN_1456bd266(p_Var69,L"Hair.Transient.ClusterAABBs",&local_4d8,0);
    iVar76 = *(int *)(lVar84 + 400);
    *(uint *)(lVar84 + 400) = iVar76 + 1U;
    if (*(uint *)(lVar84 + 0x194) < iVar76 + 1U) {
      FUN_144737178(lVar84 + 0x188,iVar76);
    }
    plVar50 = local_6b0;
    *(_LIST_ENTRY **)(*(longlong *)(lVar84 + 0x188) + (longlong)iVar76 * 8) = p_Var69;
    *(int *)((longlong)&p_Var69[7].Blink + 4) = *(int *)(lVar84 + 400) + -1;
    p_Var40[1].ProcessLocksList.Flink = p_Var69;
    p_Var61 = (_LIST_ENTRY *)(*(longlong *)(lVar84 + 0x70) + 7U & 0xfffffffffffffff8);
    pp_Var46 = &p_Var61[4].Blink;
    if (*(undefined1 **)(lVar84 + 0x78) < pp_Var46) {
      FUN_140023dd8(local_6b0,0x50);
      p_Var61 = (_LIST_ENTRY *)(*plVar50 + 7U & 0xfffffffffffffff8);
      pp_Var46 = &p_Var61[4].Blink;
    }
    local_6a8 = (double)(lVar84 + 0x198);
    *(_LIST_ENTRY ***)(lVar84 + 0x70) = pp_Var46;
    p_Var61->Blink = p_Var69->Blink;
    p_Var61[1].Flink = (_LIST_ENTRY *)0x0;
    *(undefined1 *)&p_Var61[1].Blink = 3;
    *(undefined8 *)((longlong)&p_Var61[1].Blink + 4) = 0xffffffffffffffff;
    p_Var61->Flink = (_LIST_ENTRY *)&PTR_FUN_14a1fb168;
    *(undefined1 *)&p_Var61[2].Blink = 0x1d;
    *(undefined8 *)((longlong)&p_Var61[2].Blink + 4) = 0xffffffff00000000;
    p_Var61[3].Blink = (_LIST_ENTRY *)0x0;
    p_Var61[4].Flink = p_Var69;
    iVar76 = *(int *)(lVar84 + 0x1a0);
    *(uint *)(lVar84 + 0x1a0) = iVar76 + 1U;
    if (*(uint *)(lVar84 + 0x1a4) < iVar76 + 1U) {
      FUN_1447568fc(local_6a8,iVar76);
    }
    plVar50 = local_6b0;
    *(_LIST_ENTRY **)(*(longlong *)(lVar84 + 0x198) + (longlong)iVar76 * 8) = p_Var61;
    *(int *)((longlong)&p_Var61[1].Blink + 4) = *(int *)(lVar84 + 0x1a0) + -1;
    p_Var40[1].ProcessLocksList.Blink = p_Var61;
    p_Var88 = (_RTL_CRITICAL_SECTION *)p_Var40[1].ProcessLocksList.Flink;
    local_5e8._0_8_ = *(longlong *)(lVar84 + 0x70) + 7U & 0xfffffffffffffff8;
    pLVar48 = &((PRTL_CRITICAL_SECTION_DEBUG)(local_5e8._0_8_ + 0x30))->ProcessLocksList;
    if (*(undefined1 **)(lVar84 + 0x78) < pLVar48) {
      FUN_140023dd8(local_6b0,0x48);
      local_5e8._0_8_ = *plVar50 + 7U & 0xfffffffffffffff8;
      pLVar48 = &((PRTL_CRITICAL_SECTION_DEBUG)(local_5e8._0_8_ + 0x30))->ProcessLocksList;
    }
    *(LIST_ENTRY **)(lVar84 + 0x70) = pLVar48;
    ((PRTL_CRITICAL_SECTION_DEBUG)local_5e8._0_8_)->CriticalSection =
         *(_RTL_CRITICAL_SECTION **)&p_Var88->LockCount;
    (((PRTL_CRITICAL_SECTION_DEBUG)local_5e8._0_8_)->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
    *(undefined1 *)&(((PRTL_CRITICAL_SECTION_DEBUG)local_5e8._0_8_)->ProcessLocksList).Blink = 2;
    *(undefined8 *)
     ((longlong)&(((PRTL_CRITICAL_SECTION_DEBUG)local_5e8._0_8_)->ProcessLocksList).Blink + 4) =
         0xffffffffffffffff;
    *(undefined1 *)&((PRTL_CRITICAL_SECTION_DEBUG)local_5e8._0_8_)->Flags = 1;
    *(undefined ***)local_5e8._0_8_ = &PTR_FUN_14a1fb3e8;
    ((PRTL_CRITICAL_SECTION_DEBUG)(local_5e8._0_8_ + 0x30))->Type = 0x1d;
    *(undefined1 *)&((PRTL_CRITICAL_SECTION_DEBUG)(local_5e8._0_8_ + 0x30))->CreatorBackTraceIndex =
         0;
    ((PRTL_CRITICAL_SECTION_DEBUG)(local_5e8._0_8_ + 0x30))->CriticalSection = p_Var88;
    iVar76 = *(int *)(lVar84 + 0x1a0);
    *(uint *)(lVar84 + 0x1a0) = iVar76 + 1U;
    if (*(uint *)(lVar84 + 0x1a4) < iVar76 + 1U) {
      FUN_1447568fc(local_6a8,iVar76);
    }
    plVar50 = local_6b0;
    *(undefined8 *)(*(longlong *)(lVar84 + 0x198) + (longlong)iVar76 * 8) = local_5e8._0_8_;
    *(int *)((longlong)&(((PRTL_CRITICAL_SECTION_DEBUG)local_5e8._0_8_)->ProcessLocksList).Blink + 4
            ) = *(int *)(lVar84 + 0x1a0) + -1;
    p_Var69 = *(_LIST_ENTRY **)&p_Var40->EntryCount;
    local_4f8._0_8_ = *(longlong *)(lVar84 + 0x70) + 7U & 0xfffffffffffffff8;
    p_Var61 = (_LIST_ENTRY *)(local_4f8._0_8_ + 0x40);
    if (*(_LIST_ENTRY **)(lVar84 + 0x78) < p_Var61) {
      FUN_140023dd8(local_6b0,0x48);
      local_4f8._0_8_ = *plVar50 + 7U & 0xfffffffffffffff8;
      p_Var61 = (_LIST_ENTRY *)(local_4f8._0_8_ + 0x40);
    }
    LVar11 = local_658;
    *(_LIST_ENTRY **)(lVar84 + 0x70) = p_Var61;
    ((_LIST_ENTRY *)local_4f8._0_8_)->Blink = p_Var69->Blink;
    ((_LIST_ENTRY *)(local_4f8._0_8_ + 0x10))->Flink = (_LIST_ENTRY *)0x0;
    *(undefined1 *)&((_LIST_ENTRY *)(local_4f8._0_8_ + 0x10))->Blink = 2;
    *(undefined8 *)((longlong)&((_LIST_ENTRY *)(local_4f8._0_8_ + 0x10))->Blink + 4) =
         0xffffffffffffffff;
    *(undefined1 *)&((_LIST_ENTRY *)(local_4f8._0_8_ + 0x20))->Blink = 1;
    ((_LIST_ENTRY *)local_4f8._0_8_)->Flink = (_LIST_ENTRY *)&PTR_FUN_14a1fb3e8;
    *(undefined2 *)&((_LIST_ENTRY *)(local_4f8._0_8_ + 0x30))->Flink = 0x1d;
    *(undefined1 *)((longlong)&((_LIST_ENTRY *)(local_4f8._0_8_ + 0x30))->Flink + 2) = 0;
    ((_LIST_ENTRY *)(local_4f8._0_8_ + 0x30))->Blink = p_Var69;
    iVar76 = *(int *)(lVar84 + 0x1a0);
    *(uint *)(lVar84 + 0x1a0) = iVar76 + 1U;
    if (*(uint *)(lVar84 + 0x1a4) < iVar76 + 1U) {
      FUN_1447568fc(local_6a8,iVar76);
    }
    *(undefined8 *)(*(longlong *)(lVar84 + 0x198) + (longlong)iVar76 * 8) = local_4f8._0_8_;
    *(int *)((longlong)&((_LIST_ENTRY *)(local_4f8._0_8_ + 0x10))->Blink + 4) =
         *(int *)(lVar84 + 0x1a0) + -1;
    FUN_14444169d(lVar84,p_Var70,iVar71,local_5e8);
    FUN_14444169d(lVar84,p_Var70,LVar11,local_508 + 0x10);
    uVar47 = local_508._0_8_;
    lVar51 = (longlong)(int)local_508._8_4_;
    if (lVar51 == 0) {
      local_4f8._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_4f8._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
    }
    else {
      lVar65 = 0;
      do {
        FUN_14909a1a6(&local_4d8,lVar84,
                      *(undefined8 *)
                       (*(longlong *)
                         ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                         lVar65) + 0x3a0));
        *(undefined8 *)((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x150))->Flags + lVar65)
             = uStack_4a8;
        pDVar44 = (DWORD *)((longlong)
                            &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x150))->ProcessLocksList).
                             Blink + lVar65);
        *pDVar44 = local_4d8.EntryCount;
        pDVar44[1] = local_4d8.ContentionCount;
        pDVar44[2] = local_4d8.Flags;
        pDVar44[3] = local_4d8._44_4_;
        puVar5 = (undefined4 *)
                 ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x150))->CriticalSection +
                 lVar65);
        *puVar5 = local_4d8.ProcessLocksList.Flink._0_4_;
        puVar5[1] = local_4d8.ProcessLocksList.Flink._4_4_;
        puVar5[2] = (int)local_4d8.ProcessLocksList.Blink;
        puVar5[3] = local_4d8.ProcessLocksList.Blink._4_4_;
        pDVar44 = (DWORD *)((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->Flags +
                           lVar65);
        *pDVar44 = local_4d8._0_4_;
        pDVar44[1] = local_4d8._4_4_;
        pDVar44[2] = (uint)local_4d8.CriticalSection;
        pDVar44[3] = local_4d8.CriticalSection._4_4_;
        lVar65 = lVar65 + 0x180;
      } while (lVar51 * 0x180 != lVar65);
      local_4f8._0_8_ = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_4f8._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
      iVar71 = local_508._8_4_;
      if ((int)local_508._8_4_ < 0) goto LAB_144434052;
      if (local_508._8_4_ != 0) {
        FUN_1471b0e7a(local_508 + 0x10);
        if ((longlong)(int)local_508._8_4_ != 0) {
          lVar84 = (longlong)(int)local_508._8_4_ * 0x180;
          pDVar44 = &((PRTL_CRITICAL_SECTION_DEBUG)(local_508._0_8_ + 0x120))->Flags;
          do {
            lVar51 = local_720;
            if ((*(char *)(pDVar44 + 0xffffffffffffffb5) != '\x01') &&
               (*(char *)((longlong)pDVar44 + 0xfffffffffffffedf) == '\x01')) {
              if ((*(char *)(pDVar44 + 0xffffffffffffffb7) == '\0') &&
                 (((*(char *)((longlong)pDVar44 + 0xfffffffffffffede) == '\0' &&
                   (*(char *)((longlong)pDVar44 + 0xfffffffffffffedd) == '\0')) &&
                  (lVar65 = *(longlong *)(pDVar44 + 0xfffffffffffffffe),
                  *(char *)(lVar65 + 0x3b) != '\x01')))) {
                iVar71 = pDVar44[0xffffffffffffffb6];
                bVar56 = false;
                local_578 = (undefined1  [8])0x0;
                local_530._0_8_ = (HANDLE)0x0;
                local_540.Blink = (HANDLE)0x0;
                uVar31 = 0;
                local_540.Flink._0_4_ = 0;
                local_540.Flink._4_4_ = 0;
              }
              else {
                uVar31 = (undefined1)
                         ((*(uint *)(*(longlong *)
                                      (*(longlong *)
                                        (*(longlong *)(pDVar44 + 0xfffffffffffffffe) + 0x50) + 0x90)
                                    + 8) & 2) >> 1);
                iVar71 = pDVar44[0xffffffffffffffb6];
                lVar65 = *(longlong *)(*(longlong *)(pDVar44 + 0xfffffffffffffffe) + 0x20);
                local_578 = (undefined1  [8])
                            FUN_14716d181(local_720,
                                          lVar65 + (ulonglong)*(uint *)(lVar65 + 0x188) * 0x20 +
                                          0x50);
                local_530._0_8_ =
                     FUN_14716d181(lVar51,*(longlong *)
                                           (*(longlong *)(pDVar44 + 0xfffffffffffffffe) + 0x18) +
                                          0x50);
                local_540.Blink =
                     (_LIST_ENTRY *)
                     FUN_14716d181(lVar51,*(longlong *)
                                           (*(longlong *)(pDVar44 + 0xfffffffffffffffe) + 0x50) +
                                          0x70);
                local_540.Flink =
                     (_LIST_ENTRY *)
                     FUN_14716d181(lVar51,*(longlong *)
                                           (*(longlong *)(pDVar44 + 0xfffffffffffffffe) + 0x50) +
                                          0x50);
                lVar65 = *(longlong *)(pDVar44 + 0xfffffffffffffffe);
                bVar56 = true;
              }
              local_548 = (undefined1  [8])
                          FUN_14716d181(lVar51,*(longlong *)(lVar65 + 0x40) + 0x110);
              local_550 = (PRTL_CRITICAL_SECTION_DEBUG)
                          FUN_14716d181(lVar51,*(longlong *)
                                                (*(longlong *)(pDVar44 + 0xfffffffffffffffe) + 0x40)
                                               + 0x50);
              if ((bVar56) && (iVar71 == 2)) {
                lVar51 = *(longlong *)(pDVar44 + 0xfffffffffffffffe);
                local_718 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar51 + 0x28);
                local_710 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar51 + 0x30);
LAB_144433b2a:
                uVar47 = *(undefined8 *)(lVar51 + 0x68);
                local_698 = *(PRTL_CRITICAL_SECTION_DEBUG *)(lVar51 + 0x70);
              }
              else {
                if (iVar71 == 2) {
                  lVar51 = *(longlong *)(pDVar44 + 0xfffffffffffffffe);
                  local_710 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                  local_718 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                  goto LAB_144433b2a;
                }
                local_718 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                local_710 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                local_698 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
                uVar47 = 0;
              }
              if (bVar56) {
                local_558 = (PRTL_CRITICAL_SECTION_DEBUG)
                            FUN_14716d181(local_720,
                                          *(longlong *)
                                           (*(longlong *)(pDVar44 + 0xfffffffffffffffe) + 0x20) +
                                          (ulonglong)
                                          *(uint *)(*(longlong *)
                                                     (*(longlong *)(pDVar44 + 0xfffffffffffffffe) +
                                                     0x20) + 0x188) * 0x20 + 0x90);
                local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(pDVar44 + 0xfffffffffffffffe);
                p_Var61 = (local_7f8->ProcessLocksList).Blink[0x13].Flink;
                local_4d8.CriticalSection =
                     (_RTL_CRITICAL_SECTION *)
                     (((double)p_Var61[3].Flink + (double)p_Var61[4].Blink) * 0.5);
                local_4d8._0_8_ =
                     (_LIST_ENTRY *)(((double)p_Var61[2].Blink + (double)p_Var61[4].Flink) * 0.5);
                local_4d8.ProcessLocksList.Flink =
                     (_LIST_ENTRY *)(((double)p_Var61[3].Blink + (double)p_Var61[5].Flink) * 0.5);
              }
              else {
                local_4d8.ProcessLocksList.Flink = DAT_14c8464f0;
                local_4d8.CriticalSection = DAT_14c8464e8;
                local_4d8._0_8_ = DAT_14c8464e0;
                local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)(pDVar44 + 0xfffffffffffffffe);
                local_558 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              }
              local_738 = (undefined1 *)(pDVar44 + 0xffffffffffffffc0);
              local_730 = (undefined1 *)(pDVar44 + 0xffffffffffffffc2);
              local_7a0 = (LIST_ENTRY *)(pDVar44 + 0xffffffffffffffbc);
              p_Var61 = local_7f8[1].ProcessLocksList.Flink[0x13].Flink;
              local_5e8._16_8_ = ((double)p_Var61[3].Blink + (double)p_Var61[5].Flink) * 0.5;
              local_5e8._8_8_ = ((double)p_Var61[3].Flink + (double)p_Var61[4].Blink) * 0.5;
              local_5e8._0_8_ = ((double)p_Var61[2].Blink + (double)p_Var61[4].Flink) * 0.5;
              uVar58._0_2_ = local_7f8[5].Type;
              uVar58._2_2_ = local_7f8[5].CreatorBackTraceIndex;
              local_778 = local_710;
              local_780 = local_698;
              local_788 = local_718;
              local_7c8 = (_LIST_ENTRY **)
                          CONCAT44(local_7c8._4_4_,
                                   *(undefined4 *)&local_7f8[5].ProcessLocksList.Blink);
              local_7d8 = (_RTL_CRITICAL_SECTION *)
                          CONCAT44(local_7d8._4_4_,pDVar44[0xffffffffffffffb0]);
              puStack_7e0 = (undefined1 *)
                            CONCAT44(puStack_7e0._4_4_,
                                     *(undefined4 *)((longlong)&p_Var61[1].Flink + 4));
              local_7e8 = CONCAT44(local_7e8._4_4_,pDVar44[0xffffffffffffffb2]);
              local_740 = local_578;
              local_748 = local_548 + 0x18;
              local_750 = (PRTL_CRITICAL_SECTION_DEBUG *)(local_548 + 0x10);
              local_758 = (PRTL_CRITICAL_SECTION_DEBUG *)(local_548 + 8);
              local_768 = (undefined8 *)local_548;
              local_770 = &local_550;
              local_798 = (_LIST_ENTRY **)&local_558;
              local_7a8 = &local_4d8;
              local_7b0 = (PRTL_CRITICAL_SECTION_DEBUG)local_5e8;
              local_7d0 = (_LIST_ENTRY *)CONCAT44(local_7d0._4_4_,uVar58);
              uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,pDVar44[0xffffffffffffffb1]);
              local_728 = 1;
              local_7c0 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7c0 & 0xffffffff00000000);
              local_7b8 = pDVar44;
              local_790 = uVar47;
              local_760 = uVar31;
              FUN_14443f12b(local_720,local_708,
                            *(undefined2 *)
                             (&DAT_14ca85070 + (longlong)(int)local_6d8[0x136].SpinCount * 2),
                            local_6f8);
              uVar47 = local_4f8._8_8_;
              lVar51 = (longlong)(int)local_4f8._8_4_;
              uVar33 = local_4f8._8_4_ + 1;
              local_4f8._8_4_ = uVar33;
              if ((uint)local_4f8._12_4_ < uVar33) {
                FUN_1471b0eda(local_508 + 0x10,uVar47 & 0xffffffff);
              }
              ((PRTL_CRITICAL_SECTION_DEBUG *)local_4f8._0_8_)[lVar51] =
                   (PRTL_CRITICAL_SECTION_DEBUG)*(undefined8 *)(pDVar44 + 0xffffffffffffffba);
              *(undefined4 *)(*(longlong *)(pDVar44 + 0xffffffffffffffc6) + 0x58) = 0x70;
              p_Var42 = local_6d8;
            }
            pDVar44 = pDVar44 + 0x60;
            lVar84 = lVar84 + -0x180;
          } while (lVar84 != 0);
        }
      }
    }
    p_Var75 = local_708;
    p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(local_508 + 0x10);
    p_Var63 = local_708;
    FUN_1471807f4(local_720,local_708,
                  *(undefined2 *)(&DAT_14ca85070 + (longlong)(int)p_Var42[0x136].SpinCount * 2),
                  p_Var40);
    if ((PRTL_CRITICAL_SECTION_DEBUG)local_4f8._0_8_ != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FUN_1400020a8();
    }
    lVar84 = local_720;
    if ((longlong)(int)local_508._8_4_ != 0) {
      lVar51 = (longlong)(int)local_508._8_4_ * 0x180;
      pLVar62 = (LONG *)((longlong)(local_508._0_8_ + 8) + 4);
      p_Var70 = (PRTL_CRITICAL_SECTION_DEBUG)local_508._0_8_;
      do {
        if (((char)pLVar62[4] != '\x01') && (*(char *)((longlong)pLVar62 + 0x1b) == '\x01')) {
          if (*(char *)(*(longlong *)(*(longlong *)(pLVar62 + 0x4d) + 0x3a0) + 0x382) == '\0') {
            pLVar43 = (LONG *)((longlong)&p_Var70->CriticalSection + 4);
LAB_144432574:
            uVar33 = *pLVar43;
            uVar34 = pLVar62[2];
            p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)(uVar33 - uVar34);
            if (uVar33 < uVar34 || uVar33 - uVar34 == 0) goto LAB_1444325ae;
          }
          else {
            pLVar43 = pLVar62;
            if (DAT_14cbfabb0 < 1) goto LAB_144432574;
            uVar33 = *pLVar62;
            uVar34 = 0;
            p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)uVar33;
          }
          uStack_7f0 = *(_LIST_ENTRY **)(pLVar62 + 0x17);
          local_7e8 = *(ulonglong *)(pLVar62 + 0x1f);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_7f8._4_4_,uVar33);
          p_Var63 = p_Var75;
          FUN_14443e7f0(lVar84,p_Var75,uVar34,p_Var40);
          *(undefined4 *)(*(longlong *)(pLVar62 + 0x1b) + 0x58) = 0x70;
        }
LAB_1444325ae:
        uVar47 = local_508._0_8_;
        p_Var70 = p_Var70 + 8;
        pLVar62 = pLVar62 + 0x60;
        lVar51 = lVar51 + -0x180;
      } while (lVar51 != 0);
      if (((ulonglong)local_6b8 & 1) != 0) {
        if (local_508._8_4_ == 0) goto LAB_144432c12;
        p_Var70 = (PRTL_CRITICAL_SECTION_DEBUG)((longlong)(int)local_508._8_4_ * 0x180);
        p_Var64 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        local_698 = p_Var70;
        do {
          if (((undefined1 *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Blink + 4))
              [(longlong)p_Var64] == '\x01') {
            local_718 = (PRTL_CRITICAL_SECTION_DEBUG)
                        (*(longlong *)
                          (*(longlong *)
                            ((longlong)&p_Var64->Type +
                            (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount)
                          + 800) + 8);
            EnterCriticalSection((LPCRITICAL_SECTION)local_718);
            plVar50 = (longlong *)
                      (**(code **)(**(longlong **)
                                     (*(longlong *)
                                       ((longlong)&p_Var64->Type +
                                       (longlong)
                                       &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount)
                                     + 800) + 8))();
            lVar84 = *(longlong *)
                      ((longlong)&p_Var64->Type +
                      (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount);
            lVar51 = *plVar50;
            lVar87 = (longlong)*(int *)(lVar84 + 0x130) * 0xa0;
            plVar50 = (longlong *)(**(code **)(**(longlong **)(lVar84 + 800) + 0x10))();
            lVar84 = *(longlong *)
                      ((longlong)&p_Var64->Type +
                      (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount);
            lVar65 = *plVar50;
            lVar90 = (longlong)*(int *)(lVar84 + 0x130) * 0xa0;
            local_710 = (PRTL_CRITICAL_SECTION_DEBUG)(lVar65 + lVar90);
            fVar93 = (float)(**(code **)(**(longlong **)(lVar84 + 800) + 0x28))();
            p_Var40 = local_710;
            lVar84 = local_720;
            local_6b8 = (longlong *)(lVar51 + lVar87);
            FUN_149099af3(&local_4d8,local_720,(longlong *)(lVar51 + lVar87));
            FUN_149099af3(local_5e8,lVar84,p_Var40);
            p_Var75 = local_708;
            lVar39 = local_720;
            dVar6 = *(double *)(lVar65 + 0x78 + lVar90);
            dVar7 = *(double *)(lVar65 + 0x90 + lVar90);
            dVar8 = *(double *)(lVar65 + 0x70 + lVar90);
            dVar9 = *(double *)(lVar65 + 0x88 + lVar90);
            dVar98 = (*(double *)(lVar51 + 0x78 + lVar87) + *(double *)(lVar51 + 0x90 + lVar87)) *
                     0.5;
            dVar100 = (*(double *)(lVar51 + 0x70 + lVar87) + *(double *)(lVar51 + 0x88 + lVar87)) *
                      0.5;
            dVar99 = (*(double *)(lVar51 + 0x68 + lVar87) + *(double *)(lVar51 + 0x80 + lVar87)) *
                     0.5;
            dVar19 = (double)fVar93;
            lVar84 = *(longlong *)
                      (*(longlong *)
                        ((longlong)&p_Var64->Type +
                        (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount) +
                      0x48);
            uVar55 = (ulonglong)*(uint *)(lVar84 + 0x188);
            *(double *)(lVar84 + 0x150 + uVar55 * 0x18) =
                 ((*(double *)(lVar65 + 0x68 + lVar90) + *(double *)(lVar65 + 0x80 + lVar90)) * 0.5
                 - dVar99) * dVar19 + dVar99;
            *(double *)(lVar84 + 0x158 + uVar55 * 0x18) =
                 ((dVar8 + dVar9) * 0.5 - dVar100) * dVar19 + dVar100;
            *(double *)(lVar84 + 0x160 + uVar55 * 0x18) =
                 ((dVar6 + dVar7) * 0.5 - dVar98) * dVar19 + dVar98;
            if (0 < *(int *)(lVar51 + 0x18 + lVar87)) {
              fVar95 = (*(float *)&p_Var40[2].field_0x4 - *(float *)((longlong)local_6b8 + 100)) *
                       fVar93 + *(float *)((longlong)local_6b8 + 100);
              *(float *)(*(longlong *)
                          ((longlong)&p_Var64->Type +
                          (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount) +
                        0xbc) = fVar95 + fVar95;
            }
            lVar84 = *(longlong *)
                      ((longlong)&p_Var64->Type +
                      (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount);
            puStack_7e0 = *(undefined1 **)(lVar84 + 0x48);
            local_7e8 = *(undefined8 *)(lVar84 + 0x70);
            uVar36 = *(undefined4 *)((longlong)(uVar47 + 8) + (longlong)p_Var64);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffff00000000);
            uStack_7f0._0_4_ = uVar36;
            FUN_144444c57(local_720,local_708,CONCAT71((uint7)(uint3)((uint)uVar36 >> 8),1),
                          *(undefined4 *)(lVar84 + 0x10));
            p_Var70 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                       ((longlong)&p_Var64->Type +
                       (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->EntryCount);
            lVar84 = *(longlong *)
                      (*(longlong *)
                        ((longlong)&p_Var64->Type +
                        (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount) +
                      0x48);
            pDVar44 = (DWORD *)FUN_14716d181(lVar39,lVar84 + (ulonglong)*(uint *)(lVar84 + 0x188) *
                                                             0x20 + 0x90);
            p_Var45 = (PRTL_CRITICAL_SECTION_DEBUG)
                      FUN_14716d181(lVar39,*(longlong *)
                                            (*(longlong *)
                                              ((longlong)&p_Var64->Type +
                                              (longlong)
                                              &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->
                                               EntryCount) + 0x40) + 0xf0);
            pp_Var46 = (_LIST_ENTRY **)
                       FUN_14716d181(lVar39,*(longlong *)
                                             (*(longlong *)
                                               ((longlong)&p_Var64->Type +
                                               (longlong)
                                               &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->
                                                EntryCount) + 0x40) + 0x110);
            local_7d0 = (_LIST_ENTRY *)
                        FUN_14716d181(lVar39,*(longlong *)
                                              (*(longlong *)
                                                ((longlong)&p_Var64->Type +
                                                (longlong)
                                                &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->
                                                 EntryCount) + 0x40) + 0x50);
            auVar24 = (undefined1  [16])local_4d8._0_16_;
            local_4f8._8_8_ = local_5e8._8_8_;
            local_4f8._0_8_ = local_5e8._0_8_;
            local_4f8._16_8_ = local_5e8._16_8_;
            local_578._0_2_ = local_4d8.Type;
            local_578._2_2_ = local_4d8.CreatorBackTraceIndex;
            local_578._4_4_ = local_4d8._4_4_;
            uStack_570 = local_4d8.CriticalSection;
            local_568 = local_4d8.ProcessLocksList.Flink;
            lVar84 = *(longlong *)
                      ((longlong)&p_Var64->Type +
                      (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount);
            p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)
                      (ulonglong)
                      *(uint *)((longlong)((longlong)(uVar47 + 8) + 4) + (longlong)p_Var64);
            local_7d8 = (_RTL_CRITICAL_SECTION *)(local_508 + 0x10);
            puStack_7e0 = local_578;
            local_7e8 = CONCAT44(local_7e8._4_4_,*(float *)(lVar84 + 0xbc) * 0.5);
            uStack_7f0 = (_LIST_ENTRY *)CONCAT44(uStack_7f0._4_4_,fVar93);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                        CONCAT44(local_7f8._4_4_,
                                 *(undefined4 *)
                                  ((longlong)&p_Var64->Type +
                                  (longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink));
            p_Var63 = p_Var75;
            local_7c8 = pp_Var46;
            local_7c0 = p_Var45;
            local_7b8 = pDVar44;
            local_7b0 = p_Var70;
            local_4d8._0_16_ = auVar24;
            FUN_14443e989(lVar39,p_Var75,*(undefined4 *)(lVar84 + 0x10),p_Var40);
            p_Var70 = local_698;
            if (local_718 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
              LeaveCriticalSection((LPCRITICAL_SECTION)local_718);
            }
          }
          p_Var64 = p_Var64 + 8;
        } while (p_Var70 != p_Var64);
      }
      uVar47 = local_508._0_8_;
      lVar84 = local_720;
      if (local_508._8_4_ != 0) {
        lVar51 = (longlong)(int)local_508._8_4_;
        lVar65 = 0;
        do {
          if (*(char *)((longlong)(uVar47 + 0x24) + lVar65 + 3) == '\x01') {
            uStack_7f0 = *(_LIST_ENTRY **)
                          ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->Flags + lVar65
                          );
            local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                         ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->Type + lVar65);
            p_Var40 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                       (*(longlong *)
                         ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                         lVar65) + 0x3a0);
            p_Var63 = p_Var75;
            FUN_1444410eb(local_720,p_Var75,*(undefined4 *)((longlong)(uVar47 + 8) + lVar65 + 4),
                          p_Var40);
          }
          else {
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                        CONCAT44(local_7f8._4_4_,
                                 *(undefined4 *)((longlong)(uVar47 + 8) + lVar65 + 4));
            p_Var40 = p_Var75;
            FUN_14908f07c(*(undefined8 *)
                           (*(longlong *)
                             ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount
                             + lVar65) + 0x40),&local_4d8,lVar84,p_Var75);
            p_Var63 = &local_4d8;
            uVar49 = FUN_14716d181(lVar84,&local_4d8);
            *(undefined8 *)
             ((longlong)&(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->ProcessLocksList).Flink +
             lVar65) = uVar49;
            FUN_14908489c(&local_4d8);
          }
          lVar65 = lVar65 + 0x180;
        } while (lVar51 * 0x180 != lVar65);
      }
    }
LAB_144432c12:
    uVar47 = local_508._0_8_;
    uVar55 = CONCAT71((int7)((ulonglong)p_Var63 >> 8),(byte)local_6c0);
    if (((byte)local_6c0 < 0x10) && ((0xc004U >> ((byte)local_6c0 & 0x1f) & 1) != 0)) {
      lVar51 = (longlong)(int)local_508._8_4_;
      lVar84 = local_720;
      if (lVar51 != 0) {
        bVar27 = (byte)local_6c0 & 0xfe;
        lVar84 = 0;
        do {
          if ((char)uVar55 == '\x02') {
            uVar33 = (uint)*(byte *)((longlong)(uVar47 + 0x24) + lVar84 + 3);
          }
          else {
            uVar33 = 0;
          }
          if (bVar27 == 0xe) {
            uVar33 = 2;
          }
          if ((char)uVar33 != '\0') {
            lVar65 = *(longlong *)
                      ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                      lVar84);
            lVar39 = local_720;
            if (*(longlong *)(lVar65 + 0x98) == 0) {
              iVar71 = *(int *)(lVar65 + 0x178) + -1;
              if (*(int *)(lVar65 + 0x178) == 0) {
                iVar71 = 0;
              }
              FUN_1446f82e2(&local_4d8,iVar71,*(undefined8 *)(lVar65 + 0x170),1);
              lVar39 = local_720;
              lVar65 = *(longlong *)
                        ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                        lVar84);
              lVar87 = *(longlong *)(*(longlong *)(lVar65 + 0x40) + 0x130);
              uVar34 = *(uint *)(lVar87 + 8);
              if (0x3ffffe < uVar34) {
                uVar34 = 0x3fffff;
              }
              FUN_14908d4ae(local_720,lVar65 + 0x98,
                            (((uVar34 + *(uint *)(lVar87 + 0xe4)) - 1) / *(uint *)(lVar87 + 0xe4)) *
                            *(int *)(lVar87 + 0xd4));
              lVar65 = *(longlong *)
                        ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                        lVar84);
            }
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
            FUN_14716cfd3(&local_4d8,lVar39,lVar65 + 0x98,2);
            lVar65 = local_720;
            if ((*(char *)((longlong)(uVar47 + 0x24) + lVar84 + 3) == '\0') ||
               ((((*(char *)((longlong)(uVar47 + 0x24) + lVar84) == '\0' &&
                  (*(char *)((longlong)(uVar47 + 0x24) + lVar84 + 2) == '\0')) &&
                 (*(char *)((longlong)(uVar47 + 0x24) + lVar84 + 1) == '\0')) &&
                (*(char *)(*(longlong *)
                            ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount
                            + lVar84) + 0x3b) != '\x01')))) {
              local_530._0_8_ = (HANDLE)0x0;
              uVar31 = 0;
              local_718 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
              local_540.Blink = (HANDLE)0x0;
            }
            else {
              lVar39 = *(longlong *)
                        (*(longlong *)
                          ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                          lVar84) + 0x50);
              uVar31 = (undefined1)((*(uint *)(*(longlong *)(lVar39 + 0x90) + 8) & 2) >> 1);
              local_530._0_8_ = FUN_14716d181(local_720,lVar39 + 0x70);
              lVar39 = lVar65;
              local_540.Blink =
                   (_LIST_ENTRY *)
                   FUN_14716d181(lVar65,*(longlong *)
                                         (*(longlong *)
                                           ((longlong)
                                            &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->
                                             EntryCount + lVar84) + 0x50) + 0x50);
              local_718 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT71((int7)((ulonglong)lVar39 >> 8),1);
            }
            local_540.Flink =
                 (_LIST_ENTRY *)
                 FUN_14716d181(lVar65,*(longlong *)
                                       (*(longlong *)
                                         ((longlong)
                                          &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->
                                           EntryCount + lVar84) + 0x58) + 0x70);
            local_548 = (undefined1  [8])
                        FUN_14716d181(lVar65,*(longlong *)
                                              (*(longlong *)
                                                ((longlong)
                                                 &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->
                                                  EntryCount + lVar84) + 0x40) + 0x110);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
            FUN_14716cfd3(local_5e8,lVar65,
                          *(longlong *)
                           (*(longlong *)
                             ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount
                             + lVar84) + 0x40) + 0xd0,1);
            local_7e8 = *(ulonglong *)
                         (*(longlong *)
                           (*(longlong *)
                             ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount
                             + lVar84) + 0x40) + 0x130);
            local_7b8 = (DWORD *)&local_4d8;
            local_7c0 = (PRTL_CRITICAL_SECTION_DEBUG)(local_548 + 0x18);
            local_7c8 = (_LIST_ENTRY **)(local_548 + 0x10);
            local_7d0 = (_LIST_ENTRY *)(local_548 + 8);
            local_7d8 = (_RTL_CRITICAL_SECTION *)local_548;
            uStack_7f0 = (_LIST_ENTRY *)CONCAT71(uStack_7f0._1_7_,uVar31);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT71(local_7f8._1_7_,(char)local_718);
            p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)uVar33;
            p_Var75 = local_708;
            puStack_7e0 = local_5e8;
            FUN_14443fa9d(lVar65,local_708,
                          *(undefined4 *)
                           ((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar84),p_Var40);
            uVar55 = CONCAT71((int7)((ulonglong)p_Var75 >> 8),(byte)local_6c0);
          }
          lVar84 = lVar84 + 0x180;
        } while (lVar51 * 0x180 != lVar84);
        goto LAB_144432f2d;
      }
    }
    else {
LAB_144432f2d:
      uVar47 = local_508._0_8_;
      lVar84 = local_720;
      lVar51 = (longlong)(int)local_508._8_4_;
      if (lVar51 != 0) {
        lVar65 = 0;
        do {
          p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(uVar55 & 0xffffffff);
          FUN_14909acc4(&local_4d8,lVar84,
                        *(undefined8 *)
                         ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                         lVar65),p_Var40);
          lVar39 = *(longlong *)
                    (*(longlong *)
                      ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                      lVar65) + 0x3a0);
          FUN_149094788(lVar39 + 0x10,&local_4d8);
          memcpy((void *)(lVar39 + 0x382),local_166,0x6e);
          FUN_1490846d2(&local_4d8);
          lVar65 = lVar65 + 0x180;
        } while (lVar51 * 0x180 != lVar65);
      }
    }
    plVar50 = local_6b0;
    p_Var75 = local_6e8;
    p_Var42 = *(_RTL_CRITICAL_SECTION **)&local_6e8->EntryCount;
    p_Var63 = (PRTL_CRITICAL_SECTION_DEBUG)(*(longlong *)(lVar84 + 0x70) + 7U & 0xfffffffffffffff8);
    pLVar48 = &p_Var63[1].ProcessLocksList;
    if (*(undefined1 **)(lVar84 + 0x78) < pLVar48) {
      FUN_140023dd8(local_6b0,0x48);
      p_Var63 = (PRTL_CRITICAL_SECTION_DEBUG)(*plVar50 + 7U & 0xfffffffffffffff8);
      pLVar48 = &p_Var63[1].ProcessLocksList;
    }
    *(LIST_ENTRY **)(lVar84 + 0x70) = pLVar48;
    p_Var63->CriticalSection = *(_RTL_CRITICAL_SECTION **)&p_Var42->LockCount;
    (p_Var63->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
    *(undefined1 *)&(p_Var63->ProcessLocksList).Blink = 2;
    *(undefined8 *)((longlong)&(p_Var63->ProcessLocksList).Blink + 4) = 0xffffffffffffffff;
    *(undefined1 *)&p_Var63->Flags = 1;
    *(undefined ***)p_Var63 = &PTR_FUN_14a1fb3e8;
    p_Var63[1].Type = 0x1d;
    *(undefined1 *)&p_Var63[1].CreatorBackTraceIndex = 0;
    p_Var63[1].CriticalSection = p_Var42;
    iVar71 = *(int *)(lVar84 + 0x1a0);
    *(uint *)(lVar84 + 0x1a0) = iVar71 + 1U;
    if (*(uint *)(lVar84 + 0x1a4) < iVar71 + 1U) {
      FUN_1447568fc(local_6a8,iVar71);
    }
    plVar50 = local_6b0;
    *(PRTL_CRITICAL_SECTION_DEBUG *)(*(longlong *)(lVar84 + 0x198) + (longlong)iVar71 * 8) = p_Var63
    ;
    *(int *)((longlong)&(p_Var63->ProcessLocksList).Blink + 4) = *(int *)(lVar84 + 0x1a0) + -1;
    p_Var42 = (_RTL_CRITICAL_SECTION *)p_Var75[1].ProcessLocksList.Flink;
    p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)(*(longlong *)(lVar84 + 0x70) + 7U & 0xfffffffffffffff8);
    pLVar48 = &p_Var75[1].ProcessLocksList;
    if (*(undefined1 **)(lVar84 + 0x78) < pLVar48) {
      FUN_140023dd8(local_6b0,0x48);
      p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)(*plVar50 + 7U & 0xfffffffffffffff8);
      pLVar48 = &p_Var75[1].ProcessLocksList;
    }
    *(LIST_ENTRY **)(lVar84 + 0x70) = pLVar48;
    p_Var75->CriticalSection = *(_RTL_CRITICAL_SECTION **)&p_Var42->LockCount;
    (p_Var75->ProcessLocksList).Flink = (_LIST_ENTRY *)0x0;
    *(undefined1 *)&(p_Var75->ProcessLocksList).Blink = 2;
    *(undefined8 *)((longlong)&(p_Var75->ProcessLocksList).Blink + 4) = 0xffffffffffffffff;
    *(undefined1 *)&p_Var75->Flags = 1;
    *(undefined ***)p_Var75 = &PTR_FUN_14a1fb3e8;
    p_Var75[1].Type = 0x1d;
    *(undefined1 *)&p_Var75[1].CreatorBackTraceIndex = 0;
    p_Var75[1].CriticalSection = p_Var42;
    iVar71 = *(int *)(lVar84 + 0x1a0);
    *(uint *)(lVar84 + 0x1a0) = iVar71 + 1U;
    local_718 = p_Var63;
    if (*(uint *)(lVar84 + 0x1a4) < iVar71 + 1U) {
      FUN_1447568fc(local_6a8,iVar71);
    }
    uVar47 = local_508._0_8_;
    p_Var63 = local_6e8;
    lVar51 = local_720;
    *(PRTL_CRITICAL_SECTION_DEBUG *)(*(longlong *)(lVar84 + 0x198) + (longlong)iVar71 * 8) = p_Var75
    ;
    *(int *)((longlong)&(p_Var75->ProcessLocksList).Blink + 4) = *(int *)(lVar84 + 0x1a0) + -1;
    lVar84 = (longlong)(int)local_508._8_4_;
    local_710 = p_Var75;
    if (lVar84 != 0) {
      p_Var42 = local_6d8 + 0x67;
      lVar65 = 0;
      do {
        cVar30 = *(char *)((longlong)(uVar47 + 0x28) + lVar65 + 3);
        if (*(char *)((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->Flags + lVar65) ==
            '\x01') {
          lVar39 = (longlong)
                   *(int *)(*(longlong *)
                             (*(longlong *)
                               ((longlong)
                                &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                               lVar65) + 0x3a0) + 0x3f0);
          p_Var88 = (_RTL_CRITICAL_SECTION *)(local_530._8_8_ + lVar39 * 0xe * 8);
          if ((char)*(longlong *)(local_530._8_8_ + (lVar39 * 0xe + 5) * 8) == '\0') {
            cVar30 = '\0';
          }
        }
        else {
          p_Var88 = (_RTL_CRITICAL_SECTION *)0x0;
        }
        if (cVar30 != '\0') {
          bVar27 = *(byte *)((longlong)(uVar47 + 0x24) + lVar65 + 3);
          local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)((ulonglong)local_7f8 & 0xffffffffffffff00);
          FUN_14716cfd3(&local_4d8,lVar51,
                        *(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount
                             + lVar65) + 0x3a0) + 8) + 0x20,1);
          local_7c0 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                       ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->Type + lVar65);
          local_7e8 = *(ulonglong *)
                       ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                       lVar65);
          puStack_7e0 = *(undefined1 **)
                         ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->CriticalSection
                         + lVar65);
          local_7a8 = local_718;
          local_7b0 = local_710;
          local_7b8 = (DWORD *)((longlong)&local_4d8 + 8);
          local_7c8 = (_LIST_ENTRY **)
                      CONCAT44(local_7c8._4_4_,
                               *(undefined4 *)
                                (*(ulonglong *)(p_Var63 + 1) + 4 +
                                (longlong)*(int *)(local_7e8 + 0x10) * 8));
          local_7d0 = (_LIST_ENTRY *)
                      CONCAT44(local_7d0._4_4_,
                               *(undefined4 *)
                                (*(ulonglong *)(p_Var63 + 1) +
                                (longlong)*(int *)(local_7e8 + 0x10) * 8));
          uStack_7f0 = (_LIST_ENTRY *)(CONCAT44(uStack_7f0._4_4_,(uint)bVar27) ^ 1);
          local_7f8 = local_6f8;
          p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var42->LockSemaphore;
          local_7d8 = p_Var88;
          FUN_14443fd22(lVar51,local_708,
                        *(undefined4 *)((longlong)&((LIST_ENTRY *)(uVar47 + 0x10))->Flink + lVar65),
                        &p_Var42->LockSemaphore);
          iVar71 = *(int *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)uVar47 + lVar65);
          p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var63->ProcessLocksList).Flink;
          if (p_Var75 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            p_Var75 = p_Var63;
          }
          iVar76 = iVar71 + 0x1f;
          if (-1 < iVar71) {
            iVar76 = iVar71;
          }
          pcVar2 = (code *)((longlong)&p_Var75->Type + (longlong)(iVar76 >> 5) * 4);
          *(uint *)pcVar2 = *(uint *)pcVar2 | 1 << ((byte)iVar71 & 0x1f);
        }
        lVar65 = lVar65 + 0x180;
      } while (lVar84 * 0x180 != lVar65);
    }
    p_Var75 = local_708;
    bVar27 = (byte)local_6c0;
    if (((byte)local_6c0 & 0xfe) == 0xe) {
      local_7e8 = (longlong)local_530 + 8;
      uStack_7f0 = (_LIST_ENTRY *)CONCAT71(uStack_7f0._1_7_,(byte)local_6c0);
      local_7f8 = local_6f8;
      p_Var40 = local_6e8;
      FUN_14442153f(local_720,local_6d8,local_708,local_6e8);
    }
    uVar47 = local_508._0_8_;
    iVar71 = local_508._8_4_;
    if (((ulonglong)local_678 & 1) != 0) {
      iVar71 = 4;
      if (DAT_14c764a14 < 4) {
        iVar71 = DAT_14c764a14;
      }
      iVar76 = 1;
      if (1 < iVar71) {
        iVar76 = iVar71;
      }
      if (local_508._8_4_ == 0) {
        iVar71 = 0;
      }
      else {
        lVar84 = (longlong)(int)local_508._8_4_;
        lVar51 = 0;
        do {
          if (*(char *)((longlong)(uVar47 + 0x28) + lVar51) == '\x01') {
            lVar65 = *(longlong *)
                      ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount +
                      lVar51);
            lVar39 = *(longlong *)(lVar65 + 0x3a0);
            if (*(longlong *)(lVar65 + 0x48) == 0) {
              fVar101 = *(float *)(lVar39 + 0x268) * *(float *)(lVar39 + 0x254);
              fVar93 = *(float *)(lVar39 + 600);
              fVar95 = *(float *)(lVar39 + 0x25c);
              bVar56 = true;
              if ((*(float *)(lVar65 + 0x88) == fVar101) &&
                 (!NAN(*(float *)(lVar65 + 0x88)) && !NAN(fVar101))) {
                if ((*(float *)(lVar65 + 0x8c) == fVar93) &&
                   (!NAN(*(float *)(lVar65 + 0x8c)) && !NAN(fVar93))) {
                  if ((*(float *)(lVar65 + 0x90) == fVar95) &&
                     (!NAN(*(float *)(lVar65 + 0x90)) && !NAN(fVar95))) {
                    bVar56 = *(int *)(lVar65 + 0x94) != iVar76;
                  }
                }
              }
            }
            else {
              fVar101 = *(float *)(lVar39 + 0x268) * *(float *)(lVar39 + 0x254) *
                        *(float *)(lVar39 + 0x4a0);
              fVar93 = *(float *)(lVar39 + 600);
              fVar95 = *(float *)(lVar39 + 0x25c);
              bVar56 = true;
            }
            *(bool *)((longlong)(uVar47 + 0x28) + lVar51 + 1) = bVar56;
            bVar27 = *(byte *)(*(longlong *)(lVar65 + 0x78) + 0x149);
            *(byte *)((longlong)(uVar47 + 0x28) + lVar51 + 2) = bVar27 ^ 1;
            if ((bVar27 != 1) || (bVar56 != false)) {
              local_7b8 = (DWORD *)((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->Type
                                   + lVar51);
              local_7a0 = (LIST_ENTRY *)
                          ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->Flags + lVar51
                          );
              local_7a8 = (PRTL_CRITICAL_SECTION_DEBUG)
                          ((longlong)
                           &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x90))->ProcessLocksList).Flink
                          + lVar51);
              local_7b0 = (PRTL_CRITICAL_SECTION_DEBUG)
                          ((longlong)
                           &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->ProcessLocksList).Flink
                          + lVar51);
              p_Var63 = (PRTL_CRITICAL_SECTION_DEBUG)
                        ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->Flags + lVar51)
              ;
              local_7c8 = (_LIST_ENTRY **)
                          ((longlong)
                           &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x30))->CriticalSection + lVar51
                          );
              p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)*(uint *)(lVar65 + 0x10);
              local_7d0 = (_LIST_ENTRY *)CONCAT44(local_7d0._4_4_,fVar95);
              local_7d8 = (_RTL_CRITICAL_SECTION *)CONCAT44(local_7d8._4_4_,fVar93);
              puStack_7e0 = (undefined1 *)CONCAT44(puStack_7e0._4_4_,fVar101);
              local_7e8 = CONCAT44(local_7e8._4_4_,iVar76);
              uStack_7f0 = (_LIST_ENTRY *)
                           CONCAT71(uStack_7f0._1_7_,
                                    *(undefined1 *)(*(longlong *)(lVar65 + 0x78) + 0x14a));
              local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                          CONCAT44(local_7f8._4_4_,*(undefined4 *)((longlong)local_7c8 + -0x2c));
              local_7c0 = p_Var63;
              FUN_1444413b3(local_720,p_Var75,local_6f8,p_Var40);
              *(float *)(*(longlong *)&p_Var63[-1].Flags + 0x88) = fVar101;
              *(float *)(*(longlong *)&p_Var63[-1].Flags + 0x8c) = fVar93;
              *(float *)(*(longlong *)&p_Var63[-1].Flags + 0x90) = fVar95;
            }
          }
          uVar49 = local_508._0_8_;
          lVar51 = lVar51 + 0x180;
        } while (lVar84 * 0x180 != lVar51);
        lVar84 = (longlong)(int)local_508._8_4_;
        if (lVar84 == 0) {
          iVar71 = 0;
        }
        else {
          lVar51 = 0;
          do {
            if (*(char *)((longlong)(uVar49 + 0x28) + lVar51) == '\x01') {
              bVar27 = *(byte *)((longlong)(uVar49 + 0x28) + lVar51 + 1);
              bVar28 = *(byte *)((longlong)(uVar49 + 0x28) + lVar51 + 2);
              uVar78 = (undefined7)((ulonglong)p_Var40 >> 8);
              p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT71(uVar78,bVar28);
              if ((bVar28 != 0) || ((bVar27 & 1) != 0)) {
                local_7f8 = *(PRTL_CRITICAL_SECTION_DEBUG *)
                             ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->Type +
                             lVar51);
                uStack_7f0 = *(_LIST_ENTRY **)
                              ((longlong)
                               &(((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x90))->ProcessLocksList).
                                Blink + lVar51);
                p_Var40 = (PRTL_CRITICAL_SECTION_DEBUG)
                          (CONCAT71(uVar78,~bVar28 | bVar27) & 0xffffffffffffff01);
                FUN_1444417e6(local_720,
                              *(undefined8 *)
                               ((longlong)
                                &((PRTL_CRITICAL_SECTION_DEBUG)(uVar49 + 0x120))->EntryCount +
                               lVar51),iVar76,p_Var40);
              }
            }
            lVar51 = lVar51 + 0x180;
          } while (lVar84 * 0x180 != lVar51);
          iVar71 = local_508._8_4_;
        }
        bVar27 = (byte)local_6c0;
      }
    }
    uVar47 = local_508._0_8_;
    if (bVar27 == 1) {
      if (iVar71 != 0) {
        p_Var75 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
        do {
          lVar51 = local_720;
          lVar84 = *(longlong *)
                    ((longlong)&p_Var75->Type +
                    (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount);
          if (*(longlong *)(lVar84 + 0x20) != 0) {
            *(undefined1 *)(*(longlong *)(*(longlong *)(lVar84 + 0x3a0) + 8) + 0x80) = 0;
            p_Var61 = (_LIST_ENTRY *)
                      FUN_14716d252(local_720,
                                    *(longlong *)
                                     (*(longlong *)
                                       ((longlong)&p_Var75->Type +
                                       (longlong)
                                       &((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount)
                                     + 0x20) + 0xd0,0);
            lVar84 = *(longlong *)
                      (*(longlong *)
                        ((longlong)&p_Var75->Type +
                        (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount) +
                      0x20);
            local_7f8 = (PRTL_CRITICAL_SECTION_DEBUG)
                        FUN_14716d181(lVar51,lVar84 + (ulonglong)*(uint *)(lVar84 + 0x188) * 0x20 +
                                             0x50);
            lVar84 = *(longlong *)
                      ((longlong)&p_Var75->Type +
                      (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount);
            uStack_7f0 = p_Var61;
            FUN_1444410eb(lVar51,local_708,
                          *(undefined4 *)(*(longlong *)(*(longlong *)(lVar84 + 0x18) + 0x130) + 0xc)
                          ,*(undefined8 *)(lVar84 + 0x3a0));
            lVar84 = *(longlong *)
                      ((longlong)&p_Var75->Type +
                      (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount);
          }
          FUN_14909acc4(&local_4d8,lVar51,lVar84,1);
          lVar84 = *(longlong *)
                    (*(longlong *)
                      ((longlong)&p_Var75->Type +
                      (longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount) +
                    0x3a0);
          FUN_149094788(lVar84 + 0x10,&local_4d8);
          memcpy((void *)(lVar84 + 0x382),local_166,0x6e);
          FUN_1490846d2(&local_4d8);
          p_Var75 = p_Var75 + 8;
        } while ((PRTL_CRITICAL_SECTION_DEBUG)((longlong)iVar71 * 0x180) != p_Var75);
        iVar71 = local_508._8_4_;
        goto LAB_144433771;
      }
    }
    else {
LAB_144433771:
      uVar47 = local_508._0_8_;
      lVar84 = local_720;
      uVar55 = CONCAT71((int7)((ulonglong)p_Var75 >> 8),(byte)local_6c0);
      if (iVar71 != 0) {
        lVar51 = 0;
        do {
          lVar65 = *(longlong *)
                    ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount + lVar51
                    );
          FUN_14909c34e(lVar65,&local_4d8,uVar55 & 0xffffffff);
          FUN_149094a98(lVar65 + 0xf8,*(undefined8 *)(lVar84 + 0x18),&local_4d8);
          *(undefined4 *)
           (*(longlong *)
             (*(longlong *)
               ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount + lVar51) +
             0x3a0) + 900) = 0;
          lVar65 = *(longlong *)
                    ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount + lVar51
                    );
          puVar41 = (undefined8 *)(lVar65 + 0x200);
          if (*(int *)(lVar65 + 0x3ac) != 2) {
            puVar41 = (undefined8 *)(lVar65 + 0x1a0);
          }
          puVar60 = (undefined8 *)(*(longlong *)(lVar65 + 0x3a0) + 0x390);
          for (lVar39 = 0xc; lVar39 != 0; lVar39 = lVar39 + -1) {
            *puVar60 = *puVar41;
            puVar41 = puVar41 + 1;
            puVar60 = puVar60 + 1;
          }
          *(undefined1 *)
           (*(longlong *)
             (*(longlong *)
               ((longlong)&((PRTL_CRITICAL_SECTION_DEBUG)(uVar47 + 0x120))->EntryCount + lVar51) +
             0x3a0) + 0x408) = *(undefined1 *)((longlong)(uVar47 + 0x28) + lVar51 + 3);
          lVar51 = lVar51 + 0x180;
        } while ((longlong)iVar71 * 0x180 != lVar51);
      }
    }
    if ((longlong)(int)local_530._32_4_ != 0) {
      plVar68 = (longlong *)(local_530._24_8_ + (longlong)(int)local_530._32_4_ * 2 * 8);
      plVar50 = (longlong *)(local_720 + 0x598);
      plVar86 = (longlong *)local_530._24_8_;
      do {
        bVar27 = 1;
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
           (bVar27 = *(byte *)((longlong)plVar86 + 0xc) & 3, DAT_14ca84e99 != '\0')) {
          bVar27 = 1;
        }
        lVar84 = *plVar86;
        if ((*(byte *)(lVar84 + 0x20) & 0xc) == 0) {
          lVar51 = plVar86[1];
          if ((*(byte *)(lVar84 + 0x20) & 0x10) != 0) {
            FUN_140069376(local_720);
          }
          iVar71 = *(int *)(local_720 + 0x5a0);
          *(uint *)(local_720 + 0x5a0) = iVar71 + 1U;
          if (*(uint *)(local_720 + 0x5a4) < iVar71 + 1U) {
            FUN_1400f155a(plVar50,iVar71);
          }
          *(longlong *)(*plVar50 + (longlong)iVar71 * 8) = lVar84;
          *(int *)(lVar84 + 0x1c) = (int)lVar51;
          *(byte *)(lVar84 + 0x20) = bVar27 | *(byte *)(lVar84 + 0x20) & 0xe8 | 0x14;
          *(int *)(lVar84 + 0x58) = (int)lVar51;
        }
        plVar86 = plVar86 + 2;
      } while (plVar86 != plVar68);
    }
    iVar71 = SUB84(local_530._32_8_,4);
    local_530._32_8_ = local_530._32_8_ & 0xffffffff00000000;
    if (iVar71 != 0) {
      FUN_1400f146c((longlong)local_530 + 0x18,0);
    }
    FUN_149094bb4(local_530._8_8_,local_530._16_8_ & 0xffffffff);
    if ((longlong *)local_530._8_8_ != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_144438f9b(local_508._0_8_,local_508._8_8_ & 0xffffffff);
    auVar53 = (undefined1  [8])local_508._0_8_;
    break;
  case 8:
switchD_14442c102_caseD_8:
    if ((3 < DAT_14c7649e8) ||
       (local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_),
       local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_),
       DAT_14c7649e8 == 1)) {
      local_608 = (void *)0x0;
      local_600._0_2_ = param_3[3].Type;
      local_600._2_2_ = param_3[3].CreatorBackTraceIndex;
      lVar84 = (longlong)local_600;
      pvVar15 = *(void **)&param_3[2].Flags;
      if (lVar84 == 0) {
        local_5fc = 0;
      }
      else {
        FUN_1400f69e4(&local_608,local_600,0);
        memcpy(local_608,pvVar15,lVar84 << 3);
        p_Var40 = *(PRTL_CRITICAL_SECTION_DEBUG *)(param_3 + 2);
      }
      FUN_144434585(p_Var40,&local_608);
      local_5e8._8_8_ = (_RTL_CRITICAL_SECTION *)CONCAT44(local_5e8._12_4_,local_5e8._8_4_);
      local_5e8._16_8_ = (_LIST_ENTRY *)CONCAT44(local_5e8._20_4_,local_5e8._16_4_);
    }
    goto LAB_14442f20d;
  }
LAB_14442f203:
  if (auVar53 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
LAB_14442f20d:
  if ((local_f0 ^ (ulonglong)auStack_818) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14442e9a6:
  uVar47 = *(undefined8 *)uVar66;
  *(undefined8 *)uVar66 = *(undefined8 *)lVar84;
  *(undefined8 *)lVar84 = uVar47;
  iVar71 = iVar71 + -1;
  uVar77 = lVar51 + 0xfffffffffffffff0;
  if ((longlong)(uVar85 - uVar83) < (longlong)(uVar54 - uVar89)) {
    if (uVar73 < uVar55) {
      *puVar52 = uVar73;
      puVar52[1] = uVar55;
      *(int *)(puVar52 + 2) = iVar71;
      puVar52 = puVar52 + 3;
    }
    uVar73 = uVar66;
    uVar54 = uVar85;
    if ((ulonglong)lVar84 <= uVar66 + 8) goto LAB_14442ebfc;
  }
  else {
    if (uVar66 + 8 < (ulonglong)lVar84) {
      *puVar52 = uVar66;
      puVar52[1] = uVar77;
      *(int *)(puVar52 + 2) = iVar71;
      puVar52 = puVar52 + 3;
    }
    uVar66 = uVar89;
    uVar77 = uVar55;
    uVar54 = uVar55;
    if (uVar55 <= uVar73) goto LAB_14442ebfc;
  }
  iVar76 = (int)(uVar54 - uVar66 >> 3);
  uVar82 = (ulonglong)(iVar76 + 1);
  uVar83 = uVar66;
  uVar66 = uVar73;
  uVar55 = uVar77;
  if (iVar71 == 0) goto LAB_14442ea44;
  goto LAB_14442e915;
}



// FUNCTION 144434585 FUN_144434585 body=445 status=ok
// SIG undefined FUN_144434585(void)

void FUN_144434585(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar12 = (longlong *)*param_1;
    plVar1 = plVar12 + (int)param_1[1];
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      lVar4 = *plVar12;
      if ((lVar4 != 0) && (*(char *)(*(longlong *)(*(longlong *)*param_2 + 8) + 0xdf) == '\0')) {
        lVar5 = *(longlong *)(lVar4 + 0x20);
        if (lVar5 != 0) {
          *(int *)(lVar5 + 0x188) = 1 - *(int *)(lVar5 + 0x188);
        }
        lVar5 = *(longlong *)(lVar4 + 0x48);
        if (lVar5 != 0) {
          *(int *)(lVar5 + 0x188) = 1 - *(int *)(lVar5 + 0x188);
        }
        lVar5 = DAT_14c9d2450;
        iVar2 = *(int *)(lVar3 + 0xc60);
        if (iVar2 == 0x40000002) {
          uVar10 = 0;
        }
        else {
          bVar13 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
            if (iVar2 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              bVar13 = DVar8 == DVar9;
            }
            else {
              bVar13 = false;
            }
          }
          uVar10 = (ulonglong)(bVar13 ^ 1);
        }
        if (0 < *(int *)(lVar5 + uVar10 * 4)) {
          plVar6 = *(longlong **)(lVar4 + 0x30);
          if ((plVar6 != (longlong *)0x0) && (lVar5 = plVar6[1], (longlong)(int)lVar5 != 0)) {
            lVar7 = *plVar6;
            lVar11 = 0;
            do {
              *(int *)(*(longlong *)(lVar7 + lVar11) + 0x120) =
                   1 - *(int *)(*(longlong *)(lVar7 + lVar11) + 0x120);
              lVar11 = lVar11 + 8;
            } while ((longlong)(int)lVar5 * 8 != lVar11);
          }
          plVar6 = *(longlong **)(lVar4 + 0x70);
          if ((plVar6 != (longlong *)0x0) && (lVar5 = plVar6[1], (longlong)(int)lVar5 != 0)) {
            lVar7 = *plVar6;
            lVar11 = 0;
            do {
              *(int *)(*(longlong *)(lVar7 + lVar11) + 0x120) =
                   1 - *(int *)(*(longlong *)(lVar7 + lVar11) + 0x120);
              lVar11 = lVar11 + 8;
            } while ((longlong)(int)lVar5 * 8 != lVar11);
          }
        }
        *(undefined4 *)(lVar4 + 0x148) =
             *(undefined4 *)(*(longlong *)(*(longlong *)*param_2 + 8) + 0xac);
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14443474e FUN_14443474e body=69 status=ok
// SIG undefined FUN_14443474e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443474e(void)

{
  _DAT_14cbf9598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144434790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf95a0,1);
  return;
}



// FUNCTION 144434793 FUN_144434793 body=69 status=ok
// SIG undefined FUN_144434793(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144434793(void)

{
  _DAT_14cbf95b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444347d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf95b8,1);
  return;
}



// FUNCTION 1444347d8 FUN_1444347d8 body=69 status=ok
// SIG undefined FUN_1444347d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444347d8(void)

{
  _DAT_14cbf95c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443481a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf95c8,1);
  return;
}



// FUNCTION 14443481d FUN_14443481d body=69 status=ok
// SIG undefined FUN_14443481d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443481d(void)

{
  _DAT_14cbf95d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014443485f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf95d8,1);
  return;
}



// FUNCTION 144434862 FUN_144434862 body=69 status=ok
// SIG undefined FUN_144434862(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144434862(void)

{
  _DAT_14cbf95e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444348a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf95e8,1);
  return;
}



// FUNCTION 1444348a7 FUN_1444348a7 body=69 status=ok
// SIG undefined FUN_1444348a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1444348a7(void)

{
  _DAT_14cbf95f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001444348e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf95f8,1);
  return;
}



// FUNCTION 1444348ec FUN_1444348ec body=99 status=ok
// SIG undefined FUN_1444348ec(void)

void FUN_1444348ec(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_1449609de(param_1,*param_2);
  puVar2 = (undefined8 *)*plVar4;
  puVar3 = (undefined8 *)*param_3;
  if (puVar3 != puVar2) {
    *param_3 = (longlong)puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  FUN_144435328(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14443495b FUN_14443495b body=2475 status=ok
// SIG undefined FUN_14443495b(void)

void FUN_14443495b(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  char *param_5)

{
  int *piVar1;
  ulonglong *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  uint *puVar15;
  longlong lVar16;
  undefined ***pppuVar17;
  undefined8 *puVar18;
  uint uVar19;
  void *pvVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_e8 [32];
  uint *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 local_ac;
  longlong local_a8;
  undefined1 local_99;
  ulonglong local_98;
  undefined8 local_90;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = *(longlong *)(param_2 + 0x30);
  if (lVar8 == 0) {
    uVar10 = *(uint *)(param_2 + 0x10);
    if (0 < DAT_14cbf95a8) {
      *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) | 8;
    }
    if (uVar10 < 4) {
      lVar8 = *param_3;
      if (lVar8 != 0) {
        *param_3 = 0;
        LOCK();
        piVar1 = (int *)(lVar8 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
        }
      }
    }
    else {
      local_b8 = param_2 + 8;
      pvVar11 = (void *)FUN_140fc05d0(local_b8,1);
      local_88 = 4;
      if (DAT_14ca84e48 < 4) {
        local_88 = DAT_14ca84e48;
      }
      uStack_80 = 0x10111;
      local_88 = local_88 + (local_88 == 0);
      local_78 = (undefined ***)0x0;
      uStack_84 = uVar10 >> 2;
      if (DAT_14ca84e48 <= uVar10 >> 2) {
        uStack_84 = DAT_14ca84e48;
      }
      uStack_84 = uStack_84 + (uStack_84 == 0);
      puVar2 = (ulonglong *)(param_1 + 0x70);
      uVar22 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar23 = uVar22 + 0x150;
      local_c0 = puVar2;
      if (*(ulonglong *)(param_1 + 0x78) < uVar23) {
        FUN_140023dd8(puVar2,0x160);
        uVar22 = *puVar2 + 0xf & 0xfffffffffffffff0;
        uVar23 = uVar22 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar23;
      FUN_1456bd266(uVar22,param_4,&local_88,1);
      iVar5 = *(int *)(param_1 + 400);
      uVar19 = iVar5 + 1;
      *(uint *)(param_1 + 400) = uVar19;
      if (*(uint *)(param_1 + 0x194) < uVar19) {
        FUN_144737178(param_1 + 0x188);
      }
      puVar2 = local_c0;
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar22;
      *(int *)(uVar22 + 0x7c) = *(int *)(param_1 + 400) + -1;
      local_98 = uVar22;
      if (pvVar11 != (void *)0x0) {
        if (DAT_14cbf95a8 < 1) {
          uVar23 = (ulonglong)uVar10 & 0xfffffffc;
          pvVar20 = pvVar11;
          if ((uVar10 & 0xfffffffc) != 0) {
            pvVar20 = (void *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            uVar13 = (longlong)pvVar20 + uVar23;
            if (*(ulonglong *)(param_1 + 0x78) < uVar13) {
              FUN_140023dd8(local_c0,(int)uVar23 + 0x10);
              pvVar20 = (void *)(*puVar2 + 0xf & 0xfffffffffffffff0);
              uVar13 = (longlong)pvVar20 + uVar23;
            }
            *puVar2 = uVar13;
            memcpy(pvVar20,pvVar11,uVar23);
          }
          iVar5 = *(int *)(param_1 + 0x590);
          uVar10 = iVar5 + 1;
          *(uint *)(param_1 + 0x590) = uVar10;
          if (*(uint *)(param_1 + 0x594) < uVar10) {
            FUN_144775ac8((longlong *)(param_1 + 0x588));
          }
          lVar8 = *(longlong *)(param_1 + 0x588);
          lVar12 = (longlong)iVar5 * 0x120;
          *(undefined2 *)(lVar8 + lVar12) = 0;
          *(ulonglong *)(lVar8 + 8 + lVar12) = uVar22;
          *(void **)(lVar8 + 0x10 + lVar12) = pvVar20;
          *(ulonglong *)(lVar8 + 0x18 + lVar12) = uVar23;
          *(undefined8 *)(lVar8 + 0x20 + lVar12) = 0;
          *(undefined8 *)(lVar8 + 0x30 + lVar12) = 0;
          *(undefined8 *)(lVar8 + 0x60 + lVar12) = 0;
          *(undefined8 *)(lVar8 + 0x70 + lVar12) = 0;
          *(undefined8 *)(lVar8 + 0xa0 + lVar12) = 0;
          *(undefined8 *)(lVar8 + 0xb0 + lVar12) = 0;
          *(undefined8 *)(lVar8 + 0xe0 + lVar12) = 0;
          *(undefined8 *)(lVar8 + 0xf0 + lVar12) = 0;
          *(byte *)(uVar22 + 0x24) = *(byte *)(uVar22 + 0x24) | 0x80;
          *(undefined1 *)(param_2 + 0x1b) = 0;
          if ((*(byte *)(param_2 + 0x1c) & 8) != 0) {
            FUN_1400ea36e(local_b8,local_b8);
          }
        }
        else {
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14baaa080;
          local_60 = local_b8;
          local_88 = 0x44439778;
          uStack_84 = 1;
          local_c8 = &local_88;
          FUN_1480ae9e8(param_1,uVar22,pvVar11,uVar10 & 0xfffffffc);
          if (CONCAT44(uStack_84,local_88) != 0) {
            pppuVar17 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar17 = &local_68;
            }
            (*(code *)(*pppuVar17)[2])();
          }
        }
      }
      FUN_1444348ec(param_1,&local_98,param_3,0);
    }
  }
  else {
    puVar15 = (uint *)(lVar8 + 0x18);
    if (*param_5 != '\0') {
      puVar15 = (uint *)(param_5 + 0x1c);
    }
    uVar10 = *puVar15;
    if (*param_3 == 0) {
      bVar24 = true;
    }
    else {
      local_c8 = (uint *)((ulonglong)local_c8 & 0xffffffffffffff00);
      FUN_14716cfd3(&local_88,param_1,param_3,0);
      bVar24 = CONCAT44(uStack_84,local_88) == 0;
    }
    if ((uVar10 & 0xfffffffc) == 0) {
      puVar14 = (undefined8 *)*param_3;
      if (puVar14 != (undefined8 *)0x0) {
        *param_3 = 0;
        LOCK();
        piVar1 = (int *)(puVar14 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
    else {
      uVar19 = *(uint *)(lVar8 + 0x14);
      if (3 < uVar19) {
        if (bVar24) {
          bVar24 = false;
        }
        else {
          bVar24 = *(int *)(lVar8 + 0x1c) == 4;
        }
        local_78 = (undefined ***)0x0;
        uStack_80 = 0x10119;
        local_88 = 4;
        uStack_84 = (uVar10 & 0xfffffffc) + 0xf >> 2 & 0xfffffffc;
        lVar12 = FUN_1447f2a09(param_1,param_3,&local_88,param_4);
        local_a8 = lVar12;
        FUN_144435328(param_1,&local_a8,param_3,0);
        if (!bVar24) {
          uVar19 = uVar19 >> 2;
          local_88 = 4;
          if (DAT_14ca84e48 < 4) {
            local_88 = DAT_14ca84e48;
          }
          uStack_80 = 0x10111;
          local_88 = local_88 + (local_88 == 0);
          local_78 = (undefined ***)0x0;
          if (DAT_14ca84e48 <= uVar19) {
            uVar19 = DAT_14ca84e48;
          }
          uStack_84 = uVar19 + (uVar19 == 0);
          puVar2 = (ulonglong *)(param_1 + 0x70);
          uVar22 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
          uVar23 = uVar22 + 0x150;
          local_c0 = puVar2;
          if (*(ulonglong *)(param_1 + 0x78) < uVar23) {
            FUN_140023dd8(puVar2,0x160);
            uVar22 = *puVar2 + 0xf & 0xfffffffffffffff0;
            uVar23 = uVar22 + 0x150;
          }
          *(ulonglong *)(param_1 + 0x70) = uVar23;
          FUN_1456bd266(uVar22,param_4,&local_88,1);
          iVar5 = *(int *)(param_1 + 400);
          uVar10 = iVar5 + 1;
          *(uint *)(param_1 + 400) = uVar10;
          if (*(uint *)(param_1 + 0x194) < uVar10) {
            FUN_144737178(param_1 + 0x188);
          }
          puVar2 = local_c0;
          *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar22;
          *(int *)(uVar22 + 0x7c) = *(int *)(param_1 + 400) + -1;
          uVar23 = (ulonglong)*(uint *)(lVar8 + 0x14);
          pvVar11 = (void *)**(undefined8 **)(lVar8 + 8);
          pvVar20 = pvVar11;
          if (uVar23 != 0) {
            pvVar20 = (void *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
            uVar13 = uVar23 + (longlong)pvVar20;
            if (*(ulonglong *)(param_1 + 0x78) < uVar13) {
              FUN_140023dd8(local_c0,*(uint *)(lVar8 + 0x14) + 0x10);
              pvVar20 = (void *)(*puVar2 + 0xf & 0xfffffffffffffff0);
              uVar13 = uVar23 + (longlong)pvVar20;
            }
            *local_c0 = uVar13;
            memcpy(pvVar20,pvVar11,uVar23);
          }
          iVar5 = *(int *)(param_1 + 0x590);
          uVar10 = iVar5 + 1;
          *(uint *)(param_1 + 0x590) = uVar10;
          if (*(uint *)(param_1 + 0x594) < uVar10) {
            FUN_144775ac8(param_1 + 0x588);
          }
          lVar9 = *(longlong *)(param_1 + 0x588);
          lVar16 = (longlong)iVar5 * 0x120;
          *(undefined2 *)(lVar9 + lVar16) = 0;
          *(ulonglong *)(lVar9 + 8 + lVar16) = uVar22;
          *(void **)(lVar9 + 0x10 + lVar16) = pvVar20;
          *(ulonglong *)(lVar9 + 0x18 + lVar16) = uVar23;
          *(undefined8 *)(lVar9 + 0x20 + lVar16) = 0;
          *(undefined8 *)(lVar9 + 0x30 + lVar16) = 0;
          *(undefined8 *)(lVar9 + 0x60 + lVar16) = 0;
          *(undefined8 *)(lVar9 + 0x70 + lVar16) = 0;
          *(undefined8 *)(lVar9 + 0xa0 + lVar16) = 0;
          *(undefined8 *)(lVar9 + 0xb0 + lVar16) = 0;
          *(undefined8 *)(lVar9 + 0xe0 + lVar16) = 0;
          *(undefined8 *)(lVar9 + 0xf0 + lVar16) = 0;
          *(byte *)(uVar22 + 0x24) = *(byte *)(uVar22 + 0x24) | 0x80;
          FUN_1490981ce(lVar8);
          puVar2 = local_c0;
          uVar6 = *(undefined4 *)(lVar8 + 0x18);
          local_ac = *(undefined4 *)(lVar8 + 0x10);
          uVar7 = *(undefined4 *)(lVar8 + 0x14);
          local_b8 = *(longlong *)
                      (&DAT_14ca8c1f0 +
                      (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar14 = puVar21 + 0xc;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_c0,0x70);
            puVar21 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
            puVar14 = puVar21 + 0xc;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          *puVar21 = &PTR_FUN_14baa9820;
          puVar21[10] = 0;
          puVar21[0xb] = 0;
          iVar5 = *(int *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
            FUN_1448cfae8(param_1 + 0x98,iVar5);
          }
          puVar2 = local_c0;
          *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar21;
          *(undefined4 *)(puVar21 + 3) = uVar6;
          *(undefined4 *)((longlong)puVar21 + 0x14) = uVar7;
          *(undefined4 *)(puVar21 + 2) = local_ac;
          cVar3 = *(char *)(uVar22 + 0x68);
          puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar18 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_c0,0x50);
            puVar18 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar18 + 9;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          puVar18[1] = *(undefined8 *)(uVar22 + 8);
          puVar18[2] = 0;
          *(undefined1 *)(puVar18 + 3) = 3;
          *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
          *puVar18 = &PTR_FUN_14a1fb168;
          *(byte *)(puVar18 + 5) = cVar3 >> 7 & 0x1c;
          *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
          puVar18[7] = 0;
          puVar18[8] = uVar22;
          iVar5 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
            FUN_1447568fc(param_1 + 0x198,iVar5);
          }
          puVar2 = local_c0;
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar18;
          *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar21[10] = puVar18;
          cVar3 = *(char *)(lVar12 + 0x68);
          puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar14 = puVar18 + 8;
          if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
            FUN_140023dd8(local_c0,0x48);
            puVar18 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar18 + 8;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar14;
          puVar18[1] = *(undefined8 *)(lVar12 + 8);
          puVar18[2] = 0;
          *(undefined1 *)(puVar18 + 3) = 2;
          *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar18 + 5) = 0;
          *puVar18 = &PTR_FUN_14a1fb3e8;
          *(byte *)(puVar18 + 6) = cVar3 >> 7 & 0x1c;
          *(undefined2 *)((longlong)puVar18 + 0x31) = 0;
          puVar18[7] = lVar12;
          iVar5 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
            FUN_1447568fc(param_1 + 0x198,iVar5);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar18;
          *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar21[0xb] = puVar18;
          *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(param_5 + 0x1c);
          *(undefined4 *)((longlong)puVar21 + 0x1c) = *(undefined4 *)(param_5 + 0x20);
          *(undefined4 *)(puVar21 + 7) = *(undefined4 *)(param_5 + 0x18);
          puVar21[6] = *(undefined8 *)(param_5 + 0x10);
          puVar21[8] = *(undefined8 *)(param_5 + 4);
          *(undefined4 *)(puVar21 + 9) = *(undefined4 *)(param_5 + 0xc);
          uVar10 = *(uint *)((longlong)puVar21 + 0x14);
          cVar3 = *param_5;
          FUN_145e68f9a();
          cVar4 = *param_5;
          FUN_145e68d2c();
          FUN_1448e935e(local_b8,&local_88,&DAT_14cbf9668,cVar4);
          FUN_145e68d2c();
          local_98 = CONCAT44(uStack_84,local_88);
          local_90 = CONCAT44(uStack_7c,uStack_80);
          local_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0;
          uStack_7c = 0;
          FUN_1448f70da(local_98,&DAT_14cbfa018,puVar21 + 2,&local_88);
          uStack_84 = 1;
          uStack_80 = 1;
          local_c8 = &local_88;
          local_88 = (uVar10 >> (cVar3 * '\x02' + 2U & 0x1f)) + 0x3ff >> 10;
          FUN_149094ef0(param_1,&local_99,&local_98,puVar21 + 2);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144435328 FUN_144435328 body=477 status=ok
// SIG undefined FUN_144435328(void)

void FUN_144435328(longlong param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined2 local_57;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  uVar8 = *(uint *)(lVar5 + 0x68);
  if ((uVar8 >> 8 & 1) != 0) {
    local_54 = 0;
    uStack_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_4;
    local_40 = lVar5;
    lVar3 = FUN_14002bb54(*param_3 + 0x38,*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(*param_3 + 0x28));
    lVar5 = param_3[1];
    if (lVar5 != lVar3) {
      param_3[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar5 + 8);
          LOCK();
          uVar8 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar5 + 0xd);
            plVar4 = (longlong *)FUN_14001cc68(0x10,8);
            plVar4[1] = lVar5;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar4 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar4;
                if (bVar9) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar4 = (longlong)plVar6;
                LOCK();
                bVar9 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar4;
                if (bVar9) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
    }
    lVar5 = *param_2;
    uVar8 = *(uint *)(lVar5 + 0x68);
  }
  if ((uVar8 & 8) != 0) {
    local_57 = 0;
    uStack_50 = (undefined4)lVar5;
    uStack_4c = (undefined4)((ulonglong)lVar5 >> 0x20);
    local_58 = param_4;
    lVar3 = FUN_14002bcc2(*param_3 + 0x38,*(undefined8 *)(param_1 + 0x18),
                          *(undefined8 *)(*param_3 + 0x28));
    lVar5 = param_3[2];
    if (lVar5 != lVar3) {
      param_3[2] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      if (lVar5 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar8 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar5 + 8);
          LOCK();
          uVar8 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar8 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar5 + 0xd);
            plVar4 = (longlong *)FUN_14001cc68(0x10,8);
            plVar4[1] = lVar5;
            plVar7 = DAT_14ca843c0;
            plVar6 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar4 = (longlong)plVar7;
                LOCK();
                bVar9 = plVar7 != DAT_14ca843c0;
                plVar6 = plVar4;
                if (bVar9) {
                  plVar7 = DAT_14ca843c0;
                  plVar6 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar6;
                UNLOCK();
              } while (bVar9);
            }
            else {
              do {
                *plVar4 = (longlong)plVar6;
                LOCK();
                bVar9 = plVar6 != DAT_14ca843c8;
                plVar7 = plVar4;
                if (bVar9) {
                  plVar6 = DAT_14ca843c8;
                  plVar7 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar7;
                UNLOCK();
              } while (bVar9);
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_3 + 3) = param_4;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144435506 FUN_144435506 body=1170 status=ok
// SIG undefined FUN_144435506(void)

void FUN_144435506(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  void *_Dst;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *(int *)(param_1 + 1) << 4;
  if (uVar9 == 0) goto LAB_144435908;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_98 = (undefined1)uVar9;
  uStack_97 = (undefined1)(uVar9 >> 8);
  uStack_96 = (undefined1)(uVar9 >> 0x10);
  uStack_95 = (undefined1)(uVar9 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  local_58 = param_3;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar10 = (longlong *)(param_2 + 0x10);
  if (plVar10 == &local_a0) {
LAB_1444356b8:
    lVar4 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
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
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1444356b8;
    }
  }
  cVar5 = DAT_14ca85169;
  lVar4 = *plVar10;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
  }
  local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,uVar9);
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,lVar4,0);
  if (cVar5 == '\0') {
    FUN_14002049c(&DAT_14ca85100,0);
  }
  memcpy(_Dst,(void *)*param_1,(ulonglong)uVar9);
  lVar4 = *plVar10;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 1;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,&DAT_14ca85100);
  plVar10 = (longlong *)(param_2 + 0x18);
  if (plVar10 != &local_a0) {
    lVar4 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_144435908;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar4 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_144435908:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144435999 FUN_144435999 body=1172 status=ok
// SIG undefined FUN_144435999(void)

void FUN_144435999(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  void *_Dst;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *(uint *)(param_1 + 1) << 2;
  if ((*(uint *)(param_1 + 1) & 0x3fffffff) == 0) goto LAB_144435d9d;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_98 = (undefined1)uVar9;
  uStack_97 = (undefined1)(uVar9 >> 8);
  uStack_96 = (undefined1)(uVar9 >> 0x10);
  uStack_95 = (undefined1)(uVar9 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  local_58 = param_3;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar10 = (longlong *)(param_2 + 0x10);
  if (plVar10 == &local_a0) {
LAB_144435b4d:
    lVar4 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
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
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_144435b4d;
    }
  }
  cVar5 = DAT_14ca85169;
  lVar4 = *plVar10;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
  }
  local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,uVar9);
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,lVar4,0);
  if (cVar5 == '\0') {
    FUN_14002049c(&DAT_14ca85100,0);
  }
  memcpy(_Dst,(void *)*param_1,(ulonglong)uVar9);
  lVar4 = *plVar10;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 0x3d;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,&DAT_14ca85100);
  plVar10 = (longlong *)(param_2 + 0x18);
  if (plVar10 != &local_a0) {
    lVar4 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_144435d9d;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar4 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_144435d9d:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144435e2e FUN_144435e2e body=1170 status=ok
// SIG undefined FUN_144435e2e(void)

void FUN_144435e2e(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  void *_Dst;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *(int *)(param_1 + 1) << 4;
  if (uVar9 == 0) goto LAB_144436230;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_98 = (undefined1)uVar9;
  uStack_97 = (undefined1)(uVar9 >> 8);
  uStack_96 = (undefined1)(uVar9 >> 0x10);
  uStack_95 = (undefined1)(uVar9 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  local_58 = param_3;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar10 = (longlong *)(param_2 + 0x10);
  if (plVar10 == &local_a0) {
LAB_144435fe0:
    lVar4 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
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
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_144435fe0;
    }
  }
  cVar5 = DAT_14ca85169;
  lVar4 = *plVar10;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
  }
  local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,uVar9);
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,lVar4,0);
  if (cVar5 == '\0') {
    FUN_14002049c(&DAT_14ca85100,0);
  }
  memcpy(_Dst,(void *)*param_1,(ulonglong)uVar9);
  lVar4 = *plVar10;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 1;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,&DAT_14ca85100);
  plVar10 = (longlong *)(param_2 + 0x18);
  if (plVar10 != &local_a0) {
    lVar4 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_144436230;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar4 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_144436230:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1444362c1 FUN_1444362c1 body=1179 status=ok
// SIG undefined FUN_1444362c1(void)

void FUN_1444362c1(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  void *_Dst;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *(uint *)(param_1 + 1) << 2;
  if ((*(uint *)(param_1 + 1) & 0x3fffffff) == 0) goto LAB_1444366cc;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"Hair.CardsRest_MaterialBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = (undefined1)uVar9;
  uStack_97 = (undefined1)(uVar9 >> 8);
  uStack_96 = (undefined1)(uVar9 >> 0x10);
  uStack_95 = (undefined1)(uVar9 >> 0x18);
  uStack_94 = 0;
  uStack_90 = 0x4101;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x70);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,&DAT_14ca85100,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x70;
  }
  plVar10 = (longlong *)(param_2 + 0x10);
  if (plVar10 == &local_a0) {
LAB_14443647c:
    lVar4 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar4 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
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
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_14443647c;
    }
  }
  cVar5 = DAT_14ca85169;
  lVar4 = *plVar10;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
  }
  local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,uVar9);
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,lVar4,0);
  if (cVar5 == '\0') {
    FUN_14002049c(&DAT_14ca85100,0);
  }
  memcpy(_Dst,(void *)*param_1,(ulonglong)uVar9);
  lVar4 = *plVar10;
  if (DAT_14ca85169 == '\0') {
    FUN_14002049c(&DAT_14ca85100,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
    FUN_14002049c(&DAT_14ca85100,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,lVar4);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    uStack_97 = 0x25;
    uStack_96 = 1;
  }
  else {
    uStack_97 = 0;
    uStack_96 = 4;
  }
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_95 = 0;
  local_98 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,&DAT_14ca85100);
  plVar10 = (longlong *)(param_2 + 0x18);
  if (plVar10 != &local_a0) {
    lVar4 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar4 == 0) goto LAB_1444366cc;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar4 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar9 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar9 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar9 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar9 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar4;
        plVar10 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar11 = plVar8 != DAT_14ca843c8;
            plVar10 = plVar7;
            if (bVar11) {
              plVar8 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1444366cc:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14443675d FUN_14443675d body=184 status=ok
// SIG undefined FUN_14443675d(void)

void FUN_14443675d(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(int *)(param_2 + 1) << 4;
  if (uVar3 == 0) {
    lVar2 = *param_3;
    if (lVar2 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar2 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
      }
    }
  }
  else {
    local_30 = 0x10;
    local_28 = 0x4109;
    local_20 = 0;
    local_48 = (ulonglong)uVar3;
    local_2c = *(int *)(param_2 + 1);
    local_38 = FUN_1444397d5(param_1,param_4,&local_30,*param_2);
    FUN_1444348ec(param_1,&local_38,param_3,1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443682a FUN_14443682a body=189 status=ok
// SIG undefined FUN_14443682a(void)

void FUN_14443682a(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(int *)(param_2 + 1) * 4;
  if (uVar2 == 0) {
    lVar3 = *param_3;
    if (lVar3 != 0) {
      *param_3 = 0;
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
      }
    }
  }
  else {
    local_30 = 4;
    local_28 = 0x4109;
    local_20 = 0;
    local_48 = (ulonglong)uVar2;
    local_2c = *(int *)(param_2 + 1);
    local_38 = FUN_1444397d5(param_1,L"Hair.CardsDeformedNormal",&local_30,*param_2);
    FUN_1444348ec(param_1,&local_38,param_3,0x3d);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444368fc FUN_1444368fc body=512 status=ok
// SIG undefined FUN_1444368fc(void)

void FUN_1444368fc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0x4189;
  local_38 = 0;
  uVar4 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar4 = DAT_14ca84e48;
  }
  iVar5 = uVar4 + (uVar4 == 0);
  local_48 = CONCAT44(iVar5,iVar5);
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar6 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar6 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8(plVar1,0x160);
    uVar6 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar6 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1456bd266(uVar6,param_3,&local_48,0);
  iVar5 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar5);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar6;
  *(int *)(uVar6 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar7 + 8;
  local_48 = uVar6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x48);
    puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar7 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  puVar7[1] = *(undefined8 *)(uVar6 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 2;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar7 + 5) = 0;
  *puVar7 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar7 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar7 + 0x32) = 0;
  puVar7[7] = uVar6;
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  FUN_1405bfba3(param_1,puVar7,0,2);
  FUN_1444348ec(param_1,&local_48,param_2,0x1c);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144436afd FUN_144436afd body=55 status=ok
// SIG undefined FUN_144436afd(void)

void FUN_144436afd(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf9748 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf9748 = FUN_14171c317(FUN_14667bbb4,uVar1,L"EGroomInterpolationQuality");
  }
  return;
}



// FUNCTION 144436b34 FUN_144436b34 body=55 status=ok
// SIG undefined FUN_144436b34(void)

void FUN_144436b34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf9760 == 0) {
    uVar1 = FUN_140e0b75a();
    DAT_14cbf9760 = FUN_14171c317(FUN_14667bbe3,uVar1,L"EGroomInterpolationWeight");
  }
  return;
}



// FUNCTION 144436bbd FUN_144436bbd body=38 status=ok
// SIG undefined FUN_144436bbd(void)

void FUN_144436bbd(void)

{
  while (DAT_14cbf9ea8 != (undefined8 *)0x0) {
    DAT_14cbf9ea8 = (undefined8 *)*DAT_14cbf9ea8;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 144436be3 FUN_144436be3 body=38 status=ok
// SIG undefined FUN_144436be3(void)

void FUN_144436be3(void)

{
  while (DAT_14cbf9eb8 != (undefined8 *)0x0) {
    DAT_14cbf9eb8 = (undefined8 *)*DAT_14cbf9eb8;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 144436c24 FUN_144436c24 body=176 status=ok
// SIG undefined FUN_144436c24(void)

void FUN_144436c24(undefined8 param_1,undefined4 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5,float param_6)

{
  uint uVar1;
  float fVar2;
  undefined1 auStack_108 [56];
  undefined8 local_d0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar2 = (float)((int)ROUND(param_4 + param_4 + -0.5) >> 1);
  if (param_6 + -1.0 <= fVar2) {
    fVar2 = param_6 + -1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_d0 = param_1;
  uVar1 = FUN_14442bf1a(param_3,(int)fVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x000144436cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_14baaa644 + *(int *)(&DAT_14baaa644 + (ulonglong)uVar1 * 4)))
            (&DAT_14baaa644 + *(int *)(&DAT_14baaa644 + (ulonglong)uVar1 * 4));
  return;
}



// FUNCTION 1444378c2 FUN_1444378c2 body=226 status=ok
// SIG undefined FUN_1444378c2(void)

void FUN_1444378c2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xcd) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 1444379a4 FUN_1444379a4 body=216 status=ok
// SIG undefined FUN_1444379a4(void)

undefined8 FUN_1444379a4(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)param_2 * 0xf0;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x89) {
        uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
      }
      else {
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
      }
    }
    else {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8888888888888889),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0xf0)) {
    uVar4 = uVar2 / 0xf0 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xf0,0x10);
  }
  return uVar3;
}



// FUNCTION 144437a7c FUN_144437a7c body=108 status=ok
// SIG undefined FUN_144437a7c(void)

void FUN_144437a7c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xbf800000;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[0xe] = &DAT_3f8000003f800000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0xbf800000;
  return;
}



// FUNCTION 144437ae8 FUN_144437ae8 body=264 status=ok
// SIG undefined FUN_144437ae8(void)

void FUN_144437ae8(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xf0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf0)) {
      uVar5 = uVar4 / 0xf0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144437bf0 FUN_144437bf0 body=152 status=ok
// SIG undefined FUN_144437bf0(void)

void FUN_144437bf0(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  if (((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0xb0), *(int *)(lVar1 + 0x20) != 0)) &&
     (*(int *)(lVar1 + 0x28) != 0)) {
    fVar2 = (float)(*(int *)(lVar1 + 0x18) - 1);
    if (fVar2 <= param_2) {
      param_2 = fVar2;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    roundps(ZEXT416((uint)param_2),ZEXT416((uint)param_2),1);
  }
  return;
}



// FUNCTION 144437c88 FUN_144437c88 body=230 status=ok
// SIG undefined FUN_144437c88(void)

longlong FUN_144437c88(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 0x180) == 0) {
    lVar1 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x184) != -1) {
      lVar1 = (**(code **)(*param_1 + 0xc0))(param_1,(undefined4 *)(param_2 + 0x184));
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == *(int *)(param_2 + 0x180))) goto LAB_144437d4d;
    }
    (**(code **)(*param_1 + 0x478))(param_1,&local_40);
    uVar3 = 0xffffffff;
    lVar1 = 0xffffffff;
    if ((longlong)local_38 != 0) {
      lVar2 = (longlong)local_38 << 2;
      lVar1 = 0;
      do {
        if (*(int *)(local_40 + lVar1 * 4) == *(int *)(param_2 + 0x180)) goto LAB_144437d30;
        lVar1 = lVar1 + 1;
        lVar2 = lVar2 + -4;
      } while (lVar2 != 0);
      lVar1 = 0xffffffff;
    }
LAB_144437d30:
    lVar1 = (**(code **)(*param_1 + 0xd0))(param_1,lVar1);
    if (lVar1 != 0) {
      uVar3 = *(undefined4 *)(lVar1 + 0x15c);
    }
    *(undefined4 *)(param_2 + 0x184) = uVar3;
  }
LAB_144437d4d:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144437d6f FUN_144437d6f body=74 status=ok
// SIG undefined FUN_144437d6f(void)

void FUN_144437d6f(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0xbf800000;
  *(undefined8 *)(param_1 + 4) = 0xbf80000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 **)(param_1 + 0x1a) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)(param_1 + 0x21) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0;
  *(undefined8 *)(param_1 + 0x25) = 0;
  param_1[0x27] = 0;
  return;
}



// FUNCTION 144437dba FUN_144437dba body=265 status=ok
// SIG undefined FUN_144437dba(void)

void FUN_144437dba(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144437ec3 FUN_144437ec3 body=63 status=ok
// SIG undefined FUN_144437ec3(void)

void FUN_144437ec3(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0xbf800000;
  *(undefined8 *)(param_1 + 4) = 0xbf80000000000000;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined1 **)(param_1 + 0x1a) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 144437f02 FUN_144437f02 body=366 status=ok
// SIG undefined FUN_144437f02(void)

void FUN_144437f02(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x88;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144437f9b;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144437f9b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x88)) {
    uVar7 = uVar5 / 0x88 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x88,8);
  return;
}



// FUNCTION 144438070 FUN_144438070 body=949 status=ok
// SIG undefined FUN_144438070(void)

int * FUN_144438070(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                   longlong *param_5,char param_6,undefined1 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  longlong lVar9;
  int *piVar10;
  undefined1 auStack_158 [32];
  int local_138;
  ulonglong local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  int local_10c;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  int *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8 [13];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = -1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = &DAT_14c846480;
  piVar10 = param_1 + 8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined8 *)piVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    piVar10 = piVar10 + 2;
  }
  lVar6 = FUN_144437c88(param_3,param_4);
  if (lVar6 != 0) {
    if (*(char *)(param_4 + 0x164) == '\x01') {
      lVar6 = *(longlong *)(lVar6 + 8);
      if (lVar6 != 0) {
        FUN_14908cd5b(lVar6,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_6) & 0xffffffff,param_1
                     );
        local_130 = CONCAT44(local_130._4_4_,2);
LAB_14443840e:
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
        local_138 = CONCAT31(local_138._1_3_,param_7);
        FUN_1490933d4(param_8,param_4,lVar6,param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_158);
      }
    }
    else if ((*(char *)(param_4 + 0x164) == '\0') && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0))
    {
      plVar1 = *(longlong **)(lVar6 + 0x2a0);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x80))(plVar1,param_1);
        if (0 < param_1[4]) {
          local_130 = local_130 & 0xffffffff00000000;
          goto LAB_14443840e;
        }
      }
      if (0 < DAT_14c7649ec) {
        FUN_1448ac920(local_c8,lVar6 + 0x100);
        puVar4 = local_c8;
        piVar10 = param_1 + 8;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined8 *)piVar10 = *puVar4;
          puVar4 = puVar4 + 1;
          piVar10 = piVar10 + 2;
        }
        plVar1 = *(longlong **)(lVar6 + 0x2a0);
        iVar5 = 0;
        if (plVar1 != (longlong *)0x0) {
          iVar2 = (**(code **)(*plVar1 + 0x90))(plVar1);
          *param_1 = iVar2;
          lVar7 = *(longlong *)(*(longlong *)plVar1[8] + (longlong)iVar2 * 8);
          iVar5 = *(int *)(lVar7 + 0x18);
          if (param_6 == '\x01' && iVar5 != 0) {
            lVar9 = *(longlong *)(*(longlong *)(*param_5 + (longlong)iVar2 * 8) + 0x140);
            local_130 = lVar9 + 0x20;
            local_c8[0] = 0;
            local_120 = &local_d0;
            local_d0 = 0;
            local_118 = &local_d8;
            local_d8 = 0;
            local_128 = local_c8;
            local_138 = iVar2;
            local_10c = iVar5;
            FUN_14909384a(param_8,param_2,plVar1,lVar7);
            LOCK();
            *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
            UNLOCK();
            local_108 = (longlong)*(int *)(lVar9 + 0x28);
            if (local_108 != 0) {
              local_e0 = param_1 + 2;
              local_e8 = *(longlong *)(lVar9 + 0x20);
              local_f0 = local_c8[0];
              local_f8 = local_d0;
              local_100 = local_d8;
              local_108 = local_108 << 2;
              lVar9 = 0;
              do {
                iVar5 = *(int *)(local_e8 + lVar9);
                puVar4 = (undefined8 *)FUN_147d236b6(local_e0);
                *puVar4 = local_f0;
                puVar4[1] = local_f8;
                puVar4[2] = local_100;
                puVar4[3] = 0;
                puVar4[4] = 0;
                puVar4[6] = *(undefined8 *)(lVar7 + 0x88);
                puVar4[5] = *(undefined8 *)(lVar7 + 0x78);
                *(undefined4 *)(puVar4 + 0xb) = *(undefined4 *)(lVar7 + 0xec);
                puVar4[7] = *(undefined8 *)(*(longlong *)(lVar7 + 0x28) + 0x18);
                uVar3 = (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x50))();
                *(undefined4 *)((longlong)puVar4 + 0x5c) = uVar3;
                *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)(lVar7 + 0xa8);
                lVar8 = (longlong)iVar5 * 0xf8;
                *(undefined4 *)(puVar4 + 9) =
                     *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 8 + lVar8);
                *(undefined4 *)((longlong)puVar4 + 0x4c) =
                     *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 0x48 + lVar8);
                *(undefined4 *)((longlong)puVar4 + 0x54) =
                     *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 4 + lVar8);
                *(undefined4 *)(puVar4 + 10) =
                     *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 0x10 + lVar8);
                *(int *)(puVar4 + 0xc) = iVar5;
                *(int *)((longlong)puVar4 + 100) = iVar2;
                *(undefined4 *)(puVar4 + 8) = 0;
                lVar9 = lVar9 + 4;
              } while (local_108 != lVar9);
            }
            iVar5 = local_10c;
          }
        }
        local_128 = (undefined8 *)CONCAT44(local_128._4_4_,iVar5);
        local_138 = CONCAT31(local_138._1_3_,param_7);
        local_130 = CONCAT44(local_130._4_4_,1);
        FUN_1490933d4(param_8,param_4,lVar6,param_1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443844e FUN_14443844e body=199 status=ok
// SIG undefined FUN_14443844e(void)

void FUN_14443844e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2 * 0x20;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x400) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
    }
  }
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 5)) {
    uVar2 = uVar1 >> 5 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 144438515 FUN_144438515 body=11 status=ok
// SIG undefined FUN_144438515(void)

void FUN_144438515(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 144438520 FUN_144438520 body=248 status=ok
// SIG undefined FUN_144438520(void)

void FUN_144438520(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144438618 FUN_144438618 body=481 status=ok
// SIG undefined FUN_144438618(void)

void FUN_144438618(longlong param_1,ulonglong *param_2)

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
  FUN_149094400(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444387fa FUN_1444387fa body=232 status=ok
// SIG undefined FUN_1444387fa(void)

void FUN_1444387fa(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1444388e2 FUN_1444388e2 body=81 status=ok
// SIG undefined FUN_1444388e2(void)

void FUN_1444388e2(undefined8 param_1,longlong *param_2)

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
  FUN_1490944a3(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144438934 FUN_144438934 body=216 status=ok
// SIG undefined FUN_144438934(void)

undefined8 FUN_144438934(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)param_2 * 0xb0;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0xbb) {
        uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
      }
      else {
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
      }
    }
    else {
      uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0xb0)) {
    uVar4 = uVar2 / 0xb0 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0xb0,0x10);
  }
  return uVar3;
}



// FUNCTION 144438a0c FUN_144438a0c body=71 status=ok
// SIG undefined FUN_144438a0c(void)

void FUN_144438a0c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x14] = 0;
  return;
}



// FUNCTION 144438a54 FUN_144438a54 body=264 status=ok
// SIG undefined FUN_144438a54(void)

void FUN_144438a54(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xb0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
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



// FUNCTION 144438b5c FUN_144438b5c body=50 status=ok
// SIG undefined FUN_144438b5c(void)

void FUN_144438b5c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144438b8e FUN_144438b8e body=82 status=ok
// SIG undefined FUN_144438b8e(void)

void FUN_144438b8e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x16] = 0;
  return;
}



// FUNCTION 144438be0 FUN_144438be0 body=265 status=ok
// SIG undefined FUN_144438be0(void)

void FUN_144438be0(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xc0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144438ce9 FUN_144438ce9 body=50 status=ok
// SIG undefined FUN_144438ce9(void)

void FUN_144438ce9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144438d1c FUN_144438d1c body=214 status=ok
// SIG undefined FUN_144438d1c(void)

undefined8 FUN_144438d1c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2 * 0x180;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x56) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
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
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 / 0x180)) {
    uVar4 = uVar3 / 0x180 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x180,0x10);
  }
  return uVar2;
}



// FUNCTION 144438df2 FUN_144438df2 body=159 status=ok
// SIG undefined FUN_144438df2(void)

void FUN_144438df2(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  memset(param_1 + 6,0,0x90);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x1c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  return;
}



// FUNCTION 144438e92 FUN_144438e92 body=265 status=ok
// SIG undefined FUN_144438e92(void)

void FUN_144438e92(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x180;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x180)) {
      uVar5 = uVar4 / 0x180 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x180,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144438f9b FUN_144438f9b body=53 status=ok
// SIG undefined FUN_144438f9b(void)

void FUN_144438f9b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 200);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144438fdc FUN_144438fdc body=481 status=ok
// SIG undefined FUN_144438fdc(void)

void FUN_144438fdc(longlong param_1,ulonglong *param_2)

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
  FUN_149095168(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444391be FUN_1444391be body=232 status=ok
// SIG undefined FUN_1444391be(void)

void FUN_1444391be(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 1444392a6 FUN_1444392a6 body=81 status=ok
// SIG undefined FUN_1444392a6(void)

void FUN_1444392a6(undefined8 param_1,longlong *param_2)

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
  FUN_14909520b(param_1,param_2,lVar1);
  return;
}



// FUNCTION 144439314 FUN_144439314 body=38 status=ok
// SIG undefined FUN_144439314(void)

undefined8 FUN_144439314(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14443933a FUN_14443933a body=882 status=ok
// SIG undefined FUN_14443933a(void)

void FUN_14443933a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *_Dst;
  undefined8 *puVar6;
  size_t _Size;
  undefined1 *_Src;
  ulonglong uVar7;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_90;
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
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
  _Size = (size_t)(int)local_b0;
  *(int *)(puVar6 + 4) = (int)local_b0;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    puVar4 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar4 = &local_c0;
    }
    FUN_1446fe144(puVar6 + 2,local_b0 & 0xffffffff,0);
    _Dst = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      _Dst = puVar6 + 2;
    }
    memcpy(_Dst,puVar4,_Size);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar6 + 5,local_60,0);
    puVar4 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar4 = puVar6 + 5;
    }
    memcpy(puVar4,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar6 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    lVar5 = FUN_1447b4020();
    if (lVar5 != 0) {
      lVar5 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x1c8));
      if ((*(longlong *)(lVar5 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x52) == '\0')) {
        lVar5 = FUN_1447b4020(*(undefined8 *)(param_1 + 0x1c8));
        uVar2 = *(ulonglong *)(lVar5 + 0x10);
        uVar7 = 0;
        if ((uVar2 != 0) && (*(char *)(uVar2 + 0x52) == '\0')) {
          uVar7 = uVar2;
        }
        local_c0 = 0xffffffffffffffff;
        local_b8 = 0xffffffff;
        local_a8[0] = 1;
        local_a4 = 0x200000000070;
        local_9c = 0;
        local_90 = 0;
        uStack_f0 = 1;
        local_f8 = &local_c0;
        local_b0 = uVar7;
        FUN_144760590(param_2,&local_f8,0);
        uStack_f0 = DAT_14c9a52a0;
        local_f8 = DAT_14c9a5298;
        uStack_ec = SUB84(DAT_14c9a5298,0);
        uStack_e8 = (undefined4)((ulonglong)DAT_14c9a5298 >> 0x20);
        uStack_e4 = DAT_14c9a52a0;
        local_d8 = DAT_14c9a52a0;
        uStack_e0 = DAT_14c9a5298;
        uVar1 = *(undefined4 *)(param_1 + 0x1c0);
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x10);
        puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar6 + 0xc;
        if ((undefined8 *)param_2[1] < puVar4) {
          FUN_140023dd8(param_2,0x68);
          puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar4 = puVar6 + 0xc;
        }
        *param_2 = (ulonglong)puVar4;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar6;
        param_2[6] = (ulonglong)(puVar6 + 1);
        puVar6[1] = 0;
        *puVar6 = &PTR_LAB_14a289d68;
        puVar6[2] = local_f8;
        puVar6[3] = CONCAT44(uStack_ec,uStack_f0);
        *(undefined4 *)(puVar6 + 4) = uStack_e8;
        *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_e4;
        *(undefined4 *)(puVar6 + 5) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = uStack_e0._4_4_;
        *(undefined4 *)(puVar6 + 6) = local_d8;
        *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
        *(undefined4 *)(puVar6 + 7) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x3c) = 1;
        *(undefined4 *)(puVar6 + 8) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x44) = 0;
        *(undefined4 *)(puVar6 + 9) = uVar1;
        puVar6[10] = uVar3;
        puVar6[0xb] = uVar7;
        local_c0 = 0xffffffffffffffff;
        local_b8 = 0xffffffff;
        local_a8[0] = 1;
        local_a4 = 0x7000002000;
        local_9c = 0;
        local_90 = 0;
        local_c8 = 1;
        local_d0 = &local_c0;
        local_b0 = uVar7;
        FUN_144760590(param_2,&local_d0,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443974e FUN_14443974e body=12 status=ok
// SIG undefined FUN_14443974e(void)

void FUN_14443974e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144439757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14443975a FUN_14443975a body=29 status=ok
// SIG undefined FUN_14443975a(void)

undefined8 FUN_14443975a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444397ac FUN_1444397ac body=12 status=ok
// SIG undefined FUN_1444397ac(void)

void FUN_1444397ac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001444397b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1444397b8 FUN_1444397b8 body=29 status=ok
// SIG undefined FUN_1444397b8(void)

undefined8 FUN_1444397b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1444397d5 FUN_1444397d5 body=466 status=ok
// SIG undefined FUN_1444397d5(void)

ulonglong FUN_1444397d5(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,
                       undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  int local_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_48 = *(undefined8 *)(param_3 + 4);
  uVar3 = *param_3;
  if (DAT_14ca84e48 <= *param_3) {
    uVar3 = DAT_14ca84e48;
  }
  local_58 = uVar3 + (uVar3 == 0);
  uVar3 = DAT_14ca84e48;
  if (param_3[1] < DAT_14ca84e48) {
    uVar3 = param_3[1];
  }
  iStack_54 = uVar3 + (uVar3 == 0);
  uVar6 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar4 = uVar6 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar4) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x160);
    uVar6 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar4 = uVar6 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar4;
  FUN_1456bd266(uVar6,param_2,&local_58,1);
  iVar1 = *(int *)(param_1 + 400);
  uVar3 = iVar1 + 1;
  *(uint *)(param_1 + 400) = uVar3;
  if (*(uint *)(param_1 + 0x194) < uVar3) {
    FUN_144737178(param_1 + 0x188);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1 * 8) = uVar6;
  *(int *)(uVar6 + 0x7c) = *(int *)(param_1 + 400) + -1;
  if (param_4 != 0) {
    iVar1 = *(int *)(param_1 + 0x590);
    uVar3 = iVar1 + 1;
    *(uint *)(param_1 + 0x590) = uVar3;
    if (*(uint *)(param_1 + 0x594) < uVar3) {
      FUN_144775ac8((longlong *)(param_1 + 0x588));
    }
    lVar2 = *(longlong *)(param_1 + 0x588);
    lVar5 = (longlong)iVar1 * 0x120;
    *(undefined2 *)(lVar2 + lVar5) = 0;
    *(ulonglong *)(lVar2 + 8 + lVar5) = uVar6;
    *(longlong *)(lVar2 + 0x10 + lVar5) = param_4;
    *(undefined8 *)(lVar2 + 0x18 + lVar5) = param_5;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = 0;
    *(undefined8 *)(lVar2 + 0x30 + lVar5) = 0;
    *(undefined8 *)(lVar2 + 0x60 + lVar5) = 0;
    *(undefined8 *)(lVar2 + 0x70 + lVar5) = 0;
    *(undefined8 *)(lVar2 + 0xa0 + lVar5) = 0;
    *(undefined8 *)(lVar2 + 0xb0 + lVar5) = 0;
    *(undefined8 *)(lVar2 + 0xe0 + lVar5) = 0;
    *(undefined8 *)(lVar2 + 0xf0 + lVar5) = 0;
    *(byte *)(uVar6 + 0x24) = *(byte *)(uVar6 + 0x24) | 0x80;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1444399a8 FUN_1444399a8 body=1735 status=ok
// SIG undefined FUN_1444399a8(void)

ulonglong FUN_1444399a8(longlong param_1,longlong param_2,ulonglong *param_3,uint *param_4,
                       uint *param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulonglong local_70;
  uint local_68;
  int iStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_2 + 0x30);
  uVar12 = *param_3;
  if (uVar12 == 0) {
LAB_144439b26:
    uStack_60 = param_4[2];
    uStack_5c = param_4[3];
    local_68 = *param_4;
    if (DAT_14ca84e48 <= *param_4) {
      local_68 = DAT_14ca84e48;
    }
    uStack_58 = (undefined4)*(undefined8 *)(param_4 + 4);
    uStack_54 = (uint)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20);
    local_68 = local_68 + (local_68 == 0);
    uVar7 = DAT_14ca84e48;
    if (param_4[1] < DAT_14ca84e48) {
      uVar7 = param_4[1];
    }
    iStack_64 = uVar7 + (uVar7 == 0);
    puVar1 = (ulonglong *)(param_1 + 0x70);
    uVar12 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar8 = uVar12 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
      FUN_140023dd8(puVar1,0x160);
      uVar12 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar8 = uVar12 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar8;
    FUN_1456bd266(uVar12,param_6,&local_68,1);
    iVar2 = *(int *)(param_1 + 400);
    uVar7 = iVar2 + 1;
    *(uint *)(param_1 + 400) = uVar7;
    if (*(uint *)(param_1 + 0x194) < uVar7) {
      FUN_144737178(param_1 + 0x188);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 8) = uVar12;
    *(int *)(uVar12 + 0x7c) = *(int *)(param_1 + 400) + -1;
    uVar8 = (ulonglong)*(uint *)(lVar3 + 0x14);
    pvVar4 = (void *)**(undefined8 **)(lVar3 + 8);
    pvVar11 = pvVar4;
    if (uVar8 != 0) {
      pvVar11 = (void *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      uVar14 = uVar8 + (longlong)pvVar11;
      if (*(ulonglong *)(param_1 + 0x78) < uVar14) {
        FUN_140023dd8(puVar1,*(uint *)(lVar3 + 0x14) + 0x10);
        pvVar11 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        uVar14 = uVar8 + (longlong)pvVar11;
      }
      *puVar1 = uVar14;
      memcpy(pvVar11,pvVar4,uVar8);
    }
    iVar2 = *(int *)(param_1 + 0x590);
    uVar7 = iVar2 + 1;
    *(uint *)(param_1 + 0x590) = uVar7;
    if (*(uint *)(param_1 + 0x594) < uVar7) {
      FUN_144775ac8((longlong *)(param_1 + 0x588));
    }
    lVar5 = *(longlong *)(param_1 + 0x588);
    lVar10 = (longlong)iVar2 * 0x120;
    *(undefined2 *)(lVar5 + lVar10) = 0;
    *(ulonglong *)(lVar5 + 8 + lVar10) = uVar12;
    *(void **)(lVar5 + 0x10 + lVar10) = pvVar11;
    *(ulonglong *)(lVar5 + 0x18 + lVar10) = uVar8;
    *(undefined8 *)(lVar5 + 0x20 + lVar10) = 0;
    *(undefined8 *)(lVar5 + 0x30 + lVar10) = 0;
    *(undefined8 *)(lVar5 + 0x60 + lVar10) = 0;
    *(undefined8 *)(lVar5 + 0x70 + lVar10) = 0;
    *(undefined8 *)(lVar5 + 0xa0 + lVar10) = 0;
    *(undefined8 *)(lVar5 + 0xb0 + lVar10) = 0;
    *(undefined8 *)(lVar5 + 0xe0 + lVar10) = 0;
    *(undefined8 *)(lVar5 + 0xf0 + lVar10) = 0;
    *(byte *)(uVar12 + 0x24) = *(byte *)(uVar12 + 0x24) | 0x80;
    FUN_1490981ce(lVar3);
  }
  else {
    if (*(int *)(lVar3 + 0x1c) == 4) {
      uStack_54 = param_4[5];
      uStack_60 = param_4[2] | 8;
      uVar7 = (uint)*(undefined8 *)param_4;
      local_68 = DAT_14ca84e48;
      if (uVar7 < DAT_14ca84e48) {
        local_68 = uVar7;
      }
      uStack_5c = (uint)*(undefined8 *)(param_4 + 3);
      uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20);
      local_68 = local_68 + (local_68 == 0);
      uVar6 = (uint)((ulonglong)*(undefined8 *)param_4 >> 0x20);
      uVar7 = DAT_14ca84e48;
      if (uVar6 < DAT_14ca84e48) {
        uVar7 = uVar6;
      }
      iStack_64 = uVar7 + (uVar7 == 0);
      uVar12 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar8 = uVar12 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x160);
        uVar12 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar8 = uVar12 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar8;
      FUN_1456bd266(uVar12,param_6,&local_68,1);
      iVar2 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar2 + 1U) {
        FUN_144737178(param_1 + 0x188,iVar2);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 8) = uVar12;
      *(int *)(uVar12 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uVar7 = *(int *)(uVar12 + 100) * *(int *)(uVar12 + 0x60);
      uVar14 = *param_3;
      uVar13 = 0;
    }
    else {
      if (param_4[1] * *param_4 == param_5[1] * *param_5) goto LAB_144439b26;
      if (*(int *)(lVar3 + 0x14) == 0) {
        uVar12 = 0;
        goto LAB_144439afb;
      }
      if ((uint)(*(int *)(uVar12 + 100) * *(int *)(uVar12 + 0x60)) < *(uint *)(lVar3 + 0x18)) {
        uStack_54 = param_4[5];
        uStack_60 = param_4[2] | 8;
        uVar7 = (uint)*(undefined8 *)param_4;
        local_68 = DAT_14ca84e48;
        if (uVar7 < DAT_14ca84e48) {
          local_68 = uVar7;
        }
        uStack_5c = (uint)*(undefined8 *)(param_4 + 3);
        uStack_58 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 3) >> 0x20);
        local_68 = local_68 + (local_68 == 0);
        uVar6 = (uint)((ulonglong)*(undefined8 *)param_4 >> 0x20);
        uVar7 = DAT_14ca84e48;
        if (uVar6 < DAT_14ca84e48) {
          uVar7 = uVar6;
        }
        iStack_64 = uVar7 + (uVar7 == 0);
        uVar12 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
        uVar8 = uVar12 + 0x150;
        if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
          FUN_140023dd8((longlong *)(param_1 + 0x70),0x160);
          uVar12 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
          uVar8 = uVar12 + 0x150;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar8;
        FUN_1456bd266(uVar12,param_6,&local_68,1);
        iVar2 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar2 + 1U) {
          FUN_144737178(param_1 + 0x188,iVar2);
        }
        *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 8) = uVar12;
        *(int *)(uVar12 + 0x7c) = *(int *)(param_1 + 400) + -1;
        local_70 = (ulonglong)(uint)(*(int *)(*param_3 + 100) * *(int *)(*param_3 + 0x60));
        local_78 = 0;
        FUN_143211d72(param_1,uVar12,0);
      }
      uStack_60 = param_5[2];
      uStack_5c = param_5[3];
      local_68 = *param_5;
      if (DAT_14ca84e48 <= *param_5) {
        local_68 = DAT_14ca84e48;
      }
      uStack_58 = (undefined4)*(undefined8 *)(param_5 + 4);
      uStack_54 = (uint)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20);
      local_68 = local_68 + (local_68 == 0);
      uVar7 = DAT_14ca84e48;
      if (param_5[1] < DAT_14ca84e48) {
        uVar7 = param_5[1];
      }
      iStack_64 = uVar7 + (uVar7 == 0);
      puVar1 = (ulonglong *)(param_1 + 0x70);
      uVar14 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar8 = uVar14 + 0x150;
      if (*(ulonglong *)(param_1 + 0x78) < uVar8) {
        FUN_140023dd8(puVar1,0x160);
        uVar14 = *puVar1 + 0xf & 0xfffffffffffffff0;
        uVar8 = uVar14 + 0x150;
      }
      *(ulonglong *)(param_1 + 0x70) = uVar8;
      FUN_1456bd266(uVar14,param_6,&local_68,1);
      iVar2 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar2 + 1U) {
        FUN_144737178(param_1 + 0x188,iVar2);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 8) = uVar14;
      *(int *)(uVar14 + 0x7c) = *(int *)(param_1 + 400) + -1;
      uVar8 = (ulonglong)*(uint *)(lVar3 + 0x14);
      pvVar4 = (void *)**(undefined8 **)(lVar3 + 8);
      pvVar11 = pvVar4;
      if (uVar8 != 0) {
        pvVar11 = (void *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        uVar9 = uVar8 + (longlong)pvVar11;
        if (*(ulonglong *)(param_1 + 0x78) < uVar9) {
          FUN_140023dd8(puVar1,*(uint *)(lVar3 + 0x14) + 0x10);
          pvVar11 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          uVar9 = uVar8 + (longlong)pvVar11;
        }
        *puVar1 = uVar9;
        memcpy(pvVar11,pvVar4,uVar8);
      }
      iVar2 = *(int *)(param_1 + 0x590);
      *(uint *)(param_1 + 0x590) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x594) < iVar2 + 1U) {
        FUN_144775ac8(param_1 + 0x588,iVar2);
      }
      lVar5 = *(longlong *)(param_1 + 0x588);
      lVar10 = (longlong)iVar2 * 0x120;
      *(undefined2 *)(lVar5 + lVar10) = 0;
      *(ulonglong *)(lVar5 + 8 + lVar10) = uVar14;
      *(void **)(lVar5 + 0x10 + lVar10) = pvVar11;
      *(ulonglong *)(lVar5 + 0x18 + lVar10) = uVar8;
      *(undefined8 *)(lVar5 + 0x20 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0x30 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0x60 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0x70 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0xa0 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0xb0 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0xe0 + lVar10) = 0;
      *(undefined8 *)(lVar5 + 0xf0 + lVar10) = 0;
      *(byte *)(uVar14 + 0x24) = *(byte *)(uVar14 + 0x24) | 0x80;
      FUN_1490981ce(lVar3);
      uVar13 = *(undefined4 *)(lVar3 + 0x10);
      uVar7 = *(uint *)(lVar3 + 0x14);
    }
    local_70 = (ulonglong)uVar7;
    local_78 = 0;
    FUN_143211d72(param_1,uVar12,uVar13,uVar14);
  }
LAB_144439afb:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14443a070 FUN_14443a070 body=2966 status=ok
// SIG undefined FUN_14443a070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14443a070(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  char *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbf92ec);
  if (cVar1 == '\0') {
    _DAT_14cbf92ec = 0;
    uRam000000014cbf92f4 = 0;
  }
  if (local_70 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_70 = "bone";
  local_68 = (code *)CONCAT35(local_68._5_3_,4);
  FUN_14001a6c0(&local_70,1);
  ppuStack_80 = (undefined **)0x0;
  uStack_78 = 0;
  local_88 = (wchar_t *)0x1;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14baa4820,2,&PTR_FUN_14baa47f0);
  local_88._0_4_ = 0x40;
  FUN_141471170(&DAT_14cbf9348,L"r.HairStrands.MinLOD",&DAT_14cbf9358,
                L"Clamp the min hair LOD to this value, preventing to reach lower/high-quality LOD."
               );
  atexit(FUN_14442bc5c);
  local_88._0_4_ = 0x40;
  FUN_141471170(&DAT_14cbf9360,L"r.HairStrands.UseCardsInsteadOfStrands",&DAT_14cbf9370,
                L"Force cards geometry on all groom elements. If no cards data is available, nothing will be displayed"
               );
  atexit(FUN_14442bca1);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cbf9378,L"r.HairStrands.SwapType",&DAT_14c7649e8,
                L"Swap rendering buffer at the end of frame. This is an experimental toggle. Default:1"
               );
  atexit(FUN_14442bce6);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cbf9388,L"r.HairStrands.ManualSkinCache",&DAT_14c7649ec,
                L"If skin cache is not enabled, and grooms use skinning method, this enable a simple skin cache mechanisme for groom. Default:disable"
               );
  atexit(FUN_14442bd2b);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cbf9398,L"r.HairStrands.Interoplation.FrustumCulling",&DAT_14c7649f0,
                L"Swap rendering buffer at the end of frame. This is an experimental toggle. Default:1"
               );
  atexit(FUN_14442bd70);
  local_88._0_4_ = 0x24;
  FUN_141471170(&DAT_14cbf93a8,L"r.HairStrands.Streaming",&DAT_14cbf93b8,
                L"Hair strands streaming toggle.");
  atexit(FUN_14442bdb5);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cbf93c0,L"r.HairStrands.Streaming.CurvePage",&DAT_14c7649f4,
                L"Number of strands curve per streaming page");
  atexit(FUN_14442bdfa);
  local_88._0_4_ = 0;
  FUN_141471170(&DAT_14cbf93d0,L"r.HairStrands.Streaming.StreamOutThreshold",&DAT_14c7649f8,
                L"Threshold used for streaming out data. In curve page. Default:2.");
  atexit(FUN_14442be3f);
  local_88._0_4_ = 0x20;
  FUN_141471170(&DAT_14cbf93e0,L"r.HairStrands.AutoLOD.Force",&DAT_14cbf93f0,
                L"Force Auto LOD on all grooms. Used for debugging purpose.");
  atexit(FUN_14442be84);
  local_88 = (wchar_t *)CONCAT44(local_88._4_4_,0x20);
  FUN_1415c789c(&DAT_14cbf93f8,L"r.HairStrands.AutoLOD.Bias",&DAT_14c7649fc,
                L"Global bias for Auto LOD on all grooms. Used for debugging purpose.");
  atexit(FUN_14442bec9);
  local_68 = FUN_145e4cf06;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf9520,&local_70);
  uStack_78 = 0;
  local_88 = (wchar_t *)0x0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/HairStrandsCore",&PTR_FUN_14baa53e0,1,0);
  local_88 = L"Whether to enable the Groom Render Command Pipe 0: off; 1: on (default)";
  FUN_145d706a8(&DAT_14cbf9548,L"Groom",0,L"r.RenderCommandPipe.Groom");
  atexit((_func_5014 *)&LAB_144434742);
  local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf9598,L"r.HairStrands.Strands.BulkData.ReleaseAfterUse",&DAT_14cbf95a8,
                L"Release CPU bulk data once hair groom/groom binding asset GPU resources are created. This saves memory"
               );
  atexit(FUN_14443474e);
  local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf95b0,L"r.HairStrands.Strands.BulkData.AsyncLoading",&DAT_14c764a00,
                L"Load hair strands data with async loading so that it is not blocking the rendering thread. This value define the MinLOD at which this happen. Default disabled (-1)"
               );
  atexit(FUN_144434793);
  local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf95c0,L"r.HairStrands.Cards.BulkData.AsyncLoading",&DAT_14c764a04,
                L"Load hair cards/meshes data with async loading so that it is not blocking the rendering thread. This value define the MinLOD at which this happen. Default disabled (-1)"
               );
  atexit(FUN_1444347d8);
  local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf95d0,L"r.HairStrands.Strands.BulkData.Validation",&DAT_14c764a08,
                L"Validate some hair strands data at serialization/loading time.");
  atexit(FUN_14443481d);
  local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14cbf95e0,L"r.HairStrands.DebugData.VoxelSize",&DAT_14c764a0c,
                L"Voxel size use for creating debug data.");
  atexit(FUN_144434862);
  local_88 = (wchar_t *)((ulonglong)local_88 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cbf95f0,L"r.HairStrands.DebugData.MaxSegmentPerVoxel",&DAT_14c764a10,
                L"Max number of segments per Voxel size when creating debug data.");
  atexit(FUN_1444348a7);
  local_68 = FUN_145e68d2c;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf9718,&local_70);
  uStack_78 = 2;
  ppuStack_80 = &PTR_FUN_14baa90b0;
  local_88 = (wchar_t *)0x2;
  FUN_14282b410(L"/Script/HairStrandsCore",0,0,&PTR_FUN_14baa90f0);
  _DAT_14cbf9790 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *_DAT_14cbf9790 = 0;
  _DAT_14cbf9790[1] = 0;
  _DAT_14cbf9790[2] = 0;
  *(undefined8 *)((longlong)_DAT_14cbf9790 + 0x14) = 0;
  *(undefined8 *)((longlong)_DAT_14cbf9790 + 0x1c) = 0;
  *(undefined1 *)((longlong)_DAT_14cbf9790 + 0x24) = 0x25;
  _DAT_14cbf9790[5] = 0;
  DAT_14cbf9798 = _DAT_14cbf9790;
  atexit((_func_5014 *)&LAB_144436b6b);
  local_68 = FUN_145e69296;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf98b8,&local_70);
  local_68 = FUN_145e9d1fc;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf99e0,&local_70);
  local_68 = FUN_145f3ae06;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf9b08,&local_70);
  local_68 = FUN_145e7a042;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf9c30,&local_70);
  local_68 = FUN_145e9d76c;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf9d58,&local_70);
  local_68 = FUN_145f5ec6e;
  local_70 = &DAT_140a1b61a;
  FUN_1412df486(&DAT_14cbf9e80,&local_70);
  _DAT_14cbf9e90 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  *_DAT_14cbf9e90 = 0;
  *(undefined1 *)(_DAT_14cbf9e90 + 1) = 1;
  _DAT_14cbf9e90[2] = 0;
  _DAT_14cbf9e90[3] = 0;
  _DAT_14cbf9e90[4] = 0;
  _DAT_14cbf9e90[5] = 0x800;
  _DAT_14cbf9e90[6] = 0;
  _DAT_14cbf9e90[7] = 0x13f800000;
  *(undefined4 *)(_DAT_14cbf9e90 + 8) = 0;
  _DAT_14cbf9e90[9] = 0;
  _DAT_14cbf9e90[10] = 0;
  _DAT_14cbf9e90[0xb] = 0;
  _DAT_14cbf9e90[0xc] = 0;
  DAT_14cbf9e98 = _DAT_14cbf9e90;
  atexit((_func_5014 *)&LAB_144436bb8);
  _DAT_14cbf9ea0 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *_DAT_14cbf9ea0 = 0;
  DAT_14cbf9ea8 = _DAT_14cbf9ea0;
  atexit(FUN_144436bbd);
  _DAT_14cbf9eb0 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *_DAT_14cbf9eb0 = 0;
  DAT_14cbf9eb8 = _DAT_14cbf9eb0;
  atexit(FUN_144436be3);
  local_70 = "groom_color";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa600 = (ulonglong)uVar2;
  local_70 = "groom_roughness";
  local_68._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa608 = (ulonglong)uVar2;
  local_70 = "groom_ao";
  local_68._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa610 = (ulonglong)uVar2;
  local_70 = "position";
  local_68._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa5e0 = (ulonglong)uVar2;
  local_70 = "groom_width";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9ec0 = (ulonglong)uVar2;
  local_70 = "groom_color";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9ec8 = (ulonglong)uVar2;
  local_70 = "groom_roughness";
  local_68._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9ed0 = (ulonglong)uVar2;
  local_70 = "groom_group_id";
  local_68._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9ed8 = (ulonglong)uVar2;
  local_70 = "groom_guide";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9ee0 = (ulonglong)uVar2;
  local_70 = "groom_id";
  local_68._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa5f8 = (ulonglong)uVar2;
  local_70 = "groom_clumpid";
  local_68._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa5f0 = (ulonglong)uVar2;
  local_70 = "groom_root_uv";
  local_68._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa5e8 = (ulonglong)uVar2;
  local_70 = "vertexcount";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa5d8 = (ulonglong)uVar2;
  local_70 = "groom_width";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9ee8 = (ulonglong)uVar2;
  local_70 = "groom_closest_guides";
  local_68._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa618 = (ulonglong)uVar2;
  local_70 = "groom_guide_weights";
  local_68._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbfa620 = (ulonglong)uVar2;
  local_70 = "groom_basis_type";
  local_68._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9ef0 = (ulonglong)uVar2;
  local_70 = "groom_curve_type";
  local_68._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9ef8 = (ulonglong)uVar2;
  local_70 = "groom_knots";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f00 = (ulonglong)uVar2;
  local_70 = "groom_group_name";
  local_68._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f08 = (ulonglong)uVar2;
  local_70 = "groom_group_cards_id";
  local_68._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f10 = (ulonglong)uVar2;
  local_70 = "groom_color";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f18 = (ulonglong)uVar2;
  local_70 = "groom_roughness";
  local_68._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f20 = (ulonglong)uVar2;
  local_70 = "groom_width";
  local_68._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f28 = (ulonglong)uVar2;
  local_70 = "groom_version_major";
  local_68._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f30 = (ulonglong)uVar2;
  local_70 = "groom_version_minor";
  local_68._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f38 = (ulonglong)uVar2;
  local_70 = "groom_tool";
  local_68._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f40 = (ulonglong)uVar2;
  local_70 = "groom_properties";
  local_68 = (code *)CONCAT35(local_68._5_3_,0x10);
  uVar2 = FUN_14001a6c0(&local_70,1);
  _DAT_14cbf9f48 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


