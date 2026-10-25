// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433298fc FUN_1433298fc body=29 status=ok
// SIG undefined FUN_1433298fc(void)

undefined8 FUN_1433298fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14332991a FUN_14332991a body=774 status=ok
// SIG undefined FUN_14332991a(void)

void FUN_14332991a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  
  psVar2 = (short *)*param_1;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar8 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,9);
  uVar1 = *(ushort *)(lVar3 + 0xc);
  uVar5 = (uint)uVar1;
  if (uVar1 != 0) {
    lVar4 = *param_3;
    puVar7 = *(ulonglong **)(lVar3 + 0x28);
    puVar6 = puVar7 + (ulonglong)uVar1 * 4;
    lVar10 = 0;
    do {
      if (*(short *)((longlong)puVar7 + lVar10 + 0x1e) == *psVar2) {
        if ((longlong)puVar7 + lVar10 != 0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *(ulonglong *)((longlong)puVar7 + lVar10)) {
            *(int *)(lVar4 + lVar8 * 4) =
                 (int)*(ulonglong *)((longlong)puVar7 + lVar10) - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar1 = *(ushort *)(lVar3 + 0xc);
            uVar5 = (uint)uVar1;
            if (uVar1 == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar7 = *(ulonglong **)(lVar3 + 0x28);
            puVar6 = puVar7 + (ulonglong)uVar1 * 4;
          }
        }
        break;
      }
      lVar10 = lVar10 + 0x20;
    } while ((ulonglong)uVar1 << 5 != lVar10);
    puVar9 = puVar7;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == psVar2[1]) {
        if (puVar9 != (ulonglong *)0x0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *puVar9) {
            *(int *)(lVar4 + 4 + lVar8 * 4) = (int)*puVar9 - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar5 = (uint)*(ushort *)(lVar3 + 0xc);
            if (*(ushort *)(lVar3 + 0xc) == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar7 = *(ulonglong **)(lVar3 + 0x28);
          }
        }
        break;
      }
      puVar9 = puVar9 + 4;
    } while (puVar9 != puVar6);
    puVar6 = puVar7;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == psVar2[2]) {
        if (puVar6 != (ulonglong *)0x0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *puVar6) {
            *(int *)(lVar4 + 8 + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar5 = (uint)*(ushort *)(lVar3 + 0xc);
            if (*(ushort *)(lVar3 + 0xc) == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar7 = *(ulonglong **)(lVar3 + 0x28);
          }
        }
        break;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (ulonglong *)((ulonglong)(uVar5 << 5) + (longlong)puVar7));
    puVar6 = puVar7;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == psVar2[3]) {
        if (puVar6 != (ulonglong *)0x0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *puVar6) {
            *(int *)(lVar4 + 0xc + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar5 = (uint)*(ushort *)(lVar3 + 0xc);
            if (*(ushort *)(lVar3 + 0xc) == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar7 = *(ulonglong **)(lVar3 + 0x28);
          }
        }
        break;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (ulonglong *)((ulonglong)(uVar5 << 5) + (longlong)puVar7));
    puVar6 = puVar7;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == psVar2[4]) {
        if (puVar6 != (ulonglong *)0x0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *puVar6) {
            *(int *)(lVar4 + 0x10 + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar5 = (uint)*(ushort *)(lVar3 + 0xc);
            if (*(ushort *)(lVar3 + 0xc) == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar7 = *(ulonglong **)(lVar3 + 0x28);
          }
        }
        break;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (ulonglong *)((ulonglong)(uVar5 << 5) + (longlong)puVar7));
    puVar6 = puVar7;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == psVar2[5]) {
        if (puVar6 != (ulonglong *)0x0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *puVar6) {
            *(int *)(lVar4 + 0x14 + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar5 = (uint)*(ushort *)(lVar3 + 0xc);
            if (*(ushort *)(lVar3 + 0xc) == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar7 = *(ulonglong **)(lVar3 + 0x28);
          }
        }
        break;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (ulonglong *)((ulonglong)(uVar5 << 5) + (longlong)puVar7));
    puVar6 = puVar7;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == psVar2[6]) {
        if (puVar6 != (ulonglong *)0x0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *puVar6) {
            *(int *)(lVar4 + 0x18 + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar5 = (uint)*(ushort *)(lVar3 + 0xc);
            if (*(ushort *)(lVar3 + 0xc) == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar7 = *(ulonglong **)(lVar3 + 0x28);
          }
        }
        break;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (ulonglong *)((ulonglong)(uVar5 << 5) + (longlong)puVar7));
    puVar6 = puVar7;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == psVar2[7]) {
        if (puVar6 != (ulonglong *)0x0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *puVar6) {
            *(int *)(lVar4 + 0x1c + lVar8 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar5 = (uint)*(ushort *)(lVar3 + 0xc);
            if (*(ushort *)(lVar3 + 0xc) == 0) {
              return;
            }
            lVar4 = *param_3;
            puVar7 = *(ulonglong **)(lVar3 + 0x28);
          }
        }
        break;
      }
      puVar6 = puVar6 + 4;
    } while (puVar6 != (ulonglong *)((ulonglong)(uVar5 << 5) + (longlong)puVar7));
    puVar6 = (ulonglong *)((ulonglong)(uVar5 << 5) + (longlong)puVar7);
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == psVar2[8]) {
        if (puVar7 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar7 < *(ulonglong *)(lVar3 + 0x20)) {
          return;
        }
        *(int *)(lVar4 + 0x20 + lVar8 * 4) = (int)*puVar7 - (int)*(ulonglong *)(lVar3 + 0x20);
        return;
      }
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar6);
  }
  return;
}



// FUNCTION 143329c20 FUN_143329c20 body=1 status=ok
// SIG undefined FUN_143329c20(void)

void FUN_143329c20(void)

{
  return;
}



// FUNCTION 143329c2c FUN_143329c2c body=152 status=ok
// SIG undefined FUN_143329c2c(void)

void FUN_143329c2c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a4e0908;
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  plVar3 = *(longlong **)(param_1 + 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x000143329cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143329cc8 FUN_143329cc8 body=308 status=ok
// SIG undefined FUN_143329cc8(void)

void FUN_143329cc8(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1417a6684(*(undefined8 *)(param_2 + 8));
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476b0906(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143329dfe FUN_143329dfe body=282 status=ok
// SIG undefined FUN_143329dfe(void)

undefined8 * FUN_143329dfe(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 143329f18 FUN_143329f18 body=93 status=ok
// SIG undefined FUN_143329f18(void)

void FUN_143329f18(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143329cc8(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143329f6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143329f76 FUN_143329f76 body=282 status=ok
// SIG undefined FUN_143329f76(void)

undefined8 * FUN_143329f76(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332a090 FUN_14332a090 body=299 status=ok
// SIG undefined FUN_14332a090(void)

void FUN_14332a090(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476b25a4(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332a1bc FUN_14332a1bc body=282 status=ok
// SIG undefined FUN_14332a1bc(void)

undefined8 * FUN_14332a1bc(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332a2d6 FUN_14332a2d6 body=93 status=ok
// SIG undefined FUN_14332a2d6(void)

void FUN_14332a2d6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332a090(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332a329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332a334 FUN_14332a334 body=1 status=ok
// SIG undefined FUN_14332a334(void)

void FUN_14332a334(void)

{
  return;
}



// FUNCTION 14332a336 FUN_14332a336 body=2721 status=ok
// SIG undefined FUN_14332a336(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332a336(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ushort *puVar12;
  double *pdVar13;
  double *pdVar14;
  ulonglong uVar15;
  ushort *puVar16;
  ulonglong uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_358 [32];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double *pdStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  auVar7 = _DAT_149936790;
  auVar6 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar10 = (longlong)*(int *)(*(undefined8 **)(param_1 + 8) + 1);
  if (lVar10 != 0) {
    puVar12 = (ushort *)**(undefined8 **)(param_1 + 8);
    puVar16 = puVar12 + lVar10 * 4;
    dVar4 = (double)DAT_149934d80;
    dVar5 = DAT_149934d80._8_8_;
    do {
      uVar1 = puVar12[2];
      plVar3 = *(longlong **)(param_1 + 0x10);
      if ((int)(uint)uVar1 < (int)*(uint *)(plVar3 + 5)) {
        plVar11 = plVar3 + 2;
        if ((longlong *)plVar3[4] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar3[4];
        }
        if ((*(uint *)((longlong)plVar11 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)
        {
          uVar2 = *puVar12;
          if (((uint)uVar2 < *(uint *)(plVar3 + 5)) &&
             ((*(uint *)((longlong)plVar11 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) !=
              0)) {
            lVar10 = *plVar3;
            uVar8 = (uint)uVar1 * 0x60;
            uVar17 = (ulonglong)uVar8;
            pdVar13 = (double *)(lVar10 + uVar17);
            uVar15 = (ulonglong)((uint)uVar2 * 0x60);
            pdVar14 = (double *)(lVar10 + uVar15);
            local_328 = *(undefined1 (*) [16])(lVar10 + 0x40 + uVar17);
            local_338 = *(undefined1 (*) [16])(lVar10 + 0x50 + uVar17);
            local_2e8 = *(undefined1 (*) [16])(lVar10 + 0x40 + uVar15);
            local_2d8 = *(undefined1 (*) [16])(lVar10 + 0x50 + uVar15);
            auVar19 = minpd(local_2e8,local_328);
            auVar24 = minpd(local_2d8,local_338);
            auVar35._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
            auVar35._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
            iVar9 = movmskpd(uVar8,auVar35);
            auVar19._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
            auVar19._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
            uVar8 = movmskpd((int)lVar10,auVar19);
            if ((uVar8 & 0x3fffffff) == 0 && iVar9 == 0) {
              dVar25 = *pdVar14;
              dVar26 = pdVar14[1];
              dVar28 = pdVar14[2];
              dVar34 = pdVar14[3];
              local_318 = *pdVar13;
              dStack_310 = pdVar13[1];
              local_2f8 = pdVar13[2];
              dStack_2f0 = pdVar13[3];
              local_2c8 = pdVar13[3];
              dStack_2c0 = pdVar13[3];
              dVar30 = pdVar13[1];
              dVar18 = pdVar13[1];
              dVar23 = pdVar13[2];
              dVar22 = pdVar13[2];
              local_2a8 = dVar26 * dVar23 * -1.0 +
                          dVar28 * dVar30 + dVar34 * *pdVar13 * 1.0 + dVar25 * local_2c8;
              dStack_2a0 = dVar25 * dVar22 * 1.0 +
                           dVar34 * dVar18 + dVar28 * *pdVar13 * -1.0 + dVar26 * dStack_2c0;
              local_2b8 = dVar34 * dVar23 * 1.0 +
                          ((*pdVar13 * dVar26 * 1.0 + dVar28 * local_2c8) - dVar25 * dVar30);
              dStack_2b0 = dVar28 * dVar22 * -1.0 +
                           ((*pdVar13 * dVar25 * -1.0 + dVar34 * dStack_2c0) - dVar26 * dVar18);
              dVar27 = pdVar14[4] * (double)local_328._0_8_;
              dVar29 = pdVar14[5] * (double)local_328._8_8_;
              dVar31 = pdVar14[6] * (double)local_338._0_8_;
              dVar33 = pdVar14[7] * (double)local_338._8_8_;
              local_308._8_4_ = SUB84(dStack_2f0,0);
              local_308._0_8_ = local_318;
              local_308._12_4_ = (int)((ulonglong)dStack_2f0 >> 0x20);
              dVar25 = dVar29 * local_318 - dStack_310 * dVar27;
              dVar28 = dVar31 * dStack_310 - local_2f8 * dVar29;
              dVar34 = dVar27 * local_2f8 - local_318 * dVar31;
              dVar26 = dVar33 * dStack_2f0 - (double)local_308._8_8_ * dVar33;
              dVar28 = dVar28 + dVar28;
              dVar34 = dVar34 + dVar34;
              dVar25 = dVar25 + dVar25;
              dVar26 = dVar26 + dVar26;
              dVar30 = pdVar13[4];
              dVar23 = pdVar13[5];
              dVar18 = pdVar13[6];
              dVar22 = pdVar13[7];
              *pdVar14 = local_2a8;
              pdVar14[1] = dStack_2a0;
              auVar24._8_8_ = dStack_2b0;
              auVar24._0_8_ = local_2b8;
              *(undefined1 (*) [16])(pdVar14 + 2) = auVar24;
              pdVar14[4] = (dVar25 * dStack_310 - local_2f8 * dVar34) + local_2c8 * dVar28 + dVar27
                           + dVar30;
              pdVar14[5] = (dVar28 * local_2f8 - dVar25 * local_318) + dStack_2c0 * dVar34 + dVar29
                           + dVar23;
              pdVar14[6] = (dVar34 * local_318 - dStack_310 * dVar28) + local_2c8 * dVar25 + dVar31
                           + dVar18;
              pdVar14[7] = (dVar26 * dStack_2f0 - dVar26 * (double)local_308._8_8_) +
                           dStack_2c0 * dVar26 + dVar33 + dVar22;
              pdVar14[8] = (double)local_2e8._0_8_ * (double)local_328._0_8_;
              pdVar14[9] = (double)local_2e8._8_8_ * (double)local_328._8_8_;
              pdVar14[10] = (double)local_2d8._0_8_ * (double)local_338._0_8_;
              pdVar14[0xb] = (double)local_2d8._8_8_ * (double)local_338._8_8_;
            }
            else {
              local_2e8._8_8_ = (double)local_2e8._8_8_ * (double)local_328._8_8_;
              local_2e8._0_8_ = (double)local_2e8._0_8_ * (double)local_328._0_8_;
              local_2d8._8_8_ = (double)local_2d8._8_8_ * (double)local_338._8_8_;
              local_2d8._0_8_ = (double)local_2d8._0_8_ * (double)local_338._0_8_;
              dVar30 = *pdVar13;
              dVar18 = pdVar13[1];
              dVar23 = pdVar13[2];
              dVar26 = dVar30 + dVar30;
              dVar28 = dVar18 + dVar18;
              dVar22 = dVar23 + dVar23;
              local_1f8 = (dVar4 - (dVar23 * dVar22 + dVar18 * dVar28)) * (double)local_328._0_8_;
              dStack_1d0 = (dVar5 - (dVar23 * dVar22 + dVar30 * dVar26)) * (double)local_328._8_8_;
              local_1a8 = (1.0 - (dVar30 * dVar26 + dVar18 * dVar28)) * (double)local_338._0_8_;
              local_308._0_8_ = pdVar13[3];
              local_308._8_8_ = pdVar13[3];
              dVar23 = dVar22 * (double)local_308._0_8_;
              dVar25 = dVar26 * (double)local_308._8_8_;
              local_308._0_8_ = dVar28 * (double)local_308._0_8_;
              local_308._8_8_ = dVar26 * (double)local_308._8_8_;
              pdStack_1f0 = (double *)((dVar28 * dVar30 + dVar23) * (double)local_328._0_8_);
              local_1c8 = (dVar22 * dVar18 + dVar25) * (double)local_328._8_8_;
              local_2f8 = ((double)local_308._0_8_ + *pdVar13 * dVar22) * (double)local_338._0_8_;
              dStack_2f0 = ((double)local_308._8_8_ + *pdVar13 * dVar26) * (double)local_338._8_8_;
              local_1d8 = (dVar28 * dVar30 - dVar23) * (double)local_328._8_8_;
              dStack_1b0 = (dVar22 * dVar18 - dVar25) * (double)local_338._0_8_;
              local_1e8 = (*pdVar13 * dVar22 - (double)local_308._0_8_) * (double)local_328._0_8_;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = pdVar13[4];
              dStack_190 = pdVar13[5];
              local_188 = pdVar13[6];
              uStack_180 = 0x3ff0000000000000;
              dVar18 = *pdVar14;
              dVar23 = pdVar14[1];
              dVar30 = pdVar14[2];
              local_338._0_8_ = pdVar14[8];
              local_338._8_8_ = pdVar14[9];
              local_328._0_8_ = pdVar14[10];
              local_328._8_8_ = pdVar14[0xb];
              dVar28 = dVar23 + dVar23;
              dVar26 = dVar30 + dVar30;
              dVar22 = dVar18 * (dVar18 + dVar18);
              dVar25 = dVar23 * dVar28;
              local_278 = (dVar4 - (dVar30 * dVar26 + dVar25)) * (double)local_338._0_8_;
              dStack_250 = (dVar5 - (dVar30 * dVar26 + dVar22)) * (double)local_338._8_8_;
              local_318 = (1.0 - (dVar22 + dVar25)) * (double)local_328._0_8_;
              dStack_310 = (0.0 - (dVar22 + dVar25)) * (double)local_328._8_8_;
              dVar30 = pdVar14[3];
              dVar22 = dVar26 * dVar30;
              dVar25 = (dVar18 + dVar18) * pdVar14[3];
              dVar30 = dVar28 * dVar30;
              dStack_270 = (dVar28 * dVar18 + dVar22) * (double)local_338._0_8_;
              local_248 = (dVar26 * dVar23 + dVar25) * (double)local_338._8_8_;
              local_238 = (dVar30 + *pdVar14 * dVar26) * (double)local_328._0_8_;
              local_268 = (*pdVar14 * dVar26 - dVar30) * (double)local_338._0_8_;
              local_258 = (dVar28 * dVar18 - dVar22) * (double)local_338._8_8_;
              dStack_230 = (dVar26 * dVar23 - dVar25) * (double)local_328._0_8_;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = pdVar14[4];
              dStack_210 = pdVar14[5];
              local_208 = pdVar14[6];
              uStack_200 = 0x3ff0000000000000;
              local_228 = local_318;
              local_1b8 = local_2f8;
              FUN_1447fea8d(local_178,&local_278,&local_1f8);
              local_308._0_8_ = local_178[2];
              dVar30 = local_178[2] * local_178[2] +
                       local_178[0] * local_178[0] + local_178[1] * local_178[1];
              local_2a8 = local_148;
              dVar18 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
              local_2b8 = local_128;
              dVar23 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
              uVar17 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
              dVar30 = (double)(~uVar17 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar30)) & uVar17);
              uVar17 = -(ulonglong)(0.0 <= dVar18 + -9.99999993922529e-09);
              dVar18 = (double)(~uVar17 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar18)) & uVar17);
              uVar17 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
              dVar23 = (double)(~uVar17 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar23)) & uVar17);
              local_338._0_8_ = local_178[0] * dVar30;
              local_2c8 = local_178[1] * dVar30;
              local_328._0_8_ = local_158 * dVar18;
              local_318 = local_150 * dVar18;
              local_2f8 = local_138 * dVar23;
              auVar20._8_8_ = -(ulonglong)(0.0 <= (double)local_2e8._8_8_);
              auVar20._0_8_ = -(ulonglong)(0.0 <= (double)local_2e8._0_8_);
              auVar19 = blendvpd(auVar7,auVar6,auVar20);
              local_138 = (double)(~-(ulonglong)(0.0 <= (double)local_2d8._0_8_) &
                                   0xbff0000000000000 |
                                  -(ulonglong)(0.0 <= (double)local_2d8._0_8_) & 0x3ff0000000000000)
              ;
              dVar22 = auVar19._0_8_;
              local_178[0] = local_178[0] * dVar30 * dVar22;
              local_178[1] = local_2c8 * dVar22;
              local_178[2] = dVar30 * local_178[2] * dVar22;
              dVar30 = auVar19._8_8_;
              local_148 = dVar18 * local_148 * dVar30;
              local_150 = local_318 * dVar30;
              local_158 = dVar30 * local_158 * dVar18;
              local_128 = dVar23 * local_128 * local_138;
              local_130 = local_130 * dVar23 * local_138;
              local_138 = local_138 * local_2f8;
              FUN_14481fd10(&local_298,local_178);
              dVar30 = local_288 * local_288 + local_298 * local_298;
              dVar18 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar32._0_8_ = dVar30 + dVar18;
              auVar32._8_8_ = dVar30 + dVar18;
              auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
              auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
              auVar19 = sqrtpd(auVar32,auVar32);
              auVar35 = divpd(auVar6,auVar19);
              auVar36._0_8_ = auVar35._0_8_ * local_288;
              auVar36._8_8_ = auVar35._8_8_ * dStack_280;
              auVar19 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar21);
              pdVar14[8] = (double)local_2e8._0_8_;
              pdVar14[9] = (double)local_2e8._8_8_;
              pdVar14[10] = (double)local_2d8._0_8_;
              pdVar14[0xb] = (double)local_2d8._8_8_;
              *pdVar14 = (double)((ulonglong)(local_298 * auVar35._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
              pdVar14[1] = (double)((ulonglong)(dStack_290 * auVar35._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
              *(undefined1 (*) [16])(pdVar14 + 2) = auVar19;
              pdVar14[4] = local_118;
              pdVar14[5] = dStack_110;
              pdVar14[6] = local_108;
              pdVar14[7] = 0.0;
            }
          }
          else {
            pdVar13 = (double *)((ulonglong)((uint)uVar1 * 0x60) + *plVar3);
            pdVar14 = local_178;
            for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
              *pdVar14 = *pdVar13;
              pdVar13 = pdVar13 + 1;
              pdVar14 = pdVar14 + 1;
            }
            FUN_1401280b4(plVar3,&local_1f8);
            pdVar13 = local_178;
            pdVar14 = pdStack_1f0;
            for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
              *pdVar14 = *pdVar13;
              pdVar13 = pdVar13 + 1;
              pdVar14 = pdVar14 + 1;
            }
          }
        }
      }
      puVar12 = puVar12 + 4;
    } while (puVar12 != puVar16);
  }
  if ((local_f0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14332add8 FUN_14332add8 body=306 status=ok
// SIG undefined FUN_14332add8(void)

void FUN_14332add8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476b3a24(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332af0c FUN_14332af0c body=282 status=ok
// SIG undefined FUN_14332af0c(void)

undefined8 * FUN_14332af0c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332b026 FUN_14332b026 body=93 status=ok
// SIG undefined FUN_14332b026(void)

void FUN_14332b026(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332add8(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332b079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332b086 FUN_14332b086 body=300 status=ok
// SIG undefined FUN_14332b086(void)

void FUN_14332b086(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476b4606(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476b4606(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332b1b4 FUN_14332b1b4 body=282 status=ok
// SIG undefined FUN_14332b1b4(void)

undefined8 * FUN_14332b1b4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332b2ce FUN_14332b2ce body=86 status=ok
// SIG undefined FUN_14332b2ce(void)

void FUN_14332b2ce(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332b086(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332b31a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332b324 FUN_14332b324 body=300 status=ok
// SIG undefined FUN_14332b324(void)

void FUN_14332b324(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476b5076(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476b5076(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332b452 FUN_14332b452 body=282 status=ok
// SIG undefined FUN_14332b452(void)

undefined8 * FUN_14332b452(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332b56c FUN_14332b56c body=86 status=ok
// SIG undefined FUN_14332b56c(void)

void FUN_14332b56c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332b324(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332b5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332b5c2 FUN_14332b5c2 body=475 status=ok
// SIG undefined FUN_14332b5c2(void)

void FUN_14332b5c2(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x48);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x10;
LAB_14332b5e5:
    if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
      return;
    }
    memmove(param_1,*(void **)((longlong)param_1 + 0x40),(longlong)param_2 << 2);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)((longlong)param_1 + 0x4c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_14332b68a;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_14332b68a:
    uVar8 = uVar8 >> 2;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
    }
    else {
      *(uint *)((longlong)param_1 + 0x4c) = uVar6;
      if (uVar6 < 0x11) goto LAB_14332b5e5;
    }
    if (*(longlong *)((longlong)param_1 + 0x40) == 0) {
      FUN_1446efa72((longlong)param_1 + 0x40,0,uVar8,4);
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,uVar8,4);
  return;
}



// FUNCTION 14332b860 FUN_14332b860 body=1 status=ok
// SIG undefined FUN_14332b860(void)

void FUN_14332b860(void)

{
  return;
}



// FUNCTION 14332b862 FUN_14332b862 body=1 status=ok
// SIG undefined FUN_14332b862(void)

void FUN_14332b862(void)

{
  return;
}



// FUNCTION 14332b864 FUN_14332b864 body=142 status=ok
// SIG undefined FUN_14332b864(void)

void FUN_14332b864(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  void *pvVar5;
  void *_Dst;
  void *_Src;
  ulonglong uVar6;
  void *pvVar7;
  
  puVar2 = (uint *)*param_2;
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar4 = *(longlong *)(lVar3 + 0x20);
  pvVar7 = (void *)0x0;
  _Dst = (void *)(lVar4 + (ulonglong)puVar2[2]);
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    _Dst = pvVar7;
  }
  pvVar5 = (void *)(lVar4 + (ulonglong)*puVar2);
  if ((ulonglong)*puVar2 == 0xffffffff) {
    pvVar5 = pvVar7;
  }
  _Src = (void *)(lVar4 + (ulonglong)puVar2[1]);
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    _Src = pvVar7;
  }
  uVar1 = *(ushort *)(lVar3 + 0xe);
  if ((_Src != (void *)0x0) && (pvVar5 != (void *)0x0)) {
    if ((ulonglong)uVar1 != 0) {
      uVar6 = 0;
      do {
        *(double *)((longlong)_Dst + uVar6 * 8) =
             *(double *)((longlong)pvVar5 + uVar6 * 8) * *(double *)((longlong)_Src + uVar6 * 8);
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
    return;
  }
  if (pvVar5 != (void *)0x0) {
    _Src = pvVar5;
  }
  memcpy(_Dst,_Src,(ulonglong)uVar1 << 3);
  return;
}



// FUNCTION 14332b8f2 FUN_14332b8f2 body=1 status=ok
// SIG undefined FUN_14332b8f2(void)

void FUN_14332b8f2(void)

{
  return;
}



// FUNCTION 14332b92e FUN_14332b92e body=300 status=ok
// SIG undefined FUN_14332b92e(void)

void FUN_14332b92e(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476b7790(lVar3,*(undefined8 *)(param_1 + 200),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476b7790(lVar3,*(undefined8 *)(param_1 + 200),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332ba5c FUN_14332ba5c body=282 status=ok
// SIG undefined FUN_14332ba5c(void)

undefined8 * FUN_14332ba5c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332bb76 FUN_14332bb76 body=86 status=ok
// SIG undefined FUN_14332bb76(void)

void FUN_14332bb76(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332b92e(param_1 + 0x15);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332bbc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332bbcc FUN_14332bbcc body=300 status=ok
// SIG undefined FUN_14332bbcc(void)

void FUN_14332bbcc(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476b7a0c(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476b7a0c(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332bcfa FUN_14332bcfa body=282 status=ok
// SIG undefined FUN_14332bcfa(void)

undefined8 * FUN_14332bcfa(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332be14 FUN_14332be14 body=86 status=ok
// SIG undefined FUN_14332be14(void)

void FUN_14332be14(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332bbcc(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332be60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332be6a FUN_14332be6a body=303 status=ok
// SIG undefined FUN_14332be6a(void)

void FUN_14332be6a(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476b7e76(&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332bf9a FUN_14332bf9a body=282 status=ok
// SIG undefined FUN_14332bf9a(void)

undefined8 * FUN_14332bf9a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332c0b4 FUN_14332c0b4 body=86 status=ok
// SIG undefined FUN_14332c0b4(void)

void FUN_14332c0b4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332be6a(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332c100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332c10a FUN_14332c10a body=352 status=ok
// SIG undefined FUN_14332c10a(void)

void FUN_14332c10a(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar7 = (undefined8 *)*param_2;
    puVar1 = puVar7 + (longlong)*(int *)(param_2 + 1) * 3;
    do {
      *puVar7 = 0x3ff0000000000000;
      puVar7[1] = 0x3ff0000000000000;
      puVar7 = puVar7 + 3;
    } while (puVar7 != puVar1);
  }
  lVar4 = *(longlong *)(param_1 + 0xc0);
  cVar2 = *(char *)(lVar4 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar2 == '\0') {
    *(int *)(lVar4 + 0x264) = *(int *)(lVar4 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 0x264) = *(int *)(lVar4 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar4;
  iVar6 = FUN_1403b8464(&local_60,0);
  lVar5 = local_58;
  iVar3 = *(int *)(lVar4 + 0x10);
  local_50 = iVar6;
  if (iVar6 != iVar3) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x60) + (longlong)iVar6 * 8);
      local_50 = iVar6;
      if (cVar2 == '\0') {
        *(undefined4 *)(lVar4 + 0x14) = 0;
        FUN_1476b82a2(param_2,lVar4,param_1);
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x14) = 1;
        }
      }
      else {
        FUN_1476b82a2(param_2,lVar4,param_1);
      }
      iVar6 = FUN_1403b8464(&local_60,iVar6 + 1);
      local_50 = iVar6;
    } while (iVar6 != iVar3);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1476b7008(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332c26c FUN_14332c26c body=282 status=ok
// SIG undefined FUN_14332c26c(void)

undefined8 * FUN_14332c26c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332c386 FUN_14332c386 body=93 status=ok
// SIG undefined FUN_14332c386(void)

void FUN_14332c386(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332c10a(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332c3d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332c3e4 FUN_14332c3e4 body=306 status=ok
// SIG undefined FUN_14332c3e4(void)

void FUN_14332c3e4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476b8602(param_2,&local_70,*(undefined8 *)(param_1 + 200),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332c518 FUN_14332c518 body=282 status=ok
// SIG undefined FUN_14332c518(void)

undefined8 * FUN_14332c518(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143327e59);
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



// FUNCTION 14332c632 FUN_14332c632 body=93 status=ok
// SIG undefined FUN_14332c632(void)

void FUN_14332c632(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332c3e4(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332c685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14332c6a0 FUN_14332c6a0 body=188 status=ok
// SIG undefined FUN_14332c6a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14332c6a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) >> (_DAT_14cab4a20 & 0x1f) & 1) != 0) {
    uVar5 = (1 << ((byte)_DAT_14cab4a20 & 0x1f)) - 1U & *(uint *)(param_1 + 2);
    uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar2 = *param_1;
    uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 6);
    lVar7 = lVar2 + uVar3;
    if (uVar3 == 0xffff) {
      lVar7 = 0;
    }
    puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 4 + uVar6 * 6) + lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      cVar1 = *(char *)(lVar2 + uVar6 * 6 + 5);
      if (cVar1 != '\x01') {
        if (cVar1 == '\0') {
          return puVar4;
        }
        if (cVar1 != '\x02') {
          return (undefined8 *)0x0;
        }
      }
      return (undefined8 *)*puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14332c75c FUN_14332c75c body=194 status=ok
// SIG undefined FUN_14332c75c(void)

int FUN_14332c75c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14332c7a3:
      lVar11 = (longlong)iVar1 * 0x30;
      iVar3 = *(int *)(lVar4 + 8 + lVar11);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar10 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar11) + lVar10);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar10);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_14332c7f9;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar7]) goto LAB_14332c7f9;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14332c80a;
    }
  }
  return -1;
LAB_14332c7f9:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_14332c80a:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar11);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14332c7a3;
}



// FUNCTION 14332c81e FUN_14332c81e body=1185 status=ok
// SIG undefined FUN_14332c81e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332c81e(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DAT_14cab5ff0 = 0xffffffff;
  DAT_14cab5ff4 = 0;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d8db0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d9170,1,0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cab6028);
  if (cVar1 == '\0') {
    _DAT_14cab6028 = 0;
    uRam000000014cab6030 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  DAT_14cab63ac = DAT_14cab3268 + 1;
  DAT_14cab3268 = DAT_14cab3268 + 2;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab63b0 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4da2e0,2,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4da6c0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4daaf0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4daed0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4db2a0,1,0);
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4db650,1,0);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab6118,L"Sequencer.Animation.UIFlickerFix",&DAT_14cab6110,
                L"(Default: true. Fixes pre-animated state ordering that was causing excessive UI flicker. Known to cause issues when animating Anim Class so should be disabled if a crash is encountered."
               );
  atexit(FUN_14331e8fd);
  DAT_14cab6128 = DAT_14cab3268 + 1;
  DAT_14cab612c = DAT_14cab3268 + 3;
  DAT_14cab3268 = DAT_14cab3268 + 4;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab6130 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4dbbd0,1,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab6150 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4dbfa0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4dc700,2,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4dceb0,2,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4dd280,1,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab61f8 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4dd630,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4dd9e0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4de520,3,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab6278 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4de920,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4decd0,1,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab62b0 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4df030,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4df460,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4df910,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4dfd60,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e0220,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332ccc8 FUN_14332ccc8 body=55 status=ok
// SIG undefined FUN_14332ccc8(void)

void FUN_14332ccc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab6558 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab6558 = FUN_14171c317(FUN_14634d13e,uVar1,L"EFireEventsAtPosition");
  }
  return;
}



// FUNCTION 14332cd08 FUN_14332cd08 body=55 status=ok
// SIG undefined FUN_14332cd08(void)

void FUN_14332cd08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab6600 == 0) {
    uVar1 = FUN_140d2a6db();
    DAT_14cab6600 = FUN_14171c317(FUN_14634d3db,uVar1,L"EComponentMaterialType");
  }
  return;
}



// FUNCTION 14332cd50 FUN_14332cd50 body=8 status=ok
// SIG undefined FUN_14332cd50(void)

longlong FUN_14332cd50(longlong param_1)

{
  return param_1 + 0x128;
}



// FUNCTION 14332cd60 FUN_14332cd60 body=8 status=ok
// SIG undefined FUN_14332cd60(void)

bool FUN_14332cd60(longlong param_1)

{
  return *(int *)(param_1 + 0x10) == 0;
}



// FUNCTION 14332cd70 FUN_14332cd70 body=869 status=ok
// SIG undefined FUN_14332cd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332cd70(undefined1 (*param_1) [16],undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  if (0 < (longlong)(int)param_3[1]) {
    fVar9 = 0.0;
    lVar8 = 0;
    do {
      fVar9 = fVar9 + *(float *)(*param_3 + lVar8 * 4);
      lVar8 = lVar8 + 1;
    } while ((int)param_3[1] != lVar8);
    if (1e-08 < ABS(fVar9 + -1.0)) {
      lVar8 = 0;
      do {
        *(float *)(*param_3 + lVar8 * 4) = *(float *)(*param_3 + lVar8 * 4) / fVar9;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)param_3[1]);
    }
  }
  uVar1 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar1 == 1) {
    param_2 = (undefined8 *)*param_2;
  }
  else {
    if (uVar1 != 0) {
      pdVar2 = (double *)*param_2;
      dVar3 = (double)*(float *)*param_3;
      dVar13 = pdVar2[3] * dVar3;
      dVar11 = pdVar2[2] * dVar3;
      dVar14 = pdVar2[1] * dVar3;
      dVar3 = dVar3 * *pdVar2;
      if ((int)uVar1 < 1) {
        dVar15 = 0.0;
        dVar5 = 0.0;
        dVar17 = 0.0;
        dVar16 = 0.0;
        dVar21 = 0.0;
        dVar4 = 0.0;
      }
      else {
        pdVar6 = pdVar2 + 10;
        uVar7 = 0;
        dVar4 = 0.0;
        dVar21 = 0.0;
        dVar16 = 0.0;
        dVar17 = 0.0;
        dVar5 = 0.0;
        dVar15 = 0.0;
        do {
          fVar9 = ((float *)*param_3)[uVar7];
          if (uVar7 != 0) {
            dVar10 = (double)(&DAT_149931160)
                             [0.0 <= pdVar2[3] * pdVar6[-7] +
                                     pdVar2[2] * pdVar6[-8] +
                                     *pdVar2 * pdVar6[-10] + pdVar2[1] * pdVar6[-9]];
            dVar3 = dVar3 + pdVar6[-10] * dVar10 * (double)fVar9;
            dVar14 = dVar14 + pdVar6[-9] * dVar10 * (double)fVar9;
            dVar11 = dVar11 + pdVar6[-8] * dVar10 * (double)fVar9;
            dVar13 = dVar13 + pdVar6[-7] * dVar10 * (double)fVar9;
          }
          dVar10 = (double)fVar9;
          dVar4 = dVar4 + pdVar6[-4] * dVar10;
          dVar21 = dVar21 + pdVar6[-5] * dVar10;
          dVar16 = dVar16 + pdVar6[-6] * dVar10;
          dVar17 = dVar17 + *pdVar6 * dVar10;
          dVar5 = dVar5 + pdVar6[-1] * dVar10;
          dVar15 = dVar15 + dVar10 * pdVar6[-2];
          uVar7 = uVar7 + 1;
          pdVar6 = pdVar6 + 0xc;
        } while (uVar1 != uVar7);
      }
      dVar10 = dVar11 * dVar11 + dVar3 * dVar3;
      dVar20 = dVar13 * dVar13 + dVar14 * dVar14;
      auVar18._0_8_ = dVar10 + dVar20;
      auVar18._8_8_ = dVar10 + dVar20;
      auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
      auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
      auVar19 = sqrtpd(auVar18,auVar18);
      auVar22 = divpd(_DAT_149934d80,auVar19);
      auVar23._0_8_ = auVar22._0_8_ * dVar11;
      auVar23._8_8_ = auVar22._8_8_ * dVar13;
      uVar7 = (ulonglong)(dVar14 * auVar22._8_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
      auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar12);
      auVar19._8_4_ = (int)uVar7;
      auVar19._0_8_ =
           (ulonglong)(dVar3 * auVar22._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
      auVar19._12_4_ = (int)(uVar7 >> 0x20);
      *param_1 = auVar19;
      param_1[1] = auVar12;
      *(double *)param_1[2] = dVar16;
      *(double *)(param_1[2] + 8) = dVar21;
      *(double *)param_1[3] = dVar4;
      *(undefined8 *)(param_1[3] + 8) = 0;
      *(double *)param_1[4] = dVar15;
      *(double *)(param_1[4] + 8) = dVar5;
      *(double *)param_1[5] = dVar17;
      *(undefined8 *)(param_1[5] + 8) = 0;
      return;
    }
    param_2 = &DAT_14c846480;
  }
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined8 *)*param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
  }
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return;
}



// FUNCTION 14332d11a FUN_14332d11a body=1396 status=ok
// SIG undefined FUN_14332d11a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332d11a(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cab63b4 = 0xffffffff;
  _DAT_14cab63b8 = 0;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e1460,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e1910,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e1d60,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e21b0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e2700,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e2bd0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e3090,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e3530,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e3960,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e3dc0,1,0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cab64b0);
  if (cVar1 == '\0') {
    _DAT_14cab64b0 = 0;
    uRam000000014cab64b8 = 0;
  }
  if (local_40 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e4340,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e47d0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e4c70,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e5080,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e54d0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e58f0,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14a4e5fa0;
  local_58 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e5fc0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e63d0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e67e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e6bf0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e7090,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e7580,1,0);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14a4e8190;
  local_58 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e81e0,2,&PTR_FUN_14a4e81b0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e8670,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e8b60,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e9060,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e94d0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4e9a10,1,0);
  local_40 = &DAT_14a19662d;
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ea3c0,1,&PTR_FUN_14a4ea390);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ea7d0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4eabe0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4eaff0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4eb880,2,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ebcc0,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332d690 FUN_14332d690 body=55 status=ok
// SIG undefined FUN_14332d690(void)

void FUN_14332d690(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab67d8 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab67d8 = FUN_14171c317(FUN_1417a9504,uVar1,L"ESlateVisibility");
  }
  return;
}



// FUNCTION 14332d6c7 FUN_14332d6c7 body=55 status=ok
// SIG undefined FUN_14332d6c7(void)

void FUN_14332d6c7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab67f0 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab67f0 = FUN_14171c317(FUN_14634e29c,uVar1,L"ESlateAccessibleBehavior");
  }
  return;
}



// FUNCTION 14332d6fe FUN_14332d6fe body=55 status=ok
// SIG undefined FUN_14332d6fe(void)

void FUN_14332d6fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab6828 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab6828 = FUN_14171c317(FUN_14634e32e,uVar1,L"ESlateSizeRule");
  }
  return;
}



// FUNCTION 14332d735 FUN_14332d735 body=55 status=ok
// SIG undefined FUN_14332d735(void)

void FUN_14332d735(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab6870 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab6870 = FUN_14171c317(FUN_14634e45e,uVar1,L"EVirtualKeyboardType");
  }
  return;
}



// FUNCTION 14332d76c FUN_14332d76c body=44 status=ok
// SIG undefined FUN_14332d76c(void)

void FUN_14332d76c(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14cab6a88;
  if (DAT_14cab6a88 == 0) {
    return;
  }
  FUN_1476c5348(DAT_14cab6a88);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14332d805 FUN_14332d805 body=69 status=ok
// SIG undefined FUN_14332d805(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332d805(void)

{
  _DAT_14cab6b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014332d847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab6b08,1);
  return;
}



// FUNCTION 14332d84a FUN_14332d84a body=69 status=ok
// SIG undefined FUN_14332d84a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332d84a(void)

{
  _DAT_14cab6b18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014332d88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab6b20,1);
  return;
}



// FUNCTION 14332d9e0 FUN_14332d9e0 body=2036 status=ok
// SIG undefined FUN_14332d9e0(void)

void FUN_14332d9e0(longlong param_1,double param_2,double param_3,int param_4,int param_5,
                  uint param_6,char param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  uint uVar15;
  bool bVar16;
  double dVar17;
  undefined1 auVar19 [12];
  undefined1 auVar18 [16];
  float fVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 *local_128;
  int local_120;
  char local_118;
  char local_117;
  int local_114;
  float local_110;
  undefined1 local_10c;
  int local_108;
  float fStack_104;
  undefined8 local_100;
  uint local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined8 local_a4;
  undefined1 local_9c;
  undefined1 local_98 [24];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = param_1 + 0x220;
  FUN_140b556ce(lVar8,*(undefined8 *)(param_1 + 0x210),param_1 + 0x28,0);
  if (param_7 != '\0') {
    FUN_14633e310(lVar8);
  }
  *(byte *)(param_1 + 0x2b5) = *(byte *)(param_1 + 0x2b5) | 2;
  *(char *)(param_1 + 0x2a4) = param_7;
  *(uint *)(param_1 + 0x2a0) = param_6 & 0x7fffffff;
  *(int *)(param_1 + 0x2a8) = param_5;
  dVar17 = ((double)(int)*(undefined8 *)(param_1 + 0x250) * param_2) /
           (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x250) >> 0x20);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = dVar17;
  auVar23 = roundpd(auVar23,auVar23,1);
  dVar22 = auVar23._0_8_;
  dVar17 = dVar17 - dVar22;
  if (2147483647.0 <= dVar22) {
    dVar22 = 2147483647.0;
  }
  if (dVar22 <= -2147483648.0) {
    dVar22 = -2147483648.0;
  }
  iVar5 = (int)dVar17;
  uVar15 = *(int *)(param_1 + 0x26c) - 1;
  fVar20 = (float)dVar17 - (float)iVar5;
  if (param_5 == 1) {
    fVar21 = fVar20;
    if (0.99999994 <= fVar20) {
      fVar21 = 0.99999994;
    }
    fVar20 = (float)(~-(uint)(0.0 < fVar20) & (uint)fVar20 | (uint)fVar21 & -(uint)(0.0 < fVar20)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar20) {
      fVar20 = 0.99999994;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    fVar20 = 0.99999994 - fVar20;
    auVar23 = roundps(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20),1);
    fVar20 = fVar20 - auVar23._0_4_;
    iVar5 = (uVar15 - (iVar5 + (int)dVar22)) + (int)auVar23._0_4_;
  }
  else {
    iVar5 = iVar5 + (int)dVar22;
    fVar21 = fVar20;
    if (0.99999994 <= fVar20) {
      fVar21 = 0.99999994;
    }
    fVar20 = (float)(~-(uint)(0.0 < fVar20) & (uint)fVar20 | (uint)fVar21 & -(uint)(0.0 < fVar20));
  }
  fVar20 = fVar20 + 0.5 + -0.5;
  if (0.99999994 <= fVar20) {
    fVar20 = 0.99999994;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  *(int *)(param_1 + 0x25c) = iVar5;
  *(float *)(param_1 + 0x260) = fVar20;
  uVar13 = (ulonglong)uVar15 | 0x3f7fffff00000000;
  uVar7 = *(ulonglong *)(param_1 + 0x25c);
  uVar9 = uVar7;
  if ((int)uVar15 <= (int)(uint)uVar7) {
    if (0.99999994 <= (float)(uVar7 >> 0x20)) {
      uVar9 = uVar13;
    }
    if (uVar15 != (uint)uVar7) {
      uVar9 = uVar13;
    }
    uVar7 = uVar9 & 0xffffffff;
  }
  if ((int)uVar7 < 1) {
    if ((float)(uVar9 >> 0x20) <= 0.0) {
      uVar9 = 0;
    }
    if ((int)uVar7 != 0) {
      uVar9 = 0;
    }
  }
  *(ulonglong *)(param_1 + 0x25c) = uVar9;
  lVar8 = FUN_14179e7c6(lVar8);
  if (lVar8 == 0) {
LAB_14332dcf1:
    *(undefined8 *)(param_1 + 0x264) = *(undefined8 *)(param_1 + 0x25c);
  }
  else {
    FUN_1432d92ec(lVar8 + 0x78,&local_118);
    if (local_117 == '\0' || local_118 != '\x01') goto LAB_14332dcf1;
    FUN_14087ad3e(lVar8 + 0x78,&local_118);
    local_128 = (undefined8 *)CONCAT71(local_128._1_7_,0xf);
    FUN_1405bad34(&local_118,local_98,*(undefined8 *)(param_1 + 0x25c));
    puVar14 = (ulonglong *)(param_1 + 0x25c);
    if (local_98[8] != '\0') {
      puVar14 = (ulonglong *)local_98;
    }
    *(ulonglong *)(param_1 + 0x264) = *puVar14;
    if (local_98[8] == '\x01') {
      local_98[8] = 0;
    }
    if (CONCAT44(fStack_104,local_108) != 0) {
      FUN_1400020a8();
    }
  }
  dVar17 = ((double)(int)*(undefined8 *)(param_1 + 0x250) * param_3) /
           (double)(int)((ulonglong)*(undefined8 *)(param_1 + 0x250) >> 0x20);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar17;
  auVar23 = roundpd(auVar24,auVar24,1);
  dVar22 = auVar23._0_8_;
  dVar17 = dVar17 - dVar22;
  if (2147483647.0 <= dVar22) {
    dVar22 = 2147483647.0;
  }
  if (dVar22 <= -2147483648.0) {
    dVar22 = -2147483648.0;
  }
  iVar5 = (int)dVar17;
  fVar21 = (float)dVar17 - (float)iVar5;
  uVar6 = (int)dVar22 + iVar5;
  fVar20 = fVar21;
  if (0.99999994 <= fVar21) {
    fVar20 = 0.99999994;
  }
  fVar20 = (float)(~-(uint)(0.0 < fVar21) & (uint)fVar21 | (uint)fVar20 & -(uint)(0.0 < fVar21)) +
           0.5 + -0.5;
  if (0.99999994 <= fVar20) {
    fVar20 = 0.99999994;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  uVar7 = uVar13;
  if (fVar20 < 0.99999994) {
    uVar7 = CONCAT44(fVar20,uVar6);
  }
  if (uVar6 != uVar15) {
    uVar7 = uVar13;
  }
  if ((int)uVar6 < (int)uVar15) {
    uVar7 = CONCAT44(fVar20,uVar6);
  }
  uVar9 = uVar7;
  if ((int)uVar7 < 1) {
    if ((float)(uVar7 >> 0x20) <= 0.0) {
      uVar9 = 0;
    }
    if ((int)uVar7 != 0) {
      uVar9 = 0;
    }
  }
  *(ulonglong *)(param_1 + 0x270) = uVar9;
  *(int *)(param_1 + 0x298) = param_4 << (*(int *)(param_1 + 0x2a8) == 2);
  *(undefined4 *)(param_1 + 0x29c) = 0;
  *(bool *)(param_1 + 0x2b4) = param_5 != 1;
  *(undefined4 *)(param_1 + 0x27c) = 1;
  if (*(longlong *)(param_1 + 0x228) == 0) {
    local_98._0_16_ = ZEXT416(0);
    goto LAB_14332e0c6;
  }
  FUN_140232b8e(*(longlong *)(param_1 + 0x228),local_98);
  uVar4 = local_98._0_8_;
  if (local_98._0_8_ == 0) goto LAB_14332e0c6;
  local_a8 = *(undefined4 *)(param_1 + 0x27c);
  local_100 = *(undefined8 *)(param_1 + 0x250);
  fVar20 = *(float *)(param_1 + 0x260) + 0.0;
  auVar23 = roundss(ZEXT416(0),ZEXT416((uint)fVar20),9);
  local_114 = *(int *)(param_1 + 600) + *(int *)(param_1 + 0x25c) +
              ((int)ROUND(fVar20 + fVar20 + -0.5) >> 1);
  local_110 = (fVar20 - auVar23._0_4_) + 0.5 + -0.5;
  auVar19 = (undefined1  [12])0x0;
  if (0.99999994 <= local_110) {
    auVar19 = ZEXT812(0);
    local_110 = 0.99999994;
  }
  if (local_110 <= 0.0) {
    local_110 = 0.0;
  }
  local_118 = '\x01';
  local_10c = 1;
  auVar18._0_4_ = local_110 - local_110;
  auVar18._4_12_ = auVar19;
  local_e0 = ZEXT816(0);
  auVar23 = blendps(auVar18,local_e0,0xe);
  auVar23 = roundps(auVar23,auVar23,1);
  local_f8 = (uint)(int)auVar23._0_4_ >> 0x1f;
  local_f4 = 0x3f80000080000000;
  uStack_ec = 0;
  local_c0 = 0;
  local_a4 = 0x80000000;
  local_9c = 0;
  local_128 = (undefined8 *)0x0;
  local_120 = 0;
  local_108 = local_114;
  fStack_104 = local_110;
  local_d0 = local_e0;
  local_b8 = local_e0;
  FUN_1446efa72(&local_128,0,3,0x10);
  puVar3 = local_128;
  local_120 = 3;
  *local_128 = &PTR_LAB_149e020b0;
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
  local_128[2] = lVar10;
  *local_128 = &PTR_FUN_14a508990;
  local_128[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar15 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_128 + 3) = uVar15;
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar16 = iVar5 == 0;
      if (bVar16) {
        *(int *)(lVar8 + 0x10) = iVar11;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar5 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar5;
  puVar3[4] = param_1;
  if (*(longlong *)(param_1 + 0x228) == 0) {
    uVar12 = 0xffff;
  }
  else {
    uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x228) + 0x30);
  }
  local_138 = 1;
  FUN_14179d4b8(uVar4,&local_118,uVar12,&local_128);
  if (local_120 == 0) {
LAB_14332e050:
    if (local_128 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_128 != (undefined8 *)0x0) {
    (**(code **)*local_128)(local_128,0);
    FUN_1446efa72(&local_128,0,0,0x10);
    local_120 = 0;
    goto LAB_14332e050;
  }
  if ((local_98._0_8_ == *(ulonglong *)(param_1 + 0x240)) || (DAT_14c761020 == '\0')) {
    if (*(int *)(local_98._0_8_ + 0x80) == 0) {
      *(undefined4 *)(local_98._0_8_ + 0x80) = DAT_14cab2be4;
    }
    FUN_14029f2bc();
  }
  FUN_144b1f39c(local_d0);
  FUN_1447bda9c(local_e0._0_8_,local_e0._8_4_);
  if (local_e0._0_8_ != 0) {
    FUN_1400020a8();
  }
LAB_14332e0c6:
  uVar4 = local_98._8_8_;
  if ((longlong *)local_98._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_98._8_8_ + 8);
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (*(code *)**(undefined8 **)local_98._8_8_)(local_98._8_8_);
      LOCK();
      piVar2 = (int *)(uVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*(longlong *)uVar4 + 0x10))(uVar4);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14332e1d5 FUN_14332e1d5 body=69 status=ok
// SIG undefined FUN_14332e1d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332e1d5(void)

{
  _DAT_14cab6b58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014332e217. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab6b60,1);
  return;
}



// FUNCTION 14332e21a FUN_14332e21a body=69 status=ok
// SIG undefined FUN_14332e21a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332e21a(void)

{
  _DAT_14cab6b70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014332e25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab6b78,1);
  return;
}



// FUNCTION 14332e25f FUN_14332e25f body=69 status=ok
// SIG undefined FUN_14332e25f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332e25f(void)

{
  _DAT_14cab6b88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014332e2a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab6b90,1);
  return;
}



// FUNCTION 14332e2a4 FUN_14332e2a4 body=326 status=ok
// SIG undefined FUN_14332e2a4(void)

void FUN_14332e2a4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  longlong *plVar6;
  bool bVar7;
  
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar7 = DAT_14c75ec34 != 0xffffffff;
    DVar4 = dwTlsIndex;
    if (bVar7) {
      DVar5 = DAT_14c75ec34;
      DVar4 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar4;
    UNLOCK();
    if (bVar7) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if ((((*(char *)((longlong)lpTlsValue + 0x20) == '\0') && (DAT_14c761024 != 0)) &&
      (((lVar2 = *(longlong *)(param_1 + 0x80), *(int *)(lVar2 + 0x20) != 0 ||
        (*(int *)(lVar2 + 0x40) != 0)) ||
       ((((((*(int *)(lVar2 + 0x14) != 0 && (uVar1 = *(uint *)(lVar2 + 0x10), -1 < (int)uVar1)) &&
           ((int)uVar1 < DAT_14c9647dc)) &&
          ((plVar6 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(lVar2 + 0x14))))) &&
         ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
        ((lVar3 = *plVar6, lVar3 != 0 &&
         ((*(ulonglong *)(lVar3 + 0x6e0) == 0 ||
          (*(ulonglong *)(lVar3 + 0x6e0) < *(ulonglong *)(lVar3 + 0x278))))))))))) &&
     (*(int *)(lVar2 + 0x80) == 0)) {
    *(undefined4 *)(lVar2 + 0x80) = DAT_14cab2be4;
    FUN_14029f2bc(lVar2,0);
    FUN_1476c83d6(param_1);
    return;
  }
  return;
}



// FUNCTION 14332e3ea FUN_14332e3ea body=426 status=ok
// SIG undefined FUN_14332e3ea(void)

void FUN_14332e3ea(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_5c;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    lVar5 = FUN_1405e2bf2();
    if (((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) && (0 < *(int *)(param_1 + 0x30)))
    {
      lVar11 = 0;
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x28);
        plVar6 = (longlong *)
                 FUN_140ae7da1(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar2 + 4 + lVar11),3
                              );
        if (plVar6 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar6 + 0x220))(plVar6,param_2,0);
          if (lVar7 != 0) {
            lVar8 = FUN_140fae106();
            if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
              uVar1 = *(uint *)(param_2 + 0xc);
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar8 = 0;
              }
              uVar9 = (ulonglong)*(uint *)(lVar8 + 0x10);
              if (*(uint *)(lVar8 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                uVar10 = DAT_14c964868 + 1;
                bVar12 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar12) {
                  local_5c = uVar10;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar10);
                  uVar10 = local_5c;
                }
                LOCK();
                uVar4 = *(uint *)(lVar8 + 0x10);
                bVar12 = uVar4 == 0;
                if (bVar12) {
                  *(uint *)(lVar8 + 0x10) = uVar10;
                  uVar4 = 0;
                }
                UNLOCK();
                uVar9 = (ulonglong)uVar4;
                if (bVar12) {
                  uVar9 = (ulonglong)uVar10;
                }
              }
              local_50 = *(undefined8 *)(lVar2 + 0xc + lVar11);
              local_68 = *(undefined8 *)(lVar2 + 0x14 + lVar11);
              local_58 = uVar9 << 0x20 | (ulonglong)uVar1;
              FUN_147792d62(param_2,lVar7,&local_58,*(undefined1 *)(lVar2 + lVar11));
            }
          }
        }
        lVar5 = lVar5 + 1;
        lVar11 = lVar11 + 0x1c;
      } while (lVar5 < *(int *)(param_1 + 0x30));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14332e596 FUN_14332e596 body=2514 status=ok
