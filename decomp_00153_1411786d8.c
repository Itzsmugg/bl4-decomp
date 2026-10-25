// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1411786d8 FUN_1411786d8 body=92 status=ok
// SIG undefined FUN_1411786d8(void)

void FUN_1411786d8(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14581f0ec(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar2 * 0x30;
  *(undefined8 *)(lVar3 + lVar4) = *param_2;
  *(undefined8 *)(lVar3 + 8 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar4) = 0xa003;
  puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar4) = 0;
  return;
}



// FUNCTION 141178734 FUN_141178734 body=72 status=ok
// SIG undefined FUN_141178734(void)

void FUN_141178734(longlong param_1)

{
  longlong lVar1;
  ushort *puVar2;
  char cVar3;
  
  if (((*(byte *)(param_1 + 0x8c) & 0x80) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 != 0)) {
    cVar3 = FUN_14117877c(lVar1);
    if ((cVar3 != '\0') && (puVar2 = *(ushort **)(lVar1 + 0x80), puVar2 != (ushort *)0x0)) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 14117877c FUN_14117877c body=308 status=ok
// SIG undefined FUN_14117877c(void)

ulonglong FUN_14117877c(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_1418fe658();
  lVar6 = *plVar4;
  SRWLock = (PSRWLOCK)(lVar6 + 0x1c0);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0xac);
  iVar2 = *(int *)(lVar6 + 0xd8);
  if (iVar1 != iVar2) {
    *(int *)(param_1 + 0xac) = iVar2;
    FUN_141353eda(lVar6,&local_50);
    lVar6 = param_1 + 0x118;
    FUN_14665a124(lVar6,local_48);
    if ((longlong)local_48 != 0) {
      lVar7 = (longlong)local_48 << 6;
      lVar8 = local_50;
      do {
        uVar5 = FUN_148ee853a(lVar6);
        FUN_148e6a1f2(uVar5,lVar8);
        lVar8 = lVar8 + 0x40;
        lVar7 = lVar7 + -0x40;
      } while (lVar7 != 0);
    }
    *(byte *)(param_1 + 0x128) = *(byte *)(param_1 + 0x128) & 0xfe | *(int *)(param_1 + 0x120) == 0;
    puVar3 = *(ushort **)(param_1 + 0x80);
    if (puVar3 != (ushort *)0x0) {
      *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
    }
    FUN_141354349(local_50,local_48);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar6 >> 8),iVar1 != iVar2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411788b2 FUN_1411788b2 body=130 status=ok
// SIG undefined FUN_1411788b2(void)

void FUN_1411788b2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    local_28 = lVar1;
    iVar2 = FUN_141178936(param_1 + 0x120,&local_28);
    if (0 < iVar2) {
      FUN_140457ffc(*param_2 + 0x20,param_1);
      *(undefined1 *)(param_1 + 0xf8) = 1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141178936 FUN_141178936 body=743 status=ok
// SIG undefined FUN_141178936(void)

undefined8 FUN_141178936(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  
  uVar7 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar10 = *param_2;
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xcU) = *(int *)((longlong)plVar6 + 0xcU) + 1;
      UNLOCK();
      LOCK();
      piVar13 = (int *)((longlong)plVar6 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    uVar4 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    uVar10 = (longlong)(int)(uVar4 >> 0x10 ^ uVar4) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar6 + uVar10 * 4);
    if (iVar5 != -1) {
      puVar11 = (ulonglong *)((longlong)plVar6 + uVar10 * 4);
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0x18 + *param_1);
        uVar10 = *param_2;
        plVar6 = (longlong *)param_2[1];
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar6 + 0xcU) = *(int *)((longlong)plVar6 + 0xcU) + 1;
          UNLOCK();
        }
        uVar14 = *puVar8;
        plVar3 = (longlong *)puVar8[1];
        if (plVar3 == (longlong *)0x0) {
LAB_141178b30:
          plVar15 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)((longlong)plVar3 + 0xcU) = *(int *)((longlong)plVar3 + 0xcU) + 1;
          UNLOCK();
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_141178b30;
            LOCK();
            iVar9 = (int)plVar3[1];
            bVar16 = iVar5 == iVar9;
            if (bVar16) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar9 = iVar5;
            }
            iVar5 = iVar9;
            UNLOCK();
            plVar15 = plVar3;
          } while (!bVar16);
        }
        bVar16 = true;
        if (plVar6 != (longlong *)0x0) {
          iVar5 = (int)plVar6[1];
          do {
            if (iVar5 == 0) goto LAB_141178a40;
            LOCK();
            iVar9 = (int)plVar6[1];
            bVar17 = iVar5 == iVar9;
            if (bVar17) {
              *(int *)(plVar6 + 1) = iVar5 + 1;
              iVar9 = iVar5;
            }
            iVar5 = iVar9;
            UNLOCK();
          } while (!bVar17);
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar13 = (int *)((longlong)plVar6 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
            bVar16 = false;
          }
          else {
            bVar16 = false;
          }
        }
LAB_141178a40:
        if (plVar15 == (longlong *)0x0) {
          uVar14 = 0;
        }
        else {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar13 = (int *)((longlong)plVar15 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar13 = (int *)((longlong)plVar3 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar13 = (int *)((longlong)plVar6 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        if (bVar16) {
          uVar10 = 0;
        }
        if (uVar14 == uVar10) {
          iVar5 = (int)*puVar11;
          plVar6 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[8];
          }
          lVar2 = *param_1 + (longlong)iVar5 * 0x18;
          lVar12 = (longlong)*(int *)(lVar2 + 0x14);
          iVar9 = *(int *)((longlong)plVar6 + lVar12 * 4);
          if (iVar9 == iVar5) {
            piVar13 = (int *)((longlong)plVar6 + lVar12 * 4);
          }
          else {
            do {
              piVar13 = (int *)(*param_1 + (longlong)iVar9 * 0x18 + 0x10);
              iVar9 = *piVar13;
            } while (iVar9 != iVar5);
          }
          *piVar13 = *(int *)(lVar2 + 0x10);
          plVar6 = *(longlong **)(*param_1 + 8 + (longlong)iVar5 * 0x18);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar13 = (int *)((longlong)plVar6 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          FUN_141178c1e(param_1,iVar5);
          uVar7 = 1;
          goto LAB_141178b0a;
        }
        iVar5 = (int)puVar8[2];
        puVar11 = puVar8 + 2;
      } while (iVar5 != -1);
      uVar7 = 0;
    }
  }
LAB_141178b0a:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar13 = (int *)((longlong)plVar6 + 0xc);
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (*piVar13 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return uVar7;
}



// FUNCTION 141178c1e FUN_141178c1e body=114 status=ok
// SIG undefined FUN_141178c1e(void)

void FUN_141178c1e(longlong *param_1,int param_2)

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



// FUNCTION 141178c90 FUN_141178c90 body=329 status=ok
// SIG undefined FUN_141178c90(void)

void FUN_141178c90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x58) + 8;
    lVar7 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    do {
      cVar4 = FUN_140e8a950(lVar5,param_2);
      if (cVar4 != '\0') {
        if (lVar5 + -8 != 0) {
          FUN_1402815f4(param_1,&local_40);
          puVar3 = *(undefined8 **)(local_40 + 0x1e0);
          AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 6));
          *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_38 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_38)(local_38);
              LOCK();
              piVar6 = (int *)((longlong)local_38 + 0xc);
              *piVar6 = *piVar6 + -1;
              UNLOCK();
              if (*piVar6 == 0) {
                (**(code **)(*local_38 + 0x10))(local_38);
              }
            }
          }
          iVar2 = *(int *)(lVar5 + 8);
          piVar6 = (int *)*puVar3;
          *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 2;
          if ((longlong)*(int *)(puVar3 + 1) == 0) goto LAB_141178d89;
          lVar7 = (longlong)*(int *)(puVar3 + 1) * 0xd8;
          goto LAB_141178d5b;
        }
        break;
      }
      lVar5 = lVar5 + 0x88;
      lVar7 = lVar7 + -0x88;
    } while (lVar7 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    piVar6 = piVar6 + 0x36;
    lVar7 = lVar7 + -0xd8;
    if (lVar7 == 0) break;
LAB_141178d5b:
    if (*piVar6 == iVar2) {
      if (piVar6 != (int *)0x0) {
        FUN_141178df0(piVar6);
        FUN_141178e82(lVar5 + -8,piVar6);
      }
      break;
    }
  }
LAB_141178d89:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 141178df0 FUN_141178df0 body=145 status=ok
// SIG undefined FUN_141178df0(void)

void FUN_141178df0(longlong param_1)

{
  if ((*(char *)(param_1 + 0xbc) != '\0') || (*(int *)(param_1 + 0xc0) == 0)) {
    *(undefined1 *)(param_1 + 0xbc) = 0;
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  }
  if ((*(char *)(param_1 + 0x90) != '\0') || (*(int *)(param_1 + 0x94) == 0)) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  if ((*(char *)(param_1 + 0x88) != '\0') || (*(int *)(param_1 + 0x8c) == 0)) {
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  if ((*(char *)(param_1 + 0x98) != '\0') || (*(int *)(param_1 + 0x9c) == 0)) {
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  }
  return;
}



// FUNCTION 141178e82 FUN_141178e82 body=392 status=ok
// SIG undefined FUN_141178e82(void)

void FUN_141178e82(uint *param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = param_1 + 2;
  cVar7 = FUN_14117900c(puVar1);
  if (cVar7 != '\0') goto LAB_141178f38;
  if (*(char *)(param_2 + 0x1c) == '\0') {
    lVar8 = FUN_14479d2ce(puVar1);
    if (*(longlong *)(lVar8 + 0x13f8) != 0) {
      lVar8 = FUN_14479d2ce(puVar1);
      puVar5 = *(undefined4 **)(*(longlong *)(lVar8 + 0x3f70) + 8);
      puVar11 = &DAT_14c9485f0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar11 = puVar5;
      }
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      FUN_1400b2348(puVar11,&local_38,1);
      if (1 < (int)plStack_30) {
        FUN_1407753c8(&local_38);
        FUN_1414c0540(&local_38);
        FUN_140775496(param_2 + 0x58,&local_38);
        *(undefined1 *)(param_2 + 0x1c) = 1;
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 1;
  if (param_1[1] == 0) {
LAB_141178f57:
    uVar9 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar9 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar10 + 2) != param_1[1] || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
      goto LAB_141178f57;
      uVar9 = *puVar10;
    }
  }
  FUN_141179052(uVar9,param_2 + 0x28,param_2 + 0x40,&local_38);
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_141178f38:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117900c FUN_14117900c body=70 status=ok
// SIG undefined FUN_14117900c(void)

bool FUN_14117900c(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 141179052 FUN_141179052 body=89 status=ok
// SIG undefined FUN_141179052(void)

void FUN_141179052(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_140082f10();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_14117908c;
  }
  param_1 = 0;
LAB_14117908c:
  FUN_1411790ac(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1411790ac FUN_1411790ac body=177 status=ok
// SIG undefined FUN_1411790ac(void)

undefined8 FUN_1411790ac(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  short local_3c [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_1400f6f32(lVar1);
      if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x68), lVar1 != 0)) {
        FUN_14042af24(lVar1,local_3c,param_1);
        if (-1 < local_3c[0]) {
          local_58 = param_3;
          local_50 = param_4;
          uVar2 = FUN_140b673b8(lVar1,local_3c,0,param_2);
          goto LAB_141179135;
        }
      }
    }
  }
  uVar2 = 0;
LAB_141179135:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117915e FUN_14117915e body=68 status=ok
// SIG undefined FUN_14117915e(void)

void FUN_14117915e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_14476820c(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 1411791a8 FUN_1411791a8 body=228 status=ok
// SIG undefined FUN_1411791a8(void)

longlong FUN_1411791a8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0acd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146406ac4;
    local_38 = &LAB_147d67b27;
    local_40 = FUN_146406b4c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"EngineSubsystem",&DAT_14cb0acd0,&DAT_147d67b26);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0acd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117928e FUN_14117928e body=228 status=ok
// SIG undefined FUN_14117928e(void)

longlong FUN_14117928e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cadaf18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_147ab2592;
    local_40 = &LAB_1463cc12c;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x430;
    FUN_14081cfa3(L"/Script/Engine",L"GameModeBase",&DAT_14cadaf18,FUN_1463cc10a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadaf18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141179378 FUN_141179378 body=228 status=ok
// SIG undefined FUN_141179378(void)

longlong FUN_141179378(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb08880 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458cb926;
    local_38 = &LAB_147d34adf;
    local_40 = &LAB_145c07db2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"SoundEffectSubmixPreset",&DAT_14cb08880,&DAT_147d34ade);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb08880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141179464 FUN_141179464 body=228 status=ok
// SIG undefined FUN_141179464(void)

longlong FUN_141179464(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb368f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14594b4ce;
    local_38 = &LAB_14806806b;
    local_40 = FUN_1464681a8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraStatelessModule",&DAT_14cb368f8,&DAT_14806806a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb368f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117954a FUN_14117954a body=228 status=ok
// SIG undefined FUN_14117954a(void)

longlong FUN_14117954a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb3a7e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145869df6;
    local_38 = &LAB_148119877;
    local_40 = FUN_14646e23e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterfaceArray",&DAT_14cb3a7e8,&DAT_148119876);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3a7e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141179630 FUN_141179630 body=499 status=ok
// SIG undefined FUN_141179630(void)

longlong FUN_141179630(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cacf098 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b47bc4;
      local_38 = &LAB_14798da73;
      local_40 = &LAB_1463b047a;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0xc30;
      FUN_14081cfa3(L"/Script/Engine",L"CameraComponent",&DAT_14cacf098,FUN_1463b0458);
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    iVar2 = *(int *)(lVar1 + 0x38);
    if ((*(int *)(DAT_14cacf098 + 0x38) <= iVar2) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cacf098 + 0x38) * 8) ==
        DAT_14cacf098 + 0x30)) goto LAB_141179811;
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      lVar1 = *(longlong *)(param_1 + 0x10);
      iVar2 = *(int *)(lVar1 + 0x38);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar2) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  param_1 = 0;
LAB_141179811:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411798ba FUN_1411798ba body=330 status=ok
// SIG undefined FUN_1411798ba(void)

void FUN_1411798ba(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_14757f088(param_2,0);
  }
  if (DAT_14cacf098 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b47bc4;
    local_58 = &LAB_14798da73;
    local_60 = &LAB_1463b047a;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0xc30;
    FUN_14081cfa3(L"/Script/Engine",L"CameraComponent",&DAT_14cacf098,FUN_1463b0458);
  }
  local_30 = DAT_14cacf098;
  if ((DAT_14cacf098 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_141179a06(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141179a06 FUN_141179a06 body=1598 status=ok
// SIG undefined FUN_141179a06(void)

void FUN_141179a06(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong local_80;
  int local_74;
  ulonglong local_70;
  uint *local_68;
  longlong local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = *param_2;
  if (lVar12 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_141179eb1:
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
    }
LAB_141179a75:
    lVar15 = *param_2;
    if (lVar12 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar15);
        }
        FUN_14757f350(param_1,param_4);
      }
      else {
        local_58 = lVar15;
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar15);
        }
        FUN_14757f0e8(param_1,&local_58,param_4);
      }
      goto LAB_141179fc7;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1479b7a0c;
      local_b0 = &LAB_1463b464e;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000005;
      local_d0 = 8;
      local_d8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_141179eb1;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
        == DAT_14cad00c8 + 0x30)) {
      lVar12 = *param_2;
      goto LAB_141179a75;
    }
    lVar15 = *param_2;
  }
  bVar14 = lVar15 != 0;
  if (param_3 == '\0') {
    if ((DAT_14c950c29 & bVar14) == 1) {
      FUN_1456cec3c(lVar15);
    }
    puVar8 = (uint *)(param_1 + 0x250);
    uVar13 = *(uint *)(param_1 + 0x268);
    uVar7 = (ulonglong)uVar13;
    if (uVar13 == 0) {
      uVar9 = 1;
      uVar17 = 0;
      uVar3 = 0;
      iVar10 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar8;
      }
      uVar3 = *puVar4;
      if (uVar3 == 0) {
        iVar10 = uVar13 + 0x1e;
        if (-1 < (int)(uVar13 - 1)) {
          iVar10 = uVar13 - 1;
        }
        uVar17 = 0;
        uVar9 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar9 = uVar17;
        }
        iVar10 = 0;
        do {
          if (uVar9 == uVar17) goto LAB_141179fc7;
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar4[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar17 = 0;
        iVar10 = 0;
      }
      uVar9 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar9 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar3 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar13 <= (int)uVar3) {
        uVar3 = uVar13;
      }
    }
    if (uVar3 != uVar13) {
      uVar13 = 0xffffffff;
      local_70 = uVar7;
      local_68 = puVar8;
      do {
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)(int)uVar3 * 0x10);
        local_74 = iVar10;
        if (lVar12 != 0) {
          if ((DAT_14c950c29 & bVar14) == 1) {
            local_80 = param_1;
            FUN_1456cec3c(lVar15);
            uVar7 = local_70;
            param_1 = local_80;
LAB_141179b7b:
            if (DAT_14cad00c8 == 0) {
              local_a0 = &local_50;
              local_50 = FUN_144a7958c;
              local_90 = FUN_14081d0ea;
              local_98 = FUN_14081d0ea;
              local_a8 = &LAB_1479b7a0c;
              local_b0 = &LAB_1463b464e;
              local_b8 = L"Engine";
              local_c0 = 0;
              local_c8 = 0x10000005;
              local_d0 = 8;
              local_d8 = 0x110;
              local_80 = param_1;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
              uVar7 = local_70;
              param_1 = local_80;
              if (DAT_14cad00c8 == 0) goto LAB_141179d9c;
            }
            if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141179d9c;
            lVar11 = 0;
            if (*(longlong *)
                 (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                DAT_14cad00c8 + 0x30) {
              lVar11 = lVar15;
            }
          }
          else {
            if (lVar15 != 0) goto LAB_141179b7b;
LAB_141179d9c:
            lVar11 = 0;
          }
          if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
            local_80 = CONCAT44(local_80._4_4_,uVar13);
            iVar10 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar10 + 1U) {
              FUN_14117a046(param_4,iVar10);
            }
            *(longlong *)(*param_4 + (longlong)iVar10 * 8) = lVar12;
            uVar7 = local_70;
            puVar8 = local_68;
            uVar13 = (uint)local_80;
          }
        }
        uVar13 = uVar13 & ~(uint)uVar9;
        puVar4 = *(uint **)(param_1 + 0x260);
        if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
          puVar4 = puVar8;
        }
        uVar2 = *(uint *)(param_1 + 0x268);
        iVar16 = (int)uVar17;
        lVar12 = (longlong)iVar16;
        uVar3 = puVar4[lVar12] & uVar13;
        iVar10 = local_74;
        if (uVar3 == 0) {
          iVar5 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar5 = uVar2 - 1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = local_74 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar16) {
            iVar6 = iVar16;
          }
          if (iVar16 < iVar5) {
            lVar11 = 0;
            do {
              uVar3 = puVar4[lVar12 + lVar11 + 1];
              if (uVar3 != 0) {
                uVar17 = (ulonglong)(iVar16 + (int)lVar11 + 1);
                uVar13 = 0xffffffff;
                goto LAB_141179c9d;
              }
              iVar10 = iVar10 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar6 - lVar12 != lVar11);
            uVar13 = 0xffffffff;
            iVar16 = iVar6;
          }
          uVar17 = (ulonglong)(iVar16 + 1);
          uVar3 = uVar2;
        }
        else {
LAB_141179c9d:
          uVar9 = (ulonglong)(-uVar3 & uVar3);
          uVar1 = uVar9 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar3 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar3) {
            uVar3 = uVar2;
          }
        }
      } while (uVar3 != (uint)uVar7);
    }
  }
  else {
    local_60 = lVar15;
    if ((bVar14 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
    }
    FUN_14757f486(param_1,&local_60,param_4);
  }
LAB_141179fc7:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14117a046 FUN_14117a046 body=353 status=ok
// SIG undefined FUN_14117a046(void)

void FUN_14117a046(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14117a0cb;
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
LAB_14117a0cb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14117a1a7 FUN_14117a1a7 body=55 status=ok
// SIG undefined FUN_14117a1a7(void)

void FUN_14117a1a7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x178);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x32;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14117a1de FUN_14117a1de body=44 status=ok
// SIG undefined FUN_14117a1de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14117a1de(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7ec24 = _DAT_14cb7ec24 + -1;
  *param_1 = DAT_14cb7ec18;
  DAT_14cb7ec18 = param_1;
  return;
}



// FUNCTION 14117a20a FUN_14117a20a body=132 status=ok
// SIG undefined FUN_14117a20a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14117a20a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14117a29c FUN_14117a29c body=137 status=ok
// SIG undefined FUN_14117a29c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14117a29c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14117a334 FUN_14117a334 body=137 status=ok
// SIG undefined FUN_14117a334(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14117a334(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14117a3be FUN_14117a3be body=413 status=ok
// SIG undefined FUN_14117a3be(void)

undefined8 * FUN_14117a3be(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = &PTR_FUN_14ab67820;
  param_1[3] = &PTR_FUN_14ab67840;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  param_1[0xe] = param_1 + 0x10;
  param_1[0xf] = 0x8000004000000000;
  *(undefined8 *)((longlong)param_1 + 0x284) = *param_2;
  iVar4 = 0x40;
  do {
    puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0x200000000;
    puVar3[9] = 0;
    FUN_1446f470e(&local_58,L"HavokTask",1);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x14) = local_58;
    *(undefined1 *)(puVar3 + 2) = 0x40;
    *(undefined2 *)((longlong)puVar3 + 0x1e) = 1;
    puVar3[8] = 0;
    puVar2 = (undefined8 *)puVar3[9];
    if (puVar2 != (undefined8 *)0x0) {
      puVar3[9] = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined1 *)(puVar3 + 10) = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    if (*(int *)((longlong)puVar3 + 0x3c) != 0) {
      FUN_14117a55c(puVar3 + 4);
    }
    FUN_14117a5a6(param_1,puVar3);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117a55c FUN_14117a55c body=74 status=ok
// SIG undefined FUN_14117a55c(void)

void FUN_14117a55c(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 3);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14117a5a6 FUN_14117a5a6 body=333 status=ok
// SIG undefined FUN_14117a5a6(void)

void FUN_14117a5a6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x78) < 0x40) {
    FUN_1446f470e(&local_38,L"HavokTask",1);
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined8 *)((longlong)param_2 + 0x14) = local_38;
    *(undefined1 *)(param_2 + 2) = 0x40;
    *(undefined2 *)((longlong)param_2 + 0x1e) = 1;
    param_2[8] = 0;
    puVar3 = (undefined8 *)param_2[9];
    if (puVar3 != (undefined8 *)0x0) {
      param_2[9] = 0;
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    *(undefined1 *)(param_2 + 10) = 0;
    *(undefined4 *)(param_2 + 7) = 0;
    if (*(int *)((longlong)param_2 + 0x3c) != 0) {
      FUN_14117a55c(param_2 + 4);
    }
    iVar4 = *(int *)(param_1 + 0x78);
    iVar1 = iVar4 + 1;
    if ((int)(*(uint *)(param_1 + 0x7c) & 0x7fffffff) <= iVar4) {
      FUN_147e2d54e(param_1 + 0x70,iVar1);
      iVar4 = *(int *)(param_1 + 0x78);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar4 * 8) = param_2;
    *(int *)(param_1 + 0x78) = iVar1;
  }
  else if (param_2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_2[9];
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117a700 FUN_14117a700 body=363 status=ok
// SIG undefined FUN_14117a700(void)

undefined8 * FUN_14117a700(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a3c1780;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0x7fffffff7fffffff;
  param_1[0x35] = 0x8000000080000000;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  return param_1;
}



// FUNCTION 14117a870 FUN_14117a870 body=221 status=ok
// SIG undefined FUN_14117a870(void)

longlong FUN_14117a870(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabc500 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478102ba;
    local_40 = &LAB_146039e47;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/MediaAssets",L"MediaPlayer",&DAT_14cabc500,FUN_146365e8a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc500;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117a954 FUN_14117a954 body=221 status=ok
// SIG undefined FUN_14117a954(void)

longlong FUN_14117a954(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb457f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148235639;
    local_40 = &LAB_145d35285;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 400;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonTextStyle",&DAT_14cb457f8,FUN_1464821b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb457f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117aa32 FUN_14117aa32 body=221 status=ok
// SIG undefined FUN_14117aa32(void)

longlong FUN_14117aa32(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0bc98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492eb7a8;
    local_40 = &LAB_14671c8ea;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangePipelineBase",&DAT_14cc0bc98,FUN_14671c8c8
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0bc98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117ab10 FUN_14117ab10 body=291 status=ok
// SIG undefined FUN_14117ab10(void)

void FUN_14117ab10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = FUN_140daa3ac();
  if (cVar4 == '\0') {
    local_48 = *param_2;
    local_40 = *(undefined4 *)(param_2 + 1);
    FUN_141057c4c(param_1,&local_38,&local_48,1);
    plVar2 = local_30;
    if (local_38 != 0) {
      local_50 = *(undefined4 *)(param_3 + 1);
      local_58 = *param_3;
      local_68 = local_38;
      local_60 = local_30;
      if (local_30 == (longlong *)0x0) {
        FUN_14117ac34(param_1,&local_68,&local_58,param_4);
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        FUN_14117ac34(param_1,&local_68,&local_58,param_4);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)local_30 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117ac34 FUN_14117ac34 body=671 status=ok
// SIG undefined FUN_14117ac34(void)

void FUN_14117ac34(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  char local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = *param_3;
  local_e0 = *(undefined4 *)(param_3 + 1);
  FUN_1448075d0(&local_a0);
  lVar5 = FUN_1410002c4(&local_a0);
  if (CONCAT44(uStack_84,uStack_88) != 0) {
    FUN_1400020a8();
  }
  if (lVar5 != 0) {
    local_80 = *param_4;
    local_78 = (longlong *)param_4[1];
    if (local_78 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
    }
    local_40 = '\0';
    uStack_90 = *(undefined4 *)(param_3 + 1);
    local_98 = *param_3;
    uStack_84 = *(undefined4 *)((undefined8 *)*param_2 + 1);
    uVar4 = *(undefined8 *)*param_2;
    uStack_8c = (undefined4)uVar4;
    uStack_88 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_a0 = lVar5;
    if (*(char *)(lVar5 + 0x58) == '\x01') {
      if ((((((*(int *)(param_1 + 0x1c) == 0) || (uVar3 = *(uint *)(param_1 + 0x18), (int)uVar3 < 0)
             ) || (DAT_14c9647dc <= (int)uVar3)) ||
           ((plVar6 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
            plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x1c))))) ||
          (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
           (((longlong *)*plVar6 == (longlong *)0x0 ||
            (lVar5 = (**(code **)(*(longlong *)*plVar6 + 0x2b0))(), lVar5 == 0)))))) ||
         (plVar6 = (longlong *)FUN_14039ffc6(lVar5), plVar6 == (longlong *)0x0)) {
        local_f8 = 0;
        plStack_f0 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar6 + 0x78))(plVar6,&local_f8,&uStack_8c);
        if (local_f8 != 0) {
          FUN_14117aed4(local_f8,&local_d8,param_3);
          if (local_a8 == '\0') {
            if (local_40 != '\0') {
              local_40 = '\0';
            }
          }
          else {
            local_50 = local_b8;
            uStack_48 = uStack_b0;
            local_60 = local_c8;
            uStack_58 = uStack_c0;
            local_70 = local_d8;
            uStack_6c = uStack_d4;
            uStack_68 = uStack_d0;
            uStack_64 = uStack_cc;
            local_40 = '\x01';
          }
        }
      }
      plVar6 = plStack_f0;
      if (plStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_f0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_f0)(plStack_f0);
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
    FUN_141058754(param_1,param_2,&local_a0);
    plVar6 = local_78;
    if (local_40 == '\x01') {
      local_40 = '\0';
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_78)(local_78);
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
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14117aed4 FUN_14117aed4 body=241 status=ok
// SIG undefined FUN_14117aed4(void)

undefined8 * FUN_14117aed4(longlong param_1,undefined8 *param_2,uint *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  
  plVar12 = (longlong *)(*(longlong *)(param_1 + 8) + 0x138);
  uVar8 = *param_3;
  uVar10 = param_3[2];
  if (uVar10 != 0) {
    uVar8 = uVar10 >> 0xd ^ uVar8 - uVar10;
    uVar11 = uVar8 << 8 ^ (-0x61c88647 - uVar10) - uVar8;
    uVar13 = uVar11 >> 0xd ^ (uVar10 - uVar8) - uVar11;
    uVar10 = uVar13 >> 0xc ^ (uVar8 - uVar11) - uVar13;
    uVar8 = uVar10 << 0x10 ^ (uVar11 - uVar13) - uVar10;
    uVar11 = uVar8 >> 5 ^ (uVar13 - uVar10) - uVar8;
    uVar10 = uVar11 >> 3 ^ (uVar10 - uVar8) - uVar11;
    uVar8 = uVar10 << 10 ^ (uVar8 - uVar11) - uVar10;
    uVar8 = uVar8 >> 0xf ^ uVar11 - (uVar10 + uVar8);
  }
  iVar9 = FUN_14117afc6(plVar12,uVar8);
  if (iVar9 == -1) {
    uVar7 = 0;
  }
  else {
    lVar1 = *plVar12;
    uVar7 = 0;
    if (lVar1 + (longlong)iVar9 * 0x48 != 0) {
      lVar1 = lVar1 + (longlong)iVar9 * 0x48;
      if ((undefined8 *)(lVar1 + 0x10) != (undefined8 *)0x0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x10);
        uVar3 = *(undefined8 *)(lVar1 + 0x18);
        uVar4 = *(undefined8 *)(lVar1 + 0x20);
        uVar5 = *(undefined8 *)(lVar1 + 0x28);
        uVar6 = *(undefined8 *)(lVar1 + 0x38);
        param_2[4] = *(undefined8 *)(lVar1 + 0x30);
        param_2[5] = uVar6;
        param_2[2] = uVar4;
        param_2[3] = uVar5;
        *param_2 = uVar2;
        param_2[1] = uVar3;
        uVar7 = 1;
      }
    }
  }
  *(undefined1 *)(param_2 + 6) = uVar7;
  return param_2;
}



// FUNCTION 14117afc6 FUN_14117afc6 body=95 status=ok
// SIG undefined FUN_14117afc6(void)

int FUN_14117afc6(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x48) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x48 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x40 + lVar4 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14117b026 FUN_14117b026 body=77 status=ok
// SIG undefined FUN_14117b026(void)

undefined1 * FUN_14117b026(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  FUN_1401f3db8(param_1 + 8,param_2 + 8);
  if ((*(longlong *)(param_1 + 0x20) != *(longlong *)(param_2 + 0x20)) ||
     (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28))) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return param_1;
}



// FUNCTION 14117b073 FUN_14117b073 body=73 status=ok
// SIG undefined FUN_14117b073(void)

void FUN_14117b073(longlong param_1,int param_2)

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



// FUNCTION 14117b0bc FUN_14117b0bc body=326 status=ok
// SIG undefined FUN_14117b0bc(void)

void FUN_14117b0bc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + 0x448);
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x448) + 0x20))(plVar1);
  if (lVar2 == 0) {
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (0 < *(int *)(lVar3 + 0x40)) {
      local_38 = FUN_148cc741c;
      local_30 = 0;
      FUN_14117b21c(lVar2 + 0x158,local_28,param_1);
    }
  }
  if (*(char *)(param_1 + 0x25f8) == '\x01') {
    piVar4 = (int *)(param_1 + 0x25fc);
  }
  else {
    if (*(longlong *)(param_1 + 0x2600) == 0) goto LAB_14117b168;
    piVar4 = (int *)(*(longlong *)(param_1 + 0x2600) + 0x470);
  }
  if (0 < *piVar4) {
    local_38 = FUN_145d71dd0;
    local_30 = 0;
    FUN_14117b21c(lVar2 + 0xf8,local_28,param_1);
  }
LAB_14117b168:
  FUN_140c822cc(param_1);
  FUN_140c8232a(param_1);
  (**(code **)(*(longlong *)(param_1 + 0x468) + 0x10))(param_1 + 0x468);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 14117b21c FUN_14117b21c body=772 status=ok
// SIG undefined FUN_14117b21c(void)

undefined8 * FUN_14117b21c(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b958330;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14117b3d0;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_14117b3ba;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_14117b3ba:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14117b3d0:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14117b522 FUN_14117b522 body=208 status=ok
// SIG undefined FUN_14117b522(void)

void FUN_14117b522(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  if (((longlong *)param_1[0x74] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x39c) != 0))
  {
    uVar1 = *(uint *)(param_1 + 0x73);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)((longlong)param_1 + 0x39c))) &&
         ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
        (**(code **)(*(longlong *)param_1[0x74] + 0x10))();
        FUN_14117b5f2(param_1[0x59],1,1,1);
        (**(code **)(*(longlong *)param_1[0x74] + 0x18))();
        goto LAB_14117b5ba;
      }
    }
  }
  FUN_14117b5f2(param_1[0x59],1,1,1);
LAB_14117b5ba:
  FUN_140ee5bf8(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00014117b5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x658))(param_1,param_4);
  return;
}



// FUNCTION 14117b5f2 FUN_14117b5f2 body=177 status=ok
// SIG undefined FUN_14117b5f2(void)

void FUN_14117b5f2(longlong *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [44];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    local_19 = 1;
    plVar1 = (longlong *)param_1[0x39];
    local_1c = param_2;
    local_1b = param_3;
    local_1a = param_4;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x4a0))(plVar1,&local_1c);
    }
    uVar2 = FUN_140e1fe36();
    lVar3 = (**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_140e1fe36();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if ((lVar3 != lVar4) && (lVar4 != 0)) {
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



// FUNCTION 14117b6b4 FUN_14117b6b4 body=37 status=ok
// SIG undefined FUN_14117b6b4(void)

void FUN_14117b6b4(undefined1 *param_1,byte param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 1;
  *(uint *)(param_1 + 0xc) = (uint)param_2;
  puVar1 = &DAT_14cb7c580;
  if (param_2 != 0) {
    puVar1 = &DAT_14cb7c588;
  }
  *(undefined8 *)(param_1 + 4) = *puVar1;
  return;
}



// FUNCTION 14117b6da FUN_14117b6da body=9 status=ok
// SIG undefined FUN_14117b6da(void)

void FUN_14117b6da(longlong param_1)

{
  FUN_14117b6e4(param_1 + 0x10);
  return;
}



// FUNCTION 14117b6e4 FUN_14117b6e4 body=288 status=ok
// SIG undefined FUN_14117b6e4(void)

void FUN_14117b6e4(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac8d1d0;
  param_1[1] = &PTR_FUN_14ac8d1f0;
  FUN_140cbae8c(param_1 + 0x1f);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_144a544ac(param_1 + 0x13,0);
  }
  param_1[0x19] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xc4)) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
    FUN_1446efbd8(param_1 + 0x15,0);
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014117b800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14117b804 FUN_14117b804 body=388 status=ok
// SIG undefined FUN_14117b804(void)

undefined8 * FUN_14117b804(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = (longlong *)*param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
joined_r0x00014117b836:
  do {
    plVar1 = plVar4;
    if (plVar8 == (longlong *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      if (plVar1 != (longlong *)0x0) {
LAB_14117b8aa:
        LOCK();
        plVar8 = plVar1 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
LAB_14117b8b4:
      plVar8 = (longlong *)param_3[1];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      return param_2;
    }
    cVar6 = (**(code **)(*plVar8 + 0x200))(plVar8);
    if (cVar6 != '\0') {
      *param_2 = plVar8;
      param_2[1] = plVar1;
      if (plVar1 == (longlong *)0x0) goto LAB_14117b8b4;
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
      goto LAB_14117b8aa;
    }
    plVar9 = (longlong *)plVar8[0x39];
    if (plVar9 == (longlong *)0x0) {
LAB_14117b8d2:
      plVar9 = (longlong *)0x0;
      plVar8 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_14117b8d2;
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar10 = iVar7 == iVar5;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar10);
      plVar8 = (longlong *)plVar8[0x38];
    }
    if (plVar9 == plVar1) {
      if (plVar1 != (longlong *)0x0) break;
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = plVar9;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar1 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar7 = *piVar2;
          UNLOCK();
          goto joined_r0x00014117b975;
        }
      }
    }
  } while( true );
  LOCK();
  plVar3 = plVar9 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  plVar4 = plVar1;
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar7 = *piVar2;
    UNLOCK();
    plVar1 = plVar9;
joined_r0x00014117b975:
    if (iVar7 == 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  goto joined_r0x00014117b836;
}



// FUNCTION 14117b994 FUN_14117b994 body=834 status=ok
// SIG undefined FUN_14117b994(void)

void FUN_14117b994(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (((((lVar4 == 0) || (plVar8 = *(longlong **)(param_1 + 0x30), plVar8 == (longlong *)0x0)) ||
       (*(int *)(param_1 + 0x2c) == 0)) ||
      (((uVar1 = *(uint *)(param_1 + 0x28), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
       ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 == 0 ||
        ((*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x2c) ||
         ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))))) ||
     (lVar6 = FUN_1418ac39e(lVar4), lVar6 == 0)) goto LAB_14117ba0b;
  lVar4 = FUN_1411023a4(lVar4);
  if (lVar4 == 0) {
    cVar2 = FUN_1410862f0(param_2);
    if (cVar2 != '\0') goto LAB_14117ba64;
LAB_14117bb10:
    if (((*(int *)(param_1 + 0x3c) != 0) && (uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        (((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0 &&
          (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x3c))) &&
         ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_1412ec3f2(uVar5,lVar6);
    }
  }
  else {
    if (*(char *)(param_2 + 0x90) == '\0') goto LAB_14117bb10;
LAB_14117ba64:
    if ((((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       (((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0 ||
         (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x3c))) ||
        ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))) {
      uVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar6 = FUN_14117f118(uVar5,lVar6);
      if (lVar6 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
        iVar3 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar6 + 0xc);
        *(uint *)(param_1 + 0x38) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar3 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar3 = *(int *)(lVar6 + 0x10);
          bVar10 = iVar3 == 0;
          if (bVar10) {
            *(int *)(lVar6 + 0x10) = iVar9;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar3 = iVar9;
          }
        }
      }
      *(int *)(param_1 + 0x3c) = iVar3;
    }
  }
  if (((param_3 == '\x01' && lVar4 != 0) && (*(int *)(param_1 + 0x3c) != 0)) &&
     ((((uVar1 = *(uint *)(param_1 + 0x38), -1 < (int)uVar1 &&
        (((int)uVar1 < DAT_14c9647dc &&
         (plVar8 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar8 != (longlong *)0x0)))) && ((int)plVar8[2] == *(int *)(param_1 + 0x3c))) &&
      ((((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar4 = *plVar8, lVar4 != 0)) &&
       (*(longlong *)(param_1 + 0x40) == 0)))))) {
    local_60 = FUN_14580559e;
    local_58 = 0;
    FUN_146561462(&local_50,param_1);
    FUN_14655f428(lVar4,&local_60,&local_50);
    *(code **)(param_1 + 0x40) = local_60;
    if (local_48 != 0) {
      if (local_50 == (undefined8 *)0x0) goto LAB_14117ba0b;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14117ba0b:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14117bcd8 FUN_14117bcd8 body=17 status=ok
// SIG undefined FUN_14117bcd8(void)

void FUN_14117bcd8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  FUN_14020a6cc(uVar1,1);
  return;
}



// FUNCTION 14117bcea FUN_14117bcea body=150 status=ok
// SIG undefined FUN_14117bcea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14117bcea(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b84d3c0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00014117bd72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14117bd80 FUN_14117bd80 body=146 status=ok
// SIG undefined FUN_14117bd80(void)

void FUN_14117bd80(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  local_48 = param_5;
  FUN_140d22372(param_1,&local_38,local_2c);
  lVar1 = FUN_14117be14(param_5 + 0x1d0);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x18) = *param_3;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_3 + 1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117be14 FUN_14117be14 body=263 status=ok
// SIG undefined FUN_14117be14(void)

longlong * FUN_14117be14(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar5 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b97e160;
  plVar6 = plVar5 + 2;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[3] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b6a10b0;
  *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
  iVar3 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar3 + 1U;
  if (*(uint *)(param_1 + 300) < iVar3 + 1U) {
    FUN_140d8a32a((longlong *)(param_1 + 0x120),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x120);
  lVar7 = (longlong)iVar3 * 0x10;
  *(longlong **)(lVar4 + lVar7) = plVar6;
  *(longlong **)(lVar4 + 8 + lVar7) = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    plVar6 = *(longlong **)(lVar4 + lVar7);
    plVar5 = (longlong *)((longlong *)(lVar4 + lVar7))[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
  return plVar6;
}



// FUNCTION 14117bf1c FUN_14117bf1c body=506 status=ok
// SIG undefined FUN_14117bf1c(void)

void FUN_14117bf1c(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x8d0))();
  plVar3 = param_1 + 0x738;
  lVar10 = *param_2;
  iVar8 = (int)param_2[1];
  lVar12 = param_1[0x738];
  lVar5 = (longlong)(int)param_1[0x739] * 0x28;
  lVar4 = lVar12 + lVar5;
  do {
    lVar7 = lVar4;
    if (lVar5 == 0) goto LAB_14117bfea;
    lVar5 = lVar5 + -0x28;
    lVar4 = lVar7 + -0x28;
  } while ((*(longlong *)(lVar7 + -0x28) != lVar10) || (*(int *)(lVar7 + -0x20) != iVar8));
  iVar6 = (int)(lVar5 >> 3) * -0x33333333;
  if (iVar6 == -1) {
LAB_14117bfea:
    uVar9 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar12 + 0x18 + (longlong)iVar6 * 0x28);
    plVar11 = *(longlong **)(lVar12 + 0x20 + (longlong)iVar6 * 0x28);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    FUN_14187437a(plVar3);
    FUN_1418743f4(plVar3);
    lVar10 = *param_2;
    iVar8 = (int)param_2[1];
  }
  if (((lVar10 != param_1[0x735]) || (iVar8 != (int)param_1[0x736])) || (0 < (int)param_1[0x739])) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      lVar10 = *param_2;
      iVar8 = (int)param_2[1];
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    iVar6 = (int)param_1[0x739];
    lVar12 = (longlong)iVar6;
    *(uint *)(param_1 + 0x739) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x39cc) < iVar6 + 1U) {
      FUN_141874492(plVar3,iVar6);
    }
    lVar5 = *plVar3;
    *(longlong *)(lVar5 + lVar12 * 0x28) = lVar10;
    *(int *)(lVar5 + 8 + lVar12 * 0x28) = iVar8;
    *(undefined8 *)(lVar5 + 0x10 + lVar12 * 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x18 + lVar12 * 0x28) = uVar9;
    *(longlong **)(lVar5 + 0x20 + lVar12 * 0x28) = plVar11;
  }
  local_78 = *param_3;
  local_70 = *(undefined4 *)(param_3 + 1);
  local_68 = 0;
  FUN_141440d78(param_1,&local_78,param_4,0);
  param_1[0x74] = param_1[0x746];
  FUN_141440cd6(param_1 + 0x5d3);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14117c118 FUN_14117c118 body=94 status=ok
// SIG undefined FUN_14117c118(void)

void FUN_14117c118(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae5cef0;
  param_1[5] = &PTR_FUN_14ae5d390;
  param_1[0x2d] = &PTR_FUN_14ae5d3d0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcea6(param_1);
  return;
}



// FUNCTION 14117c176 FUN_14117c176 body=842 status=ok
// SIG undefined FUN_14117c176(void)

int * FUN_14117c176(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  void *_Src;
  void *_Dst;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_145820760(param_1,iVar14);
    }
    lVar15 = (longlong)iVar14;
    iVar13 = FUN_144a54ea4(param_1 + 2,1);
    plVar10 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar10 = param_1 + 2;
    }
    iVar8 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar8 = iVar13;
    }
    bVar5 = (byte)iVar13 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar15 = (longlong)iVar14;
    iVar13 = *(int *)(*param_1 + 4 + lVar15 * 0xd0);
    *(int *)(param_1 + 6) = iVar13;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0xd0) = 0xffffffff;
    }
  }
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar13 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar13 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar13 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  uVar7 = DAT_14c8463f8;
  uVar6 = DAT_14c8463f0;
  iVar13 = 1;
  lVar4 = *param_1;
  lVar15 = lVar15 * 0xd0;
  _Src = (void *)(lVar15 + lVar4);
  local_108 = 0;
  local_f8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_100 = 1;
  uStack_f0 = DAT_14c8463f0;
  local_e8 = DAT_14c8463f8;
  uStack_e0 = DAT_14c8463f0;
  local_d8 = DAT_14c8463f8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(lVar4 + lVar15) = *(undefined8 *)*param_3;
  uStack_f0._0_4_ = (undefined4)uVar6;
  uStack_f0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_e8._0_4_ = (undefined4)uVar7;
  local_e8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  puVar2 = (undefined8 *)(lVar4 + 8 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 1;
  puVar3 = (undefined4 *)(lVar4 + 0x18 + lVar15);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = (undefined4)uStack_f0;
  puVar3[3] = uStack_f0._4_4_;
  puVar3 = (undefined4 *)(lVar4 + 0x28 + lVar15);
  *puVar3 = (undefined4)local_e8;
  puVar3[1] = local_e8._4_4_;
  puVar3[2] = (undefined4)uStack_f0;
  puVar3[3] = uStack_f0._4_4_;
  *(undefined8 *)(lVar4 + 0x38 + lVar15) = uVar7;
  *(undefined1 *)(lVar4 + 0x41 + lVar15) = 0;
  puVar3 = (undefined4 *)(lVar4 + 0x48 + lVar15);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)(lVar4 + 0x58 + lVar15) = 0;
  local_b8 = 0;
  *(undefined8 *)(lVar4 + 0x60 + lVar15) = 0x200000000;
  local_b0 = 0x200000000;
  puVar2 = (undefined8 *)(lVar4 + 0xb8 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0xa8 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x98 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x88 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x78 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x68 + lVar15);
  *puVar2 = 0;
  puVar2[1] = 0;
  uStack_f0 = uVar6;
  local_e8 = uVar7;
  FUN_14117c4c2();
  *(undefined4 *)(lVar4 + 200 + lVar15) = 0xffffffff;
  lVar15 = *(longlong *)(lVar4 + lVar15);
  uVar9 = (int)((ulonglong)lVar15 >> 0x20) * 0x17 + (int)lVar15;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar10 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[8];
      }
      iVar8 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
      if (iVar8 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar8 * 0xd0);
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0xd0) == lVar15) {
            FUN_14816cb44((longlong)_Dst + 8);
            memmove(_Dst,_Src,200);
            FUN_14128f140(param_1,iVar14);
            goto LAB_14117c376;
          }
          iVar8 = *(int *)((longlong)_Dst + 200);
        } while (iVar8 != -1);
      }
    }
    if (3 < uVar12) {
      uVar11 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar15 & 0x1f);
    }
  }
  iVar8 = iVar14;
  if (((int)uVar12 < 1) || (iVar13 <= (int)param_1[9])) {
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)_Src + 0xcc) = uVar9;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 200) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    FUN_1458207f2(param_1);
  }
LAB_14117c376:
  *param_2 = iVar8;
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117c4c2 FUN_14117c4c2 body=52 status=ok
// SIG undefined FUN_14117c4c2(void)

void FUN_14117c4c2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14117c4f6(lVar1,*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14117c4f6 FUN_14117c4f6 body=43 status=ok
// SIG undefined FUN_14117c4f6(void)

void FUN_14117c4f6(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14117c522(param_1,*param_1);
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 14117c522 FUN_14117c522 body=70 status=ok
// SIG undefined FUN_14117c522(void)

void FUN_14117c522(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0) {
      *param_2 = 0;
      (**(code **)(*plVar1 + 0x38))();
      if ((longlong *)*param_2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_2 + 0x38))();
      }
    }
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 14117c576 FUN_14117c576 body=157 status=ok
// SIG undefined FUN_14117c576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14117c576(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14117c614 FUN_14117c614 body=57 status=ok
// SIG undefined FUN_14117c614(void)

void FUN_14117c614(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bb90 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bb90 = FUN_140002ddd(FUN_14185dd2f,uVar1,L"MissionAliasRef");
  }
  return;
}



// FUNCTION 14117c64e FUN_14117c64e body=71 status=ok
// SIG undefined FUN_14117c64e(void)

void FUN_14117c64e(longlong param_1)

{
  FUN_141082b5c(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14117c696(param_1 + 8,0);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14117c696 FUN_14117c696 body=104 status=ok
// SIG undefined FUN_14117c696(void)

void FUN_14117c696(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_14117c6fe(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14117c6fe FUN_14117c6fe body=96 status=ok
// SIG undefined FUN_14117c6fe(void)

void FUN_14117c6fe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14117c76c FUN_14117c76c body=153 status=ok
// SIG undefined FUN_14117c76c(void)

undefined8 * FUN_14117c76c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5d0fc0;
  FUN_14051f4c4(param_1 + 0xcf);
  FUN_14051f4c4(param_1 + 0xb3);
  FUN_14051f4c4(param_1 + 0x96);
  FUN_14051f4c4(param_1 + 0x7a);
  FUN_14051f4c4(param_1 + 0x5d);
  FUN_14051f4c4(param_1 + 0x41);
  *param_1 = &PTR_FUN_14b0159c0;
  FUN_14051f4c4(param_1 + 0x23);
  FUN_14051f4c4(param_1 + 7);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x758);
  }
  return param_1;
}



// FUNCTION 14117c806 FUN_14117c806 body=157 status=ok
// SIG undefined FUN_14117c806(void)

void FUN_14117c806(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b51f000;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_1458214a6(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] == 0) goto LAB_14117c868;
  while( true ) {
    FUN_1400020a8();
LAB_14117c868:
    if ((undefined8 *)param_1[0xf] == (undefined8 *)0x0) break;
    param_1[0xf] = *(undefined8 *)param_1[0xf];
  }
  FUN_14117c8a3(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_14117c88f;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_14117c88f:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 14117c8a3 FUN_14117c8a3 body=53 status=ok
// SIG undefined FUN_14117c8a3(void)

void FUN_14117c8a3(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14117c8d8 FUN_14117c8d8 body=69 status=ok
// SIG undefined FUN_14117c8d8(void)

undefined8 * FUN_14117c8d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14b51f0d0;
  FUN_14017ec5b(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14117c91e FUN_14117c91e body=338 status=ok
// SIG undefined FUN_14117c91e(void)

void FUN_14117c91e(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  undefined2 local_50 [4];
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_38 [4];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x238) == 0) {
    local_50[0] = *param_2;
    local_48 = 0;
    local_40 = 0;
    FUN_140fe25fc(&local_48,param_2 + 4);
    FUN_14117ca72(param_1,local_50);
  }
  else {
    bVar5 = *(char *)(param_1 + 0x39) == DAT_14c96b238;
    bVar6 = *(char *)(param_1 + 0x39) == DAT_14c96b23a;
    local_38[0] = *param_2;
    local_30 = 0;
    local_28 = 0;
    FUN_140fe25fc(&local_30,param_2 + 4);
    FUN_14117ca72(param_1,local_38);
    cVar2 = *(char *)(param_1 + 0x39);
    if ((bVar6 || bVar5) == (cVar2 == DAT_14c96b23a || cVar2 == DAT_14c96b238)) {
      if (cVar2 == DAT_14c96b23a || cVar2 == DAT_14c96b238) {
        lVar4 = *(longlong *)(param_1 + 0x238);
        if ((*(longlong *)(lVar4 + 0x140) == 0) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x140) + 0x68) == 0)) goto LAB_14117c9d1;
      }
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x238);
LAB_14117c9d1:
      FUN_14117cb20(lVar4);
    }
  }
  plVar1 = (longlong *)(param_2 + 4);
  if (*(int *)(param_2 + 8) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14117c9e8;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14117c9e8:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14117ca72 FUN_14117ca72 body=173 status=ok
// SIG undefined FUN_14117ca72(void)

void FUN_14117ca72(undefined8 param_1,undefined2 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 local_38 [4];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = *param_2;
  plVar1 = (longlong *)(param_2 + 4);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,plVar1);
  FUN_14020e6ca(param_1,local_38);
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14117cacf;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 8) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14117cacf:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117cb20 FUN_14117cb20 body=1319 status=ok
// SIG undefined FUN_14117cb20(void)

undefined8 FUN_14117cb20(undefined4 *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == '\0') {
    if (((DAT_14cb91068 == '\x01') &&
        (plVar4 = *(longlong **)(param_1 + 2), plVar4 != (longlong *)0x0)) &&
       (*(longlong *)(param_1 + 0xc) != 0)) {
      (**(code **)(*plVar4 + 0x80))(plVar4,0);
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar7 = *(int *)(lVar5 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar7 != 2) {
          if (iVar7 != 1) goto LAB_14117cba7;
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14117cbac;
          goto LAB_14117cbdf;
        }
      }
      else {
LAB_14117cba7:
        if (iVar7 != 0x10) {
LAB_14117cbdf:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
            goto LAB_14117cbac;
            if (iVar7 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              if (DVar8 == DVar9) goto LAB_14117cbac;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar2 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar12 = (uint *)*puVar2;
            if (puVar12 != (uint *)0x0) goto LAB_14117cd6a;
            while( true ) {
              uVar13 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar13 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar13 | 1;
                __tlregdtor(&LAB_143ea3853);
              }
              lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              puVar11 = *(undefined4 **)(lVar5 + 0x310);
              *(undefined8 *)(lVar5 + 0x310) = 0;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar11 = 0xffffffff;
              *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
              puVar11[0x12] = 0;
              *puVar2 = puVar11;
              FUN_140217a48(puVar2);
              puVar12 = (uint *)*puVar2;
LAB_14117cd6a:
              puVar16 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar15 = (uint *)(puVar16 + 0x16);
              uVar13 = puVar12[0x12];
              if (puVar15 <= puVar12 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                LOCK();
                uVar3 = *puVar12;
                *puVar12 = *puVar12 + uVar13 + 1;
                UNLOCK();
                if ((uVar3 ^ uVar13) != 0xffffffff) break;
                puVar12 = (uint *)*puVar2;
                *puVar12 = 0xffffffff;
                *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                puVar12[0x12] = 0;
                *puVar2 = puVar12;
                puVar16 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                puVar15 = (uint *)(puVar16 + 0x16);
                uVar13 = 0;
                if (puVar15 <= puVar12 + 0x4000) {
                  uVar13 = 1;
                  goto LAB_14117cdea;
                }
              }
            }
            uVar13 = uVar13 + 1;
LAB_14117cdea:
            *(uint **)(puVar12 + 0x10) = puVar15;
            puVar12[0x12] = uVar13;
            iVar7 = 0;
            FUN_1447247dc(puVar16,0);
            *puVar16 = &PTR_FUN_14b456a80;
            puVar16[0x15] = param_1;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar13 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
                iVar7 = 0;
              }
              else {
                uVar17 = 2;
              }
            }
            else {
              iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                      *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar17 = 5;
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
            lVar5 = *(longlong *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2b8);
            if (lVar5 == 0) {
              uVar6 = 1;
              if ((char)uVar17 != '\x06') {
                uVar6 = uVar17;
              }
              uVar17 = uVar6;
              uVar10 = 0;
            }
            else {
              if ((char)uVar17 == '\x06') {
                uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
              }
              uVar10 = *(undefined8 *)(lVar5 + 0x30);
            }
            puVar16[0xf] = uVar10;
            puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
            local_48 = &PTR_LAB_14b456a30;
            local_68[0] = &LAB_143ea639a;
            local_40 = param_1;
            FUN_14005a792(&DAT_14ca9a440,L"FreeRenderingResources",&DAT_14cb91370);
            if (local_68[0] != (undefined1 *)0x0) {
              pppuVar14 = local_58;
              if (local_58 == (undefined ***)0x0) {
                pppuVar14 = &local_48;
              }
              (*(code *)(*pppuVar14)[2])();
            }
          }
          goto LAB_14117cc76;
        }
      }
LAB_14117cbac:
      if (*(longlong **)(param_1 + 0xc) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xc) + 0x28))();
      }
    }
LAB_14117cc76:
    if ((DAT_14c763a8c == '\0') || (*(longlong *)(param_1 + 0x50) == 0)) {
      uVar10 = 0;
      goto LAB_14117cca9;
    }
    FUN_1405964be(*(longlong *)(param_1 + 0x50),1,1);
    FUN_140596000(param_1);
  }
  else {
    uVar10 = 0;
    if (DAT_14c763a8c != '\x01') goto LAB_14117cca9;
    LOCK();
    *param_1 = 0;
    UNLOCK();
  }
  uVar10 = 1;
LAB_14117cca9:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117d048 FUN_14117d048 body=87 status=ok
// SIG undefined FUN_14117d048(void)

void FUN_14117d048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b128cd0;
  FUN_14117d09f(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14117d0df(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14117d09f FUN_14117d09f body=64 status=ok
// SIG undefined FUN_14117d09f(void)

void FUN_14117d09f(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14117d0df FUN_14117d0df body=61 status=ok
// SIG undefined FUN_14117d0df(void)

void FUN_14117d0df(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *param_1 = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14117d122 FUN_14117d122 body=228 status=ok
// SIG undefined FUN_14117d122(void)

longlong FUN_14117d122(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad0478 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1479bd4c1;
    local_40 = &LAB_145e13b00;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xca0;
    FUN_14081cfa3(L"/Script/Engine",L"AudioComponent",&DAT_14cad0478,FUN_1463b5514);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad0478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117d212 FUN_14117d212 body=236 status=ok
// SIG undefined FUN_14117d212(void)

undefined8 * FUN_14117d212(undefined8 *param_1)

{
  FUN_140ea0e34();
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *param_1 = &PTR_FUN_14a4fe9e0;
  param_1[5] = &PTR_FUN_14a4fed00;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  FUN_140ca8f8e(param_1 + 0x38);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  *(undefined1 **)((longlong)param_1 + 0x184) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x18c) = &DAT_3f8000003f800000;
  param_1[0x50] = &DAT_3f8000003f800000;
  param_1[0x51] = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0x4000000040800000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x4000000040800000;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x181) = 0;
  param_1[0x54] = 0x3ff0000000000000;
  param_1[0x55] = 0x3ff0000000000000;
  *(byte *)((longlong)param_1 + 0x182) = *(byte *)((longlong)param_1 + 0x182) | 1;
  return param_1;
}



// FUNCTION 14117d2fe FUN_14117d2fe body=55 status=ok
// SIG undefined FUN_14117d2fe(void)

void FUN_14117d2fe(longlong *param_1)

{
  FUN_14117d336(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14117d336 FUN_14117d336 body=123 status=ok
// SIG undefined FUN_14117d336(void)

void FUN_14117d336(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14117d3b2 FUN_14117d3b2 body=1149 status=ok
// SIG undefined FUN_14117d3b2(void)

void FUN_14117d3b2(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_18 = 0;
  uStack_14 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_18 = (undefined4)uVar2;
      uStack_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_18);
    }
  }
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1405ebbb2;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (undefined4)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = (undefined *)FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_24 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14117d830(CONCAT44(uStack_14,uStack_18),local_1c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117d830 FUN_14117d830 body=247 status=ok
// SIG undefined FUN_14117d830(void)

void FUN_14117d830(longlong *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined *puVar7;
  
  if ((((param_1 != (longlong *)0x0) && (DAT_14c998208 == '\x01')) && (-2 < (int)param_2)) &&
     (((*(uint *)(param_1[2] + 0xd4) & 0x800) != 0 && ((int)param_2 < *(int *)(param_1[2] + 0xf8))))
     ) {
    uVar3 = (**(code **)(*param_1 + 0x280))(param_1);
    if (uVar3 < 0xffffffff00000000) {
      plVar6 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar6 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014117d924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar3,param_2);
      return;
    }
    uVar2 = (uint)uVar3;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c998088)) {
      puVar7 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar7 = DAT_14c998080;
      }
      if ((*(uint *)(puVar7 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar2 & 0x1f) & 1) != 0) {
        lVar4 = (ulonglong)(uVar2 & 0x7fffffff) * 0x68 + DAT_14c998060;
        lVar5 = *(longlong *)(lVar4 + 0x18);
        if (*(longlong *)(lVar4 + 0x18) == 0) {
          lVar5 = lVar4 + 8;
        }
        puVar1 = (uint *)(lVar5 + (ulonglong)(param_2 >> 3 & 0x1ffc));
        *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
        *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 14117d928 FUN_14117d928 body=375 status=ok
// SIG undefined FUN_14117d928(void)

void FUN_14117d928(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145821c62();
  if ((longlong)*(int *)(param_1 + 0x1a0) != 0) {
    lVar7 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x198) + 8 + lVar7) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x198) + lVar7) != 0)) {
        local_48 = 0;
        uStack_40 = 0;
        iVar1 = *(int *)(param_1 + 0x178);
        if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar1);
        }
        if (iVar1 != 0) {
          FUN_145821cae(&local_48);
          iVar1 = *(int *)(param_1 + 0x178);
          if ((longlong)iVar1 != 0) {
            lVar7 = *(longlong *)(param_1 + 0x170);
            lVar8 = 0;
            do {
              plVar2 = *(longlong **)(lVar7 + lVar8);
              if (plVar2 != (longlong *)0x0) {
                lVar5 = (**(code **)(*plVar2 + 8))(plVar2);
                lVar6 = FUN_14117daa2();
                uVar3 = uStack_40;
                if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                    lVar6 + 0x30)) {
                  lVar5 = (longlong)(int)uStack_40;
                  uVar4 = (int)uStack_40 + 1;
                  uStack_40 = CONCAT44(uStack_40._4_4_,uVar4);
                  if (uStack_40._4_4_ < uVar4) {
                    FUN_148d9af60(&local_48,uVar3 & 0xffffffff);
                  }
                  FUN_14112ded2(lVar5 * 0x1b8 + local_48,plVar2);
                }
              }
              lVar8 = lVar8 + 0x10;
            } while ((longlong)iVar1 * 0x10 != lVar8);
          }
        }
        FUN_145821d22(param_1 + 0x198,&local_48);
        FUN_14117dadb(local_48,uStack_40 & 0xffffffff);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x1a0) * 0x10 != lVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14117daa2 FUN_14117daa2 body=57 status=ok
// SIG undefined FUN_14117daa2(void)

void FUN_14117daa2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8ac8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8ac8 = FUN_140002ddd(FUN_1465d1586,uVar1,L"OakCharacterSaveHeader");
  }
  return;
}



// FUNCTION 14117dadb FUN_14117dadb body=41 status=ok
// SIG undefined FUN_14117dadb(void)

void FUN_14117dadb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141072d6a(param_1);
    param_1 = param_1 + 0x1b8;
  }
  return;
}



// FUNCTION 14117db04 FUN_14117db04 body=211 status=ok
// SIG undefined FUN_14117db04(void)

undefined8 FUN_14117db04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if (((iVar3 != 0) && (uVar4 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar4))
     && ((int)uVar4 < DAT_14c9647dc)) {
    plVar9 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar9 != (longlong *)0x0) && ((int)plVar9[2] == iVar3)) &&
       (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar5 = *plVar9, lVar5 != 0)))) {
      lVar6 = *(longlong *)(lVar5 + 0x158);
      plVar9 = *(longlong **)(lVar5 + 0x160);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      bVar7 = true;
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x80) != 0)) && (*(longlong *)(lVar6 + 0x88) != 0)
         ) {
        bVar7 = *(int *)(*(longlong *)(lVar6 + 0x88) + 8) < 1;
      }
      if (plVar9 != (longlong *)0x0) {
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (!bVar7) {
        return 0;
      }
    }
  }
  uVar8 = FUN_14117dbd8(param_1);
  return uVar8;
}



// FUNCTION 14117dbd8 FUN_14117dbd8 body=1051 status=ok
// SIG undefined FUN_14117dbd8(void)

ulonglong FUN_14117dbd8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  undefined8 unaff_RSI;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_108 [40];
  char local_e0 [8];
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  int local_b8 [2];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  cVar5 = (**(code **)(*param_1 + 0x80))();
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((cVar5 != '\0') || ((char)param_1[0xd] != '\0')) ||
     (lVar14 = param_1[8], *(char *)(lVar14 + 0x180) != '\0')) goto LAB_14117de2f;
  lVar13 = param_1[9];
  piVar8 = (int *)(*(longlong *)(lVar13 + 8) + 0xd0);
  if (*(char *)(lVar13 + 0x38) != '\0') {
    piVar8 = (int *)(lVar13 + 0x40);
  }
  if (*(longlong *)(lVar13 + 8) == 0) {
    piVar8 = (int *)(lVar13 + 0x40);
  }
  if (*piVar8 != 0) {
    if (*piVar8 != 1) goto LAB_14117de2f;
    if (lVar14 == 0) {
      lVar13 = 0;
      local_d8 = (longlong *)0x0;
LAB_14117df2c:
      local_d0 = (longlong *)0x0;
      bVar4 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_14117def6:
        lVar13 = 0;
      }
      else {
        uVar7 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_14117def6;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_d8 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_14117df2c;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar4 = false;
      local_d0 = plVar12;
    }
    plVar12 = local_d0;
    local_b8[0] = 0;
    local_e0[0] = '\x03';
    local_c8._0_4_ = 0;
    if (lVar13 == 0) {
      iVar6 = 0;
      uVar7 = (uint)local_c8;
    }
    else {
      uVar7 = *(uint *)(lVar13 + 0xc);
      local_c8 = (ulonglong)uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar6 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar6 = *(int *)(lVar14 + 0x10);
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(lVar14 + 0x10) = iVar10;
          iVar6 = 0;
        }
        UNLOCK();
        uVar7 = (uint)local_c8;
        if (bVar16) {
          iVar6 = iVar10;
        }
      }
    }
    local_c8._0_4_ = uVar7;
    local_c8 = CONCAT44(iVar6,(uint)local_c8);
    local_c0 = 2;
    if (local_b8[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_b8[0] + -1,1);
      local_b8[0] = 0;
    }
    if (!bVar4) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    pfVar15 = &local_b0;
    FUN_1447c3578(piVar8 + 2,pfVar15,local_e0);
    if (local_90 == 3) {
      uVar7 = 3;
      fVar18 = local_b0;
    }
    else {
      pfVar9 = &local_88;
      FUN_1400b56fe(pfVar9,&local_b0,3);
      fVar18 = 0.0;
      if (local_68 != 0) {
        fVar18 = local_88;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_70) {
          pfVar9 = (float *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar3)(pfVar9);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
      uVar7 = (uint)local_90;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_98) {
        pfVar15 = (float *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar3)(pfVar15);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    FUN_1448173f8(local_b8);
    if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
      LOCK();
      piVar8 = (int *)((longlong)local_d0 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
    fVar17 = (float)FUN_141236616(param_1);
    if ((fVar18 <= fVar17 - *(float *)((longlong)param_1 + 0x54)) &&
       (cVar5 = (**(code **)(*param_1 + 0xb0))(param_1), cVar5 == '\0')) goto LAB_14117de2f;
  }
  uVar11 = 0;
LAB_14117de2f:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14117e000 FUN_14117e000 body=186 status=ok
// SIG undefined FUN_14117e000(void)

undefined8 FUN_14117e000(undefined4 *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2);
    if (*plVar3 == 0) {
      puVar4 = &DAT_14c9a1308;
    }
    else {
      puVar4 = (undefined8 *)FUN_1446e60f4(*plVar3,&DAT_14cb75f70);
    }
    if ((byte *)*puVar4 != (byte *)0x0) {
      bVar1 = *(byte *)*puVar4;
      uVar5 = 0;
      if (((bVar1 & 3) != 0) && ((bVar1 & 0x68) == 0)) {
        local_48 = 0;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_3c = 0x3f800000;
        uVar5 = (**(code **)(*param_2 + 0x28))(param_2);
        FUN_1400097a2(&local_30,uVar5,&local_48);
        *param_1 = local_30;
        param_1[1] = uStack_2c;
        param_1[2] = uStack_28;
        param_1[3] = uStack_24;
        uVar5 = 1;
      }
      goto LAB_14117e050;
    }
  }
  uVar5 = 0;
LAB_14117e050:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117e0c4 FUN_14117e0c4 body=173 status=ok
// SIG undefined FUN_14117e0c4(void)

undefined8 * FUN_14117e0c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *param_1 = &PTR_FUN_14ac3c9d0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 4;
  *(undefined4 *)(param_1 + 0x12) = 5;
  *(undefined1 *)(param_1 + 0x16) = 2;
  *(byte *)(param_1 + 0x17) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  return param_1;
}



// FUNCTION 14117e172 FUN_14117e172 body=617 status=ok
// SIG undefined FUN_14117e172(void)

void FUN_14117e172(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14117e25d;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14117e25d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14117e3dc(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117e3dc FUN_14117e3dc body=152 status=ok
// SIG undefined FUN_14117e3dc(void)

void FUN_14117e3dc(longlong *param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    return;
  }
  FUN_1401073f6(param_2 + 0x9d8,param_1);
  cVar1 = (**(code **)(*param_1 + 0x700))(param_1);
  if ((cVar1 != '\0') && (*(longlong **)(param_2 + 0x1b0) == param_1)) {
    FUN_140ee9156(param_2,0);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)*(uint *)(param_1 + 0xc32)) {
    plVar3 = (longlong *)(param_1[0xc31] + 0x20);
    uVar4 = 0;
    do {
      if (*plVar3 == param_2) {
        uVar2 = uVar4 & 0xffffffff;
        break;
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 0x2e;
    } while (*(uint *)(param_1 + 0xc32) != uVar4);
  }
  FUN_140e7e2ce(param_1 + 0xc1d,uVar2);
  return;
}



// FUNCTION 14117e474 FUN_14117e474 body=221 status=ok
// SIG undefined FUN_14117e474(void)

longlong FUN_14117e474(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaaa00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148c14a67;
    local_40 = &LAB_145bfecdf;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakGameMapsSettings",&DAT_14cbaaa00,&DAT_148c14a66);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaaa00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117e552 FUN_14117e552 body=74 status=ok
// SIG undefined FUN_14117e552(void)

void FUN_14117e552(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x178) == '\x01') && ((param_2 & 0xfe) == 2)) &&
     (*(char *)(param_1 + 0xd0) == '\x01')) {
    uVar1 = FUN_140963a30(param_1 + 0x180);
    FUN_140f1fcc2(param_1,2,uVar1,0);
    return;
  }
  return;
}



// FUNCTION 14117e59c FUN_14117e59c body=311 status=ok
// SIG undefined FUN_14117e59c(void)

undefined8 FUN_14117e59c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14117e6cc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14117e6cc;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_14117e6cc:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14117e675;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_14117e675;
    }
  }
  uVar6 = 0;
LAB_14117e675:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117e6d4 FUN_14117e6d4 body=344 status=ok
// SIG undefined FUN_14117e6d4(void)

void FUN_14117e6d4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  int local_58 [6];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
  if (cVar4 != '\0') {
    FUN_1449027d0(param_1,&local_68);
    plVar3 = *(longlong **)(local_68 + 0x10);
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 4));
    *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    FUN_1447a97f4(local_58,param_2);
    if ((longlong)(int)plVar3[1] != 0) {
      lVar8 = 0;
      uVar6 = 0;
      do {
        if (*(int *)(*plVar3 + lVar8) == local_58[0]) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          if (((int)uVar6 < 0) || ((int)plVar3[1] <= (int)uVar6)) goto LAB_14117e7ce;
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
          lVar8 = *plVar3;
          lVar7 = (ulonglong)(uVar6 & 0x7fffffff) * 0x40;
          iVar5 = *(int *)(lVar8 + 0x38 + lVar7);
          if (*(longlong *)(lVar8 + 0x30 + lVar7) == param_3) {
            if (iVar5 != 0) goto LAB_14117e7ce;
            iVar5 = 1;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          *(longlong *)(lVar8 + lVar7 + 0x30) = param_3;
          *(int *)(lVar8 + lVar7 + 0x38) = iVar5;
          goto LAB_14117e7ce;
        }
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x40;
      } while ((longlong)(int)plVar3[1] * 0x40 != lVar8);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
LAB_14117e7ce:
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 4));
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117e82e FUN_14117e82e body=137 status=ok
// SIG undefined FUN_14117e82e(void)

undefined8 * FUN_14117e82e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2416b0;
  FUN_140b47c46(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[9];
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
  FUN_14117e8b7(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14117e8b7 FUN_14117e8b7 body=184 status=ok
// SIG undefined FUN_14117e8b7(void)

void FUN_14117e8b7(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b2413e0;
    FUN_140b47c46(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)param_1[9];
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
    plVar3 = (longlong *)param_1[6];
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
    *param_1 = &PTR_FUN_14b23dd30;
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xd;
  }
  return;
}



// FUNCTION 14117e970 FUN_14117e970 body=1702 status=ok
// SIG undefined FUN_14117e970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14117e970(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  int iVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined4 uVar19;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 local_140;
  undefined1 *local_138;
  undefined1 local_129;
  undefined8 local_128;
  longlong *local_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined4 local_f0;
  undefined1 local_e8 [40];
  undefined4 local_c0;
  undefined1 local_b8 [40];
  undefined4 local_90;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar9 = FUN_14117f064();
  if (lVar9 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbd3828) && (FUN_144b3d300(&DAT_14cbd3828), DAT_14cbd3828 == -1)) {
      DAT_14cbd3818 = 0;
      _DAT_14cbd3820 = 0;
      atexit(FUN_14422df5c);
      _Init_thread_footer(&DAT_14cbd3828);
    }
    uVar12 = _DAT_14cbd3820;
    FUN_140368c45(DAT_14cbd3818,_DAT_14cbd3820 & 0xffffffff);
    uVar11 = _DAT_14cbd3820 >> 0x20;
    _DAT_14cbd3820 = _DAT_14cbd3820 & 0xffffffff00000000;
    if (((longlong)uVar12 < 0) && ((int)uVar11 != 0)) {
      FUN_14053e466(&DAT_14cbd3818,0);
    }
    if (*(char *)(param_2 + 0x20) == '\0') {
      lVar9 = *(longlong *)(param_2 + 0x30);
      if (lVar9 == 0) {
        uVar10 = FUN_140feeb70();
        lVar9 = FUN_14477b664(uVar10);
        *(longlong *)(param_2 + 0x30) = lVar9;
      }
      lVar13 = *(longlong *)(param_2 + 0x38);
      if (lVar13 == 0) {
        uVar11 = 0;
        if ((lVar9 == 0) || (uVar11 = 0, *(longlong *)(param_2 + 0x28) == 0)) goto LAB_14117ebad;
        plVar18 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar18 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar7 == '\0')) {
          *(undefined8 *)(param_2 + 0x38) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x110))(plVar18);
          lVar13 = FUN_144aff482(uVar10,(longlong *)(param_2 + 0x28));
          *(longlong *)(param_2 + 0x38) = lVar13;
          if (lVar13 != 0) goto LAB_14117ea24;
        }
      }
      else {
LAB_14117ea24:
        if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) && (*(int *)(param_1 + 0x34) != 0))
        {
          uVar8 = *(uint *)(param_1 + 0x30);
          uVar11 = 0;
          if (((int)uVar8 < 0) || (DAT_14c9647dc <= (int)uVar8)) goto LAB_14117ebad;
          lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x34))) &&
             ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
            uVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
            lVar9 = FUN_14117f118(uVar10,lVar13);
            if (lVar9 != 0) goto LAB_14117eaa8;
          }
        }
      }
    }
    else {
      uVar11 = 0;
      if ((longlong)*(int *)(param_2 + 0x48) == 0) goto LAB_14117ebad;
      plVar18 = *(longlong **)(param_2 + 0x40);
      plVar17 = plVar18 + (longlong)*(int *)(param_2 + 0x48) * 0xe;
      bVar16 = false;
      do {
        while( true ) {
          lVar9 = plVar18[1];
          if (lVar9 == 0) {
            uVar10 = FUN_14016979c();
            lVar9 = FUN_14477b664(uVar10);
            plVar18[1] = lVar9;
          }
          if (plVar18[2] == 0) break;
LAB_14117ec7f:
          uVar10 = FUN_14479d2ce(param_1 + 0x18);
          local_b8[0] = 0;
          local_90 = 0;
          FUN_1456bb102(local_b8,uVar10);
          FUN_1448729ea(plVar18 + 4,local_88,local_b8);
          uVar19 = FUN_144a7b41a(local_88,0);
          lVar13 = plVar18[3];
          uVar10 = FUN_14479d2ce(param_1 + 0x18);
          local_118 = local_118 & 0xffffffffffffff00;
          local_f0 = 0;
          FUN_1456bb102(&local_118,uVar10);
          local_e8[0] = 0;
          local_c0 = 0;
          lVar9 = plVar18[1];
          if (lVar9 == 0) {
            uVar10 = FUN_14016979c();
            lVar9 = FUN_14477b664(uVar10);
            plVar18[1] = lVar9;
          }
          lVar14 = plVar18[2];
          if (((lVar14 == 0) && (lVar14 = 0, lVar9 != 0)) && (*plVar18 != 0)) {
            plVar6 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar6 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
              lVar14 = 0;
            }
            else {
              uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lVar14 = FUN_144aff482(uVar10,plVar18);
            }
            plVar18[2] = lVar14;
          }
          local_138 = &local_129;
          local_140 = 1;
          local_148 = uVar19;
          FUN_140c40077(&local_128,lVar14,&local_118,
                        CONCAT71((int7)((ulonglong)local_88 >> 8),(char)lVar13) & 0xffffffff);
          FUN_144a5ac3a(local_e8);
          FUN_144a5ac3a(&local_118);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar5 != (code *)0x0) {
            ppppuVar15 = local_88;
            if (0x18 < local_70) {
              ppppuVar15 = (undefined8 ****)local_88[0];
            }
            (*pcVar5)(ppppuVar15);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(local_88[0]);
          }
          FUN_144a5ac3a(local_b8);
          uVar11 = _DAT_14cbd3820;
          lVar9 = (longlong)DAT_14cbd3820;
          uVar8 = DAT_14cbd3820 + 1;
          _DAT_14cbd3820 = CONCAT44(DAT_14cbd3824,uVar8);
          if (DAT_14cbd3824 < uVar8) {
            FUN_140c41468(&DAT_14cbd3818,uVar11 & 0xffffffff);
          }
          plVar6 = local_120;
          uVar11 = DAT_14cbd3818;
          *(undefined8 *)(DAT_14cbd3818 + lVar9 * 0x10) = local_128;
          *(longlong **)(uVar11 + 8 + lVar9 * 0x10) = local_120;
          if (local_120 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            if (local_120 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_120 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_120)(local_120);
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
          plVar18 = plVar18 + 0xe;
          bVar16 = true;
          if (plVar18 == plVar17) goto LAB_14117eaa8;
        }
        if ((lVar9 != 0) && (*plVar18 != 0)) {
          plVar6 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar6 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
            plVar18[2] = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
            lVar9 = FUN_144aff482(uVar10,plVar18);
            plVar18[2] = lVar9;
            if (lVar9 != 0) goto LAB_14117ec7f;
          }
        }
        plVar18 = plVar18 + 0xe;
      } while (plVar18 != plVar17);
      if (bVar16) {
LAB_14117eaa8:
        iVar4 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar4 + 1U) {
          FUN_14117f212((longlong *)(param_1 + 0x20),iVar4);
        }
        puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x28);
        FUN_14117f051(puVar3);
        if (puVar3[1] == 0) {
          uVar10 = FUN_14117f018();
          uVar11 = FUN_14477b664(uVar10);
          puVar3[1] = uVar11;
        }
        uVar11 = FUN_14117f018();
        uVar10 = FUN_14117f018();
        FUN_1402d1bfa(&local_118,uVar10,param_2);
        if (*puVar3 != local_118) {
          puVar3[2] = 0;
        }
        *puVar3 = local_118;
        uVar12 = FUN_14117f018();
        if (uVar11 == 0) {
LAB_14117eb53:
          uVar12 = uVar11;
        }
        else if (uVar12 == 0) {
          uVar12 = 0;
        }
        else if ((*(int *)(uVar12 + 0x38) <= *(int *)(uVar11 + 0x38)) &&
                (*(longlong *)(*(longlong *)(uVar11 + 0x30) + (longlong)*(int *)(uVar12 + 0x38) * 8)
                 == uVar12 + 0x30)) goto LAB_14117eb53;
        if (puVar3[1] != uVar12) {
          puVar3[2] = 0;
        }
        uVar10 = FUN_14477b664(uVar12);
        uVar11 = FUN_14477b664(uVar10);
        puVar3[1] = uVar11;
        if ((uVar11 != 0) && (*puVar3 != 0)) {
          puVar3[2] = param_2;
        }
        local_118 = puVar3[3];
        uStack_110 = puVar3[4];
        puVar3[3] = DAT_14cbd3818;
        puVar3[4] = _DAT_14cbd3820;
        DAT_14cbd3818 = local_118;
        _DAT_14cbd3820 = uStack_110;
        FUN_140eb0b6a(param_1);
        uVar11 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
        goto LAB_14117ebad;
      }
    }
  }
  uVar11 = 0;
LAB_14117ebad:
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14117f018 FUN_14117f018 body=57 status=ok
// SIG undefined FUN_14117f018(void)

void FUN_14117f018(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf748 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf748 = FUN_140002ddd(FUN_1465efde8,uVar1,L"OakTraitDef");
  }
  return;
}



// FUNCTION 14117f051 FUN_14117f051 body=19 status=ok
// SIG undefined FUN_14117f051(void)

void FUN_14117f051(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 14117f064 FUN_14117f064 body=180 status=ok
// SIG undefined FUN_14117f064(void)

longlong * FUN_14117f064(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x20);
    lVar7 = (longlong)*(int *)(param_1 + 0x28) * 0x28;
    do {
      lVar5 = plVar6[1];
      if (lVar5 == 0) {
        uVar3 = FUN_14117f018();
        lVar5 = FUN_14477b664(uVar3);
        plVar6[1] = lVar5;
      }
      lVar4 = plVar6[2];
      if (((lVar4 == 0) && (lVar4 = 0, lVar5 != 0)) && (*plVar6 != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar4 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar4 = FUN_144aff482(uVar3,plVar6);
        }
        plVar6[2] = lVar4;
      }
      if (lVar4 == param_2) {
        return plVar6;
      }
      plVar6 = plVar6 + 5;
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 14117f118 FUN_14117f118 body=249 status=ok
// SIG undefined FUN_14117f118(void)

longlong FUN_14117f118(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((param_2 != 0) && ((*(byte *)(param_1 + 0x20c) & 1) == 0)) {
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar5);
        if (((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) &&
           (*(longlong *)(lVar2 + 0xa8) == param_2)) {
          return 0;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar5);
    }
    plVar4 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x28);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    lVar5 = FUN_1418aade0(uVar3);
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      iVar1 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
        FUN_14120b214((longlong *)(param_1 + 0x38),iVar1);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = lVar5;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      FUN_143e2acda(lVar5,param_2,param_1 + 0x20);
    }
  }
  return lVar5;
}



// FUNCTION 14117f212 FUN_14117f212 body=370 status=ok
// SIG undefined FUN_14117f212(void)

void FUN_14117f212(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14117f29b;
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
LAB_14117f29b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 14117f384 FUN_14117f384 body=90 status=ok
// SIG undefined FUN_14117f384(void)

undefined8 * FUN_14117f384(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b02d490;
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
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14117f3de FUN_14117f3de body=40 status=ok
// SIG undefined FUN_14117f3de(void)

undefined8 FUN_14117f3de(undefined8 param_1,int param_2)

{
  FUN_14117f406();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14117f406 FUN_14117f406 body=285 status=ok
// SIG undefined FUN_14117f406(void)

void FUN_14117f406(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2be140;
  param_1[6] = &PTR_FUN_14b2be430;
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b2ba5b0;
  param_1[6] = &PTR_LAB_14b2ba8a0;
  plVar1 = param_1 + 0x35;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x39) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x38)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2d;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x31) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x30)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ee338(param_1);
  return;
}



// FUNCTION 14117f524 FUN_14117f524 body=265 status=ok
// SIG undefined FUN_14117f524(void)

undefined * FUN_14117f524(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0f70) {
    FUN_144b3d300(&DAT_14c9c0f70);
    if (DAT_14c9c0f70 == -1) {
      FUN_145821f78(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x2c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0ef0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8fb2b);
      _Init_thread_footer(&DAT_14c9c0f70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0ef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117f62e FUN_14117f62e body=471 status=ok
// SIG undefined FUN_14117f62e(void)

void FUN_14117f62e(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0xa8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar1;
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar15 = 1;
    iVar10 = 0;
    local_58._4_4_ = 0;
    uVar6 = 0xffffffff;
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar10 = *(int *)(param_1 + 0xc0);
    uVar6 = (uint)local_58;
    iVar8 = (int)local_68;
  }
  lVar5 = local_60;
  iVar7 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ != iVar10 || local_60 != lVar1) {
    do {
      FUN_14117f806(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28 + (longlong)iVar7 * 0x40));
      uVar6 = ~(uint)uVar15 & uVar6;
      lVar14 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar14 = lVar5;
      }
      iVar3 = *(int *)(lVar5 + 0x18);
      lVar12 = (longlong)iVar8;
      uVar11 = *(uint *)(lVar14 + lVar12 * 4) & uVar6;
      if (uVar11 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar13 = 0;
          do {
            uVar11 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
            if (uVar11 != 0) {
              iVar8 = iVar8 + (int)lVar13 + 1;
              uVar6 = 0xffffffff;
              goto LAB_14117f743;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar4 - lVar12 != lVar13);
          uVar6 = 0xffffffff;
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_14117f743:
        uVar15 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar15 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar9 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar10 || lVar5 != lVar1);
  }
  FUN_14582289e((longlong *)(param_1 + 0x98));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14117f806 FUN_14117f806 body=750 status=ok
// SIG undefined FUN_14117f806(void)

void FUN_14117f806(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0xe8) * 0x30;
    lVar7 = *(longlong *)(param_1 + 0xe0) + 0x20;
    do {
      cVar4 = FUN_140fec400(param_1);
      if (cVar4 == '\0') {
        FUN_14117fb26(&local_50);
        lVar3 = local_50;
        if (((local_50 != 0) && (*(char *)(lVar7 + -7) == '\x01')) &&
           (*(char *)(lVar7 + -6) == '\x01')) {
          FUN_1458228e2(param_1,&local_78);
          *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_70;
          *(longlong *)(lVar3 + 0x10) = local_78;
          FUN_140ac173c(&local_78,param_1 + 0x30);
          *(undefined4 *)(lVar3 + 0x1c) = (undefined4)local_78;
          *(undefined4 *)(lVar3 + 0x20) = local_78._4_4_;
          *(undefined4 *)(lVar3 + 0x24) = (undefined4)uStack_70;
          *(undefined4 *)(lVar3 + 0x28) = uStack_70._4_4_;
          *(undefined4 *)(lVar3 + 0x2c) = local_68;
          *(undefined4 *)(lVar3 + 0x30) = uStack_64;
          *(undefined4 *)(lVar3 + 0x34) = uStack_60;
          *(undefined4 *)(lVar3 + 0x38) = uStack_5c;
          *(undefined4 *)(lVar3 + 0x3c) = local_58;
          *(undefined4 *)(lVar3 + 0x48) = *(undefined4 *)(lVar7 + -0x10);
          *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(lVar7 + -0x18);
          *(undefined4 *)(lVar3 + 0x4c) = *(undefined4 *)(lVar7 + -0xc);
          *(undefined1 *)(lVar3 + 0x50) = 0;
          local_78 = lVar3;
          uStack_70 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          uVar5 = FUN_140d80bda(param_1);
          FUN_141000642(uVar5,&local_78);
          plVar6 = uStack_70;
          if (uStack_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_70)(uStack_70);
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
        plVar6 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
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
      FUN_1408256d2(lVar7);
      lVar7 = lVar7 + 0x30;
      lVar8 = lVar8 + -0x30;
    } while (lVar8 != 0);
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    FUN_14890ce2a(&local_50);
    if (local_50 != 0) {
      FUN_1458228e2(param_1,&local_78);
      *(undefined4 *)(local_50 + 0x18) = (undefined4)uStack_70;
      *(longlong *)(local_50 + 0x10) = local_78;
      FUN_140ac173c(&local_78,param_1 + 0x30);
      *(undefined4 *)(local_50 + 0x1c) = (undefined4)local_78;
      *(undefined4 *)(local_50 + 0x20) = local_78._4_4_;
      *(undefined4 *)(local_50 + 0x24) = (undefined4)uStack_70;
      *(undefined4 *)(local_50 + 0x28) = uStack_70._4_4_;
      *(ulonglong *)(local_50 + 0x2c) = CONCAT44(uStack_64,local_68);
      *(ulonglong *)(local_50 + 0x34) = CONCAT44(uStack_5c,uStack_60);
      *(undefined4 *)(local_50 + 0x3c) = local_58;
      *(undefined1 *)(local_50 + 0x40) = 0;
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x100) = 0;
  FUN_140e7523c(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_14117faf6(param_1 + 0xe0);
  }
  FUN_14117fc02(param_1);
  FUN_140d7fad6(param_1);
  FUN_140d8066a(param_1);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar5 = FUN_140d80bda(param_1);
    plVar6 = (longlong *)FUN_140ec3c65(uVar5);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x78))(plVar6,param_1 + 0x30,*(undefined8 *)(param_1 + 0x80));
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117faf6 FUN_14117faf6 body=48 status=ok
// SIG undefined FUN_14117faf6(void)

void FUN_14117faf6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14117fb26 FUN_14117fb26 body=159 status=ok
// SIG undefined FUN_14117fb26(void)

undefined8 * FUN_14117fb26(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = FUN_14117fbc8();
  uVar3 = FUN_1403d4194(uVar4);
  FUN_140d2f368(&local_28,uVar3);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117fbc8 FUN_14117fbc8 body=57 status=ok
// SIG undefined FUN_14117fbc8(void)

void FUN_14117fbc8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f0a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f0a0 =
         FUN_140002ddd(FUN_14653f240,uVar1,L"ReplicatedConditionalMissionGiverEnableChange");
  }
  return;
}



// FUNCTION 14117fc02 FUN_14117fc02 body=345 status=ok
// SIG undefined FUN_14117fc02(void)

void FUN_14117fc02(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  int local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    uVar1 = FUN_140d80bda();
    plVar2 = (longlong *)FUN_140ec3c65(uVar1);
    if (plVar2 != (longlong *)0x0) {
      FUN_14105743e(local_58,param_1 + 0xb4);
      FUN_1458228e2(param_1,&local_74);
      if (local_74 == 0) {
        local_60 = DAT_14cb7bba0;
        local_68 = DAT_14cb7bb98;
      }
      else {
        local_60 = local_6c;
        local_68 = CONCAT44(uStack_70,local_74);
      }
      FUN_144928d62(local_48,1,&local_68);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_58,*(undefined8 *)(param_1 + 0xd8));
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_14582385e(param_1);
    *(undefined4 *)(param_1 + 0xbc) = DAT_14cb7bd70;
    *(undefined8 *)(param_1 + 0xb4) = DAT_14cb7bd68;
    *(undefined8 *)(param_1 + 0xc0) = DAT_14cb7bd80;
    *(undefined4 *)(param_1 + 200) = DAT_14cb7bd88;
    *(undefined8 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117fd5c FUN_14117fd5c body=527 status=ok
// SIG undefined FUN_14117fd5c(void)

void FUN_14117fd5c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar15 = (int)local_68;
  }
  plVar6 = local_60;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar9 = *(longlong **)(*param_1 + 0x30 + (longlong)iVar8 * 0x40);
      if (plVar9 != (longlong *)0x0) {
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar11;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_14117fe97;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_14117fe97:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar14) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14117ff6e FUN_14117ff6e body=559 status=ok
// SIG undefined FUN_14117ff6e(void)

void FUN_14117ff6e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_1 + 0x58;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_78;
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar15 = 1;
    iVar13 = 0;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    iVar13 = *(int *)(param_1 + 0x70);
    uVar14 = (uint)local_58;
    iVar6 = (int)local_68;
  }
  lVar4 = local_60;
  lVar11 = local_78;
  iVar5 = local_58._4_4_;
  iVar9 = local_50;
  iVar2 = iVar13;
  if (local_58._4_4_ != iVar13 || local_60 != local_78) {
    do {
      local_7c = iVar2;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10 + (longlong)iVar5 * 0x28);
      lVar8 = (longlong)*(int *)(lVar10 + 0x28);
      if (lVar8 != 0) {
        local_70 = *(longlong *)(lVar10 + 0x20);
        lVar10 = 0;
        do {
          (**(code **)(**(longlong **)(local_70 + lVar10) + 0x18))();
          lVar10 = lVar10 + 0x10;
          lVar11 = local_78;
          iVar13 = local_7c;
        } while (lVar8 * 0x10 != lVar10);
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      lVar10 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar10 = lVar4;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      lVar8 = (longlong)iVar6;
      uVar7 = *(uint *)(lVar10 + lVar8 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar3 = iVar5;
        if (iVar5 < iVar6) {
          iVar3 = iVar6;
        }
        iVar13 = local_7c;
        if (iVar6 < iVar5) {
          lVar12 = 0;
          do {
            uVar7 = *(uint *)(lVar10 + lVar8 * 4 + 4 + lVar12 * 4);
            if (uVar7 != 0) {
              iVar6 = iVar6 + (int)lVar12 + 1;
              uVar14 = 0xffffffff;
              goto LAB_141180090;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar3 - lVar8 != lVar12);
          uVar14 = 0xffffffff;
          iVar6 = iVar3;
        }
        iVar6 = iVar6 + 1;
        lVar11 = local_78;
        iVar5 = iVar2;
      }
      else {
LAB_141180090:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
      iVar2 = local_7c;
    } while (iVar5 != iVar13 || lVar4 != lVar11);
  }
  FUN_145822aa8((longlong *)(param_1 + 0x48));
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118019e FUN_14118019e body=250 status=ok
// SIG undefined FUN_14118019e(void)

void FUN_14118019e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0x154) != 0) && (uVar2 = *(uint *)(param_1 + 0x150), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x154))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))) {
      FUN_140457ffc(lVar3 + 0x2b8,param_1);
      FUN_140457ffc(lVar3 + 0x2d0,param_1);
    }
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  puVar1 = (uint *)(param_1 + 0x158);
  if (((*(int *)(param_1 + 0x15c) != 0) && (uVar2 = *puVar1, -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x15c))) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)) {
      FUN_140aeefbc(*plVar4,0,CONCAT71((int7)((ulonglong)DAT_14c9647c8 >> 8),1));
      FUN_14597b13e(param_1,0);
    }
  }
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  return;
}



// FUNCTION 141180298 FUN_141180298 body=527 status=ok
// SIG undefined FUN_141180298(void)

void FUN_141180298(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar15 = (int)local_68;
  }
  plVar6 = local_60;
  iVar8 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar9 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar8 * 0x28);
      if (plVar9 != (longlong *)0x0) {
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
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar11;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar13 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar13 == lVar10) goto LAB_1411803d3;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar14 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar11 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_1411803d3:
  plVar6 = local_70;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar14) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(plVar6,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411804aa FUN_1411804aa body=85 status=ok
// SIG undefined FUN_1411804aa(void)

void FUN_1411804aa(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1411804ff(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001411804fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1411804ff FUN_1411804ff body=75 status=ok
// SIG undefined FUN_1411804ff(void)

void FUN_1411804ff(longlong param_1,int param_2)

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



// FUNCTION 14118054a FUN_14118054a body=246 status=ok
// SIG undefined FUN_14118054a(void)

void FUN_14118054a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35c240;
  plVar3 = (longlong *)param_1[0x1e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x14];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  param_1[0xe] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014118063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141180640 FUN_141180640 body=375 status=ok
// SIG undefined FUN_141180640(void)

undefined8 * FUN_141180640(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411807da FUN_1411807da body=126 status=ok
// SIG undefined FUN_1411807da(void)

void FUN_1411807da(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x1151) & 1) == 0) {
    FUN_1446f470e(local_20,L"OnRep_Dropped",1);
    FUN_140721fbe(param_1 + 0x1328,local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_141180862(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141180862 FUN_141180862 body=425 status=ok
// SIG undefined FUN_141180862(void)

void FUN_141180862(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  undefined4 uStack_28;
  uint uStack_24;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0xe10) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0xe10) + 0x695) == '\x01')) {
    plVar1 = *(longlong **)(param_1 + 0x1c8);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cac6e60 == 0) {
        local_50 = &local_30;
        local_30 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_142b47bc4;
        local_58 = &LAB_1478989f1;
        local_60 = &LAB_146391124;
        local_68 = L"Engine";
        local_70 = 0x10000000000;
        local_78 = 0x10000005;
        local_80 = 0x10;
        local_88 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
          DAT_14cac6e60 + 0x30)) {
        lVar2 = *(longlong *)(param_1 + 0xe10);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x694) == '\x01')) {
          (**(code **)(*plVar1 + 0x728))(plVar1,*(undefined8 *)(lVar2 + 0x68c),1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
      }
    }
  }
  else {
    local_20 = DAT_14c8462d0 ^ 0x8000000000000000;
    uStack_24 = DAT_14c8462c8._4_4_ ^ 0x80000000;
    local_30 = (code *)(CONCAT44(DAT_14c8462c0._4_4_,(undefined4)DAT_14c8462c0) ^ 0x8000000000000000
                       );
    uStack_28 = (undefined4)DAT_14c8462c8;
    FUN_140b3d268(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141180a20 FUN_141180a20 body=23 status=ok
// SIG undefined FUN_141180a20(void)

void FUN_141180a20(undefined8 param_1,longlong param_2)

{
  FUN_141180a38();
  *(byte *)(param_2 + 0x69) = *(byte *)(param_2 + 0x69) & 0x8f;
  return;
}



// FUNCTION 141180a38 FUN_141180a38 body=1056 status=ok
// SIG undefined FUN_141180a38(void)

void FUN_141180a38(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_1 + 0x8c);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    *(undefined4 *)(param_2 + 0x6c) = 0;
    iVar6 = 0;
  }
  else {
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x180) + 0xc);
    *(uint *)(param_2 + 0x6c) = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar9;
      }
    }
  }
  *(int *)(param_2 + 0x70) = iVar6;
  if (*(longlong *)(param_1 + 0x188) == 0) {
    *(undefined4 *)(param_2 + 0x74) = 0;
    iVar6 = 0;
  }
  else {
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x188) + 0xc);
    *(uint *)(param_2 + 0x74) = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar9;
      }
    }
  }
  *(int *)(param_2 + 0x78) = iVar6;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    *(undefined4 *)(param_2 + 0x80) = 0;
    iVar6 = 0;
  }
  else {
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x1c8) + 0xc);
    *(uint *)(param_2 + 0x80) = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar9;
      }
    }
  }
  *(int *)(param_2 + 0x84) = iVar6;
  if (*(int *)(param_2 + 0x138) != 0x4fc71eb4) {
    *(undefined8 *)(param_2 + 0x140) = 0;
  }
  *(undefined4 *)(param_2 + 0x138) = 0x4fc71eb4;
  lVar12 = *(longlong *)(param_1 + 0x250);
  if (*(longlong *)(param_2 + 0x130) != lVar12) {
    *(undefined8 *)(param_2 + 0x140) = 0;
  }
  *(longlong *)(param_2 + 0x130) = lVar12;
  *(uint *)(param_2 + 0x68) = (uint)*(ushort *)(param_1 + 0x104);
  *(undefined1 *)(param_2 + 0x179) = *(undefined1 *)(param_1 + 0x1d0);
  *(undefined4 *)(param_2 + 0x17c) = *(undefined4 *)(param_1 + 0x1d4);
  if ((*(longlong *)(param_2 + 0x88) != *(longlong *)(param_1 + 0x1e8)) ||
     (*(int *)(param_2 + 0x90) != *(int *)(param_1 + 0x1f0))) {
    *(longlong *)(param_2 + 0x88) = *(longlong *)(param_1 + 0x1e8);
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x1f0);
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  if (param_2 + 0xa0 != param_1 + 0x200) {
    lVar12 = param_1 + 0x200;
    if (*(longlong *)(param_1 + 0x230) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x230);
    }
    FUN_1400709d4(param_2 + 0xa0,lVar12,*(undefined4 *)(param_1 + 0x238),
                  *(undefined4 *)(param_2 + 0xdc));
  }
  (**(code **)(*(longlong *)(param_2 + 400) + 0x20))(param_2 + 400,0);
  *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(param_1 + 0x3c8);
  FUN_1406022fe(param_2 + 0x1a0,param_1 + 0x3d0);
  *(undefined4 *)(param_2 + 0x180) = *(undefined4 *)(param_1 + 0x1d8);
  *(byte *)(param_2 + 0x1c2) = *(byte *)(param_2 + 0x1c2) | 1;
  *(undefined2 *)(param_2 + 0x1c0) = *(undefined2 *)(param_1 + 0x1de);
  uVar7 = *(uint *)(param_2 + 0x68) | 0x200;
  *(uint *)(param_2 + 0x68) = uVar7;
  iVar6 = *(int *)(param_1 + 0x3b8);
  if ((longlong)iVar6 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x3b0);
    lVar11 = 0;
    do {
      if (*(char *)(*(longlong *)(lVar12 + lVar11) + 0x222) == '\x01') {
        iVar9 = *(int *)(param_2 + 0x1b8);
        *(uint *)(param_2 + 0x1b8) = iVar9 + 1U;
        if (*(uint *)(param_2 + 0x1bc) < iVar9 + 1U) {
          FUN_1408da40e((longlong *)(param_2 + 0x1b0),iVar9);
        }
        lVar8 = *(longlong *)(param_2 + 0x1b0);
        lVar10 = (longlong)iVar9 * 0x20;
        *(undefined8 *)(lVar8 + lVar10) = *(undefined8 *)(lVar12 + lVar11);
        lVar2 = *(longlong *)(lVar12 + 8 + lVar11);
        *(longlong *)(lVar8 + 8 + lVar10) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        lVar8 = lVar8 + lVar10;
        puVar1 = (undefined4 *)(lVar12 + 0x10 + lVar11);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(lVar8 + 0x10) = *puVar1;
        *(undefined4 *)(lVar8 + 0x14) = uVar3;
        *(undefined4 *)(lVar8 + 0x18) = uVar4;
        *(undefined4 *)(lVar8 + 0x1c) = uVar5;
      }
      lVar11 = lVar11 + 0x20;
    } while ((longlong)iVar6 * 0x20 != lVar11);
    uVar7 = *(uint *)(param_2 + 0x68);
  }
  *(uint *)(param_2 + 0x68) = uVar7 & 0xffffffd8;
  return;
}



// FUNCTION 141180e58 FUN_141180e58 body=440 status=ok
// SIG undefined FUN_141180e58(void)

void FUN_141180e58(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x3d0) + 0x70))(param_1 + 0x3d0,local_1c != 0);
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141181012 FUN_141181012 body=103 status=ok
// SIG undefined FUN_141181012(void)

void FUN_141181012(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0xba4) != param_2) &&
     ((*(char *)(param_1 + -600) == '\x03' || ((*(byte *)(param_1 + -0x370) & 1) != 0)))) {
    *(byte *)(param_1 + 0xba4) = param_2;
    if (*(longlong *)(param_1 + 0xa68) != 0) {
      FUN_14118107a(*(longlong *)(param_1 + 0xa68) + 0x3a0);
      param_2 = *(byte *)(param_1 + 0xba4) & 1;
    }
    if ((param_2 == 0) && (*(char *)(param_1 + 0xc00) == '\x01')) {
      *(undefined1 *)(param_1 + 0xc00) = 0;
    }
  }
  return;
}



// FUNCTION 14118107a FUN_14118107a body=163 status=ok
// SIG undefined FUN_14118107a(void)

void FUN_14118107a(longlong *param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (((bVar1 & 2) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 9) = bVar1 & 0xfd | param_2 * '\x02';
    if ((bVar1 & 1) != 0 && param_2 == '\x01') {
      if (*param_1 == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)param_1[1];
      }
      lVar3 = (**(code **)(*plVar5 + 0x48))();
      if ((*(byte *)(lVar3 + 0x80) & 1) != 0) {
        if (*param_1 == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)param_1[1];
        }
        cVar2 = (**(code **)(*plVar5 + 0x50))();
        if (cVar2 == '\0') {
          uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(lVar3 + 0x80)) &
                  0xffffffffffffff02;
          uVar4 = FUN_1407a0dc0(lVar3 + 0x88);
          FUN_14118111e(param_1,uVar4,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 1) & 0xffffffff);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14118111e FUN_14118111e body=2878 status=ok
// SIG undefined FUN_14118111e(void)

void FUN_14118111e(longlong *param_1,code *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_3a8 [32];
  uint local_388;
  undefined4 local_380;
  undefined4 local_378;
  undefined8 local_370;
  wchar_t *local_368;
  undefined1 *local_360;
  undefined1 *local_358;
  code **local_350;
  code *local_348;
  code *local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  longlong local_320;
  longlong *local_318;
  longlong **local_310;
  undefined1 local_304 [4];
  longlong *local_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2d8;
  byte local_2d0;
  code *local_2c8;
  longlong *plStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (param_2 == (code *)0x0) goto LAB_1411816bb;
  if (*param_1 == 0) {
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar11 = (longlong *)param_1[1];
  }
  cVar6 = (**(code **)(*plVar11 + 0x28))();
  if (cVar6 == '\0') goto LAB_1411816bb;
  uVar9 = (**(code **)(*(longlong *)*param_1 + 0x180))();
  FUN_1409e0c66(&local_2c8,uVar9);
  if (plStack_2c0 == (longlong *)0x0) goto LAB_1411816bb;
  iVar7 = (int)plStack_2c0[1];
  do {
    if (iVar7 == 0) {
      plVar11 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar8 = (int)plStack_2c0[1];
    bVar17 = iVar7 == iVar8;
    if (bVar17) {
      *(int *)(plStack_2c0 + 1) = iVar7 + 1;
      iVar8 = iVar7;
    }
    iVar7 = iVar8;
    UNLOCK();
    plVar11 = plStack_2c0;
  } while (!bVar17);
  LOCK();
  piVar1 = (int *)((longlong)plStack_2c0 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plStack_2c0 + 0x10))();
  }
  pcVar5 = local_2c8;
  if (plVar11 == (longlong *)0x0) goto LAB_1411816bb;
  if (local_2c8 != (code *)0x0) {
    if (param_1[7] != 0) {
      FUN_140478aca();
    }
    if (param_3 == '\0') {
LAB_1411811f2:
      lVar15 = *param_1;
      if (lVar15 != 0) {
        if (DAT_14cac9ca8 == 0) {
          local_2c8 = FUN_141030f22;
          local_340 = FUN_14081d0ea;
          local_348 = FUN_14081d0ea;
          local_358 = &LAB_1478c0a72;
          local_360 = &LAB_1417b2375;
          local_368 = L"Engine";
          local_370 = 0x1000000000;
          local_378 = 0x10000004;
          local_380 = 8;
          local_388 = 0x390;
          local_350 = &local_2c8;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
        goto LAB_141181231;
      }
      lVar15 = *(longlong *)(*param_1 + 0x20);
      if (lVar15 != 0) {
        lVar16 = FUN_144a6c4d8();
        if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) goto LAB_141181231;
      }
    }
    else {
      if (*param_1 == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)param_1[1];
      }
      lVar15 = (**(code **)(*plVar12 + 0x38))();
      if (lVar15 == 0) goto LAB_1411811f2;
LAB_141181231:
      local_2a0 = 0;
      local_298 = 0;
      local_2c8 = (code *)0x0;
      plStack_2c0 = (longlong *)0x0;
      local_2b8 = 0;
      local_294 = 0xffffffff00000080;
      local_28c = 0;
      local_280 = 0;
      local_278 = 0;
      local_250 = 0;
      local_248 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_244 = 0xffffffff00000080;
      local_23c = 0;
      local_230 = 0;
      local_228 = 0;
      local_220 = 0;
      local_218 = 0xffffffff00000000;
      local_1f0 = 0;
      local_1e8 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_1e4 = 0xffffffff00000080;
      local_1dc = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_198 = 0;
      local_170 = 0;
      local_168 = 0x200000000;
      local_158 = 0;
      local_150 = 0;
      uStack_14c = 0x20;
      uStack_148 = 0xffffffff;
      uStack_144 = 0;
      local_138 = 0;
      local_130 = 0;
      local_108 = 0;
      local_100 = 0x200000000;
      local_f0 = 0;
      local_e8 = 0;
      uStack_e4 = 0x20;
      uStack_e0 = 0xffffffff;
      uStack_dc = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_a0 = 0;
      local_98 = 0x200000000;
      local_88 = 0;
      local_80 = 0;
      uStack_7c = 0x20;
      uStack_78 = 0xffffffff;
      uStack_74 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = (longlong *)0x0;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      if (*param_1 == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)param_1[1];
      }
      local_2c8 = param_2;
      (**(code **)(*plVar12 + 0x30))(plVar12,&local_300);
      local_58 = local_300;
      lVar16 = *(longlong *)(param_2 + 0x30);
      if (*(char *)(lVar16 + 0x330) == '\0') {
        FUN_140e5e628(lVar16);
      }
      if (*(int *)(lVar16 + 0xd0) != *(int *)(lVar16 + 0xfc)) {
        uVar2 = (uint)((ulonglong)DAT_14cb89e20 >> 0x10);
        uVar13 = (uint)DAT_14cb89e20 & 0xffff;
        lVar10 = lVar16 + 0x100;
        if (*(longlong *)(lVar16 + 0x108) != 0) {
          lVar10 = *(longlong *)(lVar16 + 0x108);
        }
        iVar7 = *(int *)(lVar10 + (ulonglong)
                                  (*(int *)(lVar16 + 0x110) - 1U &
                                  (int)((ulonglong)DAT_14cb89e20 >> 0x20) +
                                  ((uint)DAT_14cb89e20 << 0x10 | uVar13) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar13 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar12 = (longlong *)(*(longlong *)(lVar16 + 200) + (longlong)iVar7 * 0x48);
            if (*plVar12 == DAT_14cb89e20) {
              if (((ulonglong)(plVar12 + 1) & 0xfffffffffffffff7) != 0) {
                local_300 = (longlong *)0x0;
                uStack_2f8 = (longlong *)0x0;
                local_2e0 = 8;
                FUN_14485c47a(&uStack_2f8,lVar15);
                local_2d0 = 7;
                if ((DAT_14c9a8cf4 & 0x20) != 0) {
                  local_2d0 = 0;
                }
                local_2d8 = 7;
                local_318 = &local_320;
                local_320 = DAT_14cb89e20;
                local_310 = &local_300;
                FUN_140ff1448(&plStack_2c0,local_304,&local_318,0);
                FUN_144a2da94(&local_300);
              }
              break;
            }
            iVar7 = (int)plVar12[8];
          } while (iVar7 != -1);
        }
      }
      lVar16 = *(longlong *)(param_2 + 0x30);
      if (*(char *)(lVar16 + 0x330) == '\0') {
        FUN_140e5e628(lVar16);
      }
      if (*(int *)(lVar16 + 0xd0) != *(int *)(lVar16 + 0xfc)) {
        uVar2 = (uint)((ulonglong)DAT_14cb89e10 >> 0x10);
        uVar13 = (uint)DAT_14cb89e10 & 0xffff;
        lVar10 = lVar16 + 0x100;
        if (*(longlong *)(lVar16 + 0x108) != 0) {
          lVar10 = *(longlong *)(lVar16 + 0x108);
        }
        iVar7 = *(int *)(lVar10 + (ulonglong)
                                  (*(int *)(lVar16 + 0x110) - 1U &
                                  (int)((ulonglong)DAT_14cb89e10 >> 0x20) +
                                  ((uint)DAT_14cb89e10 << 0x10 | uVar13) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar13 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar12 = (longlong *)(*(longlong *)(lVar16 + 200) + (longlong)iVar7 * 0x48);
            if (*plVar12 == DAT_14cb89e10) {
              if (((ulonglong)(plVar12 + 1) & 0xfffffffffffffff7) != 0) {
                if (*param_1 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  plVar12 = (longlong *)param_1[1];
                }
                (**(code **)(*plVar12 + 0x10))(plVar12,&local_338);
                local_300 = (longlong *)0x0;
                uStack_2f8 = (longlong *)CONCAT44(uStack_334,local_338);
                uStack_2f0 = uStack_330;
                uStack_2ec = uStack_32c;
                local_2e8 = local_328;
                local_2e0 = 0x18;
                local_2d8 = 4;
                local_2d0 = (byte)~DAT_14c9a8994 >> 3 & 4;
                local_318 = &local_320;
                local_320 = DAT_14cb89e10;
                local_310 = &local_300;
                FUN_140ff1448(&plStack_2c0,local_304,&local_318,0);
                FUN_144a2da94(&local_300);
              }
              break;
            }
            iVar7 = (int)plVar12[8];
          } while (iVar7 != -1);
        }
      }
      FUN_140ff15b2(&local_2c8);
      local_388 = local_388 & 0xffffff00;
      FUN_140a41f04(pcVar5,&local_300,lVar15,&local_2c8);
      plVar12 = uStack_2f8;
      if ((longlong **)(param_1 + 7) != &local_300) {
        param_1[7] = (longlong)local_300;
        local_300 = (longlong *)0x0;
        plVar3 = (longlong *)param_1[8];
        if (uStack_2f8 != plVar3) {
          uStack_2f8 = (longlong *)0x0;
          param_1[8] = (longlong)plVar12;
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
        }
      }
      plVar12 = uStack_2f8;
      if (uStack_2f8 != (longlong *)0x0) {
        LOCK();
        plVar3 = uStack_2f8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*uStack_2f8)(uStack_2f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      plVar12 = (longlong *)param_1[7];
      if (plVar12 != (longlong *)0x0) {
        lVar15 = *param_1;
        local_300 = (longlong *)0x0;
        uStack_2f8 = (longlong *)((ulonglong)uStack_2f8 & 0xffffffff00000000);
        FUN_1446efa72(&local_300,0,3,0x10);
        plVar3 = local_300;
        uStack_2f8 = (longlong *)CONCAT44(uStack_2f8._4_4_,3);
        *local_300 = (longlong)&PTR_LAB_14ac8b4c0;
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 1;
        lVar16 = DAT_14c758608 + 1;
        if (lVar10 == 0) {
          LOCK();
          UNLOCK();
          lVar10 = DAT_14c758608 + 2;
          lVar16 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar16;
        local_300[2] = lVar10;
        *local_300 = (longlong)&PTR_FUN_14b421560;
        local_300[3] = 0;
        iVar7 = 0;
        if (lVar15 != 0) {
          uVar2 = *(uint *)(lVar15 + 0xc);
          *(uint *)(local_300 + 3) = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar15 = 0;
          }
          iVar7 = *(int *)(lVar15 + 0x10);
          if (*(int *)(lVar15 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar7 = *(int *)(lVar15 + 0x10);
            bVar17 = iVar7 == 0;
            if (bVar17) {
              *(int *)(lVar15 + 0x10) = iVar8;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar17) {
              iVar7 = iVar8;
            }
          }
        }
        *(int *)((longlong)plVar3 + 0x1c) = iVar7;
        plVar3[4] = (longlong)param_1;
        if (((int)uStack_2f8 == 0) || (local_300 == (longlong *)0x0)) {
LAB_141181a84:
          if ((int)uStack_2f8 != 0) {
            if (local_300 == (longlong *)0x0) goto LAB_14118169d;
            (**(code **)*local_300)(local_300,0);
            FUN_1446efa72(&local_300,0,0,0x10);
            goto LAB_141181681;
          }
        }
        else {
          cVar6 = (**(code **)(*local_300 + 0x30))();
          if (cVar6 == '\0') {
            goto LAB_141181a84;
          }
          plVar3 = plVar12 + 0x26;
          if (*(int *)((longlong)plVar12 + 0x144) < 1) {
            iVar7 = (int)plVar12[0x27];
            iVar8 = (int)plVar12[0x28] + -1;
            *(int *)(plVar12 + 0x28) = iVar8;
            if (iVar8 <= iVar7) {
              iVar8 = iVar7;
              if (0 < iVar7) {
                iVar14 = 0;
                do {
                  if (((*(int *)(*plVar3 + 8 + (longlong)iVar14 * 0x10) == 0) ||
                      (plVar4 = *(longlong **)(*plVar3 + (longlong)iVar14 * 0x10),
                      plVar4 == (longlong *)0x0)) ||
                     (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                    FUN_14005b288(plVar3,iVar14);
                    FUN_14005b248(plVar3);
                  }
                  else {
                    iVar14 = iVar14 + 1;
                  }
                  iVar8 = (int)plVar12[0x27];
                } while (iVar14 < iVar8);
              }
              iVar14 = 2;
              if (2 < iVar8 * 2) {
                iVar14 = iVar8 * 2;
              }
              *(int *)(plVar12 + 0x28) = iVar14;
              if ((iVar14 < iVar7) && (*(int *)((longlong)plVar12 + 0x13c) != iVar8)) {
                FUN_14045812c();
              }
            }
          }
          if (((int)uStack_2f8 != 0) && (local_300 != (longlong *)0x0)) {
            (**(code **)(*local_300 + 0x38))(local_300,&local_318);
          }
          iVar7 = (int)plVar12[0x27];
          *(uint *)(plVar12 + 0x27) = iVar7 + 1U;
          if (*(uint *)((longlong)plVar12 + 0x13c) < iVar7 + 1U) {
            FUN_1447a71f6(plVar3,iVar7);
          }
          lVar15 = *plVar3;
          lVar16 = (longlong)iVar7 * 0x10;
          *(undefined8 *)(lVar15 + lVar16) = 0;
          *(undefined4 *)(lVar15 + 8 + lVar16) = 0;
          *(longlong **)(lVar15 + lVar16) = local_300;
          local_300 = (longlong *)0x0;
          *(int *)(lVar15 + 8 + lVar16) = (int)uStack_2f8;
LAB_141181681:
          uStack_2f8 = (longlong *)((ulonglong)uStack_2f8 & 0xffffffff00000000);
        }
        if (local_300 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_14118169d:
      local_2c8 = (code *)0x0;
      FUN_14076ba36(&plStack_2c0);
    }
  }
  LOCK();
  plVar12 = plVar11 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_1411816bb:
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141181c5e FUN_141181c5e body=569 status=ok
// SIG undefined FUN_141181c5e(void)

void FUN_141181c5e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  PSRWLOCK pRVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  int *local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_34;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 != 0) && (DAT_14c76408c != 0)) {
    if (DAT_14cbd5900 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
    FUN_14010318a(param_3,&local_50,0);
    FUN_140002266(local_30,L"TextureRenderTarget2D\'%s\'");
    if (local_50 != (int *)0x0) {
      FUN_1400020a8();
    }
    iVar2 = *(int *)(param_2 + 1);
    if (iVar2 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    local_34 = FUN_144a49b4a(iVar4,puVar6);
    local_50 = &local_34;
    local_48 = local_30;
    local_40 = param_1;
    plVar5 = (longlong *)FUN_141181ea8(param_1);
    lVar3 = *plVar5;
    pRVar1 = (PSRWLOCK)(lVar3 + 0x1c0);
    AcquireSRWLockShared(pRVar1);
    if ((longlong)*(int *)(lVar3 + 0x88) != 0) {
      lVar7 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar3 + 0x80) + 0x208 + lVar7) == local_34) {
          ReleaseSRWLockShared(pRVar1);
          plVar5 = (longlong *)FUN_141181ea8(param_1);
          lVar3 = *plVar5;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
          *(int *)(lVar3 + 0x1b8) = *(int *)(lVar3 + 0x1b8) + 1;
          FUN_141181f1e(&local_50,lVar3 + 0x80);
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
          goto LAB_141181dbe;
        }
        lVar7 = lVar7 + 0x430;
      } while ((longlong)*(int *)(lVar3 + 0x88) * 0x430 - lVar7 != 0);
    }
    ReleaseSRWLockShared(pRVar1);
LAB_141181dbe:
    plVar5 = (longlong *)FUN_141181ea8(param_1);
    lVar3 = *plVar5;
    pRVar1 = (PSRWLOCK)(lVar3 + 0x1c0);
    AcquireSRWLockShared(pRVar1);
    if ((longlong)*(int *)(lVar3 + 0x40) != 0) {
      lVar7 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar3 + 0x38) + 0x208 + lVar7) == local_34) {
          ReleaseSRWLockShared(pRVar1);
          plVar5 = (longlong *)FUN_141181ea8(param_1);
          lVar3 = *plVar5;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
          *(int *)(lVar3 + 0x1b8) = *(int *)(lVar3 + 0x1b8) + 1;
          FUN_141181f1e(&local_50,lVar3 + 0x38);
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x1c0));
          goto LAB_141181e13;
        }
        lVar7 = lVar7 + 0x430;
      } while ((longlong)*(int *)(lVar3 + 0x40) * 0x430 - lVar7 != 0);
    }
    ReleaseSRWLockShared(pRVar1);
LAB_141181e13:
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141181ea8 FUN_141181ea8 body=116 status=ok
// SIG undefined FUN_141181ea8(void)

longlong FUN_141181ea8(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1449027d0(param_1,&local_28);
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



// FUNCTION 141181f1e FUN_141181f1e body=191 status=ok
// SIG undefined FUN_141181f1e(void)

void FUN_141181f1e(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = param_1[2];
  *(int *)(param_2 + 2) = (int)param_2[2] + 2;
  if ((longlong)(int)param_2[1] != 0) {
    lVar6 = (longlong)(int)param_2[1] * 0x430;
    lVar5 = *param_2 + 0x1d8;
    do {
      if (*(int *)(lVar5 + 0x30) == *(int *)*param_1) {
        FUN_1449a0272(lVar5,param_1[1]);
        iVar3 = *(int *)(lVar5 + -4);
        if (*(char *)(lVar5 + -8) == '\0') {
          if (iVar3 == 0) {
            iVar3 = 0;
            goto LAB_141181f70;
          }
        }
        else {
LAB_141181f70:
          *(undefined1 *)(lVar5 + -8) = 0;
          *(int *)(lVar5 + -4) = iVar3 + 1;
        }
        if (((*(byte *)(lVar5 + -0x1c8) & 1) != 0) &&
           (lVar4 = FUN_1457a6614(uVar2,lVar5 + -0x1d0), lVar4 != 0)) {
          cVar1 = *(char *)(lVar4 + 0xfd);
          iVar3 = FUN_140d8dbd3();
          if (cVar1 < '\0') {
            return;
          }
          if (iVar3 <= cVar1) {
            return;
          }
          FUN_141008cba(uVar2,(int)cVar1);
        }
      }
      lVar5 = lVar5 + 0x430;
      lVar6 = lVar6 + -0x430;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 141181fe6 FUN_141181fe6 body=496 status=ok
// SIG undefined FUN_141181fe6(void)

undefined8 * FUN_141181fe6(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eb1504();
  *param_1 = &PTR_FUN_14b975ac0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xf00000d0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xf00000d0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xf00000d0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xf00000d0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.GrenadeBehavior_PayloadShooting";
  local_30 = 0x2f;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_38,L"Shooting",1);
  param_1[0xb] = local_38;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411821e0 FUN_1411821e0 body=262 status=ok
// SIG undefined FUN_1411821e0(void)

undefined8 * FUN_1411821e0(undefined8 *param_1)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b1a65f0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1411822f4 FUN_1411822f4 body=143 status=ok
// SIG undefined FUN_1411822f4(void)

undefined8 * FUN_1411822f4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 141182384 FUN_141182384 body=132 status=ok
// SIG undefined FUN_141182384(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141182384(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141182408 FUN_141182408 body=406 status=ok
// SIG undefined FUN_141182408(void)

void FUN_141182408(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  bool bVar10;
  
  lVar7 = 0;
  bVar10 = true;
  do {
    bVar9 = bVar10;
    lVar2 = param_1 + 0x600 + lVar7 * 0x10;
    lVar7 = *(longlong *)(param_1 + 0x608 + lVar7 * 0x10);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar2 + 8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar7 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar7;
          plVar8 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar8 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    FUN_14118259e(&DAT_14ca9a3e8,lVar2);
    lVar7 = 1;
    bVar10 = false;
  } while (bVar9);
  lVar7 = *(longlong *)(param_1 + 0x650);
  if (lVar7 != 0) {
    *(undefined8 *)(param_1 + 0x650) = 0;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14118259e(&DAT_14ca9a3e8,param_1 + 0x648);
  lVar7 = *(longlong *)(param_1 + 0x6d8);
  if (lVar7 != 0) {
    *(undefined8 *)(param_1 + 0x6d8) = 0;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x6e0);
  if (lVar7 != 0) {
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    LOCK();
    puVar1 = (uint *)(lVar7 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14118259e FUN_14118259e body=420 status=ok
// SIG undefined FUN_14118259e(void)

ulonglong FUN_14118259e(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  puVar1 = (uint *)(param_1 + 0x10);
  DVar5 = GetCurrentThreadId();
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar11 = uVar7 == uVar2;
    if (bVar11) {
      *puVar1 = uVar7 | 1;
      uVar2 = uVar7;
    }
    uVar7 = uVar2;
    UNLOCK();
    if (bVar11) {
      *(DWORD *)(param_1 + 0x14) = DVar5;
      goto LAB_1411825dc;
    }
  }
  if (*(DWORD *)(param_1 + 0x14) == DVar5) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar7);
  }
LAB_1411825dc:
  iVar6 = FUN_141182742(param_1,*param_2);
  if (iVar6 != -1) {
    lVar10 = (longlong)iVar6;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar10 * 8);
    plVar4 = (longlong *)*param_2;
    if (plVar4 != (longlong *)0x0) {
      *param_2 = 0;
      (**(code **)(*plVar4 + 0x38))();
    }
    if (*(int *)(lVar3 + 0x68) == 1) {
      iVar6 = (**(code **)(*DAT_14ca83900 + 0x1d0))(DAT_14ca83900,*(undefined8 *)(lVar3 + 8));
      if (*(longlong *)(lVar3 + 0x10) != *(longlong *)(lVar3 + 8)) {
        iVar8 = (**(code **)(*DAT_14ca83900 + 0x1d0))();
        iVar6 = iVar6 + iVar8;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) - (iVar6 + 0x3ffU >> 10);
      lVar3 = *(longlong *)(param_1 + 0x28);
      iVar6 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar6 + 1U) {
        FUN_145d3c018((longlong *)(param_1 + 0x38),iVar6);
      }
      lVar3 = *(longlong *)(lVar3 + lVar10 * 8);
      *(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 8) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
        UNLOCK();
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar10 * 8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar10 * 8) = 0;
        FUN_144734574();
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar10 * 4) = 0;
    }
  }
  uVar7 = *puVar1;
  uVar9 = (ulonglong)uVar7;
  if (uVar7 < 4) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (uVar7 < 2) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar7 == uVar2) {
        *puVar1 = 0;
      }
      else {
        uVar9 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar7 == uVar2) {
        return uVar9;
      }
    }
    uVar9 = FUN_140d366d2(puVar1);
    return uVar9;
  }
  LOCK();
  *puVar1 = *puVar1 - 4;
  UNLOCK();
  return uVar9;
}



// FUNCTION 141182742 FUN_141182742 body=169 status=ok
// SIG undefined FUN_141182742(void)

int FUN_141182742(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  puVar1 = (uint *)(param_1 + 0x10);
  DVar3 = GetCurrentThreadId();
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar8 = uVar4 == uVar2;
    if (bVar8) {
      *puVar1 = uVar4 | 1;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
    if (bVar8) {
      *(DWORD *)(param_1 + 0x14) = DVar3;
      goto LAB_141182773;
    }
  }
  if (*(DWORD *)(param_1 + 0x14) == DVar3) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar4);
  }
LAB_141182773:
  iVar6 = -1;
  iVar7 = iVar6;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    iVar5 = 0;
    do {
      iVar7 = iVar5;
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 8) == param_2) break;
      iVar5 = iVar5 + 1;
      iVar7 = iVar6;
    } while (*(int *)(param_1 + 0x30) != iVar5);
  }
  uVar4 = *puVar1;
  if (uVar4 < 4) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (uVar4 < 2) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar4 == uVar2) {
        *puVar1 = 0;
      }
      UNLOCK();
      if (uVar4 == uVar2) {
        return iVar7;
      }
    }
    FUN_140d366d2(puVar1);
  }
  else {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
  }
  return iVar7;
}



// FUNCTION 1411827f2 FUN_1411827f2 body=221 status=ok
// SIG undefined FUN_1411827f2(void)

longlong FUN_1411827f2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabf818 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147860c2b;
    local_40 = FUN_146371044;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"Channel",&DAT_14cabf818,&DAT_147860c2a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411828de FUN_1411828de body=213 status=ok
// SIG undefined FUN_1411828de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411828de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3014b0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b303900;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411829b8 FUN_1411829b8 body=221 status=ok
// SIG undefined FUN_1411829b8(void)

longlong FUN_1411829b8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0bb48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492ea6e5;
    local_40 = &LAB_145bcd164;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeSourceData",&DAT_14cc0bb48,FUN_14671c3f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0bb48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141182a96 FUN_141182a96 body=212 status=ok
// SIG undefined FUN_141182a96(void)

undefined8 FUN_141182a96(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    lVar2 = *(longlong *)param_1;
    uVar4 = (ushort)((ulonglong)lVar2 >> 0x10);
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar2 + 8);
    }
  }
  else {
    uVar4 = param_1[1];
    uVar5 = (uint)uVar4;
  }
  if ((*param_2 & 1) == 0) {
    if (*(longlong *)param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*(longlong *)param_2 + 8);
    }
  }
  else {
    uVar6 = (uint)param_2[1];
  }
  if (uVar5 == uVar6) {
    if ((uVar1 & 1) == 0) {
      if (*(longlong *)param_1 != 0) {
        uVar5 = *(uint *)(*(longlong *)param_1 + 8);
        goto LAB_141182acd;
      }
    }
    else {
      uVar5 = (uint)uVar4;
LAB_141182acd:
      if (uVar5 != 0) {
        if (((byte)uVar1 & 1) != ((byte)*param_2 & 1)) {
          if ((uVar1 & 1) != 0) {
            uVar3 = FUN_141182b6a(*(undefined8 *)param_1,*(undefined8 *)param_2);
            return uVar3;
          }
          uVar3 = FUN_141182b6a(*(undefined8 *)param_2,*(undefined8 *)param_1);
          return uVar3;
        }
        if ((uVar1 & 1) != 0) {
          uVar3 = FUN_146859601(*(undefined8 *)param_1,*(undefined8 *)param_2);
          return uVar3;
        }
        if (*(int *)(*(undefined8 **)param_1 + 1) == *(int *)(*(undefined8 **)param_2 + 1)) {
          uVar3 = FUN_141182dcc(**(undefined8 **)param_1,**(undefined8 **)param_2);
          return uVar3;
        }
        goto LAB_141182b3b;
      }
    }
    uVar3 = CONCAT71((uint7)(byte)(uVar1 >> 8),1);
  }
  else {
LAB_141182b3b:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 141182b6a FUN_141182b6a body=609 status=ok
// SIG undefined FUN_141182b6a(void)

undefined8 FUN_141182b6a(ulonglong param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  int local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar13 = param_1 >> 0x10 & 0xffff;
  uVar6 = (uint)(param_1 >> 2);
  uVar9 = 1;
  if ((param_1 & 2) == 0) {
    if (uVar13 == 0) goto LAB_141182da4;
    puVar19 = (undefined8 *)
              (((longlong)param_1 >> 0x20) * 0xc +
              **(longlong **)(&DAT_14c927ae8 + (ulonglong)(uVar6 & 0x3fff) * 8));
    puVar11 = (undefined8 *)((longlong)puVar19 + uVar13 * 0xc);
    do {
      uVar3 = *(uint *)(param_2 + 1);
      lVar4 = *param_2;
      uVar13 = 0;
      iVar12 = (int)((ulonglong)*puVar19 >> 0x20);
      iVar8 = (int)*puVar19;
      if (0 < (int)uVar3) {
        uVar17 = (ulonglong)uVar3;
        uVar18 = uVar3;
        do {
          uVar17 = uVar17 >> 1;
          uVar16 = (uint)uVar17 + (int)uVar13;
          iVar14 = *(int *)(lVar4 + (ulonglong)uVar16 * 0x18) - iVar8;
          if (iVar14 == 0) {
            iVar14 = *(int *)(lVar4 + 4 + (ulonglong)uVar16 * 0x18) - iVar12;
          }
          if (iVar14 < 0) {
            uVar13 = (ulonglong)(uVar16 + (uVar18 & 1));
          }
          bVar5 = 1 < uVar18;
          uVar18 = (uint)uVar17;
        } while (bVar5);
      }
      if ((int)uVar3 <= (int)uVar13) goto LAB_141182da2;
      iVar8 = iVar8 - *(int *)(lVar4 + uVar13 * 0x18);
      if (iVar8 == 0) {
        iVar8 = iVar12 - *(int *)(lVar4 + 4 + uVar13 * 0x18);
      }
      if (iVar8 < 0) goto LAB_141182da2;
      lVar4 = lVar4 + uVar13 * 0x18;
      puVar10 = (undefined8 *)(lVar4 + 8);
      if (puVar10 == (undefined8 *)0x0) goto LAB_141182da2;
      local_50 = CONCAT44(uVar6,*(undefined4 *)(puVar19 + 1)) & 0x3fffffffffff | 0x8000000000000000;
      local_60 = *puVar10;
      iVar8 = *(int *)(lVar4 + 0x10);
      local_58 = iVar8 + -1;
      if (iVar8 == 0) {
        local_58 = 0;
      }
      cVar7 = FUN_140c20914(&local_50,&local_60);
      if (cVar7 == '\0') goto LAB_141182da2;
      puVar19 = (undefined8 *)((longlong)puVar19 + 0xc);
    } while (puVar19 != puVar11);
  }
  else {
    if (uVar13 == 0) goto LAB_141182da4;
    piVar15 = (int *)(((longlong)param_1 >> 0x20) * 8 +
                     (*(longlong **)(&DAT_14c927ae8 + (ulonglong)(uVar6 & 0x3fff) * 8))[2]);
    piVar2 = piVar15 + uVar13 * 2;
    do {
      uVar3 = *(uint *)(param_2 + 1);
      lVar4 = *param_2;
      uVar16 = 0;
      uVar18 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar18 >> 1) + uVar16;
          iVar8 = *(int *)(lVar4 + (ulonglong)uVar1 * 0x18) - *piVar15;
          if (iVar8 == 0) {
            iVar8 = *(int *)(lVar4 + 4 + (ulonglong)uVar1 * 0x18);
          }
          if (iVar8 < 0) {
            uVar16 = uVar1 + (uVar18 & 1);
          }
          bVar5 = 1 < uVar18;
          uVar18 = uVar18 >> 1;
        } while (bVar5);
      }
      if ((int)uVar3 <= (int)uVar16) goto LAB_141182da2;
      uVar13 = (ulonglong)uVar16;
      iVar8 = *piVar15 - *(int *)(lVar4 + uVar13 * 0x18);
      if (iVar8 == 0) {
        iVar8 = -*(int *)(lVar4 + 4 + uVar13 * 0x18);
      }
      if (iVar8 < 0) goto LAB_141182da2;
      lVar4 = lVar4 + uVar13 * 0x18;
      puVar11 = (undefined8 *)(lVar4 + 8);
      if (puVar11 == (undefined8 *)0x0) goto LAB_141182da2;
      local_50 = CONCAT44(uVar6,piVar15[1]) & 0x3fffffffffff | 0x8000000000000000;
      local_60 = *puVar11;
      iVar8 = *(int *)(lVar4 + 0x10);
      local_58 = iVar8 + -1;
      if (iVar8 == 0) {
        local_58 = 0;
      }
      cVar7 = FUN_140c20914(&local_50,&local_60);
      if (cVar7 == '\0') goto LAB_141182da2;
      piVar15 = piVar15 + 2;
    } while (piVar15 != piVar2);
  }
  uVar9 = 1;
  goto LAB_141182da4;
LAB_141182da2:
  uVar9 = 0;
LAB_141182da4:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 141182dcc FUN_141182dcc body=143 status=ok
// SIG undefined FUN_141182dcc(void)

undefined8 FUN_141182dcc(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  do {
    if (param_3 == 0) {
      return 1;
    }
    if (*param_1 != *param_2) {
      return 0;
    }
    iVar1 = (int)param_1[2];
    if (iVar1 == (int)param_2[2]) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(param_1[1] + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(param_2[1] + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_141182e3c;
LAB_141182e16:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_141182e16;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if ((int)param_2[2] + iVar1 != 1) {
      return 0;
    }
LAB_141182e3c:
    param_1 = param_1 + 3;
    param_2 = param_2 + 3;
    param_3 = param_3 + -1;
  } while( true );
}



// FUNCTION 141182e6a FUN_141182e6a body=40 status=ok
// SIG undefined FUN_141182e6a(void)

undefined8 FUN_141182e6a(undefined8 param_1,int param_2)

{
  FUN_141182e92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141182e92 FUN_141182e92 body=296 status=ok
// SIG undefined FUN_141182e92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141182e92(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b302cf0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140485a1a(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140485a1a(param_1 + 0xb);
  param_1[6] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_140115c12(param_1 + 8,0);
  }
  param_1[7] = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000141182f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 141182fd0 FUN_141182fd0 body=102 status=ok
// SIG undefined FUN_141182fd0(void)

void FUN_141182fd0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x2d8))();
  param_1[0x12] = lVar1;
  lVar1 = param_1[6];
  param_1[6] = param_2;
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
  FUN_1407a53c4(param_1,param_2,param_3,param_4);
  param_1[6] = lVar1;
  return;
}



// FUNCTION 141183036 FUN_141183036 body=1225 status=ok
// SIG undefined FUN_141183036(void)

longlong FUN_141183036(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_228 [32];
  double *local_208;
  double *local_200;
  undefined4 local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e0;
  undefined1 local_1d8;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [24];
  double local_150 [7];
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(longlong *)(param_1 + 0x38) == 0) {
LAB_14118347c:
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x68);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x58) == 0) {
        bVar3 = *(int *)(lVar2 + 0x68) == 0;
      }
      else {
        bVar3 = false;
      }
      if ((1 < *(uint *)(lVar2 + 0x30)) && (!bVar3)) goto LAB_14118347c;
    }
    if (param_4 == 0) {
      local_80 = *(undefined8 *)(param_1 + 0xc4);
      local_88 = *(double *)(param_1 + 0x50);
      local_98 = *(double *)(param_1 + 0x40);
      uStack_90 = *(double *)(param_1 + 0x48);
      local_a8 = *(double *)(param_1 + 0x68);
      local_b8 = *(double *)(param_1 + 0x58);
      dStack_b0 = *(double *)(param_1 + 0x60);
      local_d8 = *(undefined4 *)(param_1 + 0xa0);
      uStack_d4 = *(undefined4 *)(param_1 + 0xa4);
      uStack_d0 = *(undefined4 *)(param_1 + 0xa8);
      uStack_cc = *(undefined4 *)(param_1 + 0xac);
      local_c8 = *(double *)(param_1 + 0xb0);
      dStack_c0 = *(double *)(param_1 + 0xb8);
    }
    else {
      FUN_1407f8cf8(param_4,&local_80,param_1 + 0xc4,1);
      FUN_1433cec3c(&local_98,param_1 + 0x40,*(undefined1 *)(param_4 + 0xc0));
      FUN_1478d46a8(&local_b8,param_1 + 0x58,*(undefined1 *)(param_4 + 0xc0));
      FUN_1433cec84(&local_d8,param_1 + 0xa0,*(undefined1 *)(param_4 + 0xc0));
    }
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      (**(code **)(*param_2 + 0x4a8))(param_2,local_150 + 3,local_80,0);
      local_150[0] = 1.0;
      local_150[1] = 1.0;
      local_150[2] = 1.0;
      dVar4 = (double)CONCAT44(uStack_d4,local_d8);
      dVar6 = (double)CONCAT44(uStack_cc,uStack_d0);
      local_188 = dVar6 * local_150[5] * -1.0 +
                  local_c8 * local_150[4] + local_150[3] * dStack_c0 * 1.0 + local_150[6] * dVar4;
      dStack_180 = dVar4 * local_150[5] * 1.0 +
                   dStack_c0 * local_150[4] + local_150[3] * local_c8 * -1.0 + local_150[6] * dVar6;
      local_178 = dStack_c0 * local_150[5] * 1.0 +
                  ((local_150[3] * dVar6 * 1.0 + local_150[6] * local_c8) - local_150[4] * dVar4);
      dStack_170 = local_c8 * local_150[5] * -1.0 +
                   ((local_150[3] * dVar4 * -1.0 + local_150[6] * dStack_c0) - local_150[4] * dVar6)
      ;
      FUN_1448052ee(&local_188,local_168);
      local_f8 = local_98 * local_f8;
      dStack_f0 = uStack_90 * dStack_f0;
      local_e8 = local_88 * local_e8;
      dVar4 = dStack_f0 * local_150[3] - local_f8 * local_150[4];
      dVar5 = local_e8 * local_150[4] - dStack_f0 * local_150[5];
      dVar6 = local_f8 * local_150[5] - local_150[3] * local_e8;
      dVar5 = dVar5 + dVar5;
      dVar6 = dVar6 + dVar6;
      dVar4 = dVar4 + dVar4;
      local_1a8 = (dVar4 * local_150[4] - dVar6 * local_150[5]) + local_150[6] * dVar5 + local_f8 +
                  local_118;
      dStack_1a0 = (local_150[5] * dVar5 - local_150[3] * dVar4) + local_150[6] * dVar6 + dStack_f0
                   + dStack_110;
      local_198 = dVar4 * local_150[6] + local_e8 + (dVar6 * local_150[3] - dVar5 * local_150[4]) +
                  local_108;
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      lVar2 = param_2[0x16];
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_2);
      }
      local_1e8 = 1;
      local_1f8 = CONCAT31(local_1f8._1_3_,1);
      local_200 = (double *)CONCAT71(local_200._1_7_,1);
      local_208 = local_150;
      local_1f0 = 0;
      lVar2 = FUN_140416e90(lVar2,uVar1,&local_1a8,local_168);
    }
    else {
      local_208 = &local_188;
      local_178 = local_a8;
      local_188 = local_b8;
      dStack_180 = dStack_b0;
      local_68 = local_88;
      local_78 = (undefined4)local_98;
      uStack_74 = local_98._4_4_;
      uStack_70 = (undefined4)uStack_90;
      uStack_6c = uStack_90._4_4_;
      local_200 = local_150 + 3;
      local_150[3] = 1.0;
      local_150[4] = 1.0;
      local_150[5] = 1.0;
      local_1d8 = 1;
      local_1e0 = 1;
      local_1f0 = 1;
      local_1e8 = 0;
      local_1f8 = 0;
      lVar2 = FUN_140e3e448(*(undefined8 *)(param_1 + 0x38),param_2,local_80);
    }
    if (lVar2 != 0) {
      FUN_140583e18(lVar2,*(undefined1 *)(param_1 + 0x88));
      local_1b8 = *(undefined8 *)(param_1 + 0x80);
      local_1c8 = *(undefined4 *)(param_1 + 0x70);
      uStack_1c4 = *(undefined4 *)(param_1 + 0x74);
      uStack_1c0 = *(undefined4 *)(param_1 + 0x78);
      uStack_1bc = *(undefined4 *)(param_1 + 0x7c);
      FUN_14084f00a(lVar2);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141183500 FUN_141183500 body=1529 status=ok
// SIG undefined FUN_141183500(void)

void FUN_141183500(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  char cVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined4 *local_d0;
  undefined8 local_c8;
  int local_c0;
  byte *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  byte *local_98;
  longlong *plStack_90;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  uStack_e0 = 0;
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    uVar13 = 0;
  }
  else {
    plVar15 = *(longlong **)(param_1 + 0x10);
    plVar14 = plVar15 + (longlong)*(int *)(param_1 + 0x18) * 2;
    do {
      puVar12 = (undefined8 *)*plVar15;
      if ((puVar12 != (undefined8 *)0x0) && (lVar17 = puVar12[8], lVar17 != 0)) {
        if ((*(char *)(lVar17 + 0x41) == '\0') && (*(char *)(lVar17 + 0x42) != '\x01')) {
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          lStack_70 = 0;
          local_68 = 0;
          local_98 = (byte *)0x0;
          plStack_90 = (longlong *)0x0;
          local_a0 = (longlong)*(int *)(puVar12 + 7);
          local_a8 = puVar12[6];
          local_c8 = *puVar12;
          local_c0 = *(int *)(puVar12 + 1) + -1;
          if (*(int *)(puVar12 + 1) == 0) {
            local_c0 = 0;
          }
          local_d8 = 0x101;
          local_d6 = 1;
          local_d0 = &local_80;
          FUN_141183efe(&local_b8,&local_a8,&local_d8,&local_c8);
          plVar9 = plStack_90;
          if (local_b0 == (longlong *)0x0) {
            local_98 = local_b8;
            plStack_90 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
            UNLOCK();
            local_98 = local_b8;
            plStack_90 = local_b0;
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar9 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar3 = (int *)((longlong)plVar9 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            plVar9 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_b0 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar3 = (int *)((longlong)plVar9 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
          }
          lVar19 = *plVar15;
          *(undefined4 *)(lVar19 + 0x38) = 0;
          if (*(int *)(lVar19 + 0x3c) != 0) {
            FUN_144893a1c(lVar19 + 0x30,0);
          }
          if ((int)local_68 < 2) {
            if (local_98 == (byte *)0x0) {
              pwVar16 = L"Unknown";
LAB_1411837cc:
              FUN_140002266(&local_a8,
                            L"Unable to load - Unable to parse root-type \'%ls\'. Expected \'Map\'."
                            ,pwVar16);
              goto LAB_141183818;
            }
            if ((~*local_98 & 3) != 0) {
              uVar11 = FUN_14582489c();
              pwVar16 = (wchar_t *)(&PTR_u_Unknown_14a177568)[uVar11];
              goto LAB_1411837cc;
            }
            FUN_145824f22(param_1,&local_a8,&local_98,plVar15);
            uVar13 = uStack_e0;
            lVar17 = (longlong)(int)uStack_e0;
            uVar11 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar11);
            if (uStack_e0._4_4_ < uVar11) {
              FUN_14000f9fe(&local_e8,uVar13 & 0xffffffff);
            }
            *(longlong *)(local_e8 + lVar17 * 0x10) = local_a8;
            *(longlong *)(local_e8 + 8 + lVar17 * 0x10) = local_a0;
          }
          else {
            local_f0 = lStack_70;
            local_f8 = (undefined4)local_78;
            FUN_140002266(&local_a8,L"Parse error - line[%d], col[%d], pos[%d] - %ls",local_80,
                          local_7c);
LAB_141183818:
            iVar5 = *(int *)(lVar17 + 0xc60);
            if (((iVar5 != 0x40000002) && (iVar5 == 1)) && (DAT_14c86a9f8 != '\0')) {
              FUN_140ad26c0();
              GetCurrentThreadId();
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
          }
          plVar9 = plStack_90;
          lVar17 = lStack_70;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_90 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar3 = (int *)((longlong)plVar9 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              lVar17 = lStack_70;
              if (*piVar3 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
                lVar17 = lStack_70;
              }
            }
          }
        }
        else {
          local_80 = 0;
          local_7c = CONCAT31(local_7c._1_3_,1);
          local_78 = 0;
          lStack_70 = 0;
          local_68 = CONCAT35(local_68._5_3_,0x1b8d1b717);
          cVar10 = FUN_1411841d4(puVar12 + 6,&local_80,&local_e8,plVar15);
          if (cVar10 == '\0') {
            local_98 = (byte *)0x0;
            plStack_90 = (longlong *)0x0;
            cVar10 = FUN_1458248ec(*plVar15 + 0x30,&local_98);
            plVar9 = plStack_90;
            if ((cVar10 == '\0') || ((*local_98 & 3) == 0)) {
              if (plStack_90 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_90 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plStack_90)(plStack_90);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar9 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar9 + 0x10))(plVar9);
                  }
                }
              }
              goto LAB_1411835ce;
            }
            lVar17 = *plVar15;
            *(undefined4 *)(lVar17 + 0x38) = 0;
            if (*(int *)(lVar17 + 0x3c) != 0) {
              FUN_144893a1c(lVar17 + 0x30,0);
            }
            FUN_145824f22(param_1,&local_a8,&local_98,plVar15);
            uVar13 = uStack_e0;
            lVar17 = (longlong)(int)uStack_e0;
            uVar11 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar11);
            if (uStack_e0._4_4_ < uVar11) {
              FUN_14000f9fe(&local_e8,uVar13 & 0xffffffff);
            }
            plVar9 = plStack_90;
            *(longlong *)(local_e8 + lVar17 * 0x10) = local_a8;
            *(longlong *)(local_e8 + 8 + lVar17 * 0x10) = local_a0;
            lVar17 = local_78;
            if (plStack_90 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_90 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plStack_90)(plStack_90);
                LOCK();
                piVar3 = (int *)((longlong)plVar9 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                lVar17 = local_78;
                if (*piVar3 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                  lVar17 = local_78;
                }
              }
            }
          }
          else {
LAB_1411835ce:
            lVar19 = *plVar15;
            *(undefined4 *)(lVar19 + 0x38) = 0;
            lVar17 = local_78;
            if (*(int *)(lVar19 + 0x3c) != 0) {
              FUN_144893a1c(lVar19 + 0x30,0);
              lVar17 = local_78;
            }
          }
        }
        if (lVar17 != 0) {
          FUN_1400020a8();
        }
      }
      lVar17 = local_e8;
      lVar19 = (longlong)(int)uStack_e0;
      if (lVar19 == 0) {
        uVar13 = 0;
      }
      else {
        lVar18 = 0;
        do {
          if (*(longlong *)(lVar17 + lVar18) != 0) {
            lVar6 = *(longlong *)(param_1 + 8);
            puVar12 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            *puVar12 = 0;
            puVar12[1] = *(undefined8 *)(lVar17 + lVar18);
            lVar7 = *(longlong *)(lVar17 + 8 + lVar18);
            puVar12[2] = lVar7;
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            if (puVar12 != (undefined8 *)0x0) {
              LOCK();
              puVar1 = (undefined8 *)(lVar6 + 0x20);
              puVar4 = (undefined8 *)*puVar1;
              *puVar1 = puVar12;
              UNLOCK();
              LOCK();
              *puVar4 = puVar12;
              UNLOCK();
            }
          }
          lVar18 = lVar18 + 0x10;
        } while (lVar19 * 0x10 != lVar18);
        uVar13 = uStack_e0 & 0xffffffff;
      }
      uVar8 = uStack_e0;
      FUN_141183afa(local_e8,uVar13);
      uVar13 = uStack_e0 >> 0x20;
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      if (((longlong)uVar8 < 0) && ((int)uVar13 != 0)) {
        FUN_147099faa(&local_e8);
      }
      plVar15 = plVar15 + 2;
    } while (plVar15 != plVar14);
    uVar13 = uStack_e0 & 0xffffffff;
  }
  FUN_141183afa(local_e8,uVar13);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141183afa FUN_141183afa body=73 status=ok
// SIG undefined FUN_141183afa(void)

void FUN_141183afa(longlong param_1,int param_2)

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



// FUNCTION 141183b44 FUN_141183b44 body=954 status=ok
// SIG undefined FUN_141183b44(void)

void FUN_141183b44(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  plVar2 = (longlong *)(param_1 + 0x148);
  puVar3 = (uint *)(param_1 + 0x158);
  iVar5 = *(int *)(param_1 + 0x170);
  if (iVar5 == 0) {
    uVar16 = 0;
    uVar17 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x168);
    if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
      puVar10 = puVar3;
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_141183cf7;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar4 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
  }
  if (iVar6 < iVar5) {
    uVar14 = 0xffffffff;
    do {
      lVar13 = *plVar2;
      lVar11 = (longlong)iVar6 * 0x30;
      FUN_14009467f(*(undefined8 *)(lVar13 + 0x20 + lVar11),*(undefined4 *)(lVar13 + 0x28 + lVar11))
      ;
      if (*(longlong *)(lVar13 + 0x20 + lVar11) != 0) {
        FUN_1400020a8();
      }
      plVar15 = (longlong *)(lVar13 + lVar11);
      FUN_1400946c2(plVar15[2],(int)plVar15[3]);
      if (plVar15[2] != 0) {
        FUN_1400020a8();
      }
      FUN_14009470f(*plVar15,(int)plVar15[1]);
      if (*plVar15 != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar10 = *(uint **)(param_1 + 0x168);
      if (*(uint **)(param_1 + 0x168) == (uint *)0x0) {
        puVar10 = puVar3;
      }
      iVar5 = *(int *)(param_1 + 0x170);
      iVar6 = (int)uVar16;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar8 = iVar5 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_141183cf7;
        }
        uVar16 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar7 & uVar7);
      uVar4 = uVar17 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar5);
  }
LAB_141183cf7:
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_14494313c(plVar2,0);
  }
  *(undefined8 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (0x80 < *(uint *)(param_1 + 0x174)) {
    *(undefined4 *)(param_1 + 0x174) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x140);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar2 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_140a6c8c0(param_1 + 0xb0);
  FUN_140a6c8c0(param_1 + 0x90);
  FUN_140a6c8c0(param_1 + 0x70);
  FUN_140a6c8c0(param_1 + 0x50);
  FUN_140a6c8c0(param_1 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar2 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141183edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141183efe FUN_141183efe body=725 status=ok
// SIG undefined FUN_141183efe(void)

longlong * FUN_141183efe(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined4 *puVar6;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  char local_81;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 ***local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_81 = '\0';
  puVar6 = &local_80;
  local_70 = (undefined8 ****)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf;
  lVar4 = *(longlong *)(param_3 + 8);
  if (lVar4 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  FUN_1458fc046(local_c8,param_2,&local_81,puVar6);
  local_a8[0] = local_c8[0];
  if (local_b8 == (longlong *)0x0) {
    local_a0 = local_c0;
    plStack_98 = (longlong *)0x0;
    local_90 = local_b0;
  }
  else {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
    local_a0 = local_c0;
    plStack_98 = local_b8;
    local_90 = local_b0;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 8))(local_b8);
        }
      }
    }
  }
  if (((lVar4 != 0) && (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0)) && (local_60 != 0)) {
    **(undefined4 **)(param_3 + 8) = local_80;
    *(undefined4 *)(*(longlong *)(param_3 + 8) + 4) = local_7c;
    *(undefined4 *)(*(longlong *)(param_3 + 8) + 8) = local_78;
    ppppuVar5 = &local_70;
    if (0xf < local_58) {
      ppppuVar5 = (undefined8 ****)local_70;
    }
    FUN_1400b22c2(&local_138,ppppuVar5);
    lVar4 = *(longlong *)(param_3 + 8);
    if ((longlong *)(lVar4 + 0x10) == &local_138) {
      if (local_138 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar4 + 0x10) = local_138;
      local_138 = 0;
      *(undefined4 *)(lVar4 + 0x18) = local_130;
      *(undefined4 *)(lVar4 + 0x1c) = local_12c;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (local_81 != '\0') {
    FUN_1458da2de(&local_138,*(undefined1 *)(param_3 + 2));
    if (*(char *)(param_3 + 1) == '\x01') {
      local_148 = *param_4;
      uStack_144 = param_4[1];
      uStack_140 = param_4[2];
      uStack_13c = param_4[3];
      FUN_140741e56(local_a8,&local_138,param_1);
    }
    FUN_14709c35e(&local_138);
    local_158 = *param_4;
    uStack_154 = param_4[1];
    uStack_150 = param_4[2];
    uStack_14c = param_4[3];
    FUN_140741e56(local_a8,&local_138,param_1);
    if (*param_1 != 0) {
      FUN_140b1403e();
    }
    FUN_145821dc4(&local_138);
  }
  plVar1 = plStack_98;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_98 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  FUN_1401d9a90(&local_70);
  if ((local_50 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411841d4 FUN_1411841d4 body=13566 status=ok
// SIG undefined FUN_1411841d4(void)

ulonglong FUN_1411841d4(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int *piVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  float *pfVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  char cVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  float fVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  float *pfVar25;
  byte bVar26;
  int iVar27;
  int iVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  float *pfVar32;
  undefined1 *puVar33;
  ulonglong uVar34;
  wchar_t *pwVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined4 uVar38;
  uint uVar39;
  float *pfVar40;
  int *piVar41;
  longlong lVar42;
  ulonglong uVar43;
  longlong lVar44;
  byte *pbVar45;
  uint uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  longlong lVar50;
  float *pfVar51;
  bool bVar52;
  undefined1 auStack_818 [32];
  longlong *local_7f8;
  undefined8 *local_7f0;
  longlong *local_7e0;
  longlong local_7d8;
  ulonglong local_7d0;
  int local_7c8;
  uint local_7c4;
  longlong *local_7c0;
  longlong local_7b8;
  longlong local_7b0;
  int local_7a8;
  undefined4 local_7a4;
  longlong local_7a0;
  longlong *local_798;
  longlong *local_790;
  longlong *local_788;
  longlong *local_780;
  longlong local_778;
  longlong local_770;
  longlong local_768;
  undefined8 local_760;
  undefined8 local_758;
  int local_74c;
  byte *local_748;
  longlong *plStack_740;
  longlong local_738;
  undefined8 uStack_730;
  int *local_728;
  undefined8 uStack_720;
  longlong local_718;
  undefined8 uStack_710;
  int local_6fc;
  ulonglong local_6f8;
  undefined1 local_6f0 [24];
  undefined8 local_6d8;
  longlong *plStack_6d0;
  undefined4 local_6c8;
  longlong local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  longlong local_690;
  undefined8 uStack_688;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined4 local_668;
  longlong local_660;
  undefined8 uStack_658;
  longlong local_648;
  longlong *plStack_640;
  undefined4 local_638;
  longlong local_630;
  undefined8 uStack_628;
  byte *local_618;
  longlong *plStack_610;
  undefined4 local_608;
  longlong local_600;
  undefined8 uStack_5f8;
  longlong local_5e8;
  undefined8 uStack_5e0;
  ulonglong local_5d8;
  longlong lStack_5d0;
  longlong lStack_5c8;
  undefined8 uStack_5c0;
  longlong local_5b8;
  undefined8 uStack_5b0;
  longlong local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  longlong lStack_590;
  undefined8 local_588;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined4 local_568;
  longlong local_560;
  undefined8 uStack_558;
  undefined8 local_548;
  longlong lStack_540;
  undefined8 local_538;
  longlong lStack_530;
  ulonglong local_528;
  undefined1 local_520 [16];
  longlong local_510;
  undefined4 local_508;
  uint local_504;
  undefined4 uStack_500;
  undefined4 local_4fc;
  longlong local_4f0;
  undefined4 local_4e8;
  undefined2 local_4e0;
  undefined8 local_4d8;
  longlong lStack_4d0;
  undefined8 local_4c8;
  longlong lStack_4c0;
  ulonglong local_4b8;
  undefined1 local_4b0 [16];
  longlong local_4a0;
  undefined4 local_498;
  uint local_494;
  undefined4 uStack_490;
  undefined4 local_48c;
  longlong local_480;
  undefined4 local_478;
  undefined2 local_470;
  float local_460 [4];
  float *local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined4 *local_438;
  ulonglong *local_430;
  undefined8 *local_428;
  undefined4 *puStack_420;
  undefined4 *local_418;
  undefined8 *puStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_3dc;
  undefined4 local_3d4;
  longlong local_3c8;
  undefined4 local_3c0;
  undefined4 local_3b8 [2];
  longlong local_3b0;
  ulonglong uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined4 local_36c;
  longlong local_360;
  undefined4 local_358;
  undefined1 local_350;
  undefined4 local_348 [2];
  longlong local_340;
  undefined8 uStack_338;
  longlong local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined4 local_2ec;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d0;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  longlong local_268;
  undefined4 local_260;
  undefined1 local_258;
  undefined8 local_250;
  longlong *plStack_248;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8;
  undefined ***local_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong *local_178;
  longlong *plStack_170;
  longlong *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  longlong local_140;
  undefined4 local_138;
  byte local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined **local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  uint *local_f8;
  uint local_f0;
  uint uStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined2 *local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  ulonglong local_b8;
  undefined2 *local_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined2 *local_90;
  longlong local_88;
  longlong *plStack_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_818;
  local_798 = param_3;
  local_790 = param_4;
  if ((((DAT_14c9a1ab0 == 0) || ((ulonglong)(longlong)(int)param_1[1] < 0x10)) ||
      (puVar29 = (uint *)*param_1, (*puVar29 & 0xffffff00) != 0x53434e00)) ||
     ((longlong)(int)param_1[1] - 0x10U != (ulonglong)puVar29[3])) {
    uVar37 = 0;
    goto LAB_141184400;
  }
  local_7a0 = DAT_14c9a1ab0;
  uVar36 = puVar29[2];
  FUN_140741ce4(local_6f0);
  pfVar51 = (float *)(*param_1 + 0x10);
  local_7d8 = param_2;
  if ((char)puVar29[1] == '\0') {
    plVar24 = (longlong *)0x0;
LAB_141184616:
    local_1a0 = (undefined ***)((ulonglong)local_1a0 & 0xffffffff00000000);
    local_160 = 0;
    local_158 = 0;
    local_198 = 0;
    lStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = (longlong *)0x0;
    local_154 = 0xffffffff00000080;
    local_14c = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    uStack_228 = 0;
    uStack_224 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_218 = 0xf;
    local_214 = 0;
    uStack_210 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_238 = 0x1000fff;
    if (DAT_14c9a1130 == '\0') {
      local_238 = 0;
    }
    local_2c8 = local_2c8 & 0xffffffff00000000;
    local_288 = 0;
    local_280 = 0;
    uStack_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0;
    local_27c = 0xffffffff00000080;
    local_274 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0;
    plStack_248 = (longlong *)0x0;
    local_348[0] = 0;
    local_300 = 0;
    local_2f8 = 0;
    local_340 = 0;
    uStack_338 = 0;
    local_330 = 0;
    uStack_328 = 0;
    local_320 = 0;
    uStack_318 = 0;
    local_2f4 = 0xffffffff00000080;
    local_2ec = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_2d0 = 0;
    local_3b8[0] = 0;
    local_380 = 0;
    local_378 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_3a0 = 0;
    uStack_398 = 0;
    local_374 = 0xffffffff00000080;
    local_36c = 0;
    local_360 = 0;
    local_358 = 0;
    local_350 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_428 = (undefined8 *)0x0;
    puStack_410 = (undefined8 *)0x0;
    local_408 = 0;
    uStack_400 = 0;
    local_3dc = 0xffffffff00000080;
    local_3d4 = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    local_438 = &local_238;
    puStack_420 = local_348;
    local_418 = local_3b8;
    local_430 = &local_2c8;
    local_440 = 0;
    local_450 = (float *)0x0;
    local_448 = 0x8000000000;
    uVar36 = uVar36 * 8;
    if (0 < (int)uVar36) {
      uVar37 = 0;
      uVar31 = uVar36;
      if (0x80 < uVar36) {
        uVar31 = uVar36 + 0x1f >> 5;
        uVar43 = (ulonglong)(uVar31 * 4);
        uVar34 = uVar37;
        if (DAT_14c872d28 != (longlong *)0x0) {
          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
            uVar46 = (uint)(uVar43 + 0xf);
            if (uVar36 < 0x3ff81) {
              uVar43 = (ulonglong)
                       (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar43 + 0xf >> 4]];
            }
            else {
              uVar47 = (ulonglong)(uVar46 & 0xfffffff0);
              if (uVar47 < 0x7ff1) {
                bVar26 = (&DAT_14c841e00)[uVar46 >> 4];
                uVar49 = 0x32;
                if (0x32 < bVar26) {
                  uVar49 = (ulonglong)bVar26;
                }
                uVar48 = 0x32 - (ulonglong)bVar26;
                do {
                  uVar43 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar48 & 0xffffffff];
                  uVar34 = 0;
                  if (((&DAT_14c841d90)[uVar48 & 0xffffffff] & 0xf) == 0) goto LAB_1411873a4;
                  lVar22 = uVar49 + 1 + uVar48;
                  uVar48 = uVar48 - 1;
                } while (lVar22 != 0x33);
              }
              uVar34 = 0x10;
              if (0x10 < DAT_14c841df8) {
                uVar34 = (ulonglong)DAT_14c841df8;
              }
              uVar43 = -uVar34 & (uVar47 + uVar34) - 1;
              uVar34 = uVar37;
            }
          }
          else {
            uVar43 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar43,0);
            uVar34 = local_448 & 0xffffffff;
          }
        }
LAB_1411873a4:
        iVar28 = (int)(uVar43 >> 2);
        iVar30 = -0x20;
        if ((int)uVar31 <= iVar28) {
          iVar30 = iVar28 << 5;
        }
        local_448 = CONCAT44(iVar30,(int)local_448);
        FUN_1446efbd8(local_460,uVar34);
        uVar31 = (int)local_448 + uVar36;
      }
      uVar46 = uVar31 + 0x1f;
      if (-1 < (int)uVar31) {
        uVar46 = uVar31;
      }
      local_448 = CONCAT44(local_448._4_4_,uVar31);
      if ((int)uVar31 % 0x20 != 0) {
        pfVar40 = local_450;
        if (local_450 == (float *)0x0) {
          pfVar40 = local_460;
        }
        bVar26 = -(char)((int)uVar31 % 0x20);
        pfVar40[(int)uVar46 >> 5] =
             (float)((uint)((int)pfVar40[(int)uVar46 >> 5] << (bVar26 & 0x1f)) >> (bVar26 & 0x1f));
      }
    }
    pfVar40 = local_450;
    lVar22 = local_7d8;
    pfVar32 = local_450;
    if (local_450 == (float *)0x0) {
      pfVar32 = local_460;
    }
    if (uVar36 != 0) {
      uVar31 = uVar36 - 1;
      uVar46 = 0xffffffff >> (~(byte)uVar31 & 0x18);
      if (uVar36 < 0x21) {
        *pfVar32 = (float)(((uint)*pfVar51 ^ (uint)*pfVar32) & uVar46 ^ (uint)*pfVar32);
      }
      else {
        uVar36 = uVar31 >> 5;
        pfVar25 = pfVar32 + uVar36;
        pfVar6 = pfVar51 + uVar36;
        if ((pfVar51 < pfVar32) && (pfVar32 <= pfVar6)) {
          *pfVar25 = (float)(((uint)*pfVar6 ^ (uint)*pfVar25) & uVar46 ^ (uint)*pfVar25);
          pfVar25 = pfVar25 + -1;
          if (pfVar32 < pfVar25) {
            pfVar40 = pfVar51 + uVar36;
            do {
              pfVar40 = pfVar40 + -1;
              *pfVar25 = *pfVar40;
              pfVar25 = pfVar25 + -1;
            } while (pfVar32 < pfVar25);
          }
          *pfVar32 = *pfVar51;
        }
        else {
          *pfVar32 = *pfVar51;
          if (0x3f < uVar31) {
            pfVar32 = local_460;
            if (pfVar40 != (float *)0x0) {
              pfVar32 = pfVar40;
            }
            pfVar32 = pfVar32 + 1;
            do {
              pfVar51 = pfVar51 + 1;
              *pfVar32 = *pfVar51;
              pfVar32 = pfVar32 + 1;
            } while (pfVar32 < pfVar25);
          }
          *pfVar25 = (float)(((uint)*pfVar6 ^ (uint)*pfVar25) & uVar46 ^ (uint)*pfVar25);
        }
      }
    }
    local_788 = plVar24;
    FUN_147092179(local_460,0x20);
    uVar37 = local_448;
    lVar44 = local_7a0;
    if (local_448._4_4_ - (int)local_448 < 0x20) {
      if ((int)local_448 == 0) {
        iVar30 = -1;
      }
      else {
        iVar30 = (int)local_448 + 0x1e;
        if (-1 < (int)local_448 + -1) {
          iVar30 = (int)local_448 + -1;
        }
        iVar30 = iVar30 >> 5;
      }
      iVar28 = (int)local_448 + 0x20;
      iVar19 = (int)local_448 + 0x3e;
      if (-1 < (int)local_448 + 0x1f) {
        iVar19 = (int)local_448 + 0x1f;
      }
      if (iVar19 >> 5 == iVar30) {
        local_448 = CONCAT44(local_448._4_4_,iVar28);
      }
      else {
        if (local_448._4_4_ < iVar28) {
          if ((int)local_448 + 0x3fU < 0xa0) {
            iVar28 = 0x80;
            iVar30 = (int)local_448;
          }
          else {
            uVar36 = (int)local_448 + 0x3fU >> 5;
            if (local_448._4_4_ + 0x1fU < 0xa0) {
              uVar31 = 4;
              if (4 < uVar36) {
                uVar31 = uVar36;
              }
            }
            else {
              uVar31 = uVar36 + (uVar36 * 3 >> 3) + 0x10;
            }
            uVar34 = (ulonglong)(uVar31 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar46 = (uint)(uVar34 + 0xf);
                if (uVar31 < 0x1ffd) {
                  uVar34 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar46 >> 4]];
                }
                else {
                  uVar43 = uVar34 + 0xf & 0xfffffffffffffff0;
                  if (uVar43 < 0x7ff1) {
                    bVar26 = (&DAT_14c841e00)[uVar46 >> 4];
                    uVar47 = 0x32;
                    if (0x32 < bVar26) {
                      uVar47 = (ulonglong)bVar26;
                    }
                    uVar49 = 0x32 - (ulonglong)bVar26;
                    do {
                      uVar34 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar49 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar49 & 0xffffffff] & 0xf) == 0) goto LAB_141187466;
                      lVar22 = uVar47 + 1 + uVar49;
                      uVar49 = uVar49 - 1;
                    } while (lVar22 != 0x33);
                  }
                  uVar34 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar34 = (ulonglong)DAT_14c841df8;
                  }
                  uVar34 = -uVar34 & (uVar43 + uVar34) - 1;
                }
              }
              else {
                uVar34 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar34,0);
              }
            }
LAB_141187466:
            iVar19 = (int)(uVar34 >> 2);
            iVar28 = -0x20;
            iVar30 = (int)local_448;
            if ((int)uVar36 <= iVar19) {
              iVar28 = iVar19 << 5;
            }
          }
          local_448 = CONCAT44(iVar28,(int)local_448);
          FUN_1446efbd8(local_460,iVar30);
          iVar28 = (int)local_448 + 0x20;
          lVar22 = local_7d8;
        }
        iVar30 = iVar28 + 0x1f;
        if (-1 < iVar28) {
          iVar30 = iVar28;
        }
        local_448 = CONCAT44(local_448._4_4_,iVar28);
        if (iVar28 % 0x20 != 0) {
          pfVar51 = local_450;
          if (local_450 == (float *)0x0) {
            pfVar51 = local_460;
          }
          bVar26 = -(char)(iVar28 % 0x20);
          pfVar51[iVar30 >> 5] =
               (float)((uint)((int)pfVar51[iVar30 >> 5] << (bVar26 & 0x1f)) >> (bVar26 & 0x1f));
        }
      }
      lVar44 = local_7a0;
      FUN_1447c6044(local_460,uVar37 & 0xffffffff,0x20,0);
    }
    local_6f8 = 0;
    FUN_144a5eb16(&local_1a0,local_460,&local_6f8);
    FUN_1417381c6(&local_238,local_460,&local_6f8);
    FUN_144a5eb16(&local_2c8,local_460,&local_6f8);
    FUN_140ca80ca(local_348,local_460,&local_6f8);
    FUN_144882f62(local_3b8,local_460,&local_6f8);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a1108);
    local_768 = lVar44 + 0x620;
    local_770 = lVar44 + 0x480;
    local_778 = lVar44 + 0x398;
    local_7e0 = (longlong *)0x0;
    local_7a8 = 0;
    while( true ) {
      local_6fc = 0;
      uVar37 = (ulonglong)local_130;
      pfVar51 = local_450;
      if (local_450 == (float *)0x0) {
        pfVar51 = local_460;
      }
      local_7f8 = (longlong *)CONCAT44(local_7f8._4_4_,(uint)local_130);
      FUN_14493566c(&local_6fc,0,pfVar51,local_6f8 & 0xffffffff);
      local_6f8 = uVar37 + local_6f8;
      if (local_6fc == 0) break;
      local_718 = 0;
      uStack_710 = 0;
      local_728 = (int *)0x0;
      uStack_720 = 0;
      while( true ) {
        local_118 = (undefined **)((ulonglong)local_118 & 0xffffffff00000000);
        uVar37 = (ulonglong)local_130;
        pfVar51 = local_450;
        if (local_450 == (float *)0x0) {
          pfVar51 = local_460;
        }
        local_7f8 = (longlong *)CONCAT44(local_7f8._4_4_,(uint)local_130);
        FUN_14493566c(&local_118,0,pfVar51,local_6f8 & 0xffffffff);
        local_6f8 = local_6f8 + uVar37;
        if ((int)local_118 == 0) break;
        lVar42 = (longlong)(int)uStack_720;
        uVar36 = (int)uStack_720 + 1;
        uStack_720 = CONCAT44(uStack_720._4_4_,uVar36);
        if (uStack_720._4_4_ < uVar36) {
          FUN_1447808da(&local_728);
        }
        local_728[lVar42] = (int)local_118;
      }
      local_4a0 = 0;
      local_498 = 0;
      local_4d8 = 0;
      lStack_4d0 = 0;
      local_4c8 = 0;
      lStack_4c0 = 0;
      local_4b8 = 0;
      local_494 = 0x80;
      uStack_490 = 0xffffffff;
      local_48c = 0;
      local_480 = 0;
      local_478 = 0;
      local_470 = 0;
      FUN_1417383b6(&local_4d8,local_460,&local_6f8);
      puStack_410 = &local_4d8;
      if ((char)local_470 == '\0') {
        puStack_410 = (undefined8 *)0x0;
      }
      local_510 = 0;
      local_508 = 0;
      local_548 = 0;
      lStack_540 = 0;
      local_538 = 0;
      lStack_530 = 0;
      local_528 = 0;
      local_504 = 0x80;
      uStack_500 = 0xffffffff;
      local_4fc = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_4e0 = 0;
      FUN_1417383b6(&local_548,local_460,&local_6f8);
      local_428 = &local_548;
      if ((char)local_4e0 == '\0') {
        local_428 = (undefined8 *)0x0;
      }
      puVar33 = &DAT_149e02088;
      if (-1 < (longlong)local_6fc) {
        puVar33 = &DAT_149e02088;
        if (local_6fc < (int)local_188) {
          puVar33 = *(undefined1 **)(lStack_190 + (longlong)local_6fc * 0x18);
        }
      }
      local_578 = 0;
      uStack_570 = 0;
      local_568 = 0;
      local_560 = 0;
      uStack_558 = 0;
      FUN_1446ddda2(&local_578,puVar33,0);
      lVar42 = lVar44;
      uVar18 = FUN_140ca8338(lVar44,&local_578);
      iVar30 = (int)(short)uVar18;
      local_738 = 0;
      uStack_730 = 0;
      local_7a4 = (undefined4)CONCAT71((int7)((ulonglong)lVar42 >> 8),1);
      local_7c8 = iVar30;
      if ((((short)uVar18 < 0) || (*(int *)(lVar44 + 0xd0) <= iVar30)) ||
         (local_7e0 = *(longlong **)(*(longlong *)(lVar44 + 200) + (ulonglong)uVar18 * 8),
         local_7e0 == (longlong *)0x0)) {
        local_7e0 = (longlong *)0x0;
        uVar36 = 0;
      }
      else {
        local_f8 = (uint *)0x0;
        local_f0 = 0;
        local_118 = (undefined **)0x0;
        uStack_110 = (undefined2 *)0x0;
        uStack_ec = 0x80;
        iStack_e8 = -1;
        iStack_e4 = 0;
        local_d8 = (undefined8 *)0x0;
        local_d0 = (undefined2 *)((ulonglong)local_d0 & 0xffffffff00000000);
        lVar44 = local_7e0[0x18];
        while (lVar44 != 0) {
          iVar30 = (int)uStack_730;
          lVar44 = *(longlong *)(lVar44 + (longlong)(int)uStack_730 * 8);
          if (lVar44 == 0) break;
          local_5e8 = 0;
          uStack_5e0 = 0;
          local_5d8 = local_5d8 & 0xffffffff00000000;
          lStack_5d0 = 0;
          lStack_5c8 = 0;
          FUN_1446ddda2(&local_5e8,lVar44,0);
          iVar28 = iStack_e8;
          uVar37 = (ulonglong)uStack_110;
          if (iStack_e4 == 0) {
            iVar28 = (int)uStack_110;
            uStack_110 = (undefined2 *)CONCAT44(uStack_110._4_4_,(int)uStack_110 + 1);
            if (uStack_110._4_4_ == iVar28) {
              FUN_1447030e2(&local_118,uVar37 & 0xffffffff);
            }
            uVar36 = local_f0;
            if (local_f0 == 0) {
              iVar19 = -1;
            }
            else {
              iVar19 = local_f0 + 0x1e;
              if (-1 < (int)(local_f0 - 1)) {
                iVar19 = local_f0 - 1;
              }
              iVar19 = iVar19 >> 5;
            }
            uVar31 = local_f0 + 1;
            uVar46 = local_f0 + 0x1f;
            if (-1 < (int)local_f0) {
              uVar46 = local_f0;
            }
            if ((int)uVar46 >> 5 == iVar19) {
              local_f0 = uVar31;
            }
            else {
              if ((int)uStack_ec <= (int)local_f0) {
                if (local_f0 + 0x20 < 0xa0) {
                  uStack_ec = 0x80;
                }
                else {
                  uVar31 = local_f0 + 0x20 >> 5;
                  if (uStack_ec + 0x1f < 0xa0) {
                    uVar39 = 4;
                    if (4 < uVar31) {
                      uVar39 = uVar31;
                    }
                  }
                  else {
                    uVar39 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
                  }
                  uVar37 = (ulonglong)(uVar39 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar20 = (uint)(uVar37 + 0xf);
                      if (uVar39 < 0x1ffd) {
                        uVar37 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar20 >> 4]];
                      }
                      else {
                        uVar34 = uVar37 + 0xf & 0xfffffffffffffff0;
                        if (uVar34 < 0x7ff1) {
                          bVar26 = (&DAT_14c841e00)[uVar20 >> 4];
                          uVar43 = 0x32;
                          if (0x32 < bVar26) {
                            uVar43 = (ulonglong)bVar26;
                          }
                          uVar47 = 0x32 - (ulonglong)bVar26;
                          do {
                            uVar37 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar47 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar47 & 0xffffffff] & 0xf) == 0)
                            goto LAB_141185343;
                            lVar22 = uVar43 + 1 + uVar47;
                            uVar47 = uVar47 - 1;
                          } while (lVar22 != 0x33);
                        }
                        uVar37 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar37 = 0x10;
                        }
                        uVar37 = -uVar37 & (uVar34 + uVar37) - 1;
                      }
                    }
                    else {
                      uVar37 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar37,0);
                    }
                  }
LAB_141185343:
                  iVar19 = (int)(uVar37 >> 2);
                  uStack_ec = iVar19 << 5;
                  if (iVar19 < (int)uVar31) {
                    uStack_ec = 0xffffffe0;
                  }
                }
                FUN_1446efbd8(&local_108,local_f0);
                uVar31 = local_f0 + 1;
              }
              uVar39 = uVar31 + 0x1f;
              if (-1 < (int)uVar31) {
                uVar39 = uVar31;
              }
              local_f0 = uVar31;
              if ((int)uVar31 % 0x20 != 0) {
                puVar29 = local_f8;
                if (local_f8 == (uint *)0x0) {
                  puVar29 = (uint *)&local_108;
                }
                bVar26 = -(char)((int)uVar31 % 0x20);
                puVar29[(int)uVar39 >> 5] =
                     (puVar29[(int)uVar39 >> 5] << (bVar26 & 0x1f)) >> (bVar26 & 0x1f);
              }
            }
            lVar22 = (longlong)iVar28;
            puVar29 = local_f8;
            if (local_f8 == (uint *)0x0) {
              puVar29 = (uint *)&local_108;
            }
            bVar26 = (byte)uVar36 & 0x1f;
            puVar29[(int)uVar46 >> 5] =
                 puVar29[(int)uVar46 >> 5] & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
          }
          else {
            lVar22 = (longlong)iStack_e8;
            iStack_e8 = *(int *)((longlong)local_118 + lVar22 * 0x38 + 4);
            iStack_e4 = iStack_e4 + -1;
            if (iStack_e4 != 0) {
              *(undefined4 *)(local_118 + (longlong)iStack_e8 * 7) = 0xffffffff;
            }
          }
          ppuVar5 = local_118;
          puVar29 = local_f8;
          if (local_f8 == (uint *)0x0) {
            puVar29 = (uint *)&local_108;
          }
          iVar19 = iVar28 + 0x1f;
          if (-1 < iVar28) {
            iVar19 = iVar28;
          }
          puVar29[iVar19 >> 5] = puVar29[iVar19 >> 5] | 1 << ((byte)iVar28 & 0x1f);
          ppuVar4 = local_118 + lVar22 * 7;
          local_118[lVar22 * 7] = (undefined *)0x0;
          (local_118 + lVar22 * 7)[1] = (undefined *)0x0;
          *(undefined4 *)(local_118 + lVar22 * 7 + 2) = 0;
          local_118[lVar22 * 7 + 3] = (undefined *)0x0;
          (local_118 + lVar22 * 7 + 3)[1] = (undefined *)0x0;
          FUN_1404e49fa(ppuVar4,&local_5e8);
          *(int *)(ppuVar5 + lVar22 * 7 + 5) = iVar30;
          *(undefined4 *)(ppuVar5 + lVar22 * 7 + 6) = 0xffffffff;
          uVar36 = *(uint *)(ppuVar5 + lVar22 * 7);
          uVar31 = (int)uStack_110 - iStack_e4;
          if ((uVar31 != 0) && (uVar31 != 1)) {
            puVar23 = local_d8;
            if (local_d8 == (undefined8 *)0x0) {
              puVar23 = &uStack_e0;
            }
            iVar30 = *(int *)((longlong)puVar23 + (ulonglong)((uint)local_d0 - 1 & uVar36) * 4);
            while (iVar30 != -1) {
              ppuVar5 = local_118 + (longlong)iVar30 * 7;
              if (*(uint *)(local_118 + (longlong)iVar30 * 7) == uVar36) {
                if (ppuVar5[3] != (undefined *)0x0) {
                  FUN_1400020a8();
                }
                puVar14 = *ppuVar4;
                puVar15 = ppuVar4[1];
                uVar38 = *(undefined4 *)(ppuVar4 + 2);
                uVar8 = *(undefined4 *)((longlong)ppuVar4 + 0x14);
                uVar9 = *(undefined4 *)(ppuVar4 + 3);
                uVar10 = *(undefined4 *)((longlong)ppuVar4 + 0x1c);
                uVar11 = *(undefined4 *)((longlong)ppuVar4 + 0x24);
                uVar12 = *(undefined4 *)(ppuVar4 + 5);
                uVar13 = *(undefined4 *)((longlong)ppuVar4 + 0x2c);
                *(undefined4 *)(ppuVar5 + 4) = *(undefined4 *)(ppuVar4 + 4);
                *(undefined4 *)((longlong)ppuVar5 + 0x24) = uVar11;
                *(undefined4 *)(ppuVar5 + 5) = uVar12;
                *(undefined4 *)((longlong)ppuVar5 + 0x2c) = uVar13;
                *(undefined4 *)(ppuVar5 + 2) = uVar38;
                *(undefined4 *)((longlong)ppuVar5 + 0x14) = uVar8;
                *(undefined4 *)(ppuVar5 + 3) = uVar9;
                *(undefined4 *)((longlong)ppuVar5 + 0x1c) = uVar10;
                *ppuVar5 = puVar14;
                ppuVar5[1] = puVar15;
                FUN_14709c066(&local_118);
                lVar22 = local_7d8;
                goto LAB_141184f34;
              }
              iVar30 = *(int *)(ppuVar5 + 6);
            }
          }
          if (uVar31 < 4) {
            uVar46 = 1;
          }
          else {
            uVar37 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
            lVar22 = 0x3f;
            if (uVar37 != 0) {
              for (; uVar37 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            uVar46 = 1 << ((byte)lVar22 & 0x1f);
          }
          if (((int)uVar31 < 1) || ((int)uVar46 <= (int)(uint)local_d0)) {
            uVar36 = (uint)local_d0 - 1 & uVar36;
            *(uint *)((longlong)ppuVar4 + 0x34) = uVar36;
            puVar23 = local_d8;
            if (local_d8 == (undefined8 *)0x0) {
              puVar23 = &uStack_e0;
            }
            *(undefined4 *)(ppuVar4 + 6) =
                 *(undefined4 *)
                  ((longlong)puVar23 +
                  ((longlong)(int)(uint)local_d0 - 1U & (longlong)(int)uVar36) * 4);
            puVar23 = local_d8;
            if (local_d8 == (undefined8 *)0x0) {
              puVar23 = &uStack_e0;
            }
            *(int *)((longlong)puVar23 +
                    ((longlong)(int)(uint)local_d0 - 1U & (longlong)(int)uVar36) * 4) = iVar28;
            lVar22 = local_7d8;
          }
          else {
            local_d0 = (undefined2 *)CONCAT44(local_d0._4_4_,uVar46);
            if (local_d8 != (undefined8 *)0x0) {
              FUN_1446efa72(&local_d8,0,0,4);
              uVar46 = (uint)local_d0;
            }
            lVar22 = local_7d8;
            if (uVar46 == 1) {
              if (local_d8 != (undefined8 *)0x0) {
                FUN_1446efa72(&local_d8,0,0,4);
              }
LAB_141185096:
              uVar36 = 0;
              do {
                puVar23 = local_d8;
                if (local_d8 == (undefined8 *)0x0) {
                  puVar23 = &uStack_e0;
                }
                *(undefined4 *)
                 ((longlong)puVar23 + (ulonglong)((uint)local_d0 + 0x7fffffff & uVar36) * 4) =
                     0xffffffff;
                uVar36 = uVar36 + 1;
              } while (uVar46 != uVar36);
            }
            else {
              if (uVar46 == 0) goto LAB_141184f34;
              FUN_1446efa72(&local_d8,0,uVar46,4);
              if (0 < (int)uVar46) goto LAB_141185096;
            }
            if (local_f0 == 0) {
              uVar37 = 0;
              uVar34 = 1;
              uVar36 = 0;
              iVar30 = 0;
            }
            else {
              puVar29 = local_f8;
              if (local_f8 == (uint *)0x0) {
                puVar29 = (uint *)&local_108;
              }
              uVar36 = *puVar29;
              if (uVar36 == 0) {
                iVar30 = local_f0 + 0x1e;
                if (-1 < (int)(local_f0 - 1)) {
                  iVar30 = local_f0 - 1;
                }
                uVar37 = 0;
                uVar31 = iVar30 >> 5;
                if (iVar30 >> 5 < 1) {
                  uVar31 = 0;
                }
                iVar30 = 0;
                do {
                  if (uVar31 == uVar37) goto LAB_141184f34;
                  iVar30 = iVar30 + 0x20;
                  uVar36 = puVar29[uVar37 + 1];
                  uVar37 = uVar37 + 1;
                } while (uVar36 == 0);
              }
              else {
                uVar37 = 0;
                iVar30 = 0;
              }
              uVar34 = (ulonglong)(-uVar36 & uVar36);
              uVar43 = uVar34 * 2 + 1;
              lVar42 = 0x3f;
              if (uVar43 != 0) {
                for (; uVar43 >> lVar42 == 0; lVar42 = lVar42 + -1) {
                }
              }
              uVar36 = (iVar30 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
              if ((int)local_f0 <= (int)uVar36) {
                uVar36 = local_f0;
              }
            }
            if ((int)uVar36 < (int)local_f0) {
              uVar31 = 0xffffffff;
              do {
                lVar42 = (longlong)(int)uVar36;
                uVar43 = (longlong)(int)(uint)local_d0 - 1U &
                         (longlong)*(int *)(local_118 + lVar42 * 7);
                iVar28 = (int)uVar43;
                *(int *)((longlong)local_118 + lVar42 * 0x38 + 0x34) = iVar28;
                puVar23 = local_d8;
                if (local_d8 == (undefined8 *)0x0) {
                  puVar23 = &uStack_e0;
                }
                *(undefined4 *)(local_118 + lVar42 * 7 + 6) =
                     *(undefined4 *)
                      ((longlong)puVar23 + ((longlong)(int)(uint)local_d0 - 1U & uVar43) * 4);
                puVar23 = local_d8;
                if (local_d8 == (undefined8 *)0x0) {
                  puVar23 = &uStack_e0;
                }
                *(uint *)((longlong)puVar23 +
                         ((longlong)iVar28 & (longlong)(int)(uint)local_d0 - 1U) * 4) = uVar36;
                uVar31 = ~(uint)uVar34 & uVar31;
                puVar29 = local_f8;
                if (local_f8 == (uint *)0x0) {
                  puVar29 = (uint *)&local_108;
                }
                iVar28 = (int)uVar37;
                lVar42 = (longlong)iVar28;
                uVar36 = puVar29[lVar42] & uVar31;
                if (uVar36 == 0) {
                  iVar19 = local_f0 + 0x1e;
                  if (-1 < (int)(local_f0 - 1)) {
                    iVar19 = local_f0 - 1;
                  }
                  iVar19 = iVar19 >> 5;
                  iVar27 = iVar19;
                  if (iVar19 < iVar28) {
                    iVar27 = iVar28;
                  }
                  if (iVar19 <= iVar28) break;
                  lVar50 = 0;
                  while( true ) {
                    iVar30 = iVar30 + 0x20;
                    uVar36 = puVar29[lVar42 + lVar50 + 1];
                    if (uVar36 != 0) break;
                    lVar50 = lVar50 + 1;
                    if (iVar27 - lVar42 == lVar50) goto LAB_141184f34;
                  }
                  uVar37 = (ulonglong)(iVar28 + (int)lVar50 + 1);
                  uVar31 = 0xffffffff;
                }
                uVar34 = (ulonglong)(-uVar36 & uVar36);
                uVar43 = uVar34 * 2 + 1;
                lVar42 = 0x3f;
                if (uVar43 != 0) {
                  for (; uVar43 >> lVar42 == 0; lVar42 = lVar42 + -1) {
                  }
                }
                uVar36 = (iVar30 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
              } while ((int)uVar36 < (int)local_f0);
            }
          }
LAB_141184f34:
          if (lStack_5d0 != 0) {
            FUN_1400020a8();
          }
          lVar42 = (longlong)(int)uStack_730;
          uVar36 = (int)uStack_730 + 1;
          uStack_730 = CONCAT44(uStack_730._4_4_,uVar36);
          if (uStack_730._4_4_ < uVar36) {
            FUN_140ca86cc(&local_738);
          }
          *(longlong *)(local_738 + lVar42 * 8) = lVar44;
          lVar44 = local_7e0[0x18];
        }
        if ((longlong)(int)uStack_720 != 0) {
          piVar3 = local_728 + (int)uStack_720;
          piVar41 = local_728;
          do {
            iVar30 = *piVar41;
            puVar33 = &DAT_149e02088;
            if (-1 < (longlong)iVar30) {
              puVar33 = &DAT_149e02088;
              if (iVar30 < (int)local_188) {
                puVar33 = *(undefined1 **)(lStack_190 + (longlong)iVar30 * 0x18);
              }
            }
            local_5e8 = 0;
            uStack_5e0 = 0;
            local_5d8 = local_5d8 & 0xffffffff00000000;
            lStack_5d0 = 0;
            lStack_5c8 = 0;
            FUN_1446ddda2(&local_5e8,puVar33,0);
            uVar37 = uStack_710;
            uVar38 = 0xffffffff;
            if ((int)uStack_110 != iStack_e4) {
              puVar23 = local_d8;
              if (local_d8 == (undefined8 *)0x0) {
                puVar23 = &uStack_e0;
              }
              iVar30 = *(int *)((longlong)puVar23 +
                               (ulonglong)((uint)local_d0 - 1 & (uint)local_5e8) * 4);
              while (iVar30 != -1) {
                ppuVar5 = local_118 + (longlong)iVar30 * 7;
                if (*(uint *)(local_118 + (longlong)iVar30 * 7) == (uint)local_5e8) {
                  if (ppuVar5 + 5 != (undefined **)0x0 && ppuVar5 != (undefined **)0x0) {
                    uVar38 = *(undefined4 *)(ppuVar5 + 5);
                  }
                  break;
                }
                iVar30 = *(int *)(ppuVar5 + 6);
              }
            }
            lVar44 = (longlong)(int)(uint)uStack_710;
            uVar36 = (uint)uStack_710 + 1;
            uStack_710 = CONCAT44(uStack_710._4_4_,uVar36);
            if (uStack_710._4_4_ < uVar36) {
              FUN_1446f48e2(&local_718,uVar37 & 0xffffffff);
            }
            *(undefined4 *)(local_718 + lVar44 * 4) = uVar38;
            if (lStack_5d0 != 0) {
              FUN_1400020a8();
            }
            piVar41 = piVar41 + 1;
          } while (piVar41 != piVar3);
        }
        uVar36 = 1;
        if (2 < (uint)uStack_710) {
          uVar37 = (ulonglong)((uint)uStack_710 - 1) * 2 + 1;
          lVar44 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar44 == 0; lVar44 = lVar44 + -1) {
            }
          }
          uVar36 = (uint)lVar44;
        }
        local_d0 = (undefined2 *)((ulonglong)local_d0 & 0xffffffff00000000);
        if (local_d8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_f0 == 0) {
          uVar37 = 0;
          uVar43 = 1;
          iVar30 = 0;
          uVar31 = 0;
        }
        else {
          puVar29 = local_f8;
          if (local_f8 == (uint *)0x0) {
            puVar29 = (uint *)&local_108;
          }
          uVar31 = *puVar29;
          if (uVar31 == 0) {
            iVar30 = local_f0 + 0x1e;
            if (-1 < (int)(local_f0 - 1)) {
              iVar30 = local_f0 - 1;
            }
            uVar37 = 0;
            uVar34 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar34 = uVar37;
            }
            iVar30 = 0;
            do {
              if (uVar34 == uVar37) goto LAB_1411857e4;
              iVar30 = iVar30 + 0x20;
              uVar31 = puVar29[uVar37 + 1];
              uVar37 = uVar37 + 1;
            } while (uVar31 == 0);
          }
          else {
            uVar37 = 0;
            iVar30 = 0;
          }
          uVar43 = (ulonglong)(-uVar31 & uVar31);
          uVar34 = uVar43 * 2 + 1;
          lVar44 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar44 == 0; lVar44 = lVar44 + -1) {
            }
          }
          uVar31 = (iVar30 - ((uint)lVar44 ^ 0x3f)) + 0x3e;
          if ((int)local_f0 <= (int)uVar31) {
            uVar31 = local_f0;
          }
        }
        if ((int)uVar31 < (int)local_f0) {
          uVar39 = 0xffffffff;
          uVar46 = local_f0;
          do {
            if (local_118[(longlong)(int)uVar31 * 7 + 3] != (undefined *)0x0) {
              FUN_1400020a8();
              uVar46 = local_f0;
            }
            uVar39 = uVar39 & ~(uint)uVar43;
            puVar29 = local_f8;
            if (local_f8 == (uint *)0x0) {
              puVar29 = (uint *)&local_108;
            }
            iVar28 = (int)uVar37;
            lVar44 = (longlong)iVar28;
            uVar31 = puVar29[lVar44] & uVar39;
            if (uVar31 == 0) {
              iVar19 = uVar46 + 0x1e;
              if (-1 < (int)(uVar46 - 1)) {
                iVar19 = uVar46 - 1;
              }
              iVar19 = iVar19 >> 5;
              iVar27 = iVar19;
              if (iVar19 < iVar28) {
                iVar27 = iVar28;
              }
              if (iVar19 <= iVar28) break;
              lVar42 = 0;
              while( true ) {
                iVar30 = iVar30 + 0x20;
                uVar31 = puVar29[lVar44 + lVar42 + 1];
                if (uVar31 != 0) break;
                lVar42 = lVar42 + 1;
                if (iVar27 - lVar44 == lVar42) goto LAB_1411857e4;
              }
              uVar37 = (ulonglong)(iVar28 + (int)lVar42 + 1);
              uVar39 = 0xffffffff;
            }
            uVar43 = (ulonglong)(-uVar31 & uVar31);
            uVar34 = uVar43 * 2 + 1;
            lVar44 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar44 == 0; lVar44 = lVar44 + -1) {
              }
            }
            uVar31 = (iVar30 - ((uint)lVar44 ^ 0x3f)) + 0x3e;
          } while ((int)uVar31 < (int)uVar46);
        }
LAB_1411857e4:
        uVar37 = (ulonglong)uStack_110 >> 0x20;
        uStack_110 = (undefined2 *)((ulonglong)uStack_110 & 0xffffffff00000000);
        if ((int)uVar37 != 0) {
          FUN_144748838(&local_118,0);
        }
        iVar30 = local_7c8;
        iStack_e8 = 0xffffffff;
        iStack_e4 = 0;
        local_f0 = 0;
        if (0x80 < uStack_ec) {
          uStack_ec = 0x80;
          FUN_1446efbd8(&local_108,0);
        }
        if (local_f8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        local_7a4 = 0;
      }
      local_7a8 = local_7a8 + 1;
      local_7b0 = (longlong)iVar30;
      local_780 = local_7e0 + 0x1b;
      local_7c4 = 0;
      do {
        if ((local_6f8 & 7) != 0) {
          local_6f8 = local_6f8 + (8 - ((uint)local_6f8 & 7));
        }
        uVar31 = (uint)local_6f8;
        pfVar51 = local_450;
        if (local_450 == (float *)0x0) {
          pfVar51 = local_460;
        }
        uVar46 = uVar31;
        if (0x1f < uVar31) {
          uVar46 = uVar31 + 0x1f;
          if (-1 < (int)uVar31) {
            uVar46 = uVar31;
          }
          pfVar51 = pfVar51 + ((int)uVar46 >> 5);
          uVar46 = uVar31 - (uVar46 & 0xffffffe0);
          if ((int)uVar46 < 0) {
            pfVar51 = pfVar51 + -1;
            uVar46 = uVar46 + 0x20;
          }
        }
        if (uVar46 == 0) {
          fVar21 = *pfVar51;
LAB_14118594a:
          local_7d0 = (ulonglong)(uint)fVar21;
        }
        else {
          bVar26 = -(byte)uVar46;
          if ((int)uVar46 < 0) {
            local_7d0 = (ulonglong)(uint)((int)*pfVar51 << (bVar26 & 0x1f));
          }
          else {
            uVar39 = (uint)*pfVar51 >> ((byte)uVar46 & 0x1f);
            local_7d0 = (ulonglong)uVar39;
            if (0x1f < uVar46 + 0x1f) {
              fVar21 = (float)(uVar39 | (int)pfVar51[uVar46 + 0x1f >> 5] << (bVar26 & 0x1f));
              goto LAB_14118594a;
            }
          }
        }
        local_6f8 = local_6f8 + 0x20;
        local_118 = (undefined **)((ulonglong)local_118 & 0xffffffff00000000);
        uStack_110 = &DAT_14a171d50;
        local_f8 = (uint *)0x0;
        local_108 = 0;
        uStack_100 = 0;
        local_f0 = 0x4a171d50;
        uStack_ec = 1;
        local_d8 = (undefined8 *)0x0;
        iStack_e8 = 0;
        iStack_e4 = 0;
        uStack_e0 = 0;
        local_d0 = &DAT_14a171d50;
        local_b8 = 0;
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        local_b0 = &DAT_14a171d50;
        local_98 = 0;
        local_a8 = 0;
        lStack_a0 = 0;
        local_90 = &DAT_14a171d50;
        local_78 = 0;
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        local_5a8 = 0;
        uStack_5a0 = 0;
        local_5b8 = 0;
        uStack_5b0 = 0;
        lStack_5c8 = 0;
        uStack_5c0 = 0;
        local_5d8 = 0;
        lStack_5d0 = 0;
        local_5e8 = 0;
        uStack_5e0 = 0;
        local_598 = 0xffffffffffffffff;
        lStack_590 = 0;
        local_588 = 0x3f80000000000001;
        local_748 = (byte *)0x0;
        plStack_740 = (longlong *)0x0;
        bVar52 = true;
        while( true ) {
          pfVar51 = local_450;
          if (local_450 == (float *)0x0) {
            pfVar51 = local_460;
          }
          uVar46 = (uint)local_6f8;
          pfVar40 = pfVar51;
          if (0x1f < uVar46) {
            uVar39 = uVar46 + 0x1f;
            if (-1 < (int)uVar46) {
              uVar39 = uVar46;
            }
            uVar46 = uVar46 - (uVar39 & 0xffffffe0);
            pfVar40 = pfVar51 + ((int)uVar39 >> 5);
            if ((int)uVar46 < 0) {
              uVar46 = uVar46 + 0x20;
              pfVar40 = pfVar51 + ((int)uVar39 >> 5) + -1;
            }
          }
          if (uVar46 == 0) {
            fVar21 = *pfVar40;
          }
          else {
            bVar26 = -(byte)uVar46;
            if ((int)uVar46 < 0) {
              fVar21 = (float)((int)*pfVar40 << (bVar26 & 0x1f));
            }
            else {
              fVar21 = (float)((uint)*pfVar40 >> ((byte)uVar46 & 0x1f));
              if (0x1f < uVar46 + 7) {
                fVar21 = (float)((int)pfVar40[uVar46 + 7 >> 5] << (bVar26 & 0x1f) | (uint)fVar21);
              }
            }
          }
          uVar37 = local_6f8 + 8;
          if ((char)local_7a4 != '\0') {
            iVar30 = (int)local_7d0;
            plVar24 = (longlong *)0x0;
            local_6f8 = uVar37;
            goto LAB_14118602b;
          }
          if ((int)fVar21 << 0x18 == 0x7a000000) break;
          bVar52 = true;
          uVar46 = (uint)uVar37;
          switch(((int)fVar21 << 0x18) >> 0x18) {
          case 0x61:
            local_618 = (byte *)0x0;
            plStack_610 = (longlong *)0x0;
            local_608 = 0;
            local_600 = 0;
            uStack_5f8 = 0;
            local_6f8 = uVar37;
            FUN_14029d42e(&local_440,&local_618,local_460,&local_6f8);
            if (DAT_14c947fe0 == 0) {
              lVar44 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar44);
              DAT_14c947fe0 = lVar44;
            }
            FUN_140045924(DAT_14c947fe0,&local_648,&local_618);
            lStack_590 = local_648;
            if (local_600 != 0) {
              FUN_1400020a8();
            }
            break;
          case 0x62:
            if (0x1f < uVar46) {
              uVar39 = uVar46 + 0x1f;
              if (-1 < (int)uVar46) {
                uVar39 = uVar46;
              }
              pfVar51 = pfVar51 + ((int)uVar39 >> 5);
              uVar46 = uVar46 - (uVar39 & 0xffffffe0);
              uVar37 = (ulonglong)uVar46;
              if ((int)uVar46 < 0) {
                pfVar51 = pfVar51 + -1;
                uVar37 = (ulonglong)(uVar46 + 0x20);
              }
            }
            iVar30 = (int)uVar37;
            if (iVar30 == 0) {
              fVar21 = *pfVar51;
            }
            else {
              bVar26 = -(byte)uVar37;
              if (iVar30 < 0) {
                fVar21 = (float)((int)*pfVar51 << (bVar26 & 0x1f));
              }
              else {
                fVar21 = (float)((uint)*pfVar51 >> ((byte)uVar37 & 0x1f));
                if (0x1f < iVar30 + 0x1fU) {
                  fVar21 = (float)((uint)fVar21 |
                                  (int)pfVar51[iVar30 + 0x1fU >> 5] << (bVar26 & 0x1f));
                }
              }
            }
            local_588 = CONCAT44(local_588._4_4_,fVar21);
            local_6f8 = local_6f8 + 0x28;
            break;
          case 99:
            if (0x1f < uVar46) {
              uVar39 = uVar46 + 0x1f;
              if (-1 < (int)uVar46) {
                uVar39 = uVar46;
              }
              pfVar51 = pfVar51 + ((int)uVar39 >> 5);
              uVar46 = uVar46 - (uVar39 & 0xffffffe0);
              uVar37 = (ulonglong)uVar46;
              if ((int)uVar46 < 0) {
                pfVar51 = pfVar51 + -1;
                uVar37 = (ulonglong)(uVar46 + 0x20);
              }
            }
            iVar30 = (int)uVar37;
            if (iVar30 == 0) {
              fVar21 = *pfVar51;
            }
            else {
              bVar26 = -(byte)uVar37;
              if (iVar30 < 0) {
                fVar21 = (float)((int)*pfVar51 << (bVar26 & 0x1f));
              }
              else {
                fVar21 = (float)((uint)*pfVar51 >> ((byte)uVar37 & 0x1f));
                if (0x1f < iVar30 + 0x1fU) {
                  fVar21 = (float)((uint)fVar21 |
                                  (int)pfVar51[iVar30 + 0x1fU >> 5] << (bVar26 & 0x1f));
                }
              }
            }
            local_6f8 = local_6f8 + 0x28;
            local_588 = CONCAT44(fVar21 + *(float *)(lVar22 + 0x18),(undefined4)local_588);
            break;
          case 100:
            local_618 = (byte *)0x0;
            plStack_610 = (longlong *)0x0;
            local_6f8 = uVar37;
            FUN_14029d126(&local_440,&local_618,local_460);
            uVar37 = (ulonglong)local_f8 >> 0x20;
            local_f8 = (uint *)((ulonglong)local_f8 & 0xffffffff00000000);
            if ((int)uVar37 != 0) {
              FUN_140115c12(&uStack_100,0);
            }
            local_108 = local_778;
            if ((longlong)(int)plStack_610 != 0) {
              lVar44 = (longlong)(int)plStack_610 << 3;
              pbVar45 = local_618;
              do {
                if (local_108 != 0) {
                  local_648 = 0;
                  FUN_1405593a8(local_108,&local_648,pbVar45);
                  (**(code **)(uStack_110 + 4))(&uStack_110,&local_648);
                }
                pbVar45 = pbVar45 + 8;
                lVar44 = lVar44 + -8;
              } while (lVar44 != 0);
            }
            goto LAB_141185f42;
          case 0x65:
            local_618 = (byte *)0x0;
            plStack_610 = (longlong *)0x0;
            local_6f8 = uVar37;
            FUN_14029d126(&local_440,&local_618,local_460);
            uVar37 = local_b8 >> 0x20;
            local_b8 = local_b8 & 0xffffffff00000000;
            if ((int)uVar37 != 0) {
              FUN_140115c12(&plStack_c0,0);
            }
            local_c8 = local_770;
            if ((longlong)(int)plStack_610 != 0) {
              lVar44 = (longlong)(int)plStack_610 << 3;
              pbVar45 = local_618;
              do {
                if (local_c8 != 0) {
                  local_648 = 0;
                  FUN_1405593a8(local_c8,&local_648,pbVar45);
                  (**(code **)(local_d0 + 4))(&local_d0,&local_648);
                }
                pbVar45 = pbVar45 + 8;
                lVar44 = lVar44 + -8;
              } while (lVar44 != 0);
            }
            goto LAB_141185f42;
          case 0x66:
            local_618 = (byte *)0x0;
            plStack_610 = (longlong *)0x0;
            local_6f8 = uVar37;
            FUN_14029d126(&local_440,&local_618,local_460);
            uVar37 = local_78 >> 0x20;
            local_78 = local_78 & 0xffffffff00000000;
            if ((int)uVar37 != 0) {
              FUN_140115c12(&plStack_80,0);
            }
            local_88 = local_768;
            if ((longlong)(int)plStack_610 != 0) {
              lVar44 = (longlong)(int)plStack_610 << 3;
              pbVar45 = local_618;
              do {
                if (local_88 != 0) {
                  local_648 = 0;
                  FUN_1405593a8(local_88,&local_648,pbVar45);
                  (**(code **)(local_90 + 4))(&local_90,&local_648);
                }
                pbVar45 = pbVar45 + 8;
                lVar44 = lVar44 + -8;
              } while (lVar44 != 0);
            }
LAB_141185f42:
            if (local_618 != (byte *)0x0) {
              FUN_1400020a8(local_618);
            }
LAB_141185f4f:
            bVar52 = false;
            uVar37 = local_6f8;
          default:
            goto switchD_141185ace_caseD_67;
          case 0x70:
            local_6f8 = uVar37;
            FUN_1447af47c(&local_618,&local_440,local_460);
            plVar24 = plStack_740;
            if (plStack_610 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_610 + 1) = (int)plStack_610[1] + 1;
              UNLOCK();
            }
            local_748 = local_618;
            plStack_740 = plStack_610;
            if (plVar24 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar24 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plVar24)(plVar24);
                LOCK();
                piVar3 = (int *)((longlong)plVar24 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
            plVar24 = plStack_610;
            if (plStack_610 != (longlong *)0x0) {
              LOCK();
              plVar7 = plStack_610 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plStack_610)(plStack_610);
                LOCK();
                piVar3 = (int *)((longlong)plVar24 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                }
              }
            }
            goto LAB_141185f4f;
          }
          bVar52 = false;
          uVar37 = local_6f8;
switchD_141185ace_caseD_67:
          local_6f8 = uVar37;
        }
        bVar16 = true;
        local_6f8 = uVar37;
        if (!bVar52) {
          local_118 = (undefined **)CONCAT71(local_118._1_7_,1);
          if (*(int *)(lVar22 + 0x10) < 2) {
            lVar44 = local_7e0[0x17];
            pwVar35 = L"NCS-%hs-%d";
          }
          else {
            local_7f8 = *(longlong **)(lVar22 + 8);
            lVar44 = local_7e0[0x17];
            pwVar35 = L"NCS-%hs-%d-%ls";
          }
          DAT_14c9a1100 = DAT_14c9a1100 + 1;
          FUN_140002266(&local_618,pwVar35,lVar44);
          if (*(char *)(lVar22 + 4) == '\x01') {
            if (local_798 == (longlong *)0x0) {
              pbVar45 = (byte *)&DAT_149dfb77a;
              if ((int)plStack_610 != 0) {
                pbVar45 = local_618;
              }
              FUN_1446f470e(&local_648,pbVar45,1);
              local_7f8 = (longlong *)((ulonglong)local_7f8 & 0xffffffffffffff00);
              lVar22 = local_7a0;
              lVar42 = FUN_1412927d8(local_7a0,&local_118,&local_5e8,&local_648);
              bVar52 = lVar42 == 0;
              if (!bVar52) {
                if (local_7e0[0x1a] != lVar42) {
                  local_7e0[0x1a] = lVar42;
                }
                if (local_748 == (byte *)0x0) {
                  local_7c4 = 1;
                }
                else {
                  local_7c4 = (uint)CONCAT71((int7)((ulonglong)lVar22 >> 8),1);
                  if ((*local_748 & 3) != 0) {
                    *(int *)(lVar42 + 0x180) = *(int *)(lVar42 + 0x180) + 1;
                    piVar3 = (int *)(*(longlong *)(lVar42 + 0x188) + local_7b0 * 4);
                    *piVar3 = *piVar3 + 1;
                    FUN_14022002e(local_7e0,local_780,&local_748);
                  }
                }
              }
              local_7c0 = (longlong *)0x0;
              lVar44 = 0;
              local_7b8 = lVar42;
            }
            else {
              pbVar45 = (byte *)&DAT_149dfb77a;
              if ((int)plStack_610 != 0) {
                pbVar45 = local_618;
              }
              FUN_1446f470e(&local_648,pbVar45,1);
              plVar24 = (longlong *)FUN_14001cc68(0x188,0x10);
              plVar24[1] = (longlong)&DAT_100000001;
              *plVar24 = (longlong)&PTR_FUN_14a176230;
              local_7f0 = &DAT_14c9a1308;
              local_7f8 = &local_5e8;
              FUN_142b15a64(plVar24 + 2,&local_648,local_790,&local_118);
              iVar30 = (int)local_798[1];
              *(uint *)(local_798 + 1) = iVar30 + 1U;
              if (*(uint *)((longlong)local_798 + 0xc) < iVar30 + 1U) {
                FUN_14000f9fe(local_798,iVar30);
              }
              lVar22 = *local_798;
              lVar42 = (longlong)iVar30 * 0x10;
              *(longlong **)(lVar22 + lVar42) = plVar24 + 2;
              *(longlong **)(lVar22 + 8 + lVar42) = plVar24;
              if (plVar24 == (longlong *)0x0) {
                local_7c0 = (longlong *)0x0;
                lVar44 = 0x10;
              }
              else {
                LOCK();
                *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
                UNLOCK();
                lVar44 = *(longlong *)(lVar22 + lVar42);
                local_7c0 = (longlong *)((longlong *)(lVar22 + lVar42))[1];
                if (local_7c0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_7c0 + 1) = (int)local_7c0[1] + 1;
                  UNLOCK();
                }
                LOCK();
                plVar7 = plVar24 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*plVar24)(plVar24);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar24 + 0xc);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)(*plVar24 + 0x10))(plVar24);
                  }
                }
              }
              local_7b8 = 0;
              bVar52 = false;
            }
          }
          else {
            local_7c0 = (longlong *)0x0;
            lVar44 = 0;
            local_7b8 = 0;
            bVar52 = false;
          }
          if (local_618 != (byte *)0x0) {
            FUN_1400020a8();
          }
          iVar30 = (int)local_7d0;
          plVar24 = local_7c0;
          lVar22 = local_7d8;
          if (bVar52) {
LAB_14118602b:
            if (iVar30 == 0) {
              bVar16 = true;
            }
            else {
              local_6f8 = (ulonglong)(uVar31 + iVar30 * 8 & 0xfffffff8);
              bVar16 = false;
            }
          }
          else {
            pfVar51 = local_450;
            if (local_450 == (float *)0x0) {
              pfVar51 = local_460;
            }
            uVar31 = (uint)local_6f8;
            if (0x1f < uVar31) {
              uVar46 = uVar31 + 0x1f;
              if (-1 < (int)uVar31) {
                uVar46 = uVar31;
              }
              pfVar51 = pfVar51 + ((int)uVar46 >> 5);
              uVar31 = uVar31 - (uVar46 & 0xffffffe0);
              if ((int)uVar31 < 0) {
                pfVar51 = pfVar51 + -1;
                uVar31 = uVar31 + 0x20;
              }
            }
            if (uVar31 == 0) {
              fVar21 = *pfVar51;
            }
            else {
              bVar26 = -(byte)uVar31;
              if ((int)uVar31 < 0) {
                fVar21 = (float)((int)*pfVar51 << (bVar26 & 0x1f));
              }
              else {
                fVar21 = (float)((uint)*pfVar51 >> ((byte)uVar31 & 0x1f));
                if (0x1f < uVar31 + 1) {
                  fVar21 = (float)((uint)fVar21 | (int)pfVar51[uVar31 + 1 >> 5] << (bVar26 & 0x1f));
                }
              }
            }
            local_6f8 = local_6f8 + 2;
            while( true ) {
              uVar31 = (uint)fVar21 & 3;
              if (uVar31 == 0) break;
              local_618 = (byte *)0x0;
              plStack_610 = (longlong *)0x0;
              local_608 = 0;
              local_600 = 0;
              uStack_5f8 = 0;
              FUN_14029d42e(&local_440,&local_618,local_460,&local_6f8);
              if (uVar31 == 3) {
                local_648 = 0;
                plStack_640 = (longlong *)0x0;
                local_638 = 0;
                local_630 = 0;
                uStack_628 = 0;
                FUN_14029d42e(&local_440,&local_648,local_460,&local_6f8);
                if (*(char *)(local_7d8 + 4) == '\x01') {
                  if (lVar44 == 0) {
                    *(int *)(local_7b8 + 0x180) = *(int *)(local_7b8 + 0x180) + 1;
                    piVar3 = (int *)(*(longlong *)(local_7b8 + 0x188) + local_7b0 * 4);
                    *piVar3 = *piVar3 + 1;
                    (**(code **)(*local_7e0 + 0x340))(local_7e0,&local_618,&local_648);
                  }
                  else {
                    FUN_1410bfaec(lVar44,local_7c8,&local_618,&local_648);
                  }
                }
                if (local_630 != 0) {
                  FUN_1400020a8();
                }
              }
              else if (uVar31 == 2) {
                FUN_1447af47c(&local_648,&local_440,local_460,&local_6f8);
                if (*(char *)(local_7d8 + 4) == '\x01') {
                  if (lVar44 == 0) {
                    *(int *)(local_7b8 + 0x180) = *(int *)(local_7b8 + 0x180) + 1;
                    piVar3 = (int *)(*(longlong *)(local_7b8 + 0x188) + local_7b0 * 4);
                    *piVar3 = *piVar3 + 1;
                    (**(code **)(*local_7e0 + 0x330))(local_7e0,&local_648,&local_618);
                  }
                  else {
                    FUN_140a29d88(lVar44,local_7c8,&local_648,&local_618);
                  }
                }
                plVar24 = plStack_640;
                if (plStack_640 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = plStack_640 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*plStack_640)(plStack_640);
                    LOCK();
                    piVar3 = (int *)((longlong)plVar24 + 0xc);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)(*plVar24 + 0x10))(plVar24);
                    }
                  }
                }
              }
              if ((uint)uStack_710 != 0) {
                pfVar51 = local_450;
                if (local_450 == (float *)0x0) {
                  pfVar51 = local_460;
                }
                uVar31 = (uint)local_6f8;
                if (0x1f < uVar31) {
                  uVar46 = uVar31 + 0x1f;
                  if (-1 < (int)uVar31) {
                    uVar46 = uVar31;
                  }
                  pfVar51 = pfVar51 + ((int)uVar46 >> 5);
                  uVar31 = uVar31 - (uVar46 & 0xffffffe0);
                  if ((int)uVar31 < 0) {
                    pfVar51 = pfVar51 + -1;
                    uVar31 = uVar31 + 0x20;
                  }
                }
                if (uVar31 == 0) {
                  fVar21 = *pfVar51;
                }
                else {
                  bVar26 = -(byte)uVar31;
                  if ((int)uVar31 < 0) {
                    fVar21 = (float)((int)*pfVar51 << (bVar26 & 0x1f));
                  }
                  else {
                    fVar21 = (float)((uint)*pfVar51 >> ((byte)uVar31 & 0x1f));
                    if (0x1f < uVar31 + 1) {
                      fVar21 = (float)((uint)fVar21 |
                                      (int)pfVar51[uVar31 + 1 >> 5] << (bVar26 & 0x1f));
                    }
                  }
                }
                local_6f8 = local_6f8 + 2;
                while (uVar31 = (uint)fVar21 & 3, uVar31 != 0) {
                  local_638 = 0;
                  local_648 = 0;
                  plStack_640 = (longlong *)0x0;
                  local_630 = 0;
                  uStack_628 = 0;
                  FUN_14029d42e(&local_440,&local_648,local_460,&local_6f8);
                  local_74c = 0;
                  pfVar51 = local_450;
                  if (local_450 == (float *)0x0) {
                    pfVar51 = local_460;
                  }
                  local_7f8 = (longlong *)CONCAT44(local_7f8._4_4_,uVar36);
                  FUN_14493566c(&local_74c,0,pfVar51,local_6f8 & 0xffffffff);
                  local_6f8 = local_6f8 + uVar36;
                  uVar37 = 0xffffffff;
                  if ((-1 < (longlong)local_74c) && (local_74c < (int)(uint)uStack_710)) {
                    uVar37 = (ulonglong)*(uint *)(local_718 + (longlong)local_74c * 4);
                  }
                  local_678 = 0;
                  uStack_670 = 0;
                  local_668 = 0;
                  local_660 = 0;
                  uStack_658 = 0;
                  if (DAT_14c947fe0 == 0) {
                    lVar22 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar22);
                    DAT_14c947fe0 = lVar22;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_758,&local_618,1);
                  FUN_1402b5374(&local_678,0,local_758);
                  if (DAT_14c947fe0 == 0) {
                    lVar22 = FUN_14001cc68(0x140,0x10);
                    FUN_1456b2032(lVar22);
                    DAT_14c947fe0 = lVar22;
                  }
                  FUN_140045924(DAT_14c947fe0,&local_760,&local_648,1);
                  FUN_1402b5374(&local_678,1,local_760);
                  iVar30 = (int)uVar37;
                  if (uVar31 == 3) {
                    local_6a8 = 0;
                    uStack_6a0 = 0;
                    local_698 = 0;
                    local_690 = 0;
                    uStack_688 = 0;
                    FUN_14029d42e(&local_440,&local_6a8,local_460,&local_6f8);
                    if (*(char *)(local_7d8 + 4) == '\x01') {
                      if (lVar44 == 0) {
                        *(int *)(local_7b8 + 0x180) = *(int *)(local_7b8 + 0x180) + 1;
                        piVar3 = (int *)(*(longlong *)(local_7b8 + 0x188) + local_7b0 * 4);
                        *piVar3 = *piVar3 + 1;
                        (**(code **)(*local_7e0 + 0x348))(local_7e0,&local_678,&local_6a8,uVar37);
                      }
                      else if ((-1 < iVar30) && (iVar30 < (int)uStack_730)) {
                        local_6d8 = 0;
                        plStack_6d0 = (longlong *)0x0;
                        local_6c8 = 0;
                        local_6c0 = 0;
                        uStack_6b8 = 0;
                        FUN_1446ddda2(&local_6d8,*(undefined8 *)(local_738 + uVar37 * 8),0);
                        local_7f0 = &local_6a8;
                        local_7f8 = (longlong *)CONCAT44(local_7f8._4_4_,iVar30);
                        FUN_141737c56(lVar44,local_7c8,&local_618,&local_648);
                        if (local_6c0 != 0) {
                          FUN_1400020a8();
                        }
                      }
                    }
                    if (local_690 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  else if (uVar31 == 2) {
                    FUN_1447af47c(&local_6d8,&local_440,local_460,&local_6f8);
                    if (*(char *)(local_7d8 + 4) == '\x01') {
                      if (lVar44 == 0) {
                        *(int *)(local_7b8 + 0x180) = *(int *)(local_7b8 + 0x180) + 1;
                        piVar3 = (int *)(*(longlong *)(local_7b8 + 0x188) + local_7b0 * 4);
                        *piVar3 = *piVar3 + 1;
                        (**(code **)(*local_7e0 + 0x338))(local_7e0,&local_6d8,&local_678,uVar37);
                      }
                      else if ((-1 < iVar30) && (iVar30 < (int)uStack_730)) {
                        local_6a8 = 0;
                        uStack_6a0 = 0;
                        local_698 = 0;
                        local_690 = 0;
                        uStack_688 = 0;
                        FUN_1446ddda2(&local_6a8,*(undefined8 *)(local_738 + uVar37 * 8),0);
                        local_7f0 = (undefined8 *)CONCAT44(local_7f0._4_4_,iVar30);
                        local_7f8 = &local_648;
                        FUN_140093c70(lVar44,local_7c8,&local_6d8,&local_618);
                        if (local_690 != 0) {
                          FUN_1400020a8();
                        }
                      }
                    }
                    plVar24 = plStack_6d0;
                    if (plStack_6d0 != (longlong *)0x0) {
                      LOCK();
                      plVar7 = plStack_6d0 + 1;
                      *(int *)plVar7 = (int)*plVar7 + -1;
                      UNLOCK();
                      if ((int)*plVar7 == 0) {
                        (**(code **)*plStack_6d0)(plStack_6d0);
                        LOCK();
                        piVar3 = (int *)((longlong)plVar24 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (*piVar3 == 0) {
                          (**(code **)(*plVar24 + 0x10))(plVar24);
                        }
                      }
                    }
                  }
                  pfVar51 = local_450;
                  if (local_450 == (float *)0x0) {
                    pfVar51 = local_460;
                  }
                  uVar31 = (uint)local_6f8;
                  if (0x1f < uVar31) {
                    uVar46 = uVar31 + 0x1f;
                    if (-1 < (int)uVar31) {
                      uVar46 = uVar31;
                    }
                    pfVar51 = pfVar51 + ((int)uVar46 >> 5);
                    uVar31 = uVar31 - (uVar46 & 0xffffffe0);
                    if ((int)uVar31 < 0) {
                      pfVar51 = pfVar51 + -1;
                      uVar31 = uVar31 + 0x20;
                    }
                  }
                  if (uVar31 == 0) {
                    fVar21 = *pfVar51;
                  }
                  else {
                    bVar26 = -(byte)uVar31;
                    if ((int)uVar31 < 0) {
                      fVar21 = (float)((int)*pfVar51 << (bVar26 & 0x1f));
                    }
                    else {
                      fVar21 = (float)((uint)*pfVar51 >> ((byte)uVar31 & 0x1f));
                      if (0x1f < uVar31 + 1) {
                        fVar21 = (float)((uint)fVar21 |
                                        (int)pfVar51[uVar31 + 1 >> 5] << (bVar26 & 0x1f));
                      }
                    }
                  }
                  local_6f8 = local_6f8 + 2;
                  if (local_660 != 0) {
                    FUN_1400020a8();
                  }
                  if (local_630 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
              pfVar51 = local_450;
              if (local_450 == (float *)0x0) {
                pfVar51 = local_460;
              }
              uVar31 = (uint)local_6f8;
              if (0x1f < uVar31) {
                uVar46 = uVar31 + 0x1f;
                if (-1 < (int)uVar31) {
                  uVar46 = uVar31;
                }
                pfVar51 = pfVar51 + ((int)uVar46 >> 5);
                uVar31 = uVar31 - (uVar46 & 0xffffffe0);
                if ((int)uVar31 < 0) {
                  pfVar51 = pfVar51 + -1;
                  uVar31 = uVar31 + 0x20;
                }
              }
              if (uVar31 == 0) {
                fVar21 = *pfVar51;
              }
              else {
                bVar26 = -(byte)uVar31;
                if ((int)uVar31 < 0) {
                  fVar21 = (float)((int)*pfVar51 << (bVar26 & 0x1f));
                }
                else {
                  fVar21 = (float)((uint)*pfVar51 >> ((byte)uVar31 & 0x1f));
                  if (0x1f < uVar31 + 1) {
                    fVar21 = (float)((uint)fVar21 | (int)pfVar51[uVar31 + 1 >> 5] << (bVar26 & 0x1f)
                                    );
                  }
                }
              }
              local_6f8 = local_6f8 + 2;
              if (local_600 != 0) {
                FUN_1400020a8();
              }
            }
            bVar16 = false;
            plVar24 = local_7c0;
            lVar22 = local_7d8;
          }
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar24 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar24)(plVar24);
              LOCK();
              piVar3 = (int *)((longlong)plVar24 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar24 + 0x10))(plVar24);
              }
            }
          }
        }
        plVar24 = plStack_740;
        if (plStack_740 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_740 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plStack_740)(plStack_740);
            LOCK();
            piVar3 = (int *)((longlong)plVar24 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
        if (local_5a8 != 0) {
          FUN_1400020a8();
        }
        if (local_5b8 != 0) {
          FUN_1400020a8();
        }
        if (lStack_5c8 != 0) {
          FUN_1400020a8();
        }
        if (local_5d8 != 0) {
          FUN_1400020a8();
        }
        if (local_5e8 != 0) {
          FUN_1400020a8();
        }
        FUN_140a6c8c0(&local_90);
        FUN_140a6c8c0(&local_b0);
        FUN_140a6c8c0(&local_d0);
        FUN_140a6c8c0(&local_f0);
        FUN_140a6c8c0();
        lVar44 = local_7a0;
      } while (!bVar16);
      if (((local_7c4 & 1) != 0) && (local_7e0[0x1a] != 0)) {
        local_7e0[0x1a] = 0;
      }
      puStack_410 = (undefined8 *)0x0;
      local_428 = (undefined8 *)0x0;
      if (local_738 != 0) {
        FUN_1400020a8();
      }
      if (local_560 != 0) {
        FUN_1400020a8();
      }
      local_4e8 = 0;
      if (local_4f0 != 0) {
        FUN_1400020a8();
      }
      uVar37 = local_528 >> 0x20;
      local_528 = local_528 & 0xffffffff00000000;
      if ((int)uVar37 != 0) {
        FUN_14472eb64(&lStack_530);
      }
      uStack_500 = 0xffffffff;
      local_4fc = 0;
      local_508 = 0;
      if (0x80 < local_504) {
        local_504 = 0x80;
        FUN_1446efbd8(local_520);
      }
      if (local_510 != 0) {
        FUN_1400020a8();
      }
      if (lStack_530 != 0) {
        FUN_1400020a8();
      }
      if (lStack_540 != 0) {
        FUN_1400020a8();
      }
      local_478 = 0;
      if (local_480 != 0) {
        FUN_1400020a8();
      }
      uVar37 = local_4b8 >> 0x20;
      local_4b8 = local_4b8 & 0xffffffff00000000;
      if ((int)uVar37 != 0) {
        FUN_14472eb64(&lStack_4c0);
      }
      uStack_490 = 0xffffffff;
      local_48c = 0;
      local_498 = 0;
      if (0x80 < local_494) {
        local_494 = 0x80;
        FUN_1446efbd8(local_4b0);
      }
      if (local_4a0 != 0) {
        FUN_1400020a8();
      }
      if (lStack_4c0 != 0) {
        FUN_1400020a8();
      }
      if (lStack_4d0 != 0) {
        FUN_1400020a8();
      }
      if (local_728 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (local_718 != 0) {
        FUN_1400020a8();
      }
    }
    if (((local_7e0 != (longlong *)0x0) && (*(char *)(lVar22 + 0x1c) != '\0')) &&
       ((local_7a8 == 1 &&
        ((cVar17 = (**(code **)(*local_7e0 + 0x2c0))(local_7e0), cVar17 == '\0' && (*local_790 != 0)
         ))))) {
      FUN_1412fabe8(local_7e0 + 8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a1108);
    plVar24 = local_788;
    if (local_450 != (float *)0x0) {
      FUN_1400020a8();
    }
    local_3c0 = 0;
    if (local_3c8 != 0) {
      FUN_1400020a8();
    }
    FUN_142b1be38(&local_408);
    local_358 = 0;
    if (local_360 != 0) {
      FUN_1400020a8();
    }
    FUN_140c64cae(&local_3a0);
    FUN_1456d172d(local_3b0,uStack_3a8 & 0xffffffff);
    if (local_3b0 != 0) {
      FUN_1400020a8();
    }
    local_2d8 = 0;
    if (local_2e0 != 0) {
      FUN_1400020a8();
    }
    FUN_140bf8cc0(&local_320);
    if (local_330 != 0) {
      FUN_1400020a8();
    }
    if (local_340 != 0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_248;
    if (plStack_248 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_248 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_248)(plStack_248);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    local_260 = 0;
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    FUN_140201ac2(&uStack_2a8);
    if (local_2b8 != 0) {
      FUN_1400020a8();
    }
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1409da246(&local_1f8);
    if (CONCAT44(uStack_204,uStack_208) != 0) {
      FUN_1400020a8();
    }
    FUN_1401d9a90(&uStack_230);
    plVar7 = plStack_120;
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_120 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
      }
    }
    local_138 = 0;
    if (local_140 != 0) {
      FUN_1400020a8();
    }
    FUN_140201ac2(&uStack_180);
    if (lStack_190 != 0) {
      FUN_1400020a8();
    }
    uVar37 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  else {
    memset(&local_118,0,0x90);
    FUN_144869430(&local_118);
    local_88 = 0;
    local_118 = &PTR_FUN_149e1e050;
    local_78 = 0x7fffffffffffffff;
    local_f0 = local_f0 | 1;
    plStack_80 = param_1;
    FUN_1449c2eca(&local_118,0);
    local_88 = 0x10;
    local_198 = 0;
    lStack_190 = -1;
    local_188 = 0;
    uStack_180 = 0xffffffff00000000;
    local_178 = (longlong *)0x0;
    plStack_170 = (longlong *)0x0;
    local_168 = (longlong *)0x0;
    local_238 = 0xb7756362;
    uStack_234 = 0;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_228 = 0;
    uStack_224 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    uStack_218 = 0;
    local_214 = 0;
    uStack_210 = 0;
    uStack_20c = 0;
    uStack_208 = 0;
    uStack_204 = 0;
    uStack_200 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_1a0 = &local_118;
    cVar17 = FUN_140e03692();
    uVar37 = 0;
    if (cVar17 != '\0') {
      uVar37 = CONCAT44(uStack_224,uStack_228);
    }
    if (uVar37 == puVar29[2]) {
      FUN_140e03374(&local_1a0,&local_238,0,0xffffffffffffffff);
      plVar24 = (longlong *)CONCAT44(uStack_234,local_238);
      if (plVar24 == (longlong *)0x0) goto LAB_141184440;
      if (((ulonglong)plVar24[3] >> 0x3e & 1) == 0) {
        (**(code **)(*plVar24 + 8))(plVar24);
      }
      pfVar51 = (float *)plVar24[1];
      if ((plVar24[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar24 + 8))(plVar24);
      }
      uVar37 = plVar24[2];
      bVar52 = true;
    }
    else {
LAB_141184440:
      bVar52 = false;
      plVar24 = (longlong *)0x0;
    }
    plVar7 = local_168;
    uVar36 = (uint)uVar37;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_168 + 3;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar22 & 0x3fffffff) == 1) {
        (**(code **)(*local_168 + 0x10))(local_168);
        plVar7[1] = 0;
        plVar7[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar7 + 3);
        uVar37 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar37 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
    }
    plVar7 = plStack_170;
    if (plStack_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_170 + 3;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar22 & 0x3fffffff) == 1) {
        (**(code **)(*plStack_170 + 0x10))(plStack_170);
        plVar7[1] = 0;
        plVar7[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar7 + 3);
        uVar37 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar37 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
    }
    plVar7 = local_178;
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_178 + 3;
      lVar22 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar22 & 0x3fffffff) == 1) {
        (**(code **)(*local_178 + 0x10))(local_178);
        plVar7[1] = 0;
        plVar7[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar7 + 3);
        uVar37 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if ((uVar37 & 0xfffffffc0000000) == 0x40000000) {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
    }
    plVar7 = plStack_c0;
    local_118 = &PTR__purecall_149e35f70;
    if (plStack_c0 != (longlong *)0x0) {
      if (*plStack_c0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar7);
    }
    lVar22 = lStack_a0;
    if (lStack_a0 != 0) {
      if (*(longlong *)(lStack_a0 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar22);
    }
    if (bVar52) goto LAB_141184616;
    uVar37 = 0;
  }
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar24 + 3;
    lVar22 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (((uint)lVar22 & 0x3fffffff) == 1) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      plVar24[1] = 0;
      plVar24[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar24 + 3);
      uVar34 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar34 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar24)(plVar24,1);
      }
    }
  }
LAB_141184400:
  if ((local_70 ^ (ulonglong)auStack_818) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar37 & 0xffffffff;
}



// FUNCTION 1411876d4 FUN_1411876d4 body=33 status=ok
// SIG undefined FUN_1411876d4(void)

void FUN_1411876d4(longlong param_1)

{
  switchD_143c3d4dc::caseD_1d();
  *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) & 0xfb;
  FUN_1411876f6(param_1);
  return;
}



// FUNCTION 1411876f6 FUN_1411876f6 body=1042 status=ok
// SIG undefined FUN_1411876f6(void)

void FUN_1411876f6(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  
  FUN_141053868(param_1,0);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_144d5fa90(param_1 + 0xd8,0,0);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x194) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_144d5f6c0(param_1 + 0xc0,0,0);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_144d60030(param_1 + 200);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_144d5f330(param_1 + 0xd0,0,0);
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_14482f6fa(param_1 + 0x160,0);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_14181b9e6(param_1 + 0xe0);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_1401a2688(param_1 + 0xf0,0);
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) != 0) {
    FUN_1448f21ac(param_1 + 0x110,0);
  }
  lVar1 = param_1 + 0x1c0;
  iVar3 = *(int *)(param_1 + 0x208);
  if (iVar3 < 2) {
    lVar5 = param_1 + 0x1f8;
    if (*(longlong *)(param_1 + 0x200) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x200);
    }
    iVar14 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar14 = iVar3;
    }
    if (*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 500) < iVar14 >> 2) {
      iVar3 = *(int *)(param_1 + 0x1e8);
      if (iVar3 == 0) {
        uVar13 = 1;
        iVar10 = 0;
        uVar11 = 0;
        iVar14 = 0;
      }
      else {
        puVar12 = *(uint **)(param_1 + 0x1e0);
        if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x1d0);
        }
        uVar6 = *puVar12;
        if (uVar6 == 0) {
          iVar14 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar14 = iVar3 + -1;
          }
          uVar11 = 0;
          uVar13 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar13 = uVar11;
          }
          iVar10 = 0;
          do {
            if (uVar13 == uVar11) goto LAB_141187940;
            iVar10 = iVar10 + 0x20;
            uVar6 = puVar12[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar6 == 0);
        }
        else {
          iVar10 = 0;
          uVar11 = 0;
        }
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar14 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar14) {
          iVar14 = iVar3;
        }
      }
      if (iVar14 != iVar3) {
        uVar6 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar5 + (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x14 + (longlong)iVar14 * 0x18) * 4) =
               0xffffffff;
          uVar6 = ~(uint)uVar13 & uVar6;
          puVar12 = *(uint **)(param_1 + 0x1e0);
          if (*(uint **)(param_1 + 0x1e0) == (uint *)0x0) {
            puVar12 = (uint *)(param_1 + 0x1d0);
          }
          iVar4 = *(int *)(param_1 + 0x1e8);
          iVar14 = (int)uVar11;
          lVar15 = (longlong)iVar14;
          uVar7 = puVar12[lVar15] & uVar6;
          if (uVar7 == 0) {
            iVar8 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar8 = iVar4 + -1;
            }
            iVar8 = iVar8 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar9 = iVar8;
            if (iVar8 < iVar14) {
              iVar9 = iVar14;
            }
            if (iVar14 < iVar8) {
              lVar16 = 0;
              do {
                uVar7 = puVar12[lVar15 + lVar16 + 1];
                if (uVar7 != 0) {
                  uVar11 = (ulonglong)(iVar14 + (int)lVar16 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_141187a68;
                }
                iVar10 = iVar10 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar9 - lVar15 != lVar16);
              uVar6 = 0xffffffff;
              lVar15 = (longlong)iVar9;
            }
            uVar11 = lVar15 + 1U & 0xffffffff;
            iVar14 = iVar4;
          }
          else {
LAB_141187a68:
            uVar13 = (ulonglong)(-uVar7 & uVar7);
            uVar2 = uVar13 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar14 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar14) {
              iVar14 = iVar4;
            }
          }
        } while (iVar14 != iVar3);
      }
    }
    else if (iVar3 == 1) {
      lVar15 = 0;
      do {
        *(undefined4 *)(lVar5 + lVar15 * 4) = 0xffffffff;
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(param_1 + 0x208));
    }
LAB_141187940:
    FUN_1438b2e36(lVar1,0);
  }
  else {
    FUN_1438b2e36(lVar1,0);
    *(undefined4 *)(param_1 + 0x208) = 1;
    FUN_1438b5b58(lVar1);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) != 0) {
    FUN_1402191ca(param_1 + 0x120,0);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_1448f21ac(param_1 + 0x130,0);
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    FUN_1402191ca(param_1 + 0x140,0);
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_1448f21ac(param_1 + 0x150,0);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(byte *)(param_1 + 0x18a) = *(byte *)(param_1 + 0x18a) | 1;
  return;
}



// FUNCTION 141187b08 FUN_141187b08 body=277 status=ok
// SIG undefined FUN_141187b08(void)

undefined8 FUN_141187b08(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_141187c17;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141187c17;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_141187c17:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141187bc5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_141187bc5;
    }
  }
  uVar6 = 0;
LAB_141187bc5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141187c1e FUN_141187c1e body=1001 status=ok
// SIG undefined FUN_141187c1e(void)

void FUN_141187c1e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  code *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = (longlong *)FUN_141188014();
  if ((plVar7 == (longlong *)0x0) || (lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar8 == 0))
  goto LAB_141187ea4;
  plVar7 = (longlong *)(lVar8 + 0x48);
  FUN_140457ffc(plVar7,param_1);
  FUN_140457ffc(lVar8 + 0x18,param_1);
  FUN_140457ffc(lVar8 + 0x30,param_1);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  pcVar3 = local_60;
  local_58 = 3;
  *(undefined ***)local_60 = &PTR_LAB_14b9ba770;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  *(longlong *)(local_60 + 0x10) = lVar9;
  *(undefined ***)local_60 = &PTR_FUN_14b9b78d0;
  *(longlong *)(local_60 + 0x18) = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_60 + 0x18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar5;
      }
    }
  }
  *(int *)(pcVar3 + 0x1c) = iVar6;
  *(undefined1 **)(pcVar3 + 0x20) = &LAB_146212fda;
  *(undefined4 *)(pcVar3 + 0x28) = 0;
  if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 == 0) {
      uVar12 = 0;
      goto LAB_141187e27;
    }
    if (local_60 != (code *)0x0) {
      uVar12 = 0;
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_141187e1a;
    }
    uVar12 = 0;
  }
  else {
    if (*(int *)(lVar8 + 0x5c) < 1) {
      iVar6 = *(int *)(lVar8 + 0x50);
      iVar5 = *(int *)(lVar8 + 0x58) + -1;
      *(int *)(lVar8 + 0x58) = iVar5;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
        if (0 < iVar6) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar7 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar7 + (longlong)iVar10 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar7,iVar10);
              FUN_14005b248(plVar7);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar5 = *(int *)(lVar8 + 0x50);
          } while (iVar10 < iVar5);
        }
        iVar10 = 2;
        if (2 < iVar5 * 2) {
          iVar10 = iVar5 * 2;
        }
        *(int *)(lVar8 + 0x58) = iVar10;
        if ((iVar10 < iVar6) && (*(int *)(lVar8 + 0x54) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar12 = 0;
    if ((local_58 != 0) && (local_60 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
      uVar12 = local_50;
    }
    iVar6 = *(int *)(lVar8 + 0x50);
    *(uint *)(lVar8 + 0x50) = iVar6 + 1U;
    if (*(uint *)(lVar8 + 0x54) < iVar6 + 1U) {
      FUN_1447a71f6(plVar7,iVar6);
    }
    lVar11 = *plVar7;
    lVar9 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar11 + lVar9) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar9) = 0;
    *(code **)(lVar11 + lVar9) = local_60;
    local_60 = (code *)0x0;
    *(int *)(lVar11 + 8 + lVar9) = local_58;
LAB_141187e1a:
    local_58 = 0;
LAB_141187e27:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x58) = uVar12;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    local_60 = FUN_140fcc6c2;
    local_58 = 0;
    FUN_1411881e8(lVar8 + 0x18,&local_50,param_1);
    *(undefined8 *)(param_1 + 0x60) = local_50;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_60 = FUN_140fcc530;
    local_58 = 0;
    FUN_1411881e8(lVar8 + 0x30,&local_50,param_1);
    *(undefined8 *)(param_1 + 0x68) = local_50;
  }
LAB_141187ea4:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141188014 FUN_141188014 body=467 status=ok
// SIG undefined FUN_141188014(void)

longlong FUN_141188014(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1400d7050(param_1 + 6);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      plVar4 = *(longlong **)(lVar1 + 0xf48);
      if (plVar4 != (longlong *)0x0) {
        uVar2 = FUN_140f5697c();
        lVar1 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
        if (lVar1 != 0) {
          uVar2 = FUN_140f5697c();
          lVar3 = FUN_144718840(lVar1,uVar2);
          if ((lVar1 != lVar3) && (lVar3 != 0)) goto LAB_1411880cd;
        }
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
      if (plVar4 != (longlong *)0x0) {
        uVar2 = FUN_140f5697c();
        lVar1 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
        if (lVar1 != 0) {
          uVar2 = FUN_140f5697c();
          lVar5 = FUN_144718840(lVar1,uVar2);
          lVar3 = 0;
          if (lVar1 != lVar5) {
            lVar3 = lVar5;
          }
          goto LAB_1411880cd;
        }
      }
    }
  }
  lVar3 = 0;
LAB_1411880cd:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1411881e8 FUN_1411881e8 body=772 status=ok
// SIG undefined FUN_1411881e8(void)

undefined8 * FUN_1411881e8(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b421670;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b9b7940;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_14118839c;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_141188386;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_141188386:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14118839c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141188596 FUN_141188596 body=205 status=ok
// SIG undefined FUN_141188596(void)

void FUN_141188596(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 0x38) = *(int *)(param_1[3] + 0x38) + -1;
    UNLOCK();
    lVar2 = param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      lVar4 = lVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      lVar4 = param_1[3];
    }
    LOCK();
    bVar6 = param_1 == *(longlong **)(lVar4 + 0x30);
    if (bVar6) {
      *(longlong *)(lVar4 + 0x30) = lVar3;
    }
    UNLOCK();
    if (!bVar6) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    lVar3 = param_1[2];
    lVar4 = param_1[3];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 == '\0') && ((longlong)*(int *)(lVar4 + 0x20) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5) != 0)) {
          FUN_1411f616c(lVar4 + 0x18,lVar3);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x20) * 0x10 != lVar5);
    }
    LOCK();
    piVar1 = (int *)(lVar2 + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141188664 FUN_141188664 body=93 status=ok
// SIG undefined FUN_141188664(void)

void FUN_141188664(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001411886bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001411886a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1411886c2 FUN_1411886c2 body=862 status=ok
// SIG undefined FUN_1411886c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411886c2(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb8bb28) && (FUN_144b3d300(&DAT_14cb8bb28), DAT_14cb8bb28 == -1)) {
    DAT_14cb8bb18 = 0;
    _DAT_14cb8bb20 = 0;
    atexit((_func_5014 *)&LAB_143e3cf9c);
    _Init_thread_footer(&DAT_14cb8bb28);
  }
  uVar1 = _DAT_14cb8bb20 >> 0x20;
  _DAT_14cb8bb20 = _DAT_14cb8bb20 & 0xffffffff00000000;
  if ((int)uVar1 == 0) {
    uVar2 = 0;
    iVar6 = 0;
  }
  else {
    FUN_14481578e(&DAT_14cb8bb18,0);
    iVar6 = DAT_14cb8bb20;
    uVar2 = DAT_14cb8bb24;
  }
  _DAT_14cb8bb20 = CONCAT44(DAT_14cb8bb24,iVar6 + 1U);
  if (uVar2 < iVar6 + 1U) {
    FUN_1446f48e2(&DAT_14cb8bb18,iVar6);
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  *(uint *)(DAT_14cb8bb18 + (longlong)iVar6 * 4) = uVar2;
  bVar12 = false;
LAB_14118876c:
  if ((-1 < (int)uVar2) && (!(bool)(*(int *)(param_1 + 0x30) <= (int)uVar2 | bVar12))) {
    iVar6 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar6 + 1;
    if (iVar6 < 0x32) {
      if ((longlong)*(int *)(param_1 + 0x130) != 0) {
        piVar3 = *(int **)(param_1 + 0x128);
        piVar4 = piVar3 + (longlong)*(int *)(param_1 + 0x130) * 0xc;
        do {
          iVar6 = *piVar3;
          if ((((-1 < (longlong)iVar6) && (iVar6 < *(int *)(*(longlong *)(param_1 + 0x10) + 0xa0)))
              && (lVar7 = (longlong)iVar6 * 0x68 +
                          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x98), lVar7 != 0)) &&
             ((*(longlong *)(piVar3 + 2) != 0 &&
              ((*(byte *)(*(longlong *)(piVar3 + 2) + 0x28) & 2) != 0)))) {
            *(undefined4 *)(param_1 + 0x18) = 0;
            if ((longlong)piVar3[8] != 0) {
              piVar9 = *(int **)(piVar3 + 6);
              lVar10 = (longlong)piVar3[8] * 0xc;
              do {
                if (piVar9[1] == uVar2) {
                  if (piVar9 != (int *)0x0) {
                    iVar6 = *piVar9;
                    if (((longlong)iVar6 < 0) || (*(int *)(lVar7 + 0x28) <= iVar6))
                    goto LAB_14118885b;
                    iVar5 = piVar9[2];
                    lVar7 = (longlong)iVar6 * 0x50 + *(longlong *)(lVar7 + 0x20);
                    goto LAB_141188852;
                  }
                  break;
                }
                piVar9 = piVar9 + 3;
                lVar10 = lVar10 + -0xc;
              } while (lVar10 != 0);
            }
            iVar5 = piVar3[10];
            lVar7 = lVar7 + 0x30;
LAB_141188852:
            if (lVar7 != 0) {
              if ((longlong)DAT_14cb8bb20 != 0) {
                lVar10 = 0;
                goto LAB_141188989;
              }
              bVar12 = false;
              goto LAB_1411889a3;
            }
          }
LAB_14118885b:
          piVar3 = piVar3 + 0xc;
        } while (piVar3 != piVar4);
      }
      if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x60 + (ulonglong)uVar2 * 0x68) & 1) == 0) {
        lVar7 = (ulonglong)uVar2 * 0x68;
        lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x30 + lVar7);
        if (lVar10 != 0) {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28 + lVar7);
          lVar11 = 0;
          do {
            iVar6 = *(int *)(lVar7 + lVar11);
            if ((((-1 < (longlong)iVar6) &&
                 (lVar8 = *(longlong *)
                           (*(longlong *)(param_1 + 0x28) +
                           (longlong)*(int *)(param_1 + 0x38) * 0x68),
                 iVar6 < *(int *)(lVar8 + 0x50))) &&
                (lVar8 = (longlong)iVar6 * 0x70 + *(longlong *)(lVar8 + 0x48), lVar8 != 0)) &&
               ((*(longlong *)(lVar7 + 8 + lVar11) == 0 ||
                (FUN_140d86252(), (*(byte *)(*(longlong *)(lVar7 + 8 + lVar11) + 0x28) & 2) != 0))))
            {
              *(undefined4 *)(param_1 + 0x18) = 0;
              if ((longlong)DAT_14cb8bb20 != 0) {
                lVar10 = 0;
                goto LAB_141188916;
              }
              bVar12 = false;
              goto LAB_141188931;
            }
            lVar11 = lVar11 + 0x20;
          } while (lVar10 * 0x20 != lVar11);
        }
        bVar12 = false;
        goto LAB_14118895b;
      }
    }
    else {
      FUN_1415ee148(param_1,0xffffffff);
    }
  }
  goto LAB_1411889cd;
  while (bVar13 = (longlong)DAT_14cb8bb20 * 4 + -4 != lVar10, lVar10 = lVar10 + 4, bVar13) {
LAB_141188989:
    bVar12 = *(int *)(DAT_14cb8bb18 + lVar10) == iVar5;
    if (bVar12) break;
  }
LAB_1411889a3:
  FUN_143e3cfae(param_1,lVar7 + 0x28);
  FUN_1418ac73a(param_1,lVar7 + 0x18);
  goto LAB_141188951;
  while (bVar13 = (longlong)DAT_14cb8bb20 * 4 + -4 != lVar10, lVar10 = lVar10 + 4, bVar13) {
LAB_141188916:
    bVar12 = *(int *)(DAT_14cb8bb18 + lVar10) == *(int *)(lVar7 + 0x18 + lVar11);
    if (bVar12) break;
  }
LAB_141188931:
  FUN_143e3cfae(param_1,lVar8 + 0x60);
  FUN_1418ac73a(param_1,lVar8 + 0x50);
  iVar5 = *(int *)(lVar7 + 0x18 + lVar11);
LAB_141188951:
  FUN_1415ee148(param_1,iVar5);
LAB_14118895b:
  bVar13 = uVar2 == *(uint *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x38);
  if (bVar13) {
LAB_1411889cd:
    *(undefined1 *)(param_1 + 0x1c) = 0;
    return;
  }
  goto LAB_14118876c;
}



// FUNCTION 141188a20 FUN_141188a20 body=76 status=ok
// SIG undefined FUN_141188a20(void)

undefined8 FUN_141188a20(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_141188a6c(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000141188a61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 141188a6c FUN_141188a6c body=191 status=ok
// SIG undefined FUN_141188a6c(void)

longlong FUN_141188a6c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_141188b2c();
  lVar3 = *param_1;
  if (DAT_14c9a1f28 != DAT_14c9a1f54) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14c9a1f58;
    if (DAT_14c9a1f60 != (undefined *)0x0) {
      puVar7 = DAT_14c9a1f60;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c9a1f68 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14c9a1f20 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14c9a1f18;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 141188b2c FUN_141188b2c body=157 status=ok
// SIG undefined FUN_141188b2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141188b2c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a1f70) {
    FUN_144b3d300(&DAT_14c9a1f70);
    if (DAT_14c9a1f70 == -1) {
      DAT_14c9a1f40 = 0;
      DAT_14c9a1f48 = 0;
      DAT_14c9a1f20 = 0;
      _DAT_14c9a1f28 = 0;
      _DAT_14c9a1f4c = 0xffffffff00000080;
      DAT_14c9a1f54 = 0;
      DAT_14c9a1f60 = 0;
      DAT_14c9a1f68 = 0;
      atexit(FUN_142b2aed8);
      _Init_thread_footer(&DAT_14c9a1f70);
    }
  }
  return &DAT_14c9a1f20;
}



// FUNCTION 141188bca FUN_141188bca body=103 status=ok
// SIG undefined FUN_141188bca(void)

ulonglong FUN_141188bca(longlong param_1)

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
LAB_141188c14:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_141188c14;
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



// FUNCTION 141188c32 FUN_141188c32 body=109 status=ok
// SIG undefined FUN_141188c32(void)

void FUN_141188c32(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_141188c87;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x44) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_141188c87;
    }
  }
  uVar3 = 0;
LAB_141188c87:
  uVar2 = FUN_1409f733c(*(undefined8 *)(param_1 + 0x30),uVar3);
  FUN_1402a7054(param_1,uVar2);
  return;
}



// FUNCTION 141188ca0 FUN_141188ca0 body=103 status=ok
// SIG undefined FUN_141188ca0(void)

ulonglong FUN_141188ca0(longlong param_1)

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
LAB_141188cea:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_141188cea;
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



// FUNCTION 141188d08 FUN_141188d08 body=109 status=ok
// SIG undefined FUN_141188d08(void)

void FUN_141188d08(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_141188d5d;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x44) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_141188d5d;
    }
  }
  uVar3 = 0;
LAB_141188d5d:
  uVar2 = FUN_140cdaf3c(*(undefined8 *)(param_1 + 0x30),uVar3);
  FUN_1402a7054(param_1,uVar2);
  return;
}



// FUNCTION 141188d76 FUN_141188d76 body=96 status=ok
// SIG undefined FUN_141188d76(void)

ulonglong FUN_141188d76(longlong param_1)

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
LAB_141188db9:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_141188db9;
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



// FUNCTION 141188dd6 FUN_141188dd6 body=104 status=ok
// SIG undefined FUN_141188dd6(void)

void FUN_141188dd6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a0728(param_2 + 0x38,&local_20);
  *(undefined8 *)(param_1 + 0x78) = local_20;
  if ((*(int *)(param_1 + 0x90) != 0) && (*(longlong **)(param_1 + 0x88) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141188e40 FUN_141188e40 body=34 status=ok
// SIG undefined FUN_141188e40(void)

void FUN_141188e40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  FUN_141188e62();
  lVar1 = FUN_140541594();
  *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(lVar1 + 0x38);
  return;
}



// FUNCTION 141188e62 FUN_141188e62 body=371 status=ok
// SIG undefined FUN_141188e62(void)

void FUN_141188e62(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_140c89136();
  FUN_1407e2cf4(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x608))(param_1,param_2,param_3);
  if ((*(byte *)(param_1 + 0x19d) & 1) == 0) {
    uVar2 = 0xbf800000;
  }
  else {
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xcec);
  }
  *(undefined4 *)(param_3 + 0x90) = uVar2;
  fVar5 = *(float *)((longlong)param_1 + 0xc44) * *(float *)((longlong)param_1 + 0xc6c);
  fVar4 = *(float *)(param_1 + 0x19b);
  if (0.0 < fVar4) {
    uVar1 = -(uint)(fVar4 < fVar5 / *(float *)(param_1 + 0x189));
    fVar5 = (float)(~uVar1 & (uint)fVar5 |
                   (uint)((fVar4 / (fVar5 / *(float *)(param_1 + 0x189))) * fVar5) & uVar1);
  }
  *(double *)(param_3 + 0x970) =
       (double)((*(float *)((longlong)param_1 + 0xc4c) + *(float *)((longlong)param_1 + 0xc4c)) /
               ((*(float *)((longlong)param_1 + 0x2d4) + 1.0) * fVar5));
  fVar4 = *(float *)(param_1 + 0x189);
  fVar5 = *(float *)(param_1 + 0x19b);
  if (0.0 < fVar5) {
    fVar3 = (*(float *)((longlong)param_1 + 0xc44) * *(float *)((longlong)param_1 + 0xc6c)) / fVar4;
    uVar1 = -(uint)(fVar3 < fVar5);
    fVar4 = (float)(~uVar1 & (uint)fVar4 | (uint)((fVar3 / fVar5) * fVar4) & uVar1);
  }
  *(double *)(param_3 + 0x978) =
       (double)((*(float *)(param_1 + 0x18a) + *(float *)(param_1 + 0x18a)) /
               ((*(float *)((longlong)param_1 + 0x2d4) + 1.0) * fVar4));
  *(byte *)((longlong)param_1 + 0xcf4) = *(byte *)((longlong)param_1 + 0xcf4) & 0xfe;
  return;
}



// FUNCTION 141188fd6 FUN_141188fd6 body=1159 status=ok
// SIG undefined FUN_141188fd6(void)

void FUN_141188fd6(longlong param_1,float param_2,double *param_3)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  double *pdVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [24];
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [16];
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0xc78) == '\x03') {
    *(byte *)((longlong)param_3 + 0xca) = *(byte *)((longlong)param_3 + 0xca) | 8;
    *(undefined4 *)(param_3 + 0xde) = 0;
  }
  else if (*(char *)(param_1 + 0xc78) == '\0') {
    *(byte *)((longlong)param_3 + 0xca) = *(byte *)((longlong)param_3 + 0xca) & 7;
    *(byte *)((longlong)param_3 + 0xcb) = *(byte *)((longlong)param_3 + 0xcb) & 0xfe;
  }
  else {
    *(undefined4 *)(param_3 + 0x15) = *(undefined4 *)(param_1 + 0x340);
    bVar2 = *(byte *)((longlong)param_3 + 0xca);
    *(byte *)((longlong)param_3 + 0xca) = bVar2 | 0x10;
    *(undefined4 *)(param_3 + 0xa4) = *(undefined4 *)(param_1 + 0xce0);
    *(byte *)((longlong)param_3 + 0xca) = bVar2 | 0x30;
    *(undefined4 *)((longlong)param_3 + 0x524) = *(undefined4 *)(param_1 + 0xc60);
    *(byte *)((longlong)param_3 + 0xca) = bVar2 | 0x70;
    *(undefined4 *)(param_3 + 0xa5) = *(undefined4 *)(param_1 + 0xc70);
    if (*(char *)(param_1 + 0xc78) == '\x01') {
      fVar10 = *(float *)(param_1 + 0xc7c);
    }
    else {
      fVar10 = 0.0;
      if (*(char *)(param_1 + 0xc78) == '\x02') {
        lVar7 = FUN_1404101e2(param_1 + 0xc80);
        if (lVar7 == 0) {
          local_88 = *(double *)(param_1 + 0xcb8);
          auVar6 = *(undefined1 (*) [16])(param_1 + 0xca8);
          local_98._0_8_ = SUB128(*(undefined1 (*) [12])*(undefined1 (*) [16])(param_1 + 0xca8),0);
          local_98._8_8_ = auVar6._8_8_;
          dVar12 = (double)local_98._0_8_;
          dVar3 = (double)local_98._8_8_;
          local_98 = auVar6;
        }
        else {
          pdVar8 = (double *)&DAT_14c846480;
          if (*(longlong *)(lVar7 + 0x1c8) != 0) {
            pdVar8 = (double *)(*(longlong *)(lVar7 + 0x1c8) + 0x240);
          }
          dVar4 = *pdVar8;
          dVar5 = pdVar8[1];
          dVar3 = pdVar8[2];
          dVar12 = *(double *)(param_1 + 0xca8) * pdVar8[8];
          dVar13 = *(double *)(param_1 + 0xcb0) * pdVar8[9];
          dVar11 = *(double *)(param_1 + 0xcb8) * pdVar8[10];
          dVar1 = pdVar8[3];
          dVar14 = dVar13 * dVar4 - dVar5 * dVar12;
          dVar15 = dVar11 * dVar5 - dVar3 * dVar13;
          dVar16 = dVar12 * dVar3 - dVar4 * dVar11;
          dVar15 = dVar15 + dVar15;
          dVar16 = dVar16 + dVar16;
          dVar14 = dVar14 + dVar14;
          dVar12 = (dVar14 * dVar5 - dVar16 * dVar3) + dVar1 * dVar15 + dVar12 + pdVar8[4];
          dVar3 = (dVar3 * dVar15 - dVar4 * dVar14) + pdVar8[3] * dVar16 + dVar13 + pdVar8[5];
          local_88 = dVar14 * dVar1 + dVar11 + (dVar16 * dVar4 - dVar15 * dVar5) + pdVar8[6];
          local_98._8_4_ = SUB84(dVar3,0);
          local_98._0_8_ = dVar12;
          local_98._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        }
        dVar16 = local_88 - param_3[2];
        dVar1 = param_3[1];
        dVar14 = *param_3;
        FUN_14141a100(param_1,&local_b0);
        fVar10 = 0.0;
        if (0.0 <= dVar16 * local_a0 + (dVar12 - dVar14) * local_b0 + (dVar3 - dVar1) * local_a8) {
          FUN_14141a100(param_1,local_c8);
          FUN_1467f764c(local_98,local_c8,param_3,&local_b0);
          fVar10 = (float)SQRT((local_a0 - param_3[2]) * (local_a0 - param_3[2]) +
                               (local_b0 - *param_3) * (local_b0 - *param_3) +
                               (local_a8 - param_3[1]) * (local_a8 - param_3[1]));
        }
      }
    }
    *(float *)(param_1 + 0xce4) = fVar10 + *(float *)(param_1 + 0xcd0);
    fVar10 = *(float *)(param_1 + 0xc68);
    fVar9 = (float)FUN_140c8922e(param_1);
    fVar10 = (fVar9 / 1000.0) * fVar10;
    fVar9 = *(float *)(param_1 + 0xce4);
    if (*(float *)(param_1 + 0xce4) <= fVar10) {
      fVar9 = fVar10;
    }
    *(float *)(param_1 + 0xce4) = fVar9;
    if (((*(byte *)(param_1 + 0xcc8) & 1) != 0) && ((*(byte *)(param_1 + 0xcf4) & 1) == 0)) {
      if (0.0 < *(float *)(param_1 + 0xccc)) {
        fVar10 = fVar9 - *(float *)(param_1 + 0xcf0);
        if (1e-08 <= fVar10 * fVar10) {
          param_2 = *(float *)(param_1 + 0xccc) * param_2;
          if (1.0 <= param_2) {
            param_2 = 1.0;
          }
          if (param_2 <= 0.0) {
            param_2 = 0.0;
          }
          fVar9 = *(float *)(param_1 + 0xcf0) + fVar10 * param_2;
        }
      }
      *(float *)(param_1 + 0xce4) = fVar9;
    }
    *(float *)(param_1 + 0xcf0) = fVar9;
    bVar2 = *(byte *)((longlong)param_3 + 0xca);
    *(byte *)((longlong)param_3 + 0xca) = bVar2 | 8;
    *(undefined4 *)(param_3 + 0xde) = *(undefined4 *)(param_1 + 0xce4);
    *(byte *)((longlong)param_3 + 0xca) = bVar2 | 0x88;
    *(float *)(param_3 + 0xdd) = (*(float *)(param_1 + 0x2d4) + 1.0) * *(float *)(param_1 + 0xc44);
    *(byte *)((longlong)param_3 + 0xcb) = *(byte *)((longlong)param_3 + 0xcb) | 1;
    *(undefined4 *)((longlong)param_3 + 0x6ec) = *(undefined4 *)(param_1 + 0xc6c);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118945e FUN_14118945e body=125 status=ok
// SIG undefined FUN_14118945e(void)

void FUN_14118945e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[1];
    if (plVar1 != plVar2) {
      do {
        if (*plVar1 != 0) {
          FUN_1400020a8();
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar2);
      plVar1 = (longlong *)*param_1;
    }
    plVar2 = plVar1;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)plVar1)) &&
       (plVar2 = (longlong *)plVar1[-1],
       0x1f < (ulonglong)((longlong)plVar1 + (-8 - (longlong)plVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(plVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1411894dc FUN_1411894dc body=136 status=ok
// SIG undefined FUN_1411894dc(void)

void FUN_1411894dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar2 * 8) != 0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar2 = *(longlong *)(param_1 + 8);
      lVar1 = lVar2;
      if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
         (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_1400020a8(lVar1);
  }
  *(longlong *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 141189566 FUN_141189566 body=140 status=ok
// SIG undefined FUN_141189566(void)

void FUN_141189566(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar2 * 8) != 0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar2 = *(longlong *)(param_1 + 8);
      lVar1 = lVar2;
      if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
         (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_1400020a8(lVar1);
  }
  *(longlong *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1411895f4 FUN_1411895f4 body=142 status=ok
// SIG undefined FUN_1411895f4(void)

void FUN_1411895f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar2 * 8) != 0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar2 = *(longlong *)(param_1 + 8);
      lVar1 = lVar2;
      if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
         (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_1400020a8(lVar1);
  }
  *(longlong *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 141189684 FUN_141189684 body=146 status=ok
// SIG undefined FUN_141189684(void)

void FUN_141189684(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  while (lVar2 != 0) {
    FUN_1470a9ada(param_1);
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar2 * 8) != 0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar2 = *(longlong *)(param_1 + 8);
      lVar1 = lVar2;
      if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
         (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_1400020a8(lVar1);
  }
  *(longlong *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 141189718 FUN_141189718 body=107 status=ok
// SIG undefined FUN_141189718(void)

void FUN_141189718(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (*(int *)(param_1 + 0x48) <= iVar3) {
LAB_14118976a:
      FUN_1411899f6(param_1);
      FUN_140bd52f6(param_1,param_2);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) == iVar3) goto LAB_14118976a;
  FUN_140bd52f6(param_1,param_2);
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_141189784(param_1);
  return;
}



// FUNCTION 141189784 FUN_141189784 body=625 status=ok
// SIG undefined FUN_141189784(void)

void FUN_141189784(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1411897f6;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1411897f6:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x38;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x34 + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x30 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1411899f6 FUN_1411899f6 body=325 status=ok
// SIG undefined FUN_1411899f6(void)

void FUN_1411899f6(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 141189b3c FUN_141189b3c body=312 status=ok
// SIG undefined FUN_141189b3c(void)

void FUN_141189b3c(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141189ba6;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141189ba6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 141189c74 FUN_141189c74 body=735 status=ok
// SIG undefined FUN_141189c74(void)

void FUN_141189c74(longlong param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  int local_90;
  undefined1 local_88 [24];
  int local_70;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_145825db0(&local_98,param_1);
  uVar12 = (longlong)local_90 - (longlong)local_64;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar14 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar14 + 0xc80);
  bVar4 = *pbVar2;
  if ((bVar4 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  uVar11 = (uint)uVar12;
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar12);
    }
    FUN_141189f56(param_1,uVar12 & 0xffffffff);
    if (uVar11 < 4) {
      iVar9 = 1;
    }
    else {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar9 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      iVar9 = 1 << ((byte)iVar9 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar9)) {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14041d2f4(param_1);
    }
  }
  if ((bVar4 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  local_b8 = local_88;
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  local_a8 = 0;
  if (local_70 == 0) {
    uVar12 = 1;
    local_b0._0_4_ = 0xffffffff;
    local_70 = 0;
    local_b0._4_4_ = 0;
    local_c0._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_c0);
    uVar12 = local_c0 >> 0x20;
  }
  puVar8 = local_b8;
  if (local_b0._4_4_ != local_70 || local_b8 != local_88) {
    iVar9 = (int)local_c0;
    uVar11 = (uint)local_b0;
    iVar10 = local_b0._4_4_;
    iVar17 = local_a8;
    do {
      local_c0 = local_98 + (longlong)iVar10 * 0x18;
      local_b8 = (undefined1 *)(local_98 + (longlong)iVar10 * 0x18 + 8);
      FUN_14041ce88(param_1,local_9c,&local_c0);
      uVar11 = ~(uint)uVar12 & uVar11;
      puVar16 = *(undefined1 **)(puVar8 + 0x10);
      if (*(undefined1 **)(puVar8 + 0x10) == (undefined1 *)0x0) {
        puVar16 = puVar8;
      }
      iVar6 = *(int *)(puVar8 + 0x18);
      lVar14 = (longlong)iVar9;
      uVar13 = *(uint *)(puVar16 + lVar14 * 4) & uVar11;
      if (uVar13 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar7 = iVar10;
        if (iVar10 < iVar9) {
          iVar7 = iVar9;
        }
        if (iVar9 < iVar10) {
          lVar15 = 0;
          do {
            uVar13 = *(uint *)(puVar16 + lVar15 * 4 + lVar14 * 4 + 4);
            if (uVar13 != 0) {
              iVar9 = iVar9 + (int)lVar15 + 1;
              uVar11 = 0xffffffff;
              goto LAB_141189e61;
            }
            iVar17 = iVar17 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar14 != lVar15);
          uVar11 = 0xffffffff;
          iVar9 = iVar7;
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar6;
      }
      else {
LAB_141189e61:
        uVar12 = (ulonglong)(-uVar13 & uVar13);
        uVar3 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar10) {
          iVar10 = iVar6;
        }
      }
    } while (iVar10 != local_70 || puVar8 != local_88);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1406d01fc(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141189f56 FUN_141189f56 body=420 status=ok
// SIG undefined FUN_141189f56(void)

void FUN_141189f56(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14118a0fa FUN_14118a0fa body=179 status=ok
// SIG undefined FUN_14118a0fa(void)

void FUN_14118a0fa(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = (ulonglong)*(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    if (0 < (int)*(uint *)(param_1 + 1)) {
      lVar4 = uVar3 * 0x1b8 + -0xe8;
      do {
        if (*(longlong *)(*param_1 + lVar4) == 0) {
LAB_14118a199:
          FUN_148e41d12(param_1,(int)uVar3 + -1);
          FUN_148e41d82(param_1);
        }
        else {
          cVar2 = FUN_14118a1ae(*param_1 + lVar4,local_38);
          if (cVar2 == '\0') goto LAB_14118a199;
        }
        lVar4 = lVar4 + -0x1b8;
        bVar1 = 1 < uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118a1ae FUN_14118a1ae body=349 status=ok
// SIG undefined FUN_14118a1ae(void)

longlong FUN_14118a1ae(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = (longlong)(int)param_2[1];
    if (lVar1 != 0) {
      param_2 = (longlong *)*param_2;
      plVar6 = param_2 + lVar1;
LAB_14118a1f3:
      do {
        plVar4 = param_2 + 1;
        lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*param_2 == lVar2);
        if (*param_2 == lVar2) break;
        param_2 = plVar4;
      } while (plVar4 != plVar6);
      goto LAB_14118a208;
    }
    lVar2 = FUN_145825ec4();
    if (lVar2 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_145825ecc(lVar2,&local_58);
      lVar2 = local_58;
      lVar1 = (longlong)(int)uStack_50;
      if (lVar1 != 0) {
        lVar5 = 0;
        do {
          if (*(longlong *)(lVar2 + lVar5) != 0) {
            puVar7 = *(undefined4 **)(*(longlong *)(lVar2 + lVar5) + 8);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = &DAT_14c9485f0;
            }
            if (DAT_14c947fe0 == 0) {
              lVar3 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar3);
              DAT_14c947fe0 = lVar3;
            }
            FUN_140045924(DAT_14c947fe0,local_60,puVar7,1);
            FUN_1409d9716(param_2,local_60);
          }
          lVar5 = lVar5 + 8;
        } while (lVar1 * 8 != lVar5);
      }
      if (local_58 != 0) {
        FUN_1400020a8(local_58);
      }
      lVar1 = (longlong)(int)param_2[1];
      if (lVar1 != 0) {
        param_2 = (longlong *)*param_2;
        plVar6 = param_2 + lVar1;
        lVar2 = *param_1;
        goto LAB_14118a1f3;
      }
    }
  }
  lVar1 = 0;
LAB_14118a208:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14118a30c FUN_14118a30c body=893 status=ok
// SIG undefined FUN_14118a30c(void)

void FUN_14118a30c(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar6 = (**(code **)(*param_1 + 0x300))();
  if (cVar6 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar14 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar14;
    if ((int)param_1[0x54] == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar13 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar7 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar10 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar13) || (local_78 = lVar7, plStack_60 != plVar14)) {
      do {
        local_78 = lVar7;
        lVar7 = *local_90;
        lVar8 = *(longlong *)(lVar7 + 0x10 + (longlong)iVar10 * 0x20);
        if (lVar8 != 0) {
          if (param_3 != '\0') {
            FUN_144837e54(lVar8,0);
            lVar8 = *(longlong *)(lVar7 + (longlong)iVar10 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar8 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar8 + 0x48) & 0x6b) == 3)) &&
             (plVar4 = *(longlong **)(lVar8 + 0x30), plVar4 != (longlong *)0x0)) {
            lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar8 = FUN_14118a68a();
            if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) {
              (*(code *)*local_98)(local_98[1],plVar4);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar10 = local_78._4_4_;
        lVar7 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar14 || local_78._4_4_ != iVar13));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar12 = 1;
      uVar16 = 0xffffffff;
      iVar13 = 0;
      iVar15 = 0;
      iVar9 = 0;
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar12 = (ulonglong)local_90 >> 0x20;
      iVar13 = (int)param_1[0x3e];
      iVar10 = (int)local_90;
      uVar16 = (uint)uStack_80;
      iVar9 = uStack_80._4_4_;
      iVar15 = (uint)local_78;
    }
    plVar1 = local_88;
    plVar14 = param_1;
    if (iVar9 != iVar13 || local_88 != local_a0) {
      do {
        local_a8 = plVar14;
        plVar14 = *(longlong **)(local_a8[0x39] + 0x10 + (longlong)iVar9 * 0x20);
        if (plVar14 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar8 = FUN_14118a68a();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar14);
          }
        }
        uVar16 = uVar16 & ~(uint)uVar12;
        plVar14 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar7 = (longlong)iVar10;
        uVar11 = *(uint *)((longlong)plVar14 + lVar7 * 4) & uVar16;
        if (uVar11 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar5 = iVar9;
          if (iVar9 < iVar10) {
            iVar5 = iVar10;
          }
          if (iVar10 < iVar9) {
            lVar8 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar14 + lVar8 * 4 + lVar7 * 4 + 4);
              if (uVar11 != 0) {
                iVar10 = iVar10 + (int)lVar8 + 1;
                uVar16 = 0xffffffff;
                goto LAB_14118a493;
              }
              iVar15 = iVar15 + 0x20;
              lVar8 = lVar8 + 1;
            } while (iVar5 - lVar7 != lVar8);
            uVar16 = 0xffffffff;
            iVar10 = iVar5;
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar3;
        }
        else {
LAB_14118a493:
          uVar12 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar12 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar9 = (iVar15 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
        }
        plVar14 = local_a8;
      } while (iVar9 != iVar13 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118a68a FUN_14118a68a body=57 status=ok
// SIG undefined FUN_14118a68a(void)

void FUN_14118a68a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba6100 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba6100 = FUN_140002ddd(FUN_1465c5f2c,uVar1,L"GbxUICharacterInfoDef");
  }
  return;
}



// FUNCTION 14118a6c4 FUN_14118a6c4 body=67 status=ok
// SIG undefined FUN_14118a6c4(void)

void FUN_14118a6c4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118a708 FUN_14118a708 body=83 status=ok
// SIG undefined FUN_14118a708(void)

undefined8 FUN_14118a708(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_21;
  local_20 = &LAB_1427897d8;
  FUN_14118a75c();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118a75c FUN_14118a75c body=414 status=ok
// SIG undefined FUN_14118a75c(void)

longlong FUN_14118a75c(longlong param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [40];
  code *local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined2 uStack_ca;
  longlong local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined1 local_60 [24];
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_88 = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a0 = local_c8;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_a8 = &uStack_ca;
  uStack_ca = 0;
  local_98 = (undefined8 *)&local_d0;
  local_d0 = 0;
  local_d8 = &local_a8;
  local_e0 = FUN_14278966c;
  local_90 = param_3;
  FUN_144a2afa0(param_2 + 0x10,local_60,&local_e0,0);
  if (local_48 == '\x01') {
    local_118 = (undefined4)local_b8;
    uStack_114 = local_b8._4_4_;
    uStack_110 = (undefined4)uStack_b0;
    uStack_10c = uStack_b0._4_4_;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_14118a8fb(local_108);
    FUN_141151cf4(&local_a8,local_108,0);
    FUN_140079082(param_2,local_60,&local_a8);
    if ((((((local_a8._4_4_ != 0 || (int)local_a8 != 0) || (int)local_a0 != 0) ||
           local_a0._4_4_ != 0) && (pcVar1 = (code *)*local_98, pcVar1 != FUN_1400791ec)) &&
        (pcVar1 != FUN_14477b052)) && (pcVar1 != FUN_1400791cc)) {
      (*pcVar1)(&local_98,0);
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118a8fb FUN_14118a8fb body=527 status=ok
// SIG undefined FUN_14118a8fb(void)

undefined8 * FUN_14118a8fb(undefined8 *param_1,longlong *param_2)

{
  short sVar1;
  wchar_t *_Str1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 auStack_78 [32];
  short *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = (int)param_2[1];
  uVar6 = 1;
  if (iVar3 - 2U < 0x7fffffff) {
    _Str1 = (wchar_t *)*param_2;
    if (*_Str1 == L'+') {
      uVar6 = 0;
      FUN_145825fe6(param_2,0,0);
    }
    else {
      uVar5 = iVar3 - 4;
      if (uVar5 < 0x7ffffffd) {
        iVar2 = wcsncmp(_Str1,L"...",3);
        if (iVar2 == 0) {
          memmove(_Str1,_Str1 + 3,(ulonglong)(iVar3 - 3) * 2);
          *(int *)(param_2 + 1) = (int)param_2[1] + -3;
          uVar6 = 3;
        }
        else {
          iVar3 = wcscmp(_Str1 + uVar5,L"...");
          if (iVar3 == 0) {
            FUN_14496493a(param_2,uVar5,3,0);
            uVar6 = 2;
          }
        }
      }
    }
  }
  local_50._0_4_ = (int)param_2[1];
  local_58 = (short *)*param_2;
  if (((int)local_50 - 2U < 0x7fffffff) && (*local_58 == 0x2d)) {
    FUN_145825fe6(param_2,0,0);
    local_50._0_4_ = (int)param_2[1];
    local_58 = (short *)*param_2;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  if ((int)local_50 - 3U < 0x7ffffffe) {
    sVar1 = *local_58;
    if (((sVar1 == 0x27) || (sVar1 == 0x22)) &&
       (local_58[(ulonglong)((int)local_50 - 1) - 1] == sVar1)) {
      FUN_145825fe6(param_2,0,0);
      iVar3 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar3 = 0;
      }
      FUN_145825fe6(param_2,iVar3 + -1,0);
      local_58 = (short *)*param_2;
      local_50._0_4_ = (int)param_2[1];
    }
  }
  *param_2 = 0;
  local_50._4_4_ = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14118ab0c(&local_58);
  *param_1 = local_58;
  local_58 = (short *)0x0;
  *(int *)(param_1 + 1) = (int)local_50;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_50._4_4_;
  local_50 = 0;
  param_1[2] = local_48;
  local_48 = 0;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_40._4_4_;
  uStack_40 = 0;
  *(undefined1 *)(param_1 + 4) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x21) = uVar4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118ab0c FUN_14118ab0c body=366 status=ok
// SIG undefined FUN_14118ab0c(void)

void FUN_14118ab0c(undefined8 *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ushort *puVar8;
  short *psVar9;
  uint uVar10;
  short *psVar11;
  short sVar12;
  uint uVar13;
  ulonglong uVar14;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (ushort *)*param_1;
  }
  uVar2 = *puVar8;
  while (uVar2 != 0) {
    if (uVar2 < 0x80) {
      sVar12 = *(short *)(&DAT_149e34710 + (ulonglong)uVar2 * 4);
    }
    else {
      sVar12 = 0;
    }
    *puVar8 = sVar12 + uVar2;
    uVar2 = puVar8[1];
    puVar8 = puVar8 + 1;
  }
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_141701710(plVar1,0);
  }
  iVar7 = *(int *)(param_1 + 1);
  psVar9 = (short *)*param_1;
  psVar11 = psVar9;
  if (iVar7 == 0) {
    psVar11 = &DAT_149dfb77a;
  }
  do {
    sVar12 = *psVar11;
    psVar11 = psVar11 + 1;
  } while (0xff80 < (ushort)(sVar12 - 0x80U));
  if (sVar12 == 0) {
    uVar10 = iVar7 - 1;
    if (iVar7 == 0) {
      uVar10 = 0;
    }
    if (0 < (int)uVar10) {
      iVar3 = *(int *)(param_1 + 3);
      uVar13 = uVar10 + iVar3 + 1;
      *(uint *)(param_1 + 3) = uVar13;
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar3) <= uVar10) {
        FUN_144761492(plVar1);
        uVar13 = *(uint *)(param_1 + 3);
        iVar7 = *(int *)(param_1 + 1);
        psVar9 = (short *)*param_1;
      }
      uVar10 = iVar7 + (uint)(iVar7 == 0);
      if (iVar7 == 0) {
        psVar9 = &DAT_149dfb77a;
      }
      if ((int)uVar13 < (int)uVar10) {
        uVar10 = uVar13;
      }
      if (0 < (int)uVar10) {
        lVar4 = *plVar1;
        uVar14 = 0;
        bVar6 = 0;
        do {
          bVar5 = bVar6;
          uVar2 = psVar9[uVar14];
          *(char *)(lVar4 + uVar14) = (char)uVar2;
          uVar14 = uVar14 + 1;
          bVar6 = bVar5 | 0x7f < uVar2;
        } while (uVar10 != uVar14);
        if ((bool)(bVar5 | 0x7f < uVar2)) {
          uVar14 = 0;
          do {
            if (0x7f < (ushort)psVar9[uVar14]) {
              *(undefined1 *)(lVar4 + uVar14) = 0x3f;
            }
            uVar14 = uVar14 + 1;
          } while (uVar10 != uVar14);
          thunk_FUN_140e0237d();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14118ac82 FUN_14118ac82 body=245 status=ok
// SIG undefined FUN_14118ac82(void)

undefined8 * FUN_14118ac82(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140bf6aa4();
  *param_1 = &PTR_FUN_14b3e3fa0;
  param_1[5] = &PTR_FUN_14b3e45d0;
  param_1[6] = &PTR_LAB_14b3e4610;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  *(undefined8 *)((longlong)param_1 + 0x524) = 0x4234000043fa0000;
  *(undefined1 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xa6] = 0;
  *(undefined1 *)(param_1 + 0xa7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0xaa] = DAT_14c8464e0;
  param_1[0xab] = uVar1;
  param_1[0xac] = DAT_14c8464f0;
  param_1[0xad] = 0;
  *(undefined2 *)(param_1 + 0xae) = 0;
  param_1[0xb1] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xaf] = DAT_14c8464e0;
  param_1[0xb0] = uVar1;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x40a00000;
  return param_1;
}



// FUNCTION 14118ad78 FUN_14118ad78 body=160 status=ok
// SIG undefined FUN_14118ad78(void)

ulonglong FUN_14118ad78(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  bool bVar6;
  
  lVar3 = param_1;
  if ((*(byte *)(param_2 + 10) & 2) == 0) {
LAB_14118ad85:
    uVar5 = 0;
  }
  else {
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) goto LAB_14118ad85;
    }
    lVar3 = *(longlong *)(param_1 + 0xa8);
    lVar4 = lVar3;
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
      if (lVar3 == 0) {
        lVar3 = FUN_1448abda6();
      }
      uVar2 = *(undefined8 *)(lVar3 + 0x30);
    }
    else {
      do {
        if ((*(uint *)(lVar4 + 8) & 0x30) != 0) goto LAB_14118ad85;
        plVar1 = (longlong *)(lVar4 + 0x20);
        lVar4 = *plVar1;
      } while (*plVar1 != 0);
      uVar2 = FUN_144a79cc8(lVar3);
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    bVar6 = true;
    if ((*(byte *)(param_2 + 10) & 4) == 0) {
      bVar6 = *(char *)(param_2 + 0xb) != '\0';
    }
    FUN_140cbebe8(param_2,bVar6);
    FUN_1402eb876(param_2,uVar2);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14118ae26 FUN_14118ae26 body=104 status=ok
// SIG undefined FUN_14118ae26(void)

undefined8 * FUN_14118ae26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0f9070;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14118ae8e(param_1 + 0xe);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14118ae8e FUN_14118ae8e body=55 status=ok
// SIG undefined FUN_14118ae8e(void)

void FUN_14118ae8e(longlong *param_1)

{
  FUN_14118aec6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14118aec6 FUN_14118aec6 body=412 status=ok
// SIG undefined FUN_14118aec6(void)

void FUN_14118aec6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
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
      lVar2 = *local_78 + (longlong)iStack_5c * 0x58;
      FUN_14582617e(lVar2 + 0x40);
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e91948(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118b064 FUN_14118b064 body=37 status=ok
// SIG undefined FUN_14118b064(void)

void FUN_14118b064(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14118b08a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14118b08a FUN_14118b08a body=237 status=ok
// SIG undefined FUN_14118b08a(void)

undefined4 FUN_14118b08a(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_98 [32];
  char local_78 [16];
  longlong *local_68;
  undefined4 local_50 [2];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = '\0';
  local_50[0] = 0;
  FUN_1456bb102(local_78,param_1);
  FUN_1447c3578(param_1 + 0x8a0,local_48,local_78);
  uVar3 = FUN_1405d5f74(local_48);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar4 = local_48;
    if (0x18 < local_30) {
      pppuVar4 = (undefined8 ***)local_48[0];
    }
    (*pcVar2)(pppuVar4);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_1448173f8(local_50);
  if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118b178 FUN_14118b178 body=509 status=ok
// SIG undefined FUN_14118b178(void)

void FUN_14118b178(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58 [3];
  undefined8 local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar3 = *(byte **)(param_2 + 0x20);
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_40);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_40);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_40[0] = *(undefined8 *)(pbVar3 + 1);
        pbVar3 = pbVar3 + 9;
        *(byte **)(param_2 + 0x20) = pbVar3;
        puVar5 = (undefined8 *)0x0;
        goto LAB_14118b216;
      }
      (*pcVar2)(uVar1,param_2,local_40);
    }
  }
  pbVar3 = *(byte **)(param_2 + 0x20);
  puVar5 = *(undefined8 **)(param_2 + 0x38);
LAB_14118b216:
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar3 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar3 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar3];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_58[0] = *(undefined8 *)(pbVar3 + 1);
      *(byte **)(param_2 + 0x20) = pbVar3 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,local_58);
    }
  }
  puVar4 = local_40;
  if (puVar5 != (undefined8 *)0x0) {
    puVar4 = puVar5;
  }
  puVar5 = local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14118b376(param_1,puVar4,puVar5);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118b376 FUN_14118b376 body=273 status=ok
// SIG undefined FUN_14118b376(void)

void FUN_14118b376(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x660);
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
    lVar7 = *(longlong *)(param_1 + 0x660);
  }
  else if (lVar7 == 0) {
    return;
  }
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  dVar1 = *(double *)(lVar7 + 0x200);
  dVar2 = *(double *)(lVar7 + 0x208);
  dVar3 = *(double *)(lVar7 + 0x210);
  dVar4 = *(double *)(lVar7 + 0x218);
  dVar5 = *(double *)(lVar7 + 0x220);
  dVar6 = *(double *)(lVar7 + 0x228);
  *param_2 = dVar1 - dVar4;
  param_2[1] = dVar2 - dVar5;
  param_2[2] = dVar3 - dVar6;
  *param_3 = dVar1 + dVar4;
  param_3[1] = dVar2 + dVar5;
  param_3[2] = dVar3 + dVar6;
  return;
}



// FUNCTION 14118b488 FUN_14118b488 body=130 status=ok
// SIG undefined FUN_14118b488(void)

undefined8 * FUN_14118b488(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_149e2c060;
  FUN_140679a12();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c867d48);
  FUN_140679996();
  iVar1 = DAT_14c867dc0;
  lVar3 = (longlong)(int)DAT_14c867dc0;
  DAT_14c867dc0 = DAT_14c867dc0 + 1;
  if (DAT_14c867dc4 < DAT_14c867dc0) {
    FUN_145826254(&DAT_14c867d78,iVar1);
  }
  puVar2 = &DAT_14c867d78;
  if (DAT_14c867db8 != (undefined8 *)0x0) {
    puVar2 = DAT_14c867db8;
  }
  puVar2[lVar3] = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c867d48);
  return param_1;
}



// FUNCTION 14118b50a FUN_14118b50a body=46 status=ok
// SIG undefined FUN_14118b50a(void)

byte FUN_14118b50a(ushort param_1)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)param_1 * 0x3c;
  return (byte)((uint)(&DAT_14ca814c8)[(ulonglong)param_1 * 0xf] >> 0x1d) &
         *(byte *)((longlong)&DAT_14ca814d8 + lVar1 + 3) >> 4 &
         (byte)((*(uint *)(&DAT_14ca814cc + lVar1) & 8) >> 3);
}



// FUNCTION 14118b53e FUN_14118b53e body=228 status=ok
// SIG undefined FUN_14118b53e(void)

longlong FUN_14118b53e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac6730 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14788e353;
    local_40 = &LAB_14638e23f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 0x10;
    local_68 = 0x2e90;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerCameraManager",&DAT_14cac6730,FUN_14638e218);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac6730;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118b628 FUN_14118b628 body=228 status=ok
// SIG undefined FUN_14118b628(void)

longlong FUN_14118b628(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad41c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c12d8;
    local_38 = &LAB_147a3ec67;
    local_40 = FUN_1434a7543;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x250;
    FUN_14081cfa3(L"/Script/Engine",L"CurveLinearColor",&DAT_14cad41c0,FUN_1463c15a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad41c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118b70e FUN_14118b70e body=31 status=ok
// SIG undefined FUN_14118b70e(void)

undefined8 FUN_14118b70e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14118b72e FUN_14118b72e body=228 status=ok
// SIG undefined FUN_14118b72e(void)

longlong FUN_14118b72e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf3288 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_148f48581;
    local_40 = FUN_146665a42;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/MeshModelingTools",L"ProceduralShapeToolProperties",&DAT_14cbf3288,
                  &DAT_148f48580);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf3288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118b814 FUN_14118b814 body=1473 status=ok
// SIG undefined FUN_14118b814(void)

void FUN_14118b814(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  uint local_c0;
  uint uStack_bc;
  undefined8 uStack_b8;
  void *local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 *local_78;
  longlong lStack_70;
  longlong local_68;
  byte local_58;
  char cStack_57;
  undefined6 uStack_56;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 == '\0') goto LAB_14118bc3e;
  uStack_bc = 0;
  if (param_3 == 0) {
    local_c0 = 0;
    uVar3 = 0;
  }
  else {
    local_c0 = *(uint *)(param_3 + 0xc);
    if ((int)local_c0 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((local_c0 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_c0 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar3 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar3 = *(uint *)(lVar12 + 0x10);
      bVar14 = uVar3 == 0;
      if (bVar14) {
        *(uint *)(lVar12 + 0x10) = uVar9;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar3 = uVar9;
      }
    }
  }
  plVar4 = param_1 + 0xd;
  plVar10 = (longlong *)param_1[0x1d];
  if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
    plVar10 = plVar4;
  }
  iVar11 = 0;
  uStack_bc = uVar3;
  uStack_b8 = param_4;
  if ((longlong)(int)param_1[0x1e] != 0) {
    lVar12 = (longlong)(int)param_1[0x1e] << 4;
    do {
      if ((plVar10[1] == uStack_b8) && (cVar2 = FUN_14038330a(plVar10,&local_c0), cVar2 != '\0'))
      goto LAB_14118bc3e;
      plVar10 = plVar10 + 2;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
    iVar11 = (int)param_1[0x1e];
  }
  *(uint *)(param_1 + 0x1e) = iVar11 + 1U;
  if (*(uint *)((longlong)param_1 + 0xf4) < iVar11 + 1U) {
    FUN_148ced538(plVar4,iVar11);
  }
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[0x1d];
  }
  puVar1 = (uint *)(plVar4 + (longlong)iVar11 * 2);
  *puVar1 = local_c0;
  puVar1[1] = uStack_bc;
  puVar1[2] = (uint)uStack_b8;
  puVar1[3] = uStack_b8._4_4_;
  plVar4 = (longlong *)FUN_14017698e(param_2);
  uVar6 = DAT_14cbc3e88;
  if (plVar4 == (longlong *)0x0) {
    if (*(char *)(param_2 + 0x178) != '\x03') goto LAB_14118bc3e;
    local_a0 = param_4;
    FUN_140056680(&local_78,L"Radio");
    if (param_3 != 0) {
      local_98 = *(undefined2 **)(param_3 + 0x18);
      FUN_1400021e4(&local_98,&local_58);
      puVar8 = local_78;
      lVar12 = (longlong)(int)lStack_70;
      local_b0 = (void *)0x0;
      local_a8 = (int)lStack_70;
      FUN_1446dd670(&local_b0,(uint)(lVar12 == 0) + (int)lStack_70 + 1,0);
      if (lVar12 != 0) {
        memcpy(local_b0,puVar8,lVar12 * 2);
      }
      FUN_1400020e8(&local_b0,&DAT_149e01f60,1);
      FUN_1401c7f3e(&local_98,&local_b0,&local_58);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_98;
      lStack_70 = uStack_90;
      local_98 = (undefined2 *)0x0;
      uStack_90 = 0;
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT62(uStack_56,CONCAT11(cStack_57,local_58)) != 0) {
        FUN_1400020a8();
      }
    }
    if (param_4 != 0) {
      FUN_1400021e4(&local_a0,&local_58);
      FUN_1449b8608(&local_b0,&local_78,&DAT_149e01f60);
      FUN_1401c7f3e(&local_98,&local_b0,&local_58);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_98;
      lStack_70 = uStack_90;
      local_98 = (undefined2 *)0x0;
      uStack_90 = 0;
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (CONCAT62(uStack_56,CONCAT11(cStack_57,local_58)) != 0) {
        FUN_1400020a8();
      }
    }
    puVar8 = local_78;
    if ((int)lStack_70 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_c8,puVar8,1);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_78 = (undefined2 *)0x0;
    lStack_70 = 0;
    local_68 = 0;
    lVar12 = FUN_141284384(param_2,&local_78,local_c8,uVar6);
    if (lVar12 == 0) goto LAB_14118bc3e;
    plVar4 = (longlong *)(lVar12 + 0x110);
  }
  local_78 = (undefined2 *)0x0;
  lStack_70 = 0;
  local_68 = 0;
  lVar12 = FUN_14118bdd6();
  bVar14 = true;
  if (lVar12 == 0) {
LAB_14118bbc1:
    bVar13 = true;
LAB_14118bbc3:
    uVar6 = FUN_14043db3a();
    lStack_70 = FUN_14477b664(uVar6);
    if (bVar14) {
LAB_14118bbda:
      local_68 = 0;
      if ((((bVar13) || (lStack_70 == 0)) ||
          (plVar10 = *(longlong **)(lStack_70 + 0xb8), plVar10 == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar2 == '\0')) goto LAB_14118bc3e;
      uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
      local_68 = FUN_144aff482(uVar6,&local_78);
      if (local_68 == 0) goto LAB_14118bc3e;
    }
  }
  else {
    lVar12 = lVar12 + 0x98;
    lVar5 = FUN_14118be1e(lVar12);
    if ((lVar5 == 0) || (lVar5 = FUN_14118be1e(lVar12), lVar5 == 0)) goto LAB_14118bbc1;
    lVar5 = *(longlong *)(param_2 + 0x1c8);
    if (lVar5 == 0) {
      local_88 = DAT_14c8464f0;
      local_98 = (undefined2 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_98 = *(undefined2 **)(lVar5 + 0x260);
      uStack_90 = *(longlong *)(lVar5 + 0x268);
      local_88 = *(undefined8 *)(lVar5 + 0x270);
    }
    uVar6 = FUN_14118be1e(lVar12);
    uVar7 = FUN_1405f939e(param_1);
    uVar6 = FUN_1402a1570(uVar7,uVar6);
    FUN_1402a10ba(&local_58,uVar7,uVar6,&local_98);
    uVar3 = 0;
    if (cStack_57 != '\0') {
      uVar3 = (uint)local_58;
    }
    lVar5 = FUN_14118be1e(lVar12);
    if (*(int *)(lVar5 + 0x68) <= (int)uVar3) goto LAB_14118bbc1;
    lVar12 = FUN_14118be1e(lVar12);
    lVar12 = *(longlong *)(lVar12 + 0x60);
    lVar5 = (ulonglong)uVar3 * 0x38;
    puVar8 = *(undefined2 **)(lVar12 + 0x18 + lVar5);
    uVar6 = FUN_14477b664(*(undefined8 *)(lVar12 + 0x20 + lVar5));
    uVar6 = FUN_14477b664(uVar6);
    lVar12 = *(longlong *)(lVar12 + 0x28 + lVar5);
    bVar13 = puVar8 == (undefined2 *)0x0;
    local_78 = puVar8;
    uVar6 = FUN_14477b664(uVar6);
    lStack_70 = FUN_14477b664(uVar6);
    bVar14 = lVar12 == 0;
    local_68 = lVar12;
    if (lStack_70 == 0) goto LAB_14118bbc3;
    if (lVar12 == 0) goto LAB_14118bbda;
  }
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_78);
LAB_14118bc3e:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118bdd6 FUN_14118bdd6 body=72 status=ok
// SIG undefined FUN_14118bdd6(void)

longlong FUN_14118bdd6(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1449e3f1e();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x428), lVar1 != 0)) {
    lVar2 = FUN_14118bffa();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14118be1e FUN_14118be1e body=246 status=ok
// SIG undefined FUN_14118be1e(void)

longlong FUN_14118be1e(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_14118bf14();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 14118bf14 FUN_14118bf14 body=228 status=ok
// SIG undefined FUN_14118bf14(void)

longlong FUN_14118bf14(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbf2f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585df80;
    local_38 = &LAB_148ca7b47;
    local_40 = FUN_1466115e5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldPainterLayer_RadioStation",&DAT_14cbbf2f0,
                  &DAT_148ca7b46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf2f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118bffa FUN_14118bffa body=228 status=ok
// SIG undefined FUN_14118bffa(void)

longlong FUN_14118bffa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae6a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145996e92;
    local_38 = &LAB_148c403a5;
    local_40 = FUN_145b21ad4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakRadioConfig",&DAT_14cbae6a8,&DAT_148c403a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae6a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118c0e0 FUN_14118c0e0 body=750 status=ok
// SIG undefined FUN_14118c0e0(void)

void FUN_14118c0e0(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_98 [40];
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*param_2 == '\x01') {
      FUN_1447a97f4(&local_70,param_2 + 0x10);
      if (0 < local_6c) {
        lVar9 = 0;
        uVar4 = 0;
        iVar2 = local_6c;
        iVar3 = DAT_14c948000;
        do {
          bVar12 = local_70 != 0;
          bVar13 = local_70 != iVar3;
          piVar6 = &DAT_14c948620;
          piVar7 = (int *)&DAT_14c948618;
          if (bVar13 && bVar12) {
            puVar8 = local_68;
            if (0 < local_4c) {
              puVar8 = local_58;
            }
            if (1 < iVar2) {
              puVar8 = local_58;
            }
            piVar6 = (int *)(puVar8 + lVar9 + 8);
            piVar7 = (int *)(puVar8 + lVar9);
          }
          if ((*piVar7 == DAT_14cb7beb0) && (*piVar6 == DAT_14cb7beb8)) {
LAB_14118c3ae:
            FUN_1402b5374(&local_70,uVar4 & 0xffffffff,0);
            iVar2 = local_6c;
            iVar3 = DAT_14c948000;
          }
          else {
            piVar6 = &DAT_14c948620;
            piVar7 = (int *)&DAT_14c948618;
            if (bVar13 && bVar12) {
              puVar8 = local_68;
              if (0 < local_4c) {
                puVar8 = local_58;
              }
              if (1 < iVar2) {
                puVar8 = local_58;
              }
              piVar6 = (int *)(puVar8 + lVar9 + 8);
              piVar7 = (int *)(puVar8 + lVar9);
            }
            if ((*piVar7 == DAT_14cb7bec8) && (*piVar6 == DAT_14cb7bed0)) goto LAB_14118c3ae;
            piVar6 = &DAT_14c948620;
            piVar7 = (int *)&DAT_14c948618;
            if (bVar13 && bVar12) {
              puVar8 = local_68;
              if (0 < local_4c) {
                puVar8 = local_58;
              }
              if (1 < iVar2) {
                puVar8 = local_58;
              }
              piVar6 = (int *)(puVar8 + lVar9 + 8);
              piVar7 = (int *)(puVar8 + lVar9);
            }
            if ((*piVar7 == DAT_14cb7bee0) && (*piVar6 == DAT_14cb7bee8)) goto LAB_14118c3ae;
            piVar6 = &DAT_14c948620;
            piVar7 = (int *)&DAT_14c948618;
            if (bVar13 && bVar12) {
              puVar8 = local_68;
              if (0 < local_4c) {
                puVar8 = local_58;
              }
              if (1 < iVar2) {
                puVar8 = local_58;
              }
              piVar6 = (int *)(puVar8 + lVar9 + 8);
              piVar7 = (int *)(puVar8 + lVar9);
            }
            if ((*piVar7 == DAT_14cb7bef8) && (*piVar6 == DAT_14cb7bf00)) goto LAB_14118c3ae;
            piVar6 = &DAT_14c948620;
            piVar7 = (int *)&DAT_14c948618;
            if (bVar13 && bVar12) {
              puVar8 = local_68;
              if (0 < local_4c) {
                puVar8 = local_58;
              }
              if (1 < iVar2) {
                puVar8 = local_58;
              }
              piVar6 = (int *)(puVar8 + lVar9 + 8);
              piVar7 = (int *)(puVar8 + lVar9);
            }
            if ((*piVar7 == DAT_14cb7bf10) && (*piVar6 == DAT_14cb7bf18)) goto LAB_14118c3ae;
          }
          uVar4 = uVar4 + 1;
          lVar9 = lVar9 + 0xc;
        } while ((longlong)uVar4 < (longlong)iVar2);
      }
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_70 = *(int *)(param_2 + 0x10);
    }
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    uVar4 = (longlong)local_70 & (longlong)(int)param_1[9] - 1U;
    lVar9 = (longlong)*(int *)((longlong)plVar10 + uVar4 * 4);
    if (lVar9 != -1) {
      lVar9 = lVar9 * 0xe8 + *param_1;
      cVar1 = FUN_14493b798(lVar9,param_2);
      if (cVar1 == '\0') {
        do {
          lVar5 = lVar9;
          lVar9 = (longlong)*(int *)(lVar5 + 0xe0);
          if (lVar9 == -1) goto LAB_14118c342;
          lVar9 = lVar9 * 0xe8 + *param_1;
          cVar1 = FUN_14493b798(lVar9,param_2);
        } while (cVar1 == '\0');
        puVar11 = (undefined4 *)(lVar5 + 0xe0);
      }
      else {
        puVar11 = (undefined4 *)((longlong)plVar10 + uVar4 * 4);
      }
      FUN_1458268ee(param_1,*puVar11);
    }
  }
LAB_14118c342:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118c3d0 FUN_14118c3d0 body=142 status=ok
// SIG undefined FUN_14118c3d0(void)

void FUN_14118c3d0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_14118c45e(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x40) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14118c40a;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14118c40a:
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14118c45e FUN_14118c45e body=55 status=ok
// SIG undefined FUN_14118c45e(void)

void FUN_14118c45e(longlong *param_1)

{
  FUN_14118c496(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14118c496 FUN_14118c496 body=121 status=ok
// SIG undefined FUN_14118c496(void)

void FUN_14118c496(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14118c510 FUN_14118c510 body=508 status=ok
// SIG undefined FUN_14118c510(void)

void FUN_14118c510(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [48];
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  float local_38;
  byte bStack_34;
  undefined2 uStack_33;
  undefined4 uStack_31;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)0x0;
  if (param_2[3] != 0) {
    plVar3 = (longlong *)param_2[4];
  }
  lVar1 = (**(code **)(*plVar3 + 0x20))();
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x7c) & 1) != 0)) &&
     ((lVar2 = FUN_1402179b4(param_2 + 0x95), lVar2 == 0 || (*(char *)(lVar2 + 0x18) < '\0')))) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x3d0) != *(longlong *)(lVar1 + 0x250)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0xf48) != *(longlong *)(lVar1 + 0x250))) {
      local_b0 = 0;
      local_a8 = 0x3002;
      local_a0 = 0;
      local_68 = 0;
      local_60 = 0x200000000;
      uStack_58 = 0;
      local_38 = 0.0;
      bStack_34 = 0;
      uStack_33 = 0;
      uStack_31 = 0;
      local_38 = (float)(**(code **)(*param_2 + 0x140))
                                  (param_2,(*(byte *)(param_2 + 0x9b) & 0xfd) == 0);
      uVar5 = -(uint)(0.0 < *(float *)(param_2 + 0xab));
      local_38 = local_38 / (float)(~uVar5 & 0x3f800000 | (uint)*(float *)(param_2 + 0xab) & uVar5);
      FUN_14485c47a(&uStack_58,param_2[0x8f]);
      local_40 = param_2[0x41];
      local_50 = (undefined4)param_2[0x3f];
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1fc);
      uStack_48 = (undefined4)param_2[0x40];
      uStack_44 = *(undefined4 *)((longlong)param_2 + 0x204);
      plVar3 = (longlong *)param_2[10];
      plVar4 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        lVar1 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar2 = FUN_14018fb44();
        if ((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)0x0;
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30) {
            plVar4 = plVar3;
          }
        }
      }
      FUN_144a79b68(&local_b8,plVar4);
      if (local_b0 != local_b8) {
        local_a0 = 0;
      }
      local_b0 = local_b8;
      FUN_14118c70e(local_98,param_2 + 0xb);
      bStack_34 = bStack_34 | 4;
      FUN_140ce151a(param_1,&local_b0);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118c70e FUN_14118c70e body=52 status=ok
// SIG undefined FUN_14118c70e(void)

longlong FUN_14118c70e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar1 = param_2;
    }
    FUN_1400709d4(param_1,lVar1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  }
  return param_1;
}



// FUNCTION 14118c742 FUN_14118c742 body=344 status=ok
// SIG undefined FUN_14118c742(void)

void FUN_14118c742(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_14118c89c(param_2);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (DAT_14cab2770 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1475472e1;
      local_50 = &LAB_14633c0b5;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x40;
      FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
      if (DAT_14cab2770 == 0) goto LAB_14118c894;
    }
    if ((*(int *)(DAT_14cab2770 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8) ==
        DAT_14cab2770 + 0x30)) {
      lVar3 = *param_1;
      goto LAB_14118c7a1;
    }
  }
LAB_14118c894:
  lVar3 = 0;
LAB_14118c7a1:
  uVar2 = FUN_1409095b8(&DAT_14cab2788,lVar3);
  FUN_1447ba426(&DAT_14cab2870,uVar1,uVar2);
  FUN_1447ba426(&DAT_14cab2838,uVar2,uVar1);
  DAT_14cab2900 = DAT_14cab2900 + 1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118c89c FUN_14118c89c body=330 status=ok
// SIG undefined FUN_14118c89c(void)

ushort FUN_14118c89c(ushort param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  ushort local_34;
  ushort local_32;
  ushort *local_30;
  ushort *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  uVar5 = DAT_14cab2830;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_32 = param_1;
  if (DAT_14cab27e0 != DAT_14cab280c) {
    puVar6 = &DAT_14cab2810;
    if (DAT_14cab2818 != (undefined *)0x0) {
      puVar6 = DAT_14cab2818;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(DAT_14cab2820 - 1U & (uint)param_1) * 4);
    while (iVar3 != -1) {
      puVar1 = (ushort *)(DAT_14cab27d8 + (longlong)iVar3 * 0xc);
      if (*puVar1 == param_1) {
        if ((puVar1 != (ushort *)0x0) && (puVar1 + 1 != (ushort *)0x0)) {
          uVar2 = puVar1[1];
          goto LAB_14118c9b6;
        }
        break;
      }
      iVar3 = *(int *)(puVar1 + 2);
    }
  }
  lVar7 = (longlong)(int)DAT_14cab2830;
  DAT_14cab2830 = DAT_14cab2830 + 1;
  if (DAT_14cab2834 < DAT_14cab2830) {
    FUN_1457577de(&DAT_14cab2828,uVar5);
  }
  lVar4 = DAT_14cab2828;
  *(undefined8 *)(DAT_14cab2828 + lVar7 * 0xc) = 0;
  *(ushort *)(lVar4 + 8 + lVar7 * 0xc) = param_1;
  local_34 = (ushort)uVar5;
  FUN_1409098b2(&DAT_14cab2838,uVar5);
  FUN_1409098b2(&DAT_14cab2870,uVar5);
  local_30 = &local_32;
  local_28 = &local_34;
  FUN_14118c9e8(local_1c);
  FUN_1409098b2(&DAT_14cab28a8,local_34);
  DAT_14cab2900 = DAT_14cab2900 + 1;
  uVar2 = local_34;
LAB_14118c9b6:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118c9e8 FUN_14118c9e8 body=848 status=ok
// SIG undefined FUN_14118c9e8(void)

int * FUN_14118c9e8(int *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = DAT_14cab2808;
  iVar10 = DAT_14cab27e0;
  if (DAT_14cab280c == 0) {
    iVar13 = DAT_14cab27e0 + 1;
    bVar15 = DAT_14cab27e4 == DAT_14cab27e0;
    DAT_14cab27e0 = iVar13;
    if (bVar15) {
      FUN_1447cc1b4(&DAT_14cab27d8,iVar10);
    }
    iVar13 = DAT_14cab2800;
    if (DAT_14cab2800 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = DAT_14cab2800 + 0x1e;
      if (-1 < DAT_14cab2800 + -1) {
        iVar4 = DAT_14cab2800 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    iVar8 = DAT_14cab2800 + 1;
    iVar12 = DAT_14cab2800 + 0x1f;
    if (-1 < DAT_14cab2800) {
      iVar12 = DAT_14cab2800;
    }
    if (iVar12 >> 5 != iVar4) {
      if (DAT_14cab2804 <= DAT_14cab2800) {
        if (DAT_14cab2800 + 0x20U < 0xa0) {
          DAT_14cab2804 = 0x80;
        }
        else {
          uVar14 = DAT_14cab2800 + 0x20U >> 5;
          if (DAT_14cab2804 + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar14) {
              uVar7 = uVar14;
            }
          }
          else {
            uVar7 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar7 << 2,0);
          iVar4 = (int)(uVar9 >> 2);
          DAT_14cab2804 = -0x20;
          if ((int)uVar14 <= iVar4) {
            DAT_14cab2804 = iVar4 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cab27e8,DAT_14cab2800);
        iVar8 = DAT_14cab2800 + 1;
      }
      iVar4 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      if (iVar8 % 0x20 != 0) {
        puVar11 = &DAT_14cab27e8;
        if (DAT_14cab27f8 != (undefined *)0x0) {
          puVar11 = DAT_14cab27f8;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        DAT_14cab2800 = iVar8;
        *(uint *)(puVar11 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)(puVar11 + (longlong)(iVar4 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
        iVar8 = DAT_14cab2800;
      }
    }
    DAT_14cab2800 = iVar8;
    lVar5 = (longlong)iVar10;
    puVar11 = &DAT_14cab27e8;
    if (DAT_14cab27f8 != (undefined *)0x0) {
      puVar11 = DAT_14cab27f8;
    }
    bVar6 = (byte)iVar13 & 0x1f;
    *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
    iVar13 = iVar10;
  }
  else {
    lVar5 = (longlong)DAT_14cab2808;
    DAT_14cab2808 = *(int *)(DAT_14cab27d8 + 4 + lVar5 * 0xc);
    DAT_14cab280c = DAT_14cab280c + -1;
    if (DAT_14cab280c != 0) {
      *(undefined4 *)(DAT_14cab27d8 + (longlong)DAT_14cab2808 * 0xc) = 0xffffffff;
    }
  }
  iVar10 = 1;
  puVar11 = &DAT_14cab27e8;
  if (DAT_14cab27f8 != (undefined *)0x0) {
    puVar11 = DAT_14cab27f8;
  }
  iVar4 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar4 = iVar13;
  }
  *(uint *)(puVar11 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar11 + (longlong)(iVar4 >> 5) * 4) | 1 << ((byte)iVar13 & 0x1f);
  puVar1 = (ushort *)(DAT_14cab27d8 + lVar5 * 0xc);
  puVar3 = (ushort *)param_2[1];
  uVar2 = *(ushort *)*param_2;
  *puVar1 = uVar2;
  puVar1[1] = *puVar3;
  puVar1[2] = 0xffff;
  puVar1[3] = 0xffff;
  uVar14 = DAT_14cab27e0 - DAT_14cab280c;
  if ((uVar14 != 0) && (uVar14 != 1)) {
    puVar11 = &DAT_14cab2810;
    if (DAT_14cab2818 != (undefined *)0x0) {
      puVar11 = DAT_14cab2818;
    }
    iVar4 = *(int *)(puVar11 + (ulonglong)(DAT_14cab2820 - 1U & (uint)uVar2) * 4);
    while (iVar4 != -1) {
      puVar3 = (ushort *)(DAT_14cab27d8 + (longlong)iVar4 * 0xc);
      if (*puVar3 == uVar2) {
        *(undefined4 *)puVar3 = *(undefined4 *)puVar1;
        FUN_147548d1e(iVar13);
        goto LAB_14118cbd0;
      }
      iVar4 = *(int *)(puVar3 + 2);
    }
  }
  if (3 < uVar14) {
    uVar9 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  iVar4 = iVar13;
  if (((int)uVar14 < 1) || (iVar10 <= DAT_14cab2820)) {
    uVar14 = DAT_14cab2820 - 1U & (uint)uVar2;
    *(uint *)(puVar1 + 4) = uVar14;
    puVar11 = DAT_14cab2818;
    if (DAT_14cab2818 == (undefined *)0x0) {
      puVar11 = &DAT_14cab2810;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)(puVar11 + (ulonglong)(DAT_14cab2820 - 1U & uVar14) * 4);
    puVar11 = DAT_14cab2818;
    if (DAT_14cab2818 == (undefined *)0x0) {
      puVar11 = &DAT_14cab2810;
    }
    *(int *)(puVar11 + (ulonglong)(DAT_14cab2820 - 1U & uVar14) * 4) = iVar13;
  }
  else {
    DAT_14cab2820 = iVar10;
    FUN_14118cd38();
  }
LAB_14118cbd0:
  *param_1 = iVar4;
  return param_1;
}



// FUNCTION 14118cd38 FUN_14118cd38 body=567 status=ok
// SIG undefined FUN_14118cd38(void)

void FUN_14118cd38(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined *local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cab2818 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cab2818,0,0,4);
  }
  uVar6 = DAT_14cab2820;
  if (DAT_14cab2820 != 0) {
    FUN_144a1cbf0(&DAT_14cab2810,0,DAT_14cab2820,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        puVar8 = DAT_14cab2818;
        if (DAT_14cab2818 == (undefined *)0x0) {
          puVar8 = &DAT_14cab2810;
        }
        *(undefined4 *)(puVar8 + (ulonglong)(DAT_14cab2820 + 0x7fffffff & uVar4) * 4) = 0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_50 = 0x100000000;
    local_48 = &DAT_14cab27e8;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (DAT_14cab2800 == 0) {
      uVar9 = 1;
      local_40._0_4_ = 0xffffffff;
      local_40._4_4_ = 0;
      local_50._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      uVar9 = local_50 >> 0x20;
    }
    iVar5 = (int)local_50;
    uVar6 = (uint)local_40;
    iVar7 = local_40._4_4_;
    iVar10 = local_38;
    if (local_40._4_4_ < *(int *)(local_48 + 0x18)) {
      do {
        lVar12 = DAT_14cab27d8;
        lVar11 = (longlong)iVar7;
        uVar4 = DAT_14cab2820 - 1 & (uint)*(ushort *)(DAT_14cab27d8 + lVar11 * 0xc);
        *(uint *)(DAT_14cab27d8 + 8 + lVar11 * 0xc) = uVar4;
        puVar8 = DAT_14cab2818;
        if (DAT_14cab2818 == (undefined *)0x0) {
          puVar8 = &DAT_14cab2810;
        }
        *(undefined4 *)(lVar12 + 4 + lVar11 * 0xc) =
             *(undefined4 *)(puVar8 + (ulonglong)(DAT_14cab2820 - 1 & uVar4) * 4);
        puVar8 = DAT_14cab2818;
        if (DAT_14cab2818 == (undefined *)0x0) {
          puVar8 = &DAT_14cab2810;
        }
        *(int *)(puVar8 + (ulonglong)(DAT_14cab2820 - 1 & uVar4) * 4) = iVar7;
        uVar6 = ~(uint)uVar9 & uVar6;
        puVar8 = *(undefined **)(local_48 + 0x10);
        if (*(undefined **)(local_48 + 0x10) == (undefined *)0x0) {
          puVar8 = local_48;
        }
        iVar2 = *(int *)(local_48 + 0x18);
        lVar12 = (longlong)iVar5;
        uVar4 = *(uint *)(puVar8 + lVar12 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)(puVar8 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar4 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar3 - lVar12 == lVar11) goto LAB_14118cf2c;
          }
          iVar5 = iVar5 + (int)lVar11 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_14118cf2c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118cf76 FUN_14118cf76 body=221 status=ok
// SIG undefined FUN_14118cf76(void)

longlong FUN_14118cf76(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1d538 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e6f2b5;
    local_40 = FUN_146423534;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavigationQueryFilter",&DAT_14cb1d538,&DAT_147e6f2b4
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d538;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118d05a FUN_14118d05a body=221 status=ok
// SIG undefined FUN_14118d05a(void)

longlong FUN_14118d05a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1eb18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ea6077;
    local_40 = FUN_146428aea;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/AIModule",L"BehaviorTree",&DAT_14cb1eb18,&DAT_147ea6076);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1eb18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118d138 FUN_14118d138 body=55 status=ok
// SIG undefined FUN_14118d138(void)

void FUN_14118d138(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14118d176 FUN_14118d176 body=228 status=ok
// SIG undefined FUN_14118d176(void)

longlong FUN_14118d176(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba4030 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458c8470;
    local_38 = &LAB_148bc4f73;
    local_40 = &LAB_145d40799;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2680;
    FUN_14081cfa3(L"/Script/OakGame",L"GrappleGrate",&DAT_14cba4030,&DAT_148bc4f72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4030;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118d25c FUN_14118d25c body=146 status=ok
// SIG undefined FUN_14118d25c(void)

undefined8 * FUN_14118d25c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b723680;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14118d2ee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14118d2ee FUN_14118d2ee body=45 status=ok
// SIG undefined FUN_14118d2ee(void)

void FUN_14118d2ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b523c70;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14118d31c FUN_14118d31c body=467 status=ok
// SIG undefined FUN_14118d31c(void)

void FUN_14118d31c(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar3 & 1) != 0) {
    uVar1 = *param_2;
    local_80 = FUN_140732858();
    local_78 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      local_88 = param_1 + -0xd8;
      local_90 = param_1 + -0x10;
      uVar7 = 0;
      do {
        lVar2 = *(longlong *)(param_5 + uVar7 * 8);
        local_68 = 0;
        if (lVar2 != 0) {
          uVar1 = *(uint *)(lVar2 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          iVar4 = *(int *)(lVar5 + 0x10);
          if (*(int *)(lVar5 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar8 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar8) {
              local_94 = iVar6;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
              iVar6 = local_94;
            }
            LOCK();
            iVar4 = *(int *)(lVar5 + 0x10);
            bVar8 = iVar4 == 0;
            if (bVar8) {
              *(int *)(lVar5 + 0x10) = iVar6;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar8) {
              iVar4 = iVar6;
            }
          }
          local_68 = CONCAT44(iVar4,uVar1);
        }
        FUN_14027461a(local_90,&local_6c,lVar2);
        FUN_14118d4f0(local_88,&local_70,&local_68);
        local_5c = *(undefined4 *)(param_1 + -0x18);
        local_54 = *(undefined4 *)(param_4 + uVar7 * 4);
        local_4a = *(undefined2 *)(param_3 + uVar7 * 2);
        local_60 = local_6c;
        local_58 = local_70;
        local_50 = (byte)uVar3;
        FUN_1449da5a2(local_80,&local_4a,&local_60);
        uVar7 = uVar7 + 1;
      } while (local_78 != uVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118d4f0 FUN_14118d4f0 body=919 status=ok
// SIG undefined FUN_14118d4f0(void)

int * FUN_14118d4f0(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar10 = param_3[1];
    uVar9 = uVar10 >> 0xd ^ *param_3 - uVar10;
    uVar13 = uVar9 << 8 ^ (-0x61c88647 - uVar10) - uVar9;
    uVar14 = uVar13 >> 0xd ^ (uVar10 - uVar9) - uVar13;
    uVar16 = uVar14 >> 0xc ^ (uVar9 - uVar13) - uVar14;
    uVar9 = uVar16 << 0x10 ^ (uVar13 - uVar14) - uVar16;
    uVar13 = uVar9 >> 5 ^ (uVar14 - uVar16) - uVar9;
    uVar14 = uVar13 >> 3 ^ (uVar16 - uVar9) - uVar13;
    uVar9 = uVar14 << 10 ^ (uVar9 - uVar13) - uVar14;
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar17 = *(int *)(lVar4 + (ulonglong)
                              (*(int *)(param_1 + 0x60) - 1U &
                              (uVar9 >> 0xf ^ uVar13 - (uVar14 + uVar9))) * 4);
    if (iVar17 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar4 + (longlong)iVar17 * 0x14);
        if ((*piVar1 == *param_3) && (*(uint *)(lVar4 + 4 + (longlong)iVar17 * 0x14) == uVar10)) {
          if ((piVar1 != (int *)0x0) && (iVar17 = piVar1[2], *param_2 = iVar17, iVar17 != -1))
          goto LAB_14118d730;
          break;
        }
        iVar17 = piVar1[3];
      } while (iVar17 != -1);
    }
  }
  uVar15 = *(undefined8 *)param_3;
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar17 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar17 + 1;
    if (*(int *)(param_1 + 0x74) == iVar17) {
      FUN_1447cc1b4(param_1 + 0x68,iVar17);
    }
    iVar7 = *(int *)(param_1 + 0x90);
    if (iVar7 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar3 = iVar7 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    lVar11 = param_1 + 0x78;
    iVar8 = iVar7 + 1;
    iVar12 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar12 = iVar7;
    }
    if (iVar12 >> 5 == iVar3) {
      *(int *)(param_1 + 0x90) = iVar8;
    }
    else {
      if (*(int *)(param_1 + 0x94) <= iVar7) {
        local_68 = uVar15;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar3 = iVar7;
        }
        else {
          uVar10 = iVar7 + 0x20U >> 5;
          local_70 = (ulonglong)uVar10;
          if (*(int *)(param_1 + 0x94) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar10) {
              uVar9 = uVar10;
            }
          }
          else {
            uVar9 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar9 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)local_70 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
          iVar3 = *(int *)(param_1 + 0x90);
        }
        *(int *)(param_1 + 0x94) = iVar8;
        FUN_1446efbd8(lVar11,iVar3);
        iVar8 = *(int *)(param_1 + 0x90) + 1;
        uVar15 = local_68;
      }
      iVar3 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar3 = iVar8;
      }
      *(int *)(param_1 + 0x90) = iVar8;
      if (iVar8 % 0x20 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar4 = lVar11;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar3 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar17;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x88);
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar2 = (uint *)(lVar11 + (longlong)(iVar12 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x98);
    lVar4 = (longlong)iVar17;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar4 * 0xc);
    *(int *)(param_1 + 0x98) = iVar7;
    iVar3 = *(int *)(param_1 + 0x9c) + -1;
    *(int *)(param_1 + 0x9c) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0xc) = 0xffffffff;
    }
  }
  lVar11 = param_1 + 0x78;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x88);
  }
  iVar7 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar7 = iVar17;
  }
  puVar2 = (uint *)(lVar11 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar17 & 0x1f);
  lVar11 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(lVar11 + lVar4 * 0xc) = uVar15;
  *(undefined4 *)(lVar11 + 8 + lVar4 * 0xc) = 0;
  *param_2 = iVar17;
  local_60 = param_3;
  local_58 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_60,0);
LAB_14118d730:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118d888 FUN_14118d888 body=159 status=ok
// SIG undefined FUN_14118d888(void)

void FUN_14118d888(longlong *param_1,longlong param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_1447f71cc(lVar2,0x40000000);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x29] = param_2;
  *(undefined2 *)((longlong)param_1 + 0xb4) = param_3;
  *(undefined2 *)((longlong)param_1 + 0xb6) = param_4;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  (**(code **)(*param_1 + 0x3f8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014118d912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x408))(param_1);
  return;
}



// FUNCTION 14118d93c FUN_14118d93c body=223 status=ok
// SIG undefined FUN_14118d93c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14118d93c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b84c530;
  FUN_1408d575c(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14118da1c FUN_14118da1c body=51 status=ok
// SIG undefined FUN_14118da1c(void)

undefined * FUN_14118da1c(void)

{
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  return &DAT_14c846b20;
}



// FUNCTION 14118da50 FUN_14118da50 body=23 status=ok
// SIG undefined FUN_14118da50(void)

undefined8 FUN_14118da50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14118da67 FUN_14118da67 body=2977 status=ok
// SIG undefined FUN_14118da67(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14118da67(undefined8 param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong **pplVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 auStack_11c8 [32];
  undefined8 local_11a8;
  undefined1 local_11a0;
  longlong local_1198;
  longlong *local_1188;
  longlong *local_1180;
  longlong *local_1178;
  undefined8 local_1170;
  longlong local_1168;
  undefined8 uStack_1160;
  undefined1 local_1150 [4];
  undefined1 local_114c [4];
  longlong *local_1148 [2];
  undefined8 local_1138;
  longlong *local_1130;
  longlong *local_1128 [2];
  longlong *local_1118 [2];
  longlong local_1108 [3];
  ulonglong uStack_10f0;
  longlong *local_10e8;
  undefined8 uStack_10e0;
  longlong *local_10d8;
  undefined8 uStack_10d0;
  longlong *local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  longlong *local_10b0;
  wchar_t **local_10a8;
  undefined1 *local_10a0;
  longlong local_1098;
  undefined4 local_1090;
  wchar_t *local_878;
  undefined4 local_870;
  longlong *local_868 [2];
  undefined1 local_858 [2040];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x14118da7d;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_11c8;
  if (param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_11c8);
  }
  local_1170 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9640d8) && (FUN_144b3d300(&DAT_14c9640d8), DAT_14c9640d8 == -1)) {
    DAT_14c9640c0 = 0;
    uRam000000014c9640c8 = 0;
    _DAT_14c9640d0 = 0;
    atexit((_func_5014 *)&LAB_14282d810);
    _Init_thread_footer(&DAT_14c9640d8);
  }
  local_1178 = (longlong *)FUN_14058d6d4();
  local_1180 = (longlong *)FUN_1406fe7ba();
  local_1188 = (longlong *)FUN_14098d464();
  plVar5 = (longlong *)FUN_14058d6d4();
  lVar14 = plVar5[1];
  if ((longlong)(int)lVar14 != 0) {
    lVar7 = *plVar5;
    lVar9 = 0;
    do {
      (**(code **)(lVar7 + 8 + lVar9))();
      lVar9 = lVar9 + 0x20;
    } while ((longlong)(int)lVar14 * 0x20 != lVar9);
  }
  local_1168 = 0;
  uStack_1160 = 0;
  bVar12 = false;
LAB_14118db2e:
  if ((((DAT_14c963f68 == 0) && ((int)local_1178[1] <= (int)local_1178[2])) &&
      ((int)local_1180[1] <= (int)local_1180[2])) && ((int)local_1188[1] <= (int)local_1188[2])) {
    FUN_14282d752(local_1170,2);
    lVar14 = DAT_14c9640c0;
    DAT_14c9640c0 = 0;
    uRam000000014c9640c8 = 0;
    _DAT_14c9640d0 = 0;
    if (lVar14 != 0) {
      FUN_1400020a8();
    }
    lVar14 = *local_1188;
    *local_1188 = 0;
    local_1188[1] = 0;
    *(undefined4 *)(local_1188 + 2) = 0;
    if (lVar14 != 0) {
      FUN_1400020a8();
    }
    lVar14 = *local_1180;
    *local_1180 = 0;
    local_1180[1] = 0;
    *(undefined4 *)(local_1180 + 2) = 0;
    if (lVar14 != 0) {
      FUN_1400020a8();
    }
    lVar14 = *local_1178;
    *local_1178 = 0;
    local_1178[1] = 0;
    *(undefined4 *)(local_1178 + 2) = 0;
    if (lVar14 != 0) {
      FUN_1400020a8();
    }
    lVar14 = FUN_14171c27a();
    if (*(int *)(lVar14 + 8) == *(int *)(lVar14 + 0x34)) {
      if (*(int *)(lVar14 + 0x48) < 2) {
        lVar7 = lVar14 + 0x38;
        if (*(longlong *)(lVar14 + 0x40) != 0) {
          lVar7 = *(longlong *)(lVar14 + 0x40);
        }
        if (*(int *)(lVar14 + 0x48) == 1) {
          lVar9 = 0;
          do {
            *(undefined4 *)(lVar7 + lVar9 * 4) = 0xffffffff;
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar14 + 0x48));
        }
        FUN_14153d836(lVar14);
      }
      else {
        FUN_14153d836(lVar14);
        *(undefined4 *)(lVar14 + 0x48) = 1;
        FUN_141537626(lVar14);
      }
    }
    lVar14 = local_1168;
    if ((bVar12) && (DAT_14c75b114 == '\0')) {
      lVar7 = (longlong)(int)uStack_1160;
      if (lVar7 != 0) {
        lVar9 = 0;
        do {
          lVar8 = *(longlong *)(lVar14 + lVar9);
          if (((*(uint *)(lVar8 + 8) & 0x10) == 0) && ((*(byte *)(lVar8 + 0xd6) & 0x40) == 0)) {
            FUN_1408a750e(lVar8,0);
          }
          lVar9 = lVar9 + 8;
        } while (lVar7 * 8 != lVar9);
      }
    }
    if (local_1168 != 0) {
      FUN_1400020a8(local_1168);
    }
    if ((local_60 ^ (ulonglong)auStack_11c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_14282b552();
  plVar5 = (longlong *)FUN_14098d464();
  plVar6 = (longlong *)FUN_1406fe7ba();
  iVar2 = (int)plVar5[2];
  if (iVar2 < (int)plVar5[1]) {
    iVar11 = (int)plVar5[1] - iVar2;
    uVar13 = (longlong)iVar2 << 5 | 0x10;
    do {
      FUN_14099f58f(*(undefined8 *)(*plVar5 + uVar13));
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar2 = (int)plVar6[2];
  if (iVar2 < (int)plVar6[1]) {
    iVar11 = (int)plVar6[1] - iVar2;
    uVar13 = (longlong)iVar2 << 5 | 0x10;
    do {
      FUN_14099f58f(*(undefined8 *)(*plVar6 + uVar13));
      uVar13 = uVar13 + 0x20;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar2 = (int)plVar5[1];
  iVar11 = (int)plVar5[2];
  if (iVar11 < iVar2) {
    iVar15 = iVar2 - iVar11;
    lVar14 = (longlong)iVar11 << 5;
    do {
      (**(code **)(*plVar5 + lVar14))();
      lVar14 = lVar14 + 0x20;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  *(int *)(plVar5 + 2) = iVar2;
  iVar2 = (int)plVar6[1];
  iVar11 = (int)plVar6[2];
  if (iVar11 < iVar2) {
    iVar15 = iVar2 - iVar11;
    lVar14 = (longlong)iVar11 << 5;
    do {
      (**(code **)(*plVar6 + lVar14))();
      lVar14 = lVar14 + 0x20;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  *(int *)(plVar6 + 2) = iVar2;
  FUN_14282d752(local_1170,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964058) && (FUN_144b3d300(&DAT_14c964058), DAT_14c964058 == -1)) {
    FUN_1446f470e(&DAT_14c964050,L"/Script/Engine",1);
    _Init_thread_footer(&DAT_14c964058);
  }
  plVar5 = (longlong *)FUN_14058d6d4();
  lVar14 = (longlong)(int)plVar5[2];
  iVar2 = (int)plVar5[1];
  if ((int)plVar5[2] < iVar2) {
    local_10c8 = (longlong *)0x0;
    uStack_10c0 = 0;
    local_10d8 = (longlong *)0x0;
    uStack_10d0 = 0;
    local_10e8 = (longlong *)0x0;
    uStack_10e0 = 0;
LAB_14118dc86:
    lVar9 = (**(code **)(*plVar5 + lVar14 * 0x20))();
    lVar7 = lVar9;
LAB_14118dc99:
    lVar8 = lVar7;
    lVar7 = lVar8;
    if (*(longlong *)(lVar8 + 0x20) != 0) goto code_r0x00014118dca8;
    goto LAB_14118dcbb;
  }
  goto LAB_14118dc63;
code_r0x00014118dca8:
  lVar7 = *(longlong *)(lVar8 + 0x20);
  if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) == 0) goto LAB_14118dc99;
  lVar7 = FUN_142840154(lVar8);
LAB_14118dcbb:
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar8 + 0x20);
    goto LAB_14118dc99;
  }
  cVar3 = FUN_1403f35db(*(undefined8 *)(lVar7 + 0x18),&DAT_14c8687c0);
  lVar7 = lVar9;
  if (cVar3 == '\0') {
LAB_14118dd08:
    lVar8 = lVar7;
    lVar7 = lVar8;
    if (*(longlong *)(lVar8 + 0x20) != 0) goto code_r0x00014118dd17;
    goto LAB_14118dd2a;
  }
  iVar11 = (int)uStack_10d0;
  uVar4 = (int)uStack_10d0 + 1;
  uStack_10d0 = CONCAT44(uStack_10d0._4_4_,uVar4);
  if (uVar4 <= uStack_10d0._4_4_) {
    pplVar10 = &local_10d8;
    goto LAB_14118dda8;
  }
  pplVar10 = &local_10d8;
LAB_14118dd9d:
  FUN_140a0062e(pplVar10,iVar11);
LAB_14118dda8:
  uVar13 = uStack_1160;
  (*pplVar10)[iVar11] = lVar9;
  lVar7 = (longlong)(int)uStack_1160;
  uVar4 = (int)uStack_1160 + 1;
  uStack_1160 = CONCAT44(uStack_1160._4_4_,uVar4);
  if (uStack_1160._4_4_ < uVar4) {
    FUN_140a0062e(&local_1168,uVar13 & 0xffffffff);
  }
  *(longlong *)(local_1168 + lVar7 * 8) = lVar9;
  lVar14 = lVar14 + 1;
  if (iVar2 == (int)lVar14) goto LAB_14118ddfe;
  goto LAB_14118dc86;
code_r0x00014118dd17:
  lVar7 = *(longlong *)(lVar8 + 0x20);
  if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) == 0) goto LAB_14118dd08;
  lVar7 = FUN_142840154(lVar8);
LAB_14118dd2a:
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar8 + 0x20);
    goto LAB_14118dd08;
  }
  if (*(longlong *)(lVar7 + 0x18) == DAT_14c964050) {
    iVar11 = (int)uStack_10e0;
    uVar4 = (int)uStack_10e0 + 1;
    uStack_10e0 = CONCAT44(uStack_10e0._4_4_,uVar4);
    if (uVar4 <= uStack_10e0._4_4_) {
      pplVar10 = &local_10e8;
      goto LAB_14118dda8;
    }
    pplVar10 = &local_10e8;
  }
  else {
    iVar11 = (int)uStack_10c0;
    uVar4 = (int)uStack_10c0 + 1;
    uStack_10c0 = CONCAT44(uStack_10c0._4_4_,uVar4);
    if (uVar4 <= uStack_10c0._4_4_) {
      pplVar10 = &local_10c8;
      goto LAB_14118dda8;
    }
    pplVar10 = &local_10c8;
  }
  goto LAB_14118dd9d;
LAB_14118ddfe:
  *(int *)(plVar5 + 2) = iVar2;
  if ((longlong)(int)uStack_10d0 != 0) {
    plVar5 = local_10d8 + (int)uStack_10d0;
    plVar6 = local_10d8;
LAB_14118de26:
    lVar14 = *plVar6;
    lVar7 = lVar14;
LAB_14118de2c:
    lVar9 = lVar7;
    lVar7 = lVar9;
    if (*(longlong *)(lVar9 + 0x20) != 0) goto code_r0x00014118de3b;
    goto LAB_14118de4c;
  }
LAB_14118dec5:
  if ((longlong)(int)uStack_10e0 != 0) {
    plVar5 = local_10e8 + (int)uStack_10e0;
    plVar6 = local_10e8;
LAB_14118dee2:
    lVar14 = *plVar6;
    lVar7 = lVar14;
LAB_14118dee8:
    lVar9 = lVar7;
    lVar7 = lVar9;
    if (*(longlong *)(lVar9 + 0x20) != 0) goto code_r0x00014118def7;
    goto LAB_14118df08;
  }
LAB_14118df81:
  if ((longlong)(int)uStack_10c0 != 0) {
    plVar5 = local_10c8 + (int)uStack_10c0;
    plVar6 = local_10c8;
LAB_14118df9e:
    lVar14 = *plVar6;
    lVar7 = lVar14;
LAB_14118dfa4:
    lVar9 = lVar7;
    lVar7 = lVar9;
    if (*(longlong *)(lVar9 + 0x20) != 0) goto code_r0x00014118dfb3;
    goto LAB_14118dfc4;
  }
LAB_14118e03d:
  plVar5 = local_10d8;
  lVar14 = (longlong)(int)uStack_10d0;
  if (lVar14 != 0) {
    lVar7 = 0;
    do {
      if ((*(longlong **)((longlong)plVar5 + lVar7))[0x22] == 0) {
        (**(code **)(**(longlong **)((longlong)plVar5 + lVar7) + 1000))();
      }
      lVar7 = lVar7 + 8;
    } while (lVar14 * 8 != lVar7);
  }
  plVar5 = local_10e8;
  lVar14 = (longlong)(int)uStack_10e0;
  if (lVar14 != 0) {
    lVar7 = 0;
    do {
      if ((*(longlong **)((longlong)plVar5 + lVar7))[0x22] == 0) {
        (**(code **)(**(longlong **)((longlong)plVar5 + lVar7) + 1000))();
      }
      lVar7 = lVar7 + 8;
    } while (lVar14 * 8 != lVar7);
  }
  plVar5 = local_10c8;
  lVar14 = (longlong)(int)uStack_10c0;
  if (lVar14 != 0) {
    lVar7 = 0;
    do {
      if ((*(longlong **)((longlong)plVar5 + lVar7))[0x22] == 0) {
        (**(code **)(**(longlong **)((longlong)plVar5 + lVar7) + 1000))();
      }
      lVar7 = lVar7 + 8;
    } while (lVar14 * 8 != lVar7);
  }
  lVar14 = FUN_146272fb2();
  if (*(int *)(lVar14 + 0x20) != 0 || *(int *)(lVar14 + 0x30) != 0) {
    local_1108[2] = 0;
    uStack_10f0 = 0;
    FUN_1468ff6ec(lVar14,local_1108 + 2);
    lVar14 = local_1108[2];
    local_1108[0] = 0;
    local_1108[1] = 0;
    lVar7 = (longlong)(int)uStack_10f0;
    if (lVar7 != 0) {
      lVar9 = 0;
      do {
        iVar2 = *(int *)(lVar14 + 8 + lVar9);
        iVar11 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar11 = 0;
        }
        FUN_1400020e8(local_1108,*(undefined8 *)(lVar14 + lVar9),iVar11);
        FUN_1400020e8(local_1108,&DAT_149e01f72,1);
        lVar9 = lVar9 + 0x10;
      } while (lVar7 * 0x10 != lVar9);
    }
    FUN_140009b9a(local_1128,local_1108);
    local_878 = L"DefaultPropertyWarningAndErrors";
    local_870 = 0x1f;
    FUN_1446e940c(local_114c,&local_878);
    local_878 = L"Core";
    local_870 = 4;
    FUN_1446e940c(local_1150,&local_878);
    local_878 = L"Default Property warnings and errors:\n{0}";
    local_870 = 0x29;
    FUN_140208c1e(local_1148,local_1150,local_114c,&local_878);
    FUN_14023409e(&local_1138,local_1148,1);
    local_878 = (wchar_t *)CONCAT44(local_878._4_4_,4);
    FUN_14023423e(local_868,local_1128);
    local_10a0 = local_858;
    local_10a8 = &local_878;
    FUN_14010d304(&local_1098,&local_10a8);
    local_10b8 = local_1138;
    local_10b0 = local_1130;
    if (local_1130 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1130 + 1) = (int)local_1130[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1118,&local_10b8,&local_1098);
    FUN_14007f2db(local_1098,local_1090);
    if (local_1098 != 0) {
      FUN_1400020a8();
    }
    if (local_868[0] != (longlong *)0x0) {
      (**(code **)(*local_868[0] + 0x10))();
    }
    plVar5 = local_1130;
    if (local_1130 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_1130 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_1130)(local_1130);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_1128[0] != (longlong *)0x0) {
      (**(code **)(*local_1128[0] + 0x10))();
    }
    FUN_1427863e0();
    FUN_1427864dc(0,0,local_1118,&DAT_14c873210);
    if (local_1118[0] != (longlong *)0x0) {
      (**(code **)(*local_1118[0] + 0x10))();
    }
    if (local_1148[0] != (longlong *)0x0) {
      (**(code **)(*local_1148[0] + 0x10))();
    }
    if (local_1108[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_1108[2],uStack_10f0 & 0xffffffff);
    if (local_1108[2] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_10e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_10d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_10c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14118dc63:
  bVar12 = true;
  goto LAB_14118db2e;
code_r0x00014118de3b:
  lVar7 = *(longlong *)(lVar9 + 0x20);
  if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) goto LAB_14118de2c;
  lVar7 = FUN_142840154(lVar9);
LAB_14118de4c:
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar9 + 0x20);
    goto LAB_14118de2c;
  }
  local_1098 = *(longlong *)(lVar7 + 0x18);
  FUN_14026f16c(&local_1098,&local_878,0x40b);
  local_10a8 = *(wchar_t ***)(lVar14 + 0x18);
  FUN_14026f16c(&local_10a8,&local_1098,0x40b);
  local_11a0 = 0;
  local_11a8 = 0;
  local_1198 = lVar14;
  FUN_14058d631(&local_878,&local_1098,0,2);
  plVar6 = plVar6 + 1;
  if (plVar6 == plVar5) goto LAB_14118dec5;
  goto LAB_14118de26;
code_r0x00014118def7:
  lVar7 = *(longlong *)(lVar9 + 0x20);
  if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) goto LAB_14118dee8;
  lVar7 = FUN_142840154(lVar9);
LAB_14118df08:
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar9 + 0x20);
    goto LAB_14118dee8;
  }
  local_1098 = *(longlong *)(lVar7 + 0x18);
  FUN_14026f16c(&local_1098,&local_878,0x40b);
  local_10a8 = *(wchar_t ***)(lVar14 + 0x18);
  FUN_14026f16c(&local_10a8,&local_1098,0x40b);
  local_11a0 = 0;
  local_11a8 = 0;
  local_1198 = lVar14;
  FUN_14058d631(&local_878,&local_1098,0,2);
  plVar6 = plVar6 + 1;
  if (plVar6 == plVar5) goto LAB_14118df81;
  goto LAB_14118dee2;
code_r0x00014118dfb3:
  lVar7 = *(longlong *)(lVar9 + 0x20);
  if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) goto LAB_14118dfa4;
  lVar7 = FUN_142840154(lVar9);
LAB_14118dfc4:
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(lVar9 + 0x20);
    goto LAB_14118dfa4;
  }
  local_1098 = *(longlong *)(lVar7 + 0x18);
  FUN_14026f16c(&local_1098,&local_878,0x40b);
  local_10a8 = *(wchar_t ***)(lVar14 + 0x18);
  FUN_14026f16c(&local_10a8,&local_1098,0x40b);
  local_11a0 = 0;
  local_11a8 = 0;
  local_1198 = lVar14;
  FUN_14058d631(&local_878,&local_1098,0,2);
  plVar6 = plVar6 + 1;
  if (plVar6 == plVar5) goto LAB_14118e03d;
  goto LAB_14118df9e;
}



// FUNCTION 14118e62e FUN_14118e62e body=299 status=ok
// SIG undefined FUN_14118e62e(void)

void FUN_14118e62e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar9 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar3 = *(longlong *)(param_1 + 200);
    }
    iVar8 = *(int *)(lVar3 + ((longlong)
                              (int)(((uint)param_2 << 0x10 | uVar9) +
                                    (int)((ulonglong)param_2 >> 0x20) +
                                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) &
                             (longlong)*(int *)(param_1 + 0xd0) - 1U) * 4);
    if (iVar8 != -1) {
      plVar7 = (longlong *)(param_1 + 0x88);
      do {
        plVar6 = (longlong *)(*plVar7 + (longlong)iVar8 * 0x28);
        if (*plVar6 == param_2) {
          iVar5 = *(int *)(lVar3 + (longlong)*(int *)((longlong)plVar6 + 0x24) * 4);
          if (iVar5 == iVar8) {
            piVar4 = (int *)(lVar3 + (longlong)*(int *)((longlong)plVar6 + 0x24) * 4);
          }
          else {
            do {
              piVar4 = (int *)(*plVar7 + (longlong)iVar5 * 0x28 + 0x20);
              iVar5 = *piVar4;
            } while (iVar5 != iVar8);
          }
          *piVar4 = (int)plVar6[4];
          lVar3 = *plVar7 + (longlong)iVar8 * 0x28;
          plVar6 = (longlong *)(lVar3 + 8);
          if (*(int *)(lVar3 + 0x10) != 0) {
            puVar1 = (undefined8 *)*plVar6;
            if (puVar1 == (undefined8 *)0x0) goto LAB_14118e6ff;
            (**(code **)*puVar1)(puVar1,0);
            FUN_1446efa72(plVar6,0,0,0x10);
            *(undefined4 *)(lVar3 + 0x10) = 0;
          }
          if (*plVar6 != 0) {
            FUN_1400020a8();
          }
LAB_14118e6ff:
          FUN_14118e75a(plVar7,iVar8);
          return;
        }
        iVar8 = (int)plVar6[4];
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 14118e75a FUN_14118e75a body=114 status=ok
// SIG undefined FUN_14118e75a(void)

void FUN_14118e75a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 14118e7cc FUN_14118e7cc body=926 status=ok
// SIG undefined FUN_14118e7cc(void)

void FUN_14118e7cc(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  char local_d0 [16];
  longlong *local_c0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_2;
  local_d0[0] = '\0';
  local_a8[0] = 0;
  FUN_14083c332(local_d0);
  puVar6 = &local_a0;
  FUN_1448729ea(param_1 + 0x48,puVar6,local_d0);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar7 = &local_78;
    FUN_1400b56fe(puVar7,&local_a0,3);
    uVar8 = 0;
    if (local_58 != 0) {
      uVar8 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar7 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  uVar5 = FUN_14118eb6b();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,0);
  }
  local_d8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar6 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_d0[0] = '\0';
  local_a8[0] = 0;
  FUN_14083c332(local_d0,param_2);
  puVar6 = &local_a0;
  FUN_1448729ea(param_1 + 0x98,puVar6,local_d0);
  uVar8 = local_a0;
  if (local_80 != 3) {
    puVar7 = &local_78;
    FUN_1400b56fe(puVar7,&local_a0,3);
    uVar8 = 0;
    if (local_58 != 0) {
      uVar8 = local_78;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar7 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  uVar5 = FUN_14118eb6b();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,1);
  }
  local_d8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar6 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118eb6b FUN_14118eb6b body=57 status=ok
// SIG undefined FUN_14118eb6b(void)

void FUN_14118eb6b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0e30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0e30 = FUN_14171c317(FUN_1466199bd,uVar1,L"EAtt_WeaponBehaviorShield");
  }
  return;
}



// FUNCTION 14118eba4 FUN_14118eba4 body=1367 status=ok
// SIG undefined FUN_14118eba4(void)

void FUN_14118eba4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
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
  code *local_40;
  int local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14118f0fc();
  if (param_2 == (longlong *)0x0) goto LAB_14118edf3;
  if (DAT_14cb56270 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_148630fef;
    local_70 = FUN_1464b6a91;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb56270);
  if (plVar5 == (longlong *)0x0) goto LAB_14118edf3;
  if (DAT_14cb56270 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_148630fef;
    local_70 = FUN_1464b6a91;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar6 = (longlong *)FUN_144718840(plVar5,DAT_14cb56270);
  if (((plVar5 == plVar6) || (plVar6 == (longlong *)0x0)) ||
     (lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6), lVar7 == 0)) goto LAB_14118edf3;
  local_40 = (code *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,4,0x10);
  local_38 = 4;
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar5 == (longlong *)0x0) {
LAB_14118efda:
    *(undefined ***)local_40 = &PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    *(longlong *)(local_40 + 0x10) = lVar8;
    *(undefined ***)local_40 = &PTR_FUN_14b4353f0;
    *(longlong *)(local_40 + 0x18) = 0;
    *(longlong *)(local_40 + 0x20) = 0;
    *(code **)(local_40 + 0x28) = FUN_140ff3c8a;
    *(undefined4 *)(local_40 + 0x30) = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    do {
      if (iVar3 == 0) goto LAB_14118efda;
      LOCK();
      iVar4 = (int)plVar5[1];
      bVar12 = iVar3 == iVar4;
      if (bVar12) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      iVar3 = iVar4;
      UNLOCK();
    } while (!bVar12);
    lVar10 = *(longlong *)(param_1 + 0x10);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined ***)local_40 = &PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    *(longlong *)(local_40 + 0x10) = lVar11;
    *(undefined ***)local_40 = &PTR_FUN_14b4353f0;
    *(longlong *)(local_40 + 0x18) = lVar10;
    *(longlong **)(local_40 + 0x20) = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    *(code **)(local_40 + 0x28) = FUN_140ff3c8a;
    *(undefined4 *)(local_40 + 0x30) = 0;
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (((local_38 == 0) || (local_40 == (code *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_40 + 0x30))(), cVar2 == '\0')) {
    if (local_38 != 0) {
      if (local_40 == (code *)0x0) goto LAB_14118edf3;
      (*(code *)**(undefined8 **)local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      goto LAB_14118edda;
    }
  }
  else {
    plVar5 = (longlong *)(lVar7 + 400);
    if (*(int *)(lVar7 + 0x1a4) < 1) {
      iVar3 = *(int *)(lVar7 + 0x198);
      iVar4 = *(int *)(lVar7 + 0x1a0) + -1;
      *(int *)(lVar7 + 0x1a0) = iVar4;
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
        if (0 < iVar3) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar5 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar5 + (longlong)iVar9 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar6 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar5,iVar9);
              FUN_14005b248(plVar5);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar4 = *(int *)(lVar7 + 0x198);
          } while (iVar9 < iVar4);
        }
        iVar9 = 2;
        if (2 < iVar4 * 2) {
          iVar9 = iVar4 * 2;
        }
        *(int *)(lVar7 + 0x1a0) = iVar9;
        if ((iVar9 < iVar3) && (*(int *)(lVar7 + 0x19c) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_38 != 0) && (local_40 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_40 + 0x38))(local_40,local_30);
    }
    iVar3 = *(int *)(lVar7 + 0x198);
    *(uint *)(lVar7 + 0x198) = iVar3 + 1U;
    if (*(uint *)(lVar7 + 0x19c) < iVar3 + 1U) {
      FUN_1447a71f6(plVar5,iVar3);
    }
    lVar7 = *plVar5;
    lVar10 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar7 + lVar10) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar10) = 0;
    *(code **)(lVar7 + lVar10) = local_40;
    local_40 = (code *)0x0;
    *(int *)(lVar7 + 8 + lVar10) = local_38;
LAB_14118edda:
    local_38 = 0;
  }
  if (local_40 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_14118edf3:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118f0fc FUN_14118f0fc body=932 status=ok
// SIG undefined FUN_14118f0fc(void)

void FUN_14118f0fc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) goto LAB_14118f2ce;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,4,0x10);
  local_38 = 4;
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 == (longlong *)0x0) {
LAB_14118f382:
    *local_40 = (longlong)&PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_40[2] = lVar9;
    *local_40 = (longlong)&PTR_FUN_14ab67020;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = (longlong)&LAB_1410027ca;
    *(undefined4 *)(local_40 + 6) = 0;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_14118f382;
      LOCK();
      iVar7 = (int)plVar2[1];
      bVar11 = iVar6 == iVar7;
      if (bVar11) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar11);
    lVar3 = *(longlong *)(param_1 + 0x10);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *local_40 = (longlong)&PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_40[2] = lVar10;
    *local_40 = (longlong)&PTR_FUN_14ab67020;
    local_40[3] = lVar3;
    local_40[4] = (longlong)plVar2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    local_40[5] = (longlong)&LAB_1410027ca;
    *(undefined4 *)(local_40 + 6) = 0;
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if (((local_38 == 0) || (local_40 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_40 + 0x30))(), cVar5 == '\0')) {
    if (local_38 != 0) {
      if (local_40 == (longlong *)0x0) goto LAB_14118f2ce;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      goto LAB_14118f2b8;
    }
  }
  else {
    plVar2 = (longlong *)(param_2 + 0x2b8);
    if (*(int *)(param_2 + 0x2cc) < 1) {
      iVar6 = *(int *)(param_2 + 0x2c0);
      iVar7 = *(int *)(param_2 + 0x2c8) + -1;
      *(int *)(param_2 + 0x2c8) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar2 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar2 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar2,iVar8);
              FUN_14005b248(plVar2);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar7 = *(int *)(param_2 + 0x2c0);
          } while (iVar8 < iVar7);
        }
        iVar8 = 2;
        if (2 < iVar7 * 2) {
          iVar8 = iVar7 * 2;
        }
        *(int *)(param_2 + 0x2c8) = iVar8;
        if ((iVar8 < iVar6) && (*(int *)(param_2 + 0x2c4) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_38 != 0) && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x38))(local_40,local_30);
    }
    iVar6 = *(int *)(param_2 + 0x2c0);
    *(uint *)(param_2 + 0x2c0) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x2c4) < iVar6 + 1U) {
      FUN_1447a71f6(plVar2,iVar6);
    }
    lVar3 = *plVar2;
    lVar9 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar3 + lVar9) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar9) = 0;
    *(longlong **)(lVar3 + lVar9) = local_40;
    local_40 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar9) = local_38;
LAB_14118f2b8:
    local_38 = 0;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14118f2ce:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14118f4a2 FUN_14118f4a2 body=55 status=ok
// SIG undefined FUN_14118f4a2(void)

void FUN_14118f4a2(longlong *param_1)

{
  FUN_14118f4da(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14118f4da FUN_14118f4da body=123 status=ok
// SIG undefined FUN_14118f4da(void)

void FUN_14118f4da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14118f556 FUN_14118f556 body=63 status=ok
// SIG undefined FUN_14118f556(void)

undefined1 FUN_14118f556(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14118f596(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 14118f596 FUN_14118f596 body=447 status=ok
// SIG undefined FUN_14118f596(void)

undefined1 * FUN_14118f596(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(param_2 + 0x94);
  FUN_14093c00e(param_1 + 0x98,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0xb8);
  uVar5 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  *(undefined4 *)(param_1 + 0xbc) = uVar5;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 200);
    pvVar2 = *(void **)(param_2 + 0xc0);
    *(int *)(param_1 + 200) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0xcc) == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0xc0,iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0xc0),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  uVar6 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0xec);
  uVar4 = *(undefined4 *)(param_2 + 0xf0);
  uVar5 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  *(undefined4 *)(param_1 + 0xf4) = uVar5;
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  *(undefined2 *)(param_1 + 0x174) = *(undefined2 *)(param_2 + 0x174);
  FUN_14093c00e(param_1 + 0x178,param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  uVar3 = *(undefined4 *)(param_2 + 0x194);
  uVar4 = *(undefined4 *)(param_2 + 0x198);
  uVar5 = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  *(undefined4 *)(param_1 + 0x198) = uVar4;
  *(undefined4 *)(param_1 + 0x19c) = uVar5;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x1a8);
    pvVar2 = *(void **)(param_2 + 0x1a0);
    *(int *)(param_1 + 0x1a8) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x1ac) == 0) {
      *(undefined4 *)(param_1 + 0x1ac) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x1a0,iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x1a0),pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  uVar6 = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar6;
  return param_1;
}



// FUNCTION 14118f766 FUN_14118f766 body=367 status=ok
// SIG undefined FUN_14118f766(void)

void FUN_14118f766(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar4 = (byte *)*param_2;
  if ((pbVar4 != (byte *)0x0) && ((~*pbVar4 & 3) == 0)) {
    plVar7 = (longlong *)FUN_1446e60f4(pbVar4,&DAT_14cbc55f0);
    lVar9 = *plVar7;
    plVar7 = (longlong *)plVar7[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (lVar9 != 0) {
      cVar6 = FUN_140d79696(lVar9);
      if (cVar6 != '\0') {
        uVar8 = FUN_140625092(lVar9,&DAT_14c9a12e0);
        if (DAT_14c947fe0 == 0) {
          lVar9 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar9);
          DAT_14c947fe0 = lVar9;
        }
        FUN_140045924(DAT_14c947fe0,&local_48,uVar8,1);
        iVar3 = *(int *)(param_1 + 0x460);
        lVar9 = (longlong)iVar3;
        *(uint *)(param_1 + 0x460) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x464) < iVar3 + 1U) {
          FUN_14118f8d6((longlong *)(param_1 + 0x458),iVar3);
        }
        lVar5 = *(longlong *)(param_1 + 0x458);
        *(undefined8 *)(lVar5 + lVar9 * 0x18) = local_48;
        *(undefined4 *)(lVar5 + 8 + lVar9 * 0x18) = 0x4000;
        *(undefined8 *)(lVar5 + 0x10 + lVar9 * 0x18) = 0;
      }
    }
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
  }
  FUN_140a45dbe(param_1,param_2);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14118f8d6 FUN_14118f8d6 body=370 status=ok
// SIG undefined FUN_14118f8d6(void)

void FUN_14118f8d6(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14118f95f;
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
LAB_14118f95f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14118fa48 FUN_14118fa48 body=40 status=ok
// SIG undefined FUN_14118fa48(void)

undefined8 FUN_14118fa48(undefined8 param_1,int param_2)

{
  FUN_14118fa70();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14118fa70 FUN_14118fa70 body=887 status=ok
// SIG undefined FUN_14118fa70(void)

void FUN_14118fa70(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b94ea20;
  FUN_140368c45(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x16) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x16) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0xa4) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x13) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x13) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x8c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x10) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x10) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  plVar4 = (longlong *)param_1[0xf];
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
  FUN_14118fde8(param_1);
  return;
}