// SIG undefined FUN_14332e596(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14332e596(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  uint *puVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong alStack_e0 [3];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined4 local_a0;
  uint uStack_9c;
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar19 = *(uint *)(param_1 + 0xc);
  if ((int)uVar19 < DAT_14c9647dc) {
    lVar20 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
  }
  else {
    lVar20 = 0;
  }
  FUN_14482b126(lVar20,0x40000000);
  if ((((param_4 != '\0') && ((longlong *)*param_3 != (longlong *)0x0)) &&
      (iVar7 = (**(code **)(*(longlong *)*param_3 + 0x58))(), iVar7 - 200U < 7)) &&
     ((lVar20 = (**(code **)(*(longlong *)*param_3 + 0x40))(), lVar20 != 0 &&
      (lVar20 = (**(code **)(*(longlong *)*param_3 + 0x48))(), 0 < *(int *)(lVar20 + 8))))) {
    local_a8 = 0x70;
    uStack_a7 = 0x8f;
    uStack_a6 = 0x1e;
    uStack_a5 = 0x4a;
    uStack_a4 = 1;
    local_a0 = 0xc;
    uStack_9c = uStack_9c & 0xffffff00;
    uVar8 = FUN_14001a6c0(&local_a8,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar12 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar8,&local_a8,1);
    (**(code **)(*plVar12 + 0x58))(plVar12,alStack_e0 + 1,0,0);
    (**(code **)(*plVar12 + 0x58))(plVar12,local_c8,1,0);
    (**(code **)(*plVar12 + 0x58))(plVar12,local_b8,3,0);
    lVar20 = 8;
LAB_14332e70a:
    plVar12 = *(longlong **)((longlong)alStack_e0 + lVar20);
    plVar3 = *(longlong **)((longlong)alStack_e0 + lVar20 + 8U);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (plVar12 == (longlong *)0x0) goto LAB_14332e7ff;
    lVar13 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    iVar7 = *(int *)(lVar13 + 8);
    puVar14 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x48))();
    cVar6 = (**(code **)*plVar12)(plVar12,*puVar14,(longlong)iVar7);
    if (((cVar6 == '\0') || (lVar13 = (**(code **)(*plVar12 + 0x40))(plVar12), 0x7fffffff < lVar13))
       || (lVar13 = (**(code **)(*plVar12 + 0x48))(plVar12), 0x7fffffff < lVar13))
    goto LAB_14332e7ff;
    local_f8 = 0;
    lStack_f0 = 0;
    local_e8 = 0;
    cVar6 = (**(code **)(*plVar12 + 0x38))(plVar12,1,8,&local_f8);
    if (cVar6 != '\0') {
      local_a8 = 2;
      uStack_a7 = 0;
      uStack_a6 = 1;
      uStack_a4 = 3;
      local_a0 = 0;
      uVar8 = (**(code **)(*plVar12 + 0x48))(plVar12);
      uVar9 = (**(code **)(*plVar12 + 0x40))(plVar12);
      plVar12 = (longlong *)FUN_143734b16(uVar9,uVar8,&local_a8);
      if (plVar12 != (longlong *)0x0) {
        *(byte *)((longlong)plVar12 + 0xfe) = *(byte *)((longlong)plVar12 + 0xfe) | 1;
        (**(code **)(*plVar12 + 0x318))(plVar12);
        lVar15 = FUN_1447b4020(plVar12);
        lVar22 = local_e8;
        lVar13 = lStack_f0;
        lVar20 = local_f8;
        if (lVar15 == 0) goto LAB_14332eadf;
        local_f8 = 0;
        lStack_f0 = 0;
        local_e8 = 0;
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar7 = *(int *)(lVar4 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar7 != 2) {
            local_100 = lVar22;
            local_108 = lVar13;
            local_110 = lVar20;
            if (iVar7 == 1) {
              DVar10 = FUN_140ad26c0();
              DVar11 = GetCurrentThreadId();
              bVar26 = DVar10 == DVar11;
            }
            else {
              bVar26 = iVar7 == 0x10;
            }
            lVar22 = local_100;
            lVar13 = local_108;
            lVar20 = local_110;
            if (!bVar26) goto LAB_14332e9ed;
          }
LAB_14332e981:
          local_a8 = (undefined1)lVar20;
          uStack_a7 = (undefined1)((ulonglong)lVar20 >> 8);
          uStack_a6 = (undefined1)((ulonglong)lVar20 >> 0x10);
          uStack_a5 = (undefined1)((ulonglong)lVar20 >> 0x18);
          uStack_a4 = (undefined4)((ulonglong)lVar20 >> 0x20);
          local_a0 = (undefined4)lVar13;
          uStack_9c = (uint)((ulonglong)lVar13 >> 0x20);
          FUN_1437349a4(lVar15);
          if (lVar20 != 0) {
            FUN_1400020a8(lVar20);
          }
          goto LAB_14332eadf;
        }
        if (iVar7 == 0x10) goto LAB_14332e981;
LAB_14332e9ed:
        local_108 = lVar13;
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
          goto LAB_14332e981;
          if (iVar7 == 1) {
            DVar10 = FUN_140ad26c0();
            local_110 = lVar20;
            DVar11 = GetCurrentThreadId();
            lVar13 = local_108;
            lVar20 = local_110;
            if (DVar10 == DVar11) goto LAB_14332e981;
          }
        }
        local_100 = lVar22;
        if (DAT_14ca9a43c == 0) {
          puVar14 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar17 = (uint *)*puVar14;
          local_110 = lVar20;
          if (puVar17 != (uint *)0x0) goto LAB_14332ebd9;
          while( true ) {
            uVar19 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar19 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar19 | 1;
              __tlregdtor(&LAB_14332ff59);
            }
            lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar16 = *(undefined4 **)(lVar20 + 0x310);
            *(undefined8 *)(lVar20 + 0x310) = 0;
            if (puVar16 == (undefined4 *)0x0) {
              puVar16 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar16 = 0xffffffff;
            *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar14 = puVar16;
            FUN_140217a48(puVar14);
            puVar17 = (uint *)*puVar14;
LAB_14332ebd9:
            puVar25 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar23 = (uint *)(puVar25 + 0x19);
            uVar19 = puVar17[0x12];
            if (puVar23 <= puVar17 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
              LOCK();
              uVar2 = *puVar17;
              *puVar17 = *puVar17 + uVar19 + 1;
              UNLOCK();
              if ((uVar2 ^ uVar19) != 0xffffffff) break;
              puVar17 = (uint *)*puVar14;
              *puVar17 = 0xffffffff;
              *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
              puVar17[0x12] = 0;
              *puVar14 = puVar17;
              puVar25 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
              puVar23 = (uint *)(puVar25 + 0x19);
              uVar19 = 0;
              if (puVar23 <= puVar17 + 0x4000) {
                uVar19 = 1;
                goto LAB_14332ec5d;
              }
            }
          }
          uVar19 = uVar19 + 1;
LAB_14332ec5d:
          *(uint **)(puVar17 + 0x10) = puVar23;
          puVar17[0x12] = uVar19;
          iVar7 = 0;
          FUN_1447247dc(puVar25,0);
          *puVar25 = &PTR_FUN_14a509010;
          puVar25[0x15] = lVar15;
          puVar25[0x16] = local_110;
          puVar25[0x17] = local_108;
          puVar25[0x18] = local_100;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar19 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
              uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
              iVar7 = 0;
            }
            else {
              uVar24 = 2;
            }
          }
          else {
            iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                    *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar24 = 5;
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
          lVar20 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar20 == 0) {
            uVar5 = 1;
            if ((char)uVar24 != '\x06') {
              uVar5 = uVar24;
            }
            uVar24 = uVar5;
            uVar18 = 0;
          }
          else {
            if ((char)uVar24 == '\x06') {
              uVar24 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
            }
            uVar18 = *(undefined8 *)(lVar20 + 0x30);
          }
          puVar25[0xf] = uVar18;
          puVar25[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar25 + 0x1c) = iVar7;
          if (puVar25 == (undefined8 *)0x0) {
            local_a8 = 1;
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
            UNLOCK();
            local_a8 = 1;
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
          local_a8 = 0;
          uStack_a7 = 0;
          uStack_a6 = 0;
          uStack_a5 = 0;
          uStack_a4 = 0;
          local_98 = (longlong *)FUN_14001cc68(0x28,8);
          *local_98 = (longlong)&PTR_LAB_14a508fc0;
          local_98[1] = lVar15;
          local_98[2] = lVar20;
          local_98[3] = local_108;
          local_98[4] = local_100;
          if (local_98 + 1 != (longlong *)0x0) {
            local_a8 = 0xe;
            uStack_a7 = 0x22;
            uStack_a6 = 0x33;
            uStack_a5 = 0x43;
            uStack_a4 = 1;
          }
          local_118 = &local_a8;
          FUN_14005a792(&DAT_14ca9a440,L"FWriteRawDataToTexture",&DAT_14cab766c);
          if (CONCAT44(uStack_a4,
                       CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8)))) != 0) {
            plVar21 = local_98;
            if (local_98 == (longlong *)0x0) {
              plVar21 = local_88;
            }
            (**(code **)(*plVar21 + 0x10))();
          }
        }
LAB_14332eadf:
        local_a8 = SUB81(plVar12,0);
        uStack_a7 = (undefined1)((ulonglong)plVar12 >> 8);
        uStack_a6 = (undefined1)((ulonglong)plVar12 >> 0x10);
        uStack_a5 = (undefined1)((ulonglong)plVar12 >> 0x18);
        uStack_a4 = (undefined4)((ulonglong)plVar12 >> 0x20);
        FUN_1447cd2ec(param_1 + 0x30);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar3 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
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
        bVar26 = false;
        goto LAB_14332e834;
      }
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
LAB_14332e7ff:
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar3 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    lVar20 = lVar20 + 0x10;
    if (lVar20 == 0x38) goto code_r0x00014332e831;
    goto LAB_14332e70a;
  }
LAB_14332e86e:
  local_a8 = 0;
  uStack_a7 = 0;
  uStack_a6 = 0;
  uStack_a5 = 0;
  uStack_a4 = 0;
  FUN_1447cd2ec(param_1 + 0x40);
LAB_14332e889:
  plVar12 = *(longlong **)(param_2 + 8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar12 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  plVar12 = (longlong *)param_3[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar12 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014332e831:
  bVar26 = true;
LAB_14332e834:
  lVar20 = 0x30;
  do {
    plVar12 = *(longlong **)((longlong)alStack_e0 + lVar20);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar12 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    lVar20 = lVar20 + -0x10;
  } while (lVar20 != 0);
  if (!bVar26) goto LAB_14332e889;
  goto LAB_14332e86e;
}



// FUNCTION 14332ef69 FUN_14332ef69 body=41 status=ok
// SIG undefined FUN_14332ef69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332ef69(void)

{
  _DAT_14cab7778 = 0;
  if (DAT_14cab7770 != 0) {
    FUN_1400020a8();
  }
  FUN_1461761a6();
  return;
}



// FUNCTION 14332ef92 FUN_14332ef92 body=241 status=ok
// SIG undefined FUN_14332ef92(void)

void FUN_14332ef92(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 *local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140648376(param_1 + 0x1c0);
  lVar2 = *(longlong *)(param_1 + 0x2f8);
  if (lVar2 != 0) {
    local_30 = 1;
    local_28 = (undefined8 *)0x0;
    uStack_20 = 0;
    local_38 = param_1 + 0x1c0;
    FUN_140a5acbc(lVar2 + 0x268,lVar2,&local_38);
    if ((int)uStack_20 != 0) {
      if (local_28 == (undefined8 *)0x0) goto LAB_14332efc5;
      if (*(code **)*local_28 == FUN_145715146) {
        *local_28 = &PTR_FUN_14b478da0;
        plVar3 = (longlong *)local_28[4];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
      }
      else {
        (**(code **)*local_28)(local_28,0);
      }
      FUN_1446efa72(&local_28,0,0,0x10);
      uStack_20 = uStack_20 & 0xffffffff00000000;
    }
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14332efc5:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332f084 FUN_14332f084 body=63 status=ok
// SIG undefined FUN_14332f084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14332f084(void)

{
  _DAT_14cab7560 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab7569 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab7560);
    DAT_14cab7569 = '\0';
  }
  return;
}



// FUNCTION 14332f0c4 FUN_14332f0c4 body=45 status=ok
// SIG undefined FUN_14332f0c4(void)

longlong FUN_14332f0c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14332f0f2 FUN_14332f0f2 body=45 status=ok
// SIG undefined FUN_14332f0f2(void)

longlong FUN_14332f0f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14332f200 FUN_14332f200 body=29 status=ok
// SIG undefined FUN_14332f200(void)

undefined8 FUN_14332f200(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14332f21e FUN_14332f21e body=554 status=ok
// SIG undefined FUN_14332f21e(void)

void FUN_14332f21e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  int local_98;
  int local_94;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14332f274;
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14332f274:
  local_94 = *(int *)(param_3 + 0x14);
  if (local_94 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar10 = *(longlong **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 10)) goto LAB_14332f2bb;
      plVar10 = plVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14332f2bb:
  local_88 = *plVar8;
  local_98 = *(int *)(lVar4 + 0x14);
  if (local_98 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  local_90 = *plVar10;
  lVar4 = *param_2;
  lVar6 = FUN_14009d2a0();
  FUN_1462513a0(lVar4,&local_70,*(undefined2 *)(lVar6 + 0x4a));
  if ((local_60 != 0) && (0 < *(int *)((longlong)param_2 + 0xc))) {
    lVar4 = 0;
    do {
      lVar9 = (int)param_2[1] + lVar4;
      lVar6 = *(longlong *)(local_60 + lVar9 * 8);
      if (lVar6 != 0) {
        iVar2 = *(int *)(*param_4 + lVar4 * 4);
        lVar5 = FUN_140de7a58();
        lVar3 = *(longlong *)(lVar6 + 0x10);
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30)) {
          lVar7 = (longlong)iVar2 * 0x20;
          lVar5 = *(longlong *)(local_88 + 0x10 + lVar7);
          local_58 = local_88 + lVar7;
          if (lVar5 != 0) {
            local_58 = lVar5;
          }
          local_50 = *(undefined4 *)(local_88 + 0x18 + lVar7);
          local_a8 = 0;
          FUN_1476ca902(&local_80,lVar6,lVar3,&local_58);
          puVar1 = (undefined4 *)(local_90 + lVar9 * 0x10);
          *puVar1 = local_80;
          puVar1[1] = uStack_7c;
          puVar1[2] = uStack_78;
          puVar1[3] = uStack_74;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)((longlong)param_2 + 0xc));
  }
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 0x18) = *(int *)(local_70 + 0x18) + -1;
    UNLOCK();
    if (local_68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_70 + 8));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (local_98 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (local_94 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14332f4ba FUN_14332f4ba body=1206 status=ok
// SIG undefined FUN_14332f4ba(void)

undefined8 *
FUN_14332f4ba(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [40];
  longlong *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((((*param_1 != -1) && (param_1[4] != -1)) && (param_1[5] != -1)) &&
      ((param_1[6] != -1 && (param_1[7] != -1)))) &&
     (cVar4 = FUN_1475ec19e(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475ed76e(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14332f69a;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_14332ff59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14332f69a:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x34);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x34);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14332f71c;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14332f71c:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a5083a0;
      FUN_1476e3690(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)((longlong)puVar14 + 0xbc);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_140 = (longlong *)CONCAT71(local_140._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_140 = plVar12;
        FUN_1432da764(param_5,&local_140);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14332f511;
    }
    local_140 = (longlong *)*param_6;
    local_138 = 0;
    uStack_130 = 0;
    if (local_140 != (longlong *)0x0) {
      (**(code **)(*local_140 + 8))(local_140,&local_138);
    }
    FUN_1476e31aa(local_128,param_3,param_1);
    FUN_14332fe26(local_128,&local_140);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14332f511:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332f972 FUN_14332f972 body=1202 status=ok
// SIG undefined FUN_14332f972(void)

undefined8 *
FUN_14332f972(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*param_1 != -1) && (cVar4 = FUN_1475ecc38(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1475edefa(param_1,param_4,local_128);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar13 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14332fb41;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_14332ff59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14332fb41:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x36);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x36);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14332fbc3;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14332fbc3:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a5083b0;
      local_158 = param_7;
      FUN_1476e3bde(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)((longlong)puVar14 + 0xbc);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_150 = (longlong *)CONCAT71(local_150._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_150 = plVar12;
        FUN_1432da764(param_5,&local_150);
      }
      puVar13 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      FUN_144717c65(puVar13,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14332f9a7;
    }
    local_150 = (longlong *)*param_6;
    local_138 = *param_7;
    uStack_130 = param_7[1];
    local_148 = 0;
    uStack_140 = 0;
    if (local_150 != (longlong *)0x0) {
      (**(code **)(*local_150 + 8))(local_150,&local_148);
    }
    FUN_1476e3708(local_128,param_3,param_1);
    FUN_1433300f8(local_128,&local_150);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14332f9a7:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332fe26 FUN_14332fe26 body=306 status=ok
// SIG undefined FUN_14332fe26(void)

void FUN_14332fe26(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476e3232(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332ff80 FUN_14332ff80 body=282 status=ok
// SIG undefined FUN_14332ff80(void)

undefined8 * FUN_14332ff80(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14332ff59);
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



// FUNCTION 14333009a FUN_14333009a body=93 status=ok
// SIG undefined FUN_14333009a(void)

void FUN_14333009a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14332fe26(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433300ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433300f8 FUN_1433300f8 body=306 status=ok
// SIG undefined FUN_1433300f8(void)

void FUN_1433300f8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476e3790(param_2,&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333022c FUN_14333022c body=282 status=ok
// SIG undefined FUN_14333022c(void)

undefined8 * FUN_14333022c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14332ff59);
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



// FUNCTION 143330346 FUN_143330346 body=93 status=ok
// SIG undefined FUN_143330346(void)

void FUN_143330346(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433300f8(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143330399. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433303c2 FUN_1433303c2 body=1181 status=ok
// SIG undefined FUN_1433303c2(void)

undefined8 *
FUN_1433303c2(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar4 = FUN_1476e996c();
  if ((cVar4 != '\0') && (cVar4 = FUN_1476e99c2(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_1476ebb5a(param_1,param_4,local_130);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar13 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_143330586;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_14332ff59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_143330586:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x35);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x35);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_143330608;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_143330608:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a508570;
      FUN_1476ec4fe(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)((longlong)puVar14 + 0xc4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_148 = (longlong *)CONCAT71(local_148._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_148 = plVar12;
        FUN_1432da764(param_5,&local_148);
      }
      puVar13 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar13 = local_110;
      }
      FUN_144717c65(puVar13,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143330403;
    }
    local_148 = (longlong *)*param_6;
    local_140 = 0;
    uStack_138 = 0;
    if (local_148 != (longlong *)0x0) {
      (**(code **)(*local_148 + 8))(local_148,&local_140);
    }
    FUN_1476ebacc(local_130,param_3,param_1);
    FUN_143330d16(local_130,&local_148);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143330403:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143330860 FUN_143330860 body=1205 status=ok
// SIG undefined FUN_143330860(void)

undefined8 *
FUN_143330860(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  longlong *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*param_1 != -1) && (cVar4 = FUN_1476eaa32(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_1476ec604(param_1,param_4,local_130);
      puVar13 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar13 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_143330a2f;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_14332ff59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_143330a2f:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x37);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x37);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_143330ab1;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_143330ab1:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar13);
      *puVar14 = &PTR_FUN_14a508580;
      local_168 = param_7;
      FUN_1476ecf54(puVar14 + 0x15,param_3,param_1,param_6);
      uVar9 = *(uint *)((longlong)puVar14 + 0xc4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar15 != '\x06') {
          uVar3 = uVar15;
        }
        uVar15 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 == (undefined8 *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        plVar12 = (longlong *)*param_2;
      }
      local_158 = (longlong *)CONCAT71(local_158._1_7_,1);
      FUN_1447439e4(plVar12);
      if (param_5 != 0) {
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_158 = plVar12;
        FUN_1432da764(param_5,&local_158);
      }
      puVar13 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar13 = local_110;
      }
      FUN_144717c65(puVar13,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143330895;
    }
    local_158 = (longlong *)*param_6;
    local_140 = *param_7;
    uStack_138 = param_7[1];
    local_150 = 0;
    uStack_148 = 0;
    if (local_158 != (longlong *)0x0) {
      (**(code **)(*local_158 + 8))(local_158,&local_150);
    }
    FUN_1476ec576(local_130,param_3,param_1);
    FUN_143330fc2(local_130,&local_158);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143330895:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143330d16 FUN_143330d16 body=306 status=ok
// SIG undefined FUN_143330d16(void)

void FUN_143330d16(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476ebd1c(param_2,&local_70,*(undefined8 *)(param_1 + 0xe0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143330e4a FUN_143330e4a body=282 status=ok
// SIG undefined FUN_143330e4a(void)

undefined8 * FUN_143330e4a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14332ff59);
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



// FUNCTION 143330f64 FUN_143330f64 body=93 status=ok
// SIG undefined FUN_143330f64(void)

void FUN_143330f64(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143330d16(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143330fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143330fc2 FUN_143330fc2 body=306 status=ok
// SIG undefined FUN_143330fc2(void)

void FUN_143330fc2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476ec7de(param_2,&local_70,*(undefined8 *)(param_1 + 0xe0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433310f6 FUN_1433310f6 body=282 status=ok
// SIG undefined FUN_1433310f6(void)

undefined8 * FUN_1433310f6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14332ff59);
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



// FUNCTION 143331210 FUN_143331210 body=93 status=ok
// SIG undefined FUN_143331210(void)

void FUN_143331210(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143330fc2(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143331263. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14333128c FUN_14333128c body=710 status=ok
// SIG undefined FUN_14333128c(void)

void FUN_14333128c(longlong param_1,longlong param_2,short param_3,short param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  short local_ac;
  short local_aa;
  int local_a8;
  int local_a4;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = FUN_14038fb82();
  local_98 = *(ulonglong *)(param_2 + 0x270);
  local_58 = 0;
  uStack_50 = 0;
  local_60 = param_2;
  FUN_1410ab3da(param_1 + 0xe8,&local_70,param_2 + 0x28);
  if ((longlong)local_68 != 0) {
    local_88 = local_70 + local_68;
    local_ac = param_3;
    local_aa = param_4;
    do {
      lVar1 = *local_70;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      if (*(ushort *)(lVar1 + 0xc) != 0) {
        plVar5 = *(longlong **)(lVar1 + 0x28);
        lVar2 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(local_90 + 0xfa))
          goto LAB_143331362;
          plVar5 = plVar5 + 4;
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
      plVar5 = (longlong *)0x0;
LAB_143331362:
      local_a0 = (ulonglong)*(ushort *)(lVar1 + 0xe);
      LOCK();
      *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
      UNLOCK();
      lVar2 = *plVar5;
      if (*(ushort *)(lVar1 + 0xc) != 0) {
        plVar8 = *(longlong **)(lVar1 + 0x28);
        lVar3 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar8 + 0x1e) == param_4) goto LAB_143331399;
          plVar8 = plVar8 + 4;
          lVar3 = lVar3 + -0x20;
        } while (lVar3 != 0);
      }
      plVar8 = (longlong *)0x0;
LAB_143331399:
      local_a4 = *(int *)(lVar1 + 0x14);
      local_80 = local_70;
      if (local_a4 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
      }
      LOCK();
      *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
      UNLOCK();
      lVar3 = *plVar8;
      if (*(ushort *)(lVar1 + 0xc) != 0) {
        plVar7 = *(longlong **)(lVar1 + 0x28);
        lVar4 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar7 + 0x1e) == param_3) goto LAB_1433313de;
          plVar7 = plVar7 + 4;
          lVar4 = lVar4 + -0x20;
        } while (lVar4 != 0);
      }
      plVar7 = (longlong *)0x0;
LAB_1433313de:
      local_a8 = *(int *)(lVar1 + 0x14);
      if (local_a8 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
      }
      LOCK();
      *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
      UNLOCK();
      if (local_a0 != 0) {
        local_78 = *plVar7;
        lVar4 = *(longlong *)(lVar1 + 0x18);
        uVar6 = 0;
        do {
          local_b8 = lVar2;
          FUN_1476f570e(&local_60,*(undefined2 *)(lVar4 + uVar6 * 2),
                        *(undefined8 *)(local_78 + uVar6 * 8),lVar3);
          uVar6 = uVar6 + 1;
          lVar3 = lVar3 + 0x10;
          lVar2 = lVar2 + 0x10;
        } while (local_a0 != uVar6);
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
        UNLOCK();
        if (local_a8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
        }
      }
      plVar7 = local_80;
      param_4 = local_aa;
      param_3 = local_ac;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
        UNLOCK();
        if (local_a4 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 1));
        }
      }
      if (plVar5 != (longlong *)0x0) {
        uVar6 = plVar5[2];
        if ((ulonglong)plVar5[2] < local_98) {
          uVar6 = local_98;
        }
        plVar5[2] = uVar6;
        LOCK();
        *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
        UNLOCK();
      }
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x14) = 1;
      }
      local_70 = plVar7 + 1;
    } while (local_70 != local_88);
  }
  lVar2 = FUN_14038fb82();
  lVar1 = local_58;
  lVar3 = (longlong)(int)uStack_50;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      FUN_1405e0ab4(local_60 + 0x28,*(undefined2 *)(lVar1 + lVar4),*(undefined2 *)(lVar2 + 0xf10));
      lVar4 = lVar4 + 2;
    } while (lVar3 * 2 != lVar4);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143331554 FUN_143331554 body=873 status=ok
// SIG undefined FUN_143331554(void)

undefined8 FUN_143331554(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  undefined1 *local_88;
  code *local_80;
  code *local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  if (param_1 == 0) {
LAB_1433315b2:
    *param_3 = 0;
    param_3[1] = 0;
  }
  else {
    lVar2 = FUN_140de7a58();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30)) goto LAB_1433315b2;
    local_50 = local_68;
    uStack_4c = uStack_64;
    uStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    local_58 = param_1;
    if ((CONCAT44(uStack_64,local_68) == 0) || (CONCAT44(uStack_5c,uStack_60) == 0)) {
LAB_143331619:
      local_78 = (code *)0x0;
      lStack_70 = 0;
      cVar1 = FUN_140fc53eb(param_3);
      if (cVar1 == '\0') {
        *param_3 = 0;
        param_3[1] = 0;
LAB_143331633:
        uVar4 = 1;
        goto LAB_1433315ba;
      }
    }
    else {
      lVar2 = FUN_1476c5396(&local_50);
      if (lVar2 == 0) goto LAB_143331619;
      if (DAT_14caec470 == 0) {
        local_90 = &local_78;
        local_78 = FUN_1417df956;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1463eaa20;
        local_98 = &LAB_147bbd9ea;
        local_a0 = FUN_1401cf6d7;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000000;
        local_c0 = 8;
        local_c8 = 0x330;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
        lVar3 = FUN_1406f4b62(param_3);
        if (lVar3 != 0) {
          if (DAT_14caec470 == 0) {
            local_90 = &local_78;
            local_78 = FUN_1417df956;
            local_80 = FUN_14081d0ea;
            local_88 = &LAB_1463eaa20;
            local_98 = &LAB_147bbd9ea;
            local_a0 = FUN_1401cf6d7;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000000;
            local_c0 = 8;
            local_c8 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if (((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) &&
             (*(longlong *)(lVar3 + 0x110) == lVar2)) {
            FUN_1476c546c(&local_50,lVar3,param_1);
            goto LAB_1433315b8;
          }
        }
        uVar4 = FUN_1476c5584(&local_58,lVar2);
        FUN_140ca0f3c(&local_78,uVar4);
        pcVar5 = local_78;
        if (DAT_14c950c29 == '\x01') {
          if (local_78 == (code *)0x0) {
            pcVar5 = (code *)0x0;
          }
          else {
            FUN_1456cec3c();
            pcVar5 = local_78;
          }
        }
        *param_3 = (longlong)pcVar5;
        param_3[1] = lStack_70;
        FUN_1476c546c(&local_50,uVar4,param_1);
        goto LAB_143331633;
      }
      if (*param_3 != lVar2) {
        FUN_140ca0f3c(&local_78,lVar2);
        pcVar5 = local_78;
        if (DAT_14c950c29 == '\x01') {
          if (local_78 == (code *)0x0) {
            pcVar5 = (code *)0x0;
          }
          else {
            FUN_1456cec3c();
            pcVar5 = local_78;
          }
        }
        *param_3 = (longlong)pcVar5;
        param_3[1] = lStack_70;
        goto LAB_143331633;
      }
    }
  }
LAB_1433315b8:
  uVar4 = 0;
LAB_1433315ba:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433318be FUN_1433318be body=286 status=ok
// SIG undefined FUN_1433318be(void)

void FUN_1433318be(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476f5abe(lVar3,param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476f5abe(lVar3,param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433319de FUN_1433319de body=472 status=ok
// SIG undefined FUN_1433319de(void)

void FUN_1433319de(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_1406f4b62(param_3);
  if (lVar1 == 0) {
LAB_143331a32:
    lVar1 = 0;
  }
  else {
    lVar2 = FUN_1402d2740();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_143331a32;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  if (param_1 != 0) {
    lVar2 = FUN_140de7a58();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_40 = local_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      local_48 = param_1;
      if ((CONCAT44(uStack_54,local_58) != 0) && (CONCAT44(uStack_4c,uStack_50) != 0)) {
        lVar2 = FUN_1476c5396(&local_40);
        if (lVar2 != 0) {
          if (DAT_14caec470 == 0) {
            local_70 = &local_30;
            local_30 = FUN_1417df956;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1463eaa20;
            local_78 = &LAB_147bbd9ea;
            local_80 = FUN_1401cf6d7;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000000;
            local_a0 = 8;
            local_a8 = 0x330;
            FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e)
            ;
          }
          if ((((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) &&
              (*(longlong *)(lVar2 + 0x110) != 0)) && (*(longlong *)(lVar2 + 0x110) == lVar1))
          goto LAB_143331a8c;
        }
        FUN_1476c546c(&local_40,lVar1,param_1);
      }
    }
  }
LAB_143331a8c:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143331bb8 FUN_143331bb8 body=320 status=ok
// SIG undefined FUN_143331bb8(void)

void FUN_143331bb8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476f5fa6(param_2,lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476f5fa6(param_2,lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_1476f56b6(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143331cfa FUN_143331cfa body=193 status=ok
// SIG undefined FUN_143331cfa(void)

undefined8 * FUN_143331cfa(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30;
  longlong local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  if (param_2 != 0) {
    lVar1 = FUN_140de7a58();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_143331d45;
  }
  param_2 = 0;
LAB_143331d45:
  local_28 = CONCAT44(uStack_44,local_48);
  lStack_20 = CONCAT44(uStack_3c,uStack_40);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = param_2;
  if (param_2 != 0) {
    uVar2 = 0;
    if ((local_28 != 0) && (lStack_20 != 0)) {
      uVar2 = FUN_1476c5396(&local_28,0);
    }
    FUN_1458e475c(param_1,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143331dbe FUN_143331dbe body=29 status=ok
// SIG undefined FUN_143331dbe(void)

undefined8 FUN_143331dbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143331f5a FUN_143331f5a body=93 status=ok
// SIG undefined FUN_143331f5a(void)

void FUN_143331f5a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143331fb8 FUN_143331fb8 body=93 status=ok
// SIG undefined FUN_143331fb8(void)

void FUN_143331fb8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a508990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143332016 FUN_143332016 body=126 status=ok
// SIG undefined FUN_143332016(void)

void FUN_143332016(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a508990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143332085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1433320a0 FUN_1433320a0 body=268 status=ok
// SIG undefined FUN_1433320a0(void)

undefined8 FUN_1433320a0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_1433321a6;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1433321a6;
    }
    FUN_140192332(param_1 + 0x18,&local_20,0);
  }
  else {
LAB_1433321a6:
    local_20 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_14333215e;
    lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 0x2b5);
      *pbVar1 = *pbVar1 & 0xfd;
      uVar6 = 1;
      goto LAB_14333215e;
    }
  }
  uVar6 = 0;
LAB_14333215e:
  if ((local_20 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333220e FUN_14333220e body=77 status=ok
// SIG undefined FUN_14333220e(void)

void FUN_14333220e(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1[1];
  local_10 = param_1[2];
  FUN_1437349a4(*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143332266 FUN_143332266 body=29 status=ok
// SIG undefined FUN_143332266(void)

void FUN_143332266(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143332284 FUN_143332284 body=57 status=ok
// SIG undefined FUN_143332284(void)

undefined8 * FUN_143332284(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a508fc0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433322be FUN_1433322be body=282 status=ok
// SIG undefined FUN_1433322be(void)

undefined8 * FUN_1433322be(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14332ff59);
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



// FUNCTION 1433323d8 FUN_1433323d8 body=153 status=ok
// SIG undefined FUN_1433323d8(void)

void FUN_1433323d8(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_28 = *(undefined8 *)(param_1 + 0xb0);
  local_20 = *(undefined8 *)(param_1 + 0xb8);
  FUN_1437349a4(*(undefined8 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433324e4 FUN_1433324e4 body=48 status=ok
// SIG undefined FUN_1433324e4(void)

longlong FUN_1433324e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14771303e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143332514 FUN_143332514 body=48 status=ok
// SIG undefined FUN_143332514(void)

longlong FUN_143332514(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4d8;
  FUN_14771303e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143332556 FUN_143332556 body=563 status=ok
// SIG undefined FUN_143332556(void)

void FUN_143332556(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    if ((*(int *)(*param_1 + 0x6c8) != 0) &&
       ((plVar4 = *(longlong **)(*param_1 + 0x6c0), plVar4 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*plVar4 + 0x30))(), cVar5 != '\0')))) {
      iVar6 = (int)param_1[6];
      if (iVar6 == 0) {
        uVar15 = 1;
        uVar17 = 0;
        iVar13 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 3);
        }
        uVar16 = *puVar11;
        if (uVar16 == 0) {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar15 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar15 = uVar17;
          }
          iVar13 = 0;
          do {
            if (uVar15 == uVar17) goto LAB_14333273a;
            iVar13 = iVar13 + 0x20;
            uVar16 = puVar11[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar17 = 0;
          iVar13 = 0;
        }
        uVar15 = (ulonglong)(-uVar16 & uVar16);
        uVar3 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar7) {
          iVar7 = iVar6;
        }
      }
      if (iVar7 < iVar6) {
        uVar16 = 0xffffffff;
        do {
          plVar4 = *(longlong **)(param_1[1] + 8 + (longlong)iVar7 * 0x20);
          (**(code **)(*plVar4 + 0x58))(plVar4,local_58);
          plVar4 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar16 = uVar16 & ~(uint)uVar15;
          puVar11 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 3);
          }
          iVar6 = (int)param_1[6];
          iVar7 = (int)uVar17;
          lVar14 = (longlong)iVar7;
          uVar8 = puVar11[lVar14] & uVar16;
          if (uVar8 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar12 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar8 = puVar11[lVar14 + lVar12 + 1];
              if (uVar8 != 0) break;
              lVar12 = lVar12 + 1;
              if (iVar10 - lVar14 == lVar12) goto LAB_14333273a;
            }
            uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
            uVar16 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar6);
      }
    }
LAB_14333273a:
    if ((*(int *)(*param_1 + 0x6d8) != 0) &&
       (plVar4 = *(longlong **)(*param_1 + 0x6d0), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333279c FUN_14333279c body=48 status=ok
// SIG undefined FUN_14333279c(void)

longlong FUN_14333279c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_1477264f4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433327de FUN_1433327de body=563 status=ok
// SIG undefined FUN_1433327de(void)

void FUN_1433327de(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  if (((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c) != iVar6) ||
     (iVar6 != (int)param_1[0x16])) {
    if ((*(int *)(*param_1 + 0x6b8) != 0) &&
       ((plVar4 = *(longlong **)(*param_1 + 0x6b0), plVar4 != (longlong *)0x0 &&
        (cVar5 = (**(code **)(*plVar4 + 0x30))(), cVar5 != '\0')))) {
      iVar6 = (int)param_1[6];
      if (iVar6 == 0) {
        uVar15 = 1;
        uVar17 = 0;
        iVar13 = 0;
        iVar7 = 0;
      }
      else {
        puVar11 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 3);
        }
        uVar16 = *puVar11;
        if (uVar16 == 0) {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar15 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar15 = uVar17;
          }
          iVar13 = 0;
          do {
            if (uVar15 == uVar17) goto LAB_1433329c2;
            iVar13 = iVar13 + 0x20;
            uVar16 = puVar11[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar17 = 0;
          iVar13 = 0;
        }
        uVar15 = (ulonglong)(-uVar16 & uVar16);
        uVar3 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar7) {
          iVar7 = iVar6;
        }
      }
      if (iVar7 < iVar6) {
        uVar16 = 0xffffffff;
        do {
          plVar4 = *(longlong **)(param_1[1] + 8 + (longlong)iVar7 * 0x20);
          (**(code **)(*plVar4 + 0x58))(plVar4,local_58);
          plVar4 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar16 = uVar16 & ~(uint)uVar15;
          puVar11 = (uint *)param_1[5];
          if ((uint *)param_1[5] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 3);
          }
          iVar6 = (int)param_1[6];
          iVar7 = (int)uVar17;
          lVar14 = (longlong)iVar7;
          uVar8 = puVar11[lVar14] & uVar16;
          if (uVar8 == 0) {
            iVar9 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar9 = iVar6 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar9 <= iVar7) break;
            lVar12 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar8 = puVar11[lVar14 + lVar12 + 1];
              if (uVar8 != 0) break;
              lVar12 = lVar12 + 1;
              if (iVar10 - lVar14 == lVar12) goto LAB_1433329c2;
            }
            uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
            uVar16 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar3 = uVar15 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        } while (iVar7 < iVar6);
      }
    }
LAB_1433329c2:
    if ((*(int *)(*param_1 + 0x6c8) != 0) &&
       (plVar4 = *(longlong **)(*param_1 + 0x6c0), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143332a2f FUN_143332a2f body=2945 status=ok
// SIG undefined FUN_143332a2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143332a2f(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4ec620,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",0,0,&PTR_FUN_14a4ec810);
  ppuStack_60 = &PTR_FUN_14a4ed320;
  local_58 = 4;
  local_68 = 2;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4ed3f0,1,&PTR_FUN_14a4ed3a0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4ed7a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4edcf0,1,&PTR_FUN_14a4edcc0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4ee310,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4ee6a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4eeba0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",0,0,&PTR_FUN_14a4eece0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",0,0,&PTR_FUN_14a4eed80);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4ef120,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4ef720,1,&PTR_FUN_14a4ef6f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",0,0,&PTR_FUN_14a4ef8d0);
  _DAT_14cab69d8 = 0xffffffff;
  DAT_14cab69dc = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4efcb0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f03a0,1,&PTR_FUN_14a4f0370);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f07c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f0b90,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f1160,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f1570,1,0);
  DAT_14cab6a88 = 0;
  atexit(FUN_14332d76c);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cab6a90);
  if (cVar1 == '\0') {
    _DAT_14cab6a90 = 0;
    uRam000000014cab6a98 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f1960,1,0);
  DAT_14cab6ab8 = DAT_14cab3268 + 1;
  DAT_14cab3268 = DAT_14cab3268 + 2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  DAT_14cab6abc = DAT_14cab3268;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f1ed0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f2560,1,0);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab6b00,L"UMG.AsyncAnimationControlFlow",&DAT_14c761020,
                L"(Default: true) Whether to perform animation control flow functions (Play, Pause, Stop etc) asynchronously."
               );
  atexit(FUN_14332d805);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab6b18,L"UMG.AnimationMarkers",&DAT_14cab6b10,
                L"(Default: false) Whether to emit profiling frame markers for starting and stopping UMG animations."
               );
  atexit(FUN_14332d84a);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f2cd0,1,&PTR_FUN_14a4f2ca0);
  local_50 = (char *)CONCAT44(local_50._4_4_,100);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cab6b58,L"Widget.MaxAnimationLatentActions",&local_50,
                L"Defines the maximum number of latent actions that can be run in one frame.");
  atexit(FUN_14332e1d5);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab6b70,L"UMG.FlushAnimationsAtEndOfFrame",&DAT_14c761024,
                L"Whether to automatically flush any outstanding animations at the end of the frame, or just wait until next frame."
               );
  atexit(FUN_14332e21a);
  local_68 = local_68 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cab6b88,L"UMG.AnimationBudgetMs",&DAT_14cab6b80,
                L"(Default: 0.0) EXPERIMENTAL: A per-frame animation budget to use for evaluation of all UMG animations this frame."
               );
  atexit(FUN_14332e25f);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f3c70,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",0,0,&PTR_FUN_14a4f3eb0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f4540,1,&PTR_FUN_14a4f4510);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f4f10,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f5390,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f57a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f5c10,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f60f0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",0,0,&PTR_FUN_14a4f61d0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f65e0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f69f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f6e10,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f7270,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",0,0,&PTR_FUN_14a4f7330);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f87a0,6,0);
  _DAT_14cab6e78 = 0;
  _DAT_14cab6e80 = 0;
  _DAT_14cab76f8 = 0;
  _DAT_14cab6e88 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f8be0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f90b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f9550,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f9990,1,0);
  local_50 = "UnixSocketPath";
  local_48 = 0xe;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cab6f38 = (ulonglong)uVar2;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4f9f70,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4faf10,1,&PTR_FUN_14a4faee0);
  FUN_1446f470e(&DAT_14cab6fd8,L"BP_OnEntryReleased",1);
  FUN_1446f470e(&DAT_14cab6fe8,L"BP_OnItemExpansionChanged",1);
  FUN_1446f470e(&DAT_14cab6ff8,L"BP_OnItemSelectionChanged",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4fbd10,2,0);
  DAT_14cab7750 = 0;
  DAT_14cab7758 = 0;
  DAT_14cab7730 = 0;
  _DAT_14cab7738 = 0;
  _DAT_14cab775c = 0xffffffff00000080;
  _DAT_14cab7764 = 0;
  DAT_14cab7770 = 0;
  _DAT_14cab7778 = 0;
  atexit(FUN_14332ef69);
  FUN_1446f470e(&DAT_14cab7050,L"OnListItemObjectSet",1);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4fc5f0,2,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",0,0,&PTR_FUN_14a4fc7e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4fd4b0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4fdb30,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4fed40,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a4ff3a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a500240,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5008a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a500dc0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5020e0,1,&PTR_FUN_14a5020b0);
  FUN_1446f470e(&local_50,L"CheckedState",1);
  DAT_14cab73c0 = local_50;
  DAT_14cab73c8 = 3;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a503270,2,0);
  _DAT_14cab73f0 = 0;
  _DAT_14cab73e8 = 0;
  _DAT_14cab73f8 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a503a40,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a503fe0,1,0);
  FUN_1446f470e(&local_50,L"SelectedOption",1);
  DAT_14cab74b0 = local_50;
  DAT_14cab74b8 = 3;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a505090,1,0);
  FUN_1446f470e(&local_50,L"SelectedOption",1);
  DAT_14cab7550 = local_50;
  DAT_14cab7558 = 3;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a506450,1,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433335b4 FUN_1433335b4 body=63 status=ok
// SIG undefined FUN_1433335b4(void)

longlong FUN_1433335b4(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x170) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x168);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 1433335f4 FUN_1433335f4 body=564 status=ok
// SIG undefined FUN_1433335f4(void)

longlong FUN_1433335f4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *param_2;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  plVar7 = DAT_14cab7858;
  if (DAT_14cab7858 == (longlong *)0x0) {
    plVar7 = &DAT_14cab7838;
  }
  if ((longlong)(int)DAT_14cab7860 != 0) {
    lVar8 = (longlong)(int)DAT_14cab7860 << 3;
    do {
      lVar2 = *plVar7;
      if ((DAT_14c950c29 == 1) && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      if ((((lVar5 == 0) || (lVar4 = FUN_1405e2bf2(), lVar4 == 0)) ||
          (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (lVar6 = lVar5,
         *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
         lVar4 + 0x30)) {
        lVar6 = 0;
      }
      if ((lVar2 != 0) && (lVar4 = FUN_1405e2bf2(), lVar4 != 0)) {
        iVar1 = *(int *)(lVar2 + 0x38);
        if (((*(int *)(lVar4 + 0x38) <= iVar1) &&
            ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30 && (iVar1 <= *(int *)(lVar6 + 0x38))))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
          if (plVar7 != (longlong *)0x0) {
            lVar5 = 0;
            goto LAB_1433337cb;
          }
          break;
        }
      }
      plVar7 = plVar7 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  uVar3 = DAT_14cab7860;
  lVar5 = (longlong)(int)DAT_14cab7860;
  DAT_14cab7860 = DAT_14cab7860 + 1;
  if (DAT_14cab7864 < DAT_14cab7860) {
    FUN_147766f32(uVar3);
  }
  plVar7 = &DAT_14cab7838;
  if (DAT_14cab7858 != (longlong *)0x0) {
    plVar7 = DAT_14cab7858;
  }
  local_50 = *param_2;
  plVar7[lVar5] = local_50;
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    local_50 = *param_2;
  }
  if ((local_50 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar5 = FUN_14772de36(param_1 + 0x38,&local_50);
  if ((lVar5 != 0) && (param_1[0x36] != 0)) {
    (**(code **)(*param_1 + 0x300))(param_1,lVar5);
  }
  FUN_14772deb0(local_58);
LAB_1433337cb:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 143333829 FUN_143333829 body=55 status=ok
// SIG undefined FUN_143333829(void)

void FUN_143333829(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab77f0 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab77f0 = FUN_14171c317(FUN_14635343d,uVar1,L"EDynamicBoxType");
  }
  return;
}



// FUNCTION 143333872 FUN_143333872 body=83 status=ok
// SIG undefined FUN_143333872(void)

undefined8 FUN_143333872(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_20 = FUN_143336ee2;
  FUN_1407616b4();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433338c6 FUN_1433338c6 body=63 status=ok
// SIG undefined FUN_1433338c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433338c6(void)

{
  _DAT_14cab7920 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab7929 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab7920);
    DAT_14cab7929 = '\0';
  }
  return;
}



// FUNCTION 143333905 FUN_143333905 body=63 status=ok
// SIG undefined FUN_143333905(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143333905(void)

{
  _DAT_14cab79d0 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab79d9 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab79d0);
    DAT_14cab79d9 = '\0';
  }
  return;
}



// FUNCTION 143333944 FUN_143333944 body=155 status=ok
// SIG undefined FUN_143333944(void)

void FUN_143333944(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001433339db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1433339df FUN_1433339df body=127 status=ok
// SIG undefined FUN_1433339df(void)

void FUN_1433339df(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14a514170;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined2 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)(puVar1 + 8) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 143333a5e FUN_143333a5e body=1892 status=ok
// SIG undefined FUN_143333a5e(void)

void FUN_143333a5e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 local_140;
  undefined1 local_138;
  longlong *local_130;
  longlong *local_128;
  ulonglong local_120;
  undefined8 *local_118;
  int local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  void *local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [2];
  undefined8 *local_78;
  int local_70;
  undefined8 *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  (**(code **)(*param_1 + 0x348))();
  lVar10 = FUN_1401fe4bc(param_2);
  if (lVar10 == 0) {
    local_d0 = *param_2;
    local_c8 = *(undefined4 *)(param_2 + 1);
    uStack_c4 = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_c0 = *(undefined4 *)(param_2 + 2);
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0x14);
    local_b8 = (void *)0x0;
    local_b0 = *(int *)(param_2 + 4);
    lVar10 = (longlong)local_b0;
    pvVar4 = (void *)param_2[3];
    if (lVar10 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,local_b0,0);
      memcpy(local_b8,pvVar4,lVar10 * 2);
    }
    (**(code **)(*param_1 + 0x350))(param_1,&local_d0);
    local_128 = param_3;
    if (param_1 == (longlong *)0x0) {
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      uVar13 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar15 = (ulonglong)*(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar9 = *(uint *)(lVar10 + 0x10);
        bVar17 = uVar9 == 0;
        if (bVar17) {
          *(uint *)(lVar10 + 0x10) = uVar16;
          uVar9 = 0;
        }
        UNLOCK();
        if (bVar17) {
          uVar9 = uVar16;
        }
        uVar15 = (ulonglong)uVar9;
      }
    }
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined4 *)(param_2 + 2);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0x28c) = uVar6;
    *(undefined4 *)(param_1 + 0x52) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x294) = uVar8;
    plVar2 = param_1 + 0x53;
    if (plVar2 != param_2 + 3) {
      iVar3 = *(int *)(param_2 + 4);
      pvVar4 = (void *)param_2[3];
      *(int *)(param_1 + 0x54) = iVar3;
      if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x2a4) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
      }
      else {
        FUN_1446dd670(plVar2,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*plVar2,pvVar4,(longlong)iVar3 * 2);
        }
      }
    }
    lVar10 = FUN_14050fd64();
    local_120 = (ulonglong)uVar13 | uVar15 << 0x20;
    local_118 = (undefined8 *)0x0;
    local_110 = 0;
    FUN_14009d848(&local_118,local_128);
    local_108 = *param_2;
    local_100 = *(undefined4 *)(param_2 + 1);
    uStack_fc = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_f8 = *(undefined4 *)(param_2 + 2);
    uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x14);
    local_f0 = (void *)0x0;
    uVar13 = *(uint *)(param_2 + 4);
    pvVar4 = (void *)param_2[3];
    local_e8 = CONCAT44(local_e8._4_4_,uVar13);
    if ((longlong)(int)uVar13 == 0) {
      local_e8 = (ulonglong)uVar13;
    }
    else {
      FUN_1446dd670(&local_f0,uVar13,0);
      memcpy(local_f0,pvVar4,(longlong)(int)uVar13 * 2);
    }
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    local_68 = (undefined8 *)0x0;
    iStack_60 = 0;
    FUN_1446efa72(&local_68,0,6,0x10);
    puVar11 = local_68;
    param_3 = local_128;
    *local_68 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_68[2] = lVar12;
    *local_68 = &PTR_FUN_14a5409d0;
    local_68[3] = local_120;
    local_68[4] = local_118;
    local_118 = (undefined8 *)0x0;
    *(int *)(local_68 + 5) = local_110;
    local_110 = 0;
    local_68[6] = local_108;
    *(undefined4 *)(local_68 + 7) = local_100;
    *(undefined4 *)((longlong)local_68 + 0x3c) = uStack_fc;
    *(undefined4 *)(local_68 + 8) = uStack_f8;
    *(undefined4 *)((longlong)local_68 + 0x44) = uStack_f4;
    local_68[9] = local_f0;
    local_f0 = (void *)0x0;
    *(undefined4 *)(local_68 + 10) = (undefined4)local_e8;
    *(undefined4 *)((longlong)local_68 + 0x54) = local_e8._4_4_;
    local_e8 = 0;
    local_68 = (undefined8 *)0x0;
    iStack_60 = 0;
    if (local_70 == 0) {
LAB_143333d92:
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = 0;
      goto LAB_143333d92;
    }
    local_78 = puVar11;
    local_70 = 6;
    if (iStack_60 == 0) {
LAB_143333dff:
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_68 != (undefined8 *)0x0) {
      (**(code **)*local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      iStack_60 = 0;
      goto LAB_143333dff;
    }
    local_88[0] = 0;
    local_88[1] = 0;
    local_68 = (undefined8 *)param_1[0x51];
    iStack_60 = (int)param_1[0x52];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x294);
    local_58 = (void *)0x0;
    local_50 = (int)param_1[0x54];
    lVar14 = (longlong)local_50;
    pvVar4 = (void *)param_1[0x53];
    if (lVar14 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar4,lVar14 * 2);
    }
    local_a0 = &local_48;
    local_a8 = &local_68;
    FUN_140a1e2b2(&local_98);
    local_130 = local_88;
    local_138 = 0;
    local_140 = 0;
    local_148 = 100;
    FUN_140421d62(lVar10 + 0x1e8,&local_e0,&local_98,&local_78);
    FUN_140861e20(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70 == 0) {
LAB_143333f63:
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = 0;
      goto LAB_143333f63;
    }
    plVar2 = local_d8;
    if (param_1 + 0x4f != &local_e0) {
      param_1[0x4f] = local_e0;
      local_e0 = 0;
      plVar5 = (longlong *)param_1[0x50];
      if (local_d8 != plVar5) {
        local_d8 = (longlong *)0x0;
        param_1[0x50] = (longlong)plVar2;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      }
    }
    plVar2 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_d8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_110 != 0) {
      if (local_118 == (undefined8 *)0x0) goto LAB_143334062;
      (**(code **)*local_118)(local_118,0);
      FUN_1446efa72(&local_118,0,0,0x10);
      local_110 = 0;
    }
    if (local_118 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
LAB_143334062:
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  puVar11 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar11 == (undefined8 *)0x0) goto LAB_1433340ab;
    (**(code **)*puVar11)(puVar11,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar11 = (undefined8 *)*param_3;
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1433340ab:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433341c3 FUN_1433341c3 body=63 status=ok
// SIG undefined FUN_1433341c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433341c3(void)

{
  _DAT_14cab7c48 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab7c51 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab7c48);
    DAT_14cab7c51 = '\0';
  }
  return;
}



// FUNCTION 143334202 FUN_143334202 body=796 status=ok
// SIG undefined FUN_143334202(void)

undefined8 * FUN_143334202(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_248 [39];
  undefined1 local_221;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_208;
  longlong *local_200;
  code *local_1f8;
  undefined8 *local_1f0;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_14773a356(&local_1f8);
  FUN_147769ec0(&local_220,".\\Runtime/UMG/Private/Components/InvalidationBox.cpp",0x22,&local_221);
  FUN_14773a3ee(&local_220,&local_208,&local_1f8);
  plVar5 = local_200;
  if (local_200 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = local_208;
    plVar7 = *(longlong **)(param_1 + 400);
    if (plVar7 == (longlong *)0x0) goto LAB_14333430b;
    *(undefined8 *)(param_1 + 400) = 0;
LAB_1433342ec:
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14333430b;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x188) = local_208;
    plVar7 = *(longlong **)(param_1 + 400);
    if (local_200 != plVar7) {
      *(longlong **)(param_1 + 400) = local_200;
      if (plVar7 == (longlong *)0x0) goto LAB_14333430b;
      goto LAB_1433342ec;
    }
    LOCK();
    plVar7 = local_200 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_14333430b;
    (**(code **)*local_200)(local_200);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar7 = plVar5;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_14333430b:
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_200 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)local_200 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_200 + 0x10))(local_200);
      }
    }
  }
  plVar5 = local_218;
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_218 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  FUN_140a4ff8c(&local_1f8);
  FUN_146ad6f02(*(undefined8 *)(param_1 + 0x188),*(undefined1 *)(param_1 + 0x180));
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar3 = *(longlong *)(param_1 + 0x188);
    lVar6 = **(longlong **)(param_1 + 0x168);
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    if (*(longlong *)(lVar6 + 0x30) == 0) {
      local_220 = DAT_14c98dec8;
      local_218 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    else {
      if (*(int *)(param_1 + 0x170) < 1) {
        lVar6 = 0;
      }
      else {
        lVar6 = **(longlong **)(param_1 + 0x168);
        if ((lVar6 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar6);
        }
      }
      local_1f8 = FUN_143336ee2;
      local_1f0 = &local_208;
      FUN_1407616b4(*(undefined8 *)(lVar6 + 0x30),&local_220);
    }
    FUN_140a58896(lVar3 + 0x1e0,&local_220);
    FUN_14032aaf4(lVar3 + 0x268,0);
    plVar5 = local_218;
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_218 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_218)(local_218);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x188);
  plVar5 = *(longlong **)(param_1 + 400);
  if (plVar5 == (longlong *)0x0) {
    *param_2 = uVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar5;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143334520 FUN_143334520 body=64 status=ok
// SIG undefined FUN_143334520(void)

void FUN_143334520(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 143334560 FUN_143334560 body=7 status=ok
// SIG undefined FUN_143334560(void)

undefined4 FUN_143334560(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x170);
}



// FUNCTION 143334567 FUN_143334567 body=63 status=ok
// SIG undefined FUN_143334567(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143334567(void)

{
  _DAT_14cab7f50 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab7f59 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab7f50);
    DAT_14cab7f59 = '\0';
  }
  return;
}



// FUNCTION 1433345a6 FUN_1433345a6 body=63 status=ok
// SIG undefined FUN_1433345a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433345a6(void)

{
  _DAT_14cab7fe8 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab7ff1 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab7fe8);
    DAT_14cab7ff1 = '\0';
  }
  return;
}



// FUNCTION 1433345e5 FUN_1433345e5 body=116 status=ok
// SIG undefined FUN_1433345e5(void)

void FUN_1433345e5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14a51f3f0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined2 *)(puVar1 + 10) = 0x101;
  puVar1[7] = 0;
  return;
}



// FUNCTION 143334659 FUN_143334659 body=69 status=ok
// SIG undefined FUN_143334659(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143334659(void)

{
  _DAT_14cab8148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333469b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab8150,1);
  return;
}



// FUNCTION 14333469e FUN_14333469e body=756 status=ok
// SIG undefined FUN_14333469e(void)

undefined8 * FUN_14333469e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_268 [47];
  undefined1 local_239;
  undefined8 local_238;
  longlong *local_230;
  undefined8 local_220;
  longlong *local_218;
  code *local_210;
  undefined8 *local_208;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_147745d0e(&local_210);
  local_57 = *(undefined1 *)(param_1 + 0x181);
  local_58 = *(undefined1 *)(param_1 + 0x182);
  local_54 = *(undefined4 *)(param_1 + 0x184);
  local_50 = *(undefined4 *)(param_1 + 0x188);
  FUN_147773566(&local_238,&local_239);
  FUN_147745dca(&local_238,&local_220,&local_210);
  plVar4 = local_218;
  if (local_218 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1a0) = local_220;
    plVar6 = *(longlong **)(param_1 + 0x1a8);
    if (plVar6 == (longlong *)0x0) goto LAB_1433347ce;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
LAB_1433347af:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1433347ce;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_218 + 1) = (int)local_218[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1a0) = local_220;
    plVar6 = *(longlong **)(param_1 + 0x1a8);
    if (local_218 != plVar6) {
      *(longlong **)(param_1 + 0x1a8) = local_218;
      if (plVar6 == (longlong *)0x0) goto LAB_1433347ce;
      goto LAB_1433347af;
    }
    LOCK();
    plVar6 = local_218 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1433347ce;
    (**(code **)*local_218)(local_218);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1433347ce:
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_218 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)local_218 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_218 + 0x10))(local_218);
      }
    }
  }
  plVar4 = local_230;
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_230 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_147745e3e(&local_210);
  if (0 < *(int *)(param_1 + 0x170)) {
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    lVar5 = **(longlong **)(param_1 + 0x168);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    if (*(longlong *)(lVar5 + 0x30) == 0) {
      local_238 = DAT_14c98dec8;
      local_230 = DAT_14c98ded0;
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
    }
    else {
      if (*(int *)(param_1 + 0x170) < 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = **(longlong **)(param_1 + 0x168);
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
        }
      }
      local_210 = FUN_143336ee2;
      local_208 = &local_220;
      FUN_1407616b4(*(undefined8 *)(lVar5 + 0x30),&local_238);
    }
    FUN_1477907e2(uVar3,&local_238);
    plVar4 = local_230;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_230 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1a0);
  plVar4 = *(longlong **)(param_1 + 0x1a8);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143334993 FUN_143334993 body=63 status=ok
// SIG undefined FUN_143334993(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143334993(void)

{
  _DAT_14cab87b8 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab87c1 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab87b8);
    DAT_14cab87c1 = '\0';
  }
  return;
}



// FUNCTION 1433349d2 FUN_1433349d2 body=8 status=ok
// SIG undefined FUN_1433349d2(void)

longlong FUN_1433349d2(longlong param_1)

{
  return param_1 + 0x1d0;
}



// FUNCTION 1433349da FUN_1433349da body=63 status=ok
// SIG undefined FUN_1433349da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433349da(void)

{
  _DAT_14cab88b0 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab88b9 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab88b0);
    DAT_14cab88b9 = '\0';
  }
  return;
}



// FUNCTION 143334a1a FUN_143334a1a body=775 status=ok
// SIG undefined FUN_143334a1a(void)

void FUN_143334a1a(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_143334beb;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143334beb:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar9 = 0x19;
  if (local_2c < 0x19) {
    iVar9 = local_2c;
  }
  iVar10 = 1;
  if (1 < iVar9) {
    iVar10 = iVar9;
  }
  *(int *)(param_1 + 0x168) = iVar10;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_146a5d742();
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143334d56 FUN_143334d56 body=155 status=ok
// SIG undefined FUN_143334d56(void)

void FUN_143334d56(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  plVar3 = *(longlong **)(param_1 + 0x188);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000143334ded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143334df1 FUN_143334df1 body=127 status=ok
// SIG undefined FUN_143334df1(void)

void FUN_143334df1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14a534e70;
  puVar1[0xb] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined2 *)(puVar1 + 10) = 0;
  *(undefined4 *)(puVar1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
  return;
}



// FUNCTION 143334e70 FUN_143334e70 body=55 status=ok
// SIG undefined FUN_143334e70(void)

void FUN_143334e70(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab8b40 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab8b40 = FUN_14171c317(FUN_146358f3d,uVar1,L"EWidgetDesignFlags");
  }
  return;
}



// FUNCTION 143334eb8 FUN_143334eb8 body=553 status=ok
// SIG undefined FUN_143334eb8(void)

void FUN_143334eb8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xf0) == 0) goto LAB_143334ed8;
  FUN_140760c2c(param_1,&local_30);
  if (local_30 != 0) {
    FUN_145bffa4c(local_30,&local_40);
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_14001cc68(0x108,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_14a544740;
      plVar1 = plVar5 + 2;
      FUN_145717132(plVar1);
      plVar3 = local_38;
      local_40 = plVar1;
      if (plVar5 == (longlong *)0x0) {
        if (local_38 != (longlong *)0x0) {
          local_38 = (longlong *)0x0;
LAB_143334ffd:
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
          if (plVar5 != (longlong *)0x0) goto LAB_14333505d;
        }
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if (plVar5 == local_38) {
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
        else {
          bVar6 = local_38 != (longlong *)0x0;
          local_38 = plVar5;
          if (bVar6) goto LAB_143334ffd;
        }
LAB_14333505d:
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
      plVar1 = local_38;
      local_50 = local_40;
      local_48 = local_38;
      if (local_38 == (longlong *)0x0) {
        FUN_14775eb88(local_30,&local_50);
      }
      else {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
        FUN_14775eb88(local_30);
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
        }
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0xf0);
    local_60 = local_40;
    local_58 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_14779f60a(uVar4,&local_60);
    plVar1 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
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
LAB_143334ed8:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433350e2 FUN_1433350e2 body=1 status=ok
// SIG undefined FUN_1433350e2(void)

void FUN_1433350e2(void)

{
  return;
}



// FUNCTION 1433350e9 FUN_1433350e9 body=55 status=ok
// SIG undefined FUN_1433350e9(void)

void FUN_1433350e9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab8de8 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab8de8 = FUN_14171c317(FUN_146359b59,uVar1,L"EWidgetSpace");
  }
  return;
}



// FUNCTION 143335120 FUN_143335120 body=55 status=ok
// SIG undefined FUN_143335120(void)

void FUN_143335120(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab8e00 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab8e00 = FUN_14171c317(FUN_146359b8a,uVar1,L"EWidgetTimingPolicy");
  }
  return;
}



// FUNCTION 143335157 FUN_143335157 body=55 status=ok
// SIG undefined FUN_143335157(void)

void FUN_143335157(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab8e18 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab8e18 = FUN_14171c317(FUN_146359bb9,uVar1,L"EWidgetBlendMode");
  }
  return;
}



// FUNCTION 14333518e FUN_14333518e body=55 status=ok
// SIG undefined FUN_14333518e(void)

void FUN_14333518e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab8e30 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab8e30 = FUN_14171c317(FUN_146359be8,uVar1,L"EWidgetGeometryMode");
  }
  return;
}



// FUNCTION 1433351c5 FUN_1433351c5 body=55 status=ok
// SIG undefined FUN_1433351c5(void)

void FUN_1433351c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab8e48 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab8e48 = FUN_14171c317(FUN_146359c19,uVar1,L"EWindowVisibility");
  }
  return;
}



// FUNCTION 1433351fc FUN_1433351fc body=55 status=ok
// SIG undefined FUN_1433351fc(void)

void FUN_1433351fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab8e60 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab8e60 = FUN_14171c317(FUN_146359c4a,uVar1,L"ETickMode");
  }
  return;
}



// FUNCTION 143335233 FUN_143335233 body=69 status=ok
// SIG undefined FUN_143335233(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143335233(void)

{
  _DAT_14cab8fd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143335275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab8fd8,1);
  return;
}



// FUNCTION 143335278 FUN_143335278 body=69 status=ok
// SIG undefined FUN_143335278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143335278(void)

{
  _DAT_14cab8fe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433352ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab8fe8,1);
  return;
}



// FUNCTION 1433352bd FUN_1433352bd body=69 status=ok
// SIG undefined FUN_1433352bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433352bd(void)

{
  _DAT_14cab8ff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433352ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab8ff8,1);
  return;
}



// FUNCTION 143335302 FUN_143335302 body=63 status=ok
// SIG undefined FUN_143335302(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143335302(void)

{
  _DAT_14cab9008 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab9011 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab9008);
    DAT_14cab9011 = '\0';
  }
  return;
}



// FUNCTION 143335341 FUN_143335341 body=63 status=ok
// SIG undefined FUN_143335341(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143335341(void)

{
  _DAT_14cab9028 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab9031 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab9028);
    DAT_14cab9031 = '\0';
  }
  return;
}



// FUNCTION 143335380 FUN_143335380 body=63 status=ok
// SIG undefined FUN_143335380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143335380(void)

{
  _DAT_14cab9048 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab9051 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab9048);
    DAT_14cab9051 = '\0';
  }
  return;
}



// FUNCTION 1433353bf FUN_1433353bf body=63 status=ok
// SIG undefined FUN_1433353bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433353bf(void)

{
  _DAT_14cab9068 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab9071 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab9068);
    DAT_14cab9071 = '\0';
  }
  return;
}



// FUNCTION 1433353fe FUN_1433353fe body=63 status=ok
// SIG undefined FUN_1433353fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433353fe(void)

{
  _DAT_14cab9088 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab9091 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab9088);
    DAT_14cab9091 = '\0';
  }
  return;
}



// FUNCTION 14333543d FUN_14333543d body=63 status=ok
// SIG undefined FUN_14333543d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333543d(void)

{
  _DAT_14cab90a8 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (DAT_14cab90b1 == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&DAT_14cab90a8);
    DAT_14cab90b1 = '\0';
  }
  return;
}



// FUNCTION 14333547c FUN_14333547c body=1155 status=ok
// SIG undefined FUN_14333547c(void)

undefined1 (*) [16] FUN_14333547c(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x650) == '\x01') {
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_c8 = 0;
    FUN_144a80a4c(&local_f8,param_2);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x67c);
    dVar7 = (double)iVar2 * *(double *)(param_1 + 0x690) + (double)((float)iVar2 * -0.5);
    iVar3 = *(int *)(param_1 + 0x678);
    dVar9 = (double)iVar3 * *(double *)(param_1 + 0x688) + (double)((float)iVar3 * -0.5);
    dVar6 = (double)((float)iVar3 * 0.5);
    local_108._8_4_ = in_XMM1_Dc;
    local_108._0_8_ = dVar6;
    local_108._12_4_ = in_XMM1_Dd;
    *(undefined8 *)*param_2 = 0x3fe0000000000000;
    *(double *)(*param_2 + 8) = dVar9;
    *(undefined8 *)(param_2[1] + 8) = 0x3ff0000000000000;
    *(double *)param_2[2] = dVar6;
    *(double *)param_2[3] =
         (double)((float)(int)SQRT((double)((longlong)iVar2 * (longlong)iVar2 +
                                           (longlong)iVar3 * (longlong)iVar3)) * 0.5);
    dVar22 = *param_3;
    dVar15 = param_3[1];
    dVar1 = param_3[2];
    dVar21 = param_3[8];
    dVar4 = param_3[9];
    dVar5 = param_3[10];
    dVar17 = dVar15 + dVar15;
    dVar11 = dVar1 + dVar1;
    dVar20 = dVar22 * (dVar22 + dVar22);
    dVar18 = (1.0 - (dVar1 * dVar11 + dVar15 * dVar17)) * dVar21;
    dVar19 = (1.0 - (dVar1 * dVar11 + dVar20)) * dVar4;
    dVar16 = (1.0 - (dVar20 + dVar15 * dVar17)) * dVar5;
    dVar1 = param_3[3];
    dVar12 = dVar11 * dVar1;
    dVar13 = (dVar22 + dVar22) * param_3[3];
    dVar1 = dVar17 * dVar1;
    dVar20 = (dVar17 * dVar22 + dVar12) * dVar21;
    dVar10 = (dVar11 * dVar15 + dVar13) * dVar4;
    dVar14 = (dVar1 + *param_3 * dVar11) * dVar5;
    dVar21 = (*param_3 * dVar11 - dVar1) * dVar21;
    dVar4 = (dVar17 * dVar22 - dVar12) * dVar4;
    dVar5 = (dVar11 * dVar15 - dVar13) * dVar5;
    dVar1 = *(double *)*param_2;
    dVar11 = *(double *)(param_2[1] + 8);
    dVar17 = (double)((float)iVar2 * 0.5);
    dVar12 = ABS(dVar17 * dVar14) + ABS(dVar6 * dVar4) + ABS(dVar18 * dVar11);
    dVar13 = ABS(dVar17 * dVar5) + ABS(dVar6 * dVar19) + ABS(dVar20 * *(double *)(param_2[1] + 8));
    dVar22 = ABS(dVar16 * dVar17) + ABS(dVar10 * dVar6) + ABS(dVar21 * dVar11);
    dVar11 = dVar14 * dVar14 + dVar4 * dVar4 + dVar18 * dVar18;
    dVar6 = dVar5 * dVar5 + dVar19 * dVar19 + dVar20 * dVar20;
    dVar17 = dVar16 * dVar16 + dVar10 * dVar10 + dVar21 * dVar21;
    if (dVar11 <= dVar6) {
      dVar11 = dVar6;
    }
    if (dVar11 <= dVar17) {
      dVar11 = dVar17;
    }
    dVar6 = param_3[4];
    dVar20 = dVar7 * dVar5 + dVar9 * dVar19 + dVar1 * dVar20 + param_3[5];
    dVar5 = param_3[6];
    if (dVar11 < 0.0) {
      dVar11 = sqrt(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    dVar11 = dVar11 * *(double *)param_2[3];
    dVar17 = SQRT(dVar13 * dVar13 + dVar22 * dVar22 + dVar12 * dVar12);
    if (dVar17 <= dVar11) {
      dVar11 = dVar17;
    }
    auVar8._8_4_ = SUB84(dVar20,0);
    auVar8._0_8_ = dVar7 * dVar14 + dVar9 * dVar4 + dVar1 * dVar18 + dVar6;
    auVar8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *param_2 = auVar8;
    *(double *)param_2[1] = dVar7 * dVar16 + dVar1 * dVar21 + dVar9 * dVar10 + dVar5;
    dVar1 = (double)*(float *)(param_1 + 0x3ac);
    *(double *)(param_2[1] + 8) = dVar12 * dVar1;
    *(double *)param_2[2] = dVar13 * dVar1;
    *(double *)(param_2[2] + 8) = dVar22 * dVar1;
    *(double *)param_2[3] = dVar11 * dVar1;
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143335922 FUN_143335922 body=48 status=ok
// SIG undefined FUN_143335922(void)

longlong FUN_143335922(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_145c90c50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143335afc FUN_143335afc body=958 status=ok
// SIG undefined FUN_143335afc(void)

undefined8 *
FUN_143335afc(longlong param_1,undefined8 *param_2,longlong param_3,double *param_4,
             undefined1 param_5)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 unaff_RBP;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((*(int *)(param_1 + 0x1c) != 0) && (uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x1c))) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))))) {
    lVar6 = FUN_147d7ff84(DAT_14cb0d2b0,*plVar7,0);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x30) != 0)) {
      fVar10 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                     *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
      fVar14 = *(float *)(param_3 + 0x1c) * fVar10;
      fVar9 = -*(float *)(param_3 + 0x24) * fVar10;
      fVar8 = -*(float *)(param_3 + 0x20) * fVar10;
      fVar10 = fVar10 * *(float *)(param_3 + 0x28);
      local_c0 = (double)((fVar8 * (float)*param_4 + fVar14 * (float)param_4[1] +
                          (-*(float *)(param_3 + 0x2c) * fVar8 - fVar14 * *(float *)(param_3 + 0x30)
                          )) * *(float *)(param_3 + 8));
      local_c8 = (double)((fVar10 * (float)*param_4 + fVar9 * (float)param_4[1] +
                          (-*(float *)(param_3 + 0x2c) * fVar10 - *(float *)(param_3 + 0x30) * fVar9
                          )) * *(float *)(param_3 + 8));
      plVar7 = (longlong *)FUN_14776593e(param_1);
      if (plVar7 != (longlong *)0x0) {
        lVar6 = FUN_14587db9c();
        if ((((*(int *)(lVar6 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
              == lVar6 + 0x30)) && ((char)plVar7[0xd3] == '\x01')) &&
           ((ulonglong)plVar7[0xcf] >> 0x20 != 0 && (int)plVar7[0xcf] != 0)) {
          dVar3 = (double)plVar7[0x48];
          dVar4 = (double)plVar7[0x49];
          dVar5 = (double)plVar7[0x4a];
          dVar1 = (double)plVar7[0x4b];
          dVar11 = dVar3 * 0.0 - dVar4 * 1.0;
          dVar12 = dVar4 * 0.0 - dVar5 * 0.0;
          dVar13 = dVar5 * 1.0 - dVar3 * 0.0;
          dVar12 = dVar12 + dVar12;
          dVar13 = dVar13 + dVar13;
          dVar11 = dVar11 + dVar11;
          if ((*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0xa8)) *
              ((dVar11 * dVar4 - dVar13 * dVar5) + dVar1 * dVar12 + 1.0) +
              ((dVar5 * dVar12 - dVar3 * dVar11) + (double)plVar7[0x4b] * dVar13 + 0.0) *
              (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0xb0)) +
              (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0xb8)) *
              (dVar11 * dVar1 + 0.0 + (dVar13 * dVar3 - dVar12 * dVar4)) < 0.0) {
            local_98 = *(undefined8 *)(param_1 + 0x58);
            local_a8 = *(undefined4 *)(param_1 + 0x48);
            uStack_a4 = *(undefined4 *)(param_1 + 0x4c);
            uStack_a0 = *(undefined4 *)(param_1 + 0x50);
            uStack_9c = *(undefined4 *)(param_1 + 0x54);
            (**(code **)(*plVar7 + 0xa98))(plVar7,&local_a8,&local_90);
            local_b8 = local_90;
            uStack_b4 = uStack_8c;
            uStack_b0 = uStack_88;
            uStack_ac = uStack_84;
            local_d8 = 0;
            FUN_147761a16(plVar7,param_2,&local_b8,
                          CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_f8);
          }
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143335ec0 FUN_143335ec0 body=126 status=ok
// SIG undefined FUN_143335ec0(void)

undefined8 FUN_143335ec0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 != 0) {
    FUN_1405e2bf2();
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_28 = *param_2;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar1 = FUN_14779ec92(param_1,&local_28,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143335f3f FUN_143335f3f body=128 status=ok
// SIG undefined FUN_143335f3f(void)

undefined8 FUN_143335f3f(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 != 0) {
    FUN_1405e2bf2();
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_28 = *param_2;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uVar1 = FUN_14779ed9a(param_1,&local_28,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143335fc0 FUN_143335fc0 body=48 status=ok
// SIG undefined FUN_143335fc0(void)

longlong FUN_143335fc0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_140f715a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143335ff0 FUN_143335ff0 body=125 status=ok
// SIG undefined FUN_143335ff0(void)

undefined8 * FUN_143335ff0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5409d0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14333604f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14333604f:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143336082 FUN_143336082 body=205 status=ok
// SIG undefined FUN_143336082(void)

void FUN_143336082(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a5409d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_14009d848(puVar2 + 4,param_1 + 0x20);
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar3;
  *(undefined4 *)(puVar2 + 8) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uVar5;
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 9,iVar1,0);
    memcpy((void *)puVar2[9],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  return;
}



// FUNCTION 143336150 FUN_143336150 body=205 status=ok
// SIG undefined FUN_143336150(void)

void FUN_143336150(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a5409d0;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_14009d848(puVar2 + 4,param_1 + 0x20);
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(puVar2 + 7) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar3;
  *(undefined4 *)(puVar2 + 8) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x44) = uVar5;
  puVar2[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  *(int *)(puVar2 + 10) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 9,iVar1,0);
    memcpy((void *)puVar2[9],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
  return;
}



// FUNCTION 14333621e FUN_14333621e body=245 status=ok
// SIG undefined FUN_14333621e(void)

void FUN_14333621e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _LIST_ENTRY **pp_Var7;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_149e020b0;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14a5409d0;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var2->EntryCount = 0;
  p_Var2->ContentionCount = 0;
  p_Var2->Flags = 0;
  FUN_14009d848(&p_Var2->EntryCount,param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  p_Var2[1].Type = (short)uVar3;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)uVar3 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)uVar3 >> 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var2[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var2[1].CriticalSection + 4) = uVar4;
  *(undefined4 *)&p_Var2[1].ProcessLocksList.Flink = uVar5;
  *(undefined4 *)((longlong)&p_Var2[1].ProcessLocksList.Flink + 4) = uVar6;
  p_Var2[1].ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
  DVar1 = *(DWORD *)(param_1 + 0x50);
  _Src = *(void **)(param_1 + 0x48);
  p_Var2[1].EntryCount = DVar1;
  if ((longlong)(int)DVar1 == 0) {
    p_Var2[1].ContentionCount = 0;
  }
  else {
    pp_Var7 = &p_Var2[1].ProcessLocksList.Blink;
    FUN_1446dd670(pp_Var7,DVar1,0);
    memcpy(*pp_Var7,_Src,(longlong)(int)DVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143336301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14333631e FUN_14333631e body=20 status=ok
// SIG undefined FUN_14333631e(void)

undefined1 FUN_14333631e(longlong param_1)

{
  FUN_143336332(param_1 + 0x18);
  return 1;
}



// FUNCTION 143336332 FUN_143336332 body=435 status=ok
// SIG undefined FUN_143336332(void)

void FUN_143336332(uint *param_1)

{
  uint uVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
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
       && ((plVar2 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar2 != (longlong *)0x0 && (*(uint *)(plVar2 + 2) == param_1[1])))) &&
      (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 &&
       ((plVar2 = (longlong *)*plVar2, plVar2 != (longlong *)0x0 &&
        (plVar2[0x51] == *(longlong *)(param_1 + 8))))))) &&
     (plVar2[0x52] == *(longlong *)(param_1 + 10))) {
    uVar1 = *(uint *)(plVar2 + 0x54);
    uVar4 = param_1[0xe];
    if (uVar1 == uVar4) {
      if (1 < (int)uVar1) {
        lVar3 = 0;
        while( true ) {
          uVar5 = *(ushort *)(plVar2[0x53] + lVar3);
          uVar6 = (ulonglong)uVar5;
          uVar7 = *(ushort *)(*(longlong *)(param_1 + 0xc) + lVar3);
          if (uVar5 != uVar7) break;
          if (uVar5 == 0) goto LAB_1433363e8;
LAB_1433364a1:
          lVar3 = lVar3 + 2;
        }
        if ((uVar7 | uVar5) < 0x80) {
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar8 = (ulonglong)uVar7;
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1433364a1;
        }
        if (uVar5 != uVar7) goto LAB_1433363a0;
      }
    }
    else if (uVar1 + uVar4 != 1) goto LAB_1433363a0;
LAB_1433363e8:
    if (*(longlong **)(param_1 + 2) != (longlong *)0x0 && param_1[4] != 0) {
      (**(code **)(**(longlong **)(param_1 + 2) + 0x60))();
      uVar4 = param_1[0xe];
    }
    local_50 = *(undefined8 *)(param_1 + 6);
    local_48 = param_1[8];
    uStack_44 = param_1[9];
    uStack_40 = param_1[10];
    uStack_3c = param_1[0xb];
    local_38 = (void *)0x0;
    _Src = *(void **)(param_1 + 0xc);
    local_30 = uVar4;
    if (uVar4 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,uVar4,0);
      memcpy(local_38,_Src,(longlong)(int)uVar4 * 2);
    }
    (**(code **)(*plVar2 + 0x358))(plVar2,&local_50);
  }
LAB_1433363a0:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433364e6 FUN_1433364e6 body=142 status=ok
// SIG undefined FUN_1433364e6(void)

void FUN_1433364e6(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      FUN_14090ae24(param_1 + 2);
      uVar1 = param_1[0xc];
      uVar2 = FUN_14090ae24(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x000143336568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x310))
                (plVar3,uVar2,CONCAT71((int7)((ulonglong)param_1 >> 8),(char)uVar1) & 0xffffffff,
                 *(code **)(*plVar3 + 0x310));
      return;
    }
  }
  return;
}



// FUNCTION 143336574 FUN_143336574 body=174 status=ok
// SIG undefined FUN_143336574(void)

undefined8 * FUN_143336574(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14a540a40;
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
  puVar5[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar5 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar5 + 5,iVar1,0);
    memcpy((void *)puVar5[5],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(puVar5 + 7) = *(undefined1 *)(param_1 + 0x38);
  return puVar5 + 1;
}



// FUNCTION 143336628 FUN_143336628 body=29 status=ok
// SIG undefined FUN_143336628(void)

void FUN_143336628(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143336646 FUN_143336646 body=57 status=ok
// SIG undefined FUN_143336646(void)

undefined8 * FUN_143336646(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a540a40;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143336680 FUN_143336680 body=132 status=ok
// SIG undefined FUN_143336680(void)

void FUN_143336680(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && (*(uint *)(plVar3 + 2) == param_1[1])) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
        (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
      FUN_1402d20ea(param_1 + 2);
      uVar2 = FUN_1402d20ea(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x0001433366f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x328))(plVar3,uVar2,*(code **)(*plVar3 + 0x328));
      return;
    }
  }
  return;
}



// FUNCTION 143336704 FUN_143336704 body=155 status=ok
// SIG undefined FUN_143336704(void)

undefined8 * FUN_143336704(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14a540a60;
  puVar5[1] = *(undefined8 *)(param_1 + 8);
  puVar5[2] = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar2;
  *(undefined4 *)(puVar5 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uVar4;
  puVar5[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar5 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(puVar5 + 5,iVar1,0);
    memcpy((void *)puVar5[5],_Src,(longlong)iVar1 * 2);
  }
  return puVar5 + 1;
}



// FUNCTION 1433367a6 FUN_1433367a6 body=29 status=ok
// SIG undefined FUN_1433367a6(void)

void FUN_1433367a6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433367c4 FUN_1433367c4 body=57 status=ok
// SIG undefined FUN_1433367c4(void)

undefined8 * FUN_1433367c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a540a60;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433367fe FUN_1433367fe body=48 status=ok
// SIG undefined FUN_1433367fe(void)

longlong FUN_1433367fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14776f3fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14333682e FUN_14333682e body=68 status=ok
// SIG undefined FUN_14333682e(void)

void FUN_14333682e(void)

{
  if (DAT_14cab9160 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14cab9140,DAT_14cab9148);
  if (DAT_14cab9140 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143336872 FUN_143336872 body=83 status=ok
// SIG undefined FUN_143336872(void)

undefined8 * FUN_143336872(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5422b0;
  plVar3 = (longlong *)param_1[10];
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



// FUNCTION 1433368da FUN_1433368da body=266 status=ok
// SIG undefined FUN_1433368da(void)

void FUN_1433368da(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14a542320;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a5422b0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar7 = DAT_14c950c29;
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if ((lVar3 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
    bVar7 = DAT_14c950c29;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2b) = *(undefined4 *)(param_1 + 0x2b);
  *(undefined4 *)(puVar2 + 5) = uVar1;
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar2[6] = lVar3;
  if ((lVar3 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  puVar2[8] = uVar4;
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  lVar3 = *(longlong *)(param_1 + 0x50);
  puVar2[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)((longlong)puVar2 + 100) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)((longlong)puVar2 + 0x6c) = uVar6;
  puVar2[0xb] = uVar4;
  puVar2[0xc] = uVar5;
  *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(param_1 + 0x78);
  return;
}



// FUNCTION 1433369e4 FUN_1433369e4 body=266 status=ok
// SIG undefined FUN_1433369e4(void)

void FUN_1433369e4(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14a542320;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a5422b0;
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar7 = DAT_14c950c29;
  lVar3 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar3;
  if ((lVar3 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
    bVar7 = DAT_14c950c29;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((longlong)puVar2 + 0x2b) = *(undefined4 *)(param_1 + 0x2b);
  *(undefined4 *)(puVar2 + 5) = uVar1;
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar2[6] = lVar3;
  if ((lVar3 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  puVar2[8] = uVar4;
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  lVar3 = *(longlong *)(param_1 + 0x50);
  puVar2[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x6c);
  *(undefined8 *)((longlong)puVar2 + 100) = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)((longlong)puVar2 + 0x6c) = uVar6;
  puVar2[0xb] = uVar4;
  puVar2[0xc] = uVar5;
  *(undefined4 *)(puVar2 + 0xf) = *(undefined4 *)(param_1 + 0x78);
  return;
}



// FUNCTION 143336aee FUN_143336aee body=315 status=ok
// SIG undefined FUN_143336aee(void)

void FUN_143336aee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  DWORD DVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  _LIST_ENTRY *p_Var3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 8) {
    FUN_1446efa72(param_2 + 1,0,8,0x10);
    param_2[1].LockCount = 8;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14a542320;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14a5422b0;
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x18);
  (p_Var2->ProcessLocksList).Blink = p_Var3;
  if ((p_Var3 != (_LIST_ENTRY *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar10 = DAT_14c950c29;
  lVar4 = *(longlong *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)lVar4;
  p_Var2->ContentionCount = (int)((ulonglong)lVar4 >> 0x20);
  if ((lVar4 != 0 & bVar10) == 1) {
    FUN_1456cec3c();
    bVar10 = DAT_14c950c29;
  }
  DVar1 = *(DWORD *)(param_1 + 0x28);
  *(undefined4 *)((longlong)&p_Var2->Flags + 3) = *(undefined4 *)(param_1 + 0x2b);
  p_Var2->Flags = DVar1;
  lVar4 = *(longlong *)(param_1 + 0x30);
  p_Var2[1].Type = (short)lVar4;
  p_Var2[1].CreatorBackTraceIndex = (short)((ulonglong)lVar4 >> 0x10);
  *(int *)&p_Var2[1].field_0x4 = (int)((ulonglong)lVar4 >> 0x20);
  if ((lVar4 != 0 & bVar10) == 1) {
    FUN_1456cec3c();
  }
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x40);
  p_Var2[1].CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 0x38);
  p_Var2[1].ProcessLocksList.Flink = p_Var3;
  p_Var2[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  lVar4 = *(longlong *)(param_1 + 0x50);
  p_Var2[1].EntryCount = (int)lVar4;
  p_Var2[1].ContentionCount = (int)((ulonglong)lVar4 >> 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined4 *)(param_1 + 0x68);
  uVar6 = *(undefined4 *)(param_1 + 0x6c);
  uVar7 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)&p_Var2[2].field_0x4 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)&p_Var2[2].CriticalSection = uVar5;
  *(undefined4 *)((longlong)&p_Var2[2].CriticalSection + 4) = uVar6;
  *(undefined4 *)&p_Var2[2].ProcessLocksList.Flink = uVar7;
  p_Var2[1].Flags = (int)uVar8;
  p_Var2[1].CreatorBackTraceIndexHigh = (short)((ulonglong)uVar8 >> 0x20);
  p_Var2[1].SpareWORD = (short)((ulonglong)uVar8 >> 0x30);
  p_Var2[2].Type = (short)uVar9;
  p_Var2[2].CreatorBackTraceIndex = (short)((ulonglong)uVar9 >> 0x10);
  *(int *)&p_Var2[2].field_0x4 = (int)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)&p_Var2[2].ProcessLocksList.Blink = *(undefined4 *)(param_1 + 0x78);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143336be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143336c34 FUN_143336c34 body=20 status=ok
// SIG undefined FUN_143336c34(void)

undefined1 FUN_143336c34(longlong param_1)

{
  FUN_143336c48(param_1 + 0x18);
  return 1;
}



// FUNCTION 143336c48 FUN_143336c48 body=190 status=ok
// SIG undefined FUN_143336c48(void)

int FUN_143336c48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  short sVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  
  lVar3 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    plVar6 = *(longlong **)(lVar3 + 0x38);
  }
  else {
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    plVar6 = *(longlong **)(lVar3 + 0x28);
  }
  if (plVar6 == (longlong *)0x0) {
    sVar4 = FUN_140863390(uVar5,param_1,0x3f800000);
    fVar7 = *(float *)(param_1 + 0x60);
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    sVar4 = FUN_140863390(uVar5,param_1,0x3f800000);
    fVar7 = *(float *)(param_1 + 0x60);
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
  return (int)((float)(int)sVar4 - fVar7);
}



// FUNCTION 143336d06 FUN_143336d06 body=284 status=ok
// SIG undefined FUN_143336d06(void)

longlong FUN_143336d06(longlong *param_1,longlong param_2)

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
    if (DAT_14cab8348 == 0) {
      uVar3 = FUN_140eaaf27();
      DAT_14cab8348 = FUN_140002ddd(FUN_146356751,uVar3,L"RichImageRow");
      if (DAT_14cab8348 == 0) {
        return 0;
      }
    }
    if (((*(int *)(DAT_14cab8348 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
        (param_2 != 0 &&
         *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cab8348 + 0x38) * 8)
         == DAT_14cab8348 + 0x30)) &&
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



// FUNCTION 143336e22 FUN_143336e22 body=48 status=ok
// SIG undefined FUN_143336e22(void)

longlong FUN_143336e22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14771303e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143336e52 FUN_143336e52 body=48 status=ok
// SIG undefined FUN_143336e52(void)

longlong FUN_143336e52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4d8;
  FUN_14771303e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143336e82 FUN_143336e82 body=48 status=ok
// SIG undefined FUN_143336e82(void)

longlong FUN_143336e82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_14777d418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143336eb2 FUN_143336eb2 body=48 status=ok
// SIG undefined FUN_143336eb2(void)

longlong FUN_143336eb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4d8;
  FUN_14777d418(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143336ee2 FUN_143336ee2 body=451 status=ok
// SIG undefined FUN_143336ee2(void)

undefined8 *
FUN_143336ee2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_248 [32];
  undefined8 **local_228;
  undefined8 *local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [424];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar4 = *param_4;
  plVar5 = (longlong *)param_4[1];
  if (plVar5 == (longlong *)0x0) {
    local_1e8 = *param_3;
    FUN_1417aa8de(local_1e0);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_1e8 = *param_3;
    FUN_1417aa8de(local_1e0);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  plVar3 = local_30;
  local_38 = uVar4;
  plVar7 = plVar5;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar6 = (undefined8 *)*local_30;
      local_30 = plVar5;
      (*(code *)*puVar6)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = local_30;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar7 = local_30;
      }
    }
  }
  local_30 = plVar7;
  local_218 = &local_1e8;
  local_228 = &local_218;
  FUN_1412240d2(local_210,"SObjectWidget",".\\Runtime/UMG/Private/Components/Widget.cpp",0x3cd);
  FUN_1410fb2a4(local_210,&local_1f8,local_1e0);
  *param_1 = local_1f8;
  param_1[1] = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1f0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)local_1f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1f0 + 0x10))(local_1f0);
        }
      }
    }
  }
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_208 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)local_208 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_30 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140a4ff8c(local_1e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433370c4 FUN_1433370c4 body=31 status=ok
// SIG undefined FUN_1433370c4(void)

undefined8 FUN_1433370c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143337184 FUN_143337184 body=3325 status=ok
// SIG undefined FUN_143337184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143337184(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a50d580,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a50dd50,1,0);
  ppuStack_70 = &PTR_FUN_14a50e8e0;
  local_78 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a50e900,1,0);
  DAT_14cab7858 = 0;
  _DAT_14cab7860 = 0x400000000;
  atexit((_func_5014 *)&LAB_143333860);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cab7868);
  if (cVar1 == '\0') {
    _DAT_14cab7868 = 0;
    uRam000000014cab7870 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_60,L"Text",1);
  DAT_14cab7910 = local_60;
  DAT_14cab7918 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5102a0,1,0);
  FUN_1446f470e(&local_60,L"Text",1);
  DAT_14cab79c0 = local_60;
  DAT_14cab79c8 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a511760,1,0);
  FUN_1446f470e(&local_60,L"bIsExpanded",1);
  DAT_14cab7a28 = local_60;
  DAT_14cab7a30 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a512250,1,0);
  FUN_1446f470e(&DAT_14cab7a38,L"Header",1);
  FUN_1446f470e(&DAT_14cab7a40,L"Body",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a512b40,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5137a0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a513cc0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a514420,1,0);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cab7b30 = (ulonglong)uVar2;
  FUN_1446f470e(&local_60,L"Brush",1);
  DAT_14cab7bc0 = local_60;
  DAT_14cab7bc8 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5155a0,1,0);
  FUN_1446f470e(&local_60,L"SelectedKey",1);
  DAT_14cab7c38 = local_60;
  DAT_14cab7c40 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a516610,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a516d30,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a519910,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51adb0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51bdf0,1,0);
  FUN_1446f470e(&local_60,L"Text",1);
  DAT_14cab7f40 = local_60;
  DAT_14cab7f48 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51cf30,1,0);
  FUN_1446f470e(&local_60,L"Text",1);
  DAT_14cab7fd8 = local_60;
  DAT_14cab7fe0 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51de00,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51e240,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51e5c0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51e9b0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51f040,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51f6b0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a51fb40,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5208c0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a520c70,1,0);
  local_60 = (char *)CONCAT44(local_60._4_4_,0xffffffff);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cab8148,L"umg.MaxPostBufferBlurStrength",&local_60,
                L"Limits post buffer blur strength. -1 = unlimited\r\n");
  atexit(FUN_143334659);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a521860,2,&PTR_FUN_14a521830);
  FUN_1446f470e(&local_60,L"Percent",1);
  DAT_14cab81d8 = local_60;
  DAT_14cab81e0 = 3;
  FUN_1446f470e(&local_60,L"bIsMarquee",1);
  DAT_14cab81e8 = local_60;
  DAT_14cab81f0 = 4;
  FUN_1446f470e(&local_60,L"FillColorAndOpacity",1);
  _DAT_14cab81f8 = local_60;
  _DAT_14cab8200 = 5;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a522230,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a522d70,1,0);
  local_60 = "Texture";
  local_58 = 7;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cab8250 = (ulonglong)uVar2;
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5247a0,1,&PTR_FUN_14a524770);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a524b70,1,0);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a525020,1,&PTR_FUN_14a524ff0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a525750,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a525c80,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5264e0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a526af0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5271d0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a529390,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a529a30,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a52adf0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a52b450,1,0);
  FUN_1446f470e(&local_60,L"Value",1);
  DAT_14cab8690 = local_60;
  DAT_14cab8698 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a52c7b0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a52ccb0,1,0);
  FUN_1446f470e(&local_60,L"Value",1);
  DAT_14cab87a8 = local_60;
  DAT_14cab87b0 = 3;
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a52eae0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a52f1b0,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a52f660,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a530ae0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a531610,1,&PTR_FUN_14a5315e0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a531ec0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a532a50,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a533450,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a533d60,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5344a0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5349c0,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a535120,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a535d80,1,0);
  local_68 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a536320,1,0);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14a53ac20;
  local_78 = 0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a53ac40,1,0);
  DAT_14cab8da0 = 0;
  _DAT_14cab8da8 = 0;
  atexit((_func_5014 *)&LAB_143334ea7);
  FUN_1446f470e(&local_60,L"ToolTipText",1);
  DAT_14cab8db0 = local_60;
  DAT_14cab8db8 = 0;
  FUN_1446f470e(&local_60,L"Visibility",1);
  DAT_14cab8dc0 = local_60;
  DAT_14cab8dc8 = 1;
  FUN_1446f470e(&local_60,L"bIsEnabled",1);
  DAT_14cab8dd0 = local_60;
  DAT_14cab8dd8 = 2;
  ppuStack_70 = &PTR_FUN_14a53ea70;
  local_78 = 1;
  local_68 = 6;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a53eb60,1,&PTR_FUN_14a53eb30);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab8fd0,L"WidgetComponent.MaximumRenderTargetWidth",&DAT_14c761068,
                L"Sets the maximum width of the render target used by a Widget Component.");
  atexit(FUN_143335233);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab8fe0,L"WidgetComponent.MaximumRenderTargetHeight",&DAT_14c76106c,
                L"Sets the maximum height of the render target used by a Widget Component.");
  atexit(FUN_143335278);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab8ff0,L"WidgetComponent.UseAutomaticTickModeByDefault",&DAT_14cab9000,
                L"Sets to true to Disable Tick by default on Widget Components when set to false, the tick will enabled by default."
               );
  atexit(FUN_1433352bd);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143337e84 FUN_143337e84 body=55 status=ok
// SIG undefined FUN_143337e84(void)

void FUN_143337e84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab9188 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab9188 = FUN_14171c317(FUN_14635aa69,uVar1,L"EWidgetInteractionSource");
  }
  return;
}



// FUNCTION 143337ebc FUN_143337ebc body=4832 status=ok
// SIG undefined FUN_143337ebc(void)

void * FUN_143337ebc(longlong *param_1,void *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  char cVar16;
  uint uVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  void *_Src;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  void *pvVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_668 [32];
  code **local_648;
  uint local_640;
  char **local_638;
  undefined1 *local_630;
  wchar_t *local_628;
  longlong *local_620;
  undefined1 *local_618;
  code **local_610;
  undefined1 *local_608;
  undefined1 *local_600;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined8 local_5d8;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_5b8;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  double local_598;
  undefined8 local_588;
  undefined8 uStack_580;
  double local_578;
  double local_568;
  double local_560;
  longlong local_558;
  undefined8 uStack_550;
  undefined1 local_548 [12];
  undefined4 uStack_53c;
  double local_538;
  void *local_528;
  undefined8 uStack_520;
  undefined1 local_509;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  double local_4f8;
  code *local_4e8;
  double dStack_4e0;
  double local_4d8;
  undefined1 local_4c1;
  char *local_4c0;
  undefined8 uStack_4b8;
  undefined1 local_4b0;
  undefined2 uStack_4af;
  undefined1 uStack_4ad;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  uint uStack_4a0;
  undefined4 uStack_49c;
  ushort local_498;
  undefined1 local_490 [32];
  undefined1 *local_470;
  undefined8 local_468;
  longlong local_450;
  undefined8 local_448;
  undefined8 *local_398;
  undefined4 local_390;
  undefined1 local_388;
  undefined8 local_380;
  longlong *local_378;
  longlong local_370;
  undefined4 local_368;
  undefined1 local_360 [4];
  undefined4 local_35c;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined4 local_2bc;
  undefined4 local_290;
  uint local_288;
  int local_284;
  undefined8 local_260;
  undefined8 uStack_258;
  longlong *local_250;
  undefined1 local_248;
  undefined1 local_240 [288];
  undefined1 *local_120;
  ulonglong local_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong *plStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  byte local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_668;
  memset(local_360,0,0x100);
  local_290 = 0xffffffff;
  local_35c = 0x3f800000;
  local_2bc = 0xffffffff;
  local_260 = DAT_14c8463f0;
  uStack_258 = DAT_14c8463f8;
  local_250 = (longlong *)0x0;
  local_248 = DAT_14c96b238;
  local_120 = (undefined1 *)0x0;
  local_118 = 0x400000000;
  local_110 = 0;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_d8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_d0 = DAT_14c8464f0;
  local_b8 = DAT_14c8464f0;
  local_c8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_c0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_528 = (void *)0x0;
  uStack_520 = 0;
  local_538 = DAT_14c8464f0;
  local_548._4_4_ = DAT_14c8464e0._4_4_;
  local_548._0_4_ = (undefined4)DAT_14c8464e0;
  local_548._8_4_ = (undefined4)DAT_14c8464e8;
  uStack_53c = DAT_14c8464e8._4_4_;
  bVar3 = *(byte *)(param_1 + 0x5b);
  if (bVar3 - 1 < 2) {
    local_558 = 0;
    uStack_550 = 0;
    FUN_14778549c(param_1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caba850) && (FUN_144b3d300(), DAT_14caba850 == -1)) {
      local_4c0 = "WidgetInteractionComponentTrace";
      uStack_4b8 = CONCAT35(uStack_4b8._5_3_,0x1f);
      uVar17 = FUN_14001a6c0(&local_4c0,1);
      DAT_14caba848 = (char *)(ulonglong)uVar17;
      _Init_thread_footer();
    }
    lVar22 = local_558;
    uStack_49c = 0;
    uStack_4b8 = 0;
    local_498 = 0x101;
    local_470 = (undefined1 *)0x0;
    local_468 = 0x800000000;
    local_450 = 0;
    local_448 = 0x400000000;
    local_4b0 = 0;
    uStack_4a4 = 0;
    local_4c0 = DAT_14caba848;
    uStack_4af = 1;
    uStack_4ad = 0;
    uStack_4a0 = uStack_4a0 & 0xffffff00;
    uStack_4ac = 0x1000000;
    local_4a8 = CONCAT31(local_4a8._1_3_,1);
    lVar20 = (longlong)(int)uStack_550;
    if (lVar20 != 0) {
      lVar25 = 0;
      do {
        plVar19 = *(longlong **)(lVar22 + lVar25);
        if (((plVar19 != (longlong *)0x0) &&
            (uVar17 = (**(code **)(*plVar19 + 0x570))(plVar19), uVar17 < 6)) &&
           ((0x2aU >> (uVar17 & 0x1f) & 1) != 0)) {
          local_5ec = *(undefined4 *)((longlong)plVar19 + 0xc);
          lVar24 = (longlong)(int)local_468;
          uVar17 = (int)local_468 + 1;
          local_468 = CONCAT44(local_468._4_4_,uVar17);
          if (local_468._4_4_ < uVar17) {
            FUN_140694806(local_490);
          }
          puVar18 = local_470;
          if (local_470 == (undefined1 *)0x0) {
            puVar18 = local_490;
          }
          *(undefined4 *)(puVar18 + lVar24 * 4) = local_5ec;
          local_498 = local_498 & 0xff;
        }
        lVar25 = lVar25 + 8;
      } while (lVar20 * 8 != lVar25);
    }
    lVar22 = param_1[0x16];
    if (((lVar22 == 0) && (lVar22 = FUN_1448abda6(param_1), lVar22 == 0)) ||
       (lVar22 = FUN_140636ec6(lVar22), lVar22 == 0)) {
      memset(param_2,0,0x100);
      *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
      *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
      *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
      uVar11 = DAT_14c8463f8;
      *(undefined8 *)((longlong)param_2 + 0x100) = DAT_14c8463f0;
      *(undefined8 *)((longlong)param_2 + 0x108) = uVar11;
      *(undefined8 *)((longlong)param_2 + 0x110) = 0;
      *(undefined1 *)((longlong)param_2 + 0x118) = DAT_14c96b238;
      *(undefined8 *)((longlong)param_2 + 0x240) = 0;
      *(undefined8 *)((longlong)param_2 + 0x248) = 0x400000000;
      *(undefined1 *)((longlong)param_2 + 0x250) = 0;
      *(undefined1 *)((longlong)param_2 + 0x278) = 0;
      *(undefined8 *)((longlong)param_2 + 0x268) = 0;
      *(undefined8 *)((longlong)param_2 + 0x270) = 0;
      *(undefined8 *)((longlong)param_2 + 600) = 0;
      *(undefined8 *)((longlong)param_2 + 0x260) = 0;
      *(double *)((longlong)param_2 + 0x290) = DAT_14c8464f0;
      uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *(ulonglong *)((longlong)param_2 + 0x280) =
           CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(undefined8 *)((longlong)param_2 + 0x288) = uVar11;
      uVar14 = DAT_14c8464e8._4_4_;
      uVar13 = (undefined4)DAT_14c8464e8;
      uVar4 = DAT_14c8464e0._4_4_;
      *(undefined4 *)((longlong)param_2 + 0x298) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 0x29c) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x2a0) = uVar13;
      *(undefined4 *)((longlong)param_2 + 0x2a4) = uVar14;
      *(double *)((longlong)param_2 + 0x2a8) = DAT_14c8464f0;
      bVar12 = true;
    }
    else {
      lVar20 = *(longlong *)(lVar22 + 0x430);
      if (lVar20 != 0) {
        if (DAT_14cae9568 == 0) {
          local_610 = &local_4e8;
          local_4e8 = FUN_1417de738;
          local_600 = &LAB_145893408;
          local_608 = &LAB_1458cbbd2;
          local_618 = &LAB_147ba21f1;
          local_620 = (longlong *)&LAB_1463e9233;
          local_628 = L"Engine";
          local_630 = (undefined1 *)0x0;
          local_638 = (char **)CONCAT44(local_638._4_4_,0x1000000c);
          local_640 = 8;
          local_648 = (code **)CONCAT44(local_648._4_4_,0x2b8);
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
          lVar20 = *(longlong *)(lVar22 + 0x430);
          if (lVar20 == 0) goto LAB_143338ac7;
        }
        bVar12 = false;
        if ((DAT_14cae9568 == 0) ||
           (lVar25 = *(longlong *)(lVar20 + 0x10), bVar12 = false, lVar25 == 0)) goto LAB_143338ac9;
        if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar25 + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
             DAT_14cae9568 + 0x30 &&
            (plVar19 = *(longlong **)(lVar20 + 0x78), plVar19 != (longlong *)0x0)))) {
          if ((char)param_1[0x5b] == '\x01') {
            cVar16 = (**(code **)(*plVar19 + 0x338))(plVar19,&local_568);
            if ((cVar16 != '\0') &&
               (cVar16 = FUN_147ab7a10(lVar22,&local_568,&local_588,local_548), cVar16 != '\0')) {
              local_d0 = local_578;
              local_e0 = local_588;
              uStack_d8 = uStack_580;
              dVar27 = (double)*(float *)((longlong)param_1 + 0x2d4);
              local_b8 = local_538 * dVar27 + local_578;
              uStack_c0 = stack0xfffffffffffffac0 * dVar27 + uStack_580;
              local_c8 = (code *)(dVar27 * (double)local_548._0_8_ + local_588);
              lVar22 = param_1[0x16];
              if (lVar22 == 0) {
                lVar22 = FUN_1448abda6(param_1);
              }
              bVar3 = *(byte *)(param_1 + 0x5a);
              local_4e8 = local_c8;
              dStack_4e0 = uStack_c0;
              local_4d8 = local_b8;
              local_508 = (undefined4)local_e0;
              uStack_504 = local_e0._4_4_;
              uStack_500 = (undefined4)uStack_d8;
              uStack_4fc = uStack_d8._4_4_;
              local_4f8 = local_d0;
LAB_143338e7b:
              local_620 = (longlong *)&local_4c1;
              local_638 = &local_4c0;
              local_640 = (uint)bVar3;
              local_648 = &local_4e8;
              local_628 = (wchar_t *)&DAT_14cad0f08;
              local_630 = &DAT_14cad0f10;
              FUN_1401e2596(lVar22,&local_528,&local_509);
            }
          }
          else if ((char)param_1[0x5b] == '\x02') {
            FUN_14039c14e(plVar19,&local_568);
            dStack_4e0 = local_560 * 0.5;
            local_4e8 = (code *)(local_568 * 0.5);
            cVar16 = FUN_147ab7a10(lVar22,&local_4e8,&local_588,local_548);
            if (cVar16 != '\0') {
              local_d0 = local_578;
              local_e0 = local_588;
              uStack_d8 = uStack_580;
              dVar27 = (double)*(float *)((longlong)param_1 + 0x2d4);
              local_4d8 = local_538 * dVar27 + local_578;
              dVar26 = stack0xfffffffffffffac0 * dVar27 + uStack_580;
              pcVar5 = (code *)(dVar27 * (double)local_548._0_8_ + local_588);
              lVar22 = param_1[0x16];
              local_c8 = pcVar5;
              uStack_c0 = dVar26;
              local_b8 = local_4d8;
              if (lVar22 == 0) {
                lVar22 = FUN_1448abda6(param_1);
                dVar27 = (double)*(float *)((longlong)param_1 + 0x2d4);
                local_4d8 = local_538 * dVar27 + local_578;
                dVar26 = stack0xfffffffffffffac0 * dVar27 + uStack_580;
                pcVar5 = (code *)(dVar27 * (double)local_548._0_8_ + local_588);
              }
              bVar3 = *(byte *)(param_1 + 0x5a);
              local_508 = (undefined4)local_588;
              uStack_504 = local_588._4_4_;
              uStack_500 = (int)uStack_580;
              uStack_4fc = uStack_580._4_4_;
              local_4f8 = local_578;
              local_4e8 = pcVar5;
              dStack_4e0 = dVar26;
              goto LAB_143338e7b;
            }
          }
        }
      }
LAB_143338ac7:
      bVar12 = false;
    }
LAB_143338ac9:
    if (local_450 != 0) {
      FUN_1400020a8();
    }
    if (local_470 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_558 != 0) {
      FUN_1400020a8();
    }
    if (bVar12) goto LAB_143338b08;
LAB_143338872:
    if ((char)param_1[0x5b] != '\x03') {
      if ((longlong)(int)uStack_520 != 0) {
        pvVar23 = (void *)((longlong)(int)uStack_520 * 0x100 + (longlong)local_528);
        _Src = local_528;
        do {
          if (((((*(int *)((longlong)_Src + 0xdc) == 0) ||
                (uVar17 = *(uint *)((longlong)_Src + 0xd8), (int)uVar17 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar17 ||
                ((plVar19 = (longlong *)
                            ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
                 plVar19 == (longlong *)0x0 || ((int)plVar19[2] != *(int *)((longlong)_Src + 0xdc)))
                )))) || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) ||
             (plVar19 = (longlong *)*plVar19, plVar19 == (longlong *)0x0)) {
LAB_143338a3e:
            if ((*(byte *)((longlong)_Src + 0xad) & 1) != 0) break;
          }
          else {
            lVar22 = FUN_14587db9c();
            if ((*(int *)(plVar19[2] + 0x38) < *(int *)(lVar22 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) !=
                lVar22 + 0x30)) goto LAB_143338a3e;
            cVar16 = (**(code **)(*plVar19 + 0x4e8))(plVar19);
            if (cVar16 != '\0') {
              local_e8 = 1;
              memcpy(local_360,_Src,0x100);
              break;
            }
          }
          _Src = (void *)((longlong)_Src + 0x100);
        } while (_Src != pvVar23);
      }
    }
  }
  else {
    if (bVar3 == 3) {
      local_538 = (double)param_1[0x81] - (double)param_1[0x7e];
      register0x00001280 = (double)param_1[0x80] - (double)param_1[0x7d];
      local_548._0_8_ = (double)param_1[0x7f] - (double)param_1[0x7c];
      dVar27 = local_538 * local_538 +
               (double)local_548._0_8_ * (double)local_548._0_8_ +
               register0x00001280 * register0x00001280;
      if ((dVar27 != 1.0) || (NAN(dVar27))) {
        if (9.99999993922529e-09 <= dVar27) {
          dVar27 = 1.0 / SQRT(dVar27);
          local_538 = local_538 * dVar27;
          register0x00001280 = register0x00001280 * dVar27;
          local_548._0_8_ = (double)local_548._0_8_ * dVar27;
        }
        else {
          local_548._0_8_ = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          unique0x100017dd = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_538 = DAT_14c8464f0;
        }
      }
      memcpy(local_360,param_1 + 0x6e,0x100);
      local_e8 = *(byte *)((longlong)param_1 + 0x41d) & 1;
      local_d0 = (double)param_1[0x7e];
      local_e0 = (double)param_1[0x7c];
      uStack_d8 = (double)param_1[0x7d];
      local_c8 = (code *)param_1[0x7f];
      uStack_c0 = (double)param_1[0x80];
      local_b8 = (double)param_1[0x81];
      goto LAB_143338872;
    }
    if (bVar3 == 0) {
      dVar6 = (double)param_1[0x48];
      dVar7 = (double)param_1[0x49];
      dVar8 = (double)param_1[0x4a];
      dVar9 = (double)param_1[0x4c];
      dVar10 = (double)param_1[0x4d];
      dVar27 = (double)param_1[0x4e];
      dVar26 = (double)param_1[0x4b];
      dVar28 = dVar6 * 0.0 - dVar7 * 1.0;
      dVar29 = dVar7 * 0.0 - dVar8 * 0.0;
      dVar30 = dVar8 * 1.0 - dVar6 * 0.0;
      dVar29 = dVar29 + dVar29;
      dVar30 = dVar30 + dVar30;
      dVar28 = dVar28 + dVar28;
      local_538 = dVar28 * dVar26 + 0.0 + (dVar30 * dVar6 - dVar29 * dVar7);
      dVar6 = (dVar8 * dVar29 - dVar6 * dVar28) + (double)param_1[0x4b] * dVar30 + 0.0;
      local_548._8_4_ = SUB84(dVar6,0);
      local_548._0_8_ = (dVar28 * dVar7 - dVar30 * dVar8) + dVar26 * dVar29 + 1.0;
      uStack_53c = (int)((ulonglong)dVar6 >> 0x20);
      local_588 = 0.0;
      uStack_580 = 0.0;
      FUN_14778549c(param_1);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14caba840) && (FUN_144b3d300(), DAT_14caba840 == -1)) {
        local_4c0 = "WidgetInteractionComponentTrace";
        uStack_4b8 = CONCAT35(uStack_4b8._5_3_,0x1f);
        uVar17 = FUN_14001a6c0(&local_4c0,1);
        DAT_14caba838 = (char *)(ulonglong)uVar17;
        _Init_thread_footer();
      }
      dVar26 = local_588;
      uStack_49c = 0;
      uStack_4b8 = 0;
      local_498 = 0x101;
      local_470 = (undefined1 *)0x0;
      local_468 = 0x800000000;
      local_450 = 0;
      local_448 = 0x400000000;
      local_4b0 = 0;
      uStack_4a4 = 0;
      local_4c0 = DAT_14caba838;
      uStack_4af = 1;
      uStack_4ad = 0;
      uStack_4a0 = uStack_4a0 & 0xffffff00;
      uStack_4ac = 0x1000000;
      local_4a8 = CONCAT31(local_4a8._1_3_,1);
      lVar22 = (longlong)(int)uStack_580;
      if (lVar22 != 0) {
        lVar20 = 0;
        do {
          plVar19 = *(longlong **)((longlong)dVar26 + lVar20);
          if (((plVar19 != (longlong *)0x0) &&
              (uVar17 = (**(code **)(*plVar19 + 0x570))(plVar19), uVar15 = local_468, uVar17 < 6))
             && ((0x2aU >> (uVar17 & 0x1f) & 1) != 0)) {
            uVar4 = *(undefined4 *)((longlong)plVar19 + 0xc);
            lVar25 = (longlong)(int)local_468;
            uVar17 = (int)local_468 + 1;
            local_468 = CONCAT44(local_468._4_4_,uVar17);
            if (local_468._4_4_ < uVar17) {
              FUN_140694806(local_490,uVar15 & 0xffffffff);
            }
            puVar18 = local_470;
            if (local_470 == (undefined1 *)0x0) {
              puVar18 = local_490;
            }
            *(undefined4 *)(puVar18 + lVar25 * 4) = uVar4;
            local_498 = local_498 & 0xff;
          }
          lVar20 = lVar20 + 8;
        } while (lVar22 * 8 != lVar20);
      }
      dVar26 = (double)*(float *)((longlong)param_1 + 0x2d4);
      local_b8 = local_538 * dVar26 + dVar27;
      uStack_c0 = dVar10 + stack0xfffffffffffffac0 * dVar26;
      local_c8 = (code *)(dVar26 * (double)local_548._0_8_ + dVar9);
      lVar22 = param_1[0x16];
      local_e0 = dVar9;
      uStack_d8 = dVar10;
      local_d0 = dVar27;
      if (lVar22 == 0) {
        lVar22 = FUN_1448abda6(param_1);
      }
      local_648 = &local_4e8;
      local_4e8 = local_c8;
      dStack_4e0 = uStack_c0;
      local_4d8 = local_b8;
      local_508 = (undefined4)local_e0;
      uStack_504 = local_e0._4_4_;
      uStack_500 = (undefined4)uStack_d8;
      uStack_4fc = uStack_d8._4_4_;
      local_4f8 = local_d0;
      local_620 = &local_558;
      local_628 = (wchar_t *)&DAT_14cad0f08;
      local_630 = &DAT_14cad0f10;
      local_638 = &local_4c0;
      local_640 = (uint)*(byte *)(param_1 + 0x5a);
      FUN_1401e2596(lVar22,&local_528,&local_568);
      if (local_450 != 0) {
        FUN_1400020a8();
      }
      if (local_470 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_588 != 0.0) {
        FUN_1400020a8();
      }
      goto LAB_143338872;
    }
  }
  if (local_e8 == 1) {
    if (((((local_284 != 0) && (-1 < (int)local_288)) && ((int)local_288 < DAT_14c9647dc)) &&
        ((plVar19 = (longlong *)
                    ((ulonglong)((local_288 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_288 >> 0x10) * 8)),
         plVar19 != (longlong *)0x0 && ((int)plVar19[2] == local_284)))) &&
       (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
        (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)))) {
      lVar22 = FUN_14587db9c();
      if ((*(int *)(lVar22 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8) ==
          lVar22 + 0x30)) {
        local_250 = plVar19;
        if ((char)plVar19[0xe5] == '\x01') {
          local_5a8 = local_548._0_8_;
          uStack_5a0 = stack0xfffffffffffffac0;
          local_598 = local_538;
          local_5c8 = (undefined4)local_338;
          uStack_5c4 = local_338._4_4_;
          uStack_5c0 = (undefined4)uStack_330;
          uStack_5bc = uStack_330._4_4_;
          local_5b8 = local_328;
          FUN_147761284(plVar19,&local_4c0);
          local_328 = CONCAT44(uStack_4ac,CONCAT13(uStack_4ad,CONCAT21(uStack_4af,local_4b0)));
          local_338 = local_4c0;
          uStack_330 = uStack_4b8;
          local_260 = CONCAT44(uStack_4a4,local_4a8);
          uStack_258 = CONCAT44(uStack_49c,uStack_4a0);
        }
        else {
          local_5d8 = local_328;
          local_5e8 = (undefined4)local_338;
          uStack_5e4 = local_338._4_4_;
          uStack_5e0 = (undefined4)uStack_330;
          uStack_5dc = uStack_330._4_4_;
          (**(code **)(*plVar19 + 0xa98))(plVar19,&local_5e8,&local_260);
        }
        (**(code **)(*param_1 + 0x610))(param_1,&local_4c0,local_360);
        local_248 = local_4c0._0_1_;
        FUN_1400e223c(local_240,&uStack_4b8);
        plVar1 = plStack_100;
        plVar19 = local_378;
        local_110 = local_388;
        local_108 = local_380;
        local_380 = 0;
        if (local_378 != plStack_100) {
          local_378 = (longlong *)0x0;
          plStack_100 = plVar19;
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar1 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar1)(plVar1);
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
        FUN_1400e21ec(&local_f8,&local_370);
        FUN_1447fa2ac(local_370,local_368);
        if (local_370 != 0) {
          FUN_1400020a8();
        }
        plVar19 = local_378;
        if (local_378 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_378 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_378)(local_378);
            LOCK();
            piVar2 = (int *)((longlong)plVar19 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        puVar21 = &uStack_4b8;
        if (local_398 != (undefined8 *)0x0) {
          puVar21 = local_398;
        }
        FUN_1447157bd(puVar21,local_390);
        if (local_398 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1433389cd;
      }
    }
    local_250 = (longlong *)0x0;
  }
LAB_1433389cd:
  FUN_1477855ec(param_2,local_360);
LAB_143338b08:
  if (local_528 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447fa2ac(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  plVar19 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  puVar18 = local_120;
  if (local_120 == (undefined1 *)0x0) {
    puVar18 = local_240;
  }
  FUN_1447157bd(puVar18,local_118 & 0xffffffff);
  if (local_120 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14333919d FUN_14333919d body=69 status=ok
// SIG undefined FUN_14333919d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333919d(void)

{
  _DAT_14cab92e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433391df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab92f0,1);
  return;
}



// FUNCTION 1433391e2 FUN_1433391e2 body=55 status=ok
// SIG undefined FUN_1433391e2(void)

void FUN_1433391e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab93b8 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab93b8 = FUN_14171c317(FUN_14635b776,uVar1,L"EDragPivot");
  }
  return;
}



// FUNCTION 14333921a FUN_14333921a body=265 status=ok
// SIG undefined FUN_14333921a(void)

void FUN_14333921a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  DWORD DVar2;
  DWORD dwTlsIndex;
  DWORD DVar3;
  LPVOID lpTlsValue;
  longlong lVar4;
  bool bVar5;
  
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      dwTlsIndex = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar3 = 0xffffffff;
        LOCK();
        bVar5 = DAT_14c75ec34 != 0xffffffff;
        DVar2 = dwTlsIndex;
        if (bVar5) {
          DVar3 = DAT_14c75ec34;
          DVar2 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar2;
        UNLOCK();
        if (bVar5) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar3;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      if (*(char *)((longlong)lpTlsValue + 0x20) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001433392c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x358))
                  (*(longlong **)(param_1 + 0x278),param_2,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143339324 FUN_143339324 body=371 status=ok
// SIG undefined FUN_143339324(void)

ulonglong FUN_143339324(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  uint uVar1;
  DWORD DVar2;
  uint uVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar3 = FUN_1400c0302(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar5 = (ulonglong)uVar3;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
      dwTlsIndex = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar4 = 0xffffffff;
        LOCK();
        bVar7 = DAT_14c75ec34 != 0xffffffff;
        DVar2 = dwTlsIndex;
        if (bVar7) {
          DVar4 = DAT_14c75ec34;
          DVar2 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar2;
        UNLOCK();
        if (bVar7) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar4;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      if (*(char *)((longlong)lpTlsValue + 0x20) == '\0') {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x360))
                          (*(longlong **)(param_1 + 0x278),param_2,param_3,param_4,param_5,uVar3,
                           param_7,param_8);
      }
    }
  }
  return uVar5;
}



// FUNCTION 143339498 FUN_143339498 body=1504 status=ok
// SIG undefined FUN_143339498(void)

void FUN_143339498(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  byte bVar15;
  undefined8 unaff_R15;
  undefined1 local_1a8 [32];
  longlong *local_188;
  uint local_17c;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined1 local_154;
  longlong local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8 [19];
  ulonglong uVar16;
  
  local_d8[0xf] = DAT_14c707940 ^ (ulonglong)local_1a8;
  lVar7 = FUN_1410f9d84();
  if (lVar7 != 0) {
    local_d8[0xc] = 0;
    local_d8[0xd] = 0;
    local_d8[10] = 0;
    local_d8[0xb] = 0;
    local_d8[8] = 0;
    local_d8[9] = 0;
    local_d8[6] = 0;
    local_d8[7] = 0;
    local_d8[4] = 0;
    local_d8[5] = 0;
    local_d8[2] = 0;
    local_d8[3] = 0;
    local_d8[0] = 0;
    local_d8[1] = 0;
    local_d8[0xe] = 0;
    bVar15 = *(byte *)((longlong)param_3 + 0x6c) & *(byte *)(param_1 + 10);
    uVar16 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),bVar15);
    if (bVar15 != 0) {
      local_178 = param_1 + 0x48;
      local_168 = param_2 + 0x218;
      local_170 = param_2 + 0x230;
      lVar14 = 0;
      do {
        bVar15 = -(char)(uVar16 & 0xffffffff) & (byte)uVar16;
        uVar13 = CONCAT71((int7)((uVar16 & 0xffffffff) >> 8),bVar15);
        lVar8 = FUN_14750d8e0(lVar7,uVar13);
        if (lVar8 != 0) {
          FUN_14750ba7a(&local_108,uVar13);
          if ((local_108 != 0) && (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44))) {
            lVar9 = *(longlong *)(param_1 + 0x50);
            if (*(longlong *)(param_1 + 0x50) == 0) {
              lVar9 = local_178;
            }
            iVar4 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uint)bVar15) * 4);
            if (iVar4 != -1) {
              do {
                lVar9 = *(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x20;
                if (*(byte *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 0x20) == bVar15) {
                  if ((lVar9 + 8U & 0xfffffffffffffff7) != 0) {
                    plVar10 = *(longlong **)(lVar9 + 8);
                    local_188 = *(longlong **)(lVar9 + 0x10);
                    if (local_188 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(local_188 + 1) = (int)local_188[1] + 1;
                      UNLOCK();
                    }
                    if (plVar10 == (longlong *)0x0) {
LAB_143339671:
                      bVar3 = true;
                    }
                    else {
                      local_e8 = local_108;
                      local_e0 = uStack_100;
                      if (uStack_100 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(uStack_100 + 1) = (int)uStack_100[1] + 1;
                        UNLOCK();
                      }
                      (**(code **)(*plVar10 + 8))(plVar10,&local_e8);
                      if ((char)plVar10[3] == '\0') goto LAB_143339671;
                      bVar3 = false;
                    }
                    if (local_188 != (longlong *)0x0) {
                      LOCK();
                      plVar10 = local_188 + 1;
                      *(int *)plVar10 = (int)*plVar10 + -1;
                      UNLOCK();
                      if ((int)*plVar10 == 0) {
                        (**(code **)*local_188)(local_188);
                        LOCK();
                        piVar1 = (int *)((longlong)local_188 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*local_188 + 0x10))();
                        }
                      }
                    }
                    if (!bVar3) goto LAB_14333985d;
                  }
                  break;
                }
                iVar4 = *(int *)(lVar9 + 0x18);
              } while (iVar4 != -1);
            }
          }
          local_188 = *(longlong **)(*(longlong *)(lVar8 + 0x128) + 0x10);
          uVar5 = ((uint)((ulonglong)local_188 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_188 >> 4)
                  ) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          uVar6 = uVar5 & 0x7fffffff ^ uVar5 >> 0x10;
          uVar5 = *(uint *)(param_2 + 0x248);
          uVar12 = uVar6 & uVar5;
          lVar8 = *(longlong *)(param_2 + 0x238);
          if (*(longlong *)(param_2 + 0x238) == 0) {
            lVar8 = local_170;
          }
          lVar9 = *(longlong *)(param_2 + 0x220);
          if (*(longlong *)(param_2 + 0x220) == 0) {
            lVar9 = local_168;
          }
          do {
            if (*(uint *)(lVar8 + (longlong)(int)uVar12 * 4) == uVar6) {
              iVar4 = *(int *)(lVar9 + (longlong)(int)uVar12 * 4);
              lVar11 = (longlong)iVar4 * 0x10;
              local_17c = uVar5;
              if (*(longlong **)(*(longlong *)(param_2 + 0x1d8) + lVar11) == local_188) {
                if (((iVar4 != -1) &&
                    (plVar10 = (longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar11 + 8),
                    plVar10 != (longlong *)0x0)) && (lVar8 = *plVar10, lVar8 != 0))
                goto LAB_1433397ae;
                break;
              }
            }
            uVar12 = uVar12 + 1 & uVar5;
          } while (uVar12 != (*(int *)(param_2 + 0x24c) + uVar6 + 1 & uVar5));
          FUN_1447ec05f(&local_120,local_188,L"SlatePostProcessTexture");
          lVar8 = FUN_14473c272(param_2,&local_120,0);
          if (local_120 != (longlong *)0x0) {
            (**(code **)(*local_120 + 0x38))();
          }
LAB_1433397ae:
          plVar2 = uStack_100;
          lVar9 = local_108;
          local_108 = 0;
          uStack_100 = (longlong *)0x0;
          local_d8[lVar14 * 3] = lVar8;
          local_d8[lVar14 * 3 + 1] = lVar9;
          plVar10 = (longlong *)local_d8[lVar14 * 3 + 2];
          if (plVar2 == plVar10) {
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar2 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar2)(plVar2);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar4 = *piVar1;
                UNLOCK();
                plVar10 = plVar2;
                goto joined_r0x000143339843;
              }
            }
          }
          else {
            local_d8[lVar14 * 3 + 2] = (longlong)plVar2;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar10 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar4 = *piVar1;
                UNLOCK();
joined_r0x000143339843:
                if (iVar4 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10,lVar8);
                }
              }
            }
          }
          FUN_14022b18a(param_2,lVar8);
LAB_14333985d:
          plVar10 = uStack_100;
          if (uStack_100 != (longlong *)0x0) {
            LOCK();
            plVar2 = uStack_100 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*uStack_100)(uStack_100);
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
        lVar14 = lVar14 + 1;
        iVar4 = (int)uVar16 + -1;
        bVar15 = (byte)iVar4 & (byte)uVar16;
        uVar16 = (ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),bVar15);
      } while (bVar15 != 0);
    }
    local_f8 = param_3[2];
    local_108 = *param_3;
    uStack_100 = (longlong *)param_3[1];
    lVar7 = 8;
    do {
      plVar10 = *(longlong **)((longlong)&local_e0 + lVar7);
      if (plVar10 != (longlong *)0x0) {
        local_118 = 0;
        local_110 = *(undefined8 *)((longlong)plVar10 + 0x84);
        plVar2 = *(longlong **)((longlong)local_d8 + lVar7);
        local_120 = plVar10;
        if (plVar2 == (longlong *)0x0) {
          local_130 = 0;
          local_150 = local_108;
          local_148 = (undefined4)uStack_100;
          uStack_144 = uStack_100._4_4_;
          uStack_140 = (undefined4)local_f8;
          uStack_13c = local_f8._4_4_;
          local_160 = DAT_14c760db4;
          local_15c = 0x1ffffffff;
          local_138 = plVar10;
          local_128 = local_110;
          local_154 = FUN_1448072cd();
          FUN_14750d4ae(param_2,&local_160,&local_150,&local_138);
        }
        else {
          (**(code **)(*plVar2 + 0x10))(plVar2,param_2,&local_108,&local_120);
        }
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0x80);
    lVar7 = 0;
    do {
      lVar14 = *(longlong *)((longlong)local_d8 + lVar7);
      if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0x20) & 0xc) == 0)) {
        if ((*(byte *)(lVar14 + 0x20) & 0x10) != 0) {
          FUN_140069376(param_2);
        }
        iVar4 = *(int *)(param_2 + 0x5a0);
        *(uint *)(param_2 + 0x5a0) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x5a4) < iVar4 + 1U) {
          FUN_1400f155a((longlong *)(param_2 + 0x598),iVar4);
        }
        *(longlong *)(*(longlong *)(param_2 + 0x598) + (longlong)iVar4 * 8) = lVar14;
        *(undefined4 *)(lVar14 + 0x1c) = 0x70;
        *(byte *)(lVar14 + 0x20) = *(byte *)(lVar14 + 0x20) & 0xe8 | 0x15;
        *(undefined4 *)(lVar14 + 0x58) = 0x70;
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != 0x78);
    lVar7 = 0x78;
    do {
      plVar10 = *(longlong **)((longlong)&local_e0 + lVar7);
      if (plVar10 != (longlong *)0x0) {
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
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  if ((local_d8[0xf] ^ (ulonglong)local_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143339a7a FUN_143339a7a body=1369 status=ok
// SIG undefined FUN_143339a7a(void)

void FUN_143339a7a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined ***pppuVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined ***local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar15 = *(undefined8 *)(param_1 + 0x1f8);
  pppuVar5 = *(undefined ****)(param_1 + 0x200);
  if (pppuVar5 != (undefined ***)0x0) {
    LOCK();
    *(int *)(pppuVar5 + 1) = *(int *)(pppuVar5 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(pppuVar5 + 1) = *(int *)(pppuVar5 + 1) + 1;
    UNLOCK();
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143339ad8;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143339add;
      goto LAB_143339b28;
    }
LAB_143339add:
    if (pppuVar5 == (undefined ***)0x0) goto LAB_143339bc3;
    LOCK();
    pppuVar17 = pppuVar5 + 1;
    *(int *)pppuVar17 = *(int *)pppuVar17 + -1;
    UNLOCK();
    if (*(int *)pppuVar17 != 0) goto LAB_143339bc3;
    (*(code *)**pppuVar5)(pppuVar5);
    LOCK();
    piVar1 = (int *)((longlong)pppuVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_143339bc3;
    ppuVar12 = *pppuVar5;
    pppuVar17 = pppuVar5;
  }
  else {
LAB_143339ad8:
    if (iVar9 == 0x10) goto LAB_143339add;
LAB_143339b28:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar6 + 0xc60), iVar9 == 2))
      goto LAB_143339add;
      if (iVar9 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_143339add;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar14 = (uint *)*puVar3;
      if (puVar14 != (uint *)0x0) goto LAB_143339cea;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_14333d73d);
        }
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar6 + 0x310);
        *(undefined8 *)(lVar6 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar3 = puVar13;
        FUN_140217a48(puVar3);
        puVar14 = (uint *)*puVar3;
LAB_143339cea:
        puVar19 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar19 + 0x17);
        uVar16 = puVar14[0x12];
        if (puVar18 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar4 = *puVar14;
          *puVar14 = *puVar14 + uVar16 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar16) != 0xffffffff) break;
          puVar14 = (uint *)*puVar3;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          puVar19 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar16 = 0;
          if (puVar18 <= puVar14 + 0x4000) {
            uVar16 = 1;
            goto LAB_143339d6a;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_143339d6a:
      *(uint **)(puVar14 + 0x10) = puVar18;
      puVar14[0x12] = uVar16;
      iVar9 = 0;
      FUN_1447247dc(puVar19,0);
      *puVar19 = &PTR_FUN_14a55e6c0;
      puVar19[0x15] = uVar15;
      puVar19[0x16] = pppuVar5;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
          iVar9 = 0;
        }
        else {
          uVar20 = 2;
        }
      }
      else {
        iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar20 = 5;
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
      lVar6 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar6 == 0) {
        uVar8 = 1;
        if ((char)uVar20 != '\x06') {
          uVar8 = uVar20;
        }
        uVar20 = uVar8;
        uVar15 = 0;
      }
      else {
        if ((char)uVar20 == '\x06') {
          uVar20 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar6 + 0x30);
      }
      puVar19[0xf] = uVar15;
      puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar19 + 0x1c) = iVar9;
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
      goto LAB_143339bc3;
    }
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a55e6a0;
    local_78[0] = FUN_14333d68c;
    local_50 = uVar15;
    local_48 = pppuVar5;
    FUN_14005a792(&DAT_14ca9a440,L"ReleaseCommand",&DAT_14caba854);
    if (local_78[0] == (code *)0x0) goto LAB_143339bc3;
    pppuVar17 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar17 = &local_58;
    }
    ppuVar12 = *pppuVar17;
  }
  (*(code *)ppuVar12[2])(pppuVar17);
LAB_143339bc3:
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  plVar7 = *(longlong **)(param_1 + 0x200);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x200) = 0;
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
  if (pppuVar5 != (undefined ***)0x0) {
    LOCK();
    pppuVar17 = pppuVar5 + 1;
    *(int *)pppuVar17 = *(int *)pppuVar17 + -1;
    UNLOCK();
    if (*(int *)pppuVar17 == 0) {
      (*(code *)**pppuVar5)(pppuVar5);
      LOCK();
      piVar1 = (int *)((longlong)pppuVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppuVar5)[2])(pppuVar5);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143339fd4 FUN_143339fd4 body=50 status=ok
// SIG undefined FUN_143339fd4(void)

void FUN_143339fd4(void)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = DAT_14c98e618;
  cVar2 = FUN_140d2ceff();
  if (cVar2 != '\0') {
    FUN_140898514(lVar1 + 0xd8,0);
    return;
  }
  return;
}



// FUNCTION 14333a006 FUN_14333a006 body=69 status=ok
// SIG undefined FUN_14333a006(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333a006(void)

{
  _DAT_14cab9508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333a048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab9510,1);
  return;
}



// FUNCTION 14333a04b FUN_14333a04b body=69 status=ok
// SIG undefined FUN_14333a04b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333a04b(void)

{
  _DAT_14cab9518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333a08d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab9520,1);
  return;
}



// FUNCTION 14333a090 FUN_14333a090 body=69 status=ok
// SIG undefined FUN_14333a090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333a090(void)

{
  _DAT_14cab9528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333a0d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab9530,1);
  return;
}



// FUNCTION 14333a0d5 FUN_14333a0d5 body=69 status=ok
// SIG undefined FUN_14333a0d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333a0d5(void)

{
  _DAT_14cab9540 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333a117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab9548,1);
  return;
}



// FUNCTION 14333a13c FUN_14333a13c body=799 status=ok
// SIG undefined FUN_14333a13c(void)

undefined8 * FUN_14333a13c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 local_211;
  undefined1 local_210 [8];
  longlong *local_208;
  code *local_1f8;
  undefined4 local_1f0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_140a55f88();
  FUN_1407651e0(param_1 + 0x4d);
  *param_1 = &PTR_FUN_14a54d190;
  param_1[0x4d] = &PTR_FUN_14a54d3d0;
  FUN_140ca8f8e(param_1 + 0x5e);
  param_1[0x74] = DAT_14c9e1eac;
  FUN_14570e3a0(param_1 + 0x75);
  param_1[0x7c] = DAT_14c9e1eac;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  FUN_140761ace(&local_1f8);
  local_228 = &local_211;
  FUN_140763374(local_210,"SVirtualWindow",".\\Runtime/UMG/Private/Slate/SRetainerWidget.cpp",0x75);
  FUN_140761c10(local_210,param_1 + 0x89,&local_1f8);
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)local_208 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_208 + 0x10))(local_208);
      }
    }
  }
  FUN_140a4ff8c(&local_1f8);
  puVar5 = (undefined8 *)FUN_14001cc68(0xf8,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_149f1e4e0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x80;
  *(undefined4 *)(puVar5 + 8) = 0xffffffff;
  puVar5[0x10] = 0;
  *(undefined4 *)(puVar5 + 0x11) = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x8c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)puVar5 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x9c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar5 + 0xac) = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  *(undefined4 *)(puVar5 + 0x18) = 0xbf800000;
  *(undefined4 *)((longlong)puVar5 + 0xc4) = 0xbf800000;
  *(undefined4 *)(puVar5 + 0x19) = 0xbf800000;
  *(undefined4 *)((longlong)puVar5 + 0xcc) = 0xbf800000;
  puVar5[0x1d] = 0;
  puVar5[0x1a] = 0;
  puVar5[0x1b] = 0;
  *(undefined4 *)(puVar5 + 0x1e) = 0xffffffff;
  param_1[0x8b] = puVar5 + 2;
  param_1[0x8c] = puVar5;
  param_1[0x91] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar5 = &PTR_FUN_14a355f70;
  puVar5[1] = &PTR_LAB_149e668b0;
  *(undefined2 *)(puVar5 + 2) = 0;
  FUN_1405bceb4(puVar5 + 1);
  *puVar5 = &PTR_FUN_14a55dba8;
  puVar5[1] = &PTR_LAB_14a55dbb0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  param_1[0x92] = puVar5;
  FUN_140ca8f8e(param_1 + 0x94);
  param_1[0xaa] = 0;
  local_1f8 = FUN_1477902fa;
  local_1f0 = 0;
  FUN_14779020c(DAT_14c968098 + 0xf0,local_210,param_1,&local_1f8);
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x80;
  param_1[0x57] = param_1;
  param_1[0x58] = param_1[0x8b];
  bVar3 = *(byte *)(param_1 + 7);
  *(byte *)(param_1 + 7) = bVar3 & 0xfb;
  if ((bVar3 != (bVar3 & 0xfb)) && (((bVar3 & 0xcc) != 0) != ((bVar3 & 200) != 0))) {
    cVar4 = FUN_1400d1184(param_1 + 3,param_1);
    if (cVar4 != '\0') {
      FUN_146932214(*(longlong *)(param_1[3] + 0x10),
                    (ulonglong)((*(uint *)(param_1 + 5) >> 0x10) * 0x18) +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1[3] + 0x10) + 0x10) + 0x10 +
                     (ulonglong)((*(uint *)(param_1 + 5) & 0xffff) << 6)));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333a45c FUN_14333a45c body=629 status=ok
// SIG undefined FUN_14333a45c(void)

void FUN_14333a45c(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = FUN_1407635e4(DAT_14c951640);
  *(undefined8 *)(lVar8 + 0x148) = 0;
  *(undefined8 *)(lVar8 + 0x150) = 0;
  *(undefined1 *)(lVar8 + 0x15b) = 3;
  lVar4 = *(longlong *)(param_1 + 0x490);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  *(longlong *)(lVar4 + 0x20) = lVar8;
  FUN_140648376(param_1 + 0x2f0,lVar8);
  local_58 = DAT_14c96b23c;
  local_57 = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_14020e622(*(undefined8 *)(param_1 + 0x448));
  *(undefined1 *)(*(longlong *)(param_1 + 0x448) + 0x689) = 0;
  FUN_1477904f2(param_1);
  uVar5 = *(undefined8 *)(param_2 + 0x1a8);
  plVar6 = *(longlong **)(param_2 + 0x1b0);
  if (plVar6 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x438) = uVar5;
    plVar9 = *(longlong **)(param_1 + 0x440);
    if (plVar9 == (longlong *)0x0) goto LAB_14333a595;
    *(undefined8 *)(param_1 + 0x440) = 0;
LAB_14333a578:
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14333a595;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x438) = uVar5;
    plVar9 = *(longlong **)(param_1 + 0x440);
    if (plVar6 != plVar9) {
      *(longlong **)(param_1 + 0x440) = plVar6;
      if (plVar9 == (longlong *)0x0) goto LAB_14333a595;
      goto LAB_14333a578;
    }
    LOCK();
    plVar9 = plVar6 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14333a595;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar9 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_14333a595:
  *(undefined1 *)(param_1 + 0x472) = *(undefined1 *)(param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x473) = *(undefined1 *)(param_2 + 0x1b9);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x1bc);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x478) = DAT_14c866ff8;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined2 *)(param_1 + 0x470) = 1;
  bVar3 = *(byte *)(param_1 + 0x38);
  *(byte *)(param_1 + 0x38) = bVar3 & 0x7f;
  if (((char)bVar3 < '\0') && (cVar7 = FUN_1400d1184(param_1 + 0x18,param_1), cVar7 != '\0')) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    FUN_146932214(lVar4,(ulonglong)((*(uint *)(param_1 + 0x28) >> 0x10) * 0x18) +
                        *(longlong *)
                         (*(longlong *)(lVar4 + 0x10) + 0x10 +
                         (ulonglong)((*(uint *)(param_1 + 0x28) & 0xffff) << 6)));
  }
  FUN_1477906e6(param_1);
  *(undefined2 *)(param_1 + 0x474) = 1;
  local_68 = *(undefined8 *)(param_1 + 0x438);
  local_60 = *(longlong **)(param_1 + 0x440);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_68);
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_60 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333a6d2 FUN_14333a6d2 body=3895 status=ok
// SIG undefined FUN_14333a6d2(void)

void FUN_14333a6d2(longlong param_1,longlong *param_2,float *param_3,float *param_4,
                  longlong *param_5,int param_6,float *param_7,undefined1 param_8)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  char cVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  undefined8 *local_1d0;
  float *local_1c8;
  undefined1 local_1c0;
  uint local_1b8;
  uint local_1b4;
  ulonglong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  void *local_198;
  longlong local_190;
  float *local_188;
  uint local_17c;
  longlong *local_178;
  float *local_170;
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  longlong *local_150;
  float *local_148;
  longlong *local_140;
  undefined4 local_138;
  int local_134;
  undefined1 local_130;
  undefined1 local_12f;
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 local_100;
  byte local_fc;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  undefined8 *local_e8;
  float local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  byte local_b4;
  char local_b0;
  byte local_a8;
  ulonglong local_a0;
  ulonglong uVar24;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((*(char *)(param_1 + 0x471) != '\x01') || (*(longlong *)(param_1 + 0x438) == 0)) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x438) + 0x39) & 0x19) == 0)) {
    if ((local_a0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1400c0302(param_1,param_2,param_3,param_4);
    return;
  }
  local_1a8 = CONCAT71(local_1a8._1_7_,param_8);
  lVar17 = *param_2;
  local_e8 = *(undefined8 **)(lVar17 + 0xd0);
  local_168 = *(longlong *)(lVar17 + 0xd8);
  local_128 = *(longlong *)(lVar17 + 200);
  cVar13 = FUN_14020e8f6(*(undefined8 *)(param_1 + 0x458),&local_128);
  if (cVar13 != '\0') {
    *(undefined1 *)(param_1 + 0x474) = 1;
    FUN_14032aaf4(param_1 + 0x268,0);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x458) + 0xa8) = param_1;
  lVar17 = *(longlong *)(param_1 + 0x458);
  uVar7 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(lVar17 + 0xb0) = *(undefined8 *)param_4;
  *(undefined8 *)(lVar17 + 0xb8) = uVar7;
  local_120 = *(longlong *)(param_1 + 0x458);
  local_100 = (undefined4)param_2[5];
  local_108 = param_2[4];
  local_118 = (undefined4)param_2[2];
  uStack_114 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_110 = (undefined4)param_2[3];
  uStack_10c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_128 = *param_2;
  local_fc = (local_fc & 0xfc) + 1;
  *(undefined4 *)(local_120 + 0xe0) = *(undefined4 *)(local_128 + 0xe0);
  local_158 = 0;
  local_148 = param_7;
  local_140 = param_5;
  local_130 = (undefined1)local_1a8;
  local_12f = 1;
  if ((*(byte *)(param_1 + 0x31) & 0x40) == 0) {
    local_138 = 0x3f800000;
  }
  else {
    local_138 = *(undefined4 *)(param_1 + 0x3c);
  }
  local_134 = param_6;
  local_168._0_4_ = *param_4;
  local_168._4_4_ = param_4[1];
  fStack_160 = param_4[2];
  fStack_15c = param_4[3];
  local_188 = param_4;
  local_150 = &local_128;
  if ((*(char *)(param_1 + 0x472) == '\x01') && (*(ulonglong *)(param_1 + 0x480) != DAT_14c872be0))
  {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (longlong)*(int *)(param_1 + 0x46c);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = DAT_14c872be0;
    if (SUB168(auVar9 % auVar8,0) == (longlong)*(int *)(param_1 + 0x468)) {
      *(undefined1 *)(param_1 + 0x474) = 1;
      FUN_140163244(*(undefined8 *)(param_1 + 0x2b8),CONCAT71(SUB167(auVar9 % auVar8,1),0x80));
      *(undefined1 *)(param_1 + 0x2e0) = 1;
    }
  }
  pfVar1 = param_3 + 7;
  fVar29 = param_3[0xb];
  fVar32 = SQRT(param_3[9] * param_3[9] + param_3[10] * param_3[10]) * param_3[1];
  fVar33 = SQRT(param_3[7] * param_3[7] + param_3[8] * param_3[8]) * *param_3;
  fVar3 = param_3[0xc];
  uVar26 = (int)ROUND(fVar32 + fVar32 + 0.5) >> 1;
  uVar23 = (int)ROUND(fVar33 + fVar33 + 0.5) >> 1;
  uVar24 = (ulonglong)uVar23;
  local_170 = pfVar1;
  if (*(char *)(param_1 + 0x473) == '\x01') {
    *(undefined1 *)(param_1 + 0x474) = 1;
    uVar22 = (uint)ROUND((fStack_15c - local_168._4_4_) + (fStack_15c - local_168._4_4_) + 0.5);
    uVar27 = (uint)ROUND((fStack_160 - (float)local_168) + (fStack_160 - (float)local_168) + 0.5);
    if (((longlong)(int)param_5[0x25] < 1) ||
       (lVar17 = (longlong)*(int *)(param_5[0x24] + -4 + (longlong)(int)param_5[0x25] * 4),
       lVar17 == -1)) {
      local_a8 = 0;
    }
    else {
      lVar21 = param_5[0x26];
      lVar17 = lVar17 * 0x40;
      local_e8 = (undefined8 *)0x0;
      local_e0 = *(float *)(lVar21 + 8 + lVar17);
      lVar20 = (longlong)(int)local_e0;
      if (lVar20 == 0) {
        uStack_dc = 0;
        lVar17 = lVar21 + lVar17;
      }
      else {
        local_1b8 = uVar27;
        local_1b4 = uVar23;
        local_1b0 = (ulonglong)uVar22;
        local_1a0 = lVar20;
        local_198 = *(void **)(lVar21 + lVar17);
        local_190 = lVar21 + lVar17;
        FUN_146953154(&local_e8,lVar20,0);
        memcpy(local_e8,local_198,local_1a0 * 0x24);
        uVar22 = (uint)local_1b0;
        uVar24 = (ulonglong)local_1b4;
        lVar17 = local_190;
        uVar27 = local_1b8;
      }
      local_b4 = *(byte *)(lVar17 + 0x34);
      if (local_b4 == 1) {
        uStack_b8 = *(undefined4 *)(lVar17 + 0x30);
        uStack_c8 = *(undefined8 *)(lVar17 + 0x20);
        fStack_c0 = (float)*(undefined8 *)(lVar17 + 0x28);
        uStack_bc = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x28) >> 0x20);
        uStack_d8 = (undefined4)*(undefined8 *)(lVar17 + 0x10);
        uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x10) >> 0x20);
        uStack_d0 = (undefined4)*(undefined8 *)(lVar17 + 0x18);
        fStack_cc = (float)((ulonglong)*(undefined8 *)(lVar17 + 0x18) >> 0x20);
      }
      local_b0 = *(char *)(lVar17 + 0x38);
      local_a8 = 1;
    }
    uVar25 = (ulonglong)(uint)((int)uVar22 >> 1);
    fVar30 = param_7[3];
    if (fVar30 <= 0.0) {
      fVar30 = 0.0;
    }
    if (1.0 <= fVar30) {
      fVar30 = 1.0;
    }
    local_190 = CONCAT44(local_190._4_4_,(int)(fVar30 * 255.0 + 0.5));
    uVar27 = (int)uVar27 >> 1;
    fVar30 = param_7[2];
    if (fVar30 <= 0.0) {
      fVar30 = 0.0;
    }
    if (1.0 <= fVar30) {
      fVar30 = 1.0;
    }
    local_198 = (void *)CONCAT44(local_198._4_4_,(int)(fVar30 * 255.0 + 0.5));
    fVar30 = *param_7;
    fVar31 = param_7[1];
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    if (1.0 <= fVar31) {
      fVar31 = 1.0;
    }
    local_1a0 = CONCAT44(local_1a0._4_4_,(int)(fVar31 * 255.0 + 0.5));
    if (fVar30 <= 0.0) {
      fVar30 = 0.0;
    }
    if (1.0 <= fVar30) {
      fVar30 = 1.0;
    }
    local_17c = (uint)(fVar30 * 255.0 + 0.5);
    if (((uint)uVar24 == *(uint *)(param_1 + 0x3a0)) && (uVar26 == *(uint *)(param_1 + 0x3a4))) {
      local_1b8 = uVar27;
      local_1b4 = (uint)uVar24;
      local_1b0 = uVar25;
      cVar13 = FUN_146af7a0c(param_3,param_1 + 0x3a8);
      uVar24 = (ulonglong)local_1b4;
      uVar25 = local_1b0;
      uVar27 = local_1b8;
      if (cVar13 == '\0') goto LAB_14333b168;
      cVar13 = FUN_146983284(pfVar1,param_1 + 0x3c4);
      uVar24 = (ulonglong)local_1b4;
      uVar25 = local_1b0;
      uVar27 = local_1b8;
      if ((((((cVar13 == '\0') || (param_3[0xb] != *(float *)(param_1 + 0x3d4))) ||
            (NAN(param_3[0xb]) || NAN(*(float *)(param_1 + 0x3d4)))) ||
           ((param_3[0xc] != *(float *)(param_1 + 0x3d8) ||
            (NAN(param_3[0xc]) || NAN(*(float *)(param_1 + 0x3d8)))))) ||
          (local_1b8 != *(uint *)(param_1 + 0x3e0))) ||
         ((int)local_1b0 != *(int *)(param_1 + 0x3e4))) goto LAB_14333b168;
      if ((local_a8 == *(byte *)(param_1 + 0x428) & local_a8) == 1) {
        if (local_b0 == *(char *)(param_1 + 0x420)) {
          if ((local_b4 == *(byte *)(param_1 + 0x41c)) && (local_b4 != 0)) {
            cVar13 = FUN_1400d800a(&uStack_d8,param_1 + 0x3f8);
            uVar24 = (ulonglong)local_1b4;
            uVar25 = local_1b0;
            uVar27 = local_1b8;
            if (cVar13 != '\0') {
LAB_14333b606:
              uVar25 = local_1b0;
              uVar27 = local_1b8;
              if (local_e0 == *(float *)(param_1 + 0x3f0)) {
                cVar13 = FUN_1400d8084(local_e8,*(undefined8 *)(param_1 + 1000));
                uVar24 = (ulonglong)local_1b4;
                uVar25 = local_1b0;
                uVar27 = local_1b8;
                if (cVar13 != '\0') goto LAB_14333b1e0;
              }
            }
          }
          else {
            uVar24 = (ulonglong)local_1b4;
            if (local_b4 == *(byte *)(param_1 + 0x41c)) goto LAB_14333b606;
          }
        }
        goto LAB_14333b168;
      }
      if (local_a8 != *(byte *)(param_1 + 0x428)) goto LAB_14333b168;
    }
    else {
LAB_14333b168:
      *(ulonglong *)(param_1 + 0x3a0) = uVar24 | (ulonglong)uVar26 << 0x20;
      if ((float *)(param_1 + 0x3a8) != param_3) {
        *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_3 + 0xc);
        fVar30 = *param_3;
        fVar31 = param_3[1];
        fVar4 = param_3[2];
        fVar5 = param_3[3];
        uVar7 = *(undefined8 *)(param_3 + 4);
        uVar10 = *(undefined8 *)(param_3 + 6);
        uVar11 = *(undefined8 *)(param_3 + 10);
        *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_1 + 0x3d0) = uVar11;
        *(undefined8 *)(param_1 + 0x3b8) = uVar7;
        *(undefined8 *)(param_1 + 0x3c0) = uVar10;
        *(float *)(param_1 + 0x3a8) = fVar30;
        *(float *)(param_1 + 0x3ac) = fVar31;
        *(float *)(param_1 + 0x3b0) = fVar4;
        *(float *)(param_1 + 0x3b4) = fVar5;
      }
      *(ulonglong *)(param_1 + 0x3e0) = (ulonglong)uVar27 | uVar25 << 0x20;
      FUN_146ad6eba(param_1 + 1000,&local_e8);
      FUN_140163244(*(undefined8 *)(param_1 + 0x2b8),0x80);
      *(undefined1 *)(param_1 + 0x2e0) = 1;
    }
LAB_14333b1e0:
    if (*(int *)(param_1 + 0x434) == param_6) {
      uVar23 = (uint)(byte)local_1a0 << 8 |
               (local_17c & 0xff) << 0x10 | (uint)(byte)local_190 << 0x18 | (uint)(byte)local_198;
      if (uVar23 != *(uint *)(param_1 + 0x430)) goto LAB_14333b229;
    }
    else {
      uVar23 = (uint)(byte)local_1a0 << 8 |
               (local_17c & 0xff) << 0x10 | (uint)(byte)local_190 << 0x18 | (uint)(byte)local_198;
LAB_14333b229:
      *(int *)(param_1 + 0x434) = param_6;
      *(uint *)(param_1 + 0x430) = uVar23;
      (**(code **)(*(longlong *)(param_1 + 0x268) + 0x20))(param_1 + 0x268,&local_f8);
      FUN_140163244(local_f8,2);
      plVar19 = (longlong *)CONCAT44(fStack_ec,local_f0);
      if (plVar19 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar19 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
    if (local_a8 == 1) {
      if (local_b4 == 1) {
        local_b4 = 0;
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else if ((uVar23 != *(uint *)(param_1 + 0x3a0)) || (uVar26 != *(uint *)(param_1 + 0x3a4))) {
    *(undefined1 *)(param_1 + 0x474) = 1;
    FUN_140163244(*(undefined8 *)(param_1 + 0x2b8),0x80);
    *(undefined1 *)(param_1 + 0x2e0) = 1;
    *(ulonglong *)(param_1 + 0x3a0) = CONCAT44(uVar26,uVar23);
  }
  if (*(char *)(param_1 + 0x474) == '\x01') {
    if ((((*(int *)(param_1 + 0x48c) == 0) || (uVar23 = *(uint *)(param_1 + 0x488), (int)uVar23 < 0)
         ) || (DAT_14c9647dc <= (int)uVar23)) ||
       (((plVar19 = (longlong *)
                    ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
         plVar19 == (longlong *)0x0 || ((int)plVar19[2] != *(int *)(param_1 + 0x48c))) ||
        (((*(uint *)(plVar19 + 1) & 0x10200000) != 0 ||
         ((lVar17 = *plVar19, lVar17 == 0 || (lVar21 = *(longlong *)(lVar17 + 0x218), lVar21 == 0)))
         ))))) {
LAB_14333ab01:
      if ((DAT_14c86a9f8 != '\x01') ||
         (iVar18 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar18 == 2)) {
LAB_14333b513:
        lVar21 = 0;
        goto LAB_14333b515;
      }
      if (iVar18 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        if (DVar14 == DVar15) goto LAB_14333b513;
      }
    }
    else {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar18 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar18 != 2)) {
        if (iVar18 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) {
            lVar21 = *(longlong *)(lVar17 + 0x218);
            goto LAB_14333b515;
          }
        }
        goto LAB_14333ab01;
      }
LAB_14333b515:
      (**(code **)(**(longlong **)(DAT_14c98e618 + 0x20) + 0x168))
                (*(longlong **)(DAT_14c98e618 + 0x20),lVar21);
    }
    iVar18 = 1;
    if (DAT_14cab9584 == '\x01') {
      iVar18 = 1;
      if (DAT_14cab9578 == DAT_14c872be0) {
        iVar18 = DAT_14cab9580 + 1;
      }
    }
    DAT_14cab9584 = '\x01';
    uVar26 = (uint)ROUND(ABS(fVar33) + ABS(fVar33) + 0.5);
    uVar22 = (uint)ROUND(ABS(fVar32) + ABS(fVar32) + 0.5);
    uVar27 = (int)uVar26 >> 1;
    uVar28 = (int)uVar22 >> 1;
    uVar23 = uVar27;
    if (uVar27 < uVar28) {
      uVar23 = uVar28;
    }
    DAT_14cab9578 = DAT_14c872be0;
    DAT_14cab9580 = iVar18;
    *(ulonglong *)(param_1 + 0x480) = DAT_14c872be0;
    uVar12 = DAT_14ca84e40;
    if (((DAT_14ca84e40 < uVar23) || (uVar26 < 2)) || (uVar22 < 2)) {
      if (*(char *)(param_1 + 0x475) == '\0') {
        *(undefined1 *)(param_1 + 0x475) = 1;
      }
      if (uVar12 < uVar23) {
        local_1c0 = (undefined1)local_1a8;
        local_1c8 = param_7;
        local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,param_6);
        local_1d8 = param_5;
        FUN_1400c0302(param_1,param_2,param_3,local_188);
      }
      goto LAB_14333af50;
    }
    *(undefined1 *)(param_1 + 0x475) = 0;
    if ((*(byte *)(*(longlong *)(param_1 + 0x438) + 0x39) & 0x19) != 0) {
      local_188 = param_7;
      local_1a8 = *(longlong *)(*(longlong *)(param_1 + 0x490) + 0x18);
      plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x490) + 0x20);
      fVar30 = (float)(**(code **)(*plVar19 + 0x350))(plVar19);
      if ((uVar27 != (int)fVar30) ||
         (fVar30 = (float)(**(code **)(*plVar19 + 0x358))(plVar19), uVar28 != (int)fVar30)) {
        lVar17 = FUN_1447b4020(plVar19);
        if ((lVar17 == 0) || ((char)plVar19[0x2c] != '\x02')) {
          *(uint *)(plVar19 + 0x28) = uVar27;
          *(uint *)((longlong)plVar19 + 0x144) = uVar28;
          *(undefined1 *)(plVar19 + 0x2c) = 2;
          *(byte *)((longlong)plVar19 + 0x15a) = *(byte *)((longlong)plVar19 + 0x15a) & 0xfe;
          if (0x10000 < uVar27) {
            *(undefined4 *)(plVar19 + 0x28) = 1;
          }
          if (0x10000 < uVar28) {
            *(undefined4 *)((longlong)plVar19 + 0x144) = 1;
          }
          (**(code **)(*plVar19 + 0x318))(plVar19);
          FUN_140768b6e(plVar19,1);
        }
        else {
          FUN_143738fbe(plVar19,uVar27,uVar28);
        }
      }
      *(float *)(param_1 + 0x310) = (float)uVar27;
      *(float *)(param_1 + 0x314) = (float)uVar28;
      *(int *)(local_1a8 + 0x30) = SUB84((double)fVar29,0);
      *(uint *)(local_1a8 + 0x34) = (uint)((ulonglong)(double)fVar29 >> 0x20) ^ 0x80000000;
      *(int *)(local_1a8 + 0x38) = SUB84((double)fVar3,0);
      *(uint *)(local_1a8 + 0x3c) = (uint)((ulonglong)(double)fVar3 >> 0x20) ^ 0x80000000;
      *(undefined1 *)(local_1a8 + 0x28) = 0;
      local_178 = param_5;
      if (((*local_140 != 0) && (local_140[1] != 0)) &&
         ((0 < *(int *)(local_140[1] + 8) && (lVar17 = local_140[2], lVar17 != 0)))) {
        fVar29 = *(float *)(lVar17 + 0x398);
        lVar21 = lVar17 + 0x390;
        if (fVar29 != 0.0) {
          lVar21 = lVar17 + 0x398;
        }
        if (NAN(fVar29)) {
          lVar21 = lVar17 + 0x398;
        }
        fVar29 = *(float *)(lVar17 + 0x390 + (ulonglong)(-(uint)(fVar29 != 0.0) & 1) * 8);
        if (fVar33 <= fVar29) {
          fVar33 = fVar29;
        }
        if (fVar32 <= *(float *)(lVar21 + 4)) {
          fVar32 = *(float *)(lVar21 + 4);
        }
      }
      uVar7 = *(undefined8 *)(param_1 + 0x448);
      local_f8._0_5_ = (uint5)(uint)local_f8;
      FUN_1402bad2e(uVar7,&local_e8,CONCAT44(fVar32,fVar33),&local_f8);
      FUN_1402baeb8(uVar7,local_e8);
      local_1d0 = (undefined8 *)CONCAT71(local_1d0._1_7_,DAT_14cab9538 != 0);
      local_1d8 = &local_168;
      FUN_147790982(local_1a8,param_1 + 0x448,plVar19,param_1 + 0x268);
      *(undefined1 *)(param_1 + 0x474) = 0;
      local_f8 = param_1;
      local_e8 = &local_f8;
      FUN_1477aac02(&local_e8);
      *(undefined8 *)(param_1 + 0x478) = DAT_14c866ff8;
      param_7 = local_188;
      param_5 = local_178;
    }
  }
  plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x490) + 0x20);
  fVar29 = (float)(**(code **)(*plVar19 + 0x350))(plVar19);
  if ((1.0 <= fVar29) && (fVar29 = (float)(**(code **)(*plVar19 + 0x358))(plVar19), 1.0 <= fVar29))
  {
    fVar29 = *(float *)(param_1 + 0x240);
    fVar3 = *(float *)(param_1 + 0x244);
    fVar32 = *(float *)(param_1 + 0x248);
    fVar33 = *(float *)(param_1 + 0x24c);
    fVar30 = param_7[3];
    fVar31 = param_7[2];
    fVar4 = param_7[1];
    fVar5 = *param_7;
    cVar13 = *(char *)(param_1 + 0x308);
    if (cVar13 == '\0') {
      param_7 = (float *)(param_1 + 0x2f8);
    }
    else if (cVar13 == '\x01') {
      plVar16 = (longlong *)FUN_1400c0742();
      lVar17 = plVar16[0x22];
      if (lVar17 == 0) {
        (**(code **)(*plVar16 + 1000))(plVar16);
        lVar17 = plVar16[0x22];
      }
      param_7 = (float *)(lVar17 + (ulonglong)*(byte *)(param_1 + 0x309) * 0x10 + 0x38);
    }
    else if (cVar13 == '\x03') {
      param_7 = param_7 + 8;
    }
    else {
      param_7 = param_7 + 4;
    }
    fVar34 = fVar33 * fVar30 * param_7[3];
    fVar33 = param_7[2];
    fVar30 = param_7[1];
    fVar6 = *param_7;
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x490) + 0x28);
    if (lVar17 != 0) {
      FUN_14016d8b0(lVar17,*(undefined8 *)(param_1 + 0x550),plVar19);
    }
    local_1d0 = &local_f8;
    local_f8 = CONCAT44(fVar3 * fVar4 * fVar30 * fVar34,fVar29 * fVar5 * fVar6 * fVar34);
    local_e8 = *(undefined8 **)(param_3 + 3);
    local_e0 = param_3[2];
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = (undefined4)*(undefined8 *)param_3;
    uStack_d0 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    fStack_cc = *local_170;
    uStack_c8 = *(undefined8 *)(local_170 + 1);
    fStack_c0 = local_170[3];
    uStack_bc = (undefined4)*(undefined8 *)(local_170 + 4);
    uStack_b8 = (undefined4)((ulonglong)*(undefined8 *)(local_170 + 4) >> 0x20);
    local_b4 = local_b4 & 0xfc | *(char *)(param_3 + 0xd) * '\x02' & 2U;
    local_1d8 = (longlong *)CONCAT71(local_1d8._1_7_,6);
    local_f0 = fVar32 * fVar31 * fVar33 * fVar34;
    fStack_ec = fVar34 * fVar34;
    FUN_140239bd2(param_5,param_6,&local_e8,param_1 + 0x2f0);
  }
  if (((*(byte *)((longlong)param_2 + 0x2c) & 1) != 0) && ((*(byte *)(param_1 + 0x39) & 0x10) != 0))
  {
    lVar17 = param_2[1];
    local_e8 = *(undefined8 **)(param_1 + 0x458);
    lVar21 = *(longlong *)(param_1 + 0x460);
    local_e0 = (float)lVar21;
    uStack_dc = (undefined4)((ulonglong)lVar21 >> 0x20);
    if (lVar21 != 0) {
      LOCK();
      *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
      UNLOCK();
    }
    FUN_1469482d6(lVar17,&local_e8);
    plVar19 = (longlong *)CONCAT44(uStack_dc,local_e0);
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar19 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
LAB_14333af50:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 14333b64b FUN_14333b64b body=69 status=ok
// SIG undefined FUN_14333b64b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333b64b(void)

{
  _DAT_14cab9588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333b68d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab9590,1);
  return;
}



// FUNCTION 14333b690 FUN_14333b690 body=69 status=ok
// SIG undefined FUN_14333b690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333b690(void)

{
  _DAT_14cab9598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333b6d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab95a0,1);
  return;
}



// FUNCTION 14333b6d6 FUN_14333b6d6 body=4361 status=ok
// SIG undefined FUN_14333b6d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333b6d6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  double *pdVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  bool bVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_5d8 [32];
  uint local_5b8;
  undefined4 local_5b0;
  undefined4 local_5a8;
  undefined8 local_5a0;
  wchar_t *local_598;
  undefined1 *local_590;
  undefined1 *local_588;
  code **local_580;
  undefined1 *local_578;
  undefined1 *local_570;
  undefined8 local_568;
  longlong local_560;
  longlong *local_558;
  double *local_550;
  longlong local_548;
  longlong local_540;
  undefined1 local_538;
  undefined1 local_537;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined1 local_520;
  undefined1 local_51f;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  ulonglong local_4f8;
  undefined8 *puStack_4f0;
  ulonglong uStack_4e8;
  undefined8 *local_4e0;
  ulonglong uStack_4d8;
  undefined1 local_4d0;
  undefined1 local_4cf;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  double local_4b0;
  undefined1 local_4a8 [16];
  double local_498;
  double dStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  code *local_448 [16];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3a8 [16];
  undefined8 local_328 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_280;
  undefined1 local_1f8;
  undefined1 local_168;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_128 [28];
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  lVar9 = FUN_140059518();
  if ((lVar9 != 0) && (lVar9 = FUN_1400f3ad8(), lVar9 != 0)) {
    FUN_1447210f0(lVar9);
    lVar10 = FUN_1449baec6();
    if (lVar10 != 0) {
      plVar19 = *(longlong **)(lVar10 + 0x138);
      local_548 = param_2;
      if (plVar19 == (longlong *)0x0) {
LAB_14333b8a8:
        (**(code **)(_DAT_00000000 + 8))(0,local_128);
      }
      else {
        iVar8 = (int)plVar19[1];
        do {
          if (iVar8 == 0) goto LAB_14333b8a8;
          LOCK();
          iVar24 = (int)plVar19[1];
          bVar28 = iVar8 == iVar24;
          if (bVar28) {
            *(int *)(plVar19 + 1) = iVar8 + 1;
            iVar24 = iVar8;
          }
          iVar8 = iVar24;
          UNLOCK();
        } while (!bVar28);
        (**(code **)(**(longlong **)(lVar10 + 0x130) + 8))(*(longlong **)(lVar10 + 0x130),local_128)
        ;
        LOCK();
        plVar1 = plVar19 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar2 = (int *)((longlong)plVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      local_3b8 = DAT_14c8464f0;
      local_3c8 = DAT_14c8464e0;
      uStack_3c0 = DAT_14c8464e8;
      puVar21 = &DAT_14c846400;
      puVar22 = local_3a8;
      for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar22 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      }
      puVar21 = &DAT_14c846400;
      puVar22 = local_328;
      for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar22 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      }
      uVar20 = 0;
      local_280 = 0;
      local_1f8 = 0;
      local_168 = 0;
      local_2a8 = 0;
      uStack_2a0 = 0;
      local_158._8_8_ = DAT_14c8464e8;
      local_158._0_8_ = DAT_14c8464e0;
      local_148 = DAT_14c8464f0;
      local_140 = 0;
      uStack_138 = 0;
      plVar19 = *(longlong **)(lVar9 + 0x430);
      local_568 = 0;
      local_540 = lVar9;
      if (plVar19 != (longlong *)0x0) {
        if (DAT_14cae9568 == 0) {
          local_580 = local_448;
          local_448[0] = FUN_1417de738;
          local_570 = &LAB_145893408;
          local_578 = &LAB_1458cbbd2;
          local_588 = &LAB_147ba21f1;
          local_590 = &LAB_1463e9233;
          local_598 = L"Engine";
          local_5a0 = 0;
          local_5a8 = 0x1000000c;
          local_5b0 = 8;
          local_5b8 = 0x2b8;
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
          plVar19 = *(longlong **)(lVar9 + 0x430);
          if (plVar19 != (longlong *)0x0) goto LAB_14333b97b;
LAB_14333bbdc:
          local_568 = 0;
        }
        else {
LAB_14333b97b:
          local_568 = 0;
          if ((DAT_14cae9568 != 0) && (lVar9 = plVar19[2], lVar9 != 0)) {
            if ((*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
               (((*(longlong *)
                   (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
                  DAT_14cae9568 + 0x30 || (plVar19[0xf] == 0)) ||
                (cVar6 = (**(code **)(*plVar19 + 0x358))
                                   (plVar19,*(undefined8 *)(lVar10 + 0xf8),&local_3c8,0xffffffff),
                cVar6 == '\0')))) goto LAB_14333bbdc;
            uVar11 = FUN_14012d55c(&local_3c8,local_448);
            local_568 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          }
        }
      }
      iVar8 = *(int *)(param_1 + 0x2c0);
      if (iVar8 == 0) {
        uVar25 = 1;
        iVar26 = 0;
        iVar24 = 0;
      }
      else {
        puVar18 = *(uint **)(param_1 + 0x2b8);
        if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
          puVar18 = (uint *)(param_1 + 0x2a8);
        }
        uVar23 = *puVar18;
        if (uVar23 == 0) {
          iVar24 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar24 = iVar8 + -1;
          }
          uVar20 = 0;
          uVar25 = (ulonglong)(uint)(iVar24 >> 5);
          if (iVar24 >> 5 < 1) {
            uVar25 = uVar20;
          }
          iVar26 = 0;
          do {
            if (uVar25 == uVar20) goto LAB_14333c750;
            iVar26 = iVar26 + 0x20;
            uVar23 = puVar18[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar23 == 0);
        }
        else {
          uVar20 = 0;
          iVar26 = 0;
        }
        uVar25 = (ulonglong)(-uVar23 & uVar23);
        uVar3 = uVar25 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar24 = (iVar26 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar24) {
          iVar24 = iVar8;
        }
      }
      if (iVar24 < iVar8) {
        local_558 = (longlong *)(param_1 + 0x298);
        local_550 = (double *)(param_1 + 0x288);
        uVar27 = 0xffffffff;
        uVar23 = DAT_1499319e0;
        do {
          lVar9 = *local_558 + (longlong)iVar24 * 0x50;
          if (((((*(int *)(lVar9 + 0x10) == 0) || (uVar15 = *(uint *)(lVar9 + 0xc), (int)uVar15 < 0)
                ) || ((DAT_14c9647dc <= (int)uVar15 ||
                      ((plVar19 = (longlong *)
                                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                       plVar19 == (longlong *)0x0 || ((int)plVar19[2] != *(int *)(lVar9 + 0x10))))))
               ) || ((*(uint *)(plVar19 + 1) & 0x10200000) != 0)) ||
             (lVar10 = *plVar19, lVar10 == 0)) {
            FUN_147791822(param_1,lVar9 + 8);
            FUN_1477ab3be(local_558,iVar24);
          }
          else {
            local_488 = *(undefined8 *)(lVar10 + 0x260);
            uStack_480 = *(undefined8 *)(lVar10 + 0x268);
            local_478 = *(undefined8 *)(lVar10 + 0x270);
            if (((char)local_568 != '\0') &&
               (((DAT_14cab95a8 != '\x01' || (*(longlong *)(lVar9 + 0x18) == 0)) ||
                (cVar6 = FUN_1407609f2(), cVar6 != '\0')))) {
              local_5b8 = local_5b8 & 0xffffff00;
              cVar6 = FUN_1401ca69e(&local_488,&local_140,local_448,&local_498);
              lVar10 = local_540;
              if (cVar6 != '\0') {
                auVar30._0_8_ = dStack_490 + 0.5;
                auVar30._8_8_ = 0;
                auVar30 = roundpd(auVar30,auVar30,1);
                auVar32._0_8_ = local_498 + 0.5;
                auVar32._8_8_ = 0;
                auVar32 = roundpd(auVar32,auVar32,1);
                local_4a8._0_8_ = auVar32._0_8_;
                local_4a8._8_8_ = auVar30._0_8_;
                pdVar12 = (double *)local_4a8;
                if (*(char *)(*(longlong *)(lVar9 + 0x30) + 0x36) == '\x01') {
                  pdVar12 = &local_498;
                }
                local_508 = *pdVar12;
                uStack_500 = (undefined8 *)pdVar12[1];
                FUN_14778c508(local_540,&local_508,&local_468,0);
                FUN_14778b342(lVar10,&local_468,&local_458,&local_4b8);
                dVar5 = local_4b0;
                dVar4 = local_4b8;
                local_4d0 = DAT_14c96b23c;
                local_4cf = 1;
                local_4c8 = 0;
                uStack_4c0 = 0;
                (**(code **)(**(longlong **)(lVar9 + 0x20) + 0x1c0))
                          (*(longlong **)(lVar9 + 0x20),&local_4d0);
                lVar10 = *(longlong *)(lVar9 + 0x40);
                if (lVar10 == 0) goto LAB_14333be03;
                fVar31 = local_108 * (float)dVar4 + local_100 * (float)dVar5 + local_f8;
                fVar29 = (float)dVar4 * local_10c + (float)dVar5 * local_104 + local_fc;
                fVar35 = 1.0 / (*(float *)(local_548 + 0x1c) * *(float *)(local_548 + 0x28) -
                               *(float *)(local_548 + 0x24) * *(float *)(local_548 + 0x20));
                fVar36 = *(float *)(local_548 + 0x1c) * fVar35;
                fVar34 = (float)((uint)*(float *)(local_548 + 0x24) ^ uVar23) * fVar35;
                fVar33 = (float)((uint)*(float *)(local_548 + 0x20) ^ uVar23) * fVar35;
                fVar35 = fVar35 * *(float *)(local_548 + 0x28);
                fVar37 = (float)(*(uint *)(local_548 + 0x2c) ^ uVar23);
                dStack_450 = (double)(fVar33 * fVar29 + fVar31 * fVar36 +
                                     (fVar37 * fVar33 - fVar36 * *(float *)(local_548 + 0x30)));
                local_458 = (double)(fVar35 * fVar29 + fVar34 * fVar31 +
                                    (fVar37 * fVar35 - *(float *)(local_548 + 0x30) * fVar34));
                plVar19 = *(longlong **)(lVar9 + 0x18);
                if (plVar19 == (longlong *)0x0) {
                  if ((*(double *)(param_1 + 0x278) != 0.0) || (NAN(*(double *)(param_1 + 0x278))))
                  {
                    bVar7 = 0;
                  }
                  else {
                    bVar7 = -(*(double *)(param_1 + 0x280) == 0.0) & 1;
                  }
                  local_508._0_2_ = CONCAT11(1,bVar7);
                  uStack_500 = (undefined8 *)0x0;
                  local_4f8 = 0;
                  FUN_1476df1ae(lVar10,lVar10 + 0xa8,&local_508,1);
                  if ((int)local_4f8 == 0) {
LAB_14333c4e1:
                    if (uStack_500 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (uStack_500 != (undefined8 *)0x0) {
                    (**(code **)*uStack_500)(uStack_500,0);
                    FUN_1446efa72(&uStack_500,0,0,0x10);
                    local_4f8 = local_4f8 & 0xffffffff00000000;
                    goto LAB_14333c4e1;
                  }
                  local_508 = (double)CONCAT44((float)dStack_450,(float)local_458);
                  uStack_500 = (undefined8 *)
                               CONCAT44((float)*(double *)(param_1 + 0x280),
                                        (float)*(double *)(param_1 + 0x278));
                  local_4f8 = CONCAT71(local_4f8._1_7_,1);
                  puStack_4f0 = (undefined8 *)0x0;
                  uStack_4e8 = 0;
                  FUN_1476df0e4(lVar10,lVar10 + 0x20,&local_508,1);
                  if ((int)uStack_4e8 == 0) {
LAB_14333c5b0:
                    if (puStack_4f0 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (puStack_4f0 != (undefined8 *)0x0) {
                    (**(code **)*puStack_4f0)(puStack_4f0,0);
                    FUN_1446efa72(&puStack_4f0,0,0,0x10);
                    uStack_4e8 = uStack_4e8 & 0xffffffff00000000;
                    goto LAB_14333c5b0;
                  }
                  local_4f8 = 0;
                  puStack_4f0 = (undefined8 *)0x0;
                  local_508 = 0.0;
                  uStack_500 = (undefined8 *)0x0;
                  uStack_4e8 = CONCAT71(uStack_4e8._1_7_,1);
                  local_4e0 = (undefined8 *)0x0;
                  uStack_4d8 = 0;
                  FUN_1476df26c(lVar10,lVar10 + 0x48,&local_508,1);
                  if ((int)uStack_4d8 == 0) {
LAB_14333c63d:
                    if (local_4e0 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (local_4e0 != (undefined8 *)0x0) {
                    (**(code **)*local_4e0)(local_4e0,0);
                    FUN_1446efa72(&local_4e0,0,0,0x10);
                    uStack_4d8 = uStack_4d8 & 0xffffffff00000000;
                    goto LAB_14333c63d;
                  }
                  local_508 = *local_550;
                  uStack_500 = (undefined8 *)local_550[1];
                  local_4f8 = CONCAT71(local_4f8._1_7_,1);
                  puStack_4f0 = (undefined8 *)0x0;
                  uStack_4e8 = 0;
                  FUN_1476df4ec(lVar10,lVar10 + 0x80,&local_508,1);
                  if ((int)uStack_4e8 != 0) {
                    if (puStack_4f0 == (undefined8 *)0x0) goto joined_r0x00014333c44f;
                    (**(code **)*puStack_4f0)(puStack_4f0,0);
                    FUN_1446efa72(&puStack_4f0,0,0,0x10);
                    uStack_4e8 = uStack_4e8 & 0xffffffff00000000;
                  }
                  if (puStack_4f0 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else {
                  local_560 = lVar10;
                  (**(code **)(*plVar19 + 0xac8))(plVar19,&local_508,local_128,&local_458);
                  local_458 = local_508;
                  dStack_450 = (double)uStack_500;
                  lVar9 = *(longlong *)(lVar9 + 0x18);
                  uVar3 = *(ulonglong *)(lVar9 + 0x660);
                  local_468 = *(double *)(lVar9 + 0x688);
                  dStack_460 = *(double *)(lVar9 + 0x690);
                  uVar13 = 1;
                  if (uVar3 >> 0x20 != 0 || (int)uVar3 != 0) {
                    uVar13 = *(undefined1 *)(lVar9 + 0x681);
                  }
                  local_508._0_2_ = CONCAT11(1,uVar13);
                  uStack_500 = (undefined8 *)0x0;
                  local_4f8 = 0;
                  FUN_1476df1ae(local_560,local_560 + 0xa8,&local_508,1);
                  if ((int)local_4f8 == 0) {
LAB_14333c250:
                    if (uStack_500 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (uStack_500 != (undefined8 *)0x0) {
                    (**(code **)*uStack_500)(uStack_500,0);
                    FUN_1446efa72(&uStack_500,0,0,0x10);
                    local_4f8 = local_4f8 & 0xffffffff00000000;
                    goto LAB_14333c250;
                  }
                  lVar10 = local_560;
                  local_508 = (double)CONCAT44((float)dStack_450,(float)local_458);
                  uStack_500 = (undefined8 *)CONCAT44((float)(int)(uVar3 >> 0x20),(float)(int)uVar3)
                  ;
                  local_4f8 = CONCAT71(local_4f8._1_7_,1);
                  puStack_4f0 = (undefined8 *)0x0;
                  uStack_4e8 = 0;
                  FUN_1476df0e4(local_560,local_560 + 0x20,&local_508,1);
                  if ((int)uStack_4e8 == 0) {
LAB_14333c31c:
                    if (puStack_4f0 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (puStack_4f0 != (undefined8 *)0x0) {
                    (**(code **)*puStack_4f0)(puStack_4f0,0);
                    FUN_1446efa72(&puStack_4f0,0,0,0x10);
                    uStack_4e8 = uStack_4e8 & 0xffffffff00000000;
                    goto LAB_14333c31c;
                  }
                  local_4f8 = 0;
                  puStack_4f0 = (undefined8 *)0x0;
                  local_508 = 0.0;
                  uStack_500 = (undefined8 *)0x0;
                  uStack_4e8 = CONCAT71(uStack_4e8._1_7_,1);
                  local_4e0 = (undefined8 *)0x0;
                  uStack_4d8 = 0;
                  FUN_1476df26c(lVar10,lVar10 + 0x48,&local_508,1);
                  if ((int)uStack_4d8 == 0) {
LAB_14333c3a8:
                    if (local_4e0 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (local_4e0 != (undefined8 *)0x0) {
                    (**(code **)*local_4e0)(local_4e0,0);
                    FUN_1446efa72(&local_4e0,0,0,0x10);
                    uStack_4d8 = uStack_4d8 & 0xffffffff00000000;
                    goto LAB_14333c3a8;
                  }
                  local_508 = local_468;
                  uStack_500 = (undefined8 *)dStack_460;
                  local_4f8 = CONCAT71(local_4f8._1_7_,1);
                  puStack_4f0 = (undefined8 *)0x0;
                  uStack_4e8 = 0;
                  FUN_1476df4ec(lVar10,lVar10 + 0x80,&local_508,1);
                  if ((int)uStack_4e8 == 0) {
LAB_14333c437:
                    if (puStack_4f0 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (puStack_4f0 != (undefined8 *)0x0) {
                    (**(code **)*puStack_4f0)(puStack_4f0,0);
                    FUN_1446efa72(&puStack_4f0,0,0,0x10);
                    uStack_4e8 = uStack_4e8 & 0xffffffff00000000;
                    goto LAB_14333c437;
                  }
                }
joined_r0x00014333c44f:
                if (DAT_14c7610cc != 0) {
                  FUN_146a8b32c(lVar10);
                }
                goto LAB_14333be03;
              }
            }
            local_520 = DAT_14c96b1e1;
            local_51f = 1;
            local_518 = 0;
            uStack_510 = 0;
            (**(code **)(**(longlong **)(lVar9 + 0x20) + 0x1c0))
                      (*(longlong **)(lVar9 + 0x20),&local_520);
          }
LAB_14333be03:
          uVar27 = uVar27 & ~(uint)uVar25;
          puVar18 = *(uint **)(param_1 + 0x2b8);
          if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
            puVar18 = (uint *)(param_1 + 0x2a8);
          }
          iVar8 = *(int *)(param_1 + 0x2c0);
          iVar24 = (int)uVar20;
          lVar9 = (longlong)iVar24;
          uVar15 = puVar18[lVar9] & uVar27;
          if (uVar15 == 0) {
            iVar16 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar16 = iVar8 + -1;
            }
            iVar16 = iVar16 >> 5;
            iVar14 = iVar16;
            if (iVar16 < iVar24) {
              iVar14 = iVar24;
            }
            if (iVar16 <= iVar24) break;
            lVar10 = 0;
            while( true ) {
              iVar26 = iVar26 + 0x20;
              uVar15 = puVar18[lVar9 + lVar10 + 1];
              if (uVar15 != 0) break;
              lVar10 = lVar10 + 1;
              if (iVar14 - lVar9 == lVar10) goto LAB_14333c750;
            }
            uVar20 = (ulonglong)(iVar24 + (int)lVar10 + 1);
            uVar27 = 0xffffffff;
          }
          uVar25 = (ulonglong)(-uVar15 & uVar15);
          uVar3 = uVar25 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar24 = (iVar26 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        } while (iVar24 < iVar8);
      }
      goto LAB_14333c750;
    }
  }
  if (DAT_14c979cd0 == '\x01') {
    iVar8 = *(int *)(param_1 + 0x2c0);
    if (iVar8 == 0) {
      uVar20 = 1;
      uVar25 = 0;
      iVar26 = 0;
      iVar24 = 0;
    }
    else {
      puVar18 = *(uint **)(param_1 + 0x2b8);
      if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
        puVar18 = (uint *)(param_1 + 0x2a8);
      }
      uVar23 = *puVar18;
      if (uVar23 == 0) {
        iVar24 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar24 = iVar8 + -1;
        }
        uVar25 = 0;
        uVar20 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar20 = uVar25;
        }
        iVar26 = 0;
        do {
          if (uVar20 == uVar25) goto LAB_14333c750;
          iVar26 = iVar26 + 0x20;
          uVar23 = puVar18[uVar25 + 1];
          uVar25 = uVar25 + 1;
        } while (uVar23 == 0);
      }
      else {
        uVar25 = 0;
        iVar26 = 0;
      }
      uVar20 = (ulonglong)(-uVar23 & uVar23);
      uVar3 = uVar20 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar24 = (iVar26 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar24) {
        iVar24 = iVar8;
      }
    }
    if (iVar24 < iVar8) {
      uVar23 = 0xffffffff;
      do {
        plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x298) + 0x20 + (longlong)iVar24 * 0x50);
        local_538 = DAT_14c96b1e1;
        local_537 = 1;
        local_530 = 0;
        uStack_528 = 0;
        (**(code **)(*plVar19 + 0x1c0))(plVar19,&local_538);
        uVar23 = ~(uint)uVar20 & uVar23;
        puVar18 = *(uint **)(param_1 + 0x2b8);
        if (*(uint **)(param_1 + 0x2b8) == (uint *)0x0) {
          puVar18 = (uint *)(param_1 + 0x2a8);
        }
        iVar8 = *(int *)(param_1 + 0x2c0);
        iVar24 = (int)uVar25;
        lVar9 = (longlong)iVar24;
        uVar27 = puVar18[lVar9] & uVar23;
        if (uVar27 == 0) {
          iVar16 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar16 = iVar8 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar14 = iVar16;
          if (iVar16 < iVar24) {
            iVar14 = iVar24;
          }
          if (iVar16 <= iVar24) break;
          lVar10 = 0;
          while( true ) {
            iVar26 = iVar26 + 0x20;
            uVar27 = puVar18[lVar9 + lVar10 + 1];
            if (uVar27 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar14 - lVar9 == lVar10) goto LAB_14333c750;
          }
          uVar25 = (ulonglong)(iVar24 + (int)lVar10 + 1);
          uVar23 = 0xffffffff;
        }
        uVar20 = (ulonglong)(-uVar27 & uVar27);
        uVar3 = uVar20 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar24 = (iVar26 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while (iVar24 < iVar8);
    }
  }
LAB_14333c750:
  if ((local_f0 ^ (ulonglong)auStack_5d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333c7e0 FUN_14333c7e0 body=59 status=ok
// SIG undefined FUN_14333c7e0(void)

void FUN_14333c7e0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cab95c0;
  if (DAT_14cab95c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cab95c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014333c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14333c81b FUN_14333c81b body=55 status=ok
// SIG undefined FUN_14333c81b(void)

void FUN_14333c81b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab9628 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab9628 = FUN_14171c317(FUN_14635be7c,uVar1,L"EWidgetTickFrequency");
  }
  return;
}



// FUNCTION 14333c852 FUN_14333c852 body=55 status=ok
// SIG undefined FUN_14333c852(void)

void FUN_14333c852(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab9640 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab9640 = FUN_14171c317(FUN_14635beab,uVar1,L"EWidgetAnimationEvent");
  }
  return;
}



// FUNCTION 14333c889 FUN_14333c889 body=55 status=ok
// SIG undefined FUN_14333c889(void)

void FUN_14333c889(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab96a0 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14cab96a0 = FUN_14171c317(FUN_14635c0a0,uVar1,L"EUMGSequencePlayMode");
  }
  return;
}



// FUNCTION 14333c8c0 FUN_14333c8c0 body=123 status=ok
// SIG undefined FUN_14333c8c0(void)

longlong FUN_14333c8c0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  
  lVar1 = FUN_14779c360();
  if (lVar1 != 0) {
    FUN_1476c779e(lVar1,param_3,param_4,param_5,param_6,param_7);
    (**(code **)(*param_1 + 0x328))(param_1,lVar1);
    FUN_1417aaa18(param_1);
  }
  return lVar1;
}



// FUNCTION 14333c93c FUN_14333c93c body=142 status=ok
// SIG undefined FUN_14333c93c(void)

longlong FUN_14333c93c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  longlong lVar1;
  
  lVar1 = FUN_14779c360();
  if (lVar1 != 0) {
    FUN_1476c7a24(lVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    (**(code **)(*param_1 + 0x328))(param_1,lVar1);
    FUN_1417aaa18(param_1);
  }
  return lVar1;
}



// FUNCTION 14333c9ca FUN_14333c9ca body=69 status=ok
// SIG undefined FUN_14333c9ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333c9ca(void)

{
  _DAT_14caba870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333ca0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caba878,1);
  return;
}



// FUNCTION 14333ca1c FUN_14333ca1c body=181 status=ok
// SIG undefined FUN_14333ca1c(void)

void FUN_14333ca1c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x3c0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3b8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x2a8))(plVar3,*param_2,*(undefined1 *)(param_2 + 1));
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 != 0) {
    lVar4 = FUN_140e64c66();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      local_48 = *(undefined4 *)param_2;
      uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_40 = *(undefined4 *)(param_2 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_14333ca1c(lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333cad2 FUN_14333cad2 body=226 status=ok
// SIG undefined FUN_14333cad2(void)

undefined8 FUN_14333cad2(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  longlong **local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || (*param_1 == 0)) {
    param_1[1] = 0;
  }
  else {
    local_38 = &local_20;
    local_20 = 0;
    local_28 = &local_40;
    local_30 = &LAB_14333e22e;
    local_40 = param_1;
    FUN_140ec5510(param_2,&local_30);
    FUN_14485c47a(param_1 + 1,local_20);
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      uVar1 = *(uint *)(param_1 + 1);
      uVar2 = 0;
      if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14333caff;
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 != (undefined8 *)0x0) &&
         ((*(int *)(puVar3 + 2) == *(int *)((longlong)param_1 + 0xc) &&
          ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
        uVar2 = *puVar3;
        goto LAB_14333caff;
      }
    }
  }
  uVar2 = 0;
LAB_14333caff:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333cbb6 FUN_14333cbb6 body=149 status=ok
// SIG undefined FUN_14333cbb6(void)

undefined4
FUN_14333cbb6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x270) & 2) != 0) {
    local_38 = param_5;
    local_30 = param_6;
    local_28 = param_7;
    local_20 = param_8;
    local_1c = param_6;
    local_48 = param_3;
    local_40 = param_4;
    FUN_14779689e(param_1,&local_48);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333cc51 FUN_14333cc51 body=55 status=ok
// SIG undefined FUN_14333cc51(void)

void FUN_14333cc51(void)

{
  undefined8 uVar1;
  
  if (DAT_14caba4e8 == 0) {
    uVar1 = FUN_140eaaf27();
    DAT_14caba4e8 = FUN_14171c317(FUN_14635d43f,uVar1,L"EBindingKind");
  }
  return;
}



// FUNCTION 14333cc88 FUN_14333cc88 body=69 status=ok
// SIG undefined FUN_14333cc88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333cc88(void)

{
  _DAT_14caba528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333ccca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caba530,1);
  return;
}



// FUNCTION 14333cccd FUN_14333cccd body=123 status=ok
// SIG undefined FUN_14333cccd(void)

void FUN_14333cccd(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == 0) {
    local_20 = 0;
  }
  else {
    FUN_1405e2bf2();
    local_20 = *param_2;
    if ((local_20 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  FUN_14779ec92(param_1,&local_20,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333cd49 FUN_14333cd49 body=431 status=ok
// SIG undefined FUN_14333cd49(void)

void FUN_14333cd49(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  
  if ((((((DAT_14caba710 != 0) && (DAT_14caba70c != 0)) && (-1 < (int)DAT_14caba708)) &&
       (((int)DAT_14caba708 < DAT_14c9647dc &&
        (plVar9 = (longlong *)
                  ((ulonglong)((DAT_14caba708 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14caba708 >> 0x10) * 8)),
        plVar9 != (longlong *)0x0)))) &&
      (((int)plVar9[2] == DAT_14caba70c &&
       (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) &&
     (lVar5 = FUN_1400796d0(*(undefined8 *)(*plVar9 + 0x10),DAT_14caba710,1), lVar5 != 0)) {
    if (DAT_14caba70c != 0) {
      plVar9 = (longlong *)0x0;
      if (((int)DAT_14caba708 < 0) || (DAT_14c9647dc <= (int)DAT_14caba708)) goto LAB_14333ce3e;
      puVar8 = (undefined8 *)
               ((ulonglong)((DAT_14caba708 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(DAT_14caba708 >> 0x10) * 8));
      if ((puVar8 != (undefined8 *)0x0) &&
         ((*(int *)(puVar8 + 2) == DAT_14caba70c && ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
        plVar9 = (longlong *)*puVar8;
        goto LAB_14333ce3e;
      }
    }
    plVar9 = (longlong *)0x0;
LAB_14333ce3e:
    uVar6 = FUN_14477b072(plVar9,DAT_14caba710);
                    /* WARNING: Could not recover jumptable at 0x00014333ce66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x248))(plVar9,uVar6,0,*(code **)(*plVar9 + 0x248));
    return;
  }
  lVar5 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar7 = FUN_1413f862e();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) goto LAB_14333ce97;
  }
  lVar5 = 0;
LAB_14333ce97:
  plVar9 = *(longlong **)(lVar5 + 0x1368);
  if (plVar9 != (longlong *)0x0) {
    iVar4 = (int)plVar9[1];
    do {
      if (iVar4 == 0) {
        return;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
    if (*(longlong *)(lVar5 + 0x1360) != 0) {
      FUN_14698158e();
    }
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014333cee5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14333cf1a FUN_14333cf1a body=149 status=ok
// SIG undefined FUN_14333cf1a(void)

void FUN_14333cf1a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14a55d570;
  puVar1[5] = &PTR_FUN_14a55d810;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x6c) = 0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  return;
}



// FUNCTION 14333cfb0 FUN_14333cfb0 body=48 status=ok
// SIG undefined FUN_14333cfb0(void)

longlong FUN_14333cfb0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_147790322(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14333cfe0 FUN_14333cfe0 body=48 status=ok
// SIG undefined FUN_14333cfe0(void)

longlong FUN_14333cfe0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x168;
  FUN_140cdcea6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14333d06c FUN_14333d06c body=1129 status=ok
// SIG undefined FUN_14333d06c(void)

void FUN_14333d06c(void)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  undefined1 auStack_e8 [36];
  int local_c4;
  longlong *local_c0;
  ulonglong local_b8;
  longlong local_b0;
  undefined1 *local_a8;
  longlong **local_a0;
  longlong *local_98;
  int local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  FUN_1477aa22a(&local_68);
  uVar12 = local_58 & 0xffffffff;
  if ((-1 < (int)local_58) && ((int)local_58 < (int)lStack_60)) {
    do {
      plVar13 = *(longlong **)(local_68 + (uVar12 & 0xffffffff) * 8);
      if ((*(uint *)((longlong)plVar13 + 0xd4) & 0x82000001) == 0) {
        local_70 = plVar13[3];
        FUN_1400021e4(&local_70,&local_98);
        iVar6 = local_90;
        plVar2 = local_98;
        if ((plVar13[0x22] == 0) && ((**(code **)(*plVar13 + 1000))(plVar13), plVar13[0x22] == 0)) {
          uVar9 = 0;
        }
        else {
          uVar9 = -*(int *)((longlong)plVar13 + 0x5c) &
                  ((int)plVar13[0xb] + *(int *)((longlong)plVar13 + 0x5c)) - 1U;
          local_70 = CONCAT44(local_70._4_4_,uVar9);
          if (plVar13[0x76] != 0) {
            local_a8 = &LAB_14333d4d6;
            local_a0 = &local_98;
            local_98 = &local_70;
            FUN_140ec5510(plVar13[0x76],&local_a8);
            uVar9 = (uint)local_70;
          }
        }
        uVar12 = uStack_80;
        lVar15 = (longlong)(int)uStack_80;
        uVar5 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
        if (uStack_80._4_4_ < uVar5) {
          FUN_14333d4f2(&local_88,uVar12 & 0xffffffff);
        }
        plVar13 = local_88 + lVar15 * 3;
        *plVar13 = 0;
        *(int *)(plVar13 + 1) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)((longlong)plVar13 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(plVar13,iVar6,0);
          memcpy((void *)*plVar13,plVar2,(longlong)iVar6 * 2);
        }
        *(uint *)(plVar13 + 2) = uVar9;
        if (plVar2 != (longlong *)0x0) {
          FUN_1400020a8(plVar2);
        }
      }
      uVar12 = (longlong)(int)local_58;
      do {
        uVar7 = uVar12;
        uVar12 = uVar7 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)uVar12);
        if ((longlong)(int)lStack_60 <= (longlong)uVar12) break;
      } while (*(longlong *)(local_68 + uVar12 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)uVar12 < (int)lStack_60));
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar12 = (ulonglong)(int)uStack_80;
  local_c0 = local_88;
  if (0 < (longlong)uVar12) {
    uVar7 = 0;
    plVar13 = local_88;
    do {
      if ((uVar7 + 1 < uVar12) && ((int)plVar13[2] < (int)plVar13[5])) {
        local_58 = plVar13[2];
        local_68 = *plVar13;
        lStack_60 = plVar13[1];
        plVar13[2] = plVar13[5];
        *plVar13 = plVar13[3];
        plVar13[1] = plVar13[4];
        plVar13[5] = local_58;
        plVar13[3] = local_68;
        plVar13[4] = lStack_60;
      }
      uVar7 = uVar7 + 2;
      plVar13 = plVar13 + 6;
    } while (uVar7 < uVar12);
    if (2 < (int)uStack_80) {
      iVar6 = 2;
      do {
        local_c4 = iVar6 * 2;
        local_b0 = (longlong)local_c4;
        lVar15 = 0;
        do {
          iVar14 = (int)uStack_80 - (int)lVar15;
          if (local_c4 <= iVar14) {
            iVar14 = local_c4;
          }
          if (iVar6 < iVar14 && 0 < iVar6) {
            iVar10 = 0;
            iVar11 = iVar6;
            while( true ) {
              iVar16 = 0;
              if (iVar11 - iVar10 != 0 && iVar10 <= iVar11) {
                iVar16 = 0;
                uVar9 = iVar11 - iVar10;
                do {
                  iVar18 = (uVar9 >> 1) + iVar16;
                  if ((int)local_88[lVar15 * 3 + (longlong)iVar11 * 3 + 2] <=
                      (int)local_88[lVar15 * 3 + (longlong)iVar10 * 3 + (longlong)iVar18 * 3 + 2]) {
                    iVar16 = iVar18 + (uVar9 & 1);
                  }
                  bVar3 = 1 < uVar9;
                  uVar9 = uVar9 >> 1;
                } while (bVar3);
              }
              iVar16 = iVar16 + iVar10;
              iVar10 = iVar11 - iVar16;
              if (iVar10 == 0 || iVar11 < iVar16) break;
              uVar9 = iVar14 - iVar11;
              if (uVar9 == 0 || iVar14 < iVar11) {
                iVar18 = 0;
              }
              else {
                plVar13 = local_88 + lVar15 * 3 + (longlong)iVar16 * 3;
                iVar18 = 0;
                uVar7 = (ulonglong)uVar9;
                do {
                  uVar7 = uVar7 >> 1;
                  uVar5 = (uint)uVar7 + iVar18;
                  if ((int)plVar13[2] <
                      (int)local_88[lVar15 * 3 + (longlong)iVar11 * 3 + (ulonglong)uVar5 * 3 + 2]) {
                    iVar18 = uVar5 + (uVar9 & 1);
                  }
                  bVar3 = 1 < uVar9;
                  uVar9 = (uint)uVar7;
                } while (bVar3);
                iVar11 = iVar11 + iVar18;
                if (0 < iVar18) {
                  plVar2 = plVar13 + (longlong)(iVar11 - iVar16) * 3;
                  plVar8 = plVar13 + (longlong)iVar10 * 3;
                  plVar17 = plVar13 + (longlong)iVar10 * 3;
                  do {
                    while( true ) {
                      plVar1 = plVar8 + 3;
                      local_58 = plVar13[2];
                      local_68 = *plVar13;
                      lStack_60 = plVar13[1];
                      plVar13[2] = plVar8[2];
                      lVar4 = plVar8[1];
                      *plVar13 = *plVar8;
                      plVar13[1] = lVar4;
                      plVar13 = plVar13 + 3;
                      plVar8[2] = local_58;
                      *plVar8 = local_68;
                      plVar8[1] = lStack_60;
                      if (plVar1 == plVar2) break;
                      plVar8 = plVar1;
                      if (plVar13 == plVar17) {
                        plVar17 = plVar1;
                      }
                    }
                    plVar8 = plVar17;
                  } while (plVar13 != plVar17);
                }
              }
              if ((iVar14 <= iVar11) || (iVar10 = iVar16 + iVar18 + 1, iVar11 <= iVar10)) break;
            }
          }
          lVar15 = lVar15 + local_b0;
        } while (lVar15 < (longlong)uVar12);
        iVar6 = local_c4;
        local_b8 = uVar12;
      } while (local_c4 < (int)uStack_80);
    }
  }
  FUN_14333d65d(local_88);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14333d4f2 FUN_14333d4f2 body=363 status=ok
// SIG undefined FUN_14333d4f2(void)

void FUN_14333d4f2(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14333d588;
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
LAB_14333d588:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14333d65d FUN_14333d65d body=43 status=ok
// SIG undefined FUN_14333d65d(void)

void FUN_14333d65d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14333d68c FUN_14333d68c body=71 status=ok
// SIG undefined FUN_14333d68c(void)

void FUN_14333d68c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014333d6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14333d6de FUN_14333d6de body=12 status=ok
// SIG undefined FUN_14333d6de(void)

void FUN_14333d6de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014333d6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14333d6ea FUN_14333d6ea body=83 status=ok
// SIG undefined FUN_14333d6ea(void)

undefined8 * FUN_14333d6ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a55e6a0;
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



// FUNCTION 14333d764 FUN_14333d764 body=282 status=ok
// SIG undefined FUN_14333d764(void)

undefined8 * FUN_14333d764(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14333d73d);
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



// FUNCTION 14333d87e FUN_14333d87e body=170 status=ok
// SIG undefined FUN_14333d87e(void)

ulonglong FUN_14333d87e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = (ulonglong)DAT_14c7585c8;
  param_1[0x15] = 0;
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    param_1[0x16] = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar4 = (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    plVar3 = (longlong *)param_1[0x16];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        uVar4 = (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
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
                    /* WARNING: Could not recover jumptable at 0x00014333d91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)*param_1)(param_1,1);
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 14333d928 FUN_14333d928 body=169 status=ok
// SIG undefined FUN_14333d928(void)

void FUN_14333d928(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = *param_1;
    lVar6 = FUN_1405e2bf2();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      uVar3 = *(undefined4 *)(lVar2 + 700);
      uVar4 = *(undefined4 *)(lVar2 + 0x2c0);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c4);
      *(undefined4 *)(lVar1 + 0x2b8) = *(undefined4 *)(lVar2 + 0x2b8);
      *(undefined4 *)(lVar1 + 700) = uVar3;
      *(undefined4 *)(lVar1 + 0x2c0) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c4) = uVar5;
      *(undefined8 *)(lVar1 + 0x2c8) = 0;
      if (*(longlong *)(lVar1 + 0x268) != 0) {
        local_30 = lVar2 + 0x2b8;
        local_20 = &local_30;
        local_28 = FUN_14333da3e;
        FUN_140ec5510();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333d9da FUN_14333d9da body=99 status=ok
// SIG undefined FUN_14333d9da(void)

void FUN_14333d9da(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar4 = FUN_145a6970c();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      param_1 = (longlong *)*param_1;
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 14333da3e FUN_14333da3e body=161 status=ok
// SIG undefined FUN_14333da3e(void)

void FUN_14333da3e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined4 *local_30;
  code *local_28;
  undefined4 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar6 = FUN_1405e2bf2();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      puVar2 = (undefined4 *)*param_1;
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(lVar1 + 0x2b8) = *puVar2;
      *(undefined4 *)(lVar1 + 700) = uVar3;
      *(undefined4 *)(lVar1 + 0x2c0) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c4) = uVar5;
      *(undefined8 *)(lVar1 + 0x2c8) = 0;
      if (*(longlong *)(lVar1 + 0x268) != 0) {
        local_20 = &local_30;
        local_28 = FUN_14333da3e;
        local_30 = puVar2;
        FUN_140ec5510();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333dae0 FUN_14333dae0 body=29 status=ok
// SIG undefined FUN_14333dae0(void)

undefined8 FUN_14333dae0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14333db12 FUN_14333db12 body=108 status=ok
// SIG undefined FUN_14333db12(void)

void FUN_14333db12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55eab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a55ea40;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 14333db7e FUN_14333db7e body=108 status=ok
// SIG undefined FUN_14333db7e(void)

void FUN_14333db7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a55eab0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a55ea40;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 14333dbea FUN_14333dbea body=141 status=ok
// SIG undefined FUN_14333dbea(void)

void FUN_14333dbea(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a55eab0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a55ea40;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014333dc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14333dc78 FUN_14333dc78 body=53 status=ok
// SIG undefined FUN_14333dc78(void)

undefined8 * FUN_14333dc78(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1476c4144(param_1 + 0x18,param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_140760c2c(lVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14333dcae FUN_14333dcae body=118 status=ok
// SIG undefined FUN_14333dcae(void)

undefined8 FUN_14333dcae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_1476c4144(param_1 + 0x18);
  if (lVar3 != 0) {
    FUN_140760c2c(lVar3,local_20);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_18 + 0x10))(local_18);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333dd26 FUN_14333dd26 body=93 status=ok
// SIG undefined FUN_14333dd26(void)

void FUN_14333dd26(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = *param_2;
  local_20 = &local_28;
  local_18 = &local_30;
  FUN_1477ac8e2(*param_1,local_c);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333dd84 FUN_14333dd84 body=273 status=ok
// SIG undefined FUN_14333dd84(void)

void FUN_14333dd84(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    plVar2 = (longlong *)*param_1;
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      lVar3 = *(longlong *)(lVar1 + 0x18);
      uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar7 = (uint)lVar3 & 0xffff;
      plVar6 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar2[8];
      }
      iVar5 = *(int *)((longlong)plVar6 +
                      (ulonglong)
                      ((int)plVar2[9] - 1U &
                      (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar5 != -1) {
        do {
          plVar6 = (longlong *)(*plVar2 + (longlong)iVar5 * 0x18);
          if (*plVar6 == lVar3) {
            if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
              plVar2 = (longlong *)plVar6[1];
              (**(code **)(*plVar2 + 0x200))(plVar2,*(undefined8 *)param_1[1],lVar1,0);
              (**(code **)(*plVar2 + 0x220))(plVar2,*(undefined8 *)param_1[1],0);
            }
            break;
          }
          iVar5 = (int)plVar6[2];
        } while (iVar5 != -1);
      }
    }
    plVar2 = *(longlong **)(lVar1 + 0xf0);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014333de89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2a0))(plVar2,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2]);
      return;
    }
  }
  return;
}



// FUNCTION 14333de96 FUN_14333de96 body=450 status=ok
// SIG undefined FUN_14333de96(void)

void FUN_14333de96(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14333dfb1:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14333dfee:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14333deec;
LAB_14333dee1:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14333deec:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014333df18;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14333df6e:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14333dfee;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14333dfb1;
code_r0x00014333df18:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14333df6e;
    }
  }
  goto LAB_14333dee1;
}



// FUNCTION 14333e058 FUN_14333e058 body=453 status=ok
// SIG undefined FUN_14333e058(void)

void FUN_14333e058(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x60);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14333e176:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14333e1b3:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x60;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14333e0b1;
LAB_14333e0a6:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14333e0b1:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x2aa) goto code_r0x00014333e0dd;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x18 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14333e133:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14333e1b3;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14333e176;
code_r0x00014333e0dd:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14333e133;
    }
  }
  goto LAB_14333e0a6;
}



// FUNCTION 14333e246 FUN_14333e246 body=55 status=ok
// SIG undefined FUN_14333e246(void)

void FUN_14333e246(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147771f02(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 14333e27d FUN_14333e27d body=3182 status=ok
// SIG undefined FUN_14333e27d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333e27d(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  char **local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_58;
  int local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14a547010;
  local_78 = (char **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a547030,1,0);
  FUN_1446f470e(&local_58,L"ActiveWidgetIndex",1);
  DAT_14cab9278 = local_58;
  DAT_14cab9280 = 3;
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a547970,1,0);
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a547ff0,1,0);
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5486c0,1,0);
  local_58 = (char *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14cab92e8,L"WindowTitleBar.ForceWindowButtonsHidden",&local_58,
                L"If true, force the window title bar buttons to be hidden.");
  atexit(FUN_14333919d);
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a548e00,1,0);
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a549620,1,0);
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a549ff0,1,0);
  FUN_1446f470e(&DAT_14cab93c8,L"DragCancelled",1);
  FUN_1446f470e(&DAT_14cab93d8,L"Dragged",1);
  FUN_1446f470e(&DAT_14cab93e8,L"Drop",1);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14a54aa30;
  local_78 = (char **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a54aa50,1,0);
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a54c460,1,0);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_58,&DAT_14cab94a8);
  if (cVar2 == '\0') {
    _DAT_14cab94a8 = 0;
    uRam000000014cab94b0 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = (char **)0x1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a54ccf0,1,&PTR_FUN_14a54ccc0);
  _DAT_14cab94e8 = 0x4050000000000000;
  _DAT_14cab94f0 = 0x4050000000000000;
  local_58 = "SlateRHIRenderer";
  local_50 = 0x10;
  local_4c = 0;
  uVar3 = FUN_14001a6c0(&local_58,1);
  _DAT_14cab94f8 = (ulonglong)uVar3;
  local_58 = "AssetRegistry";
  local_50 = 0xd;
  local_4c = 0;
  uVar3 = FUN_14001a6c0(&local_58,1);
  _DAT_14cab9500 = (ulonglong)uVar3;
  FUN_146029386();
  local_58 = (char *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_58 + 0x10) = lVar4;
  *(undefined ***)local_58 = &PTR_FUN_149e17030;
  *(code **)(local_58 + 0x18) = FUN_143339fd4;
  ppuStack_70 = (undefined **)((ulonglong)ppuStack_70 & 0xffffffff00000000);
  local_78 = &local_58;
  FUN_14171ec12(&DAT_14cab9508,L"Slate.EnableDesignerRetainedRendering",&DAT_14c7610c0,
                L"Controls if retainer renders in designer; 0 - Never; 1 - Per Widget Properties");
  if (local_50 == 0) {
LAB_14333e666:
    if (local_58 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_14333e666;
  }
  atexit(FUN_14333a006);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cab9518,L"Slate.EnableRetainedRendering",&DAT_14c7610c4,
                L"Whether to attempt to render things in SRetainerWidgets to render targets first.")
  ;
  atexit(FUN_14333a04b);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cab9528,L"Slate.EnableRetainedRenderingWithLocalTransform",&DAT_14c7610c8,
                L"This console variable is no longer useful, as the SRetainerWidget render bugs workedaround by it have been fixed. It will be removed."
               );
  atexit(FUN_14333a090);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cab9540,L"Slate.DeferRetainedRenderingRenderThread",&DAT_14cab9538,
                L"Whether or not to defer retained rendering to happen at the same time as the rest of slate render thread work"
               );
  atexit(FUN_14333a0d5);
  DAT_14cab9568 = 0;
  _DAT_14cab9570 = 0x300000000;
  atexit((_func_5014 *)&LAB_14333a11a);
  DAT_14cab9578 = DAT_14c872be0;
  DAT_14cab9580 = 0;
  DAT_14cab9584 = 1;
  atexit((_func_5014 *)&LAB_14333a12b);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_141471170(&DAT_14cab9588,L"Slate.WorldWidgetZOrder",&DAT_14c7610cc,
                L"Whether to re-order world widgets projected to screen by their view point distance\n 0: Disable re-ordering\n 1: Re-order by distance (default, less batching, less artifacts when widgets overlap)"
               );
  atexit(FUN_14333b64b);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14cab9598,L"Slate.WorldWidgetIgnoreNotVisibleWidgets",&DAT_14cab95a8,
                L"Whether to not update the position of world widgets if they are not visible - to prevent invalidating the whole layer unnecessarily"
               );
  atexit(FUN_14333b690);
  _DAT_14cab95ac = 0xffffffff;
  _DAT_14cab95b0 = 0;
  local_58 = (char *)0x800000014a50ca4a;
  local_44 = 3;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14635bcfe(&local_58);
  _DAT_14cab95b8 = 0;
  DAT_14cab95c0 = 0;
  atexit(FUN_14333c7e0);
  _DAT_14cab95c8 = &DAT_4030000000000000;
  _DAT_14cab95d0 = &DAT_4030000000000000;
  _DAT_14cab95d8 = 0x4034000000000000;
  _DAT_14cab95e0 = 0x4034000000000000;
  _DAT_14cab95e8 = 0x4044000000000000;
  _DAT_14cab95f0 = 0x4044000000000000;
  _DAT_14cab95f8 = 0x4050000000000000;
  _DAT_14cab9600 = 0x4050000000000000;
  FUN_1446f470e(&DAT_14cab9700,L"Construct",1);
  FUN_1446f470e(&DAT_14cab9710,L"Destruct",1);
  FUN_1446f470e(&DAT_14cab9780,L"IsInteractable",1);
  FUN_1446f470e(&DAT_14cab97a8,L"OnAddedToFocusPath",1);
  FUN_1446f470e(&DAT_14cab97b8,L"OnAnalogValueChanged",1);
  FUN_1446f470e(&DAT_14cab97c8,L"OnAnimationFinished",1);
  FUN_1446f470e(&DAT_14cab97d8,L"OnAnimationStarted",1);
  FUN_1446f470e(&DAT_14cab97e8,L"OnDragCancelled",1);
  FUN_1446f470e(&DAT_14cab97f8,L"OnDragDetected",1);
  FUN_1446f470e(&DAT_14cab9808,L"OnDragEnter",1);
  FUN_1446f470e(&DAT_14cab9818,L"OnDragLeave",1);
  FUN_1446f470e(&DAT_14cab9828,L"OnDragOver",1);
  FUN_1446f470e(&DAT_14cab9838,L"OnDrop",1);
  FUN_1446f470e(&DAT_14cab9848,L"OnFocusLost",1);
  FUN_1446f470e(&DAT_14cab9858,L"OnFocusReceived",1);
  FUN_1446f470e(&DAT_14cab9868,L"OnInitialized",1);
  FUN_1446f470e(&DAT_14cab9878,L"OnKeyChar",1);
  FUN_1446f470e(&DAT_14cab9888,L"OnKeyDown",1);
  FUN_1446f470e(&DAT_14cab9898,L"OnKeyUp",1);
  FUN_1446f470e(&DAT_14cab98a8,L"OnMotionDetected",1);
  FUN_1446f470e(&DAT_14cab98b8,L"OnMouseButtonDoubleClick",1);
  FUN_1446f470e(&DAT_14cab98c8,L"OnMouseButtonDown",1);
  FUN_1446f470e(&DAT_14cab98d8,L"OnMouseButtonUp",1);
  FUN_1446f470e(&DAT_14cab98e8,L"OnMouseCaptureLost",1);
  FUN_1446f470e(&DAT_14cab98f8,L"OnMouseEnter",1);
  FUN_1446f470e(&DAT_14cab9908,L"OnMouseLeave",1);
  FUN_1446f470e(&DAT_14cab9918,L"OnMouseMove",1);
  FUN_1446f470e(&DAT_14cab9928,L"OnMouseWheel",1);
  FUN_1446f470e(&DAT_14cab9938,L"OnPaint",1);
  FUN_1446f470e(&DAT_14cab9948,L"OnPreviewKeyDown",1);
  FUN_1446f470e(&DAT_14cab9958,L"OnPreviewMouseButtonDown",1);
  FUN_1446f470e(&DAT_14cab9968,L"OnRemovedFromFocusPath",1);
  FUN_1446f470e(&DAT_14cab9978,L"OnTouchEnded",1);
  FUN_1446f470e(&DAT_14cab9988,L"OnTouchForceChanged",1);
  FUN_1446f470e(&DAT_14cab9998,L"OnTouchGesture",1);
  FUN_1446f470e(&DAT_14cab99a8,L"OnTouchMoved",1);
  FUN_1446f470e(&DAT_14cab99b8,L"OnTouchStarted",1);
  FUN_1446f470e(&DAT_14cab99f8,L"PreConstruct",1);
  FUN_1446f470e(&DAT_14cab9af8,L"Tick",1);
  ppuStack_70 = &PTR_FUN_14a5558f0;
  local_68 = 3;
  local_78 = (char **)0x4;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a5559f0,1,&PTR_FUN_14a555950);
  local_58 = (char *)CONCAT71(local_58._1_7_,1);
  local_78 = (char **)((ulonglong)local_78 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14caba870,L"Widget.UseParallelAnimation",&local_58,
                L"Use multi-threaded evaluation for widget animations.");
  atexit(FUN_14333c9ca);
  FUN_14570e3a0(&DAT_14cab9b4c);
  _DAT_14cab9b84 = 0xbf800000bf800000;
  uRam000000014cab9b8c = 0xbf800000bf800000;
  _DAT_14cab9b94 = &DAT_3f8000003f800000;
  puRam000000014cab9b9c = &DAT_3f8000003f800000;
  _DAT_14cab9ba4 = &DAT_3f8000003f800000;
  puRam000000014cab9bac = &DAT_3f8000003f800000;
  _DAT_14cab9bb4 = 0x3f19999a;
  uRam000000014cab9bb8 = 0x3f19999a;
  uRam000000014cab9bbc = 0x3f19999a;
  uRam000000014cab9bc0 = 0x3f19999a;
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14a556ad0;
  local_78 = (char **)0x1;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a556b20,1,&PTR_FUN_14a556af0);
  local_58 = (char *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_58 + 0x10) = lVar4;
  *(undefined ***)local_58 = &PTR_FUN_149e062c0;
  *(code **)(local_58 + 0x18) = FUN_14333d06c;
  local_78 = (char **)CONCAT44(local_78._4_4_,1);
  FUN_14152bcb8(&DAT_14caba528,L"Widget.DumpTemplateSizes",
                L"Dump the sizes of all widget class templates in memory",&local_58);
  if (local_50 != 0) {
    if (local_58 == (char *)0x0) goto LAB_14333ee04;
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14333ee04:
  atexit(FUN_14333cc88);
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a55b830,1,0);
  _DAT_14caba708 = 0;
  DAT_14caba710 = 0;
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a55d380,1,0);
  local_68 = 0;
  local_78 = (char **)0x0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/UMG",&PTR_FUN_14a55d840,1,0);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333eeec FUN_14333eeec body=55 status=ok
// SIG undefined FUN_14333eeec(void)

void FUN_14333eeec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabaa70 == 0) {
    uVar1 = FUN_1411fd1ec();
    DAT_14cabaa70 = FUN_14171c317(FUN_14635f35a,uVar1,L"ECameraFocusMethod");
  }
  return;
}



// FUNCTION 14333efb2 FUN_14333efb2 body=454 status=ok
// SIG undefined FUN_14333efb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333efb2(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CinematicCamera",&PTR_FUN_14a55f800,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/CinematicCamera",&PTR_FUN_14a560200,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/CinematicCamera",&PTR_FUN_14a560d60,1,&PTR_FUN_14a560d30);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14caba910);
  if (cVar1 == '\0') {
    _DAT_14caba910 = 0;
    uRam000000014caba918 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/CinematicCamera",&PTR_FUN_14a562b20,1,0);
  ppuStack_60 = &PTR_FUN_14a564e50;
  local_58 = 1;
  local_68 = 8;
  FUN_14282b410(L"/Script/CinematicCamera",&PTR_FUN_14a564fb0,1,&PTR_FUN_14a564e70);
  FUN_140056680(&DAT_14cabab40,L"/Script/CinematicCamera.CineCameraComponent");
  atexit((_func_5014 *)&LAB_14333ef23);
  _DAT_14cabab50 = 0xffffffff;
  _DAT_14cabab54 = 0;
  local_48 = -0x7ffffffeb5a9afd0;
  local_34 = 0xf;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14635f846(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14333f17c FUN_14333f17c body=69 status=ok
// SIG undefined FUN_14333f17c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14333f17c(void)

{
  _DAT_14cabab60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014333f1be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabab68,1);
  return;
}


