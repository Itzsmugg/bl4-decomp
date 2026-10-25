// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143e09b18 FUN_143e09b18 body=389 status=ok
// SIG undefined FUN_143e09b18(void)

longlong * FUN_143e09b18(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_4 + 0x150) != 0) {
    lVar6 = *(longlong *)(param_4 + 0x148);
    lVar5 = (longlong)*(int *)(param_4 + 0x150) * 0x88;
    do {
      if (*(ulonglong **)(lVar6 + 0x50) == (ulonglong *)0x0) {
        uVar8 = 0;
        uVar7 = 0;
      }
      else {
        uVar8 = **(ulonglong **)(lVar6 + 0x50);
        uVar7 = uVar8 & 0xffffffff;
        uVar8 = uVar8 & 0xffffffff00000000;
      }
      if (*(ulonglong *)(param_1 + 8) == *(ulonglong *)(lVar6 + 0x48)) {
LAB_143e09ba9:
        if (lVar6 != 0) {
          plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
          plVar4[1] = (longlong)&DAT_100000001;
          *plVar4 = (longlong)&PTR_FUN_14b420c90;
          plVar1 = plVar4 + 2;
          plVar4[3] = 0;
          plVar4[4] = 0;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          plVar4[8] = 0;
          plVar4[9] = 0;
          plVar4[2] = (longlong)&PTR_FUN_14b420ca8;
          local_40 = plVar1;
          local_38 = plVar4;
          FUN_148939c7c(&local_40,plVar1);
          FUN_1489339dc(plVar1,lVar6,*(undefined1 *)(param_1 + 0x10));
          plVar3 = local_38;
          *param_2 = (longlong)plVar1;
          param_2[1] = (longlong)plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            if (local_38 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_38 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_38)(local_38);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                  goto LAB_143e09bb4;
                }
              }
            }
          }
          if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
            return param_2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        break;
      }
      if ((uVar7 | uVar8) != 0 && *(ulonglong *)(param_1 + 8) == (uVar7 | uVar8))
      goto LAB_143e09ba9;
      lVar6 = lVar6 + 0x88;
      lVar5 = lVar5 + -0x88;
    } while (lVar5 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_143e09bb4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 143e09c9e FUN_143e09c9e body=1088 status=ok
// SIG undefined FUN_143e09c9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143e09c9e(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_4 + 0x140) != 0) {
    lVar8 = *(longlong *)(param_4 + 0x138);
    lVar5 = (longlong)*(int *)(param_4 + 0x140) * 0xa8;
    do {
      if (*(ulonglong **)(lVar8 + 0x50) == (ulonglong *)0x0) {
        uVar11 = 0;
        uVar9 = 0;
      }
      else {
        uVar11 = **(ulonglong **)(lVar8 + 0x50);
        uVar9 = uVar11 & 0xffffffff;
        uVar11 = uVar11 & 0xffffffff00000000;
      }
      if ((*(ulonglong *)(param_1 + 8) == *(ulonglong *)(lVar8 + 0x48)) ||
         ((uVar9 | uVar11) != 0 && *(ulonglong *)(param_1 + 8) == (uVar9 | uVar11))) {
        if (lVar8 != 0) {
          plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
          plVar4[1] = (longlong)&DAT_100000001;
          *plVar4 = (longlong)&PTR_FUN_14b420d30;
          plVar4[3] = 0;
          plVar4[4] = 0;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          plVar4[8] = 0;
          plVar4[9] = 0;
          plVar13 = plVar4 + 2;
          *plVar13 = (longlong)&PTR_FUN_14b420d48;
          if (plVar13 != (longlong *)0x0) {
            if (plVar4 == (longlong *)0x0) {
              _DAT_00000018 = 0x10;
              plVar12 = (longlong *)&DAT_00000020;
              plVar6 = _DAT_00000020;
              if (_DAT_00000020 != (longlong *)0x0) {
LAB_143e0a003:
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar6 + 0x10))();
                }
                *plVar12 = (longlong)plVar4;
                if (plVar4 != (longlong *)0x0) goto LAB_143e09dc3;
              }
            }
            else {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              plVar4[3] = (longlong)plVar13;
              if ((longlong *)plVar4[4] != plVar4) {
                LOCK();
                *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
                UNLOCK();
                if ((longlong *)plVar4[4] != (longlong *)0x0) {
                  plVar12 = plVar4 + 4;
                  plVar6 = (longlong *)plVar4[4];
                  goto LAB_143e0a003;
                }
                plVar4[4] = (longlong)plVar4;
              }
LAB_143e09dc3:
              LOCK();
              plVar12 = plVar4 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
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
          }
          *(undefined1 *)(plVar4 + 9) = *(undefined1 *)(param_1 + 0x10);
          local_50 = (undefined8 *)0x0;
          local_48 = 0;
          FUN_1446efa72(&local_50,0,4,0x10);
          local_48 = 4;
          plVar12 = (longlong *)plVar4[4];
          if (plVar12 == (longlong *)0x0) goto LAB_143e09f91;
          iVar3 = (int)plVar12[1];
          goto LAB_143e09e23;
        }
        break;
      }
      lVar8 = lVar8 + 0xa8;
      lVar5 = lVar5 + -0xa8;
    } while (lVar5 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
LAB_143e09f91:
  *local_50 = &PTR_LAB_14b420dd0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_50[2] = lVar7;
  *local_50 = &PTR_FUN_14b420d60;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = FUN_140d10b66;
  *(undefined4 *)(local_50 + 6) = 0;
  goto LAB_143e09ec0;
  while( true ) {
    LOCK();
    iVar2 = (int)plVar12[1];
    bVar14 = iVar3 == iVar2;
    if (bVar14) {
      *(int *)(plVar12 + 1) = iVar3 + 1;
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    UNLOCK();
    if (bVar14) break;
LAB_143e09e23:
    if (iVar3 == 0) goto LAB_143e09f91;
  }
  lVar5 = plVar4[3];
  LOCK();
  *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
  UNLOCK();
  *local_50 = &PTR_LAB_14b420dd0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_50[2] = lVar10;
  *local_50 = &PTR_FUN_14b420d60;
  local_50[3] = lVar5;
  local_50[4] = plVar12;
  LOCK();
  *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
  UNLOCK();
  local_50[5] = FUN_140d10b66;
  *(undefined4 *)(local_50 + 6) = 0;
  LOCK();
  plVar6 = plVar12 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  LOCK();
  plVar6 = plVar12 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  LOCK();
  plVar6 = plVar12 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_143e09ec0:
  FUN_140e588ce(lVar8 + 0x18,local_58,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_143e09f1c;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e09f1c:
  FUN_140d10b66(plVar13,lVar8);
  *param_2 = plVar13;
  param_2[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar4 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0a0e0 FUN_143e0a0e0 body=385 status=ok
// SIG undefined FUN_143e0a0e0(void)

longlong * FUN_143e0a0e0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_4 + 0x140) != 0) {
    lVar6 = *(longlong *)(param_4 + 0x138);
    lVar5 = (longlong)*(int *)(param_4 + 0x140) * 0xa8;
    do {
      if (*(ulonglong **)(lVar6 + 0x50) == (ulonglong *)0x0) {
        uVar8 = 0;
        uVar7 = 0;
      }
      else {
        uVar8 = **(ulonglong **)(lVar6 + 0x50);
        uVar7 = uVar8 & 0xffffffff;
        uVar8 = uVar8 & 0xffffffff00000000;
      }
      if (*(ulonglong *)(param_1 + 8) == *(ulonglong *)(lVar6 + 0x48)) {
LAB_143e0a16d:
        if (lVar6 != 0) {
          plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
          plVar4[1] = (longlong)&DAT_100000001;
          *plVar4 = (longlong)&PTR_FUN_14b420ee0;
          plVar1 = plVar4 + 2;
          plVar4[3] = 0;
          plVar4[4] = 0;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          plVar4[8] = 0;
          plVar4[9] = 0;
          plVar4[2] = (longlong)&PTR_FUN_14b420ef8;
          local_40 = plVar1;
          local_38 = plVar4;
          FUN_14893a914(&local_40,plVar1);
          FUN_148933db4(plVar1,lVar6,*(undefined1 *)(param_1 + 0x10));
          plVar3 = local_38;
          *param_2 = (longlong)plVar1;
          param_2[1] = (longlong)plVar4;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            if (local_38 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_38 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_38)(local_38);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                  goto LAB_143e0a178;
                }
              }
            }
          }
          if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
            return param_2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        break;
      }
      if ((uVar7 | uVar8) != 0 && *(ulonglong *)(param_1 + 8) == (uVar7 | uVar8))
      goto LAB_143e0a16d;
      lVar6 = lVar6 + 0xa8;
      lVar5 = lVar5 + -0xa8;
    } while (lVar5 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_143e0a178:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 143e0a262 FUN_143e0a262 body=297 status=ok
// SIG undefined FUN_143e0a262(void)

void FUN_143e0a262(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_143e0a38c(param_4);
  if (lVar4 != 0) {
    lVar5 = FUN_14893585c(param_2 + 0xf0,lVar4);
    if (lVar5 == 0) {
      if (param_3 == 0) {
        FUN_140056680(&local_48,&DAT_149e01fe8);
      }
      else {
        FUN_1410a6380(param_3,&local_48);
      }
      if (local_48 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_48 = &LAB_148934298;
      local_40 = 0;
      FUN_1489341aa(lVar5 + 0x18,local_38,param_1);
      uVar3 = FUN_140fcdefe(param_2 + 0xf0,lVar4);
      iVar6 = 0;
      if ((-1 < (int)uVar3) && (iVar6 = 0, (int)uVar3 < *(int *)(param_2 + 0x120))) {
        iVar6 = *(int *)(*(longlong *)(param_2 + 0x118) + (ulonglong)uVar3 * 4);
      }
      bVar2 = *(int *)(param_1 + 0x38) <= iVar6;
      if ((((bool)*(char *)(param_1 + 0x30) != bVar2) &&
          (*(bool *)(param_1 + 0x30) = bVar2, *(int *)(param_1 + 0x20) != 0)) &&
         (plVar1 = *(longlong **)(param_1 + 0x18), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0a38c FUN_143e0a38c body=130 status=ok
// SIG undefined FUN_143e0a38c(void)

void FUN_143e0a38c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_145764ed6();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar4 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,param_1);
    }
    param_1[2] = lVar4;
    return;
  }
  return;
}



// FUNCTION 143e0a426 FUN_143e0a426 body=770 status=ok
// SIG undefined FUN_143e0a426(void)

void FUN_143e0a426(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  plVar7 = (longlong *)param_1[4];
  if (plVar7 == (longlong *)0x0) goto LAB_143e0a4d3;
  uVar6 = FUN_140f5697c();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
  if (plVar7 == (longlong *)0x0) goto LAB_143e0a4d3;
  uVar6 = FUN_140f5697c();
  plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
  if ((((((plVar8 == (longlong *)0x0 || plVar7 == plVar8) || (param_1[4] == 0)) ||
        (param_1 == (longlong *)0x0)) ||
       (((*(uint *)(param_1[4] + 8) & 0x40000000) != 0 || (lVar5 == 0)))) ||
      ((*(uint *)(param_1 + 1) & 0x40000000) != 0)) ||
     (((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0 || (*(char *)(lVar5 + 0x158) != '\0'))))
  goto LAB_143e0a4d3;
  FUN_14893484c(param_1);
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_14009b010(&local_48,3,0);
  FUN_140a30178(param_1,&local_48);
  lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8);
  FUN_140e5721a(param_1,lVar9);
  lVar5 = param_1[0x22];
  if (lVar5 == 0) {
    uVar6 = FUN_140e2014e();
    lVar5 = FUN_14477b664(uVar6);
    param_1[0x22] = lVar5;
  }
  plVar7 = param_1 + 0x21;
  lVar10 = param_1[0x23];
  if (((lVar10 == 0) && (lVar10 = 0, lVar5 != 0)) && (*plVar7 != 0)) {
    plVar8 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
      lVar10 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar10 = FUN_144aff482(uVar6,plVar7);
    }
    param_1[0x23] = lVar10;
  }
  plVar8 = (longlong *)(lVar10 + 8);
  if (*(char *)(lVar10 + 0x10) == '\0') {
LAB_143e0a5d4:
    lVar5 = *plVar8;
    if ((lVar5 == 0) ||
       ((*(longlong *)(lVar5 + 0x58) == 0 && ((*(byte *)(lVar5 + 0x2c) & 0x20) == 0))))
    goto LAB_143e0a5f1;
    FUN_14128c6d2(param_1,&local_48);
    *(undefined1 *)((longlong)param_1 + 0x192) = 1;
  }
  else {
    if (*(char *)(lVar10 + 0x10) == '\x02') {
      plVar8 = (longlong *)(*plVar8 + 0x30);
      goto LAB_143e0a5d4;
    }
LAB_143e0a5f1:
    lVar5 = param_1[0x22];
    if (lVar5 == 0) {
      uVar6 = FUN_140e2014e();
      lVar5 = FUN_14477b664(uVar6);
      param_1[0x22] = lVar5;
      lVar10 = param_1[0x23];
    }
    if (((lVar10 == 0) && (lVar10 = 0, lVar5 != 0)) && (*plVar7 != 0)) {
      plVar8 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar10 = FUN_144aff482(uVar6,plVar7);
      }
      param_1[0x23] = lVar10;
    }
    iVar2 = *(int *)(lVar9 + 0xb8);
    if ((longlong)iVar2 != 0) {
      lVar5 = *(longlong *)(lVar9 + 0xb0);
      lVar12 = 0;
      do {
        lVar3 = *(longlong *)(lVar5 + lVar12);
        if ((lVar3 != 0) && (lVar11 = FUN_1401cd362(lVar3), lVar11 == lVar10)) {
          FUN_1489352e2(lVar9,lVar3);
          break;
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar2 * 8 != lVar12);
    }
  }
  plVar7 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_40 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_143e0a4d3:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e0a72a FUN_143e0a72a body=60 status=ok
// SIG undefined FUN_143e0a72a(void)

void FUN_143e0a72a(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x192) == '\x01') {
    lVar1 = FUN_1458401f2();
    if (lVar1 != 0) {
      FUN_140d112b8(lVar1 + 0x18,lVar1,param_1);
    }
    *(undefined1 *)(param_1 + 0x192) = 0;
  }
  return;
}



// FUNCTION 143e0a766 FUN_143e0a766 body=186 status=ok
// SIG undefined FUN_143e0a766(void)

int FUN_143e0a766(longlong param_1,uint param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_3 < 1) {
    if (-1 < param_3) goto LAB_143e0a795;
    bVar1 = *(byte *)(param_1 + 0x181) & 2;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x181) & 1;
  }
  if (bVar1 == 0) {
    return 0;
  }
LAB_143e0a795:
  iVar3 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x140))) {
    if ((param_3 < 1) ||
       (*(char *)(*(longlong *)(param_1 + 0x138) + 0x90 + (ulonglong)param_2 * 0xa8) != '\0')) {
      lVar4 = *(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 0xa8;
      iVar3 = FUN_14128cbda(lVar4,lVar4 + 0x94,*(int *)(lVar4 + 0x94) + param_3,1);
      iVar3 = *(int *)(lVar4 + 0x94) - iVar3;
      cVar2 = FUN_140e58abc(param_1);
      if ((cVar2 == '\0') && (iVar3 != 0)) {
        FUN_1464f6842(param_1,param_2,param_3);
      }
    }
    else {
      FUN_140e58abc(param_1);
    }
  }
  return iVar3;
}



// FUNCTION 143e0a8e0 FUN_143e0a8e0 body=334 status=ok
// SIG undefined FUN_143e0a8e0(void)

void FUN_143e0a8e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(param_1 + 0xe0);
  FUN_145ce0c30(plVar3,*(undefined4 *)(param_2 + 0x30));
  iVar4 = *(int *)(param_2 + 0x30);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_2 + 0x28);
    lVar10 = 0;
    do {
      plVar7 = *(longlong **)(lVar6 + lVar10);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_58,param_1);
      plVar2 = local_50;
      lVar9 = local_58;
      if (local_58 != 0) {
        *(longlong **)(local_58 + 0x18) = plVar7;
        *(longlong *)(local_58 + 0x20) = param_1;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        iVar5 = *(int *)(param_1 + 0xe8);
        *(uint *)(param_1 + 0xe8) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0xec) < iVar5 + 1U) {
          FUN_14034f33e(plVar3,iVar5);
        }
        lVar8 = *plVar3;
        *(longlong *)(lVar8 + (longlong)iVar5 * 0x10) = lVar9;
        *(longlong **)(lVar8 + 8 + (longlong)iVar5 * 0x10) = plVar2;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar7 = plVar2 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
      }
      plVar7 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)iVar4 * 0x18 != lVar10);
  }
  FUN_1410cebe2(param_1 + 0x60,param_1);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0aa30 FUN_143e0aa30 body=514 status=ok
// SIG undefined FUN_143e0aa30(void)

void FUN_143e0aa30(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  undefined8 local_88;
  ulonglong uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x18);
  FUN_145ad334c(plVar1,*(undefined4 *)(param_2 + 1));
  if ((param_3 != '\0') || (*(int *)(param_1 + 0x30) == 0)) {
    local_90 = local_90 & 0xffffffff00000000;
    FUN_1448156a8(param_1 + 0x28,&local_90,*(undefined4 *)(param_2 + 1));
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar9 = (ulonglong *)*param_2;
    lVar10 = (longlong)*(int *)(param_2 + 1) * 0x18;
    do {
      uVar7 = puVar9[1];
      if (uVar7 == 0) {
        uVar6 = FUN_145764ed6();
        uVar7 = FUN_14477b664(uVar6);
        puVar9[1] = uVar7;
      }
      uVar8 = *puVar9;
      if (puVar9[2] == 0) {
        if (uVar7 != 0 && uVar8 != 0) {
          plVar3 = *(longlong **)(uVar7 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
            puVar9[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            uVar7 = FUN_144aff482(uVar6,puVar9);
            puVar9[2] = uVar7;
            if (uVar7 != 0) {
              uVar8 = *puVar9;
              uVar7 = puVar9[1];
              goto LAB_143e0ab50;
            }
          }
        }
      }
      else {
LAB_143e0ab50:
        local_88 = 0;
        uStack_80 = 0;
        local_90 = uVar8;
        uVar6 = FUN_14477b664(uVar7);
        local_88 = FUN_14477b664(uVar6);
        uStack_80 = puVar9[2];
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 2;
        iVar2 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
          FUN_14893c0d0(plVar1,iVar2);
        }
        lVar4 = *plVar1;
        FUN_14655bb06((longlong)iVar2 * 0x30 + lVar4,&local_90);
        lVar4 = (longlong)iVar2 * 0x30 + lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(undefined8 *)(lVar4 + 0x20) = 0;
        *(undefined8 *)(lVar4 + 0x28) = 2;
        FUN_14019d794((undefined8 *)(lVar4 + 0x18),&local_78);
        FUN_144760e21(local_78,uStack_70 & 0xffffffff);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      puVar9 = puVar9 + 3;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e0ac34 FUN_143e0ac34 body=210 status=ok
// SIG undefined FUN_143e0ac34(void)

ulonglong FUN_143e0ac34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  lVar7 = FUN_141498ff6(param_2,param_1);
  if (((lVar7 != 0) && (cVar3 = FUN_140a30c40(lVar7), cVar3 != '\0')) &&
     (lVar8 = FUN_140a489cc(lVar7), lVar8 != 0)) {
    uVar4 = FUN_140a4890a(param_1,lVar8);
    lVar8 = FUN_148935028(param_3,param_1,param_2);
    iVar6 = 0;
    if ((int)uVar4 < 1 || lVar8 == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(lVar8 + 0x50);
    if ((lVar1 != 0) && (iVar6 = 0x7fffffff, *(char *)(lVar1 + 8) == '\x01')) {
      iVar6 = *(int *)(lVar1 + 0xc);
    }
    uVar9 = iVar6 - *(int *)(lVar8 + 0x94);
    uVar2 = (uint3)(uVar9 >> 8);
    if (uVar9 == 0 || iVar6 < *(int *)(lVar8 + 0x94)) {
      return CONCAT71((uint7)uVar2,1);
    }
    if (uVar9 <= uVar4) {
      uVar5 = FUN_141498f32(param_3,param_1,param_2);
      iVar6 = FUN_143e0a766(lVar7,uVar5,uVar9);
      return (ulonglong)CONCAT31(uVar2,iVar6 != 0);
    }
  }
  return 0;
}



// FUNCTION 143e0ae28 FUN_143e0ae28 body=118 status=ok
// SIG undefined FUN_143e0ae28(void)

void FUN_143e0ae28(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  *(int *)(param_1 + 0x100) = param_2;
  bVar4 = param_2 == 0;
  puVar1 = &DAT_14cb89d18;
  if (bVar4) {
    puVar1 = (undefined4 *)&DAT_14cb899f8;
  }
  puVar2 = &DAT_14cb89a50;
  if (bVar4) {
    puVar2 = &DAT_14cb89a20;
  }
  puVar3 = &DAT_14cb89a48;
  if (bVar4) {
    puVar3 = &DAT_14cb899f0;
  }
  FUN_1447715ec(param_1 + 0x28,puVar1);
  FUN_1447715ec(param_1 + 0x50,puVar2);
  *(undefined8 *)(param_1 + 0x80) = *puVar3;
  return;
}



// FUNCTION 143e0ae9e FUN_143e0ae9e body=41 status=ok
// SIG undefined FUN_143e0ae9e(void)

void FUN_143e0ae9e(void)

{
  DAT_14cb89ac8 = 0;
  if (DAT_14cb89ac0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67664();
  return;
}



// FUNCTION 143e0af06 FUN_143e0af06 body=348 status=ok
// SIG undefined FUN_143e0af06(void)

void FUN_143e0af06(longlong param_1,longlong param_2,int param_3,undefined8 param_4,uint param_5,
                  undefined8 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_5;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x30);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar9 * 0x30);
  if (lVar8 == 0) {
    uVar6 = FUN_145764ed6();
    lVar8 = FUN_14477b664(uVar6);
    plVar1[1] = lVar8;
  }
  lVar7 = plVar1[2];
  if (lVar7 == 0) {
    lVar7 = 0;
    if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_143e0aff1;
    plVar2 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      plVar1[2] = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar7 = FUN_144aff482(uVar6,plVar1);
      plVar1[2] = lVar7;
      if (lVar7 != 0) goto LAB_143e0af61;
    }
    lVar7 = 0;
  }
  else {
LAB_143e0af61:
    if ((*(int *)(lVar7 + 0x34) != param_3) &&
       (((param_2 == 0 || (*(char *)(param_2 + 0xd68) == '\x01')) &&
        (cVar3 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar3 != '\0')))) {
      return;
    }
  }
LAB_143e0aff1:
  lVar8 = *(longlong *)(param_1 + 0x28);
  uVar4 = FUN_140e1edd4(param_6,*(undefined4 *)(lVar8 + uVar9 * 4));
  *(undefined4 *)(lVar8 + uVar9 * 4) = uVar4;
  iVar5 = FUN_140a4890a(param_4,lVar7);
  if (-1 < iVar5) {
    return;
  }
  FUN_148935522(param_4,lVar7);
  return;
}



// FUNCTION 143e0b062 FUN_143e0b062 body=130 status=ok
// SIG undefined FUN_143e0b062(void)

longlong FUN_143e0b062(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x60) == 0) ||
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x20), lVar5 == 0)) {
    lVar3 = *(longlong *)(param_1 + 0x50);
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0x18);
      plVar4 = *(longlong **)(lVar3 + 0x20);
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
  return lVar5;
}



// FUNCTION 143e0b0e4 FUN_143e0b0e4 body=39 status=ok
// SIG undefined FUN_143e0b0e4(void)

undefined8 *
FUN_143e0b0e4(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  if (param_4 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 143e0b10c FUN_143e0b10c body=316 status=ok
// SIG undefined FUN_143e0b10c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143e0b10c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar2 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b421490;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar4 = plVar2 + 2;
  *plVar4 = (longlong)&PTR_FUN_14b41ff10;
  plVar2[7] = 0;
  plVar2[8] = 0;
  if (plVar4 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return param_2;
    }
    goto LAB_143e0b1a3;
  }
  if (plVar2 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar3 = _DAT_00000020;
    if (_DAT_00000020 == (longlong *)0x0) goto LAB_143e0b21f;
LAB_143e0b207:
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    *plVar5 = (longlong)plVar2;
    if (plVar2 == (longlong *)0x0) {
LAB_143e0b21f:
      *param_2 = plVar4;
      param_2[1] = plVar2;
      return param_2;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar2[3] = (longlong)plVar4;
    if ((longlong *)plVar2[4] != plVar2) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar2[4] != (longlong *)0x0) {
        plVar5 = plVar2 + 4;
        plVar3 = (longlong *)plVar2[4];
        goto LAB_143e0b207;
      }
      plVar2[4] = (longlong)plVar2;
    }
  }
  LOCK();
  plVar5 = plVar2 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *param_2 = plVar4;
  param_2[1] = plVar2;
LAB_143e0b1a3:
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
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
  return param_2;
}



// FUNCTION 143e0b248 FUN_143e0b248 body=33 status=ok
// SIG undefined FUN_143e0b248(void)

void FUN_143e0b248(longlong param_1)

{
  FUN_141499196();
  FUN_1447f69b6(param_1 + 0x390);
  return;
}



// FUNCTION 143e0b314 FUN_143e0b314 body=69 status=ok
// SIG undefined FUN_143e0b314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e0b314(void)

{
  _DAT_14cb89bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e0b356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb89bf8,1);
  return;
}



// FUNCTION 143e0b359 FUN_143e0b359 body=69 status=ok
// SIG undefined FUN_143e0b359(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e0b359(void)

{
  _DAT_14cb89c00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e0b39b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb89c08,1);
  return;
}



// FUNCTION 143e0b494 FUN_143e0b494 body=1410 status=ok
// SIG undefined FUN_143e0b494(void)

void FUN_143e0b494(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  undefined4 local_80;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if ((*(longlong *)(param_1 + 8) == 0) ||
     (plVar6 = *(longlong **)(param_1 + 0x10), plVar6 == (longlong *)0x0)) goto LAB_143e0b72b;
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 8) == '\0') {
    cVar5 = (**(code **)(*plVar6 + 0x68))();
    if (cVar5 == '\0') goto LAB_143e0b72b;
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x10);
    }
  }
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x38))();
  if ((plVar6 == (longlong *)0x0) || ((char)plVar6[0x2f] != '\x03')) goto LAB_143e0b72b;
  lVar10 = *(longlong *)(param_1 + 0x18);
  cVar5 = *(char *)(lVar10 + 0x10);
  if (cVar5 == '\0') {
    if (*(longlong *)(lVar10 + 0x30) == 0) goto LAB_143e0b539;
LAB_143e0b76d:
    plVar7 = plVar6;
    if (*(char *)(lVar10 + 0x48) == '\0') {
      plVar7 = *(longlong **)(param_1 + 8);
    }
    local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(&local_a8,plVar7);
    FUN_140168de2(lVar10 + 0x10,local_70,&local_a8);
    cVar5 = FUN_140168b7a(local_70,0);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar12 = local_70;
      if (0x18 < local_58) {
        ppppuVar12 = (undefined8 ****)local_70[0];
      }
      (*pcVar4)(ppppuVar12);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8();
    if (((char)local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
    }
    if (cVar5 != '\0') goto LAB_143e0b539;
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 8) != '\x01') goto LAB_143e0b72b;
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x10);
    }
    lVar10 = *plVar6;
    uVar8 = 0;
  }
  else {
    if (((cVar5 == '\x01') || (cVar5 == '\x02')) && (*(longlong *)(lVar10 + 0x18) != 0))
    goto LAB_143e0b76d;
LAB_143e0b539:
    *(undefined1 *)(param_1 + 0x28) = 1;
    plVar7 = (longlong *)(**(code **)(*plVar6 + 0x5d0))(plVar6);
    if (plVar7 == (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x588))(plVar6,param_1 + 0x30,param_1 + 0x48);
    }
    else {
      (**(code **)(*plVar7 + 0x718))();
    }
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 9) == '\x01') {
      plVar7 = (longlong *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x6c) < 0) {
        FUN_14480809c(plVar7,0);
      }
      uVar8 = FUN_1410b2f8c();
      plVar9 = (longlong *)FUN_144718840(plVar6,uVar8);
      if (plVar9 == (longlong *)0x0) {
        local_a8 = (code *)0x0;
        uStack_a0 = 0;
        FUN_14490f2e4(plVar6,&local_a8,1,0);
        if ((int)uStack_a0 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uStack_a0 & 0xffffffff);
        }
        if (*(int *)(param_1 + 0x6c) < (int)uStack_a0) {
          FUN_14480809c(plVar7);
        }
        pcVar4 = local_a8;
        if ((int)uStack_a0 != 0) {
          lVar10 = (longlong)(int)uStack_a0;
          lVar11 = 0;
          do {
            if (*(longlong *)(pcVar4 + lVar11) != 0) {
              uVar2 = *(undefined4 *)(*(longlong *)(pcVar4 + lVar11) + 0xc);
              iVar3 = *(int *)(param_1 + 0x68);
              *(uint *)(param_1 + 0x68) = iVar3 + 1U;
              if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
                FUN_1447808da(plVar7,iVar3);
              }
              *(undefined4 *)(*plVar7 + (longlong)iVar3 * 4) = uVar2;
            }
            lVar11 = lVar11 + 8;
          } while (lVar10 * 8 != lVar11);
        }
        if (((plVar6[0x39] != 0) && (lVar10 = *(longlong *)(plVar6[0x39] + 0x120), lVar10 != 0)) &&
           ((lVar10 = *(longlong *)(lVar10 + 0xa8), lVar10 != 0 &&
            ((*(byte *)(lVar10 + 0x62) & 4) != 0)))) {
          uVar2 = *(undefined4 *)(lVar10 + 0xc);
          iVar3 = *(int *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x68) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
            FUN_1447808da(plVar7,iVar3);
          }
          *(undefined4 *)(*plVar7 + (longlong)iVar3 * 4) = uVar2;
        }
        if (local_a8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        (**(code **)(*plVar9 + 0x10))(plVar9,plVar7,0);
      }
      *(undefined1 *)(param_1 + 0x70) = 0;
      if (DAT_14cb223d8 == 0) {
        local_c0 = &local_a8;
        local_a8 = FUN_1449e2820;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_1427b09ee;
        local_c8 = &LAB_147f29feb;
        local_d0 = FUN_1464384fe;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10004001;
        local_f0 = 8;
        local_f8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14cb223d8);
      if (plVar6 != (longlong *)0x0) {
        if (DAT_14cb223d8 == 0) {
          local_c0 = &local_a8;
          local_a8 = FUN_1449e2820;
          local_b0 = FUN_14081d0ea;
          local_b8 = FUN_1427b09ee;
          local_c8 = &LAB_147f29feb;
          local_d0 = FUN_1464384fe;
          local_d8 = L"Engine";
          local_e0 = 0;
          local_e8 = 0x10004001;
          local_f0 = 8;
          local_f8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14cb223d8);
        if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
          lVar10 = (**(code **)(*plVar7 + 0x10))();
          if (((lVar10 != 0) &&
              ((((*(char *)(lVar10 + 0x52) == '\0' && (*(char *)(lVar10 + 0x50) == '\x01')) &&
                (lVar11 = *(longlong *)(lVar10 + 0x20), lVar11 != 0)) &&
               ((*(short *)(lVar10 + 0x28) < 0 || (*(longlong *)(lVar10 + 0x30) != 0)))))) &&
             (*(char *)(lVar11 + 0x88) == '\x01')) {
            *(char *)(param_1 + 0x70) = (char)(1 << (*(byte *)(lVar11 + 0x89) & 0x1f));
          }
        }
      }
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x18) + 8) != '\x01') ||
       (*(char *)(*(longlong *)(param_1 + 0x18) + 9) != '\0')) goto LAB_143e0b72b;
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x10);
    }
    lVar10 = *plVar6;
    uVar8 = 1;
  }
  (**(code **)(lVar10 + 0x70))(plVar6,uVar8);
LAB_143e0b72b:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e0ba18 FUN_143e0ba18 body=1174 status=ok
// SIG undefined FUN_143e0ba18(void)

void FUN_143e0ba18(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined8 *local_2a0;
  undefined1 *local_298;
  longlong local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined1 local_250 [4];
  undefined4 local_24c;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined4 local_1ac;
  undefined4 local_180;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined1 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0 [4];
  undefined4 *local_b0;
  uint local_a8;
  uint local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 8) == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = *(longlong **)(param_1 + 0x10);
    }
    lVar9 = (**(code **)(*plVar12 + 0x38))();
    if (lVar9 != 0) {
      dVar6 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 0x48),0x4076800000000000);
      dVar7 = (double)FUN_144719204((int)*(undefined8 *)(param_1 + 0x50),0x4076800000000000);
      dVar4 = sin(dVar6 * 0.017453292519943295);
      dVar6 = cos(dVar6 * 0.017453292519943295);
      dVar5 = sin(dVar7 * 0.017453292519943295);
      dVar7 = cos(dVar7 * 0.017453292519943295);
      if (*(longlong *)(param_1 + 8) == 0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = *(longlong **)(param_1 + 0x10);
      }
      dVar5 = dVar5 * dVar6;
      dVar7 = dVar7 * dVar6;
      (**(code **)(*plVar12 + 0x10))();
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (*(char *)(lVar3 + 9) == '\x01') {
        dVar6 = (double)*(float *)(lVar3 + 0xc);
        local_288 = param_1 + 0x30;
        local_140 = dVar4 * dVar6 + *(double *)(param_1 + 0x40);
        local_148 = dVar5 * dVar6 + *(double *)(param_1 + 0x38);
        local_150 = dVar7 * dVar6 + *(double *)(param_1 + 0x30);
        local_fc = 0;
        local_f8 = 0x101;
        local_d0 = 0;
        local_c8 = 0x800000000;
        local_b0 = (undefined4 *)0x0;
        local_a4 = 4;
        local_110 = 1;
        local_104 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_10f = 1;
        local_10d = 0;
        local_100 = 0;
        local_10c = 0x1000000;
        local_108 = 1;
        local_c0[0] = *(undefined4 *)(lVar9 + 0xc);
        local_a8 = 1;
        iVar1 = *(int *)(param_1 + 0x68);
        if ((longlong)iVar1 != 0) {
          lVar3 = *(longlong *)(param_1 + 0x60);
          lVar13 = 0;
          do {
            uVar2 = *(undefined4 *)(lVar3 + lVar13);
            lVar14 = (longlong)(int)local_a8;
            local_a8 = local_a8 + 1;
            if (local_a4 < local_a8) {
              FUN_1447de67e(local_c0);
            }
            puVar10 = local_b0;
            if (local_b0 == (undefined4 *)0x0) {
              puVar10 = local_c0;
            }
            puVar10[lVar14] = uVar2;
            lVar13 = lVar13 + 4;
          } while ((longlong)iVar1 * 4 != lVar13);
        }
        local_100 = *(undefined1 *)(param_1 + 0x70);
        uVar11 = FUN_1447210f0(lVar9);
        memset(local_250,0,0x100);
        local_180 = 0xffffffff;
        local_24c = 0x3f800000;
        local_1ac = 0xffffffff;
        local_298 = &DAT_14cad0f10;
        local_2a8 = 0x10;
        local_2a0 = &local_120;
        cVar8 = FUN_1400b50cc(uVar11,local_250,local_288,&local_150);
        if (cVar8 != '\0') {
          if (*(longlong *)(param_1 + 8) == 0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            plVar12 = *(longlong **)(param_1 + 0x10);
          }
          local_258 = local_230;
          local_268 = local_240;
          uStack_264 = uStack_23c;
          uStack_260 = uStack_238;
          uStack_25c = uStack_234;
          (**(code **)(*plVar12 + 0x88))();
          if (*(char *)(*(longlong *)(param_1 + 0x18) + 8) == '\x01') {
            if (*(longlong *)(param_1 + 8) == 0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = *(longlong **)(param_1 + 0x10);
            }
            (**(code **)(*plVar12 + 0x70))(plVar12,1);
          }
        }
        if (local_b0 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        dVar6 = (local_128 - *(double *)(param_1 + 0x40)) * dVar4 +
                (local_138 - *(double *)(param_1 + 0x30)) * dVar7 +
                (local_130 - *(double *)(param_1 + 0x38)) * dVar5;
        dVar15 = (double)*(float *)(lVar3 + 0xc);
        local_270 = dVar4 * dVar15 + dVar4 * dVar6 + *(double *)(param_1 + 0x40);
        local_278 = dVar5 * dVar15 + dVar5 * dVar6 + *(double *)(param_1 + 0x38);
        local_280 = dVar7 * dVar15 + dVar6 * dVar7 + *(double *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 8) == 0) {
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = *(longlong **)(param_1 + 0x10);
        }
        (**(code **)(*plVar12 + 0x88))();
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e0bee4 FUN_143e0bee4 body=101 status=ok
// SIG undefined FUN_143e0bee4(void)

void FUN_143e0bee4(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x20) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_140115c12(param_1 + 0x30,0);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 143e0bf98 FUN_143e0bf98 body=243 status=ok
// SIG undefined FUN_143e0bf98(void)

longlong FUN_143e0bf98(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar3 = FUN_1401cd3fa(param_2);
  if (lVar3 != 0) {
    lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
    iVar1 = *(int *)(lVar4 + 0xb8);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0xb0);
      lVar8 = 0;
      while ((lVar2 = *(longlong *)(lVar4 + lVar8), lVar2 == 0 ||
             (lVar5 = FUN_1401cd362(lVar2), lVar5 != lVar3))) {
        lVar8 = lVar8 + 8;
        if ((longlong)iVar1 * 8 == lVar8) {
          return 0;
        }
      }
      if ((longlong)*(int *)(lVar2 + 0x140) != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x138);
        lVar4 = (longlong)*(int *)(lVar2 + 0x140) * 0xa8;
        do {
          if (*(ulonglong **)(lVar3 + 0x50) == (ulonglong *)0x0) {
            uVar7 = 0;
            uVar6 = 0;
          }
          else {
            uVar7 = **(ulonglong **)(lVar3 + 0x50);
            uVar6 = uVar7 & 0xffffffff;
            uVar7 = uVar7 & 0xffffffff00000000;
          }
          if (*(ulonglong *)(param_2 + 0x18) == *(ulonglong *)(lVar3 + 0x48)) {
            return lVar3;
          }
          if ((uVar6 | uVar7) != 0 && *(ulonglong *)(param_2 + 0x18) == (uVar6 | uVar7)) {
            return lVar3;
          }
          lVar3 = lVar3 + 0xa8;
          lVar4 = lVar4 + -0xa8;
        } while (lVar4 != 0);
      }
    }
  }
  return 0;
}



// FUNCTION 143e0c08b FUN_143e0c08b body=93 status=ok
// SIG undefined FUN_143e0c08b(void)

void FUN_143e0c08b(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_148934fa8(param_2);
  if (lVar2 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if ((longlong)*(int *)(lVar3 + 0xb8) != 0) {
      plVar4 = *(longlong **)(lVar3 + 0xb0);
      plVar1 = plVar4 + *(int *)(lVar3 + 0xb8);
      do {
        if ((*plVar4 != 0) && (lVar3 = FUN_1401cd362(), lVar3 == lVar2)) {
          return;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
  }
  return;
}



// FUNCTION 143e0c0e8 FUN_143e0c0e8 body=31 status=ok
// SIG undefined FUN_143e0c0e8(void)

undefined8 FUN_143e0c0e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0c156 FUN_143e0c156 body=29 status=ok
// SIG undefined FUN_143e0c156(void)

undefined8 FUN_143e0c156(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0c2f2 FUN_143e0c2f2 body=93 status=ok
// SIG undefined FUN_143e0c2f2(void)

void FUN_143e0c2f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b420610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e0c350 FUN_143e0c350 body=93 status=ok
// SIG undefined FUN_143e0c350(void)

void FUN_143e0c350(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b420610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e0c3ae FUN_143e0c3ae body=126 status=ok
// SIG undefined FUN_143e0c3ae(void)

void FUN_143e0c3ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b420610;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e0c41d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e0c43e FUN_143e0c43e body=274 status=ok
// SIG undefined FUN_143e0c43e(void)

undefined8 FUN_143e0c43e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *in_stack_00000028;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e0c54a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e0c54a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e0c54a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e0c4fe;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *in_stack_00000028 = 1;
      FUN_140b9fa66(uVar6);
      uVar6 = 1;
      goto LAB_143e0c4fe;
    }
  }
  uVar6 = 0;
LAB_143e0c4fe:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0c552 FUN_143e0c552 body=91 status=ok
// SIG undefined FUN_143e0c552(void)

bool FUN_143e0c552(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143e0c582;
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
LAB_143e0c582:
  return lVar6 == param_2;
}



// FUNCTION 143e0c5ca FUN_143e0c5ca body=31 status=ok
// SIG undefined FUN_143e0c5ca(void)

undefined8 FUN_143e0c5ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0c5ea FUN_143e0c5ea body=31 status=ok
// SIG undefined FUN_143e0c5ea(void)

undefined8 FUN_143e0c5ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0c658 FUN_143e0c658 body=31 status=ok
// SIG undefined FUN_143e0c658(void)

undefined8 FUN_143e0c658(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0c678 FUN_143e0c678 body=31 status=ok
// SIG undefined FUN_143e0c678(void)

undefined8 FUN_143e0c678(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0c698 FUN_143e0c698 body=31 status=ok
// SIG undefined FUN_143e0c698(void)

undefined8 FUN_143e0c698(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0c704 FUN_143e0c704 body=1817 status=ok
// SIG undefined FUN_143e0c704(void)

void FUN_143e0c704(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStack_108 [40];
  ulonglong *local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = *param_2;
  if (uVar1 == 0) goto LAB_143e0cbce;
  uVar10 = param_1[2];
  lVar2 = param_1[3];
  lVar6 = FUN_141085a5e(lVar2,uVar1,uVar10);
  if (lVar6 != 0) goto LAB_143e0cbce;
  uVar7 = *(undefined8 *)(lVar2 + 0xa8);
  FUN_14058b40c(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_d8 = FUN_140db2c5a();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_d0 = uVar7;
  lVar6 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar11 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar11 = local_78;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  iVar12 = *(int *)(lVar2 + 0xb8);
  *(uint *)(lVar2 + 0xb8) = iVar12 + 1U;
  if (*(uint *)(lVar2 + 0xbc) < iVar12 + 1U) {
    FUN_1457fbd4e((longlong *)(lVar2 + 0xb0),iVar12);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0xb0) + (longlong)iVar12 * 8) = lVar6;
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  FUN_140d112b8(lVar2,lVar2,lVar6);
  iVar12 = *(int *)(lVar2 + 0xc4) + 1;
  *(int *)(lVar2 + 0xc4) = iVar12;
  lVar8 = *(longlong *)(lVar6 + 0x110);
  if (lVar8 == 0) {
    uVar7 = FUN_140e2014e();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(lVar6 + 0x110) = lVar8;
  }
  local_e0 = (ulonglong *)(lVar6 + 0x108);
  if (*(longlong *)(lVar6 + 0x118) == 0) {
    if ((*local_e0 != 0) && (lVar8 != 0)) {
      plVar11 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar11 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
        *(undefined8 *)(lVar6 + 0x118) = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar11 + 0x110))(plVar11);
        lVar8 = FUN_144aff482(uVar7,local_e0);
        *(longlong *)(lVar6 + 0x118) = lVar8;
        if (lVar8 != 0) goto LAB_143e0c8e9;
      }
    }
    lVar8 = DAT_14cb89ba8;
    if (DAT_14cb89ba8 != 0) {
      uVar5 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      local_d8 = uVar1;
      uVar7 = FUN_14163ed00(DAT_14cb89ba8 + 0x3a8,uVar5 >> 0x10 ^ uVar5);
      FUN_1418a3560(uVar7,&local_d8,lVar6,FUN_143e0a426);
      FUN_1418a3560(lVar8 + 0x390,&local_d8,lVar6,FUN_143e0a72a);
    }
  }
LAB_143e0c8e9:
  if (*(longlong *)(lVar6 + 0x110) == 0) {
    uVar7 = FUN_140e2014e();
    uVar7 = FUN_14477b664(uVar7);
    *(undefined8 *)(lVar6 + 0x110) = uVar7;
  }
  lVar8 = FUN_140e2014e();
  uVar7 = FUN_140e2014e();
  FUN_1402d1bfa(&local_d8,uVar7,uVar1);
  if (*local_e0 != local_d8) {
    *(undefined8 *)(lVar6 + 0x118) = 0;
  }
  *local_e0 = local_d8;
  lVar9 = FUN_140e2014e();
  if (lVar8 == 0) {
LAB_143e0c961:
    lVar9 = lVar8;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_143e0c961;
  if (*(longlong *)(lVar6 + 0x110) != lVar9) {
    *(undefined8 *)(lVar6 + 0x118) = 0;
  }
  uVar7 = FUN_14477b664(lVar9);
  lVar8 = FUN_14477b664(uVar7);
  *(longlong *)(lVar6 + 0x110) = lVar8;
  if ((lVar8 != 0) && (*(longlong *)(lVar6 + 0x108) != 0)) {
    *(ulonglong *)(lVar6 + 0x118) = uVar1;
  }
  if (*(longlong *)(lVar6 + 0x128) == 0) {
    uVar7 = FUN_14034f1a8();
    uVar7 = FUN_14477b664(uVar7);
    *(undefined8 *)(lVar6 + 0x128) = uVar7;
  }
  lVar8 = FUN_14034f1a8();
  uVar7 = FUN_14034f1a8();
  FUN_1402d1bfa(&local_d8,uVar7,uVar10);
  if (*(ulonglong *)(lVar6 + 0x120) != local_d8) {
    *(undefined8 *)(lVar6 + 0x130) = 0;
  }
  *(ulonglong *)(lVar6 + 0x120) = local_d8;
  lVar9 = FUN_14034f1a8();
  if (lVar8 == 0) {
LAB_143e0ca2b:
    lVar9 = lVar8;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_143e0ca2b;
  if (*(longlong *)(lVar6 + 0x128) != lVar9) {
    *(undefined8 *)(lVar6 + 0x130) = 0;
  }
  uVar7 = FUN_14477b664(lVar9);
  lVar8 = FUN_14477b664(uVar7);
  *(longlong *)(lVar6 + 0x128) = lVar8;
  if ((lVar8 != 0) && (*(longlong *)(lVar6 + 0x120) != 0)) {
    *(undefined8 *)(lVar6 + 0x130) = uVar10;
  }
  FUN_1410cec84(lVar6);
  *(byte *)(lVar6 + 0x181) = *(byte *)(lVar6 + 0x181) | 0x80;
  lVar8 = *(longlong *)(lVar6 + 0x110);
  if (lVar8 == 0) {
    uVar10 = FUN_140e2014e();
    lVar8 = FUN_14477b664(uVar10);
    *(longlong *)(lVar6 + 0x110) = lVar8;
  }
  lVar9 = *(longlong *)(lVar6 + 0x118);
  if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*local_e0 != 0)) {
    plVar11 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar9 = FUN_144aff482(uVar10,local_e0);
    }
    *(longlong *)(lVar6 + 0x118) = lVar9;
  }
  if (*(char *)(lVar9 + 0x18) == '\0') {
    *(byte *)(lVar6 + 0x181) = *(byte *)(lVar6 + 0x181) | 0xf;
  }
  lVar8 = *(longlong *)(lVar6 + 0x110);
  if (lVar8 == 0) {
    uVar10 = FUN_140e2014e();
    lVar8 = FUN_14477b664(uVar10);
    *(longlong *)(lVar6 + 0x110) = lVar8;
    lVar9 = *(longlong *)(lVar6 + 0x118);
  }
  if (lVar9 == 0) {
    *(undefined8 *)(lVar6 + 0x118) = 0;
    lVar9 = 0;
    if ((lVar8 != 0) && (*(longlong *)(lVar6 + 0x108) != 0)) {
      plVar11 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar11 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
        lVar9 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar11 + 0x110))(plVar11);
        lVar9 = FUN_144aff482(uVar10,local_e0);
      }
      *(longlong *)(lVar6 + 0x118) = lVar9;
    }
  }
  if (*(char *)(lVar9 + 0x18) == '\x01') {
    *(byte *)(lVar6 + 0x181) = *(byte *)(lVar6 + 0x181) | 0x70;
  }
  FUN_140e5721a(lVar6,lVar2);
  *(int *)(lVar6 + 0x194) = iVar12;
  *(undefined4 *)(lVar6 + 0x198) = 1;
  *(undefined1 *)(lVar6 + 0x191) = 1;
  FUN_1447f69b6(lVar6 + 0xc0);
  if (*(int *)(lVar6 + 0x1a8) != 3) {
    FUN_1446efa72((longlong *)(lVar6 + 0x1a0),0,3,0x10);
    *(undefined4 *)(lVar6 + 0x1a8) = 3;
  }
  puVar3 = *(undefined8 **)(lVar6 + 0x1a0);
  *puVar3 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar3[2] = lVar9;
  *puVar3 = &PTR_FUN_14b4211f0;
  puVar3[3] = lVar2;
  puVar3[4] = &LAB_140d111e8;
  FUN_140d112b8(lVar2 + 0x18,lVar2,lVar6);
  FUN_140db2d38(lVar6 + 0xf0,&local_d8,lVar2,&LAB_140d112a8);
  if (lVar6 != 0) {
    plVar11 = (longlong *)param_1[1];
    if (plVar11 != (longlong *)0x0) {
      iVar12 = (int)plVar11[1];
      *(uint *)(plVar11 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)plVar11 + 0xc) < iVar12 + 1U) {
        FUN_140f56d18(plVar11,iVar12);
      }
      *(longlong *)(*plVar11 + (longlong)iVar12 * 8) = lVar6;
    }
    *(int *)*param_1 = *(int *)*param_1 + 1;
  }
LAB_143e0cbce:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e0ce1e FUN_143e0ce1e body=70 status=ok
// SIG undefined FUN_143e0ce1e(void)

undefined8 * FUN_143e0ce1e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b4211d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143e0ce6a FUN_143e0ce6a body=29 status=ok
// SIG undefined FUN_143e0ce6a(void)

void FUN_143e0ce6a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143e0ce88 FUN_143e0ce88 body=29 status=ok
// SIG undefined FUN_143e0ce88(void)

undefined8 FUN_143e0ce88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0cea6 FUN_143e0cea6 body=31 status=ok
// SIG undefined FUN_143e0cea6(void)

undefined8 FUN_143e0cea6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0cec6 FUN_143e0cec6 body=31 status=ok
// SIG undefined FUN_143e0cec6(void)

undefined8 FUN_143e0cec6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0ceec FUN_143e0ceec body=31 status=ok
// SIG undefined FUN_143e0ceec(void)

undefined8 FUN_143e0ceec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0cf0c FUN_143e0cf0c body=31 status=ok
// SIG undefined FUN_143e0cf0c(void)

undefined8 FUN_143e0cf0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0cf2c FUN_143e0cf2c body=31 status=ok
// SIG undefined FUN_143e0cf2c(void)

undefined8 FUN_143e0cf2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0cf4c FUN_143e0cf4c body=55 status=ok
// SIG undefined FUN_143e0cf4c(void)

void FUN_143e0cf4c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14893c968(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 143e0cf84 FUN_143e0cf84 body=132 status=ok
// SIG undefined FUN_143e0cf84(void)

undefined8 * FUN_143e0cf84(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143e0cfd5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_143e0cfd5:
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143e0d00a FUN_143e0d00a body=29 status=ok
// SIG undefined FUN_143e0d00a(void)

undefined8 FUN_143e0d00a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0d1a6 FUN_143e0d1a6 body=93 status=ok
// SIG undefined FUN_143e0d1a6(void)

void FUN_143e0d1a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b421560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e0d204 FUN_143e0d204 body=93 status=ok
// SIG undefined FUN_143e0d204(void)

void FUN_143e0d204(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8b4c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b421560;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e0d262 FUN_143e0d262 body=126 status=ok
// SIG undefined FUN_143e0d262(void)

void FUN_143e0d262(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac8b4c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b421560;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e0d2d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e0d2ea FUN_143e0d2ea body=278 status=ok
// SIG undefined FUN_143e0d2ea(void)

undefined8 FUN_143e0d2ea(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e0d3fa;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e0d3fa;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e0d3fa:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e0d3ad;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e0d402(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_143e0d3ad;
    }
  }
  uVar6 = 0;
LAB_143e0d3ad:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0d402 FUN_143e0d402 body=520 status=ok
// SIG undefined FUN_143e0d402(void)

void FUN_143e0d402(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 ***pppuVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *_Src;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 == 0) goto LAB_143e0d5ea;
  param_1 = (longlong *)*param_1;
  lVar8 = param_1[7];
  if (*param_2 != lVar8) goto LAB_143e0d5ea;
  iVar4 = *(int *)(lVar8 + 0x4f0);
  if (((longlong)iVar4 < 0) || (*(int *)(lVar8 + 0x880) <= iVar4)) {
LAB_143e0d48e:
    local_38 = 0;
    local_30 = 0;
  }
  else {
    lVar6 = lVar8 + 0x4f8;
    if (*(longlong *)(lVar8 + 0x878) != 0) {
      lVar6 = *(longlong *)(lVar8 + 0x878);
    }
    puVar10 = (undefined8 *)((longlong)iVar4 * 0x38 + lVar6);
    if (puVar10 == (undefined8 *)0x0) goto LAB_143e0d48e;
    bVar3 = *(byte *)(puVar10 + 4);
    local_38 = *(ushort *)(puVar10 + 3);
    if (local_38 < 0x19) {
      pppuVar7 = local_50;
      _Src = puVar10;
    }
    else {
      pppuVar7 = (undefined8 ***)FUN_14001cc68(local_38,0);
      _Src = (undefined8 *)*puVar10;
      local_50[0] = pppuVar7;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar5 == (code *)0x0) {
      memcpy(pppuVar7,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120)));
    }
    else {
      (*pcVar5)();
    }
    local_30 = *(byte *)(puVar10 + 4);
  }
  lVar8 = FUN_14030a32e();
  if (*param_1 == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)param_1[1];
  }
  local_78 = &local_68;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  (**(code **)(*plVar9 + 0x80))((undefined4)DAT_14c8464e0,lVar8,0,0);
  param_1[7] = 0;
  plVar9 = (longlong *)param_1[8];
  if (plVar9 != (longlong *)0x0) {
    param_1[8] = 0;
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)();
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  if (lVar8 == 0) {
    if (*param_1 == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)param_1[1];
    }
    lVar8 = (**(code **)(*plVar9 + 0x48))();
    if ((*(byte *)(lVar8 + 0x80) & 4) != 0) {
      if (*param_1 == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)param_1[1];
      }
      lVar8 = (**(code **)(*plVar9 + 0x48))(plVar9);
      (**(code **)(*plVar9 + 0x78))(plVar9,*(undefined4 *)(lVar8 + 0xb0));
    }
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar5 != (code *)0x0) {
    pppuVar7 = local_50;
    if (0x18 < local_38) {
      pppuVar7 = (undefined8 ***)local_50[0];
    }
    (*pcVar5)(pppuVar7);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
LAB_143e0d5ea:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0d60c FUN_143e0d60c body=229 status=ok
// SIG undefined FUN_143e0d60c(void)

void FUN_143e0d60c(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[8] != 0) {
    FUN_14655bdcc(*param_1);
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    FUN_1411a6e9c(*param_1,(int)param_1[2]);
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(int *)(*param_1 + 0xe40) = (int)param_1[1];
  }
  if ((param_1[5] != 0) && ((longlong)(int)param_1[7] != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1[6] + lVar1) != 0) {
        lVar1 = *param_1;
        (**(code **)(*(longlong *)(lVar1 + 0xeb8) + 0x20))(lVar1 + 0xeb8,0);
        *(longlong *)(lVar1 + 0xec0) = param_1[5];
        FUN_1406022fe(lVar1 + 0xec8,param_1 + 6);
        break;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)(int)param_1[7] * 8 != lVar1);
  }
  if (*(char *)((longlong)param_1 + 0x19) == '\x01') {
    *(char *)(*param_1 + 0xee1) = (char)param_1[3];
  }
  FUN_14113775c(*param_1,&DAT_14c846480,1,0,0);
  return;
}



// FUNCTION 143e0d6f2 FUN_143e0d6f2 body=184 status=ok
// SIG undefined FUN_143e0d6f2(void)

undefined8 * FUN_143e0d6f2(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b4215f0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  cVar1 = *(char *)(param_1 + 0x14);
  *(char *)((longlong)puVar2 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  *(char *)((longlong)puVar2 + 0x1c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
  }
  cVar1 = *(char *)(param_1 + 0x21);
  *(char *)((longlong)puVar2 + 0x21) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
  }
  puVar2[5] = &DAT_14a171d50;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  FUN_1406022fe(puVar2 + 7,param_1 + 0x38);
  puVar2[5] = &PTR_FUN_14b0394b0;
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  return puVar2 + 1;
}



// FUNCTION 143e0d7b0 FUN_143e0d7b0 body=29 status=ok
// SIG undefined FUN_143e0d7b0(void)

void FUN_143e0d7b0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143e0d7ce FUN_143e0d7ce body=130 status=ok
// SIG undefined FUN_143e0d7ce(void)

undefined8 * FUN_143e0d7ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4215f0;
  param_1[5] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_140115c12(param_1 + 7,0);
  }
  param_1[6] = 0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x21) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e0d850 FUN_143e0d850 body=2476 status=ok
// SIG undefined FUN_143e0d850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e0d850(void)

{
  uint uVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  char *local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = "AssetRegistry";
  local_80 = 0xd;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb895d8 = (ulonglong)uVar1;
  _DAT_14cb895e8 = &LAB_143e090ac;
  _DAT_14cb895f0 = 0x43480000;
  DAT_14cb895f4 = 1;
  DAT_14cb895e0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb895e0;
  atexit((_func_5014 *)&LAB_143e090b1);
  _DAT_14cb89600 = 0x47efffffe0000000;
  _DAT_14cb89608 = 0x47efffffe0000000;
  _DAT_14cb89610 = 0x47efffffe0000000;
  _DAT_14cb89618 = 0x47efffffe0000000;
  _DAT_14cb89620 = 0x47efffffe0000000;
  _DAT_14cb89628 = 0x47efffffe0000000;
  _DAT_14cb89630 = 0x47efffffe0000000;
  _DAT_14cb89638 = 0x47efffffe0000000;
  local_88 = "bone";
  local_80 = 4;
  local_7c = 0;
  FUN_14001a6c0(&local_88,1);
  local_88 = "shared";
  local_80 = 6;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb89640 = (ulonglong)uVar1;
  _DAT_14cb89648 = 0;
  uRam000000014cb89650 = 0;
  _DAT_14cb89658 = 0;
  DAT_14cb89660 = 0;
  uRam000000014cb89668 = 0;
  FUN_1446ddda2(&DAT_14cb89648,"state.shared",0);
  atexit((_func_5014 *)&LAB_143e090e5);
  _DAT_14cb89670 = 0;
  uRam000000014cb89678 = 0;
  _DAT_14cb89680 = 0;
  DAT_14cb89688 = 0;
  uRam000000014cb89690 = 0;
  FUN_1446ddda2(&DAT_14cb89670,"engine.state.shared",0);
  atexit((_func_5014 *)&LAB_143e090f6);
  ram0x00014cb8969c = 0;
  FUN_14052b5e0(&DAT_14cb89698,"char_guid",0);
  _DAT_14cb896a8 = "char_guid";
  ram0x00014cb896b4 = 0;
  FUN_14052b5e0(&DAT_14cb896b0,"resource_pools",0);
  _DAT_14cb896c0 = "resource_pools";
  DAT_14cb896c8 = 0;
  _DAT_14cb896d0 = 0;
  _DAT_14cb896d8 = 2;
  atexit(FUN_143e09107);
  DAT_14cb896e0 = 0;
  _DAT_14cb896e8 = 0;
  _DAT_14cb896f0 = 2;
  atexit(FUN_143e09138);
  DAT_14cb896f8 = 0;
  _DAT_14cb89700 = 0;
  _DAT_14cb89708 = 2;
  atexit(FUN_143e09169);
  DAT_14cb89710 = 0;
  _DAT_14cb89718 = 0;
  _DAT_14cb89720 = 2;
  atexit(FUN_143e0919a);
  DAT_14cb89728 = 0;
  _DAT_14cb89730 = 0;
  _DAT_14cb89738 = 2;
  atexit(FUN_143e091cb);
  DAT_14cb89740 = 0;
  _DAT_14cb89748 = 0;
  _DAT_14cb89750 = 2;
  atexit(FUN_143e091fc);
  DAT_14cb89758 = 0;
  _DAT_14cb89760 = 0;
  _DAT_14cb89768 = 2;
  atexit(FUN_143e0922d);
  _DAT_14cb89780 = &LAB_143e0991f;
  _DAT_14cb89788 = 0x444a8000;
  DAT_14cb8978c = 1;
  DAT_14cb89778 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb89778;
  atexit((_func_5014 *)&LAB_143e09924);
  _DAT_14cb897a0 = &LAB_143e09958;
  _DAT_14cb897a8 = 0x45037000;
  DAT_14cb897ac = 1;
  DAT_14cb89798 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb89798;
  atexit((_func_5014 *)&LAB_143e0995d);
  DAT_14cb897b8 = 0;
  atexit((_func_5014 *)&LAB_143e0a40e);
  _DAT_14cb898b0 = 0;
  uRam000000014cb898b8 = 0;
  _DAT_14cb898c0 = 0;
  DAT_14cb898c8 = 0;
  uRam000000014cb898d0 = 0;
  FUN_1446ddda2(&DAT_14cb898b0,"progress",0);
  atexit((_func_5014 *)&LAB_143e0ad06);
  _DAT_14cb898d8 = 0;
  uRam000000014cb898e0 = 0;
  _DAT_14cb898e8 = 0;
  DAT_14cb898f0 = 0;
  uRam000000014cb898f8 = 0;
  FUN_1446ddda2(&DAT_14cb898d8,"points_acquired",0);
  atexit((_func_5014 *)&LAB_143e0ad17);
  _DAT_14cb89888 = 0;
  uRam000000014cb89890 = 0;
  _DAT_14cb89898 = 0;
  DAT_14cb898a0 = 0;
  uRam000000014cb898a8 = 0;
  FUN_1446ddda2(&DAT_14cb89888,"graphs",0);
  atexit((_func_5014 *)&LAB_143e0ad28);
  _DAT_14cb89810 = 0;
  uRam000000014cb89818 = 0;
  _DAT_14cb89820 = 0;
  DAT_14cb89828 = 0;
  uRam000000014cb89830 = 0;
  FUN_1446ddda2(&DAT_14cb89810,&DAT_14acb8ea6,0);
  atexit((_func_5014 *)&LAB_143e0ad39);
  _DAT_14cb89838 = 0;
  uRam000000014cb89840 = 0;
  _DAT_14cb89848 = 0;
  DAT_14cb89850 = 0;
  uRam000000014cb89858 = 0;
  FUN_1446ddda2(&DAT_14cb89838,"group_def_name",0);
  atexit((_func_5014 *)&LAB_143e0ad4a);
  _DAT_14cb89860 = 0;
  uRam000000014cb89868 = 0;
  _DAT_14cb89870 = 0;
  DAT_14cb89878 = 0;
  uRam000000014cb89880 = 0;
  FUN_1446ddda2(&DAT_14cb89860,"nodes",0);
  atexit((_func_5014 *)&LAB_143e0ad5b);
  _DAT_14cb89900 = 0;
  uRam000000014cb89908 = 0;
  _DAT_14cb89910 = 0;
  DAT_14cb89918 = 0;
  uRam000000014cb89920 = 0;
  FUN_1446ddda2(&DAT_14cb89900,"points_spent",0);
  atexit((_func_5014 *)&LAB_143e0ad6c);
  _DAT_14cb89928 = 0;
  uRam000000014cb89930 = 0;
  _DAT_14cb89938 = 0;
  DAT_14cb89940 = 0;
  uRam000000014cb89948 = 0;
  FUN_1446ddda2(&DAT_14cb89928,"is_activated",0);
  atexit((_func_5014 *)&LAB_143e0ad7d);
  _DAT_14cb89950 = 0;
  uRam000000014cb89958 = 0;
  _DAT_14cb89960 = 0;
  DAT_14cb89968 = 0;
  uRam000000014cb89970 = 0;
  FUN_1446ddda2(&DAT_14cb89950,"activation_level",0);
  atexit((_func_5014 *)&LAB_143e0ad8e);
  _DAT_14cb89d40 = 0;
  uRam000000014cb89d48 = 0;
  _DAT_14cb89d50 = 0;
  DAT_14cb89d58 = 0;
  uRam000000014cb89d60 = 0;
  FUN_1446ddda2(&DAT_14cb89d40,"point_pools",0);
  atexit((_func_5014 *)&LAB_143e0ad9f);
  _DAT_14cb89978 = 0;
  uRam000000014cb89980 = 0;
  _DAT_14cb89988 = 0;
  DAT_14cb89990 = 0;
  uRam000000014cb89998 = 0;
  FUN_1446ddda2(&DAT_14cb89978,"progress_state_data",0);
  atexit((_func_5014 *)&LAB_143e0adb0);
  _DAT_14cb899a0 = 0;
  uRam000000014cb899a8 = 0;
  _DAT_14cb899b0 = 0;
  DAT_14cb899b8 = 0;
  uRam000000014cb899c0 = 0;
  FUN_1446ddda2(&DAT_14cb899a0,&DAT_14acb8ec8,0);
  atexit((_func_5014 *)&LAB_143e0adc1);
  _DAT_14cb899c8 = 0;
  uRam000000014cb899d0 = 0;
  _DAT_14cb899d8 = 0;
  DAT_14cb899e0 = 0;
  uRam000000014cb899e8 = 0;
  FUN_1446ddda2(&DAT_14cb899c8,"reset_count",0);
  atexit((_func_5014 *)&LAB_143e0add2);
  local_88 = "progression";
  local_80 = 0xb;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb899f0 = (ulonglong)uVar1;
  _DAT_14cb899f8 = 0;
  uRam000000014cb89a00 = 0;
  _DAT_14cb89a08 = 0;
  DAT_14cb89a10 = 0;
  uRam000000014cb89a18 = 0;
  FUN_1446ddda2(&DAT_14cb899f8,"progression",0);
  atexit((_func_5014 *)&LAB_143e0ade3);
  _DAT_14cb89a20 = 0;
  uRam000000014cb89a28 = 0;
  _DAT_14cb89a30 = 0;
  DAT_14cb89a38 = 0;
  uRam000000014cb89a40 = 0;
  FUN_1446ddda2(&DAT_14cb89a20,"gbx.progression",0);
  atexit((_func_5014 *)&LAB_143e0adf4);
  local_88 = "progression_shared";
  local_80 = 0x12;
  local_7c = 0;
  uVar1 = FUN_14001a6c0(&local_88,1);
  DAT_14cb89a48 = (ulonglong)uVar1;
  _DAT_14cb89d18 = 0;
  uRam000000014cb89d20 = 0;
  _DAT_14cb89d28 = 0;
  DAT_14cb89d30 = 0;
  uRam000000014cb89d38 = 0;
  FUN_1446ddda2(&DAT_14cb89d18,"progression_shared",0);
  atexit((_func_5014 *)&LAB_143e0ae05);
  _DAT_14cb89a50 = 0;
  uRam000000014cb89a58 = 0;
  _DAT_14cb89a60 = 0;
  DAT_14cb89a68 = 0;
  uRam000000014cb89a70 = 0;
  FUN_1446ddda2(&DAT_14cb89a50,"gbx.progression_shared",0);
  atexit((_func_5014 *)&LAB_143e0ae16);
  DAT_14cb89ad8 = 0;
  uRam000000014cb89ae0 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_143e0cee6;
  local_88 = &DAT_14011fc1e;
  FUN_1460f61c8(&local_88);
  atexit((_func_5014 *)&LAB_143e0aec7);
  _DAT_14cb89b78 = &LAB_143e0aecc;
  _DAT_14cb89b80 = 0x45039000;
  DAT_14cb89b84 = 1;
  DAT_14cb89b70 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb89b70;
  atexit((_func_5014 *)&LAB_143e0aed1);
  _DAT_14cb89b98 = &LAB_143e0b269;
  _DAT_14cb89ba0 = 0x44374666;
  DAT_14cb89ba4 = 1;
  DAT_14cb89b90 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb89b90;
  atexit((_func_5014 *)&LAB_143e0b26e);
  _DAT_14cb89bb8 = &LAB_143e0b2a2;
  _DAT_14cb89bc0 = 0x4437470a;
  DAT_14cb89bc4 = 1;
  DAT_14cb89bb0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb89bb0;
  atexit((_func_5014 *)&LAB_143e0b2a7);
  _DAT_14cb89bd8 = &LAB_143e0b2db;
  _DAT_14cb89be0 = 0x443747ae;
  DAT_14cb89be4 = 1;
  DAT_14cb89bd0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb89bd0;
  atexit((_func_5014 *)&LAB_143e0b2e0);
  local_98 = 0;
  FUN_1415c789c(&DAT_14cb89bf0,L"gbx.Projectile.Bounce.MaxGroundSlopeZ",&DAT_14c763a28,
                L"The cosine of the angle of the max ground slope.\n");
  atexit(FUN_143e0b314);
  local_98 = 0;
  FUN_1415c789c(&DAT_14cb89c00,L"gbx.Projectile.Bounce.MaxCeilingSlopeZ",&DAT_14c763a2c,
                L"The cosine of the angle of the max ceiling slope.\n");
  atexit(FUN_143e0b359);
  _DAT_14cb89cd8 = &PTR_FUN_14aff4f48;
  _DAT_14cb89ce0 = 0x44bb8000;
  _DAT_14cb89ce8 = 0;
  DAT_14cb89cec = 1;
  _DAT_14cb89cf0 = 0x433400003f000000;
  uRam000000014cb89cf8 = 0x4234000041f00000;
  DAT_14cb89d00 = 0;
  uRam000000014cb89d08 = 0;
  _DAT_14cb89d10 = 0x3f800000;
  atexit((_func_5014 *)&LAB_143e0b39e);
  FUN_140c51964(&DAT_14cb89c20);
  atexit((_func_5014 *)&LAB_143e0b427);
  _DAT_14cb89c18 = 0;
  LOCK();
  DAT_14cb89c10 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143e0b446);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0e200 FUN_143e0e200 body=1567 status=ok
// SIG undefined FUN_143e0e200(void)

double * FUN_143e0e200(longlong *param_1,double *param_2,longlong param_3,undefined4 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  code *local_c8 [3];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  param_2[2] = (double)param_1[0x27];
  dVar1 = (double)param_1[0x26];
  *param_2 = (double)param_1[0x25];
  param_2[1] = dVar1;
  local_f8 = *param_4;
  uStack_f4 = param_4[1];
  uStack_f0 = param_4[2];
  uStack_ec = param_4[3];
  local_e8 = *(undefined8 *)(param_4 + 4);
  (**(code **)(*param_1 + 0x560))(local_f8,&local_e0);
  fVar13 = (float)(param_2[2] * local_d0 + *param_2 * local_e0 + param_2[1] * local_d8);
  if (0.0 < fVar13) goto LAB_143e0e61d;
  dVar15 = (double)-fVar13;
  dVar4 = local_d0 * dVar15;
  dVar5 = local_d8 * dVar15;
  dVar6 = local_e0 * dVar15;
  dVar1 = *param_2 + dVar6;
  dVar2 = param_2[1] + dVar5;
  dVar3 = param_2[2] + dVar4;
  if ((*(byte *)((longlong)param_1 + 0x181) & 3) == 0) {
    fVar13 = *(float *)((longlong)param_1 + 0x1b4);
  }
  else {
    dVar15 = dVar15 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
    if (1.0 <= dVar15) {
      dVar15 = 1.0;
    }
    if (dVar15 <= (double)*(float *)((longlong)param_1 + 0x1bc)) {
      dVar15 = (double)*(float *)((longlong)param_1 + 0x1bc);
    }
    fVar13 = (float)((double)*(float *)((longlong)param_1 + 0x1b4) * dVar15);
  }
  fVar14 = 1.0 - fVar13;
  if (1.0 <= 1.0 - fVar13) {
    fVar14 = 1.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  dVar15 = (double)fVar14;
  dVar1 = dVar1 * dVar15;
  *param_2 = dVar1;
  dVar2 = dVar2 * dVar15;
  param_2[1] = dVar2;
  dVar3 = dVar3 * dVar15;
  param_2[2] = dVar3;
  fVar13 = *(float *)(param_1 + 0x36);
  fVar14 = 0.0;
  if ((fVar13 <= 0.0) ||
     ((((fVar14 = fVar13, *(float *)(param_1 + 0x6d) == 1.0 && (!NAN(*(float *)(param_1 + 0x6d))))
       || (lVar8 = FUN_14485cccc(param_3 + 0xb8), lVar8 == 0)) ||
      ((*(byte *)(lVar8 + 0x62) & 4) == 0)))) {
LAB_143e0e5cb:
    dVar15 = (double)fVar14;
    dVar4 = dVar4 * dVar15 + dVar3;
    *param_2 = dVar6 * dVar15 + dVar1;
    param_2[1] = dVar5 * dVar15 + dVar2;
LAB_143e0e5f8:
    param_2[2] = dVar4;
  }
  else {
    plVar9 = (longlong *)param_1[0x99];
    if ((plVar9 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar9);
    }
    else if (plVar9 == (longlong *)0x0) goto LAB_143e0e5cb;
    if (DAT_14cb223d8 == 0) {
      local_130 = local_c8;
      local_c8[0] = FUN_1449e2820;
      local_120 = FUN_14081d0ea;
      local_128 = FUN_1427b09ee;
      local_138 = &LAB_147f29feb;
      local_140 = FUN_1464384fe;
      local_148 = L"Engine";
      local_150 = 0;
      local_158 = 0x10004001;
      local_160 = 8;
      local_168 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,DAT_14cb223d8);
    if (plVar9 == (longlong *)0x0) goto LAB_143e0e5cb;
    if (DAT_14cb223d8 == 0) {
      local_130 = local_c8;
      local_c8[0] = FUN_1449e2820;
      local_120 = FUN_14081d0ea;
      local_128 = FUN_1427b09ee;
      local_138 = &LAB_147f29feb;
      local_140 = FUN_1464384fe;
      local_148 = L"Engine";
      local_150 = 0;
      local_158 = 0x10004001;
      local_160 = 8;
      local_168 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar10 = (longlong *)FUN_144718840(plVar9,DAT_14cb223d8);
    if (((plVar9 == plVar10) || (plVar10 == (longlong *)0x0)) ||
       (lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10), lVar11 == 0)) goto LAB_143e0e5cb;
    if (*(longlong **)(lVar11 + 0x18) == (longlong *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x180))();
    }
    FUN_140154c96(local_c8,lVar8);
    iVar7 = FUN_1448618b0(lVar11 + 0x20,local_c8,uVar12);
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    if (iVar7 != 2) goto LAB_143e0e5cb;
    fVar13 = fVar13 * *(float *)(param_1 + 0x6d);
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    dVar15 = (double)fVar13;
    dVar1 = dVar1 + dVar6 * dVar15;
    *param_2 = dVar1;
    dVar2 = dVar2 + dVar5 * dVar15;
    param_2[1] = dVar2;
    dVar3 = dVar3 + dVar4 * dVar15;
    param_2[2] = dVar3;
    fVar13 = *(float *)(param_1 + 0x37) * 1.1;
    dVar15 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
    if (dVar15 < (double)(fVar13 * fVar13)) {
      if (((dVar15 != 1.0) || (dVar5 = dVar1, dVar6 = dVar2, dVar4 = dVar3, NAN(dVar15))) &&
         (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar15)) {
        dVar15 = 1.0 / SQRT(dVar15);
        dVar5 = dVar1 * dVar15;
        dVar6 = dVar2 * dVar15;
        dVar4 = dVar3 * dVar15;
      }
      dVar1 = (double)fVar13;
      dVar4 = dVar4 * dVar1;
      *param_2 = dVar5 * dVar1;
      param_2[1] = dVar6 * dVar1;
      goto LAB_143e0e5f8;
    }
  }
  local_108 = param_2[2];
  local_118 = *(undefined4 *)param_2;
  uStack_114 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_110 = *(undefined4 *)(param_2 + 1);
  uStack_10c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_1401149ea(param_1,param_2);
LAB_143e0e61d:
  if ((local_b0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e0e820 FUN_143e0e820 body=19 status=ok
// SIG undefined FUN_143e0e820(void)

void FUN_143e0e820(void)

{
  FUN_148946984();
  FUN_14655c580();
  return;
}



// FUNCTION 143e0e83f FUN_143e0e83f body=14 status=ok
// SIG undefined FUN_143e0e83f(void)

void FUN_143e0e83f(undefined8 *param_1)

{
  *param_1 = DAT_14cb89e18;
  return;
}



// FUNCTION 143e0e852 FUN_143e0e852 body=23 status=ok
// SIG undefined FUN_143e0e852(void)

void FUN_143e0e852(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x1270);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 143e0e87a FUN_143e0e87a body=268 status=ok
// SIG undefined FUN_143e0e87a(void)

void FUN_143e0e87a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar3 = param_1 + -0x390;
    lVar1 = (**(code **)(*param_2 + 8))();
    lVar2 = FUN_140a4bdd4();
    if ((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) {
      *(undefined8 *)(param_1 + 0xa80) = 0;
    }
    else {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        plVar4 = param_2;
      }
      *(longlong **)(param_1 + 0xa80) = plVar4;
      if ((plVar4 != (longlong *)0x0) && (*(char *)(param_1 + 0xa78) == '\0')) {
        *(undefined1 *)(param_1 + 0xa78) = 1;
        (**(code **)(*(longlong *)(param_1 + -0x390) + 0x680))(lVar3);
        plVar4 = *(longlong **)(param_1 + 0xa80);
      }
      if ((plVar4 != (longlong *)0x0) && ((*(byte *)(param_1 + 0xdc1) & 1) == 0)) {
        *(byte *)(param_1 + 0xdc1) = *(byte *)(param_1 + 0xdc1) | 1;
        (**(code **)(*(longlong *)(param_1 + -0x390) + 0x668))(lVar3);
        FUN_140c7cdec(lVar3);
      }
    }
    FUN_140c7ccc4(lVar3);
    lVar3 = FUN_1447210f0(lVar3);
    if (((lVar3 != 0) && (lVar3 = *(longlong *)(param_1 + -0x1c8), lVar3 != 0)) &&
       ((*(byte *)(lVar3 + 0x9c) & 8) == 0)) {
      FUN_141062a52(lVar3,0);
      return;
    }
  }
  return;
}



// FUNCTION 143e0e9c2 FUN_143e0e9c2 body=53 status=ok
// SIG undefined FUN_143e0e9c2(void)

void FUN_143e0e9c2(longlong param_1,undefined4 param_2)

{
  if ((*(char *)(param_1 + 0x178) == '\x03') || ((*(byte *)(param_1 + 0x60) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x1154) = param_2;
    *(byte *)(param_1 + 0x1151) = *(byte *)(param_1 + 0x1151) | 2;
    if (*(longlong *)(param_1 + 0xe38) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xe38) + 0x1a8) = param_2;
    }
  }
  return;
}



// FUNCTION 143e0e9f8 FUN_143e0e9f8 body=59 status=ok
// SIG undefined FUN_143e0e9f8(void)

void FUN_143e0e9f8(longlong *param_1,ushort param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x1c2];
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x688) & 1) != 0)) {
    param_2 = param_2 & ~*(ushort *)(lVar1 + 0x68a);
  }
  if (*(ushort *)((longlong)param_1 + 0xe4c) == param_2) {
    return;
  }
  *(ushort *)((longlong)param_1 + 0xe4c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000143e0ea2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d8))();
  return;
}



// FUNCTION 143e0ea34 FUN_143e0ea34 body=1294 status=ok
// SIG undefined FUN_143e0ea34(void)

void FUN_143e0ea34(ulonglong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  longlong lVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_168 [4];
  undefined8 local_164;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  int local_f0;
  ulonglong local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  int local_c0;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_7c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (((*(byte *)(param_1 + 0x1151) & 1) != 0) &&
     (*(short *)(param_1 + 0xe4c) != *(short *)(param_1 + 0xe4e))) {
    *(short *)(param_1 + 0xe4e) = *(short *)(param_1 + 0xe4c);
    lVar5 = FUN_140ccfc10();
    uVar19 = (ulonglong)*(ushort *)(param_1 + 0xe4c);
    if (*(ushort *)(param_1 + 0xe4c) != 0) {
      lVar5 = lVar5 + 0x248;
      uVar18 = 0;
      do {
        if ((uVar19 & 1) != 0) {
          lVar6 = FUN_1402d1dc0(lVar5);
          local_f8 = 0;
          local_f0 = 0;
          plVar7 = (longlong *)FUN_140b51ce6(lVar5 + 0x28);
          if (plVar7 != (longlong *)0x0) {
            local_e8[1] = 0;
            local_d8 = 0;
            local_d0 = 0;
            local_e8[0] = param_1;
            lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,local_e8,&local_f8,0);
          }
          if (lVar6 != 0) {
            lVar15 = *(longlong *)(param_1 + 0xe10);
            local_108 = *(undefined8 *)(lVar15 + 0x600);
            local_118 = *(undefined8 *)(lVar15 + 0x5f0);
            uStack_110 = *(undefined8 *)(lVar15 + 0x5f8);
            local_138 = *(undefined4 *)(lVar15 + 0x5d8);
            uStack_134 = *(undefined4 *)(lVar15 + 0x5dc);
            uStack_130 = *(undefined4 *)(lVar15 + 0x5e0);
            uStack_12c = *(undefined4 *)(lVar15 + 0x5e4);
            local_128 = *(undefined8 *)(lVar15 + 0x5e8);
            local_188 = 1;
            local_198 = 1;
            local_1a8 = &local_118;
            local_190 = 0;
            local_1a0 = CONCAT44(local_1a0._4_4_,2);
            uVar8 = FUN_140a44468(lVar6,*(undefined8 *)(param_1 + 0x1c8),
                                  *(undefined8 *)(lVar15 + 0x608));
            if (0 < local_f0) {
              local_e8[0] = local_e8[0] & 0xffffffffffffff00;
              local_c0 = 0;
              FUN_1456bb102(local_e8,param_1);
              FUN_140e99737(uVar8,&local_f8,local_e8);
              lVar6 = DAT_14c9a3da0;
              if ((longlong)local_c0 != 0) {
                lVar15 = (longlong)local_c0 + -1;
                lVar17 = lVar15 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
                if (*(longlong *)(lVar6 + lVar17) != 0) {
                  FUN_1400020a8();
                }
                lVar6 = DAT_14c9a3da0;
                iVar13 = (int)lVar15;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar13;
                }
                *(undefined4 *)(lVar6 + lVar17) = 0xffffffff;
                iVar12 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar12 = DAT_14c9a3dd0;
                }
                *(int *)(lVar6 + 4 + lVar17) = iVar12;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar11 = DAT_14c9a3dc0;
                if (DAT_14c9a3dc0 == (undefined *)0x0) {
                  puVar11 = &DAT_14c9a3db0;
                }
                iVar12 = iVar13 + 0x1f;
                if (-1 < iVar13) {
                  iVar12 = iVar13;
                }
                bVar3 = (byte)lVar15 & 0x1f;
                DAT_14c9a3dd0 = iVar13;
                *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) =
                     *(uint *)(puVar11 + (longlong)(iVar12 >> 5) * 4) &
                     (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
                local_c0 = 0;
              }
              if (((char)local_e8[0] == '\x03') &&
                 (plVar7 = (longlong *)CONCAT44(uStack_d4,local_d8), plVar7 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar7 + 0x10))();
                }
              }
            }
          }
          lVar6 = *(longlong *)(lVar5 + 0x48);
          if (lVar6 == 0) {
            uVar8 = FUN_140067708();
            lVar6 = FUN_14477b664(uVar8);
            *(longlong *)(lVar5 + 0x48) = lVar6;
          }
          if (*(longlong *)(lVar5 + 0x50) == 0) {
            if ((lVar6 != 0) && (*(longlong *)(lVar5 + 0x40) != 0)) {
              plVar7 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar7 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
                *(undefined8 *)(lVar5 + 0x50) = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
                lVar6 = FUN_144aff482(uVar8,(longlong *)(lVar5 + 0x40));
                *(longlong *)(lVar5 + 0x50) = lVar6;
                if (lVar6 != 0) goto LAB_143e0ebf4;
              }
            }
          }
          else {
LAB_143e0ebf4:
            if ((*(char *)(lVar5 + 0x58) != '\x01') ||
               ((((*(longlong *)(param_1 + 0x1b0) != 0 &&
                  (plVar7 = (longlong *)FUN_140ed3994(), plVar7 != (longlong *)0x0)) &&
                 ((*(byte *)(plVar7 + 0x84) & 2) != 0)) &&
                (cVar4 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar4 != '\0')))) {
              uVar8 = *(undefined8 *)(lVar5 + 0x40);
              uVar9 = FUN_14477b664(*(undefined8 *)(lVar5 + 0x48));
              uVar10 = FUN_14477b664(uVar9);
              uVar9 = *(undefined8 *)(lVar5 + 0x50);
              local_168[0] = 0;
              local_164 = 0;
              local_150 = 0;
              uStack_148 = 0;
              local_158 = uVar8;
              uVar8 = FUN_14477b664(uVar10);
              local_150 = FUN_14477b664(uVar8);
              local_140 = 0;
              puVar14 = (ulonglong *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
              if (*(longlong *)(param_1 + 0x1c8) == 0) {
                puVar14 = &DAT_14c846480;
              }
              puVar2 = *(undefined8 **)(param_1 + 0x1b0);
              puVar16 = local_e8;
              for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
                *puVar16 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar16 = puVar16 + 1;
              }
              local_88 = 0x3f800000;
              local_80 = 0;
              local_7c = 0;
              uStack_148 = uVar9;
              uVar8 = FUN_1447210f0(param_1);
              local_1a0 = 0;
              local_1a8 = puVar2;
              FUN_140cb5d65(&local_180,uVar8,local_168);
              local_180 = 0;
              local_178 = 0xffffffffffffffff;
              if ((local_140 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                FUN_1400848c0(*(undefined8 *)(local_140 + 0x50));
              }
            }
          }
        }
        if ((ushort)uVar19 < 2) break;
        uVar19 = uVar19 >> 1;
        lVar5 = lVar5 + 0x60;
        bVar20 = uVar18 < 0xf;
        uVar18 = uVar18 + 1;
      } while (bVar20);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e0f03e FUN_143e0f03e body=14 status=ok
// SIG undefined FUN_143e0f03e(void)

undefined8 * FUN_143e0f03e(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + -0x3b8);
  return param_2;
}



// FUNCTION 143e0f0e2 FUN_143e0f0e2 body=53 status=ok
// SIG undefined FUN_143e0f0e2(void)

void FUN_143e0f0e2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xe10);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    uVar2 = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar1 + 0x698);
    uVar2 = *(undefined4 *)(lVar1 + 0x6a0);
  }
  *(undefined4 *)(param_2 + 1) = uVar2;
  param_2[2] = 0;
  return;
}



// FUNCTION 143e0f118 FUN_143e0f118 body=79 status=ok
// SIG undefined FUN_143e0f118(void)

void FUN_143e0f118(longlong *param_1,char param_2)

{
  if ((*(char *)((longlong)param_1 + 0x136c) != param_2) &&
     ((((char)param_1[0x2f] == '\x03' || ((*(byte *)(param_1 + 0xc) & 1) != 0)) &&
      (*(char *)((longlong)param_1 + 0x136c) = param_2, param_2 != '\0')))) {
    (**(code **)(*param_1 + 0x688))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000143e0f160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x690))(param_1);
    return;
  }
  return;
}



// FUNCTION 143e0f17e FUN_143e0f17e body=69 status=ok
// SIG undefined FUN_143e0f17e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e0f17e(void)

{
  _DAT_14cb89f88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e0f1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb89f90,1);
  return;
}



// FUNCTION 143e0f1c4 FUN_143e0f1c4 body=386 status=ok
// SIG undefined FUN_143e0f1c4(void)

longlong FUN_143e0f1c4(char *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 == '\0') {
    if (DAT_14caf64b8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147c45ce0;
      local_50 = &LAB_1463f1ff4;
      local_58 = &DAT_149e063b2;
      local_60 = 0x4000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) goto LAB_143e0f218;
LAB_143e0f331:
    plVar2 = (longlong *)(param_2 + 0x1b0);
  }
  else {
    if (*param_1 == '\x01') {
      param_2 = *(longlong *)(param_1 + 8);
      if (param_2 != 0) {
        lVar1 = FUN_144a7cbb2();
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) goto LAB_143e0f218;
        param_2 = *(longlong *)(param_1 + 8);
        if (param_2 != 0) goto LAB_143e0f331;
      }
      param_2 = 0;
      goto LAB_143e0f218;
    }
    plVar2 = (longlong *)(param_1 + 0x10);
  }
  param_2 = *plVar2;
LAB_143e0f218:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0f348 FUN_143e0f348 body=7 status=ok
// SIG undefined FUN_143e0f348(void)

void FUN_143e0f348(void)

{
  DAT_14cb89f80 = DAT_14cb89f80 + 1;
  return;
}



// FUNCTION 143e0f36e FUN_143e0f36e body=2861 status=ok
// SIG undefined FUN_143e0f36e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_143e0f36e(double *param_1,longlong *param_2,double *param_3,longlong *param_4,
                      undefined4 param_5,char param_6)

{
  undefined4 uVar1;
  double _Y;
  double _Y_00;
  double _X;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  code *pcVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined8 *local_2f0;
  undefined1 *local_2e8;
  undefined8 local_2e0;
  wchar_t *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  undefined8 *local_2c0;
  code *local_2b8;
  code *local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  double local_280;
  undefined4 local_1fc;
  undefined4 local_1d0;
  double local_1a0;
  double dStack_198;
  double local_190;
  code *local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined2 local_13f;
  undefined1 local_13d;
  undefined4 local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined2 local_128;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0 [4];
  undefined4 *local_e0;
  uint local_d8;
  uint local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if ((param_2 != (longlong *)0x0) && (local_2a8 = FUN_1447210f0(param_2), local_2a8 != 0)) {
    (**(code **)(*param_2 + 0x588))(param_2,&local_168,&local_188);
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x5d0))(param_2);
    if (plVar5 != (longlong *)0x0) {
      plVar6 = (longlong *)(**(code **)(*plVar5 + 0x6b8))(plVar5);
      if (plVar6 == param_2 && param_6 == '\0') {
        (**(code **)(*plVar5 + 0x680))(plVar5,&local_2a0);
        local_178 = local_290;
        local_188 = local_2a0;
        dStack_180 = dStack_298;
      }
      else if (plVar6 != param_2) {
        lVar8 = param_2[0x39];
        dVar13 = DAT_14c8462e8;
        dVar12 = DAT_14c8462d8;
        dVar20 = DAT_14c8462e0;
        if (lVar8 != 0) {
          dVar14 = *(double *)(lVar8 + 0x240);
          dVar16 = *(double *)(lVar8 + 0x248);
          dVar23 = *(double *)(lVar8 + 0x250);
          dVar12 = *(double *)(lVar8 + 600);
          dVar20 = dVar14 * 0.0 - dVar16 * 1.0;
          dVar21 = dVar16 * 0.0 - dVar23 * 0.0;
          dVar22 = dVar23 * 1.0 - dVar14 * 0.0;
          dVar21 = dVar21 + dVar21;
          dVar22 = dVar22 + dVar22;
          dVar20 = dVar20 + dVar20;
          dVar13 = dVar20 * dVar12 + 0.0 + (dVar22 * dVar14 - dVar21 * dVar16);
          dVar12 = (dVar20 * dVar16 - dVar22 * dVar23) + dVar12 * dVar21 + 1.0;
          dVar20 = (dVar23 * dVar21 - dVar14 * dVar20) + *(double *)(lVar8 + 600) * dVar22 + 0.0;
        }
        dStack_180 = 0.0;
        if ((((dVar12 != 0.0) || (NAN(dVar12))) || (dVar20 != 0.0)) || (NAN(dVar20))) {
          dStack_180 = atan2(dVar20,dVar12);
          dStack_180 = dStack_180 * 57.29577951308232;
        }
        dVar12 = SQRT(dVar12 * dVar12 + dVar20 * dVar20);
        local_188 = (code *)0x0;
        if (((dVar13 != 0.0) || (NAN(dVar13))) || ((dVar12 != 0.0 || (NAN(dVar12))))) {
          dVar12 = atan2(dVar13,dVar12);
          local_188 = (code *)(dVar12 * 57.29577951308232);
        }
        local_178 = 0.0;
      }
    }
    dVar12 = (double)FUN_144719204(local_188,0);
    dVar20 = (double)FUN_144719204(dStack_180,0);
    dVar13 = sin(dVar12 * 0.017453292519943295);
    dVar12 = cos(dVar12 * 0.017453292519943295);
    dVar22 = sin(dVar20 * 0.017453292519943295);
    dVar20 = cos(dVar20 * 0.017453292519943295);
    local_190 = dVar13 * 5000.0 + local_158;
    dStack_198 = dVar22 * dVar12 * 5000.0 + dStack_160;
    local_1a0 = dVar20 * dVar12 * 5000.0 + local_168;
    local_12c = 0;
    local_128 = 0x101;
    local_100 = 0;
    local_f8 = 0x800000000;
    local_e0 = (undefined4 *)0x0;
    local_d4 = 4;
    local_140 = 1;
    local_134 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_13f = 1;
    local_13d = 0;
    local_130 = 0;
    local_13c = 0x1000000;
    local_138 = 1;
    local_f0[0] = *(undefined4 *)((longlong)param_2 + 0xc);
    local_d8 = 1;
    iVar4 = (int)param_4[1];
    if (0 < iVar4) {
      lVar8 = 0;
      do {
        uVar2 = local_d8;
        lVar11 = *(longlong *)(*param_4 + lVar8 * 8);
        if (lVar11 != 0) {
          uVar1 = *(undefined4 *)(lVar11 + 0xc);
          lVar11 = (longlong)(int)local_d8;
          local_d8 = local_d8 + 1;
          if (local_d4 < local_d8) {
            FUN_1447de67e(local_f0,uVar2);
          }
          puVar7 = local_e0;
          if (local_e0 == (undefined4 *)0x0) {
            puVar7 = local_f0;
          }
          puVar7[lVar11] = uVar1;
          iVar4 = (int)param_4[1];
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar4);
    }
    iVar4 = (int)param_2[0x38];
    if (0 < iVar4) {
      lVar8 = 0;
      do {
        uVar2 = local_d8;
        lVar11 = *(longlong *)(param_2[0x37] + lVar8 * 8);
        if (lVar11 != 0) {
          uVar1 = *(undefined4 *)(lVar11 + 0xc);
          lVar11 = (longlong)(int)local_d8;
          local_d8 = local_d8 + 1;
          if (local_d4 < local_d8) {
            FUN_1447de67e(local_f0,uVar2);
          }
          puVar7 = local_e0;
          if (local_e0 == (undefined4 *)0x0) {
            puVar7 = local_f0;
          }
          puVar7[lVar11] = uVar1;
          iVar4 = (int)param_2[0x38];
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar4);
    }
    if (DAT_14cb223d8 == 0) {
      local_2c0 = &local_2a0;
      local_2a0 = FUN_1449e2820;
      local_2b0 = FUN_14081d0ea;
      local_2b8 = FUN_1427b09ee;
      local_2c8 = &LAB_147f29feb;
      local_2d0 = FUN_1464384fe;
      local_2d8 = L"Engine";
      local_2e0 = 0;
      local_2e8 = (undefined1 *)CONCAT44(local_2e8._4_4_,0x10004001);
      local_2f0 = (undefined8 *)CONCAT44(local_2f0._4_4_,8);
      local_2f8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_2c0 = &local_2a0;
        local_2a0 = FUN_1449e2820;
        local_2b0 = FUN_14081d0ea;
        local_2b8 = FUN_1427b09ee;
        local_2c8 = &LAB_147f29feb;
        local_2d0 = FUN_1464384fe;
        local_2d8 = L"Engine";
        local_2e0 = 0;
        local_2e8 = (undefined1 *)CONCAT44(local_2e8._4_4_,0x10004001);
        local_2f0 = (undefined8 *)CONCAT44(local_2f0._4_4_,8);
        local_2f8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar6 = (longlong *)FUN_144718840(plVar5);
      if ((((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) &&
          ((lVar8 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar8 != 0 &&
           ((((*(char *)(lVar8 + 0x52) == '\0' && (*(char *)(lVar8 + 0x50) == '\x01')) &&
             (lVar11 = *(longlong *)(lVar8 + 0x20), lVar11 != 0)) &&
            ((*(short *)(lVar8 + 0x28) < 0 || (*(longlong *)(lVar8 + 0x30) != 0)))))))) &&
         (*(char *)(lVar11 + 0x88) == '\x01')) {
        local_130 = (undefined1)(1 << (*(byte *)(lVar11 + 0x89) & 0x1f));
      }
    }
    memset(&local_2a0,0,0x100);
    local_1d0 = 0xffffffff;
    local_2a0 = (code *)CONCAT44(0x3f800000,(undefined4)local_2a0);
    local_1fc = 0xffffffff;
    local_2e8 = &DAT_14cad0f10;
    local_2f0 = &local_150;
    local_2f8 = param_5;
    cVar3 = FUN_1400b50cc(local_2a8,&local_2a0,&local_168,&local_1a0);
    if (cVar3 == '\0') {
      local_280 = local_190;
      local_290 = local_1a0;
      dStack_288 = dStack_198;
    }
    dVar14 = local_280 - param_3[2];
    dVar23 = dStack_288 - param_3[1];
    dVar16 = local_290 - *param_3;
    dVar21 = dVar14 * dVar14 + dVar16 * dVar16 + dVar23 * dVar23;
    if (((dVar21 != 1.0) || (_Y = dVar14, _Y_00 = dVar23, _X = dVar16, NAN(dVar21))) &&
       (_Y = DAT_14c8464f0, _Y_00 = DAT_14c8464e8, _X = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar21)) {
      dVar21 = 1.0 / SQRT(dVar21);
      _Y = dVar14 * dVar21;
      _Y_00 = dVar23 * dVar21;
      _X = dVar16 * dVar21;
    }
    dVar14 = 0.0;
    if (0.0 < dVar13 * _Y + dVar20 * dVar12 * _X + dVar22 * dVar12 * _Y_00) {
      local_158 = param_3[2];
      local_168 = *param_3;
      dStack_160 = param_3[1];
      if ((((_Y_00 != 0.0) || (NAN(_Y_00))) || (_X != 0.0)) || (NAN(_X))) {
        dVar14 = atan2(_Y_00,_X);
        dVar14 = dVar14 * 57.29577951308232;
      }
      dVar12 = SQRT(_X * _X + _Y_00 * _Y_00);
      pcVar15 = (code *)0x0;
      if (((_Y != 0.0) || (NAN(_Y))) || ((dVar12 != 0.0 || (NAN(dVar12))))) {
        dVar12 = atan2(_Y,dVar12);
        pcVar15 = (code *)(dVar12 * 57.29577951308232);
      }
      local_178 = 0.0;
      local_188 = pcVar15;
      dStack_180 = dVar14;
    }
    auVar19._8_8_ = dStack_180;
    auVar19._0_8_ = local_188;
    auVar18 = divpd(auVar19,_DAT_1499387d0);
    auVar17._0_8_ = local_178 / 360.0;
    auVar17._8_8_ = 0;
    auVar19 = roundpd(auVar18,auVar18,3);
    auVar18 = roundpd(auVar17,auVar17,3);
    dVar12 = ((double)local_188 - auVar19._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar20 = (dStack_180 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar23 = (local_178 - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar21 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar13 = sin(dVar12);
    dVar22 = sin(dVar20);
    dVar14 = sin(dVar23);
    sin(dVar21);
    dVar16 = cos(dVar12);
    dVar20 = cos(dVar20);
    dVar23 = cos(dVar23);
    cos(dVar21);
    dVar12 = dVar22 * dVar13 * dVar14 + dVar20 * dVar16 * dVar23;
    *param_1 = dVar13 * dVar22 * dVar23 - dVar16 * dVar20 * dVar14;
    param_1[1] = -(dVar13 * dVar20 * dVar23) - dVar16 * dVar22 * dVar14;
    auVar18._8_4_ = SUB84(dVar12,0);
    auVar18._0_8_ = -(dVar20 * dVar13 * dVar14) + dVar22 * dVar16 * dVar23;
    auVar18._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 2) = auVar18;
    param_1[4] = local_168;
    param_1[5] = dStack_160;
    param_1[6] = local_158;
    param_1[7] = 0.0;
    param_1[8] = 1.0;
    param_1[9] = 1.0;
    param_1[10] = 1.0;
    param_1[0xb] = 0.0;
    if (local_e0 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (local_100 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_318);
  }
  pdVar9 = (double *)&DAT_14c846480;
  pdVar10 = param_1;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pdVar10 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar10 = pdVar10 + 1;
  }
  if ((local_d0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e0fe9c FUN_143e0fe9c body=860 status=ok
// SIG undefined FUN_143e0fe9c(void)

longlong *
FUN_143e0fe9c(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong *local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  uint local_308;
  int local_304;
  undefined8 local_300 [2];
  longlong local_2f0;
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((param_2 == (longlong *)0x0) ||
      (lVar5 = (**(code **)(*param_2 + 0x180))(param_2), lVar5 == 0)) || (param_4 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_368);
  }
  local_348 = *param_3;
  FUN_1446dcdd4(&local_308);
  lVar6 = FUN_140a4bd48(&local_308);
  if (local_2f0 != 0) {
    FUN_1400020a8();
  }
  if ((lVar6 == 0) ||
     (((*(byte *)(lVar6 + 0x590) & 1) != 0 && (iVar4 = FUN_14490d72a(lVar5), iVar4 == 3)))) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    local_338 = *param_6;
    uStack_334 = param_6[1];
    uStack_330 = param_6[2];
    uStack_32c = param_6[3];
    local_328 = param_6[4];
    uStack_324 = param_6[5];
    uStack_320 = param_6[6];
    uStack_31c = param_6[7];
    local_318 = param_6[8];
    uStack_314 = param_6[9];
    uStack_310 = param_6[10];
    uStack_30c = param_6[0xb];
    local_304 = 0;
    local_308 = *(uint *)(param_4 + 0xc);
    if ((int)local_308 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((local_308 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_308 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar6 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar8;
      }
    }
    local_304 = iVar4;
    FUN_140ff1a6a(local_300,param_5);
    local_88 = local_338;
    uStack_84 = uStack_334;
    uStack_80 = uStack_330;
    uStack_7c = uStack_32c;
    local_78 = local_328;
    uStack_74 = uStack_324;
    uStack_70 = uStack_320;
    uStack_6c = uStack_31c;
    local_68 = local_318;
    uStack_64 = uStack_314;
    uStack_60 = uStack_310;
    uStack_5c = uStack_30c;
    local_58 = param_7;
    local_54 = param_8;
    plVar7 = (longlong *)FUN_14001cc68(0x340,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14b4227f0;
    FUN_14893f1ca(plVar7 + 2,&local_308,param_3);
    *param_1 = (longlong)(plVar7 + 2);
    param_1[1] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    FUN_140e67fb0(&local_348,lVar5);
    if (local_340 != (longlong *)0x0) {
      iVar4 = (int)local_340[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar8 = (int)local_340[1];
        bVar9 = iVar4 == iVar8;
        if (bVar9) {
          *(int *)(local_340 + 1) = iVar4 + 1;
          iVar8 = iVar4;
        }
        iVar4 = iVar8;
        UNLOCK();
        plVar7 = local_340;
      } while (!bVar9);
      LOCK();
      piVar1 = (int *)((longlong)local_340 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_340 + 0x10))();
      }
      lVar5 = local_348;
      if (plVar7 != (longlong *)0x0) {
        if (local_348 != 0) {
          local_348 = *param_1;
          plVar3 = (longlong *)param_1[1];
          local_340 = plVar3;
          if (plVar3 == (longlong *)0x0) {
            FUN_140e67c44(lVar5,&local_348);
          }
          else {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
            FUN_140e67c44();
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
          }
        }
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    local_300[0] = 0;
    FUN_14076ba36();
  }
  if ((local_50 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e101fa FUN_143e101fa body=210 status=ok
// SIG undefined FUN_143e101fa(void)

void FUN_143e101fa(undefined8 *param_1,float param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = *param_1;
  FUN_1446dcdd4(local_78);
  lVar1 = FUN_140a4bd48(local_78);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  fVar2 = 0.0;
  if (lVar1 != 0) {
    if (param_3 <= 0.0) {
      param_3 = (float)FUN_140b536be(lVar1);
    }
    fVar2 = (float)FUN_140b53448(lVar1);
    fVar2 = (fVar2 * param_2 * 0.5 + param_3) * param_2;
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 143e102ce FUN_143e102ce body=191 status=ok
// SIG undefined FUN_143e102ce(void)

void FUN_143e102ce(undefined8 *param_1,uint param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = *param_1;
  FUN_1446dcdd4(local_68);
  lVar1 = FUN_140a4bd48(local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    if (param_3 <= 0.0) {
      param_3 = (float)FUN_140b536be(lVar1);
    }
    fVar2 = (float)FUN_140b53448(lVar1);
    FUN_140dcf153(fVar2 * 0.5,param_3,param_2 ^ 0x80000000);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1038e FUN_143e1038e body=101 status=ok
// SIG undefined FUN_143e1038e(void)

void FUN_143e1038e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_140d12354();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) &&
       (((char)plVar1[0x2f] == '\x03' ||
        (((*(byte *)(plVar1 + 0xc) & 1) != 0 || ((*(byte *)((longlong)plVar1 + 0x61) & 1) != 0))))))
    {
      *(undefined1 *)((longlong)plVar1 + 0x1152) = 0;
                    /* WARNING: Could not recover jumptable at 0x000143e103ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x6c0))(plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143e10420 FUN_143e10420 body=644 status=ok
// SIG undefined FUN_143e10420(void)

undefined8
FUN_143e10420(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_a8 [32];
  double *local_88;
  longlong local_80;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined4 *)(param_2 + 0x40);
  uStack_54 = *(undefined4 *)(param_2 + 0x44);
  uStack_50 = *(undefined4 *)(param_2 + 0x48);
  uStack_4c = *(undefined4 *)(param_2 + 0x4c);
  local_48 = *(undefined8 *)(param_2 + 0x50);
  (**(code **)(*param_1 + 0x560))(local_58,&local_38);
  if ((char)param_1[0xae] == '\0') {
    if (((1.0 < *(float *)((longlong)param_1 + 0x18c) ||
          *(float *)((longlong)param_1 + 0x18c) == 1.0) || (0.0001 < *(float *)(param_2 + 4))) ||
       ((double)param_1[0x34] * local_28 +
        (double)param_1[0x32] * local_38 + (double)param_1[0x33] * local_30 < 0.999845027923584)) {
      dVar1 = (double)param_1[0x25];
      dVar2 = (double)param_1[0x26];
      dVar3 = (double)param_1[0x27];
      dVar9 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
      if (((dVar9 != 1.0) || (dVar7 = dVar2, dVar8 = dVar3, dVar4 = dVar1, NAN(dVar9))) &&
         (dVar7 = DAT_14c8464e8, dVar8 = DAT_14c8464f0, dVar4 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar9)) {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar7 = dVar2 * dVar9;
        dVar8 = dVar3 * dVar9;
        dVar4 = dVar1 * dVar9;
      }
      if (0.009999999776482582 < dVar8 * local_28 + dVar4 * local_38 + dVar7 * local_30)
      goto LAB_143e1061d;
    }
    *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 2;
    *(undefined1 *)(param_1 + 0xae) = 0;
    local_88 = &local_38;
    local_80 = param_2;
    (**(code **)(*param_1 + 0x500))(param_1,&local_70,param_1 + 0x25,0x3f800000);
    param_1[0x27] = local_60;
    param_1[0x25] = local_70;
    param_1[0x26] = lStack_68;
    if ((double)param_1[0x27] * (double)param_1[0x27] +
        (double)param_1[0x25] * (double)param_1[0x25] +
        (double)param_1[0x26] * (double)param_1[0x26] <
        (double)(*(float *)(param_1 + 0x37) * *(float *)(param_1 + 0x37))) {
      (**(code **)(*param_1 + 0x590))(param_1,param_2);
    }
    else if ((*param_5 <= 0.0001) ||
            (cVar5 = (**(code **)(*param_1 + 0x5d8))(param_1,param_2), cVar5 != '\0'))
    goto LAB_143e105f6;
    uVar6 = 0;
  }
  else {
LAB_143e1061d:
    *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) & 0xfd;
    *(undefined1 *)(param_1 + 0xae) = 0;
LAB_143e105f6:
    uVar6 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 143e106e4 FUN_143e106e4 body=311 status=ok
// SIG undefined FUN_143e106e4(void)

void FUN_143e106e4(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  DAT_14cb8a058 = (undefined8 *)0x0;
  DAT_14cb8a060 = 0;
  FUN_1446efa72(&DAT_14cb8a058,0,3,0x10);
  puVar2 = DAT_14cb8a058;
  DAT_14cb8a060 = 3;
  *DAT_14cb8a058 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14b4228f0;
  puVar2[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar5 = iVar4;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar5;
  puVar2[4] = *param_2;
  return;
}



// FUNCTION 143e1081b FUN_143e1081b body=91 status=ok
// SIG undefined FUN_143e1081b(void)

void FUN_143e1081b(void)

{
  if (DAT_14cb8a060 != 0) {
    if (DAT_14cb8a058 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb8a058)(DAT_14cb8a058,0);
    FUN_1446efa72(&DAT_14cb8a058,0,0,0x10);
    DAT_14cb8a060 = 0;
  }
  if (DAT_14cb8a058 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e1096a FUN_143e1096a body=41 status=ok
// SIG undefined FUN_143e1096a(void)

void FUN_143e1096a(void)

{
  DAT_14cb8a298 = 0;
  if (DAT_14cb8a290 != 0) {
    FUN_1400020a8();
  }
  FUN_145d67702();
  return;
}



// FUNCTION 143e109d2 FUN_143e109d2 body=288 status=ok
// SIG undefined FUN_143e109d2(void)

undefined8 FUN_143e109d2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
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
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      uVar2 = CONCAT71((int7)((ulonglong)(DAT_14cac9ca8 + 0x30) >> 8),
                       *(char *)(lVar1 + 0x178) == '\x03');
      goto LAB_143e10a2f;
    }
  }
  uVar2 = 0;
LAB_143e10a2f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e10af4 FUN_143e10af4 body=713 status=ok
// SIG undefined FUN_143e10af4(void)

ulonglong FUN_143e10af4(longlong param_1,longlong param_2,undefined8 param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  char cVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [48];
  void *local_b8;
  undefined4 local_b0;
  undefined2 *local_98;
  undefined8 uStack_90;
  void *local_88;
  int local_80;
  longlong local_60;
  undefined4 local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_49 = '\0';
  FUN_14105c148(&local_88,param_1);
  cVar6 = FUN_141370352(param_2 + 0x18,&local_88,&local_49);
  FUN_140de863f(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (cVar6 == '\0') {
    pwVar9 = L"Can\'t process reward";
    if (local_49 != '\0') {
      pwVar9 = L"Unique reward already given";
    }
    FUN_140002266(&local_88,L"Failed: %s.",pwVar9);
    pvVar5 = local_88;
    ppvVar1 = (void **)(param_1 + 0xa8);
    local_b8 = local_88;
    if (ppvVar1 != &local_88) {
      *(int *)(param_1 + 0xb0) = local_80;
      if (local_80 == 0 && *(int *)(param_1 + 0xb4) == 0) {
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_80);
        local_b8 = local_88;
        if (local_80 != 0) {
          memcpy(*ppvVar1,pvVar5,(longlong)local_80 * 2);
          local_b8 = local_88;
        }
      }
    }
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x88);
    iVar3 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar3 + 1U) {
      FUN_14655c5d6(plVar2,iVar3);
    }
    lVar4 = *plVar2;
    lVar11 = lVar4 + (longlong)iVar3 * 0x50;
    FUN_145c70dda(lVar11,param_2,param_3);
    if (*(char *)(lVar4 + (longlong)iVar3 * 0x50) != '\0') {
      FUN_1459ff1e4(param_1,lVar11);
      *(undefined4 *)(param_1 + 0xb0) = 0;
      uVar8 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
      if (*(int *)(param_1 + 0xb4) != 0) {
        FUN_1446dd670(param_1 + 0xa8,0);
      }
      goto LAB_143e10c0f;
    }
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(param_2 + 8);
    }
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    FUN_1400b2348(puVar7,&local_98,1);
    puVar10 = local_98;
    if ((int)uStack_90 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_88,
                  L"Package for reward def \'%s\' generated no valid content to be able to open so not allowing package to be added."
                  ,puVar10);
    pvVar5 = local_88;
    ppvVar1 = (void **)(param_1 + 0xa8);
    if (ppvVar1 != &local_88) {
      *(int *)(param_1 + 0xb0) = local_80;
      if (local_80 == 0 && *(int *)(param_1 + 0xb4) == 0) {
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_80);
        if (local_80 != 0) {
          memcpy(*ppvVar1,pvVar5,(longlong)local_80 * 2);
        }
      }
    }
    if (local_88 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1461a7a22(plVar2,local_e8);
    FUN_140de863f(local_b8,local_b0);
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = 0;
LAB_143e10c0f:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143e10dbe FUN_143e10dbe body=892 status=ok
// SIG undefined FUN_143e10dbe(void)

ulonglong FUN_143e10dbe(longlong param_1,uint param_2,longlong *param_3)

{
  void **ppvVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  longlong local_e0;
  ulonglong uStack_d8;
  void *local_d0;
  int local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  void *local_98;
  int local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  longlong local_68;
  undefined4 local_60;
  undefined2 *local_58;
  ulonglong local_48;
  
  uVar8 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x90) <= (int)param_2)) {
    FUN_140002266(&local_98,L"Trying to open a rewards package with an invalid index of \'%i\'.",
                  uVar8);
    pvVar4 = local_98;
    ppvVar1 = (void **)(param_1 + 0xa8);
    if (ppvVar1 != &local_98) {
      *(int *)(param_1 + 0xb0) = local_90;
      if (local_90 == 0 && *(int *)(param_1 + 0xb4) == 0) {
        *(undefined4 *)(param_1 + 0xb4) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_90);
        if (local_90 != 0) {
          memcpy(*ppvVar1,pvVar4,(longlong)local_90 * 2);
        }
      }
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar8 = 0;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x88);
    FUN_1459c8e8c(&local_98,uVar8 * 0x50 + *plVar2);
    lVar7 = FUN_14105c38a(&local_98);
    if (lVar7 == 0) {
      local_d0 = local_80;
      FUN_1400021e4(&local_d0,&local_f8);
      puVar9 = local_f8;
      if (local_f0 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_d0,L"Trying to open a package with an invalid rewards def \'%s\'.",puVar9
                   );
      pvVar4 = local_d0;
      ppvVar1 = (void **)(param_1 + 0xa8);
      if (ppvVar1 != &local_d0) {
        *(int *)(param_1 + 0xb0) = local_c8;
        if (local_c8 == 0 && *(int *)(param_1 + 0xb4) == 0) {
          *(undefined4 *)(param_1 + 0xb4) = 0;
        }
        else {
          FUN_1446dd670(ppvVar1,local_c8);
          if (local_c8 != 0) {
            memcpy(*ppvVar1,pvVar4,(longlong)local_c8 * 2);
          }
        }
      }
      if (local_d0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = 0;
    }
    else {
      FUN_14105c148(&local_d0,param_1);
      local_f8 = local_58;
      local_f0 = local_88;
      local_ec = local_84;
      local_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_b0 = 0;
      local_c0 = local_58;
      local_b8 = local_88;
      local_b4 = local_84;
      FUN_1411c9ab8(&local_a8,&local_e0);
      FUN_140de863f(local_e0,uStack_d8 & 0xffffffff);
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      uVar6 = FUN_148942816(lVar7 + 0x18,&local_d0,&local_98);
      FUN_14655c05c(param_1,uVar6);
      if (((uVar6 < 5) && ((0x16U >> (uVar6 & 0x1f) & 1) != 0)) ||
         (cVar5 = FUN_141165f58(&local_98,&local_d0), cVar5 == '\0')) {
        if (param_3 == (longlong *)0x0) {
          FUN_148942892(param_1,&local_98);
        }
        else {
          iVar3 = (int)param_3[1];
          param_1 = (longlong)iVar3;
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_14655c5d6(param_3,iVar3);
          }
          FUN_1459c8e8c(param_1 * 0x50 + *param_3,&local_98);
        }
        FUN_1461a7aa6(plVar2,uVar8);
        FUN_148949e88(plVar2);
        uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      }
      else {
        uVar8 = 0;
      }
      FUN_140de863f(local_a8,local_a0);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140de863f(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143e1115e FUN_143e1115e body=85 status=ok
// SIG undefined FUN_143e1115e(void)

ulonglong FUN_143e1115e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((char)param_1[5] == '\0') {
    lVar2 = param_1[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *param_1;
      lVar5 = 0;
      do {
        if (*(longlong **)(lVar1 + lVar5) != (longlong *)0x0) {
          cVar3 = (**(code **)(**(longlong **)(lVar1 + lVar5) + 0x10))();
          if (cVar3 != '\0') goto LAB_143e11170;
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)(int)lVar2 * 0x18 != lVar5);
    }
    uVar4 = 0;
  }
LAB_143e11170:
  return uVar4 & 0xffffffff;
}



// FUNCTION 143e111b4 FUN_143e111b4 body=218 status=ok
// SIG undefined FUN_143e111b4(void)

undefined8 FUN_143e111b4(longlong param_1,longlong *param_2,int param_3,longlong param_4)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  
  if ((*(char *)(param_1 + 0x20) == '\x01') &&
     (cVar1 = (**(code **)(*param_2 + 0x28))(), cVar1 == '\0')) {
    return 0;
  }
  if (param_4 == 0) {
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x28) + lVar4) == param_3) {
          lVar5 = *(longlong *)(param_1 + 0x28) - lVar5;
          if (lVar5 != 0) {
            piVar6 = (int *)(lVar5 + 8);
            goto LAB_143e11214;
          }
          break;
        }
        lVar5 = lVar5 + -0x18;
        lVar4 = lVar4 + 0x18;
      } while (-lVar5 != (longlong)*(int *)(param_1 + 0x30) * 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x000143e1128b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_2 + 0x20))(param_2,param_1);
    return uVar3;
  }
  if ((longlong)*(int *)(param_4 + 0x38) != 0) {
    piVar2 = *(int **)(param_4 + 0x30);
    lVar4 = (longlong)*(int *)(param_4 + 0x38) * 0x18;
    do {
      if (*piVar2 == param_3) goto LAB_143e11209;
      piVar2 = piVar2 + 6;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  piVar2 = (int *)0x0;
LAB_143e11209:
  piVar6 = piVar2 + 2;
  if (piVar2 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
LAB_143e11214:
                    /* WARNING: Could not recover jumptable at 0x000143e1122a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_2 + 0x50))(param_2,param_1,piVar6);
  return uVar3;
}



// FUNCTION 143e1128e FUN_143e1128e body=294 status=ok
// SIG undefined FUN_143e1128e(void)

void FUN_143e1128e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *puStack_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_140dfc108(param_2);
  if (plVar2 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140c52150();
    lVar5 = FUN_14477b664(uVar4);
    param_1[1] = lVar5;
  }
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*param_1 == 0)) goto LAB_143e11392;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_143e113b1:
      lVar6 = 0;
    }
    else {
      cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar1 == '\0') goto LAB_143e113b1;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,param_1);
    }
    param_1[2] = lVar6;
  }
  if ((lVar3 != 0) && (lVar6 != 0)) {
    local_48 = 0;
    local_38 = 0;
    puStack_40 = &DAT_3f800000ffffffff;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1416656d2(lVar3,lVar6,&local_48);
    lVar3 = local_30;
    FUN_140de863f(local_30,uStack_28 & 0xffffffff);
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
    }
  }
LAB_143e11392:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e113b6 FUN_143e113b6 body=331 status=ok
// SIG undefined FUN_143e113b6(void)

ulonglong FUN_143e113b6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte unaff_BL;
  byte bVar6;
  undefined7 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  char local_60 [16];
  longlong *local_50;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_140dfc108(param_2);
  if ((plVar3 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3), lVar4 == 0)) {
    bVar6 = 0;
    uVar7 = 0;
  }
  else {
    local_60[0] = '\0';
    local_38[0] = 0;
    FUN_1456bb102(local_60);
    if (((longlong *)*param_1 == (longlong *)0x0) ||
       (lVar5 = (**(code **)(*(longlong *)*param_1 + 0x10))(), lVar5 == 0)) {
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = *(ulonglong *)(lVar5 + 0x2c) & 0xffffffff00000000;
      uVar9 = *(ulonglong *)(lVar5 + 0x2c) & 0xffffffff;
    }
    FUN_1448173f8(local_38);
    if ((local_60[0] == '\x03') && (local_50 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
    uVar7 = (undefined7)((ulonglong)local_38 >> 8);
    bVar6 = 1;
    if (((uVar8 | uVar9) == 0) || ((longlong)*(int *)(lVar4 + 0x80) == 0)) {
      unaff_BL = 0;
    }
    else {
      lVar5 = 0;
      do {
        unaff_BL = *(ulonglong *)(*(longlong *)(lVar4 + 0x78) + lVar5) == (uVar8 | uVar9);
        if ((bool)unaff_BL) break;
        bVar10 = (longlong)*(int *)(lVar4 + 0x80) * 8 + -8 != lVar5;
        lVar5 = lVar5 + 8;
      } while (bVar10);
    }
  }
  plVar3 = (longlong *)param_1[1];
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar7,bVar6 & unaff_BL) & 0xffffffff;
}



// FUNCTION 143e11502 FUN_143e11502 body=554 status=ok
// SIG undefined FUN_143e11502(void)

void FUN_143e11502(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 local_68;
  char local_60;
  undefined7 uStack_5f;
  int local_58;
  longlong *local_50;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = '\0';
  local_38[0] = 0;
  FUN_1456bb102(&local_60,*(undefined8 *)(param_2 + 0xa8));
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_60);
  }
  FUN_1448173f8(local_38);
  if ((local_60 == '\x03') && (local_50 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_143e116b9;
  }
  lVar5 = *(longlong *)((longlong)plVar4 + 0x2c);
  *(longlong *)(param_1 + 0x38) = lVar5;
  if (lVar5 == 0) goto LAB_143e116b9;
  if ((char)plVar4[5] == '\0') {
    lVar5 = plVar4[1];
    if ((longlong)(int)lVar5 != 0) {
      lVar6 = *plVar4;
      lVar7 = 0;
      do {
        if ((*(longlong **)(lVar6 + lVar7) != (longlong *)0x0) &&
           (cVar3 = (**(code **)(**(longlong **)(lVar6 + lVar7) + 0x10))(), cVar3 != '\0'))
        goto LAB_143e11599;
        lVar7 = lVar7 + 0x18;
      } while ((longlong)(int)lVar5 * 0x18 != lVar7);
    }
    goto LAB_143e116b9;
  }
LAB_143e11599:
  plVar4 = (longlong *)FUN_140dfc108(*(undefined8 *)(param_2 + 0xa8));
  if ((plVar4 == (longlong *)0x0) || (lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), lVar5 == 0))
  goto LAB_143e116b9;
  local_70 = &LAB_148942e20;
  local_68 = 0;
  FUN_14894a0ec(&local_60,param_1);
  FUN_14591eb98(lVar5 + 0x30,&local_70);
  if (local_58 == 0) {
LAB_143e11635:
    if (CONCAT71(uStack_5f,local_60) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)CONCAT71(uStack_5f,local_60);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      local_58 = 0;
      goto LAB_143e11635;
    }
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) && ((longlong)*(int *)(lVar5 + 0x80) != 0)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0x78) + lVar6) == *(longlong *)(param_1 + 0x38)) {
        if (((*(char *)(param_1 + 0x30) == '\0') &&
            (*(undefined1 *)(param_1 + 0x30) = 1, *(int *)(param_1 + 0x20) != 0)) &&
           (plVar4 = *(longlong **)(param_1 + 0x18), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x60))(plVar4,param_1);
        }
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)*(int *)(lVar5 + 0x80) * 8 != lVar6);
  }
LAB_143e116b9:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e1172e FUN_143e1172e body=99 status=ok
// SIG undefined FUN_143e1172e(void)

undefined8 FUN_143e1172e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1489321ce(param_2);
  lVar3 = FUN_1401cd272(param_1 + 8,uVar2);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x60) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + 0x20), lVar3 != 0)) {
    uVar2 = FUN_14651c7aa();
    cVar1 = FUN_1448093f4(lVar3,uVar2);
    if (cVar1 != '\0') {
      uVar2 = FUN_140c520a2(lVar3 + 8);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143e11792 FUN_143e11792 body=309 status=ok
// SIG undefined FUN_143e11792(void)

longlong * FUN_143e11792(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = (longlong *)FUN_140c520a2(param_1 + 8);
  if (plVar6 != (longlong *)0x0) {
    if ((char)plVar6[5] != '\0') {
LAB_143e117c9:
      plVar7 = (longlong *)FUN_14001cc68(0x38,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b422a00;
      plVar6 = plVar7 + 2;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[2] = (longlong)&PTR_FUN_14b422a20;
      local_38 = plVar6;
      local_30 = plVar7;
      FUN_14894a626(&local_38,plVar6);
      plVar4 = local_30;
      *param_2 = (longlong)plVar6;
      param_2[1] = (longlong)plVar7;
      if (plVar7 == (longlong *)0x0) {
LAB_143e1185a:
        if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      if (local_30 == (longlong *)0x0) goto LAB_143e1185a;
      LOCK();
      plVar6 = local_30 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 != 0) goto LAB_143e1185a;
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_143e1185a;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      goto LAB_143e118ae;
    }
    lVar3 = plVar6[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = *plVar6;
      lVar8 = 0;
      do {
        if (*(longlong **)(lVar2 + lVar8) != (longlong *)0x0) {
          cVar5 = (**(code **)(**(longlong **)(lVar2 + lVar8) + 0x10))();
          if (cVar5 != '\0') goto LAB_143e117c9;
        }
        lVar8 = lVar8 + 0x18;
      } while ((longlong)(int)lVar3 * 0x18 != lVar8);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_143e118ae:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 143e118c8 FUN_143e118c8 body=212 status=ok
// SIG undefined FUN_143e118c8(void)

void FUN_143e118c8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    *(undefined1 *)(param_1 + 0x58) = 0;
    plVar2 = (longlong *)FUN_1411d67c8(param_1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1401b0f18();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = FUN_1401b0f18();
        plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
        if ((plVar2 != plVar4) && (plVar4 != (longlong *)0x0)) {
          lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
          if (lVar5 != 0) {
            FUN_140457ffc(lVar5 + 0x28,param_1);
          }
        }
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0x9a) == '\x01')) && (*(longlong *)(param_1 + 0x50) != 0))
  {
    FUN_140c7df0a();
  }
  if (plVar2 != (longlong *)0x0) {
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
  FUN_140cc897a(param_1);
  return;
}



// FUNCTION 143e119a4 FUN_143e119a4 body=485 status=ok
// SIG undefined FUN_143e119a4(void)

void FUN_143e119a4(longlong param_1,ulonglong param_2)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
    iVar6 = (uint)((char)*(undefined8 *)(param_1 + 0x98) != '\x01') +
            (int)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    iVar4 = (uint)((char)*(undefined8 *)(param_1 + 0xa0) == '\x01') +
            (int)((ulonglong)*(undefined8 *)(param_1 + 0xa0) >> 0x20);
    if (iVar4 != iVar6) {
      (**(code **)(**(longlong **)(param_1 + 0x100) + 0x2b0))();
      uVar5 = iVar4 - 1;
      uVar2 = (uint)param_2;
      uVar3 = param_2;
      if ((int)uVar5 <= (int)uVar2) {
        if (0.0 <= (float)(param_2 >> 0x20)) {
          param_2 = (ulonglong)uVar5;
        }
        if (uVar5 != uVar2) {
          param_2 = (ulonglong)uVar5;
        }
        uVar3 = param_2 & 0xffffffff;
      }
      fVar1 = (float)(param_2 >> 0x20);
      if ((int)uVar3 <= iVar6) {
        if (fVar1 <= 0.0) {
          fVar1 = 0.0;
        }
        if (iVar6 != (int)uVar3) {
          fVar1 = 0.0;
        }
      }
      roundps(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),1);
    }
  }
  return;
}



// FUNCTION 143e11b8a FUN_143e11b8a body=209 status=ok
// SIG undefined FUN_143e11b8a(void)

void FUN_143e11b8a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  code **local_60;
  undefined1 local_4c [4];
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined1 local_40;
  bool bStack_3f;
  uint local_3c;
  undefined1 local_38;
  undefined1 local_32;
  bool bStack_31;
  code *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_14009d2a0();
  FUN_145d19f6e();
  lVar2 = FUN_14038fb82();
  local_48 = *(undefined2 *)(lVar1 + 0x4a);
  local_46 = DAT_14cb8a3c0;
  local_44 = *(undefined2 *)(lVar2 + 0xe4);
  local_38 = 0;
  local_3c = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x290);
  bVar3 = (local_3c & 0xfffffeff) == 1;
  _local_40 = CONCAT11(bVar3,local_40);
  local_68 = &local_32;
  _local_32 = CONCAT11(bVar3,local_40);
  local_60 = &local_30;
  local_30 = FUN_1416447fa;
  local_28 = 3;
  FUN_145746f10(&local_48,local_4c,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e11c5c FUN_143e11c5c body=605 status=ok
// SIG undefined FUN_143e11c5c(void)

undefined8 FUN_143e11c5c(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *in_stack_00000040;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*param_1 + 0x300))();
  if (lVar4 != 0) {
    lVar5 = FUN_14129d0d4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      lVar5 = FUN_1400d690e(lVar4 + 0x38);
      if (lVar5 != 0) {
        if (param_2 == 0) {
          param_2 = DAT_14cb10918;
        }
        plVar6 = (longlong *)FUN_1460032e2(*in_stack_00000040 + 0x38);
        if (plVar6 != (longlong *)0x0) {
          if (*(char *)(lVar4 + 0x50) == '\x01') {
            cVar3 = FUN_1458fe2b6(lVar4);
            if (cVar3 == '\0') goto LAB_143e11e20;
            plVar7 = (longlong *)FUN_14133b4fc(lVar4);
            lVar4 = plVar7[1];
            if (lVar4 == 0) {
              uVar8 = FUN_1458f96d4();
              lVar4 = FUN_14477b664(uVar8);
              plVar7[1] = lVar4;
            }
            lVar9 = plVar7[2];
            if (((lVar9 == 0) && (lVar9 = 0, lVar4 != 0)) && (*plVar7 != 0)) {
              plVar2 = *(longlong **)(lVar4 + 0xb8);
              if (plVar2 == (longlong *)0x0) {
LAB_143e11eb2:
                lVar9 = 0;
              }
              else {
                cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
                if (cVar3 == '\0') goto LAB_143e11eb2;
                uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar9 = FUN_144aff482(uVar8,plVar7);
              }
              plVar7[2] = lVar9;
            }
            (**(code **)(*plVar6 + 8))(plVar6,&local_50,param_4,lVar9);
            local_60 = local_50;
            local_58 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_48 + 1) = (int)local_48[1] + 1;
              UNLOCK();
            }
            local_78 = &local_60;
            uVar8 = FUN_143e11eba(lVar9,lVar5,param_2,&DAT_14c846480);
          }
          else {
LAB_143e11e20:
            (**(code **)(*plVar6 + 8))(plVar6,&local_50,param_4,lVar5);
            local_70 = local_50;
            local_68 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_48 + 1) = (int)local_48[1] + 1;
              UNLOCK();
            }
            uVar8 = FUN_145872b1d(lVar5,param_2,&local_70);
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_48 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
          goto LAB_143e11ccc;
        }
      }
    }
  }
  uVar8 = 0;
LAB_143e11ccc:
  plVar6 = (longlong *)in_stack_00000040[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e11eba FUN_143e11eba body=458 status=ok
// SIG undefined FUN_143e11eba(void)

undefined8
FUN_143e11eba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [12];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  longlong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((param_1 == 0) ||
     (FUN_14132b09a(&local_118,param_3), plVar3 = local_110, local_110 == (longlong *)0x0)) {
    uVar7 = 0;
  }
  else {
    iVar6 = (int)local_110[1];
    uVar7 = 0;
    do {
      if (iVar6 == 0) goto LAB_143e11f4d;
      LOCK();
      iVar5 = (int)local_110[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(local_110 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    if (local_118 == 0) {
      uVar7 = 0;
    }
    else {
      local_108 = DAT_14caa8578;
      local_f0 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5c = 0;
      puVar9 = local_e8;
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar9 = *param_4;
        param_4 = param_4 + 1;
        puVar9 = puVar9 + 1;
      }
      local_70 = *param_5;
      local_78 = local_70 != 0;
      lVar8 = param_5[1];
      local_100 = param_1;
      local_f8 = param_2;
      if (lVar8 == 0) {
        uStack_68 = 0;
        uStack_64 = 0;
      }
      else {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
        plVar4 = (longlong *)CONCAT44(uStack_64,uStack_68);
        uStack_68 = (undefined4)lVar8;
        uStack_64 = (undefined4)((ulonglong)lVar8 >> 0x20);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
      }
      uVar7 = FUN_14144ff90(local_118,&local_108);
      FUN_145a1457c(&local_108);
    }
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
LAB_143e11f4d:
    if (local_110 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_110 + 0x10))();
      }
    }
  }
  plVar3 = (longlong *)param_5[1];
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
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 143e12086 FUN_143e12086 body=2137 status=ok
// SIG undefined FUN_143e12086(void)

void FUN_143e12086(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_1e8 [32];
  ushort *local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  ushort local_196;
  undefined2 local_194;
  undefined2 local_192;
  undefined2 local_190;
  undefined2 local_18e;
  undefined2 local_18c;
  undefined2 local_18a;
  undefined8 local_188;
  undefined4 local_180;
  undefined2 local_17c;
  ushort local_178;
  undefined4 local_174;
  undefined1 local_170;
  uint local_168 [8];
  undefined8 local_148;
  undefined1 local_140 [32];
  longlong local_120;
  longlong local_118;
  int local_110;
  undefined4 local_10c;
  undefined8 local_e8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  bool bStack_b3;
  uint local_b0;
  undefined1 local_ac;
  undefined8 local_98;
  uint local_90 [8];
  undefined8 local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar11 = param_1 + 0x40;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar5 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x80);
    }
    iVar7 = *(int *)(param_1 + 0x88);
    iVar9 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar9 = iVar7;
    }
    if (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74) < iVar9 >> 2) {
      uVar4 = *(uint *)(param_1 + 0x68);
      local_1b0 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        puVar15 = *(uint **)(param_1 + 0x60);
        if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
          puVar15 = (uint *)(param_1 + 0x50);
        }
        uVar17 = *puVar15;
        if (uVar17 == 0) {
          iVar7 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar7 = uVar4 - 1;
          }
          uVar14 = 0;
          uVar18 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar18 = uVar14;
          }
          iVar7 = 0;
          do {
            if (uVar18 == uVar14) goto LAB_143e12108;
            iVar7 = iVar7 + 0x20;
            uVar17 = puVar15[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar14 = 0;
          iVar7 = 0;
        }
        uVar16 = (ulonglong)(-uVar17 & uVar17);
        uVar18 = uVar16 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar17 = (iVar7 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 < (int)uVar4) {
          uVar10 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar5 + (longlong)
                      *(int *)(*(longlong *)(param_1 + 0x40) + 0x14 + (longlong)(int)uVar17 * 0x18)
                      * 4) = 0xffffffff;
            uVar10 = ~(uint)uVar16 & uVar10;
            puVar15 = *(uint **)(param_1 + 0x60);
            if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
              puVar15 = (uint *)(param_1 + 0x50);
            }
            uVar2 = *(uint *)(param_1 + 0x68);
            iVar9 = (int)uVar14;
            lVar8 = (longlong)iVar9;
            uVar17 = puVar15[lVar8] & uVar10;
            if (uVar17 == 0) {
              iVar12 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar12 = uVar2 - 1;
              }
              iVar12 = iVar12 >> 5;
              iVar7 = iVar7 + 0x20;
              iVar13 = iVar12;
              if (iVar12 < iVar9) {
                iVar13 = iVar9;
              }
              if (iVar9 < iVar12) {
                lVar19 = 0;
                do {
                  uVar17 = puVar15[lVar8 + lVar19 + 1];
                  if (uVar17 != 0) {
                    uVar14 = (ulonglong)(iVar9 + (int)lVar19 + 1);
                    uVar10 = 0xffffffff;
                    goto LAB_143e12877;
                  }
                  iVar7 = iVar7 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar13 - lVar8 != lVar19);
                uVar10 = 0xffffffff;
                iVar9 = iVar13;
              }
              uVar14 = (ulonglong)(iVar9 + 1);
              uVar17 = uVar2;
            }
            else {
LAB_143e12877:
              uVar16 = (ulonglong)(-uVar17 & uVar17);
              uVar18 = uVar16 * 2 + 1;
              lVar8 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                }
              }
              uVar17 = (iVar7 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar17) {
                uVar17 = uVar2;
              }
            }
          } while (uVar17 != uVar4);
        }
      }
    }
    else if (0 < iVar7) {
      lVar8 = 0;
      do {
        *(undefined4 *)(lVar5 + lVar8 * 4) = 0xffffffff;
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x88));
    }
LAB_143e12108:
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x4c) < 0) {
      FUN_144727cd0(lVar11,0);
    }
    *(undefined8 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  lVar5 = FUN_14009d2a0();
  FUN_145c2e608();
  lVar8 = FUN_14038fb82();
  local_b8._0_2_ = *(undefined2 *)(lVar5 + 0x4a);
  local_b8._2_2_ = DAT_14cb8a3cc;
  local_ac = 0;
  local_b0 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x290);
  bVar20 = (local_b0 & 0xfffffeff) == 1;
  _local_b4 = CONCAT11(bVar20,local_b4);
  local_1c8 = (ushort *)&local_58;
  local_58._0_2_ = CONCAT11(bVar20,local_b4);
  local_1c0 = &local_188;
  local_188 = FUN_1416de47e;
  local_180 = CONCAT31(local_180._1_3_,3);
  local_1b8 = lVar11;
  local_1b0 = param_2;
  local_1a8 = lVar11;
  FUN_146249790(&local_b8,&local_19c,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  local_98 = 0x10000000000;
  local_70 = 0x10000000000;
  local_68 = 0;
  uStack_60 = 0;
  local_188._0_4_ = CONCAT22(*(undefined2 *)(lVar5 + 0x110),*(undefined2 *)(lVar8 + 0x84));
  lVar11 = 0;
  do {
    uVar14 = local_98;
    uVar1 = *(ushort *)((longlong)&local_188 + lVar11);
    iVar7 = uVar1 + 1;
    iVar9 = iVar7 - (int)local_98;
    if (iVar9 != 0 && (int)local_98 <= iVar7) {
      if ((int)local_98 == 0) {
LAB_143e12242:
        if (local_98._4_4_ <= (int)(uint)uVar1) {
          local_98 = CONCAT44(0x100,(int)local_98);
          FUN_14497ddce(&local_b8,uVar14 & 0xffffffff);
          iVar7 = (int)local_98 + iVar9;
        }
        iVar12 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar12 = iVar7;
        }
        local_98 = CONCAT44(local_98._4_4_,iVar7);
        if (iVar7 % 0x20 != 0) {
          bVar6 = -(char)(iVar7 % 0x20);
          (&local_b8)[iVar12 >> 5] =
               (uint)((&local_b8)[iVar12 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
        }
      }
      else {
        iVar12 = (int)local_98 + 0x1e;
        if (-1 < (int)local_98 + -1) {
          iVar12 = (int)local_98 + -1;
        }
        if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_143e12242;
        local_98 = CONCAT44(local_98._4_4_,iVar7);
      }
      FUN_1447c45ca(&local_b8,uVar14 & 0xffffffff,iVar9,0);
    }
    (&local_b8)[uVar1 >> 5] = (&local_b8)[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    uVar14 = local_70;
    lVar11 = lVar11 + 2;
  } while (lVar11 != 4);
  uVar1 = *(ushort *)(lVar5 + 0x5c);
  iVar7 = uVar1 + 1;
  iVar9 = iVar7 - (int)local_70;
  if (iVar9 != 0 && (int)local_70 <= iVar7) {
    if ((int)local_70 == 0) {
LAB_143e1231c:
      if (local_70._4_4_ <= (int)(uint)uVar1) {
        local_70 = CONCAT44(0x100,(int)local_70);
        FUN_14497ddce(local_90,uVar14 & 0xffffffff);
        iVar7 = (int)local_70 + iVar9;
      }
      iVar12 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar12 = iVar7;
      }
      local_70 = CONCAT44(local_70._4_4_,iVar7);
      if (iVar7 % 0x20 != 0) {
        bVar6 = -(char)(iVar7 % 0x20);
        local_90[iVar12 >> 5] = (local_90[iVar12 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
      }
    }
    else {
      iVar12 = (int)local_70 + 0x1e;
      if (-1 < (int)local_70 + -1) {
        iVar12 = (int)local_70 + -1;
      }
      if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_143e1231c;
      local_70 = CONCAT44(local_70._4_4_,iVar7);
    }
    FUN_1447c45ca(local_90,uVar14 & 0xffffffff,iVar9,0);
  }
  local_90[uVar1 >> 5] = local_90[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
  local_180 = *(undefined4 *)(lVar5 + 0xbc);
  local_17c = *(undefined2 *)(lVar5 + 0xc0);
  local_188._0_4_ = CONCAT22(*(undefined2 *)(lVar5 + 0xc2),*(undefined2 *)(lVar5 + 0x4a));
  local_188 = (code *)CONCAT44(*(undefined4 *)(lVar5 + 0xc4),(undefined4)local_188);
  local_178 = (ushort)(byte)local_178;
  local_174 = 0x6ff;
  local_170 = 0;
  local_148 = 0;
  uVar4 = (int)local_98 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar17 = 0x100;
    if (0x100 < uVar4) {
      uVar17 = uVar4;
    }
    local_148 = (ulonglong)uVar17 << 0x20;
    FUN_14497ddce(local_168,0);
  }
  local_148 = CONCAT44(local_148._4_4_,(int)local_98);
  if ((int)local_98 != 0) {
    memcpy(local_168,&local_b8,(ulonglong)((int)local_98 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_120 = 0;
  uVar4 = (int)local_70 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar17 = 0x100;
    if (0x100 < uVar4) {
      uVar17 = uVar4;
    }
    local_120 = (ulonglong)uVar17 << 0x20;
    FUN_14497ddce(local_140,0);
  }
  iVar7 = (int)local_70;
  local_120 = CONCAT44(local_120._4_4_,iVar7);
  if (iVar7 != 0) {
    memcpy(local_140,local_90,(ulonglong)(iVar7 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar14 = uStack_60;
  lVar11 = local_68;
  local_118 = 0;
  local_110 = (int)uStack_60;
  if ((int)uStack_60 == 0) {
    local_10c = 0;
  }
  else {
    FUN_1403b8c86(&local_118,uStack_60 & 0xffffffff,0);
    FUN_1403b8bfd(local_118,lVar11,uVar14 & 0xffffffff);
  }
  uVar18 = local_148;
  uVar3 = local_188;
  uVar14 = local_1b0;
  local_e8 = 0x10000000000;
  local_c0 = 0x10000000000;
  uVar1 = (ushort)local_188;
  iVar7 = (ushort)local_188 + 1;
  iVar9 = iVar7 - (int)local_148;
  if (iVar9 == 0 || iVar7 < (int)local_148) goto LAB_143e125a7;
  if ((int)local_148 == 0) {
LAB_143e1254e:
    if (local_148._4_4_ <= (int)(uint)(ushort)local_188) {
      local_148 = CONCAT44(0x100,(int)local_148);
      FUN_14497ddce(local_168,uVar18 & 0xffffffff);
      iVar7 = (int)local_148 + iVar9;
    }
    iVar12 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar12 = iVar7;
    }
    local_148 = CONCAT44(local_148._4_4_,iVar7);
    if (iVar7 % 0x20 != 0) {
      bVar6 = -(char)(iVar7 % 0x20);
      local_168[iVar12 >> 5] = (local_168[iVar12 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
    }
  }
  else {
    iVar12 = (int)local_148 + 0x1e;
    if (-1 < (int)local_148 + -1) {
      iVar12 = (int)local_148 + -1;
    }
    if (iVar12 >> 5 != (uint)((ushort)local_188 >> 5)) goto LAB_143e1254e;
    local_148 = CONCAT44(local_148._4_4_,iVar7);
  }
  FUN_1447c45ca(local_168,uVar18 & 0xffffffff,iVar9,0);
LAB_143e125a7:
  local_168[uVar1 >> 5] = local_168[uVar1 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  local_194 = *(undefined2 *)(lVar5 + 0xbc);
  local_50 = &local_188;
  local_192 = *(undefined2 *)(lVar5 + 0xbe);
  local_190 = *(undefined2 *)(lVar5 + 0xc0);
  local_18e = *(undefined2 *)(lVar5 + 0xc2);
  local_18c = *(undefined2 *)(lVar5 + 0xc4);
  local_18a = *(undefined2 *)(lVar5 + 0xc6);
  local_58 = (code *)&local_194;
  FUN_1403b5126(local_168,&local_58,2);
  local_1c8 = &local_196;
  local_196 = local_178 | 0x200;
  local_58 = FUN_1418a6560;
  local_50 = (undefined8 *)CONCAT71(local_50._1_7_,3);
  local_1b8 = local_1a8;
  local_1c0 = &local_58;
  FUN_1462479ca(&local_188,&local_1a0,*(longlong *)(param_1 + 0x28) + 0x28,uVar14);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1406adae8(uVar14,local_19c,local_1a0);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e128e8 FUN_143e128e8 body=424 status=ok
// SIG undefined FUN_143e128e8(void)

void FUN_143e128e8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
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
  code *local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  if ((lVar1 != 0) && (0 < (longlong)*(int *)(lVar1 + 0x140))) {
    uVar3 = (longlong)*(int *)(lVar1 + 0x140) + 1;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x138) + -0x10 + uVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        if (DAT_14cb39ca0 == 0) {
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_14638c6c0;
          local_70 = &local_50;
          local_78 = &LAB_14811044c;
          local_80 = &LAB_1407f5cf8;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x8e0;
          FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
        }
        if (((*(int *)(plVar2[2] + 0x38) < *(int *)(DAT_14cb39ca0 + 0x38)) ||
            (*(longlong *)
              (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) !=
             DAT_14cb39ca0 + 0x30)) || ((*(byte *)(plVar2 + 0x119) & 1) == 0)) {
          local_58 = plVar2;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar2);
          }
          FUN_143e128e8(&local_58);
        }
        else {
          (**(code **)(*plVar2 + 0x4a0))(plVar2,&DAT_14cadad9c);
        }
      }
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e12a92 FUN_143e12a92 body=31 status=ok
// SIG undefined FUN_143e12a92(void)

undefined8 FUN_143e12a92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e12b94 FUN_143e12b94 body=36 status=ok
// SIG undefined FUN_143e12b94(void)

void FUN_143e12b94(undefined8 *param_1)

{
  FUN_14113775c(*param_1,&DAT_14c846480,1,0,0);
  return;
}



// FUNCTION 143e12be2 FUN_143e12be2 body=29 status=ok
// SIG undefined FUN_143e12be2(void)

undefined8 FUN_143e12be2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e12c00 FUN_143e12c00 body=31 status=ok
// SIG undefined FUN_143e12c00(void)

undefined8 FUN_143e12c00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e12d02 FUN_143e12d02 body=31 status=ok
// SIG undefined FUN_143e12d02(void)

undefined8 FUN_143e12d02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e12d6e FUN_143e12d6e body=2210 status=ok
// SIG undefined FUN_143e12d6e(void)

ulonglong FUN_143e12d6e(uint *param_1,double *param_2)

{
  int *piVar1;
  code *pcVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  uint uVar7;
  byte bVar8;
  float *pfVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  float *pfVar12;
  longlong *plVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong local_d8;
  code *local_d0;
  double local_c8;
  longlong *local_c0;
  undefined4 local_a8 [2];
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_1[1] != 0) {
    uVar7 = *param_1;
    puVar11 = (undefined4 *)0x0;
    if (((int)uVar7 < 0) || (DAT_14c9647dc <= (int)uVar7)) goto LAB_143e12e0f;
    plVar13 = (longlong *)
              ((ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
    if ((plVar13 != (longlong *)0x0) &&
       (((*(uint *)(plVar13 + 2) == param_1[1] &&
         (pcVar2 = (code *)*param_2, (*(uint *)(plVar13 + 1) & 0x10200000) == 0)) &&
        (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))) {
      local_d0 = pcVar2;
      FUN_1447cd2ec(plVar13 + 0x1bf);
      lVar14 = plVar13[0x1c2];
      if (lVar14 != 0) {
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
        lVar14 = (ulonglong)((uint)*(ushort *)(lVar14 + 0x27a) * 0x50) + DAT_14c9a6588;
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
        local_d0 = (code *)((ulonglong)local_d0 & 0xffffffffffffff00);
        local_a8[0] = 0;
        FUN_1456bb102(&local_d0,plVar13);
        pfVar12 = &local_a0;
        FUN_1448729ea(lVar14,pfVar12,&local_d0);
        bVar8 = 3;
        if (local_80 != 3) {
          pfVar9 = &local_78;
          FUN_1400b56fe(pfVar9,&local_a0,3);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
          if (pcVar3 != (code *)0x0) {
            if (0x18 < local_60) {
              pfVar9 = (float *)CONCAT44(uStack_74,local_78);
            }
            (*pcVar3)(pfVar9);
          }
          bVar8 = local_80;
          if (0x18 < local_60) {
            FUN_1400020a8(CONCAT44(uStack_74,local_78));
            bVar8 = local_80;
          }
        }
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_88) {
            pfVar12 = (float *)CONCAT44(uStack_9c,local_a0);
          }
          (*pcVar3)(pfVar12);
        }
        puVar11 = local_a8;
        if (0x18 < local_88) {
          FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
        }
        FUN_1448173f8(puVar11);
        if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
        }
        lVar14 = plVar13[0x1c2];
        if ((*(byte *)(lVar14 + 0x278) & 2) == 0) {
          if ((*(byte *)(lVar14 + 0x27c) & 0x10) == 0) {
            if ((*(byte *)(lVar14 + 0x27c) & 8) == 0) {
              AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
              lVar14 = (ulonglong)((uint)*(ushort *)(lVar14 + 0x27a) * 0x50) + DAT_14c9a6588;
              ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
              local_d0 = (code *)((ulonglong)local_d0 & 0xffffffffffffff00);
              local_a8[0] = 0;
              FUN_1456bb102(&local_d0,plVar13);
              pfVar12 = &local_a0;
              pfVar9 = pfVar12;
              FUN_1448729ea(lVar14,pfVar12,&local_d0);
              if (local_80 == 3) {
                fVar16 = local_a0;
                bVar8 = 3;
              }
              else {
                pfVar15 = &local_78;
                pfVar9 = &local_a0;
                FUN_1400b56fe(pfVar15,pfVar9,3);
                fVar16 = 0.0;
                if (local_58 != 0) {
                  fVar16 = local_78;
                }
                pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
                if (pcVar3 != (code *)0x0) {
                  if (0x18 < local_60) {
                    pfVar15 = (float *)CONCAT44(uStack_74,local_78);
                  }
                  (*pcVar3)(pfVar15);
                }
                bVar8 = local_80;
                if (0x18 < local_60) {
                  FUN_1400020a8(CONCAT44(uStack_74,local_78));
                  bVar8 = local_80;
                }
              }
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar8 * 0x120));
              if (pcVar3 != (code *)0x0) {
                if (0x18 < local_88) {
                  pfVar12 = (float *)CONCAT44(uStack_9c,local_a0);
                }
                (*pcVar3)(pfVar12);
              }
              if (0x18 < local_88) {
                FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
              }
              FUN_1448173f8(local_a8);
              if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_c0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_c0 + 0x10))();
                }
              }
              if (0.0 < fVar16) {
                puVar11 = (undefined4 *)CONCAT71((int7)((ulonglong)local_a8 >> 8),1);
                lVar14 = CONCAT71((int7)((ulonglong)pfVar9 >> 8),1);
                FUN_14893e064(plVar13,lVar14);
                plVar4 = (longlong *)plVar13[0x39];
                if (plVar4 != (longlong *)0x0) {
                  if (DAT_14cac6e60 == 0) {
                    local_d0 = FUN_144a7958c;
                    local_100 = FUN_14081d0ea;
                    local_108 = FUN_142b47bc4;
                    local_118 = &LAB_1478989f1;
                    local_120 = &LAB_146391124;
                    local_128 = L"Engine";
                    local_130 = 0x10000000000;
                    local_138 = 0x10000005;
                    local_140 = 0x10;
                    local_148 = (undefined4 *)CONCAT44(local_148._4_4_,0x620);
                    local_110 = &local_d0;
                    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,
                                  FUN_146391102);
                  }
                  lVar14 = (longlong)*(int *)(DAT_14cac6e60 + 0x38);
                  if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
                     (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + lVar14 * 8) ==
                      DAT_14cac6e60 + 0x30)) {
                    if ((*(byte *)((longlong)plVar4 + 0x2d3) & 8) == 0) {
                      *(byte *)((longlong)plVar4 + 0x2d3) = *(byte *)((longlong)plVar4 + 0x2d3) | 8;
                      (**(code **)(*plVar4 + 0x958))(plVar4);
                    }
                    FUN_1446f470e(&local_d8,L"BlockAllProjectile",1);
                    (**(code **)(*plVar4 + 0x728))(plVar4,local_d8,1);
                    lVar14 = local_d8;
                  }
                }
                lVar5 = plVar13[0x1c2];
                uVar10 = CONCAT71((int7)((ulonglong)lVar14 >> 8),(char)plVar13[0x228]) &
                         0xfffffffffffffffe;
                *(byte *)(plVar13 + 0x228) = (byte)uVar10 | *(byte *)(lVar5 + 0x478) >> 1 & 1;
                uVar10 = CONCAT71((int7)(uVar10 >> 8),*(undefined1 *)((longlong)plVar13 + 0xed9)) &
                         0xfffffffffffffffe;
                *(byte *)((longlong)plVar13 + 0xed9) =
                     (byte)uVar10 | *(byte *)(lVar5 + 0x478) >> 2 & 1;
                uVar10 = CONCAT71((int7)(uVar10 >> 8),(char)plVar13[0x1db]) & 0xffffffffffffffef;
                bVar8 = (byte)uVar10 | (*(byte *)(lVar5 + 0x27c) & 1) << 4;
                *(byte *)(plVar13 + 0x1db) = bVar8;
                uVar10 = CONCAT71((int7)(uVar10 >> 8),bVar8) & 0xffffffffffffffdf;
                bVar8 = (byte)uVar10 | (*(byte *)(lVar5 + 0x27c) & 2) << 4;
                *(byte *)(plVar13 + 0x1db) = bVar8;
                uVar10 = CONCAT71((int7)(uVar10 >> 8),bVar8) & 0xffffffffffffffbf;
                *(byte *)(plVar13 + 0x1db) = (byte)uVar10 | (*(byte *)(lVar5 + 0x27c) & 4) << 4;
                (**(code **)(plVar13[0x7a] + 0x70))(plVar13 + 0x7a,CONCAT71((int7)(uVar10 >> 8),1));
                local_148 = &local_f8;
                local_e8 = DAT_14c8464f0;
                local_f8 = (undefined4)DAT_14c8464e0;
                uStack_f4 = DAT_14c8464e0._4_4_;
                uStack_f0 = (undefined4)DAT_14c8464e8;
                uStack_ec = DAT_14c8464e8._4_4_;
                (**(code **)(plVar13[0x7a] + 0x80))(plVar13 + 0x7a,pcVar2,0,0);
                if (plVar13[0x1c7] != 0) {
                  lVar14 = plVar13[0x1c2];
                  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
                  lVar14 = (ulonglong)((uint)*(ushort *)(lVar14 + 0x27a) * 0x50) + DAT_14c9a6588;
                  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a6598);
                  local_d0 = (code *)((ulonglong)local_d0 & 0xffffffffffffff00);
                  local_a8[0] = 0;
                  FUN_1456bb102(&local_d0,plVar13);
                  pfVar12 = &local_a0;
                  FUN_1448729ea(lVar14,pfVar12,&local_d0);
                  if (local_80 == 3) {
                    uVar7 = 3;
                    fVar16 = local_a0;
                  }
                  else {
                    pfVar9 = &local_78;
                    FUN_1400b56fe(pfVar9,&local_a0,3);
                    fVar16 = 0.0;
                    if (local_58 != 0) {
                      fVar16 = local_78;
                    }
                    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)local_58 * 0x120));
                    if (pcVar2 != (code *)0x0) {
                      if (0x18 < local_60) {
                        pfVar9 = (float *)CONCAT44(uStack_74,local_78);
                      }
                      (*pcVar2)(pfVar9);
                    }
                    if (0x18 < local_60) {
                      FUN_1400020a8(CONCAT44(uStack_74,local_78));
                    }
                    uVar7 = (uint)local_80;
                  }
                  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
                  if (pcVar2 != (code *)0x0) {
                    if (0x18 < local_88) {
                      pfVar12 = (float *)CONCAT44(uStack_9c,local_a0);
                    }
                    (*pcVar2)(pfVar12);
                  }
                  if (0x18 < local_88) {
                    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
                  }
                  FUN_1448173f8(local_a8);
                  if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
                    LOCK();
                    piVar1 = (int *)((longlong)local_c0 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_c0 + 0x10))();
                    }
                  }
                  *(float *)(plVar13[0x1c7] + 0x17c) = fVar16;
                  dVar6 = (double)fVar16;
                  local_c0 = (longlong *)(DAT_14c8462d0 * dVar6);
                  local_c8 = DAT_14c8462c8 * dVar6;
                  local_d0 = (code *)(dVar6 * DAT_14c8462c0);
                  FUN_140b3d268(plVar13);
                }
                goto LAB_143e12e0f;
              }
            }
            else if (*(code **)(param_1 + 2) == pcVar2) {
              FUN_148946dc6((longlong)plVar13 + 0x203,plVar13,pcVar2);
              goto LAB_143e12f93;
            }
            goto LAB_143e12e0d;
          }
          if ((((char)plVar13[0x2f] != '\x03') && ((*(byte *)(plVar13 + 0xc) & 1) == 0)) &&
             (puVar11 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar11 >> 8),1),
             (*(byte *)((longlong)plVar13 + 0x61) & 1) == 0)) goto LAB_143e12e0f;
          *(undefined1 *)((longlong)plVar13 + 0x1152) = 0;
          (**(code **)(*plVar13 + 0x6c0))(plVar13);
        }
        else {
          FUN_14893dc82(plVar13,pcVar2);
        }
LAB_143e12f93:
        puVar11 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar11 >> 8),1);
        goto LAB_143e12e0f;
      }
    }
  }
LAB_143e12e0d:
  puVar11 = (undefined4 *)0x0;
LAB_143e12e0f:
  if ((local_50 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar11 & 0xffffffff;
}



// FUNCTION 143e1363c FUN_143e1363c body=29 status=ok
// SIG undefined FUN_143e1363c(void)

undefined8 FUN_143e1363c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1365a FUN_143e1365a body=31 status=ok
// SIG undefined FUN_143e1365a(void)

undefined8 FUN_143e1365a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e13768 FUN_143e13768 body=29 status=ok
// SIG undefined FUN_143e13768(void)

undefined8 FUN_143e13768(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e13904 FUN_143e13904 body=93 status=ok
// SIG undefined FUN_143e13904(void)

void FUN_143e13904(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b422740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e13962 FUN_143e13962 body=93 status=ok
// SIG undefined FUN_143e13962(void)

void FUN_143e13962(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b422740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e139c0 FUN_143e139c0 body=126 status=ok
// SIG undefined FUN_143e139c0(void)

void FUN_143e139c0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b422740;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e13a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e13a64 FUN_143e13a64 body=291 status=ok
// SIG undefined FUN_143e13a64(void)

undefined8 FUN_143e13a64(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e13b81;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_143e13b81;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e13b81:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e13b35;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      *(undefined8 *)(lVar3 + 0x810) = 0;
      uVar7 = 1;
      (**(code **)(*(longlong *)(lVar3 + 0x3d0) + 0x70))
                (lVar3 + 0x3d0,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
      goto LAB_143e13b35;
    }
  }
  uVar7 = 0;
LAB_143e13b35:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e13b88 FUN_143e13b88 body=287 status=ok
// SIG undefined FUN_143e13b88(void)

void FUN_143e13b88(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_1[3];
  local_38 = (undefined4)param_1[1];
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_30 = (undefined4)param_1[2];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x14);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    FUN_140b3d268(lVar2,&local_38);
    if ((*(char *)((longlong)param_1 + 0x24) == '\x01') &&
       ((lVar3 = param_1[4], *(char *)(lVar2 + 0x178) == '\x03' ||
        ((*(byte *)(lVar2 + 0x60) & 1) != 0)))) {
      *(int *)(lVar2 + 0x1154) = (int)lVar3;
      *(byte *)(lVar2 + 0x1151) = *(byte *)(lVar2 + 0x1151) | 2;
      if (*(longlong *)(lVar2 + 0xe38) != 0) {
        *(int *)(*(longlong *)(lVar2 + 0xe38) + 0x1a8) = (int)lVar3;
      }
    }
    if ((char)param_1[0x1f] == '\x01') {
      FUN_1418a5960(param_1 + 5,lVar2);
    }
  }
  if (((*(int *)((longlong)param_1 + 0x104) != 0) &&
      (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x104))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      FUN_14655bdcc(*param_1);
    }
  }
  local_48 = 0;
  FUN_14113775c(*param_1,&DAT_14c846480,1,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e13ca8 FUN_143e13ca8 body=419 status=ok
// SIG undefined FUN_143e13ca8(void)

undefined8 * FUN_143e13ca8(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x128,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14b4227b0;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar2;
  *(undefined4 *)(puVar8 + 4) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
  puVar8[1] = uVar6;
  puVar8[2] = uVar7;
  cVar1 = *(char *)(param_1 + 0x2c);
  *(char *)((longlong)puVar8 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(param_1 + 0x28);
  }
  cVar1 = *(char *)(param_1 + 0x100);
  *(char *)(puVar8 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(param_1 + 0x30);
    puVar8[7] = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(param_1 + 0x40);
    puVar8[9] = 0;
    puVar8[0x10] = 0;
    lVar9 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x80);
    }
    FUN_1400709d4(puVar8 + 10,lVar9,*(undefined4 *)(param_1 + 0x88),0);
    *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(param_1 + 0x90);
    puVar8[0x13] = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(param_1 + 0xa0);
    puVar8[0x15] = *(undefined8 *)(param_1 + 0xa8);
    *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(param_1 + 0xb0);
    puVar8[0x17] = 0;
    uVar6 = *(undefined8 *)(param_1 + 200);
    uVar2 = *(undefined4 *)(param_1 + 0xd0);
    uVar3 = *(undefined4 *)(param_1 + 0xd4);
    uVar4 = *(undefined4 *)(param_1 + 0xd8);
    uVar5 = *(undefined4 *)(param_1 + 0xdc);
    puVar8[0x18] = *(undefined8 *)(param_1 + 0xc0);
    puVar8[0x19] = uVar6;
    *(undefined4 *)(puVar8 + 0x1a) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0xd4) = uVar3;
    *(undefined4 *)(puVar8 + 0x1b) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0xdc) = uVar5;
    puVar8[0x1c] = &DAT_14a171d50;
    puVar8[0x1e] = 0;
    puVar8[0x1f] = 0;
    puVar8[0x1d] = *(undefined8 *)(param_1 + 0xe8);
    FUN_1406022fe(puVar8 + 0x1e,param_1 + 0xf0);
    puVar8[0x1c] = &PTR_FUN_14b0394b0;
  }
  puVar8[0x21] = *(undefined8 *)(param_1 + 0x108);
  puVar8[0x22] = *(undefined8 *)(param_1 + 0x110);
  *(undefined4 *)(puVar8 + 0x23) = *(undefined4 *)(param_1 + 0x118);
  puVar8[0x24] = 0;
  return puVar8 + 1;
}



// FUNCTION 143e13e52 FUN_143e13e52 body=29 status=ok
// SIG undefined FUN_143e13e52(void)

void FUN_143e13e52(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143e13e70 FUN_143e13e70 body=165 status=ok
// SIG undefined FUN_143e13e70(void)

undefined8 * FUN_143e13e70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4227b0;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    param_1[0x1c] = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 0x1f) = 0;
    if (*(int *)((longlong)param_1 + 0xfc) != 0) {
      FUN_140115c12(param_1 + 0x1e,0);
    }
    param_1[0x1d] = 0;
    if (param_1[0x1e] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x10] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e13f24 FUN_143e13f24 body=228 status=ok
// SIG undefined FUN_143e13f24(void)

void FUN_143e13f24(longlong *param_1,undefined8 **param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong **pplVar3;
  undefined1 auStack_98 [40];
  undefined8 **local_70;
  undefined8 **local_68;
  longlong **local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  local_60 = param_2 + 3;
  local_68 = param_2;
  local_58 = (longlong **)&local_68;
  FUN_148947386(lVar1,&local_70);
  if ((longlong)*(int *)(param_2 + 0x10) != 0) {
    pplVar3 = (longlong **)param_2[0xf];
    lVar2 = (longlong)*(int *)(param_2 + 0x10) << 6;
    do {
      local_68 = pplVar3;
      local_60 = pplVar3;
      local_58 = (longlong **)&local_68;
      FUN_148947c54(lVar1 + 0x50,&local_70,&local_60);
      local_70 = pplVar3;
      local_68 = param_2;
      local_60 = (longlong **)&local_70;
      local_58 = (longlong **)&local_68;
      FUN_148948522(lVar1 + 0xa0,local_4c,&local_60);
      pplVar3 = pplVar3 + 8;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1400a FUN_143e1400a body=29 status=ok
// SIG undefined FUN_143e1400a(void)

undefined8 FUN_143e1400a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e141a6 FUN_143e141a6 body=93 status=ok
// SIG undefined FUN_143e141a6(void)

void FUN_143e141a6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4228f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e14204 FUN_143e14204 body=93 status=ok
// SIG undefined FUN_143e14204(void)

void FUN_143e14204(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4228f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e14262 FUN_143e14262 body=126 status=ok
// SIG undefined FUN_143e14262(void)

void FUN_143e14262(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4228f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e142d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e142ea FUN_143e142ea body=266 status=ok
// SIG undefined FUN_143e142ea(void)

undefined8 FUN_143e142ea(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143e143ee;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e143ee;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e143ee:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e14395;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1489411fa(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143e14395;
    }
  }
  uVar6 = 0;
LAB_143e14395:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e143fc FUN_143e143fc body=55 status=ok
// SIG undefined FUN_143e143fc(void)

void FUN_143e143fc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148949e02(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 143e14450 FUN_143e14450 body=2541 status=ok
// SIG undefined FUN_143e14450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e14450(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  char **local_88;
  ulonglong *local_80;
  undefined8 local_78;
  undefined **local_68;
  undefined1 *local_60;
  char *local_48;
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = (char **)0x149fca2ba;
  local_80 = (ulonglong *)CONCAT35(local_80._5_3_,0xd);
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb89d68 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_88,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_88,&DAT_14cb89d70);
  if (cVar2 == '\0') {
    _DAT_14cb89d70 = 0;
    uRam000000014cb89d78 = 0;
  }
  if (local_88 != (char **)0x0) {
    FUN_1400020a8();
  }
  local_88 = (char **)&DAT_14a19662d;
  local_80._0_5_ = 4;
  FUN_14001a6c0(&local_88,1);
  DAT_14cb89d80 = 0;
  _DAT_14cb89d88 = 0;
  _DAT_14cb89d90 = 2;
  _DAT_14cb89d94 = 0;
  ram0x00014cb89d9c = 0;
  _DAT_14cb89da4 = 0x200000000;
  _DAT_14cb89dac = 0;
  _DAT_14cb89db8 = 0;
  LOCK();
  DAT_14cb89db0._0_4_ = 0;
  DAT_14cb89db0._4_4_ = 0;
  UNLOCK();
  atexit(FUN_143e0e820);
  _DAT_14cb89dc0 = L"GbxGame.EProjectileFlag";
  _DAT_14cb89dc8 = &DAT_14c872af8;
  _DAT_14cb89dd0 = L"ProjectileFlagNames";
  _DAT_14cb89dd8 = 0;
  uRam000000014cb89de0 = 0;
  _DAT_14cb89de8 = 0;
  uRam000000014cb89df0 = 0;
  _DAT_14cb89df1 = 0;
  uRam000000014cb89df8 = 0;
  uRam000000014cb89df9 = 0;
  atexit((_func_5014 *)&LAB_143e0e833);
  FUN_1446f470e(&DAT_14cb89e08,L"DisableTargetable",1);
  FUN_1446f470e(&DAT_14cb89e10,L"Origin",1);
  FUN_1446f470e(&DAT_14cb89e18,L"Distance",1);
  FUN_1446f470e(&DAT_14cb89e20,L"ImpactActor",1);
  _DAT_14cb8a420 = 0;
  LOCK();
  DAT_14cb8a418 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143e0e84d);
  FUN_1446f470e(&DAT_14cb89e38,L"ProjectileMovement",1);
  local_88 = (char **)0x14a171d3e;
  local_80 = (ulonglong *)CONCAT35(local_80._5_3_,5);
  uVar3 = FUN_14001a6c0(&local_88,1);
  _DAT_14cb89e40 = (ulonglong)uVar3;
  DAT_14cb89e4c = 0;
  FUN_14052b5e0(&DAT_14cb89e48,"lifespan",0);
  _DAT_14cb89e58 = "lifespan";
  DAT_14cb89e64 = 0;
  FUN_14052b5e0(&DAT_14cb89e60,"initialspeed",0);
  _DAT_14cb89e70 = "initialspeed";
  DAT_14cb89e7c = 0;
  FUN_14052b5e0(&DAT_14cb89e78,"maxspeed",0);
  _DAT_14cb89e88 = "maxspeed";
  DAT_14cb89e94 = 0;
  FUN_14052b5e0(&DAT_14cb89e90,"acceleration",0);
  _DAT_14cb89ea0 = "acceleration";
  DAT_14cb89eac = 0;
  FUN_14052b5e0(&DAT_14cb89ea8,"decelerateminspeed",0);
  _DAT_14cb89eb8 = "decelerateminspeed";
  DAT_14cb89ec4 = 0;
  FUN_14052b5e0(&DAT_14cb89ec0,"proximityhomingspeed",0);
  _DAT_14cb89ed0 = "proximityhomingspeed";
  DAT_14cb89edc = 0;
  FUN_14052b5e0(&DAT_14cb89ed8,"proximitydefaultradius",0);
  _DAT_14cb89ee8 = "proximitydefaultradius";
  DAT_14cb89ef4 = 0;
  FUN_14052b5e0(&DAT_14cb89ef0,"proximityfusetimeattachedtoenemy",0);
  _DAT_14cb89f00 = "proximityfusetimeattachedtoenemy";
  DAT_14cb89f0c = 0;
  FUN_14052b5e0(&DAT_14cb89f08,"proximityfusetimeattachedtoworld",0);
  _DAT_14cb89f18 = "proximityfusetimeattachedtoworld";
  DAT_14cb89f24 = 0;
  FUN_14052b5e0(&DAT_14cb89f20,"proximitydelay",0);
  _DAT_14cb89f30 = "proximitydelay";
  DAT_14cb89f3c = 0;
  FUN_14052b5e0(&DAT_14cb89f38,"damage",0);
  _DAT_14cb89f48 = "damage";
  DAT_14cb89f54 = 0;
  FUN_14052b5e0(&DAT_14cb89f50,"damageradius",0);
  _DAT_14cb89f60 = "damageradius";
  DAT_14cb89f6c = 0;
  FUN_14052b5e0(&DAT_14cb89f68,"hitcountneeded",0);
  _DAT_14cb89f78 = "hitcountneeded";
  local_88 = (char **)CONCAT44(local_88._4_4_,1);
  local_98 = 0;
  FUN_14078dbce(&DAT_14cb89f88,L"gbx.Projectile.MaxSpawnInOneFrame",&local_88,
                L"Sets the maximum number of projectiles that can be spawned in the same frame. Default is 1."
               );
  atexit(FUN_143e0f17e);
  local_98 = 0;
  FUN_1412cc41e(&DAT_14cb89fa0,L"FProjectileSpawnManager",0,0);
  _DAT_14cb89fb0 = 0x47efffffe0000000;
  _DAT_14cb89fb8 = 0x47efffffe0000000;
  _DAT_14cb89fc0 = 0x47efffffe0000000;
  _DAT_14cb89fc8 = 0x47efffffe0000000;
  _DAT_14cb89fd0 = 0x47efffffe0000000;
  _DAT_14cb89fd8 = 0x47efffffe0000000;
  _DAT_14cb89fe0 = 0x47efffffe0000000;
  _DAT_14cb89fe8 = 0x47efffffe0000000;
  FUN_1462a3428(&DAT_14cb89ff0,&LAB_143e106a5,"refresharea",&DAT_14b3e7b50);
  atexit((_func_5014 *)&LAB_143e106aa);
  plVar4 = (longlong *)FUN_145d889d0();
  iVar1 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
    FUN_140ca86cc(plVar4,iVar1);
  }
  *(char **)(*plVar4 + (longlong)iVar1 * 8) = "refresharea";
  _DAT_14cb8a028 = 0;
  LOCK();
  DAT_14cb8a020 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143e106de);
  _DAT_14cb8a078 = &LAB_143e10876;
  _DAT_14cb8a080 = 0x44268000;
  DAT_14cb8a084 = 1;
  DAT_14cb8a070 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8a070;
  atexit((_func_5014 *)&LAB_143e1087b);
  _DAT_14cb8a090 = 0;
  uRam000000014cb8a098 = 0;
  _DAT_14cb8a0a0 = 0;
  DAT_14cb8a0a8 = 0;
  uRam000000014cb8a0b0 = 0;
  FUN_1446ddda2(&DAT_14cb8a090,&DAT_149e54500,0);
  atexit((_func_5014 *)&LAB_143e108af);
  _DAT_14cb8a0b8 = 0;
  uRam000000014cb8a0c0 = 0;
  _DAT_14cb8a0c8 = 0;
  DAT_14cb8a0d0 = 0;
  uRam000000014cb8a0d8 = 0;
  FUN_1446ddda2(&DAT_14cb8a0b8,"Value",0);
  atexit((_func_5014 *)&LAB_143e108c0);
  local_48 = "rewards_data_index";
  _DAT_14cb8a0e0 = 0;
  uRam000000014cb8a0e8 = 0;
  _DAT_14cb8a0f0 = 0;
  DAT_14cb8a0f8 = 0;
  uRam000000014cb8a100 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a0e0,&local_88,0);
  atexit((_func_5014 *)&LAB_143e108d1);
  local_48 = "serial_numbers";
  _DAT_14cb8a108 = 0;
  uRam000000014cb8a110 = 0;
  _DAT_14cb8a118 = 0;
  DAT_14cb8a120 = 0;
  uRam000000014cb8a128 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a108,&local_88,0);
  atexit((_func_5014 *)&LAB_143e108e2);
  local_48 = "time_received";
  _DAT_14cb8a130 = 0;
  uRam000000014cb8a138 = 0;
  _DAT_14cb8a140 = 0;
  DAT_14cb8a148 = 0;
  uRam000000014cb8a150 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a130,&local_88,0);
  atexit((_func_5014 *)&LAB_143e108f3);
  local_48 = "game_stage";
  _DAT_14cb8a158 = 0;
  uRam000000014cb8a160 = 0;
  _DAT_14cb8a168 = 0;
  DAT_14cb8a170 = 0;
  uRam000000014cb8a178 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a158,&local_88,0);
  atexit((_func_5014 *)&LAB_143e10904);
  local_48 = "reward_scale";
  _DAT_14cb8a180 = 0;
  uRam000000014cb8a188 = 0;
  _DAT_14cb8a190 = 0;
  DAT_14cb8a198 = 0;
  uRam000000014cb8a1a0 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a180,&local_88,0);
  atexit((_func_5014 *)&LAB_143e10915);
  local_48 = "rewards_def";
  _DAT_14cb8a1a8 = 0;
  uRam000000014cb8a1b0 = 0;
  _DAT_14cb8a1b8 = 0;
  DAT_14cb8a1c0 = 0;
  uRam000000014cb8a1c8 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a1a8,&local_88,0);
  atexit((_func_5014 *)&LAB_143e10926);
  local_48 = "contents";
  _DAT_14cb8a1d0 = 0;
  uRam000000014cb8a1d8 = 0;
  _DAT_14cb8a1e0 = 0;
  DAT_14cb8a1e8 = 0;
  uRam000000014cb8a1f0 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a1d0,&local_88,0);
  atexit((_func_5014 *)&LAB_143e10937);
  local_48 = "source";
  _DAT_14cb8a1f8 = 0;
  uRam000000014cb8a200 = 0;
  _DAT_14cb8a208 = 0;
  DAT_14cb8a210 = 0;
  uRam000000014cb8a218 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a1f8,&local_88,0);
  atexit((_func_5014 *)&LAB_143e10948);
  local_48 = "viewed";
  _DAT_14cb8a220 = 0;
  uRam000000014cb8a228 = 0;
  _DAT_14cb8a230 = 0;
  DAT_14cb8a238 = 0;
  uRam000000014cb8a240 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a220,&local_88,0);
  atexit((_func_5014 *)&LAB_143e10959);
  DAT_14cb8a2a8 = 0;
  _DAT_14cb8a2b0 = 0;
  local_78 = 0;
  local_68 = &PTR_LAB_14a1795c0;
  local_60 = &LAB_143e143f6;
  local_88 = (char **)&DAT_14011fc1e;
  FUN_1460f695e(&local_88);
  atexit((_func_5014 *)&LAB_143e10993);
  _DAT_14cb8a348 = &LAB_143e10998;
  _DAT_14cb8a350 = 0x45036000;
  DAT_14cb8a354 = 1;
  DAT_14cb8a340 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8a340;
  atexit((_func_5014 *)&LAB_143e1099d);
  local_48 = "unique_rewards";
  _DAT_14cb8a360 = 0;
  uRam000000014cb8a368 = 0;
  _DAT_14cb8a370 = 0;
  DAT_14cb8a378 = 0;
  uRam000000014cb8a380 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a360,&local_88,0);
  atexit((_func_5014 *)&LAB_143e1113b);
  local_48 = "packages";
  _DAT_14cb8a388 = 0;
  uRam000000014cb8a390 = 0;
  _DAT_14cb8a398 = 0;
  DAT_14cb8a3a0 = 0;
  uRam000000014cb8a3a8 = 0;
  local_88 = &local_48;
  local_80 = local_40;
  FUN_1487ca8ae(&DAT_14cb8a388,&local_88,0);
  atexit((_func_5014 *)&LAB_143e1114c);
  _DAT_14cb8a3b0 = 0xffffffff;
  _DAT_14cb8a3b4 = 0;
  FUN_1446f470e(&DAT_14cb8a3b8,L"PrimarySection",1);
  if ((local_40[0] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e14eda FUN_143e14eda body=1065 status=ok
// SIG undefined FUN_143e14eda(void)

void FUN_143e14eda(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0 [40];
  float local_b8 [2];
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  char local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined5 uStack_68;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = param_3[1];
  if (lVar6 == 0) {
    uVar5 = FUN_14012344a();
    lVar6 = FUN_14477b664(uVar5);
    param_3[1] = lVar6;
  }
  lVar7 = param_3[2];
  if (lVar7 == 0) {
    if ((lVar6 == 0) || (*param_3 == 0)) goto LAB_143e14f40;
    plVar10 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
      param_3[2] = 0;
      goto LAB_143e14f40;
    }
    uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar7 = FUN_144aff482(uVar5,param_3);
    param_3[2] = lVar7;
    if (lVar7 == 0) goto LAB_143e14f40;
  }
  if (*(int *)(lVar7 + 0x20) == 0) goto LAB_143e14f40;
  FUN_14887ad10(local_e0,param_3,0);
  lVar6 = FUN_14494f566(local_e0);
  plVar10 = *(longlong **)(lVar6 + 0x18);
  if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
  }
  FUN_1447a1fc0(plVar10);
  plVar10 = *(longlong **)(lVar6 + 0x18);
  pcVar2 = *(code **)(*plVar10 + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar9 = plVar10 + 3;
    if (plVar10[5] != 0) {
      plVar9 = (longlong *)(plVar10[5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar9 = plVar10 + 2;
  }
  else {
    plVar9 = (longlong *)(*pcVar2)(plVar10);
  }
  if ((int)plVar9[1] < 2) goto LAB_143e14f40;
  lVar6 = FUN_140317ef6(local_e0);
  if (lVar6 == 0) {
    cVar3 = '\x02';
  }
  else {
    cVar3 = *(char *)(lVar6 + 0x20);
    if (cVar3 == '\0') goto LAB_143e14f40;
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
LAB_143e1528d:
    lVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x18);
    lVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(param_2 + 0x1c) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143e1528d;
      lVar6 = *plVar10;
    }
  }
  uVar5 = FUN_14494f566(local_e0);
  uVar5 = FUN_145784abc(uVar5);
  lVar7 = FUN_14494f566(local_e0);
  uVar8 = FUN_14494f566(local_e0);
  local_a0 = FUN_140206e00(uVar8);
  local_b0 = *(longlong **)(lVar7 + 0x18);
  local_b8[0] = (float)(int)cVar3;
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 8))();
  }
  local_a8 = *(undefined4 *)(lVar7 + 0x20);
  local_8c = '\0';
  local_88 = 0;
  local_80 = 0xffffffffffffffff;
  local_58 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_69 = 0;
  uStack_68 = 0;
  uStack_63 = 0;
  uStack_62 = 0;
  uVar8 = FUN_14494f566(local_e0);
  uStack_63 = FUN_141889c9a(uVar8);
  local_60 = uVar5;
  if (lVar6 == 0) {
    local_58 = 0;
    iVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 0xc);
    local_58 = CONCAT44(local_58._4_4_,uVar1);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(lVar6 + 0x10) = iVar11;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar4 = iVar11;
      }
    }
  }
  local_58 = CONCAT44(iVar4,(undefined4)local_58);
  lVar6 = FUN_14494f566(local_e0);
  local_f8 = 0;
  uStack_f0 = 0;
  uVar5 = FUN_140206ee8(lVar6 + 0x30);
  uStack_70 = (undefined7)uVar5;
  uStack_69 = (undefined1)((ulonglong)uVar5 >> 0x38);
  uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  plVar10 = (longlong *)FUN_1400f6f32(uVar5);
  if ((plVar10 != (longlong *)0x0) &&
     (plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2b0))(plVar10), plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x20))(plVar10,local_b8);
  }
  local_88 = 0;
  local_80 = 0xffffffffffffffff;
  if (local_8c == '\x01') {
    local_8c = '\0';
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
LAB_143e14f40:
  if ((local_50 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e15304 FUN_143e15304 body=288 status=ok
// SIG undefined FUN_143e15304(void)

void FUN_143e15304(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_168 [32];
  ushort *local_148;
  code **local_140;
  undefined1 local_12c [4];
  undefined2 *local_128;
  undefined1 *local_120;
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined2 local_10e;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  ushort local_100;
  undefined2 local_fe;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined1 local_f8 [8];
  ushort local_f0;
  longlong local_90;
  code *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_114 = *(undefined2 *)(lVar1 + 0xbe);
  local_112 = *(undefined2 *)(lVar1 + 0xc0);
  local_110 = *(undefined2 *)(lVar1 + 0xc2);
  local_10e = *(undefined2 *)(lVar2 + 0xfe);
  local_10b = 0;
  local_108 = 0x6ff;
  local_104 = 0;
  local_128 = &local_fe;
  local_120 = local_f8;
  local_fe = local_114;
  local_fc = local_112;
  local_fa = local_110;
  FUN_14655c74e(&local_114,local_f8);
  local_148 = &local_100;
  local_100 = local_f0 | 0x200;
  local_140 = &local_30;
  local_30 = FUN_148953804;
  local_28 = 3;
  FUN_1461f3e84(local_f8,local_12c,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e154c4 FUN_143e154c4 body=137 status=ok
// SIG undefined FUN_143e154c4(void)

void FUN_143e154c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4237e0);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b424b70);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4239ac);
  FUN_140e216ca(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  iVar1 = FUN_1448332aa(param_2,&DAT_14b4237e0);
  if (iVar1 < 3) {
    FUN_14894e7f8(param_1);
  }
  FUN_143e1554e(param_1);
  return;
}



// FUNCTION 143e1554e FUN_143e1554e body=292 status=ok
// SIG undefined FUN_143e1554e(void)

void FUN_143e1554e(longlong param_1)

{
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined2 *local_240;
  undefined2 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined2 local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (*(longlong *)(param_1 + 0x104) != *(longlong *)(param_1 + 0xf0)) {
    *(longlong *)(param_1 + 0x104) = *(longlong *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xf8);
  }
  if (*(longlong *)(param_1 + 0xfc) != 0) {
    local_240 = local_220;
    local_228 = '\0';
    local_230 = &local_20;
    local_238 = local_240;
    FUN_14005eb5c(param_1 + 0xfc,&local_240);
    if (local_230 <= local_238 + 1) {
      FUN_140213274(&local_240,1);
    }
    *local_238 = 0x5f;
    local_238 = local_238 + 1;
    FUN_14005eb5c((undefined8 *)(param_1 + 0x104),&local_240);
    *local_238 = 0;
    FUN_1446f470e(&local_248,local_240,1);
    *(undefined8 *)(param_1 + 0x104) = local_248;
    if (local_228 == '\x01') {
      FUN_1400020a8(local_240);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e15675 FUN_143e15675 body=314 status=ok
// SIG undefined FUN_143e15675(void)

void FUN_143e15675(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  undefined2 *puVar1;
  uint uVar2;
  undefined1 auStack_278 [40];
  undefined8 local_250;
  undefined1 *local_248;
  undefined2 *local_240;
  ulonglong *local_238;
  char local_230;
  undefined1 local_228 [512];
  ulonglong local_28;
  ulonglong uVar3;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (*(int *)(param_2 + 1) - 2U < 0x7fffffff) {
    local_248 = local_228;
    local_230 = '\0';
    local_238 = &local_28;
    _Src = (void *)*param_2;
    uVar2 = *(int *)(param_2 + 1) - 1;
    uVar3 = (ulonglong)uVar2;
    local_240 = (undefined2 *)local_248;
    if (0xff < uVar2) {
      FUN_140213274(&local_248,uVar3);
    }
    puVar1 = local_240;
    memcpy(local_240,_Src,uVar3 * 2);
    local_240 = (undefined2 *)((longlong)puVar1 + uVar3 * 2);
    if (local_238 <= (ulonglong *)((longlong)puVar1 + uVar3 * 2 + 2)) {
      FUN_140213274(&local_248,1);
    }
    *local_240 = 0x5f;
    local_240 = local_240 + 1;
    FUN_14005eb5c(param_1,&local_248);
    FUN_1446f82e2(&local_250,(ulonglong)((longlong)local_240 - (longlong)local_248) >> 1,local_248,1
                 );
    *param_1 = local_250;
    if (local_230 == '\x01') {
      FUN_1400020a8(local_248);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e157b0 FUN_143e157b0 body=1055 status=ok
// SIG undefined FUN_143e157b0(void)

longlong * FUN_143e157b0(longlong *param_1,longlong param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined5 uStack_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  undefined4 local_108;
  longlong local_100;
  int local_f8;
  int local_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined1 local_da;
  undefined1 local_d9;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_2 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    local_ec = 0x3f80000000000000;
    uStack_e4 = 0;
    fVar13 = 0.0;
    if (param_1 != (longlong *)0x0) {
      uVar5 = FUN_140437988();
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar5);
      if (plVar6 != (longlong *)0x0) {
        uVar5 = FUN_140437988();
        plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
        if (plVar7 != (longlong *)0x0 && plVar6 != plVar7) {
          uVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
          FUN_140c823b2(uVar5,&local_d8,param_2 + 0x104);
          lVar8 = *(longlong *)(param_2 + 0x70);
          if (lVar8 == 0) {
            fVar13 = 0.0;
          }
          else {
            if ((longlong)*(int *)(param_2 + 0x150) != 0) {
              lVar11 = 0;
              lVar12 = 0;
              do {
                if (*(longlong *)(*(longlong *)(param_2 + 0x148) + lVar11) == local_d8) {
                  lVar12 = *(longlong *)(param_2 + 0x148) - lVar12;
                  if (lVar12 != 0) {
                    piVar9 = (int *)(lVar12 + 0xc);
                    goto LAB_143e158d2;
                  }
                  break;
                }
                lVar12 = lVar12 + -0x10;
                lVar11 = lVar11 + 0x10;
              } while (-lVar12 != (longlong)*(int *)(param_2 + 0x150) * 0x10);
            }
            fVar13 = 0.0;
            if (local_d8 == DAT_14c9a6400) {
              piVar9 = (int *)(lVar8 + 0x114);
LAB_143e158d2:
              fVar13 = (float)*piVar9;
            }
            fVar13 = fVar13 / ((float)(int)*(undefined8 *)(lVar8 + 0x118) /
                              (float)(int)((ulonglong)*(undefined8 *)(lVar8 + 0x118) >> 0x20));
          }
          uStack_e4 = CONCAT44(uStack_e4._4_4_,fVar13);
        }
      }
    }
    local_100 = *(longlong *)(param_2 + 0x18);
    FUN_1400021e4(&local_100);
    iVar1 = (int)local_d0;
    iVar4 = ((int)local_d0 == 0) + 6;
    local_100 = local_d8;
    local_d8 = 0;
    local_f8 = (int)local_d0;
    iVar3 = local_d0._4_4_;
    local_f4 = local_d0._4_4_;
    local_d0 = (longlong *)0x0;
    iVar10 = iVar4 + iVar1;
    if (iVar10 < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (iVar3 < iVar10) {
      FUN_1446f8c06(&local_100);
    }
    FUN_1400020e8(&local_100,L"Player",6);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    iVar1 = local_f8 + -1;
    if (local_f8 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_d8,iVar1,local_100,1);
    lVar8 = local_d8;
    if (local_d8 == 0) {
      FUN_14058b40c(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                   );
    }
    local_d8 = FUN_141419c76();
    local_88 = (longlong *)0x0;
    local_58 = 0;
    local_b8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_c8 = lVar8;
    uStack_c0 = 0x900040;
    local_b0 = 0;
    uStack_a8 = 0;
    local_d0 = param_1;
    plVar6 = (longlong *)FUN_1402710dd(&local_d8);
    if (lStack_98 != 0) {
      plVar7 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar7 = local_78;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      plVar6[0x114] = *(longlong *)(param_2 + 0x104);
      (**(code **)(*plVar6 + 0x310))(plVar6,param_1);
      FUN_140a224c4(plVar6,param_2,&local_ec);
      lVar8 = plVar6[0x61];
      fVar2 = ((float)((lVar8 >> 0x20) * (longlong)(int)*(undefined8 *)((longlong)plVar6 + 0x31c)) +
              (float)(int)((ulonglong)lVar8 >> 0x20) *
              (float)((ulonglong)*(undefined8 *)((longlong)plVar6 + 0x31c) >> 0x20)) /
              (float)(int)lVar8;
      if ((fVar13 != fVar2) || (NAN(fVar13) || NAN(fVar2))) {
        local_140 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        uStack_113 = 0;
        uStack_110 = 0;
        local_108 = 0x1000101;
        local_138 = fVar13;
        FUN_1405244c0(plVar6);
      }
      else if (plVar6[0x5d] != 0) {
        lVar8 = FUN_1400d1226(plVar6[0x5d],&DAT_14cb8a42c);
        if (lVar8 != 0) {
          local_da = 0;
          local_d9 = (*(byte *)(lVar8 + 99) & 2) == 0;
          FUN_1432daeea(plVar6 + 0x61,&local_d8);
          (**(code **)(*plVar6 + 0x2c0))(plVar6,&local_d8,0,&local_da);
        }
      }
    }
    if (local_100 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e15bd6 FUN_143e15bd6 body=59 status=ok
// SIG undefined FUN_143e15bd6(void)

void FUN_143e15bd6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb8a520;
  if (DAT_14cb8a520 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb8a520 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e15c06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143e15c1e FUN_143e15c1e body=67 status=ok
// SIG undefined FUN_143e15c1e(void)

void FUN_143e15c1e(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b42382c);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4239ac);
  FUN_140e216ca(param_1,param_2);
  return;
}



// FUNCTION 143e15c62 FUN_143e15c62 body=48 status=ok
// SIG undefined FUN_143e15c62(void)

void FUN_143e15c62(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4239ac);
  FUN_140e216ca(param_1,param_2);
  return;
}



// FUNCTION 143e15c9e FUN_143e15c9e body=2280 status=ok
// SIG undefined FUN_143e15c9e(void)

void FUN_143e15c9e(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  char cVar11;
  undefined8 unaff_RBX;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  uint extraout_XMM0_Dd;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auStack_1a8 [36];
  uint local_184;
  ulonglong local_180;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  uint local_158;
  float local_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined5 uStack_130;
  undefined3 uStack_12b;
  undefined5 uStack_128;
  undefined4 local_120;
  int local_118;
  float local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined5 uStack_f0;
  undefined3 uStack_eb;
  undefined5 uStack_e8;
  undefined4 local_e0;
  uint local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined3 uStack_ab;
  undefined5 uStack_a8;
  undefined1 local_a0;
  undefined2 local_9f;
  undefined1 local_9d;
  undefined8 local_98;
  ulonglong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(char *)(param_1 + -0x2d8) == '\x03') {
    fVar18 = *(float *)(param_2 + 0x84);
    fVar17 = *(float *)(param_2 + 0x84);
    local_88 = *(ulonglong *)(param_2 + 0x68);
    FUN_1401533ba(&local_98,&local_88,1);
    FUN_140bfca4e(param_1 + 0x88,&local_98,param_2 + 0x78,
                  CONCAT71((int7)((ulonglong)unaff_RBX >> 8),fVar17 <= 0.0 && fVar18 != 0.0) &
                  0xffffffff);
  }
  uVar8 = DAT_14cb8a5ac;
  if ((DAT_14cb8a5ac == DAT_14c948034) && (uVar8 = DAT_14c948034, DAT_14cb8a5a8 != DAT_14c948030)) {
    FUN_14011791e(&local_98,DAT_14cb8a5a8,DAT_14cb8a5ac >> 0x20);
    DAT_14cb8a5ac = local_98;
    uVar8 = local_98;
  }
  if (*(ulonglong *)(param_2 + 0x68) != uVar8) goto LAB_143e162cc;
  lVar5 = FUN_1447210f0(param_1 + -0x450);
  plVar6 = (longlong *)FUN_141416276(param_1 + -0x450);
  if ((((plVar6 == (longlong *)0x0) || (*(longlong **)(param_1 + -0x78) == (longlong *)0x0)) ||
      (lVar7 = (**(code **)(**(longlong **)(param_1 + -0x78) + 0x2e8))(), lVar5 == 0)) ||
     (lVar7 == 0)) goto LAB_143e162cc;
  local_160 = lVar5;
  local_178 = (**(code **)(**(longlong **)(param_1 + -0x78) + 0x2e8))();
  cVar11 = (char)plVar6[0x52];
  local_168 = plVar6[0x61];
  uVar12 = *(uint *)(plVar6 + 0x54);
  (**(code **)(*plVar6 + 0x2c8))(plVar6,&local_98);
  local_184 = (uint)local_98;
  fVar18 = local_98._4_4_;
  lVar5 = FUN_14140f0d8(param_2 + 0x18);
  uVar8 = 0;
  if ((-1 < (int)param_3) && (lVar5 != 0)) {
    if ((int)param_3 < *(int *)(lVar5 + 0x10)) {
      uVar8 = *(ulonglong *)(*(longlong *)(lVar5 + 8) + (ulonglong)param_3 * 8);
    }
    else {
      uVar8 = 0;
    }
  }
  auVar24 = ZEXT816(0);
  uVar14 = (ulonglong)uVar12;
  if (uVar8 != DAT_14cb8a5c0) {
    auVar24 = ZEXT416((uint)fVar18);
    uVar14 = (ulonglong)local_184;
    if (uVar8 != DAT_14cb8a538) {
      iVar4 = *(int *)(local_178 + 0x158);
      auVar24 = ZEXT816(0);
      uVar14 = (ulonglong)uVar12;
      if ((longlong)iVar4 != 0) {
        local_180 = CONCAT71(local_180._1_7_,cVar11);
        lVar5 = *(longlong *)(local_178 + 0x150);
        lVar7 = 0;
        local_170 = (ulonglong)uVar12;
        do {
          puVar10 = &DAT_149dfb77a;
          if (*(int *)(lVar5 + 0x10 + lVar7) != 0) {
            puVar10 = *(undefined2 **)(lVar5 + 8 + lVar7);
          }
          FUN_1446f470e(&local_98,puVar10,1);
          uVar12 = (uint)local_170;
          cVar11 = (char)local_180;
          if (local_98 == uVar8) {
            lVar1 = *(longlong *)(local_178 + 0x118);
            lVar2 = *(longlong *)(local_178 + 0x120);
            uVar13 = *(uint *)(lVar5 + lVar7);
            uVar14 = (ulonglong)uVar13;
            if (lVar1 == lVar2) {
              auVar24 = ZEXT816(0);
            }
            else {
              local_98 = (lVar1 >> 0x20) * (longlong)(int)lVar2;
              local_88 = (longlong)(int)lVar1 * (lVar2 >> 0x20);
              lVar5 = (longlong)(local_98 * (longlong)(int)uVar13) / (longlong)local_88;
              dVar19 = (double)((ulonglong)(double)(longlong)local_98 & 0x8000000000000000) /
                       (double)(longlong)local_88 +
                       (((double)(longlong)local_98 * (double)(int)uVar13) /
                        (double)(longlong)local_88 - (double)lVar5);
              auVar23._8_8_ = 0;
              auVar23._0_8_ = dVar19;
              auVar24 = roundpd(auVar23,auVar23,1);
              dVar19 = dVar19 - auVar24._0_8_;
              fVar20 = (float)dVar19;
              uVar8 = (longlong)auVar24._0_8_ + lVar5;
              fVar17 = fVar20;
              if (0.99999994 <= fVar20) {
                fVar17 = 0.99999994;
              }
              auVar28._0_4_ = ~-(uint)(0.0 < fVar20) & (uint)fVar20;
              auVar28._4_4_ = (int)((ulonglong)dVar19 >> 0x20);
              auVar28._8_4_ = 0;
              auVar28._12_4_ = extraout_XMM0_Dd & 0x80000000;
              auVar28 = auVar28 | ZEXT416((uint)fVar17 & -(uint)(0.0 < fVar20));
              if (0x7ffffffe < (longlong)uVar8) {
                uVar8 = 0x7fffffff;
              }
              uVar14 = 0xffffffff80000000;
              if (-0x80000000 < (longlong)uVar8) {
                uVar14 = uVar8;
              }
              auVar24._4_12_ = auVar28._4_12_;
              fVar17 = auVar28._0_4_ + 0.5 + -0.5;
              if (0.99999994 <= fVar17) {
                fVar17 = 0.99999994;
              }
              auVar24._0_4_ = fVar17;
              if (fVar17 <= 0.0) {
                auVar3._12_4_ = 0;
                auVar3._0_12_ = auVar24._4_12_;
                auVar24 = auVar3 << 0x20;
              }
            }
            goto LAB_143e16022;
          }
          lVar7 = lVar7 + 0x20;
        } while ((longlong)iVar4 * 0x20 != lVar7);
        auVar24 = ZEXT816(0);
        uVar14 = local_170 & 0xffffffff;
      }
    }
  }
LAB_143e16022:
  fVar17 = 0.0;
  if (((*(ulonglong *)(param_2 + 0x78) != DAT_14cb8a5c0) &&
      (uVar12 = local_184, fVar17 = fVar18, *(ulonglong *)(param_2 + 0x78) != DAT_14cb8a538)) &&
     (iVar4 = *(int *)(local_178 + 0x158), (longlong)iVar4 != 0)) {
    lVar5 = *(longlong *)(local_178 + 0x150);
    lVar7 = 0;
    local_180 = uVar14;
    do {
      puVar10 = &DAT_149dfb77a;
      if (*(int *)(lVar5 + 0x10 + lVar7) != 0) {
        puVar10 = *(undefined2 **)(lVar5 + 8 + lVar7);
      }
      FUN_1446f470e(&local_98,puVar10,1);
      uVar14 = local_180;
      if (local_98 == *(ulonglong *)(param_2 + 0x78)) {
        lVar1 = *(longlong *)(local_178 + 0x118);
        lVar2 = *(longlong *)(local_178 + 0x120);
        uVar12 = *(uint *)(lVar5 + lVar7);
        fVar17 = 0.0;
        if (lVar1 != lVar2) {
          local_98 = (lVar1 >> 0x20) * (longlong)(int)lVar2;
          local_88 = (longlong)(int)lVar1 * (lVar2 >> 0x20);
          lVar5 = (longlong)(local_98 * (longlong)(int)uVar12) / (longlong)local_88;
          dVar19 = (double)((ulonglong)(double)(longlong)local_98 & 0x8000000000000000) /
                   (double)(longlong)local_88 +
                   (((double)(longlong)local_98 * (double)(int)uVar12) / (double)(longlong)local_88
                   - (double)lVar5);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = dVar19;
          auVar23 = roundpd(auVar22,auVar22,1);
          fVar17 = (float)(dVar19 - auVar23._0_8_);
          lVar5 = (longlong)auVar23._0_8_ + lVar5;
          fVar18 = fVar17;
          if (0.99999994 <= fVar17) {
            fVar18 = 0.99999994;
          }
          if (0x7ffffffe < lVar5) {
            lVar5 = 0x7fffffff;
          }
          lVar7 = -0x80000000;
          if (-0x80000000 < lVar5) {
            lVar7 = lVar5;
          }
          fVar17 = (float)(~-(uint)(0.0 < fVar17) & (uint)fVar17 |
                          (uint)fVar18 & -(uint)(0.0 < fVar17)) + 0.5 + -0.5;
          if (0.99999994 <= fVar17) {
            fVar17 = 0.99999994;
          }
          uVar12 = (uint)lVar7;
          if (fVar17 <= 0.0) {
            fVar17 = 0.0;
          }
        }
        break;
      }
      lVar7 = lVar7 + 0x20;
      uVar12 = local_184;
    } while ((longlong)iVar4 * 0x20 != lVar7);
  }
  uVar13 = (uint)uVar14;
  fVar18 = auVar24._0_4_;
  if (uVar13 == uVar12) {
    if ((fVar18 != fVar17) || (NAN(fVar18) || NAN(fVar17))) goto LAB_143e160d5;
  }
  else {
LAB_143e160d5:
    if (*(longlong **)(local_160 + 0x178) == (longlong *)0x0) {
      dVar19 = *(double *)(local_160 + 0x6d0);
    }
    else {
      dVar19 = (double)(**(code **)(**(longlong **)(local_160 + 0x178) + 0x640))();
    }
    iVar4 = uVar13 - uVar12;
    bVar15 = iVar4 != 0;
    uVar16 = -(uint)(*(float *)(param_2 + 0x84) < 0.0);
    fVar20 = (float)(uVar16 & 0x7f7fffff |
                    ~uVar16 & (uint)((float)dVar19 - *(float *)(param_2 + 0x84)));
    fVar20 = (float)(-(uint)(0.5 <= fVar20) & (uint)fVar20);
    auVar29._4_12_ = auVar24._4_12_;
    if ((fVar18 <= fVar17 || bVar15) && (!bVar15 || (int)uVar13 < (int)uVar12)) {
      fVar21 = fVar17 - fVar18;
      auVar24 = roundps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21),1);
      iVar9 = uVar12 - uVar13;
      fVar30 = auVar24._0_4_;
      iVar4 = (int)fVar30;
    }
    else {
      fVar21 = fVar18 - fVar17;
      auVar24 = roundps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21),1);
      fVar30 = auVar24._0_4_;
      iVar9 = (int)fVar30;
    }
    iVar4 = iVar4 + iVar9;
    fVar21 = (fVar21 - fVar30) + 0.5 + -0.5;
    if (0.99999994 <= fVar21) {
      fVar21 = 0.99999994;
    }
    if (fVar21 <= 0.0) {
      fVar21 = 0.0;
    }
    if ((fVar20 != 3.4028235e+38) || (fVar30 = fVar21, iVar9 = iVar4, NAN(fVar20))) {
      dVar27 = ((double)(int)local_168 * (double)fVar20) /
               (double)(int)((ulonglong)local_168 >> 0x20);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = dVar27;
      auVar24 = roundpd(auVar25,auVar25,1);
      dVar19 = auVar24._0_8_;
      dVar27 = dVar27 - dVar19;
      if (2147483647.0 <= dVar19) {
        dVar19 = 2147483647.0;
      }
      if (dVar19 <= -2147483648.0) {
        dVar19 = -2147483648.0;
      }
      iVar9 = (int)dVar27;
      fVar26 = (float)dVar27 - (float)iVar9;
      iVar9 = (int)dVar19 + iVar9;
      fVar30 = fVar26;
      if (0.99999994 <= fVar26) {
        fVar30 = 0.99999994;
      }
      fVar30 = (float)(~-(uint)(0.0 < fVar26) & (uint)fVar26 | (uint)fVar30 & -(uint)(0.0 < fVar26))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar30) {
        fVar30 = 0.99999994;
      }
      if (fVar30 <= 0.0) {
        fVar30 = 0.0;
      }
    }
    if ((iVar9 <= iVar4) && ((iVar4 != iVar9 || (fVar30 < fVar21)))) {
      if (0.0 < fVar20) {
        if ((fVar18 <= fVar17 || bVar15) && (!bVar15 || (int)uVar13 < (int)uVar12)) {
          auVar29._0_4_ = fVar18 + fVar30;
          local_118 = ((int)ROUND(auVar29._0_4_ + auVar29._0_4_ + -0.5) >> 1) + iVar9 + uVar13;
          auVar24 = roundss(ZEXT416(0),auVar29,9);
          fVar18 = auVar24._0_4_;
        }
        else {
          auVar29._0_4_ = fVar18 - fVar30;
          auVar24 = roundps(ZEXT416((uint)auVar29._0_4_),ZEXT416((uint)auVar29._0_4_),1);
          fVar18 = auVar24._0_4_;
          local_118 = (int)fVar18 + (uVar13 - iVar9);
        }
        local_114 = (auVar29._0_4_ - fVar18) + 0.5 + -0.5;
        if (0.99999994 <= local_114) {
          local_114 = 0.99999994;
        }
        if (local_114 <= 0.0) {
          local_114 = 0.0;
        }
        local_110 = 0;
        local_e0 = 0x1000000;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        uStack_eb = 0;
        uStack_e8 = 0;
        FUN_1405244c0(plVar6);
      }
      local_150 = 0;
      local_120 = 0x1000000;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      uStack_12b = 0;
      uStack_128 = 0;
      local_158 = uVar12;
      local_154 = fVar17;
      FUN_146341752(plVar6,&local_158,1);
      goto LAB_143e162cc;
    }
    FUN_14085fdc0(plVar6);
    local_d0 = 0;
    local_a0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_ab = 0;
    uStack_a8 = 0;
    local_9f = 1;
    local_9d = 1;
    local_d8 = uVar12;
    local_d4 = fVar17;
    FUN_1405244c0(plVar6);
  }
  if (cVar11 != '\x05') {
    *(undefined1 *)(plVar6 + 0x52) = 1;
    FUN_140b8aeaa(plVar6);
  }
LAB_143e162cc:
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e16594 FUN_143e16594 body=427 status=ok
// SIG undefined FUN_143e16594(void)

void FUN_143e16594(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  size_t sVar6;
  wchar_t *_Str;
  longlong lVar7;
  wchar_t **ppwVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar7 = 0;
    do {
      iVar4 = *(int *)(lVar3 + 0x18 + lVar7);
      if ((((iVar4 != 0) &&
           (puVar5 = (undefined8 *)
                     ((longlong)(iVar4 + -1) * 0x20 + *(longlong *)(lVar3 + 0x10 + lVar7)),
           puVar5 != (undefined8 *)0x0)) && (*(char *)((longlong)puVar5 + 0x1e) != -1)) &&
         (*(char *)((longlong)puVar5 + 0x1e) == DAT_14c99e131)) {
        pbVar1 = (byte *)((longlong)puVar5 + 0x1f);
        if ((*pbVar1 & 2) == 0) {
          puVar5 = (undefined8 *)*puVar5;
        }
        ppwVar8 = (wchar_t **)
                  ((ulonglong)((uint)(1L << (*pbVar1 >> 2)) & 0xfffffffe) + (longlong)puVar5);
        FUN_1400b22c2(&local_58,&DAT_149dfc0cb);
        _Str = local_58;
        if (local_50 == 0) {
          _Str = L"";
        }
        if (_Str == (wchar_t *)0x0) {
          bVar9 = false;
        }
        else {
          sVar6 = wcslen(_Str);
          local_60 = 0xffffffff;
          local_68 = 0;
          iVar4 = FUN_1447ee042(ppwVar8,_Str,sVar6 & 0xffffffff,1);
          bVar9 = iVar4 != -1;
        }
        if (local_58 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (bVar9) {
          local_68 = 1;
          FUN_140807d8e(ppwVar8,&local_58,&DAT_149e001d8,&DAT_149dfb77a);
          if (ppwVar8 == &local_58) {
            if (local_58 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*ppwVar8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            *ppwVar8 = local_58;
            local_58 = (wchar_t *)0x0;
            *(int *)(ppwVar8 + 1) = local_50;
            *(undefined4 *)((longlong)ppwVar8 + 0xc) = local_4c;
          }
        }
      }
      lVar7 = lVar7 + 0x30;
    } while ((longlong)iVar2 * 0x30 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e16740 FUN_143e16740 body=189 status=ok
// SIG undefined FUN_143e16740(void)

undefined2 *
FUN_143e16740(longlong param_1,undefined2 *param_2,longlong param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_78 [40];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    (**(code **)(*(longlong *)(param_3 + 0x448) + 0x50))(param_3 + 0x448,local_78);
    local_88 = param_6;
    local_90 = param_5;
    local_98 = param_4;
    FUN_143e167fe(param_1,param_2,local_78,param_3);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    *param_2 = 0xffff;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e167fe FUN_143e167fe body=2415 status=ok
// SIG undefined FUN_143e167fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 *
FUN_143e167fe(longlong param_1,undefined2 *param_2,undefined8 *param_3,longlong param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined7 uVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined2 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  longlong *local_168;
  int local_160;
  undefined4 local_15c;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  undefined1 local_140 [4];
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  code *local_120;
  int local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar6 = FUN_1447210f0();
  if ((lVar6 == 0) || (*(char *)(param_1 + 0x178) != '\x03')) {
    *param_2 = 0xffff;
    goto LAB_143e16a6b;
  }
  uVar7 = FUN_1447210f0(param_1);
  plVar8 = (longlong *)FUN_1406f625c(uVar7);
  local_e0 = 0;
  local_d8 = 0;
  local_e8 = &PTR_FUN_14b19cd90;
  local_d0 = DAT_14c8464e0;
  uStack_c8 = DAT_14c8464e8;
  local_c0 = DAT_14c8464f0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = '\0';
  local_60 = 1;
  local_58 = 0;
  uStack_50 = 0;
  if (DAT_14cb84f20 == 0) {
    if (param_4 != 0) {
      uVar9 = 0;
      goto LAB_143e1697c;
    }
LAB_143e16967:
    *param_2 = 0xffff;
  }
  else {
    lVar14 = DAT_14cb84f20;
    cVar4 = FUN_1411ad2c6(DAT_14cb84f20,param_3,plVar8,&local_e8);
    uVar10 = (undefined7)((ulonglong)lVar14 >> 8);
    if (param_4 == 0 && cVar4 == '\0') goto LAB_143e16967;
    if (cVar4 == '\0') {
      uVar9 = 0;
      if (param_4 != 0) {
LAB_143e1697c:
        if ((*(int *)(param_4 + 0x4fc) != 0) && (*(char *)(param_4 + 0x4d0) != '\0'))
        goto LAB_143e16996;
      }
LAB_143e16a9c:
      local_15c = uVar9;
      if (*(longlong *)(param_1 + 0x668) == 0) {
        FUN_14655cc84(&local_120,param_1);
        *(code **)(param_1 + 0x668) = local_120;
      }
      iVar5 = *(int *)(param_1 + 0x520);
      *(uint *)(param_1 + 0x520) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x524) < iVar5 + 1U) {
        FUN_1464eba60((longlong *)(param_1 + 0x518),iVar5);
      }
      lVar14 = *(longlong *)(param_1 + 0x518);
      plVar8 = (longlong *)((longlong)iVar5 * 0x90);
      local_148 = lVar14 + (longlong)plVar8;
      *(undefined8 *)(lVar14 + (longlong)plVar8) = 0xffffffffffffffff;
      *(undefined4 *)((undefined8 *)(lVar14 + (longlong)plVar8) + 1) = 0xffffffff;
      FUN_14655cd74();
      local_158 = plVar8;
      local_150 = lVar14;
      FUN_14014e996(param_3,(longlong)plVar8 + lVar14 + 0x10,1,0);
      *(undefined2 *)((longlong)plVar8 + lVar14 + 0x38) = 0;
      *(undefined1 *)((longlong)plVar8 + lVar14 + 0x3a) = 0;
      *(undefined8 *)((longlong)plVar8 + lVar14 + 0x40) = 0;
      *(undefined1 *)((longlong)plVar8 + lVar14 + 0x48) = 0;
      *(undefined8 *)((longlong)plVar8 + lVar14 + 0x4c) = 0;
      *(undefined1 *)((longlong)plVar8 + lVar14 + 0x55) = 0;
      *(undefined8 *)((longlong)plVar8 + lVar14 + 0x58) = 0;
      *(undefined8 *)((longlong)plVar8 + lVar14 + 0x60) = 0;
      *(undefined8 *)((longlong)plVar8 + lVar14 + 0x68) = 0;
      *(undefined8 *)((longlong)plVar8 + lVar14 + 0x70) = 0;
      *(undefined8 *)((longlong)plVar8 + lVar14 + 0x78) = 0;
      *(undefined8 *)((longlong)plVar8 + lVar14 + 0x80) = 0;
      *(undefined4 *)((longlong)plVar8 + lVar14 + 0x88) = 1;
      if (0 < *(int *)(lVar6 + 0x238)) {
        plVar8 = (longlong *)((longlong)local_158 + local_150 + 0x68);
        lVar14 = 0;
        do {
          iVar5 = *(int *)(*(longlong *)(lVar6 + 0x230) + 4 + lVar14 * 8);
          if (((iVar5 != 0) &&
              (uVar1 = *(uint *)(*(longlong *)(lVar6 + 0x230) + lVar14 * 8), -1 < (int)uVar1)) &&
             (((int)uVar1 < DAT_14c9647dc &&
              ((((plVar11 = (longlong *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar5)) &&
                ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) && (lVar13 = *plVar11, lVar13 != 0))))
             )) {
            if (DAT_14cb61cd0 == 0) {
              local_120 = FUN_141030f22;
              local_170 = FUN_14081d0ea;
              local_178 = &LAB_1463b31ae;
              local_180 = &local_120;
              local_188 = &LAB_1486dca4f;
              local_190 = &LAB_1464f50a6;
              local_198 = &DAT_149e063b2;
              local_1a0 = 0;
              local_1a8 = 0x10000004;
              local_1b0 = 8;
              local_1b8 = 0xd70;
              local_168 = plVar8;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
              plVar8 = local_168;
            }
            if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
              iVar5 = *(int *)(local_148 + 0x70);
              lVar15 = (longlong)iVar5;
              *(uint *)(local_148 + 0x70) = iVar5 + 1U;
              if (*(uint *)(local_148 + 0x74) < iVar5 + 1U) {
                local_168 = plVar8;
                FUN_14655d502(plVar8,iVar5);
                plVar8 = local_168;
              }
              lVar2 = *plVar8;
              *(undefined8 *)(lVar2 + lVar15 * 0xc) = 0;
              uVar1 = *(uint *)(lVar13 + 0xc);
              *(uint *)(lVar2 + lVar15 * 0xc) = uVar1;
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
              }
              else {
                lVar13 = 0;
              }
              iVar5 = *(int *)(lVar13 + 0x10);
              if (*(int *)(lVar13 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                iVar12 = DAT_14c964868 + 1;
                bVar16 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar16) {
                  local_168 = plVar8;
                  local_160 = iVar12;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar12);
                  plVar8 = local_168;
                  iVar12 = local_160;
                }
                LOCK();
                iVar5 = *(int *)(lVar13 + 0x10);
                bVar16 = iVar5 == 0;
                if (bVar16) {
                  *(int *)(lVar13 + 0x10) = iVar12;
                  iVar5 = 0;
                }
                UNLOCK();
                if (bVar16) {
                  iVar5 = iVar12;
                }
              }
              lVar2 = lVar2 + lVar15 * 0xc;
              *(int *)(lVar2 + 4) = iVar5;
              *(undefined1 *)(lVar2 + 8) = 0;
            }
          }
          lVar14 = lVar14 + 1;
        } while ((int)lVar14 < *(int *)(lVar6 + 0x238));
      }
      plVar8 = *(longlong **)(lVar6 + 0x1f0);
      if (plVar8 != (longlong *)0x0) {
        if (DAT_14cb5e538 == 0) {
          local_180 = &local_120;
          local_120 = (code *)&LAB_1417c5d06;
          local_170 = FUN_14081d0ea;
          local_178 = &LAB_1417ad04a;
          local_188 = &LAB_1486a7af7;
          local_190 = &LAB_1464e1631;
          local_198 = &DAT_149e063b2;
          local_1a0 = 0;
          local_1a8 = 0x1000000c;
          local_1b0 = 8;
          local_1b8 = 0x420;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
          plVar8 = *(longlong **)(lVar6 + 0x1f0);
          if (plVar8 == (longlong *)0x0) goto LAB_143e16e72;
        }
        if (((DAT_14cb5e538 != 0) && (lVar6 = plVar8[2], lVar6 != 0)) &&
           ((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar6 + 0x38) &&
            (*(longlong *)
              (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
             DAT_14cb5e538 + 0x30)))) {
          uVar7 = FUN_145a82f32();
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
          if (plVar8 != (longlong *)0x0) {
            uVar7 = FUN_145a82f32();
            plVar11 = (longlong *)FUN_144718840(plVar8,uVar7);
            if (plVar11 != (longlong *)0x0 && plVar8 != plVar11) {
              (**(code **)(*plVar11 + 0x10))(plVar11,&local_120);
              pcVar3 = local_120;
              if ((longlong)local_118 != 0) {
                plVar8 = (longlong *)((longlong)local_158 + local_150 + 0x78);
                lVar6 = (longlong)local_118 << 2;
                lVar14 = 0;
                local_158 = plVar8;
                local_150 = lVar6;
                do {
                  if (-1 < *(short *)(pcVar3 + lVar14)) {
                    uVar9 = *(undefined4 *)(pcVar3 + lVar14);
                    iVar5 = *(int *)(local_148 + 0x80);
                    lVar13 = (longlong)iVar5;
                    *(uint *)(local_148 + 0x80) = iVar5 + 1U;
                    if (*(uint *)(local_148 + 0x84) < iVar5 + 1U) {
                      FUN_14655d618(plVar8,iVar5);
                      plVar8 = local_158;
                      lVar6 = local_150;
                    }
                    lVar15 = *plVar8;
                    *(undefined4 *)(lVar15 + lVar13 * 0x18) = uVar9;
                    *(undefined8 *)(lVar15 + 8 + lVar13 * 0x18) = 0;
                    *(undefined1 *)(lVar15 + 0x10 + lVar13 * 0x18) = 0;
                  }
                  lVar14 = lVar14 + 4;
                } while (lVar6 != lVar14);
              }
              if (local_120 != (code *)0x0) {
                FUN_1400020a8(local_120);
              }
            }
          }
        }
      }
LAB_143e16e72:
      lVar6 = local_148;
      *(undefined1 *)(local_148 + 0x38) = param_5;
      *(undefined1 *)(local_148 + 0x39) = param_6;
      *(undefined1 *)(local_148 + 0x3a) = param_7;
      cVar4 = (char)local_15c;
      if (param_4 == 0) {
        *(undefined4 *)(local_148 + 0x4c) = 0;
        iVar5 = 0;
      }
      else {
        uVar1 = *(uint *)(param_4 + 0xc);
        *(uint *)(local_148 + 0x4c) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar5 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar5 = *(int *)(lVar14 + 0x10);
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(lVar14 + 0x10) = iVar12;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar5 = iVar12;
          }
        }
      }
      *(int *)(lVar6 + 0x50) = iVar5;
      FUN_140705884(param_1 + 0x408,lVar6);
      if (cVar4 != '\0') {
        FUN_141486654(param_1,&local_e8);
      }
      FUN_14144e574(param_1,lVar6);
      *param_2 = *(undefined2 *)(lVar6 + 0xc);
    }
    else {
      if (((param_4 == 0) && ((int)uStack_68 == 0)) && ((local_60 & 1) == 0)) goto LAB_143e16967;
      uVar9 = (undefined4)CONCAT71(uVar10,1);
      if (param_4 != 0 && local_78 == '\0') goto LAB_143e1697c;
      if (local_78 == '\0') {
        uVar9 = (undefined4)CONCAT71(uVar10,1);
        goto LAB_143e16a9c;
      }
LAB_143e16996:
      local_100 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_120 = (code *)*param_3;
      local_118 = *(int *)(param_3 + 1);
      FUN_1447715ec(&local_110,param_3 + 2);
      local_130 = _DAT_14cb8a5a8;
      local_128 = DAT_14cb8a5ac._4_4_;
      FUN_144928d62(&local_110,5);
      local_140[0] = 0;
      local_13c = 0;
      local_134 = 0;
      FUN_144976b9c(local_140,DAT_14cb8a538);
      if ((plVar8 != (longlong *)0x0) &&
         (lVar6 = (**(code **)(*plVar8 + 0x2b0))(plVar8), lVar6 != 0)) {
        FUN_140bc53f1(&local_120,local_140,lVar6,0);
      }
      *param_2 = 0xffff;
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_1418544d6(&local_e8);
LAB_143e16a6b:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e1716e FUN_143e1716e body=1964 status=ok
// SIG undefined FUN_143e1716e(void)

void FUN_143e1716e(longlong param_1,longlong param_2,ushort param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  ushort *local_68;
  ushort local_5a;
  longlong *local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar14 = true;
  local_5a = param_3;
  if ((longlong)*(int *)(param_1 + 0x520) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x518);
    lVar6 = (longlong)*(int *)(param_1 + 0x520) * 0x90;
    do {
      if (*(ushort *)(lVar13 + 0xc) == param_3) {
        if (lVar13 != 0) {
          if (param_2 == 0) {
            *(undefined4 *)(lVar13 + 0x4c) = 0;
            iVar5 = 0;
          }
          else {
            uVar12 = *(uint *)(param_2 + 0xc);
            *(uint *)(lVar13 + 0x4c) = uVar12;
            if ((int)uVar12 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            iVar5 = *(int *)(lVar6 + 0x10);
            if (*(int *)(lVar6 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar5 = *(int *)(lVar6 + 0x10);
              bVar14 = iVar5 == 0;
              if (bVar14) {
                *(int *)(lVar6 + 0x10) = iVar9;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar5 = iVar9;
              }
            }
          }
          *(int *)(lVar13 + 0x50) = iVar5;
          if ((*(char *)(param_1 + 0x178) == '\x03') && (*(int *)(lVar13 + 0x88) < 2)) {
            *(undefined4 *)(lVar13 + 0x88) = 2;
          }
          bVar14 = false;
          goto LAB_143e17243;
        }
        break;
      }
      lVar13 = lVar13 + 0x90;
      lVar6 = lVar6 + -0x90;
    } while (lVar6 != 0);
  }
  lVar13 = 0;
LAB_143e17243:
  if ((*(byte *)(param_2 + 0x348) & 0x10) != 0) {
    if (*(int *)(param_1 + 0x5d0) != *(int *)(param_1 + 0x5fc)) {
      lVar6 = param_1 + 0x600;
      if (*(longlong *)(param_1 + 0x608) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x608);
      }
      iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x610) - 1U & (uint)param_3) * 4);
      if (iVar5 != -1) {
        lVar6 = *(longlong *)(param_1 + 0x5c8);
        do {
          lVar11 = lVar6 + (longlong)iVar5 * 0x20;
          if (*(ushort *)(lVar6 + (longlong)iVar5 * 0x20) == param_3) {
            if (((longlong *)(lVar11 + 8) != (longlong *)0x0 && lVar11 != 0) &&
               (*(longlong *)(lVar11 + 8) != 0)) {
              FUN_14480f766(param_2 + 0x350);
            }
            break;
          }
          iVar5 = *(int *)(lVar11 + 0x18);
        } while (iVar5 != -1);
      }
    }
    lVar6 = FUN_141416276(param_2);
    if (lVar6 != 0) {
      if (!bVar14) {
        if (*(char *)(param_1 + 0x178) == '\x03') {
          if (*(int *)(lVar13 + 0x88) < 3) {
            *(undefined4 *)(lVar13 + 0x88) = 3;
          }
          if (*(int *)(lVar6 + 0x288) != 3) {
            FUN_1446efa72((longlong *)(lVar6 + 0x280),0,3,0x10);
            *(undefined4 *)(lVar6 + 0x288) = 3;
          }
          puVar3 = *(undefined8 **)(lVar6 + 0x280);
          *puVar3 = &PTR_LAB_14b4244b0;
          *(ushort *)(puVar3 + 1) = param_3;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar11 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar11 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar11;
          puVar3[2] = lVar8;
          *puVar3 = &PTR_FUN_14b424440;
          puVar3[3] = 0;
          if (param_1 == 0) {
            iVar5 = 0;
          }
          else {
            uVar12 = *(uint *)(param_1 + 0xc);
            *(uint *)(puVar3 + 3) = uVar12;
            if ((int)uVar12 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            iVar5 = *(int *)(lVar11 + 0x10);
            if (*(int *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar14 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar14) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar5 = *(int *)(lVar11 + 0x10);
              bVar14 = iVar5 == 0;
              if (bVar14) {
                *(int *)(lVar11 + 0x10) = iVar9;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar14) {
                iVar5 = iVar9;
              }
            }
          }
          *(int *)((longlong)puVar3 + 0x1c) = iVar5;
          puVar3[4] = &LAB_141534196;
        }
        local_68 = &local_5a;
        FUN_14655ca90(lVar6 + 0x488,&local_58,param_1,FUN_1415341ea);
        *(longlong **)(lVar13 + 0x40) = local_58;
      }
      FUN_14085fdc0(lVar6);
      if (*(int *)(lVar6 + 0x9e8) == 1) {
        local_68 = &local_5a;
        FUN_14655ca90(lVar6 + 0x890,&local_58,param_1,FUN_141534310);
      }
      else {
        FUN_141534310(param_1,local_5a);
      }
    }
    goto LAB_143e17311;
  }
  plVar7 = (longlong *)FUN_1489563de((longlong *)(param_1 + 0x5c8),param_3,&local_5a);
  if (*plVar7 != 0) goto LAB_143e17311;
  if (param_2 == 0) {
    uVar12 = 0;
    iVar5 = 0;
  }
  else {
    uVar12 = *(uint *)(param_2 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar5 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar5 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar5 = iVar9;
      }
    }
  }
  plVar7[1] = CONCAT44(iVar5,uVar12);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar1 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14b4243d0;
  local_58[1] = CONCAT44(iVar5,uVar12);
  *(ushort *)(local_58 + 2) = local_5a;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_58[3] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14b424360;
  local_58[4] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar12 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 4) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar5 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar5 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)plVar1 + 0x24) = iVar5;
  plVar1[5] = (longlong)FUN_148951670;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_58 + 0x30))(), cVar4 == '\0')) {
    if (local_50 == 0) {
      lVar13 = 0;
      goto LAB_143e17715;
    }
    if (local_58 != (longlong *)0x0) {
      lVar13 = 0;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_143e17708;
    }
    lVar13 = 0;
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x350);
    if (*(int *)(param_2 + 0x364) < 1) {
      iVar5 = *(int *)(param_2 + 0x358);
      iVar9 = *(int *)(param_2 + 0x360) + -1;
      *(int *)(param_2 + 0x360) = iVar9;
      if (iVar9 <= iVar5) {
        iVar9 = iVar5;
        if (0 < iVar5) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar1,iVar10);
              FUN_14005b248(plVar1);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar9 = *(int *)(param_2 + 0x358);
          } while (iVar10 < iVar9);
        }
        iVar10 = 2;
        if (2 < iVar9 * 2) {
          iVar10 = iVar9 * 2;
        }
        *(int *)(param_2 + 0x360) = iVar10;
        if ((iVar10 < iVar5) && (*(int *)(param_2 + 0x35c) != iVar9)) {
          FUN_14045812c();
        }
      }
    }
    lVar13 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      lVar13 = local_48;
    }
    iVar5 = *(int *)(param_2 + 0x358);
    *(uint *)(param_2 + 0x358) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x35c) < iVar5 + 1U) {
      FUN_1447a71f6(plVar1,iVar5);
    }
    lVar6 = *plVar1;
    lVar11 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar6 + lVar11) = 0;
    *(undefined4 *)(lVar6 + 8 + lVar11) = 0;
    *(longlong **)(lVar6 + lVar11) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar6 + 8 + lVar11) = local_50;
LAB_143e17708:
    local_50 = 0;
LAB_143e17715:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *plVar7 = lVar13;
LAB_143e17311:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e1791c FUN_143e1791c body=450 status=ok
// SIG undefined FUN_143e1791c(void)

void FUN_143e1791c(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  short local_82;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_82 = (short)param_4;
  uVar5 = FUN_1447210f0();
  lVar6 = FUN_140149a73(uVar5,0);
  if (lVar6 != 0) {
    plVar7 = (longlong *)FUN_1401499e8(lVar6);
    if (plVar7 != (longlong *)0x0) {
      local_90 = (longlong *)(param_1 + 0x578);
      if (*(int *)(param_1 + 0x580) != *(int *)(param_1 + 0x5ac)) {
        lVar6 = param_1 + 0x5b0;
        if (*(longlong *)(param_1 + 0x5b8) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x5b8);
        }
        iVar9 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x5c0) - 1U & param_4 & 0xffff) * 4)
        ;
        if (iVar9 != -1) {
          do {
            lVar6 = *local_90 + (longlong)iVar9 * 0x40;
            if (*(short *)(*local_90 + (longlong)iVar9 * 0x40) == (short)param_4)
            goto LAB_143e179da;
            iVar9 = *(int *)(lVar6 + 0x38);
          } while (iVar9 != -1);
        }
      }
      lVar6 = 0;
LAB_143e179da:
      lVar4 = param_3[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = *param_3;
        lVar11 = 0;
        do {
          iVar9 = *(int *)(lVar2 + 4 + lVar11);
          if (((iVar9 != 0) && (uVar1 = *(uint *)(lVar2 + lVar11), -1 < (int)uVar1)) &&
             ((int)uVar1 < DAT_14c9647dc)) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar10 != (longlong *)0x0) && ((int)plVar10[2] == iVar9)) &&
               (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar3 = *plVar10, lVar3 != 0)))) {
              lVar8 = FUN_141349952();
              if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                FUN_143e1716e(param_1,lVar3,param_4);
                uVar5 = *(undefined8 *)(lVar6 + 8);
                FUN_1409c5062(local_80,lVar6 + 0x10);
                (**(code **)(*plVar7 + 0x78))(plVar7,local_80,uVar5);
                if (local_58 != 0) {
                  FUN_1400020a8();
                }
                FUN_14895633e(local_90,&local_82);
                break;
              }
            }
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e17ae0 FUN_143e17ae0 body=190 status=ok
// SIG undefined FUN_143e17ae0(void)

undefined8 FUN_143e17ae0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x520) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x518);
    lVar4 = (longlong)*(int *)(param_1 + 0x520) * 0x90;
    do {
      if (*(short *)(lVar2 + 0xc) == (short)param_3) {
        if ((((((lVar2 != 0) && (*(char *)(lVar2 + 0x3a) != '\0')) && (*(int *)(lVar2 + 0x50) != 0))
             && ((uVar1 = *(uint *)(lVar2 + 0x4c), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))
             ) && ((plVar5 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar5 != (longlong *)0x0 &&
                   (((int)plVar5[2] == *(int *)(lVar2 + 0x50) &&
                    ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))) &&
           (lVar2 = *plVar5, lVar2 != 0)) {
          uVar3 = CONCAT71((uint7)(uint3)(*(uint *)(plVar5 + 1) >> 8),1);
          if (*(longlong *)(lVar2 + 0x630) == 0) {
            return uVar3;
          }
          if (*(int *)(*(longlong *)(lVar2 + 0x630) + 0x30) == 0) {
            return uVar3;
          }
          if (*(char *)(lVar2 + 0x720) != '\x01') {
            return uVar3;
          }
        }
        break;
      }
      lVar2 = lVar2 + 0x90;
      lVar4 = lVar4 + -0x90;
    } while (lVar4 != 0);
  }
  FUN_143e17b9e(param_1,param_3);
  return 0;
}



// FUNCTION 143e17b9e FUN_143e17b9e body=696 status=ok
// SIG undefined FUN_143e17b9e(void)

void FUN_143e17b9e(longlong param_1,ushort param_2)

{
  longlong lVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_68;
  longlong local_60;
  ushort local_52;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_52 = param_2;
  lVar5 = FUN_1447210f0();
  if (lVar5 != 0) {
    if (*(int *)(param_1 + 0x620) != *(int *)(param_1 + 0x64c)) {
      lVar8 = param_1 + 0x650;
      if (*(longlong *)(param_1 + 0x658) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x658);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x660) - 1U & (uint)param_2) * 4);
      if (iVar6 != -1) {
        lVar8 = *(longlong *)(param_1 + 0x618);
        do {
          lVar1 = lVar8 + (longlong)iVar6 * 0x20;
          if (*(ushort *)(lVar8 + (longlong)iVar6 * 0x20) == param_2) {
            if ((longlong *)(lVar1 + 8) != (longlong *)0x0 && lVar1 != 0) {
              if (((*(longlong *)(lVar1 + 8) != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) &&
                 (0 < *(int *)(*(longlong *)(lVar1 + 0x10) + 8))) {
                FUN_1401cb356();
                local_68 = *(undefined8 *)(lVar1 + 8);
                local_60 = *(longlong *)(lVar1 + 0x10);
                if (local_60 != 0) {
                  LOCK();
                  *(int *)(local_60 + 0xc) = *(int *)(local_60 + 0xc) + 1;
                  UNLOCK();
                }
                FUN_140d61352(&local_68);
              }
              FUN_148957398((longlong *)(param_1 + 0x618),&local_52);
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x18);
        } while (iVar6 != -1);
      }
    }
    uVar3 = local_52;
    if (0 < *(int *)(lVar5 + 0x238)) {
      lVar8 = 0;
      do {
        iVar6 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar8 * 8);
        if ((((iVar6 != 0) &&
             (uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar8 * 8), -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             ((plVar7 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
              plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar6)))))) &&
           (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
            (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)))) {
          if (DAT_14cb61cd0 == 0) {
            local_50 = FUN_141030f22;
            local_70 = FUN_14081d0ea;
            local_78 = &LAB_1463b31ae;
            local_80 = &local_50;
            local_88 = &LAB_1486dca4f;
            local_90 = &LAB_1464f50a6;
            local_98 = &DAT_149e063b2;
            local_a0 = 0;
            local_a8 = 0x10000004;
            local_b0 = 8;
            local_b8 = 0xd70;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
          }
          if ((((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
                DAT_14cb61cd0 + 0x30)) && ((*(byte *)(plVar7 + 0x84) & 2) != 0)) &&
             (cVar4 = (**(code **)(*plVar7 + 0x6c8))(plVar7), cVar4 != '\0')) {
            FUN_1457f6e36(plVar7,uVar3);
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar5 + 0x238));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e17e58 FUN_143e17e58 body=110 status=ok
// SIG undefined FUN_143e17e58(void)

void FUN_143e17e58(longlong param_1,short param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') && ((longlong)*(int *)(param_1 + 0x520) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x518);
    lVar2 = (longlong)*(int *)(param_1 + 0x520) * 0x90;
    do {
      if (*(short *)(lVar3 + 0xc) == param_2) {
        if (lVar3 == 0) {
          return;
        }
        cVar1 = FUN_1418a7cc6(lVar3);
        if (cVar1 == '\0') {
          return;
        }
        FUN_143e17ec6(param_1,lVar3);
        return;
      }
      lVar3 = lVar3 + 0x90;
      lVar2 = lVar2 + -0x90;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143e17ec6 FUN_143e17ec6 body=511 status=ok
// SIG undefined FUN_143e17ec6(void)

void FUN_143e17ec6(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort *puVar9;
  
  if ((*(char *)(param_1 + 0x178) != '\x03') || (3 < *(int *)(param_2 + 0x88))) {
    return;
  }
  *(undefined4 *)(param_2 + 0x88) = 4;
  if (*(int *)(param_1 + 0x678) != *(int *)(param_1 + 0x6a4)) {
    uVar2 = *(ushort *)(param_2 + 0xc);
    lVar4 = param_1 + 0x6a8;
    if (*(longlong *)(param_1 + 0x6b0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x6b0);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x6b8) - 1U & (uint)uVar2) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ushort *)(*(longlong *)(param_1 + 0x670) + (longlong)iVar5 * 0x18);
        if (*puVar1 == uVar2) {
          puVar9 = puVar1 + 4;
          if (puVar9 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            lVar4 = FUN_1447210f0(param_1);
            if (lVar4 != 0) {
              if (*(longlong *)(lVar4 + 0x1f0) == 0) {
                plVar7 = (longlong *)(lVar4 + 0x458);
              }
              else {
                plVar7 = (longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
              }
              lVar4 = *(longlong *)puVar9;
              if (lVar4 != 0) {
                lVar3 = *plVar7;
                uVar6 = (uint)lVar4;
                if ((int)(uVar6 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
                  lVar8 = lVar3 + 0x18;
                  if (*(longlong *)(lVar3 + 0x28) != 0) {
                    lVar8 = *(longlong *)(lVar3 + 0x28);
                  }
                  if ((*(uint *)(lVar8 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f)
                      & 1) != 0) {
                    lVar3 = *(longlong *)(lVar3 + 8);
                    lVar8 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
                    if (((lVar3 + lVar8 != 0) && (*(longlong *)(lVar3 + 0x60 + lVar8) == lVar4)) &&
                       (*(char *)(lVar3 + 1 + lVar8) != '\x04')) {
                      FUN_1405a424c();
                    }
                  }
                }
              }
              puVar9[0] = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
            }
            FUN_145905d18((longlong *)(param_1 + 0x670),(ushort *)(param_2 + 0xc));
          }
          break;
        }
        iVar5 = *(int *)(puVar1 + 8);
      } while (iVar5 != -1);
    }
  }
  if (((((*(int *)(param_2 + 0x50) != 0) && (uVar6 = *(uint *)(param_2 + 0x4c), -1 < (int)uVar6)) &&
       (((int)uVar6 < DAT_14c9647dc &&
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_2 + 0x50))))))) &&
      ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) &&
     ((lVar4 = *plVar7, lVar4 != 0 && ((*(byte *)(lVar4 + 100) & 2) != 0)))) {
    if ((*(char *)(param_2 + 0x38) == '\x01') && (lVar3 = FUN_141416276(lVar4), lVar3 != 0)) {
      *(byte *)(param_2 + 0x54) = *(byte *)(lVar3 + 0x2d8) & 1;
      *(undefined1 *)(param_2 + 0x55) = 1;
      *(byte *)(lVar3 + 0x2d8) = *(byte *)(lVar3 + 0x2d8) | 1;
    }
    FUN_14655c96a(lVar4,&DAT_14cb8a538,0);
    return;
  }
  FUN_1414dc0a8(param_1,param_2);
  return;
}



// FUNCTION 143e180d2 FUN_143e180d2 body=87 status=ok
// SIG undefined FUN_143e180d2(void)

undefined8 * FUN_143e180d2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b423b80;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1812a FUN_143e1812a body=31 status=ok
// SIG undefined FUN_143e1812a(void)

undefined8 FUN_143e1812a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e18192 FUN_143e18192 body=29 status=ok
// SIG undefined FUN_143e18192(void)

undefined8 FUN_143e18192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e181b0 FUN_143e181b0 body=29 status=ok
// SIG undefined FUN_143e181b0(void)

undefined8 FUN_143e181b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1834c FUN_143e1834c body=93 status=ok
// SIG undefined FUN_143e1834c(void)

void FUN_143e1834c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e183aa FUN_143e183aa body=93 status=ok
// SIG undefined FUN_143e183aa(void)

void FUN_143e183aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e18408 FUN_143e18408 body=126 status=ok
// SIG undefined FUN_143e18408(void)

void FUN_143e18408(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b423c30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e18477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e18490 FUN_143e18490 body=275 status=ok
// SIG undefined FUN_143e18490(void)

undefined8 FUN_143e18490(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e1859d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e1859d;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e1859d:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e18550;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140b242ac(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_143e18550;
    }
  }
  uVar6 = 0;
LAB_143e18550:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e185a4 FUN_143e185a4 body=29 status=ok
// SIG undefined FUN_143e185a4(void)

undefined8 FUN_143e185a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e18740 FUN_143e18740 body=93 status=ok
// SIG undefined FUN_143e18740(void)

void FUN_143e18740(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e1879e FUN_143e1879e body=93 status=ok
// SIG undefined FUN_143e1879e(void)

void FUN_143e1879e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423ca0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e187fc FUN_143e187fc body=126 status=ok
// SIG undefined FUN_143e187fc(void)

void FUN_143e187fc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b423ca0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e1886b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e18886 FUN_143e18886 body=278 status=ok
// SIG undefined FUN_143e18886(void)

undefined8 FUN_143e18886(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e18996;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e18996;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e18996:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e18949;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1410f6408(*(undefined8 *)(param_1 + 0x20),param_2,0);
      uVar6 = 1;
      goto LAB_143e18949;
    }
  }
  uVar6 = 0;
LAB_143e18949:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1899e FUN_143e1899e body=29 status=ok
// SIG undefined FUN_143e1899e(void)

undefined8 FUN_143e1899e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e18b3a FUN_143e18b3a body=93 status=ok
// SIG undefined FUN_143e18b3a(void)

void FUN_143e18b3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e18b98 FUN_143e18b98 body=93 status=ok
// SIG undefined FUN_143e18b98(void)

void FUN_143e18b98(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423d10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e18bf6 FUN_143e18bf6 body=126 status=ok
// SIG undefined FUN_143e18bf6(void)

void FUN_143e18bf6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b423d10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e18c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e18c80 FUN_143e18c80 body=268 status=ok
// SIG undefined FUN_143e18c80(void)

undefined8 FUN_143e18c80(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143e18d86;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e18d86;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e18d86:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e18d3a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      FUN_1411bda8e(*(undefined8 *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_143e18d3a;
    }
  }
  uVar6 = 0;
LAB_143e18d3a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e18d8e FUN_143e18d8e body=29 status=ok
// SIG undefined FUN_143e18d8e(void)

undefined8 FUN_143e18d8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e18f2a FUN_143e18f2a body=93 status=ok
// SIG undefined FUN_143e18f2a(void)

void FUN_143e18f2a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b423d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e18f88 FUN_143e18f88 body=93 status=ok
// SIG undefined FUN_143e18f88(void)

void FUN_143e18f88(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b423d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e18fe6 FUN_143e18fe6 body=126 status=ok
// SIG undefined FUN_143e18fe6(void)

void FUN_143e18fe6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b423d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e19055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e1906e FUN_143e1906e body=286 status=ok
// SIG undefined FUN_143e1906e(void)

undefined8 FUN_143e1906e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e19185;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e19185;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_143e19185:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e19136;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1407e8406(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      uVar6 = 1;
      goto LAB_143e19136;
    }
  }
  uVar6 = 0;
LAB_143e19136:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1918e FUN_143e1918e body=29 status=ok
// SIG undefined FUN_143e1918e(void)

undefined8 FUN_143e1918e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1932a FUN_143e1932a body=93 status=ok
// SIG undefined FUN_143e1932a(void)

void FUN_143e1932a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e19388 FUN_143e19388 body=93 status=ok
// SIG undefined FUN_143e19388(void)

void FUN_143e19388(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423df0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e193e6 FUN_143e193e6 body=126 status=ok
// SIG undefined FUN_143e193e6(void)

void FUN_143e193e6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3ea270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b423df0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e19455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e19464 FUN_143e19464 body=66 status=ok
// SIG undefined FUN_143e19464(void)

void FUN_143e19464(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143e195c0(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e194a8 FUN_143e194a8 body=279 status=ok
// SIG undefined FUN_143e194a8(void)

undefined8 FUN_143e194a8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e195b9;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e195b9;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e195b9:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e1956d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143e195c0(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_143e1956d;
    }
  }
  uVar6 = 0;
LAB_143e1956d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e195c0 FUN_143e195c0 body=291 status=ok
// SIG undefined FUN_143e195c0(void)

void FUN_143e195c0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_2;
  uVar1 = *param_1;
  if (lVar2 != 0) {
    if (DAT_14cac7648 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_143242436;
      local_48 = &LAB_14789ef1f;
      local_50 = &LAB_1417b008f;
      local_58 = L"Engine";
      local_60 = 0x8000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
    }
    if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) goto LAB_143e1960f;
  }
  lVar2 = 0;
LAB_143e1960f:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1410f6408(uVar1,lVar2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e196e4 FUN_143e196e4 body=29 status=ok
// SIG undefined FUN_143e196e4(void)

undefined8 FUN_143e196e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e19880 FUN_143e19880 body=93 status=ok
// SIG undefined FUN_143e19880(void)

void FUN_143e19880(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4024f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e198de FUN_143e198de body=93 status=ok
// SIG undefined FUN_143e198de(void)

void FUN_143e198de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4024f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e1993c FUN_143e1993c body=126 status=ok
// SIG undefined FUN_143e1993c(void)

void FUN_143e1993c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4024f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b423e60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e199ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e199c4 FUN_143e199c4 body=286 status=ok
// SIG undefined FUN_143e199c4(void)

undefined8 FUN_143e199c4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e19adb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e19adb;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_143e19adb:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e19a8c;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1418a69ca(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      uVar6 = 1;
      goto LAB_143e19a8c;
    }
  }
  uVar6 = 0;
LAB_143e19a8c:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e19ae4 FUN_143e19ae4 body=29 status=ok
// SIG undefined FUN_143e19ae4(void)

undefined8 FUN_143e19ae4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e19c80 FUN_143e19c80 body=93 status=ok
// SIG undefined FUN_143e19c80(void)

void FUN_143e19c80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e19cde FUN_143e19cde body=93 status=ok
// SIG undefined FUN_143e19cde(void)

void FUN_143e19cde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423ed0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e19d3c FUN_143e19d3c body=126 status=ok
// SIG undefined FUN_143e19d3c(void)

void FUN_143e19d3c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b423ed0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e19dab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e19dc4 FUN_143e19dc4 body=275 status=ok
// SIG undefined FUN_143e19dc4(void)

undefined8 FUN_143e19dc4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e19ed1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e19ed1;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e19ed1:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e19e84;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140b242ac(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_143e19e84;
    }
  }
  uVar6 = 0;
LAB_143e19e84:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e19ed8 FUN_143e19ed8 body=29 status=ok
// SIG undefined FUN_143e19ed8(void)

undefined8 FUN_143e19ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a074 FUN_143e1a074 body=93 status=ok
// SIG undefined FUN_143e1a074(void)

void FUN_143e1a074(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e1a0d2 FUN_143e1a0d2 body=93 status=ok
// SIG undefined FUN_143e1a0d2(void)

void FUN_143e1a0d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143e1a130 FUN_143e1a130 body=126 status=ok
// SIG undefined FUN_143e1a130(void)

void FUN_143e1a130(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b423f40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e1a19f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e1a1ba FUN_143e1a1ba body=278 status=ok
// SIG undefined FUN_143e1a1ba(void)

undefined8 FUN_143e1a1ba(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143e1a2ca;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e1a2ca;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143e1a2ca:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e1a27d;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1410f6408(*(undefined8 *)(param_1 + 0x20),param_2,0);
      uVar6 = 1;
      goto LAB_143e1a27d;
    }
  }
  uVar6 = 0;
LAB_143e1a27d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1a2d2 FUN_143e1a2d2 body=64 status=ok
// SIG undefined FUN_143e1a2d2(void)

undefined8 * FUN_143e1a2d2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b423fb0;
  plVar2 = (longlong *)param_1[6];
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



// FUNCTION 143e1a490 FUN_143e1a490 body=126 status=ok
// SIG undefined FUN_143e1a490(void)

void FUN_143e1a490(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423fb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e1a50e FUN_143e1a50e body=126 status=ok
// SIG undefined FUN_143e1a50e(void)

void FUN_143e1a50e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b423fb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 143e1a58c FUN_143e1a58c body=164 status=ok
// SIG undefined FUN_143e1a58c(void)

void FUN_143e1a58c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b423fb0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143e1a620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143e1a650 FUN_143e1a650 body=288 status=ok
// SIG undefined FUN_143e1a650(void)

undefined8 FUN_143e1a650(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143e1a76a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143e1a76a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143e1a76a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143e1a6fb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong *)(param_1 + 0x28) != 0) &&
         ((*(longlong *)(param_1 + 0x30) != 0 && (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 8))))
         ) {
        FUN_1418a68cc(*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_143e1a6fb;
    }
  }
  uVar6 = 0;
LAB_143e1a6fb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1a772 FUN_143e1a772 body=50 status=ok
// SIG undefined FUN_143e1a772(void)

void FUN_143e1a772(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *param_2;
  plVar2 = (longlong *)FUN_140b247ea(*param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000143e1a7a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,param_1[1],*(code **)(*plVar2 + 0x18));
  return;
}



// FUNCTION 143e1a7c2 FUN_143e1a7c2 body=12 status=ok
// SIG undefined FUN_143e1a7c2(void)

void FUN_143e1a7c2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e1a7cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e1a7ce FUN_143e1a7ce body=29 status=ok
// SIG undefined FUN_143e1a7ce(void)

undefined8 FUN_143e1a7ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a7ec FUN_143e1a7ec body=50 status=ok
// SIG undefined FUN_143e1a7ec(void)

void FUN_143e1a7ec(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *param_2;
  plVar2 = (longlong *)FUN_140b247ea(*param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x000143e1a81b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,param_1[1],*(code **)(*plVar2 + 0x18));
  return;
}



// FUNCTION 143e1a83c FUN_143e1a83c body=12 status=ok
// SIG undefined FUN_143e1a83c(void)

void FUN_143e1a83c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e1a845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e1a848 FUN_143e1a848 body=29 status=ok
// SIG undefined FUN_143e1a848(void)

undefined8 FUN_143e1a848(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a8a2 FUN_143e1a8a2 body=12 status=ok
// SIG undefined FUN_143e1a8a2(void)

void FUN_143e1a8a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143e1a8ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143e1a8ae FUN_143e1a8ae body=29 status=ok
// SIG undefined FUN_143e1a8ae(void)

undefined8 FUN_143e1a8ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a8cc FUN_143e1a8cc body=31 status=ok
// SIG undefined FUN_143e1a8cc(void)

undefined8 FUN_143e1a8cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a938 FUN_143e1a938 body=31 status=ok
// SIG undefined FUN_143e1a938(void)

undefined8 FUN_143e1a938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a9b4 FUN_143e1a9b4 body=31 status=ok
// SIG undefined FUN_143e1a9b4(void)

undefined8 FUN_143e1a9b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a9d4 FUN_143e1a9d4 body=31 status=ok
// SIG undefined FUN_143e1a9d4(void)

undefined8 FUN_143e1a9d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143e1a9f3 FUN_143e1a9f3 body=946 status=ok
// SIG undefined FUN_143e1a9f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e1a9f3(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb8a428 = 0xffffffff;
  DAT_14cb8a42c = 0;
  local_48 = "AssetRegistry";
  uStack_40 = 0xd;
  uStack_3c = uStack_3c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cb8a430 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cb8a438);
  if (cVar1 == '\0') {
    _DAT_14cb8a438 = 0;
    uRam000000014cb8a440 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = "bone";
  uStack_40 = 4;
  uStack_3c = uStack_3c & 0xffffff00;
  FUN_14001a6c0(&local_48,1);
  DAT_14cb8a450 = 0;
  _DAT_14cb8a458 = 0;
  atexit((_func_5014 *)&LAB_143e14e6d);
  _DAT_14cb8a468 = &LAB_143e14ea0;
  _DAT_14cb8a470 = 0x4422b333;
  DAT_14cb8a474 = 1;
  DAT_14cb8a460 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb8a460;
  atexit((_func_5014 *)&LAB_143e14ea5);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b4233a0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b4237b0,1,0);
  FUN_1446f470e(&DAT_14cb8a5d0,&DAT_14b4237d8,1);
  local_48 = (char *)0xb9d041573d54fbbc;
  uStack_40 = 0xbf76cafd;
  uStack_3c = 0xdf898316;
  _DAT_14cb8a4b0 = 0x3d54fbbc;
  uRam000000014cb8a4b4 = 0xb9d04157;
  uRam000000014cb8a4b8 = 0xbf76cafd;
  uRam000000014cb8a4bc = 0xdf898316;
  FUN_141005458(&local_48,3,L"GbxActorStateSequence",0);
  atexit((_func_5014 *)&LAB_143e154b8);
  _DAT_14cb8a4c0 = 0x47efffffe0000000;
  _DAT_14cb8a4c8 = 0x47efffffe0000000;
  _DAT_14cb8a4d0 = 0x47efffffe0000000;
  _DAT_14cb8a4d8 = 0x47efffffe0000000;
  _DAT_14cb8a4e0 = 0x47efffffe0000000;
  _DAT_14cb8a4e8 = 0x47efffffe0000000;
  _DAT_14cb8a4f0 = 0x47efffffe0000000;
  _DAT_14cb8a4f8 = 0x47efffffe0000000;
  _DAT_14cb8a504 = 0;
  FUN_14052b5e0(&DAT_14cb8a500,"PlayerAwareness",0);
  _DAT_14cb8a510 = "PlayerAwareness";
  DAT_14cb8a518 = 0;
  DAT_14cb8a520 = 0;
  atexit(FUN_143e15bd6);
  local_48 = (char *)0xe5db4fe5eafe9c3f;
  uStack_40 = 0x926a818f;
  uStack_3c = 0xd172e950;
  _DAT_14cb8a528 = 0xeafe9c3f;
  uRam000000014cb8a52c = 0xe5db4fe5;
  uRam000000014cb8a530 = 0x926a818f;
  uRam000000014cb8a534 = 0xd172e950;
  FUN_141005458(&local_48,0,L"GbxLevelSequence",0);
  atexit((_func_5014 *)&LAB_143e15c11);
  DAT_14cb8a5ac = 0;
  FUN_14052b5e0(&DAT_14cb8a5a8,"current_mark",0);
  _DAT_14cb8a5b8 = "current_mark";
  FUN_1446f470e(&DAT_14cb8a5c0,L"Start_NATIVE",1);
  FUN_1446f470e(&DAT_14cb8a538,L"End_NATIVE",1);
  local_48 = (char *)0xb0a642288d6dfc70;
  uStack_40 = 0x9b3d96d8;
  uStack_3c = 0xdc919c2c;
  _DAT_14cb8a540 = 0x8d6dfc70;
  uRam000000014cb8a544 = 0xb0a64228;
  uRam000000014cb8a548 = 0x9b3d96d8;
  uRam000000014cb8a54c = 0xdc919c2c;
  FUN_141005458(&local_48,0,L"GbxLevelSequenceActor",0);
  atexit((_func_5014 *)&LAB_143e15c92);
  DAT_14cb8a554 = 0;
  FUN_14052b5e0(&DAT_14cb8a550,"played",0);
  _DAT_14cb8a560 = "played";
  local_48 = (char *)0xc185432ec88d257b;
  uStack_40 = 0xa945f7f9;
  uStack_3c = 0xe75fa8b9;
  _DAT_14cb8a568 = 0xc88d257b;
  uRam000000014cb8a56c = 0xc185432e;
  uRam000000014cb8a570 = 0xa945f7f9;
  uRam000000014cb8a574 = 0xe75fa8b9;
  FUN_141005458(&local_48,0,L"GbxLevelSequenceBase",0);
  atexit((_func_5014 *)&LAB_143e16587);
  _DAT_14cb8a5c8 = DAT_14cab2e38;
  DAT_14cab2e38 = DAT_14cab2e38 + 1;
  FUN_1446f470e(&DAT_14cb8a580,L"CreateGbxLevelSequencePlayer",1);
  DAT_14cb8a590 = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1adb4 FUN_143e1adb4 body=765 status=ok
// SIG undefined FUN_143e1adb4(void)

longlong FUN_143e1adb4(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = *(longlong *)(param_2 + 0xc0);
  if (lVar10 != 0) {
    lVar5 = FUN_14129d0d4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      lVar5 = FUN_1400d690e(lVar10 + 0x38);
      if (lVar5 != 0) {
        lVar9 = *param_4;
        if (*(int *)(lVar9 + 0x1c) == 0) {
LAB_143e1aeb8:
          lVar6 = 0;
        }
        else {
          uVar2 = *(uint *)(lVar9 + 0x18);
          lVar6 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            plVar11 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((plVar11 == (longlong *)0x0) ||
               ((((int)plVar11[2] != *(int *)(lVar9 + 0x1c) ||
                 ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) ||
                (plVar11 = (longlong *)*plVar11, plVar11 == (longlong *)0x0)))) goto LAB_143e1aeb8;
            lVar6 = (**(code **)(*plVar11 + 0x180))(plVar11);
            lVar9 = *param_4;
          }
        }
        if (lVar6 == 0) {
          lVar6 = DAT_14cb10918;
        }
        plVar11 = (longlong *)FUN_1460032e2(lVar9 + 0x38);
        if (plVar11 != (longlong *)0x0) {
          if (*(char *)(lVar10 + 0x50) == '\x01') {
            cVar4 = FUN_1458fe2b6(lVar10);
            if (cVar4 == '\0') goto LAB_143e1afd8;
            plVar7 = (longlong *)FUN_14133b4fc(lVar10);
            lVar10 = plVar7[1];
            if (lVar10 == 0) {
              uVar8 = FUN_1458f96d4();
              lVar10 = FUN_14477b664(uVar8);
              plVar7[1] = lVar10;
            }
            lVar9 = plVar7[2];
            if (((lVar9 == 0) && (lVar9 = 0, lVar10 != 0)) && (*plVar7 != 0)) {
              plVar3 = *(longlong **)(lVar10 + 0xb8);
              if (plVar3 == (longlong *)0x0) {
LAB_143e1b0aa:
                lVar9 = 0;
              }
              else {
                cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
                if (cVar4 == '\0') goto LAB_143e1b0aa;
                uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar9 = FUN_144aff482(uVar8,plVar7);
              }
              plVar7[2] = lVar9;
            }
            (**(code **)(*plVar11 + 8))(plVar11,&local_50,param_2 + 0xa0,lVar9);
            local_60 = local_50;
            local_58 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_48 + 1) = (int)local_48[1] + 1;
              UNLOCK();
            }
            local_78 = &local_60;
            lVar10 = FUN_143e11eba(lVar9,lVar5,lVar6,&DAT_14c846480);
          }
          else {
LAB_143e1afd8:
            (**(code **)(*plVar11 + 8))(plVar11,&local_50,param_2 + 0xa0,lVar5);
            local_70 = local_50;
            local_68 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_48 + 1) = (int)local_48[1] + 1;
              UNLOCK();
            }
            lVar10 = FUN_145872b1d(lVar5,lVar6,&local_70);
          }
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_48 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
          if (lVar10 != 0) {
            lVar5 = lVar10 + 0x1f0;
            if (*(int *)(lVar10 + 0x1fc) < 2) {
              FUN_1402191ca(lVar5,2);
            }
            FUN_140721fbe(lVar5,&DAT_14cb8a660);
            FUN_140721fbe(lVar5,&DAT_14cb8a668);
            goto LAB_143e1ae14;
          }
        }
      }
    }
  }
  lVar10 = 0;
LAB_143e1ae14:
  plVar11 = (longlong *)param_4[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar11 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1b0b2 FUN_143e1b0b2 body=1131 status=ok
// SIG undefined FUN_143e1b0b2(void)

undefined8 *
FUN_143e1b0b2(ushort *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar2 = *param_1;
  if (uVar2 != 0xffff) {
    lVar5 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar5 + 0x20) != (uint)uVar2 && (int)(uint)uVar2 <= (int)*(uint *)(lVar5 + 0x20))
       && ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
      if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
        local_f8 = (undefined1 *)0x0;
        local_f0 = 0x400000000;
        FUN_147696eec(param_1,param_4,local_118);
        puVar12 = (undefined1 *)0x0;
        if ((int)local_f0 != 0) {
          puVar12 = local_118;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar7 = (uint *)*puVar1;
        if (puVar7 != (uint *)0x0) goto LAB_143e1b274;
        while( true ) {
          uVar9 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar9 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar9 | 1;
            __tlregdtor(&LAB_143e232d2);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar6 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar6 = 0xffffffff;
          *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          FUN_140217a48(puVar1);
          puVar7 = (uint *)*puVar1;
LAB_143e1b274:
          puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x30);
          uVar9 = puVar7[0x12];
          if (puVar10 <= puVar7 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
            LOCK();
            uVar4 = *puVar7;
            *puVar7 = *puVar7 + uVar9 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar9) != 0xffffffff) break;
            puVar7 = (uint *)*puVar1;
            *puVar7 = 0xffffffff;
            *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
            puVar7[0x12] = 0;
            *puVar1 = puVar7;
            puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
            puVar10 = (uint *)(puVar14 + 0x30);
            uVar9 = 0;
            if (puVar10 <= puVar7 + 0x4000) {
              uVar9 = 1;
              goto LAB_143e1b2f6;
            }
          }
        }
        uVar9 = uVar9 + 1;
LAB_143e1b2f6:
        *(uint **)(puVar7 + 0x10) = puVar10;
        puVar7[0x12] = uVar9;
        FUN_1447247dc(puVar14,puVar12);
        *puVar14 = &PTR_FUN_14b4258c0;
        FUN_148964218(puVar14 + 0x15,param_3,param_1);
        puVar14[0x2f] = *param_5;
        uVar9 = *(uint *)(puVar14 + 0x16);
        if (((ulonglong)uVar9 & 0xff) == 0xff) {
          uVar4 = uVar9 >> 10 & 3;
          iVar11 = 0;
          if ((uVar9 >> 9 & 1) == 0 || uVar4 < 2) {
            uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
            iVar11 = 0;
          }
          else {
            uVar13 = 2;
          }
        }
        else {
          iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
          uVar13 = 5;
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
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar3 = 1;
          if ((char)uVar13 != '\x06') {
            uVar3 = uVar13;
          }
          uVar13 = uVar3;
          uVar8 = 0;
        }
        else {
          if ((char)uVar13 == '\x06') {
            uVar13 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar8 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar14[0xf] = uVar8;
        puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar14 + 0x1c) = iVar11;
        *param_2 = puVar14;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
        local_120 = CONCAT71(local_120._1_7_,1);
        FUN_1447439e4();
        puVar12 = local_118;
        if (local_f8 != (undefined1 *)0x0) {
          puVar12 = local_f8;
        }
        FUN_144717c65(puVar12,local_f0 & 0xffffffff);
        if (local_f8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143e1b10f;
      }
      local_120 = *param_5;
      FUN_148964218(local_118,param_3,param_1);
      FUN_143e231a6(local_118,&local_120);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  *param_2 = 0;
LAB_143e1b10f:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e1b51e FUN_143e1b51e body=1131 status=ok
// SIG undefined FUN_143e1b51e(void)

undefined8 *
FUN_143e1b51e(ushort *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar2 = *param_1;
  if (uVar2 != 0xffff) {
    lVar5 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar5 + 0x20) != (uint)uVar2 && (int)(uint)uVar2 <= (int)*(uint *)(lVar5 + 0x20))
       && ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
      if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
        local_f8 = (undefined1 *)0x0;
        local_f0 = 0x400000000;
        FUN_147696eec(param_1,param_4,local_118);
        puVar12 = (undefined1 *)0x0;
        if ((int)local_f0 != 0) {
          puVar12 = local_118;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar7 = (uint *)*puVar1;
        if (puVar7 != (uint *)0x0) goto LAB_143e1b6e0;
        while( true ) {
          uVar9 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar9 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar9 | 1;
            __tlregdtor(&LAB_143e232d2);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar6 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar6 = 0xffffffff;
          *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          FUN_140217a48(puVar1);
          puVar7 = (uint *)*puVar1;
LAB_143e1b6e0:
          puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x30);
          uVar9 = puVar7[0x12];
          if (puVar10 <= puVar7 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
            LOCK();
            uVar4 = *puVar7;
            *puVar7 = *puVar7 + uVar9 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar9) != 0xffffffff) break;
            puVar7 = (uint *)*puVar1;
            *puVar7 = 0xffffffff;
            *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
            puVar7[0x12] = 0;
            *puVar1 = puVar7;
            puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
            puVar10 = (uint *)(puVar14 + 0x30);
            uVar9 = 0;
            if (puVar10 <= puVar7 + 0x4000) {
              uVar9 = 1;
              goto LAB_143e1b762;
            }
          }
        }
        uVar9 = uVar9 + 1;
LAB_143e1b762:
        *(uint **)(puVar7 + 0x10) = puVar10;
        puVar7[0x12] = uVar9;
        FUN_1447247dc(puVar14,puVar12);
        *puVar14 = &PTR_FUN_14b4258d0;
        FUN_1489646a0(puVar14 + 0x15,param_3,param_1);
        puVar14[0x2f] = *param_5;
        uVar9 = *(uint *)(puVar14 + 0x16);
        if (((ulonglong)uVar9 & 0xff) == 0xff) {
          uVar4 = uVar9 >> 10 & 3;
          iVar11 = 0;
          if ((uVar9 >> 9 & 1) == 0 || uVar4 < 2) {
            uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
            iVar11 = 0;
          }
          else {
            uVar13 = 2;
          }
        }
        else {
          iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
          uVar13 = 5;
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
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar3 = 1;
          if ((char)uVar13 != '\x06') {
            uVar3 = uVar13;
          }
          uVar13 = uVar3;
          uVar8 = 0;
        }
        else {
          if ((char)uVar13 == '\x06') {
            uVar13 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar8 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar14[0xf] = uVar8;
        puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar14 + 0x1c) = iVar11;
        *param_2 = puVar14;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
        local_120 = CONCAT71(local_120._1_7_,1);
        FUN_1447439e4();
        puVar12 = local_118;
        if (local_f8 != (undefined1 *)0x0) {
          puVar12 = local_f8;
        }
        FUN_144717c65(puVar12,local_f0 & 0xffffffff);
        if (local_f8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143e1b57b;
      }
      local_120 = *param_5;
      FUN_1489646a0(local_118,param_3,param_1);
      FUN_143e23472(local_118,&local_120);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  *param_2 = 0;
LAB_143e1b57b:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e1b98a FUN_143e1b98a body=1652 status=ok
// SIG undefined FUN_143e1b98a(void)

longlong *
FUN_143e1b98a(ushort *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5
             ,void *param_6,undefined8 *param_7,undefined8 *param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort **ppuVar11;
  uint *puVar12;
  void *pvVar13;
  int iVar14;
  undefined8 *puVar15;
  ushort *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_178 [38];
  ushort local_152;
  ushort *local_150 [4];
  ushort **local_130;
  ulonglong local_128;
  longlong local_f0;
  ushort *local_80;
  ushort **local_78;
  ushort **local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar1 = *param_1;
  if (uVar1 != 0xffff) {
    lVar6 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar6 + 0x20) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(lVar6 + 0x20))
       && ((*(uint *)(lVar6 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)) {
      if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
        local_130 = (ushort **)0x0;
        local_128 = 0x400000000;
        local_152 = 0xffff;
        local_80 = &local_152;
        local_78 = local_150;
        FUN_147552f5e(param_4,local_150,&local_80);
        local_152 = *param_1;
        local_80 = &local_152;
        local_78 = local_150;
        FUN_147552f5e(param_4,local_150,&local_80);
        ppuVar11 = (ushort **)0x0;
        if ((int)local_128 != 0) {
          ppuVar11 = local_150;
        }
        puVar17 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar8 = (uint *)*puVar17;
        if (puVar8 != (uint *)0x0) goto LAB_143e1bbf7;
        while( true ) {
          uVar4 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar4 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar4 | 1;
            __tlregdtor(&LAB_143e232d2);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar7 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar7 = 0xffffffff;
          *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar17 = puVar7;
          FUN_140217a48(puVar17);
          puVar8 = (uint *)*puVar17;
LAB_143e1bbf7:
          puVar15 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar15 + 0x36);
          uVar4 = puVar8[0x12];
          if (puVar12 <= puVar8 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
            LOCK();
            uVar5 = *puVar8;
            *puVar8 = *puVar8 + uVar4 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar4) != 0xffffffff) break;
            puVar8 = (uint *)*puVar17;
            *puVar8 = 0xffffffff;
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
            puVar8[0x12] = 0;
            *puVar17 = puVar8;
            puVar15 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
            puVar12 = (uint *)(puVar15 + 0x36);
            uVar4 = 0;
            if (puVar12 <= puVar8 + 0x4000) {
              uVar4 = 1;
              goto LAB_143e1bc7b;
            }
          }
        }
        uVar4 = uVar4 + 1;
LAB_143e1bc7b:
        *(uint **)(puVar8 + 0x10) = puVar12;
        puVar8[0x12] = uVar4;
        FUN_1447247dc(puVar15,ppuVar11);
        *puVar15 = &PTR_FUN_14b4258e0;
        FUN_14896481c(puVar15 + 0x15,param_3,param_1);
        uVar10 = *param_7;
        uVar2 = *param_8;
        puVar15[0x31] = 0;
        puVar15[0x32] = 0;
        iVar14 = *(int *)((longlong)param_6 + 0x18);
        uVar4 = iVar14 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar4) {
          uVar5 = 0x80;
          if (0x80 < uVar4) {
            uVar5 = uVar4;
          }
          *(uint *)((longlong)puVar15 + 0x194) = uVar5;
          FUN_1446efbd8(puVar15 + 0x2f,0);
          iVar14 = *(int *)((longlong)param_6 + 0x18);
        }
        *(int *)(puVar15 + 0x32) = iVar14;
        if (iVar14 != 0) {
          pvVar13 = *(void **)((longlong)param_6 + 0x10);
          if (*(void **)((longlong)param_6 + 0x10) == (void *)0x0) {
            pvVar13 = param_6;
          }
          puVar17 = puVar15 + 0x2f;
          if ((undefined8 *)puVar15[0x31] != (undefined8 *)0x0) {
            puVar17 = (undefined8 *)puVar15[0x31];
          }
          memcpy(puVar17,pvVar13,(ulonglong)(iVar14 + 0x1fU >> 3 & 0xfffffffc));
        }
        uVar9 = FUN_14009d2a0();
        puVar15[0x33] = uVar9;
        puVar15[0x34] = uVar10;
        puVar15[0x35] = uVar2;
        uVar4 = *(uint *)(puVar15 + 0x16);
        if (((ulonglong)uVar4 & 0xff) == 0xff) {
          uVar5 = uVar4 >> 10 & 3;
          iVar14 = 0;
          if ((uVar4 >> 9 & 1) == 0 || uVar5 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
            iVar14 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar14 = (uVar4 >> 7 & 2 | uVar4 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar4 & 0xff) * 4);
          uVar18 = 5;
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
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar3 = 1;
          if ((char)uVar18 != '\x06') {
            uVar3 = uVar18;
          }
          uVar18 = uVar3;
          uVar10 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar15[0xf] = uVar10;
        puVar15[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar15 + 0x1c) = iVar14;
        *param_2 = (longlong)puVar15;
        if (puVar15 == (undefined8 *)0x0) {
          puVar16 = (ushort *)0x0;
        }
        else {
          LOCK();
          *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
          UNLOCK();
          puVar16 = (ushort *)*param_2;
        }
        local_80 = (ushort *)CONCAT71(local_80._1_7_,1);
        FUN_1447439e4(puVar16);
        if (param_5 != 0) {
          if (puVar16 != (ushort *)0x0) {
            LOCK();
            *(int *)(puVar16 + 4) = *(int *)(puVar16 + 4) + 1;
            UNLOCK();
          }
          local_80 = puVar16;
          FUN_1432da764(param_5,&local_80);
        }
        ppuVar11 = local_150;
        if (local_130 != (ushort **)0x0) {
          ppuVar11 = local_130;
        }
        FUN_144717c65(ppuVar11,local_128 & 0xffffffff);
        ppuVar11 = local_130;
      }
      else {
        uVar10 = *param_7;
        uVar2 = *param_8;
        local_70 = (ushort **)0x0;
        lStack_68 = 0;
        iVar14 = *(int *)((longlong)param_6 + 0x18);
        uVar4 = iVar14 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar4) {
          uVar5 = 0x80;
          if (0x80 < uVar4) {
            uVar5 = uVar4;
          }
          lStack_68 = (ulonglong)uVar5 << 0x20;
          FUN_1446efbd8(&local_80,0);
          iVar14 = *(int *)((longlong)param_6 + 0x18);
        }
        lStack_68 = CONCAT44(lStack_68._4_4_,iVar14);
        if (iVar14 != 0) {
          pvVar13 = *(void **)((longlong)param_6 + 0x10);
          if (*(void **)((longlong)param_6 + 0x10) == (void *)0x0) {
            pvVar13 = param_6;
          }
          ppuVar11 = local_70;
          if (local_70 == (ushort **)0x0) {
            ppuVar11 = &local_80;
          }
          memcpy(ppuVar11,pvVar13,(ulonglong)(iVar14 + 0x1fU >> 3 & 0xfffffffc));
        }
        local_60 = FUN_14009d2a0();
        local_58 = uVar10;
        local_50 = uVar2;
        FUN_14896481c(local_150,param_3,param_1);
        FUN_143e23716(local_150,&local_80);
        if (local_f0 != 0) {
          FUN_1400020a8();
        }
        *param_2 = 0;
        ppuVar11 = local_70;
      }
      if (ppuVar11 != (ushort **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143e1b9e7;
    }
  }
  *param_2 = 0;
LAB_143e1b9e7:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1c000 FUN_143e1c000 body=1295 status=ok
// SIG undefined FUN_143e1c000(void)

longlong *
FUN_143e1c000(ushort *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5
             ,longlong *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [40];
  ushort *local_130;
  undefined1 *local_128;
  ushort local_11a;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar2 = *param_1;
  if (uVar2 != 0xffff) {
    lVar5 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar5 + 0x20) != (uint)uVar2 && (int)(uint)uVar2 <= (int)*(uint *)(lVar5 + 0x20))
       && ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
      if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
        local_f8 = (undefined1 *)0x0;
        local_f0 = 0x400000000;
        local_11a = 0xffff;
        local_130 = &local_11a;
        local_128 = local_118;
        FUN_147552f5e(param_4,local_118,&local_130);
        local_11a = *param_1;
        local_130 = &local_11a;
        local_128 = local_118;
        FUN_147552f5e(param_4,local_118,&local_130);
        puVar12 = (undefined1 *)0x0;
        if ((int)local_f0 != 0) {
          puVar12 = local_118;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar7 = (uint *)*puVar1;
        if (puVar7 != (uint *)0x0) goto LAB_143e1c20e;
        while( true ) {
          uVar9 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar9 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar9 | 1;
            __tlregdtor(&LAB_143e232d2);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar6 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar6 = 0xffffffff;
          *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          FUN_140217a48(puVar1);
          puVar7 = (uint *)*puVar1;
LAB_143e1c20e:
          puVar13 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar13 + 0x31);
          uVar9 = puVar7[0x12];
          if (puVar10 <= puVar7 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
            LOCK();
            uVar4 = *puVar7;
            *puVar7 = *puVar7 + uVar9 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar9) != 0xffffffff) break;
            puVar7 = (uint *)*puVar1;
            *puVar7 = 0xffffffff;
            *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
            puVar7[0x12] = 0;
            *puVar1 = puVar7;
            puVar13 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
            puVar10 = (uint *)(puVar13 + 0x31);
            uVar9 = 0;
            if (puVar10 <= puVar7 + 0x4000) {
              uVar9 = 1;
              goto LAB_143e1c292;
            }
          }
        }
        uVar9 = uVar9 + 1;
LAB_143e1c292:
        *(uint **)(puVar7 + 0x10) = puVar10;
        puVar7[0x12] = uVar9;
        FUN_1447247dc(puVar13,puVar12);
        *puVar13 = &PTR_FUN_14b4258f0;
        FUN_148964cc6(puVar13 + 0x15,param_3,param_1);
        lVar5 = *param_7;
        puVar13[0x2f] = *param_6;
        puVar13[0x30] = lVar5;
        uVar9 = *(uint *)(puVar13 + 0x16);
        if (((ulonglong)uVar9 & 0xff) == 0xff) {
          uVar4 = uVar9 >> 10 & 3;
          iVar11 = 0;
          if ((uVar9 >> 9 & 1) == 0 || uVar4 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
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
        if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
        }
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar13[9] = puVar13;
        puVar13[10] = puVar13;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar3 = 1;
          if ((char)uVar15 != '\x06') {
            uVar3 = uVar15;
          }
          uVar15 = uVar3;
          uVar8 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar8 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar13[0xf] = uVar8;
        puVar13[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar13 + 0x1c) = iVar11;
        *param_2 = (longlong)puVar13;
        if (puVar13 == (undefined8 *)0x0) {
          puVar14 = (ushort *)0x0;
        }
        else {
          LOCK();
          *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
          UNLOCK();
          puVar14 = (ushort *)*param_2;
        }
        local_130 = (ushort *)CONCAT71(local_130._1_7_,1);
        FUN_1447439e4(puVar14);
        if (param_5 != 0) {
          if (puVar14 != (ushort *)0x0) {
            LOCK();
            *(int *)(puVar14 + 4) = *(int *)(puVar14 + 4) + 1;
            UNLOCK();
          }
          local_130 = puVar14;
          FUN_1432da764(param_5,&local_130);
        }
        puVar12 = local_118;
        if (local_f8 != (undefined1 *)0x0) {
          puVar12 = local_f8;
        }
        FUN_144717c65(puVar12,local_f0 & 0xffffffff);
        if (local_f8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143e1c05d;
      }
      local_130 = (ushort *)*param_6;
      local_128 = (undefined1 *)*param_7;
      FUN_148964cc6(local_118,param_3,param_1);
      FUN_143e239ca(local_118,&local_130);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  *param_2 = 0;
LAB_143e1c05d:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1c510 FUN_143e1c510 body=2923 status=ok
// SIG undefined FUN_143e1c510(void)

undefined8 * FUN_143e1c510(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined1 auStack_2e8 [32];
  ushort *local_2c8;
  ushort *local_2c0;
  ushort local_2b4 [4];
  undefined2 local_2ac;
  undefined2 local_2aa;
  undefined2 local_2a8;
  undefined1 local_2a3;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined1 local_298 [64];
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [32];
  undefined1 *local_228;
  ulonglong local_220;
  short local_218;
  short local_216;
  short local_214;
  uint local_200 [8];
  int local_1e0;
  int local_1dc;
  longlong local_1b0;
  undefined2 local_150 [16];
  undefined2 *local_130;
  undefined8 local_128;
  longlong local_e8;
  undefined1 local_78 [16];
  undefined2 *local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(short *)(param_3 + 0x24) == -1) {
    *param_2 = 0;
    goto LAB_143e1c547;
  }
  lVar8 = FUN_14009d2a0();
  uVar2 = *(undefined2 *)(param_3 + 0x24);
  FUN_147545612(lVar8,local_150,param_3 + 0x24);
  local_2ac = uVar2;
  if (*(char *)(param_3 + 0x10) == '\x01') {
    local_2b4[2] = *(undefined2 *)(lVar8 + 0x48);
    local_2b4[3] = *(undefined2 *)(lVar8 + 0x5a);
    local_2a8 = *(undefined2 *)(lVar8 + 0xf4);
    local_2aa = local_150[0];
    local_2a3 = 0;
    local_2a0 = 0x6ff;
    local_29c = 0;
    local_2b4[0] = *(ushort *)(param_3 + 0x26);
    local_2c8 = local_2b4;
    local_2b4[1] = *(undefined2 *)(param_1 + -2);
    local_2c0 = local_2b4 + 2;
    FUN_14895ad20(local_2b4 + 2,&local_218);
    local_258 = 0;
    local_250 = 0x400000000;
    local_228 = (undefined1 *)0x0;
    local_220 = 0x400000000;
    if (((local_218 == -1) || (local_216 == -1)) || (local_214 == -1)) goto LAB_143e1c870;
    lVar4 = *(longlong *)(param_1 + -0x40);
    lVar8 = lVar4 + 0x28;
    cVar6 = FUN_14896517e(&local_218,lVar8);
    if (cVar6 == '\0') goto LAB_143e1c870;
    if ((*(int *)(lVar4 + 0x29c) == 0) && (*(char *)(lVar4 + 0x298) != '\0')) {
      local_130 = (undefined2 *)0x0;
      local_128 = 0x400000000;
      FUN_148965228(&local_218,local_298,local_150);
      puVar16 = (undefined2 *)0x0;
      if ((int)local_128 != 0) {
        puVar16 = local_150;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar1;
      if (puVar9 != (uint *)0x0) goto LAB_143e1cc34;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143e232d2);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar1 = puVar10;
        FUN_140217a48(puVar1);
        puVar9 = (uint *)*puVar1;
LAB_143e1cc34:
        puVar22 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar22 + 0x36);
        uVar14 = puVar9[0x12];
        if (puVar18 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar7 = *puVar9;
          *puVar9 = *puVar9 + uVar14 + 1;
          UNLOCK();
          if ((uVar7 ^ uVar14) != 0xffffffff) break;
          puVar9 = (uint *)*puVar1;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar1 = puVar9;
          puVar22 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar22 + 0x36);
          uVar14 = 0;
          if (puVar18 <= puVar9 + 0x4000) {
            uVar14 = 1;
            goto LAB_143e1ccb6;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_143e1ccb6:
      *(uint **)(puVar9 + 0x10) = puVar18;
      puVar9[0x12] = uVar14;
      FUN_1447247dc(puVar22,puVar16);
      *puVar22 = &PTR_FUN_14b425900;
      FUN_143e23d16(puVar22 + 0x15,lVar8,&local_218);
      FUN_143e23c6e(puVar22 + 0x30,param_3,param_4);
      uVar14 = *(uint *)(puVar22 + 0x17);
      if (((ulonglong)uVar14 & 0xff) == 0xff) {
        uVar7 = uVar14 >> 10 & 3;
        iVar21 = 0;
        if ((uVar14 >> 9 & 1) == 0 || uVar7 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
          iVar21 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar21 = (uVar14 >> 7 & 2 | uVar14 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar14 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
      }
      puVar22[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar22[9] = puVar22;
      puVar22[10] = puVar22;
      lVar8 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar8 == 0) {
        uVar5 = 1;
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar8 + 0x30);
      }
      puVar22[0xf] = uVar11;
      puVar22[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar22 + 0x1c) = iVar21;
      *param_2 = puVar22;
      uVar11 = 0;
      if (puVar22 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
        UNLOCK();
        uVar11 = *param_2;
      }
      local_78[0] = 1;
      FUN_1447439e4(uVar11);
      goto LAB_143e1cfb8;
    }
    FUN_143e23c6e(local_78,param_3,param_4);
    FUN_143e23d16(local_150,lVar8,&local_218);
    FUN_143e23e40(local_150,local_78);
LAB_143e1c92e:
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
LAB_143e1c94b:
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_2b4[3] = *(undefined2 *)(lVar8 + 0x5a);
    local_2a8 = *(undefined2 *)(lVar8 + 0xf4);
    local_2aa = local_150[0];
    local_2a3 = 0;
    local_2a0 = 0x6ff;
    local_29c = 0;
    local_2b4[0] = *(ushort *)(param_3 + 0x26);
    local_2b4[1] = *(undefined2 *)(param_1 + -2);
    FUN_14896540c(&local_218);
    lVar8 = 0;
    do {
      iVar21 = local_1e0;
      uVar3 = *(ushort *)((longlong)local_2b4 + lVar8);
      iVar13 = uVar3 + 1;
      iVar20 = iVar13 - local_1e0;
      if (iVar20 != 0 && local_1e0 <= iVar13) {
        if (local_1e0 == 0) {
LAB_143e1c788:
          if (local_1dc <= (int)(uint)uVar3) {
            local_1dc = 0x100;
            FUN_14497ddce(local_200,local_1e0);
            iVar13 = local_1e0 + iVar20;
          }
          iVar17 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar17 = iVar13;
          }
          local_1e0 = iVar13;
          iVar13 = local_1e0;
          if (iVar13 % 0x20 != 0) {
            bVar12 = -(char)(iVar13 % 0x20);
            local_200[iVar17 >> 5] = (local_200[iVar17 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
            iVar13 = local_1e0;
          }
        }
        else {
          iVar17 = local_1e0 + 0x1e;
          if (-1 < local_1e0 + -1) {
            iVar17 = local_1e0 + -1;
          }
          if (iVar17 >> 5 != (uint)(uVar3 >> 5)) goto LAB_143e1c788;
        }
        local_1e0 = iVar13;
        FUN_1447c45ca(local_200,iVar21,iVar20,0);
      }
      local_200[uVar3 >> 5] = local_200[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
      lVar8 = lVar8 + 2;
    } while (lVar8 != 4);
    local_258 = 0;
    local_250 = 0x400000000;
    local_228 = (undefined1 *)0x0;
    local_220 = 0x400000000;
    if ((local_216 != -1) && (local_214 != -1)) {
      lVar4 = *(longlong *)(param_1 + -0x40);
      lVar8 = lVar4 + 0x28;
      cVar6 = FUN_1489654ce(&local_218,lVar8);
      if (cVar6 != '\0') {
        if ((*(int *)(lVar4 + 0x29c) != 0) || (*(char *)(lVar4 + 0x298) == '\0')) {
          FUN_143e23c6e(local_78,param_3,param_4);
          FUN_143e246a6(local_150,lVar8,&local_218);
          FUN_143e247d0(local_150,local_78);
          goto LAB_143e1c92e;
        }
        local_130 = (undefined2 *)0x0;
        local_128 = 0x400000000;
        FUN_148965540(&local_218,local_298,local_150);
        puVar16 = (undefined2 *)0x0;
        if ((int)local_128 != 0) {
          puVar16 = local_150;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar1;
        if (puVar9 != (uint *)0x0) goto LAB_143e1ca4a;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143e232d2);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar1 = puVar10;
          FUN_140217a48(puVar1);
          puVar9 = (uint *)*puVar1;
LAB_143e1ca4a:
          puVar22 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar22 + 0x36);
          uVar14 = puVar9[0x12];
          if (puVar18 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar7 = *puVar9;
            *puVar9 = *puVar9 + uVar14 + 1;
            UNLOCK();
            if ((uVar7 ^ uVar14) != 0xffffffff) break;
            puVar9 = (uint *)*puVar1;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar1 = puVar9;
            puVar22 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar22 + 0x36);
            uVar14 = 0;
            if (puVar18 <= puVar9 + 0x4000) {
              uVar14 = 1;
              goto LAB_143e1cacc;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143e1cacc:
        *(uint **)(puVar9 + 0x10) = puVar18;
        puVar9[0x12] = uVar14;
        FUN_1447247dc(puVar22,puVar16);
        *puVar22 = &PTR_FUN_14b425910;
        FUN_143e246a6(puVar22 + 0x15,lVar8,&local_218);
        FUN_143e23c6e(puVar22 + 0x30,param_3,param_4);
        uVar14 = *(uint *)(puVar22 + 0x17);
        if (((ulonglong)uVar14 & 0xff) == 0xff) {
          uVar7 = uVar14 >> 10 & 3;
          iVar21 = 0;
          if ((uVar14 >> 9 & 1) == 0 || uVar7 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
            iVar21 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar21 = (uVar14 >> 7 & 2 | uVar14 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar14 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
        }
        puVar22[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar22[9] = puVar22;
        puVar22[10] = puVar22;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar5 = 1;
          if ((char)uVar19 != '\x06') {
            uVar5 = uVar19;
          }
          uVar19 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar8 + 0x30);
        }
        puVar22[0xf] = uVar11;
        puVar22[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar22 + 0x1c) = iVar21;
        *param_2 = puVar22;
        uVar11 = 0;
        if (puVar22 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
          uVar11 = *param_2;
        }
        local_78[0] = 1;
        FUN_1447439e4(uVar11);
LAB_143e1cfb8:
        puVar16 = local_150;
        if (local_130 != (undefined2 *)0x0) {
          puVar16 = local_130;
        }
        FUN_144717c65(puVar16,(int)local_128);
        local_68 = local_130;
        goto LAB_143e1c94b;
      }
    }
LAB_143e1c870:
    *param_2 = 0;
  }
  puVar15 = local_228;
  if (local_228 == (undefined1 *)0x0) {
    puVar15 = local_248;
  }
  FUN_144717c65(puVar15,local_220 & 0xffffffff);
  if (local_228 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(local_298);
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
LAB_143e1c547:
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1d0b4 FUN_143e1d0b4 body=440 status=ok
// SIG undefined FUN_143e1d0b4(void)

int * FUN_143e1d0b4(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  
  if ((*(longlong **)(param_1 + 0x298) == (longlong *)0x0) ||
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x298) + 0x2e8))(), lVar2 == 0)) {
LAB_143e1d230:
    fVar9 = *(float *)(param_1 + 0x2a8) + 0.5 + -0.5;
    if (0.99999994 <= fVar9) {
      fVar9 = 0.99999994;
    }
    *param_2 = *(int *)(param_1 + 0x2a0) + *(int *)(param_1 + 0x2a4);
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x110);
    iVar3 = (int)((ulonglong)uVar1 >> 0x20);
    if ((char)uVar1 == '\0') {
      iVar3 = iVar3 + -1;
    }
    else if (((uint)uVar1 & 0xff) == 2) goto LAB_143e1d230;
    lVar4 = *(longlong *)(lVar2 + 0x118);
    lVar2 = *(longlong *)(lVar2 + 0x120);
    if (lVar4 == lVar2) {
      fVar9 = 0.0;
    }
    else {
      lVar5 = (lVar4 >> 0x20) * (longlong)(int)lVar2;
      lVar4 = (longlong)(int)lVar4 * (lVar2 >> 0x20);
      lVar2 = (lVar5 * iVar3) / lVar4;
      dVar6 = (double)((ulonglong)(double)lVar5 & 0x8000000000000000) / (double)lVar4 +
              (((double)lVar5 * (double)iVar3) / (double)lVar4 - (double)lVar2);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar6;
      auVar8 = roundpd(auVar8,auVar8,1);
      fVar7 = (float)(dVar6 - auVar8._0_8_);
      lVar2 = (longlong)auVar8._0_8_ + lVar2;
      fVar9 = fVar7;
      if (0.99999994 <= fVar7) {
        fVar9 = 0.99999994;
      }
      if (0x7ffffffe < lVar2) {
        lVar2 = 0x7fffffff;
      }
      lVar4 = -0x80000000;
      if (-0x80000000 < lVar2) {
        lVar4 = lVar2;
      }
      iVar3 = (int)lVar4;
      fVar9 = (float)(~-(uint)(0.0 < fVar7) & (uint)fVar7 | (uint)fVar9 & -(uint)(0.0 < fVar7)) +
              0.5 + -0.5;
      if (0.99999994 <= fVar9) {
        fVar9 = 0.99999994;
      }
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
    }
    *param_2 = iVar3;
  }
  param_2[1] = (int)fVar9;
  return param_2;
}



// FUNCTION 143e1d26c FUN_143e1d26c body=69 status=ok
// SIG undefined FUN_143e1d26c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e1d26c(void)

{
  _DAT_14cb8a678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e1d2ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8a680,1);
  return;
}



// FUNCTION 143e1d30a FUN_143e1d30a body=66 status=ok
// SIG undefined FUN_143e1d30a(void)

void FUN_143e1d30a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar1 = (longlong)*(int *)(param_1 + 0x28) << 3;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
      lVar2 = lVar2 + 8;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143e1d3f0 FUN_143e1d3f0 body=69 status=ok
// SIG undefined FUN_143e1d3f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e1d3f0(void)

{
  _DAT_14cb8a700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e1d432. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8a708,1);
  return;
}



// FUNCTION 143e1d438 FUN_143e1d438 body=2396 status=ok
// SIG undefined FUN_143e1d438(void)

void FUN_143e1d438(longlong param_1,short param_2,int param_3,longlong param_4,short param_5)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  wchar_t wVar4;
  longlong lVar5;
  char cVar6;
  uint *puVar7;
  int *piVar8;
  size_t sVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  int iVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  short *psVar27;
  ulonglong uVar28;
  undefined1 auStack_198 [46];
  short local_16a;
  undefined8 local_168;
  longlong local_160;
  int local_154;
  uint *local_150;
  ulonglong local_148;
  longlong local_140;
  uint local_134;
  longlong local_130;
  wchar_t *local_128;
  int local_120;
  undefined8 local_118;
  int local_110;
  short *local_108;
  ulonglong uStack_100;
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_168 = (longlong *)(param_1 + 8);
  local_108 = (short *)0x0;
  uStack_100 = 0;
  FUN_14895db00(local_168,&local_108);
  FUN_148402e68(local_108,uStack_100 & 0xffffffff);
  local_16a = param_2;
  local_160 = param_1;
  local_140 = param_4;
  if (param_5 != -1) {
    if ((longlong)(int)uStack_100 != 0) {
      psVar1 = local_108 + (int)uStack_100;
      puVar7 = (uint *)(param_1 + 0x40);
      local_148 = (ulonglong)param_3;
      plVar25 = local_168;
      psVar27 = local_108;
LAB_143e1d4fd:
      sVar3 = *psVar27;
      if ((sVar3 == param_5 || param_5 < param_2) &&
         (*(int *)(local_160 + 0x10) != *(int *)(local_160 + 0x3c))) {
        puVar14 = *(uint **)(local_160 + 0x48);
        if (*(uint **)(local_160 + 0x48) == (uint *)0x0) {
          puVar14 = puVar7;
        }
        uVar21 = *(int *)(local_160 + 0x50) - 1U & (int)sVar3;
        uVar24 = puVar14[uVar21];
        if (uVar24 != 0xffffffff) {
          do {
            psVar2 = (short *)(*plVar25 + (longlong)(int)uVar24 * 0x18);
            if (*psVar2 == sVar3) {
              if ((((longlong *)(psVar2 + 4) != (longlong *)0x0 && psVar2 != (short *)0x0) &&
                  (param_4 != 0)) && (lVar26 = *(longlong *)(psVar2 + 4), lVar26 != 0)) {
                piVar8 = *(int **)(lVar26 + 8);
                if (piVar8 == (int *)0x0) {
                  piVar8 = &DAT_14c9485f0;
                }
                if (((*piVar8 == 0) || (iVar18 = piVar8[1], iVar18 == 0)) ||
                   (*piVar8 == DAT_14c948000)) {
LAB_143e1d72c:
                  local_110 = DAT_14c948620;
                  local_118 = DAT_14c948618;
                }
                else {
                  if ((iVar18 < 2) && (piVar8[9] < 1)) {
                    piVar8 = piVar8 + 2;
                  }
                  else {
                    piVar8 = *(int **)(piVar8 + 6);
                  }
                  if (((0 < param_3) && (iVar18 == 1)) || (iVar18 <= param_3)) goto LAB_143e1d72c;
                  local_110 = piVar8[local_148 * 3 + 2];
                  local_118 = *(undefined8 *)(piVar8 + local_148 * 3);
                }
                local_150 = puVar7;
                FUN_1408226d0(&local_118,&local_128,CONCAT71((uint7)(uint3)(uVar21 >> 8),1));
                pwVar16 = L"";
                if (local_120 != 0) {
                  pwVar16 = local_128;
                }
                local_60 = (undefined1 *)0x0;
                if (pwVar16 == (wchar_t *)0x0) {
                  local_58 = (undefined1 *)0x0;
                  local_50 = 0;
                  puVar7 = local_150;
                  plVar25 = local_168;
                  goto LAB_143e1d87a;
                }
                local_154 = param_3;
                sVar9 = wcslen(pwVar16);
                local_e4 = 0;
                local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
                uVar10 = sVar9 & 0xffffffff;
                pwVar20 = pwVar16;
                goto LAB_143e1d687;
              }
              break;
            }
            uVar24 = *(uint *)(psVar2 + 8);
          } while (uVar24 != 0xffffffff);
        }
      }
      goto LAB_143e1d88f;
    }
LAB_143e1d89c:
    if (-1 < param_5) goto LAB_143e1d954;
  }
  local_150 = (uint *)(local_160 + 0x68);
  uVar24 = *(uint *)(local_160 + 0x80);
  uVar10 = (ulonglong)uVar24;
  if (uVar24 == 0) {
    uVar28 = 1;
    uVar17 = 0;
    local_168 = (longlong *)((ulonglong)local_168._4_4_ << 0x20);
    uVar22 = 0;
  }
  else {
    puVar7 = *(uint **)(local_160 + 0x78);
    if (*(uint **)(local_160 + 0x78) == (uint *)0x0) {
      puVar7 = local_150;
    }
    uVar21 = *puVar7;
    if (uVar21 == 0) {
      iVar18 = uVar24 + 0x1e;
      if (-1 < (int)(uVar24 - 1)) {
        iVar18 = uVar24 - 1;
      }
      uVar17 = 0;
      uVar22 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar22 = uVar17;
      }
      local_168 = (longlong *)((ulonglong)local_168 & 0xffffffff00000000);
      do {
        if (uVar22 == uVar17) goto LAB_143e1d954;
        local_168 = (longlong *)CONCAT44(local_168._4_4_,(int)local_168 + 0x20);
        uVar21 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar17 = 0;
      local_168 = (longlong *)((ulonglong)local_168._4_4_ << 0x20);
    }
    uVar28 = (ulonglong)(-uVar21 & uVar21);
    uVar22 = uVar28 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar21 = ((int)local_168 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    uVar22 = (ulonglong)uVar21;
    if ((int)uVar24 <= (int)uVar21) {
      uVar22 = uVar10;
    }
  }
  local_148 = uVar10;
  if ((uint)uVar22 != uVar24) {
    local_130 = (longlong)param_3;
    uVar24 = 0xffffffff;
    uVar23 = uVar10;
    lVar26 = local_160;
    local_154 = param_3;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar26 + 0x58) + 0x10 + (longlong)(int)uVar22 * 0x20);
      if (((lVar5 != 0) && (param_4 != 0)) && (*(short *)(lVar5 + 0x2a) < param_2)) {
        piVar8 = *(int **)(lVar5 + 8);
        if (piVar8 == (int *)0x0) {
          piVar8 = &DAT_14c9485f0;
        }
        if (((*piVar8 == 0) || (iVar18 = piVar8[1], iVar18 == 0)) || (*piVar8 == DAT_14c948000)) {
LAB_143e1db64:
          local_110 = DAT_14c948620;
          local_118 = DAT_14c948618;
        }
        else {
          if ((iVar18 < 2) && (piVar8[9] < 1)) {
            piVar8 = piVar8 + 2;
          }
          else {
            piVar8 = *(int **)(piVar8 + 6);
          }
          if (((0 < param_3) && (iVar18 == 1)) || (iVar18 <= param_3)) goto LAB_143e1db64;
          local_110 = piVar8[local_130 * 3 + 2];
          local_118 = *(undefined8 *)(piVar8 + local_130 * 3);
        }
        local_134 = uVar24;
        FUN_1408226d0(&local_118,&local_128,CONCAT71((int7)(uVar23 >> 8),1));
        pwVar16 = L"";
        if (local_120 != 0) {
          pwVar16 = local_128;
        }
        local_60 = (undefined1 *)0x0;
        if (pwVar16 == (wchar_t *)0x0) {
          local_58 = (undefined1 *)0x0;
          local_50 = 0;
          lVar26 = local_160;
        }
        else {
          sVar9 = wcslen(pwVar16);
          local_e4 = 0;
          local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
          uVar10 = sVar9 & 0xffffffff;
          pwVar20 = pwVar16;
          do {
            iVar18 = (int)uVar10;
            if (iVar18 < 1) {
LAB_143e1db9b:
              local_50 = local_e4;
              uVar24 = local_e4 + 1;
              if (uVar24 < 0x81) goto LAB_143e1dbb7;
              FUN_1446efa72(&local_60,0,uVar24,1);
              local_f0 = local_60;
              goto LAB_143e1dbb9;
            }
            wVar4 = *pwVar20;
            uVar24 = (uint)(ushort)wVar4;
            pwVar19 = pwVar20 + 1;
            uVar21 = iVar18 - 1;
            if ((wVar4 & 0xfc00U) == 0xd800) {
              if (iVar18 == 1) {
                cVar6 = FUN_140024707(uVar24,&local_e4,&local_f0);
                if (cVar6 != '\0') goto LAB_143e1db9b;
                break;
              }
              if (((ushort)*pwVar19 & 0xfc00) == 0xdc00) {
                uVar24 = (uint)(ushort)wVar4 * 0x400 + (uint)(ushort)*pwVar19 + 0xfca02400;
                pwVar19 = pwVar20 + 2;
                uVar21 = iVar18 - 2;
              }
            }
            cVar6 = FUN_140024707(uVar24,&local_e4,&local_f0);
            uVar10 = (ulonglong)uVar21;
            pwVar20 = pwVar19;
          } while (cVar6 != '\0');
          local_50 = 0xffffffff;
          uVar24 = 0;
LAB_143e1dbb7:
          local_f0 = (undefined1 *)0x0;
LAB_143e1dbb9:
          if (local_f0 == (undefined1 *)0x0) {
            local_f0 = local_e0;
          }
          iVar18 = (int)sVar9 + 1;
          local_e4 = uVar24;
          local_58 = local_f0;
          do {
            if (iVar18 < 1) break;
            wVar4 = *pwVar16;
            uVar24 = (uint)(ushort)wVar4;
            pwVar20 = pwVar16 + 1;
            iVar15 = iVar18 + -1;
            if ((wVar4 & 0xfc00U) == 0xd800) {
              if (iVar18 == 1) {
                FUN_1400247af(uVar24,&local_f0,&local_e4);
                break;
              }
              if (((ushort)*pwVar20 & 0xfc00) == 0xdc00) {
                uVar24 = (uint)(ushort)wVar4 * 0x400 + (uint)(ushort)*pwVar20 + 0xfca02400;
                pwVar20 = pwVar16 + 2;
                iVar15 = iVar18 + -2;
              }
            }
            iVar18 = iVar15;
            cVar6 = FUN_1400247af(uVar24,&local_f0,&local_e4);
            pwVar16 = pwVar20;
          } while (cVar6 != '\0');
          param_4 = local_140;
          param_3 = local_154;
          lVar26 = local_160;
          if (local_60 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_128 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar10 = (ulonglong)*(uint *)(lVar26 + 0x80);
        uVar24 = local_134;
        param_2 = local_16a;
      }
      uVar24 = uVar24 & ~(uint)uVar28;
      puVar7 = *(uint **)(lVar26 + 0x78);
      if (*(uint **)(lVar26 + 0x78) == (uint *)0x0) {
        puVar7 = local_150;
      }
      iVar15 = (int)uVar17;
      uVar22 = (ulonglong)iVar15;
      uVar21 = puVar7[uVar22] & uVar24;
      iVar18 = (int)uVar10;
      uVar23 = uVar22;
      if (uVar21 == 0) {
        iVar11 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar11 = iVar18 + -1;
        }
        iVar11 = iVar11 >> 5;
        local_168 = (longlong *)CONCAT44(local_168._4_4_,(int)local_168 + 0x20);
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar15 < iVar11) {
          uVar13 = iVar12 + 1;
          uVar23 = 0;
          do {
            uVar21 = puVar7[uVar22 + uVar23 + 1];
            if (uVar21 != 0) {
              uVar17 = (ulonglong)(iVar15 + (int)uVar23 + 1);
              uVar24 = 0xffffffff;
              goto LAB_143e1dd35;
            }
            local_168 = (longlong *)CONCAT44(local_168._4_4_,(int)local_168 + 0x20);
            uVar23 = uVar23 + 1;
          } while ((longlong)iVar12 - uVar22 != uVar23);
          uVar24 = 0xffffffff;
        }
        else {
          uVar23 = uVar22 + 1;
          uVar13 = (uint)uVar23;
        }
        uVar17 = (ulonglong)uVar13;
        uVar22 = uVar10;
        param_4 = local_140;
        lVar26 = local_160;
        param_2 = local_16a;
      }
      else {
LAB_143e1dd35:
        uVar28 = (ulonglong)(-uVar21 & uVar21);
        uVar22 = uVar28 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar21 = ((int)local_168 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        uVar22 = (ulonglong)uVar21;
        if (iVar18 <= (int)uVar21) {
          uVar22 = uVar10;
        }
      }
    } while ((int)uVar22 != (int)local_148);
  }
LAB_143e1d954:
  if (local_108 != (short *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    cVar6 = FUN_140024707(uVar24,&local_e4,&local_f0);
    uVar10 = (ulonglong)uVar21;
    pwVar20 = pwVar19;
    if (cVar6 == '\0') break;
LAB_143e1d687:
    iVar18 = (int)uVar10;
    if (iVar18 < 1) {
LAB_143e1d768:
      local_50 = local_e4;
      uVar24 = local_e4 + 1;
      if (uVar24 < 0x81) goto LAB_143e1d784;
      FUN_1446efa72(&local_60,0,uVar24,1);
      local_f0 = local_60;
      goto LAB_143e1d786;
    }
    wVar4 = *pwVar20;
    uVar24 = (uint)(ushort)wVar4;
    pwVar19 = pwVar20 + 1;
    uVar21 = iVar18 - 1;
    if ((wVar4 & 0xfc00U) == 0xd800) {
      if (iVar18 == 1) {
        cVar6 = FUN_140024707(uVar24,&local_e4,&local_f0);
        if (cVar6 != '\0') goto LAB_143e1d768;
        break;
      }
      if (((ushort)*pwVar19 & 0xfc00) == 0xdc00) {
        uVar24 = (uint)(ushort)wVar4 * 0x400 + (uint)(ushort)*pwVar19 + 0xfca02400;
        pwVar19 = pwVar20 + 2;
        uVar21 = iVar18 - 2;
      }
    }
  }
  local_50 = 0xffffffff;
  uVar24 = 0;
LAB_143e1d784:
  local_f0 = (undefined1 *)0x0;
LAB_143e1d786:
  if (local_f0 == (undefined1 *)0x0) {
    local_f0 = local_e0;
  }
  iVar18 = (int)sVar9 + 1;
  local_e4 = uVar24;
  local_58 = local_f0;
  do {
    if (iVar18 < 1) break;
    wVar4 = *pwVar16;
    uVar24 = (uint)(ushort)wVar4;
    pwVar20 = pwVar16 + 1;
    iVar15 = iVar18 + -1;
    if ((wVar4 & 0xfc00U) == 0xd800) {
      if (iVar18 == 1) {
        FUN_1400247af(uVar24,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar20 & 0xfc00) == 0xdc00) {
        uVar24 = (uint)(ushort)wVar4 * 0x400 + (uint)(ushort)*pwVar20 + 0xfca02400;
        pwVar20 = pwVar16 + 2;
        iVar15 = iVar18 + -2;
      }
    }
    iVar18 = iVar15;
    pwVar16 = pwVar20;
    cVar6 = FUN_1400247af(uVar24,&local_f0,&local_e4);
  } while (cVar6 != '\0');
  param_4 = local_140;
  puVar7 = local_150;
  param_3 = local_154;
  plVar25 = local_168;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_143e1d87a:
  param_2 = local_16a;
  if (local_128 != (wchar_t *)0x0) {
    FUN_1400020a8();
    param_2 = local_16a;
  }
LAB_143e1d88f:
  psVar27 = psVar27 + 1;
  if (psVar27 == psVar1) goto LAB_143e1d89c;
  goto LAB_143e1d4fd;
}



// FUNCTION 143e1dd96 FUN_143e1dd96 body=1743 status=ok
// SIG undefined FUN_143e1dd96(void)

uint FUN_143e1dd96(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_f8 [46];
  ushort local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  longlong *plVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar16 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar12 = (int)param_1[0xc] - *(int *)((longlong)param_1 + 0x8c);
  local_ca = (ushort)param_3;
  plVar10 = param_1;
  local_c0 = param_2;
  if (uVar12 != 0) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar12);
    }
    FUN_14896682c(&local_98,uVar12);
    uVar5 = 1;
    if (3 < uVar12) {
      uVar12 = (uVar12 | 1) + 0xe;
      iVar13 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      uVar5 = 1 << ((byte)iVar13 & 0x1f);
    }
    plVar10 = (longlong *)(ulonglong)local_50;
    param_3 = (ulonglong)local_ca;
    if ((local_50 == 0) || ((int)local_50 < (int)uVar5)) {
      plVar10 = &local_98;
      local_50 = uVar5;
      FUN_1406feca4();
      param_3 = (ulonglong)local_ca;
    }
  }
  puVar1 = (uint *)(param_1 + 0xd);
  uVar12 = *(uint *)(param_1 + 0x10);
  uVar5 = uVar12;
  if (uVar12 == 0) {
    uVar19 = 1;
    puVar6 = (uint *)0x0;
    iVar13 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0xf];
    if ((uint *)param_1[0xf] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar8 = *puVar6;
    if (uVar8 == 0) {
      iVar13 = uVar12 + 0x1e;
      if (-1 < (int)(uVar12 - 1)) {
        iVar13 = uVar12 - 1;
      }
      uVar16 = 0;
      uVar19 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar19 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar19 == uVar16) goto LAB_143e1dea5;
        iVar13 = iVar13 + 0x20;
        uVar8 = puVar6[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar19 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar19 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar8 = (uint)lVar17 ^ 0x3f;
    plVar10 = (longlong *)(ulonglong)uVar8;
    uVar8 = (iVar13 - uVar8) + 0x3e;
    if ((int)uVar12 <= (int)uVar8) {
      uVar8 = uVar12;
    }
    puVar6 = (uint *)(ulonglong)uVar8;
  }
  if ((uint)puVar6 == uVar12) {
LAB_143e1dea5:
    local_c8 = (uint)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
  }
  else {
    uVar8 = 0xffffffff;
    local_c8 = (uint)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
    do {
      local_b8 = *(longlong *)(param_1[0xb] + 0x10 + (longlong)(int)puVar6 * 0x20);
      if ((local_b8 != 0) && (*(byte *)(local_b8 + 0x29) != 0)) {
        sVar7 = *(short *)(local_b8 + 0x2a);
        if (*(byte *)(local_b8 + 0x29) < 3 && (short)param_3 <= sVar7) {
          if ((int)uStack_90 != local_64) {
            puVar11 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar11 = local_60;
            }
            for (iVar15 = *(int *)(puVar11 + (ulonglong)(local_50 - 1 & (int)sVar7) * 4);
                iVar15 != -1; iVar15 = *(int *)(local_98 + (longlong)iVar15 * 0x18 + 0x10)) {
              if (*(short *)(local_98 + (longlong)iVar15 * 0x18) == sVar7) {
                local_c8 = 0;
                goto LAB_143e1e01c;
              }
            }
          }
          local_b0 = local_b8 + 0x2a;
          local_a8 = &local_b8;
          FUN_1489669c8(&local_98,local_9c,&local_b0);
          param_3 = (ulonglong)local_ca;
          uVar5 = *(uint *)(param_1 + 0x10);
        }
      }
LAB_143e1e01c:
      uVar8 = uVar8 & ~(uint)uVar19;
      puVar6 = (uint *)param_1[0xf];
      if ((uint *)param_1[0xf] == (uint *)0x0) {
        puVar6 = puVar1;
      }
      iVar15 = (int)uVar16;
      lVar17 = (longlong)iVar15;
      uVar14 = puVar6[lVar17] & uVar8;
      if (uVar14 == 0) {
        iVar9 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar9 = uVar5 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar4 = iVar9;
        if (iVar9 < iVar15) {
          iVar4 = iVar15;
        }
        if (iVar15 < iVar9) {
          lVar18 = 0;
          do {
            uVar14 = puVar6[lVar17 + lVar18 + 1];
            if (uVar14 != 0) {
              uVar16 = (ulonglong)(iVar15 + (int)lVar18 + 1);
              uVar8 = 0xffffffff;
              goto LAB_143e1e08a;
            }
            iVar13 = iVar13 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar4 - lVar17 != lVar18);
          uVar8 = 0xffffffff;
          iVar15 = iVar4;
        }
        puVar6 = (uint *)(ulonglong)uVar5;
        uVar16 = (ulonglong)(iVar15 + 1);
        param_3 = (ulonglong)local_ca;
      }
      else {
LAB_143e1e08a:
        uVar19 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar19 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar14 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        puVar6 = (uint *)(ulonglong)uVar14;
        if ((int)uVar5 <= (int)uVar14) {
          puVar6 = (uint *)(ulonglong)uVar5;
        }
      }
    } while ((uint)puVar6 != uVar12);
  }
  if (uVar5 == 0) {
    uVar19 = 1;
    uVar16 = 0;
    iVar13 = 0;
    uVar12 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0xf];
    if ((uint *)param_1[0xf] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar13 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar13 = uVar5 - 1;
      }
      uVar16 = 0;
      uVar19 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar19 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar19 == uVar16) goto LAB_143e1e0e3;
        iVar13 = iVar13 + 0x20;
        uVar12 = puVar6[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar19 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar19 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar12 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar12) {
      uVar12 = uVar5;
    }
  }
  if (uVar12 != uVar5) {
    uVar8 = 0xffffffff;
    param_3 = param_3 & 0xffffffff;
    do {
      local_b8 = *(longlong *)(param_1[0xb] + 0x10 + (longlong)(int)uVar12 * 0x20);
      if ((local_b8 != 0) && (cVar3 = *(char *)(local_b8 + 0x29), cVar3 != '\0')) {
        if (cVar3 == '\x02') {
          if (*(short *)(local_b8 + 0x2a) < (short)local_ca) {
            *(undefined1 *)(local_b8 + 0x29) = 4;
            *(undefined2 *)(local_b8 + 0x2a) = 0xffff;
            sVar7 = -1;
LAB_143e1e1ab:
            uVar12 = (uint)param_3;
            if (sVar7 < (short)local_ca) {
              if ((uVar12 & 0xffff) == 0x7fff) {
                param_3 = CONCAT62((int6)(param_3 >> 0x10),0x7fff);
              }
              else {
                puVar11 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar11 = local_60;
                }
                uVar14 = (uint)(short)param_3;
                do {
                  local_c4 = uVar12;
                  if ((int)uStack_90 == local_64) {
LAB_143e1e2f3:
                    *(short *)(local_b8 + 0x2a) = (short)uVar14;
                    *(undefined1 *)(local_b8 + 0x29) = 2;
                    FUN_148966b5e(local_c0,&local_b8);
                    local_b0 = local_b8 + 0x2a;
                    local_a8 = &local_b8;
                    FUN_1489669c8(&local_98,local_9c,&local_b0);
                    param_3 = (ulonglong)(uVar14 + 1);
                    break;
                  }
                  iVar15 = *(int *)(puVar11 + (ulonglong)(uVar14 & local_50 - 1) * 4);
                  while( true ) {
                    if (iVar15 == -1) goto LAB_143e1e2f3;
                    if (*(short *)(local_98 + (longlong)iVar15 * 0x18) == (short)uVar14) break;
                    iVar15 = *(int *)(local_98 + (longlong)iVar15 * 0x18 + 0x10);
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 != 0x7fff);
              }
            }
            else {
              if ((int)uStack_90 != local_64) {
                puVar11 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar11 = local_60;
                }
                for (iVar15 = *(int *)(puVar11 + (ulonglong)(local_50 - 1 & (int)sVar7) * 4);
                    iVar15 != -1; iVar15 = *(int *)(local_98 + (longlong)iVar15 * 0x18 + 0x10)) {
                  if (*(short *)(local_98 + (longlong)iVar15 * 0x18) == sVar7) {
                    local_c8 = 0;
                    goto LAB_143e1e342;
                  }
                }
              }
              local_b0 = local_b8 + 0x2a;
              local_a8 = &local_b8;
              FUN_1489669c8(&local_98,local_9c,&local_b0);
              *(undefined1 *)(local_b8 + 0x29) = 2;
              FUN_148966b5e(local_c0,&local_b8);
            }
          }
        }
        else if ((byte)(cVar3 - 3U) < 2) {
          sVar7 = *(short *)(local_b8 + 0x2a);
          goto LAB_143e1e1ab;
        }
      }
LAB_143e1e342:
      uVar8 = uVar8 & ~(uint)uVar19;
      puVar6 = (uint *)param_1[0xf];
      if ((uint *)param_1[0xf] == (uint *)0x0) {
        puVar6 = puVar1;
      }
      uVar14 = *(uint *)(param_1 + 0x10);
      iVar15 = (int)uVar16;
      lVar17 = (longlong)iVar15;
      uVar12 = puVar6[lVar17] & uVar8;
      if (uVar12 == 0) {
        iVar9 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar9 = uVar14 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar4 = iVar9;
        if (iVar9 < iVar15) {
          iVar4 = iVar15;
        }
        if (iVar15 < iVar9) {
          lVar18 = 0;
          do {
            uVar12 = puVar6[lVar17 + lVar18 + 1];
            if (uVar12 != 0) {
              uVar16 = (ulonglong)(iVar15 + (int)lVar18 + 1);
              uVar8 = 0xffffffff;
              goto LAB_143e1e3b8;
            }
            iVar13 = iVar13 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar4 - lVar17 != lVar18);
          uVar8 = 0xffffffff;
          iVar15 = iVar4;
        }
        uVar16 = (ulonglong)(iVar15 + 1);
        uVar12 = uVar14;
      }
      else {
LAB_143e1e3b8:
        uVar19 = (ulonglong)(-uVar12 & uVar12);
        uVar2 = uVar19 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar12 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar12) {
          uVar12 = uVar14;
        }
      }
    } while (uVar12 != uVar5);
  }
LAB_143e1e0e3:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140a1bdaa(&local_98);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return local_c8 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1e468 FUN_143e1e468 body=1858 status=ok
// SIG undefined FUN_143e1e468(void)

uint FUN_143e1e468(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_f8 [40];
  uint local_d0;
  uint local_cc;
  uint *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  longlong *plVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar14 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar11 = (int)param_1[0x18] - *(int *)((longlong)param_1 + 0xec);
  plVar10 = param_1;
  if (uVar11 != 0) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar11);
    }
    FUN_14896682c(&local_98,uVar11);
    uVar5 = 1;
    if (3 < uVar11) {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      uVar5 = 1 << ((byte)iVar12 & 0x1f);
    }
    plVar10 = (longlong *)(ulonglong)local_50;
    if ((local_50 == 0) || ((int)local_50 < (int)uVar5)) {
      plVar10 = &local_98;
      local_50 = uVar5;
      FUN_1406feca4();
    }
  }
  puVar18 = (uint *)(param_1 + 0x19);
  uVar11 = *(uint *)(param_1 + 0x1c);
  local_cc = (uint)*(ushort *)(param_1 + 10);
  uVar5 = uVar11;
  local_c8 = puVar18;
  local_c0 = param_2;
  if (uVar11 == 0) {
    uVar19 = 1;
    puVar6 = (uint *)0x0;
    iVar12 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0x1b];
    if ((uint *)param_1[0x1b] == (uint *)0x0) {
      puVar6 = puVar18;
    }
    uVar8 = *puVar6;
    if (uVar8 == 0) {
      iVar12 = uVar11 + 0x1e;
      if (-1 < (int)(uVar11 - 1)) {
        iVar12 = uVar11 - 1;
      }
      uVar14 = 0;
      uVar19 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar19 = uVar14;
      }
      iVar12 = 0;
      do {
        if (uVar19 == uVar14) goto LAB_143e1e58a;
        iVar12 = iVar12 + 0x20;
        uVar8 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar14 = 0;
      iVar12 = 0;
    }
    uVar19 = (ulonglong)(-uVar8 & uVar8);
    uVar21 = uVar19 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar8 = (uint)lVar16 ^ 0x3f;
    plVar10 = (longlong *)(ulonglong)uVar8;
    uVar8 = (iVar12 - uVar8) + 0x3e;
    if ((int)uVar11 <= (int)uVar8) {
      uVar8 = uVar11;
    }
    puVar6 = (uint *)(ulonglong)uVar8;
  }
  if ((uint)puVar6 == uVar11) {
LAB_143e1e58a:
    local_d0 = (uint)CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
  }
  else {
    uVar8 = 0xffffffff;
    local_d0 = (uint)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
    do {
      plVar10 = *(longlong **)(param_1[0x17] + 0x10 + (longlong)(int)puVar6 * 0x20);
      if ((((plVar10 != (longlong *)0x0) && (local_b8 = *plVar10, local_b8 != 0)) &&
          (*(byte *)(local_b8 + 0x29) != 0)) &&
         ((*(byte *)(local_b8 + 0x29) < 3 &&
          (sVar7 = *(short *)(local_b8 + 0x2a), (short)param_1[10] <= sVar7)))) {
        if ((int)uStack_90 != local_64) {
          puVar15 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar15 = local_60;
          }
          for (iVar13 = *(int *)(puVar15 + (ulonglong)(local_50 - 1 & (int)sVar7) * 4); iVar13 != -1
              ; iVar13 = *(int *)(local_98 + (longlong)iVar13 * 0x18 + 0x10)) {
            if (*(short *)(local_98 + (longlong)iVar13 * 0x18) == sVar7) {
              local_d0 = 0;
              puVar18 = local_c8;
              goto LAB_143e1e734;
            }
          }
        }
        local_b0 = local_b8 + 0x2a;
        local_a8 = &local_b8;
        FUN_1489669c8(&local_98,local_9c,&local_b0);
        bVar3 = FUN_143e1dd96(plVar10,local_c0,*(undefined2 *)((longlong)param_1 + 0x52));
        local_d0 = CONCAT31((int3)(local_d0 >> 8),(byte)local_d0 & bVar3);
        uVar5 = *(uint *)(param_1 + 0x1c);
        puVar18 = local_c8;
      }
LAB_143e1e734:
      uVar8 = uVar8 & ~(uint)uVar19;
      puVar6 = (uint *)param_1[0x1b];
      if ((uint *)param_1[0x1b] == (uint *)0x0) {
        puVar6 = puVar18;
      }
      iVar13 = (int)uVar14;
      lVar16 = (longlong)iVar13;
      uVar20 = puVar6[lVar16] & uVar8;
      if (uVar20 == 0) {
        iVar9 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar9 = uVar5 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar4 = iVar9;
        if (iVar9 < iVar13) {
          iVar4 = iVar13;
        }
        if (iVar13 < iVar9) {
          lVar17 = 0;
          do {
            uVar20 = puVar6[lVar16 + lVar17 + 1];
            if (uVar20 != 0) {
              uVar14 = (ulonglong)(iVar13 + (int)lVar17 + 1);
              uVar8 = 0xffffffff;
              goto LAB_143e1e7a8;
            }
            iVar12 = iVar12 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar4 - lVar16 != lVar17);
          uVar8 = 0xffffffff;
          iVar13 = iVar4;
        }
        puVar6 = (uint *)(ulonglong)uVar5;
        uVar14 = (ulonglong)(iVar13 + 1);
        puVar18 = local_c8;
      }
      else {
LAB_143e1e7a8:
        uVar19 = (ulonglong)(-uVar20 & uVar20);
        uVar21 = uVar19 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar20 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        puVar6 = (uint *)(ulonglong)uVar20;
        if ((int)uVar5 <= (int)uVar20) {
          puVar6 = (uint *)(ulonglong)uVar5;
        }
      }
    } while ((uint)puVar6 != uVar11);
  }
  if (uVar5 == 0) {
    uVar19 = 1;
    uVar14 = 0;
    iVar12 = 0;
    uVar11 = 0;
  }
  else {
    puVar6 = (uint *)param_1[0x1b];
    if ((uint *)param_1[0x1b] == (uint *)0x0) {
      puVar6 = puVar18;
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar12 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar12 = uVar5 - 1;
      }
      uVar14 = 0;
      uVar19 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar19 = uVar14;
      }
      iVar12 = 0;
      do {
        if (uVar19 == uVar14) goto LAB_143e1e802;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar14 = 0;
      iVar12 = 0;
    }
    uVar19 = (ulonglong)(-uVar11 & uVar11);
    uVar21 = uVar19 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar11 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar11) {
      uVar11 = uVar5;
    }
  }
  uVar21 = (ulonglong)local_cc;
  if (uVar11 != uVar5) {
    uVar8 = 0xffffffff;
    do {
      plVar10 = *(longlong **)(param_1[0x17] + 0x10 + (longlong)(int)uVar11 * 0x20);
      if (((plVar10 != (longlong *)0x0) && (local_b8 = *plVar10, local_b8 != 0)) &&
         (cVar2 = *(char *)(local_b8 + 0x29), cVar2 != '\0')) {
        if (cVar2 == '\x02') {
          if (*(short *)(local_b8 + 0x2a) < (short)param_1[10]) {
            *(undefined1 *)(local_b8 + 0x29) = 4;
            *(undefined2 *)(local_b8 + 0x2a) = 0xffff;
            sVar7 = -1;
LAB_143e1e8ce:
            if (sVar7 < (short)param_1[10]) {
              uVar11 = (uint)uVar21;
              if ((uVar11 & 0xffff) == 0x7fff) {
                uVar21 = CONCAT62((int6)(uVar21 >> 0x10),0x7fff);
              }
              else {
                puVar15 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar15 = local_60;
                }
                uVar20 = (uint)(short)uVar21;
                do {
                  local_cc = uVar11;
                  if ((int)uStack_90 == local_64) {
LAB_143e1ea1e:
                    *(short *)(local_b8 + 0x2a) = (short)uVar20;
                    *(undefined1 *)(local_b8 + 0x29) = 2;
                    FUN_148966b5e(local_c0,&local_b8);
                    local_b0 = local_b8 + 0x2a;
                    local_a8 = &local_b8;
                    FUN_1489669c8(&local_98,local_9c,&local_b0);
                    uVar21 = (ulonglong)(uVar20 + 1);
                    goto LAB_143e1ea65;
                  }
                  iVar13 = *(int *)(puVar15 + (ulonglong)(uVar20 & local_50 - 1) * 4);
                  while( true ) {
                    if (iVar13 == -1) goto LAB_143e1ea1e;
                    if (*(short *)(local_98 + (longlong)iVar13 * 0x18) == (short)uVar20) break;
                    iVar13 = *(int *)(local_98 + (longlong)iVar13 * 0x18 + 0x10);
                  }
                  uVar20 = uVar20 + 1;
                  puVar18 = local_c8;
                } while (uVar20 != 0x7fff);
              }
            }
            else {
              if ((int)uStack_90 != local_64) {
                puVar15 = local_58;
                if (local_58 == (undefined1 *)0x0) {
                  puVar15 = local_60;
                }
                for (iVar13 = *(int *)(puVar15 + (ulonglong)(local_50 - 1 & (int)sVar7) * 4);
                    iVar13 != -1; iVar13 = *(int *)(local_98 + (longlong)iVar13 * 0x18 + 0x10)) {
                  if (*(short *)(local_98 + (longlong)iVar13 * 0x18) == sVar7) {
                    local_d0 = 0;
                    goto LAB_143e1ea86;
                  }
                }
              }
              local_b0 = local_b8 + 0x2a;
              local_a8 = &local_b8;
              FUN_1489669c8(&local_98,local_9c,&local_b0);
              *(undefined1 *)(local_b8 + 0x29) = 2;
              FUN_148966b5e(local_c0,&local_b8);
LAB_143e1ea65:
              bVar3 = FUN_143e1dd96(plVar10,local_c0,*(undefined2 *)((longlong)param_1 + 0x52));
              local_d0 = CONCAT31((int3)(local_d0 >> 8),(byte)local_d0 & bVar3);
              puVar18 = local_c8;
            }
          }
        }
        else if ((byte)(cVar2 - 3U) < 2) {
          sVar7 = *(short *)(local_b8 + 0x2a);
          goto LAB_143e1e8ce;
        }
      }
LAB_143e1ea86:
      uVar8 = uVar8 & ~(uint)uVar19;
      puVar6 = (uint *)param_1[0x1b];
      if ((uint *)param_1[0x1b] == (uint *)0x0) {
        puVar6 = puVar18;
      }
      uVar20 = *(uint *)(param_1 + 0x1c);
      iVar13 = (int)uVar14;
      lVar16 = (longlong)iVar13;
      uVar11 = puVar6[lVar16] & uVar8;
      if (uVar11 == 0) {
        iVar9 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar9 = uVar20 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar4 = iVar9;
        if (iVar9 < iVar13) {
          iVar4 = iVar13;
        }
        if (iVar13 < iVar9) {
          lVar17 = 0;
          do {
            uVar11 = puVar6[lVar16 + lVar17 + 1];
            if (uVar11 != 0) {
              uVar14 = (ulonglong)(iVar13 + (int)lVar17 + 1);
              uVar8 = 0xffffffff;
              goto LAB_143e1eaff;
            }
            iVar12 = iVar12 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar4 - lVar16 != lVar17);
          uVar8 = 0xffffffff;
          iVar13 = iVar4;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        puVar18 = local_c8;
        uVar11 = uVar20;
      }
      else {
LAB_143e1eaff:
        uVar19 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar19 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar11 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar20 <= (int)uVar11) {
          uVar11 = uVar20;
        }
      }
    } while (uVar11 != uVar5);
  }
LAB_143e1e802:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140a1bdaa(&local_98);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return local_d0 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e1ebac FUN_143e1ebac body=2555 status=ok
// SIG undefined FUN_143e1ebac(void)

void FUN_143e1ebac(longlong param_1,char *param_2,short param_3,undefined8 param_4,
                  undefined2 param_5)

{
  short *psVar1;
  short sVar2;
  wchar_t wVar3;
  longlong *plVar4;
  char *pcVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  size_t sVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  short *psVar25;
  uint *puVar26;
  uint uVar27;
  short *psVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  uint *local_158;
  longlong *local_150;
  char *local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  wchar_t *local_128;
  int local_120;
  undefined8 local_118;
  int local_110;
  short *local_108;
  ulonglong uStack_100;
  char *local_f0;
  uint local_e4;
  char local_e0 [128];
  char *local_60;
  char *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar26 = (uint *)(param_1 + 0x68);
  local_108 = (short *)0x0;
  uStack_100 = 0;
  local_130 = param_4;
  FUN_14895dc70(puVar26,&local_108);
  FUN_148402e68(local_108,uStack_100 & 0xffffffff);
  local_140 = param_1;
  if (param_3 != -1) {
    if ((longlong)(int)uStack_100 != 0) {
      psVar25 = local_108 + (int)uStack_100;
      lVar22 = param_1 + 0xa0;
      psVar28 = local_108;
LAB_143e1ec5a:
      sVar2 = *psVar28;
      if ((sVar2 == param_3 || param_3 < *(short *)(param_1 + 0x50)) &&
         (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c))) {
        lVar23 = *(longlong *)(param_1 + 0xa8);
        if (*(longlong *)(param_1 + 0xa8) == 0) {
          lVar23 = lVar22;
        }
        uVar18 = (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & (int)sVar2);
        iVar24 = *(int *)(lVar23 + uVar18 * 4);
        if (iVar24 != -1) {
          do {
            psVar1 = (short *)(*(longlong *)puVar26 + (longlong)iVar24 * 0x18);
            if (*psVar1 == sVar2) {
              if ((((longlong *)(psVar1 + 4) != (longlong *)0x0 && psVar1 != (short *)0x0) &&
                  (plVar14 = *(longlong **)(psVar1 + 4), plVar14 != (longlong *)0x0)) &&
                 (*plVar14 != 0)) {
                if (param_2 == (char *)0x0) goto LAB_143e1f02d;
                piVar9 = *(int **)(*plVar14 + 8);
                if (piVar9 == (int *)0x0) {
                  piVar9 = &DAT_14c9485f0;
                }
                if (*piVar9 == 0) {
LAB_143e1ee8f:
                  local_110 = DAT_14c948620;
                  local_118 = DAT_14c948618;
                }
                else {
                  uVar27 = piVar9[1];
                  uVar18 = (ulonglong)uVar27;
                  if ((uVar27 == 0) || (*piVar9 == DAT_14c948000)) goto LAB_143e1ee8f;
                  if (((int)uVar27 < 2) && (piVar9[9] < 1)) {
                    piVar9 = piVar9 + 2;
                  }
                  else {
                    piVar9 = *(int **)(piVar9 + 6);
                  }
                  if ((int)uVar27 < 1) goto LAB_143e1ee8f;
                  local_110 = piVar9[2];
                  local_118 = *(undefined8 *)piVar9;
                }
                local_150 = plVar14;
                local_138 = lVar22;
                FUN_1408226d0(&local_118,&local_128,CONCAT71((int7)(uVar18 >> 8),1));
                pwVar19 = L"";
                if (local_120 != 0) {
                  pwVar19 = local_128;
                }
                local_60 = (char *)0x0;
                if (pwVar19 == (wchar_t *)0x0) {
                  local_58 = (char *)0x0;
                  local_50 = 0;
                  sVar10 = strlen(param_2);
                  iVar24 = strncmp((char *)0x0,param_2,sVar10);
                  bVar30 = iVar24 == 0;
                  goto LAB_143e1effa;
                }
                local_158 = puVar26;
                sVar10 = wcslen(pwVar19);
                local_e4 = 0;
                local_f0 = (char *)CONCAT44(local_f0._4_4_,0x7fffffff);
                uVar18 = sVar10 & 0xffffffff;
                pwVar21 = pwVar19;
                goto LAB_143e1edd1;
              }
              break;
            }
            iVar24 = *(int *)(psVar1 + 8);
          } while (iVar24 != -1);
        }
      }
      goto LAB_143e1f065;
    }
LAB_143e1f072:
    if (-1 < param_3) goto LAB_143e1f108;
  }
  puVar26 = (uint *)(param_1 + 200);
  uVar27 = *(uint *)(param_1 + 0xe0);
  plVar14 = (longlong *)(ulonglong)uVar27;
  if (uVar27 == 0) {
    uVar29 = 1;
    uVar18 = 0;
    iVar24 = 0;
    uVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0xd8);
    if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
      puVar8 = puVar26;
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar24 = uVar27 + 0x1e;
      if (-1 < (int)(uVar27 - 1)) {
        iVar24 = uVar27 - 1;
      }
      uVar18 = 0;
      uVar29 = (ulonglong)(uint)(iVar24 >> 5);
      if (iVar24 >> 5 < 1) {
        uVar29 = uVar18;
      }
      iVar24 = 0;
      do {
        if (uVar29 == uVar18) goto LAB_143e1f108;
        iVar24 = iVar24 + 0x20;
        uVar7 = puVar8[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar18 = 0;
      iVar24 = 0;
    }
    uVar29 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar29 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    uVar7 = (iVar24 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if ((int)uVar27 <= (int)uVar7) {
      uVar7 = uVar27;
    }
  }
  if (uVar7 != uVar27) {
    uVar27 = 0xffffffff;
    local_158 = puVar26;
    local_150 = plVar14;
    local_148 = param_2;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x10 + (longlong)(int)uVar7 * 0x20);
      if (((plVar4 != (longlong *)0x0) && (lVar22 = *plVar4, lVar22 != 0)) &&
         (*(short *)(lVar22 + 0x2a) < *(short *)(param_1 + 0x50))) {
        if (param_2 != (char *)0x0) {
          piVar9 = *(int **)(lVar22 + 8);
          if (piVar9 == (int *)0x0) {
            piVar9 = &DAT_14c9485f0;
          }
          local_138 = CONCAT44(local_138._4_4_,iVar24);
          if (((*piVar9 == 0) || (iVar24 = piVar9[1], iVar24 == 0)) || (*piVar9 == DAT_14c948000)) {
LAB_143e1f31a:
            local_110 = DAT_14c948620;
            local_118 = DAT_14c948618;
          }
          else {
            if ((iVar24 < 2) && (piVar9[9] < 1)) {
              piVar9 = piVar9 + 2;
            }
            else {
              piVar9 = *(int **)(piVar9 + 6);
            }
            if (iVar24 < 1) goto LAB_143e1f31a;
            local_110 = piVar9[2];
            local_118 = *(undefined8 *)piVar9;
          }
          FUN_1408226d0(&local_118,&local_128,1);
          pwVar19 = L"";
          if (local_120 != 0) {
            pwVar19 = local_128;
          }
          local_60 = (char *)0x0;
          if (pwVar19 == (wchar_t *)0x0) {
            local_58 = (char *)0x0;
            local_50 = 0;
            sVar10 = strlen(param_2);
            iVar24 = strncmp((char *)0x0,param_2,sVar10);
            bVar30 = iVar24 == 0;
          }
          else {
            sVar10 = wcslen(pwVar19);
            local_e4 = 0;
            local_f0 = (char *)CONCAT44(local_f0._4_4_,0x7fffffff);
            uVar15 = sVar10 & 0xffffffff;
            pwVar21 = pwVar19;
            do {
              iVar24 = (int)uVar15;
              if (iVar24 < 1) {
LAB_143e1f358:
                local_50 = local_e4;
                uVar7 = local_e4 + 1;
                if (uVar7 < 0x81) goto LAB_143e1f374;
                FUN_1446efa72(&local_60,0,uVar7,1);
                local_f0 = local_60;
                goto LAB_143e1f376;
              }
              wVar3 = *pwVar21;
              uVar7 = (uint)(ushort)wVar3;
              pwVar20 = pwVar21 + 1;
              uVar16 = iVar24 - 1;
              if ((wVar3 & 0xfc00U) == 0xd800) {
                if (iVar24 == 1) {
                  cVar6 = FUN_140024707(uVar7,&local_e4,&local_f0);
                  if (cVar6 != '\0') goto LAB_143e1f358;
                  break;
                }
                if (((ushort)*pwVar20 & 0xfc00) == 0xdc00) {
                  uVar7 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar20 + 0xfca02400;
                  pwVar20 = pwVar21 + 2;
                  uVar16 = iVar24 - 2;
                }
              }
              cVar6 = FUN_140024707(uVar7,&local_e4,&local_f0);
              uVar15 = (ulonglong)uVar16;
              pwVar21 = pwVar20;
            } while (cVar6 != '\0');
            local_50 = 0xffffffff;
            uVar7 = 0;
LAB_143e1f374:
            local_f0 = (char *)0x0;
LAB_143e1f376:
            if (local_f0 == (char *)0x0) {
              local_f0 = local_e0;
            }
            iVar24 = (int)sVar10 + 1;
            local_e4 = uVar7;
            local_58 = local_f0;
            do {
              if (iVar24 < 1) break;
              wVar3 = *pwVar19;
              uVar7 = (uint)(ushort)wVar3;
              pwVar21 = pwVar19 + 1;
              iVar17 = iVar24 + -1;
              if ((wVar3 & 0xfc00U) == 0xd800) {
                if (iVar24 == 1) {
                  FUN_1400247af(uVar7,&local_f0,&local_e4);
                  break;
                }
                if (((ushort)*pwVar21 & 0xfc00) == 0xdc00) {
                  uVar7 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar21 + 0xfca02400;
                  pwVar21 = pwVar19 + 2;
                  iVar17 = iVar24 + -2;
                }
              }
              iVar24 = iVar17;
              pwVar19 = pwVar21;
              cVar6 = FUN_1400247af(uVar7,&local_f0,&local_e4);
            } while (cVar6 != '\0');
            pcVar5 = local_60;
            param_2 = local_148;
            pcVar11 = strstr(local_58,local_148);
            puVar26 = local_158;
            bVar30 = pcVar11 == (char *)0x0;
            if (pcVar5 != (char *)0x0) {
              FUN_1400020a8(pcVar5);
            }
          }
          plVar14 = local_150;
          if (local_128 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          param_1 = local_140;
          iVar24 = (int)local_138;
          if (bVar30) goto LAB_143e1f4d4;
        }
        local_168 = param_5;
        FUN_143e1d438(plVar4,*(undefined2 *)(param_1 + 0x52),1,local_130);
      }
LAB_143e1f4d4:
      uVar27 = uVar27 & ~(uint)uVar29;
      puVar8 = *(uint **)(param_1 + 0xd8);
      if (*(uint **)(param_1 + 0xd8) == (uint *)0x0) {
        puVar8 = puVar26;
      }
      uVar16 = *(uint *)(param_1 + 0xe0);
      iVar17 = (int)uVar18;
      lVar22 = (longlong)iVar17;
      uVar7 = puVar8[lVar22] & uVar27;
      if (uVar7 == 0) {
        iVar12 = uVar16 + 0x1e;
        if (-1 < (int)(uVar16 - 1)) {
          iVar12 = uVar16 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar24 = iVar24 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar17) {
          iVar13 = iVar17;
        }
        if (iVar17 < iVar12) {
          lVar23 = 0;
          do {
            uVar7 = puVar8[lVar22 + lVar23 + 1];
            if (uVar7 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar23 + 1);
              uVar27 = 0xffffffff;
              goto LAB_143e1f551;
            }
            iVar24 = iVar24 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar13 - lVar22 != lVar23);
          uVar27 = 0xffffffff;
          iVar17 = iVar13;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        param_1 = local_140;
        plVar14 = local_150;
        puVar26 = local_158;
        uVar7 = uVar16;
      }
      else {
LAB_143e1f551:
        uVar29 = (ulonglong)(-uVar7 & uVar7);
        uVar15 = uVar29 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uVar7 = (iVar24 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if ((int)uVar16 <= (int)uVar7) {
          uVar7 = uVar16;
        }
      }
    } while (uVar7 != (uint)plVar14);
  }
LAB_143e1f108:
  if (local_108 != (short *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    cVar6 = FUN_140024707(uVar27,&local_e4,&local_f0);
    uVar18 = (ulonglong)uVar7;
    pwVar21 = pwVar20;
    if (cVar6 == '\0') break;
LAB_143e1edd1:
    iVar24 = (int)uVar18;
    if (iVar24 < 1) {
LAB_143e1eecd:
      local_50 = local_e4;
      uVar27 = local_e4 + 1;
      if (uVar27 < 0x81) goto LAB_143e1eee9;
      FUN_1446efa72(&local_60,0,uVar27,1);
      local_f0 = local_60;
      goto LAB_143e1eeeb;
    }
    wVar3 = *pwVar21;
    uVar27 = (uint)(ushort)wVar3;
    pwVar20 = pwVar21 + 1;
    uVar7 = iVar24 - 1;
    if ((wVar3 & 0xfc00U) == 0xd800) {
      if (iVar24 == 1) {
        cVar6 = FUN_140024707(uVar27,&local_e4,&local_f0);
        if (cVar6 != '\0') goto LAB_143e1eecd;
        break;
      }
      if (((ushort)*pwVar20 & 0xfc00) == 0xdc00) {
        uVar27 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar20 + 0xfca02400;
        pwVar20 = pwVar21 + 2;
        uVar7 = iVar24 - 2;
      }
    }
  }
  local_50 = 0xffffffff;
  uVar27 = 0;
LAB_143e1eee9:
  local_f0 = (char *)0x0;
LAB_143e1eeeb:
  if (local_f0 == (char *)0x0) {
    local_f0 = local_e0;
  }
  iVar24 = (int)sVar10 + 1;
  local_e4 = uVar27;
  local_58 = local_f0;
  do {
    if (iVar24 < 1) break;
    wVar3 = *pwVar19;
    uVar27 = (uint)(ushort)wVar3;
    pwVar21 = pwVar19 + 1;
    iVar17 = iVar24 + -1;
    if ((wVar3 & 0xfc00U) == 0xd800) {
      if (iVar24 == 1) {
        FUN_1400247af(uVar27,&local_f0,&local_e4);
        break;
      }
      if (((ushort)*pwVar21 & 0xfc00) == 0xdc00) {
        uVar27 = (uint)(ushort)wVar3 * 0x400 + (uint)(ushort)*pwVar21 + 0xfca02400;
        pwVar21 = pwVar19 + 2;
        iVar17 = iVar24 + -2;
      }
    }
    iVar24 = iVar17;
    pwVar19 = pwVar21;
    cVar6 = FUN_1400247af(uVar27,&local_f0,&local_e4);
  } while (cVar6 != '\0');
  pcVar5 = local_60;
  pcVar11 = strstr(local_58,param_2);
  puVar26 = local_158;
  bVar30 = pcVar11 == (char *)0x0;
  if (pcVar5 != (char *)0x0) {
    FUN_1400020a8(pcVar5);
  }
LAB_143e1effa:
  lVar22 = local_138;
  if (local_128 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar14 = local_150;
  param_1 = local_140;
  if (!bVar30) {
LAB_143e1f02d:
    local_168 = param_5;
    local_148 = param_2;
    FUN_143e1d438(plVar14,*(undefined2 *)(param_1 + 0x52),1,local_130);
    param_2 = local_148;
  }
LAB_143e1f065:
  psVar28 = psVar28 + 1;
  if (psVar28 == psVar25) goto LAB_143e1f072;
  goto LAB_143e1ec5a;
}



// FUNCTION 143e1f5b9 FUN_143e1f5b9 body=41 status=ok
// SIG undefined FUN_143e1f5b9(void)

void FUN_143e1f5b9(void)

{
  DAT_14cb8a778 = 0;
  if (DAT_14cb8a770 != 0) {
    FUN_1400020a8();
  }
  FUN_145c11b68();
  return;
}



// FUNCTION 143e1f5ee FUN_143e1f5ee body=393 status=ok
// SIG undefined FUN_143e1f5ee(void)

longlong FUN_143e1f5ee(longlong param_1)

{
  short sVar1;
  char cVar2;
  size_t sVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ushort uVar8;
  char *_Str;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  undefined1 auStack_58 [46];
  short local_2a;
  char *local_28;
  int local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2a = 0;
  cVar2 = FUN_140bddb30(param_1,&local_2a,0);
  sVar1 = local_2a;
  if (cVar2 != '\0') {
    FUN_14136d53e();
    uVar8 = sVar1 - DAT_14cb8a718;
    if (((-1 < (short)uVar8) && ((short)uVar8 < DAT_14cb8a728)) &&
       (lVar7 = *(longlong *)(DAT_14cb8a720 + (ulonglong)uVar8 * 8), lVar7 != 0))
    goto LAB_143e1f6f6;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    _Str = (char *)(param_1 + 8);
    if (0xf < *(ulonglong *)(param_1 + 0x20)) {
      _Str = *(char **)_Str;
    }
    if (_Str == (char *)0x0) {
LAB_143e1f714:
      uVar4 = 0;
      uVar9 = 0;
    }
    else {
      sVar3 = strlen(_Str);
      iVar6 = (int)sVar3;
      if (iVar6 == 0) goto LAB_143e1f714;
      lVar7 = (longlong)iVar6;
      pcVar12 = _Str + lVar7 + -1;
      uVar5 = 0;
      if (pcVar12 < _Str) {
        lVar11 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar12 - 0x30U)) break;
          uVar5 = uVar5 + 1;
          pcVar12 = pcVar12 + -1;
        } while (_Str <= pcVar12);
        lVar11 = 0;
        if (((uVar5 != 0) && ((int)uVar5 < iVar6)) &&
           ((lVar11 = 0, uVar5 < 0xb &&
            (lVar13 = -(ulonglong)uVar5, _Str[lVar13 + lVar7 + -1] == '_')))) {
          if ((uVar5 == 1) || (_Str[lVar13 + lVar7] != '0')) {
            lVar10 = 0;
            do {
              lVar11 = (longlong)_Str[lVar13 + lVar7] + lVar10 * 10;
              lVar10 = lVar11 + -0x30;
              lVar13 = lVar13 + 1;
            } while (lVar13 != 0);
            if (lVar10 < 0x7fffffff) {
              iVar6 = ~uVar5 + iVar6;
              lVar11 = lVar11 + -0x2f;
              goto LAB_143e1f6bc;
            }
          }
          lVar11 = 0;
        }
LAB_143e1f6bc:
        if (iVar6 == 0) goto LAB_143e1f714;
      }
      local_1c = 0;
      local_28 = _Str;
      local_20 = iVar6;
      uVar5 = FUN_14001a6c0(&local_28,1);
      uVar9 = lVar11 << 0x20;
      uVar4 = (ulonglong)uVar5;
    }
    local_28 = (char *)(uVar4 | uVar9);
    lVar7 = FUN_14136d482();
    if (lVar7 != 0) goto LAB_143e1f6f6;
  }
  lVar7 = 0;
LAB_143e1f6f6:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 143e1f778 FUN_143e1f778 body=2829 status=ok
// SIG undefined FUN_143e1f778(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_143e1f778(undefined8 *****param_1,char *param_2,char *param_3)

{
  undefined8 *****pppppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 **ppuVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  longlong lVar12;
  undefined8 ******ppppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *****pppppuVar21;
  ulonglong uVar22;
  ulonglong unaff_RBP;
  longlong lVar23;
  undefined8 ***pppuVar24;
  undefined8 **ppuVar25;
  ulonglong uVar26;
  byte bVar27;
  uint uVar28;
  undefined *puVar29;
  uint uVar30;
  undefined8 *******_Src;
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  char local_1d9;
  char *local_1d8;
  undefined8 *****local_1d0;
  ulonglong local_1c8;
  char *local_1c0;
  undefined8 *****local_1b8;
  char *local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  uint local_18c;
  undefined8 *******local_188;
  undefined8 uStack_180;
  undefined8 *******local_178;
  undefined8 local_170;
  undefined4 local_160;
  undefined2 local_15c;
  undefined8 local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined8 ****local_128;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1d8 = param_3;
  FUN_1418a88fa();
  uVar17 = *(ulonglong *)(param_2 + 0x10);
  local_1d0 = param_1;
  local_1c0 = param_2;
  if (2 < uVar17) {
    pcVar11 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar11 = *(char **)param_2;
    }
    if ((*pcVar11 == '@') && (pcVar11[1] == 'U')) {
      local_178 = (undefined8 *******)0x0;
      local_170 = 0x8000000000;
      uVar30 = (int)uVar17 - 2;
      uVar28 = (uint)((ulonglong)uVar30 * 0xcccccccd >> 0x20) & 0xfffffffc;
      uVar30 = uVar30 % 5;
      if (uVar30 == 4) {
        uVar28 = uVar28 | 3;
      }
      else if (uVar30 == 3) {
        uVar28 = uVar28 | 2;
      }
      else if (uVar30 - 1 < 2) {
        uVar28 = uVar28 | 1;
      }
      uVar28 = uVar28 * 8;
      if (0 < (int)uVar28) {
        if (0x80 < uVar28) {
          uVar30 = uVar28 + 0x1f >> 5;
          uVar17 = (ulonglong)(uVar30 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar18 = (uint)(uVar17 + 0xf);
              if (uVar28 < 0x3ff81) {
                uVar17 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]];
              }
              else {
                uVar19 = (ulonglong)(uVar18 & 0xfffffff0);
                if (uVar19 < 0x7ff1) {
                  bVar27 = (&DAT_14c841e00)[uVar18 >> 4];
                  uVar22 = 0x32;
                  if (0x32 < bVar27) {
                    uVar22 = (ulonglong)bVar27;
                  }
                  uVar26 = 0x32 - (ulonglong)bVar27;
                  do {
                    uVar17 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0) goto LAB_143e20186;
                    lVar23 = uVar22 + 1 + uVar26;
                    uVar26 = uVar26 - 1;
                  } while (lVar23 != 0x33);
                }
                uVar17 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar17 = (ulonglong)DAT_14c841df8;
                }
                uVar17 = -uVar17 & (uVar19 + uVar17) - 1;
              }
            }
            else {
              uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar17,0);
            }
          }
LAB_143e20186:
          iVar10 = (int)(uVar17 >> 2);
          iVar9 = -0x20;
          if ((int)uVar30 <= iVar10) {
            iVar9 = iVar10 << 5;
          }
          local_170 = CONCAT44(iVar9,(uint)local_170);
          FUN_1446efbd8(&local_188,0);
          uVar28 = uVar28 + (uint)local_170;
        }
        uVar30 = uVar28 + 0x1f;
        if (-1 < (int)uVar28) {
          uVar30 = uVar28;
        }
        local_170 = CONCAT44(local_170._4_4_,uVar28);
        if ((int)uVar28 % 0x20 != 0) {
          pppppppuVar20 = local_178;
          if (local_178 == (undefined8 *******)0x0) {
            pppppppuVar20 = &local_188;
          }
          bVar27 = -(char)((int)uVar28 % 0x20);
          *(uint *)((longlong)pppppppuVar20 + (longlong)((int)uVar30 >> 5) * 4) =
               (uint)(*(int *)((longlong)pppppppuVar20 + (longlong)((int)uVar30 >> 5) * 4) <<
                     (bVar27 & 0x1f)) >> (bVar27 & 0x1f);
        }
      }
      pppppppuVar20 = local_178;
      if (local_178 == (undefined8 *******)0x0) {
        pppppppuVar20 = &local_188;
      }
      pcVar11 = local_1c0;
      if (0xf < *(ulonglong *)(local_1c0 + 0x18)) {
        pcVar11 = *(char **)local_1c0;
      }
      iVar9 = FUN_142b30c38(pcVar11 + 2,*(int *)(local_1c0 + 0x10) + -2,pppppppuVar20);
      FUN_144a686e6(&local_188,iVar9 * 8);
      local_160 = 0x10100;
      local_15c = 0xffff;
      local_158 = 0;
      lStack_150 = 0;
      local_148 = 0;
      local_140 = 0xf;
      local_138 = 0;
      uStack_130 = uStack_130 & 0xffffff00;
      local_128 = (undefined8 ****)0x0;
      FUN_1418a88fa(param_1);
      if (((char)local_160 == '\x01') &&
         (pppppppuVar20 = (undefined8 *******)(param_1 + 0x19),
         (undefined8 ********)pppppppuVar20 != &local_188)) {
        uVar28 = (uint)local_170 + 0x1f & 0xffffffe0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if ((*(int *)((longlong)param_1 + 0xe4) < (int)uVar28) ||
           (0x80 < *(int *)((longlong)param_1 + 0xe4))) {
          uVar30 = 0x80;
          if (0x80 < (int)uVar28) {
            uVar30 = uVar28;
          }
          *(uint *)((longlong)param_1 + 0xe4) = uVar30;
          FUN_1446efbd8(pppppppuVar20,0);
        }
        *(uint *)(param_1 + 0x1c) = (uint)local_170;
        if ((uint)local_170 != 0) {
          _Src = &local_188;
          if (local_178 != (undefined8 *******)0x0) {
            _Src = local_178;
          }
          if ((undefined8 *******)param_1[0x1b] != (undefined8 *******)0x0) {
            pppppppuVar20 = (undefined8 *******)param_1[0x1b];
          }
          memcpy(pppppppuVar20,_Src,(ulonglong)((uint)local_170 + 0x1f >> 3 & 0xfffffffc));
        }
      }
      local_18c = 0;
      FUN_14067a5ce(param_1,&local_188);
      if (((param_1[3] == (undefined8 ****)0x0) && (*(int *)(param_1 + 6) == 0)) ||
         (cVar8 = FUN_140d4c998(param_1,local_15c,&local_158), cVar8 == '\0')) {
        uVar17 = 0;
      }
      else {
        local_1a8 = 0;
        uStack_1a0 = 0;
        if (local_18c < (uint)local_170) {
          pppppuVar1 = local_1d0 + 0x17;
          pppuVar24 = (undefined8 ***)0x0;
          uVar17 = 0;
          uVar28 = (uint)local_170;
          do {
            uVar30 = local_18c + 1;
            pppppppuVar20 = local_178;
            if (local_178 == (undefined8 *******)0x0) {
              pppppppuVar20 = &local_188;
            }
            uVar18 = local_18c + 0x1f;
            if (-1 < (int)local_18c) {
              uVar18 = local_18c;
            }
            iVar9 = (int)uVar17;
            if ((*(uint *)((longlong)pppppppuVar20 + (longlong)((int)uVar18 >> 5) * 4) >>
                 (local_18c & 0x1f) & 1) == 0) {
              uVar18 = uVar30;
              if (((int)uVar28 <= (int)uVar30 || (int)uVar30 < 0) ||
                 (uVar18 = local_18c + 2,
                 (*(uint *)((longlong)pppppppuVar20 + (ulonglong)(uVar30 >> 5) * 4) >>
                  (uVar30 & 0x1f) & 1) == 0)) {
                uVar17 = (ulonglong)(iVar9 - (uint)(0 < iVar9));
                local_18c = uVar18;
                goto LAB_143e1ffe0;
              }
              local_18c = uVar18;
              if ((int)uStack_1a0 == 0) {
                pppuVar24 = (undefined8 ***)0x0;
              }
              else {
                if ((iVar9 < 0) || ((int)uStack_1a0 <= iVar9)) break;
                pppuVar24 = *(undefined8 ****)(local_1a8 + uVar17 * 8);
              }
              uVar17 = (ulonglong)(iVar9 + 1);
            }
            else {
              local_18c = uVar30;
              ppppuVar15 = (undefined8 ****)FUN_14001cc68(0x68,0x10);
              ppppuVar15[1] = (undefined8 ***)0x0;
              ppppuVar15[2] = (undefined8 ***)0x0;
              ppppuVar15[3] = (undefined8 ***)0x0;
              ppppuVar15[4] = (undefined8 ***)0xf;
              ppppuVar15[5] = (undefined8 ***)0x0;
              ppppuVar15[6] = (undefined8 ***)0x0;
              *ppppuVar15 = (undefined8 ***)&PTR_FUN_14b4257d8;
              *(undefined1 *)(ppppuVar15 + 7) = 0;
              ppppuVar15[8] = (undefined8 ***)0x0;
              ppppuVar15[9] = (undefined8 ***)0x0;
              ppppuVar15[10] = (undefined8 ***)0x0;
              ppppuVar15[0xb] = local_1d0;
              *(undefined2 *)(ppppuVar15 + 0xc) = 0;
              *(short *)((longlong)ppppuVar15 + 0x3a) = (short)uVar17;
              iVar10 = *(int *)(local_1d0 + 0x18);
              ppppuVar16 = ppppuVar15;
              if ((longlong)iVar10 != 0) {
                ppppuVar16 = local_1d0[0xd];
              }
              local_1d0[0xd] = ppppuVar16;
              *(uint *)(local_1d0 + 0x18) = iVar10 + 1U;
              if (*(uint *)((longlong)local_1d0 + 0xc4) < iVar10 + 1U) {
                FUN_140be38f6(pppppuVar1,iVar10);
              }
              (*pppppuVar1)[iVar10] = ppppuVar15;
              FUN_14067a5ce(ppppuVar15,&local_188,&local_18c);
              unaff_RBP = (ulonglong)iVar9;
              iVar10 = (int)uStack_1a0;
              if (pppuVar24 == (undefined8 ***)0x0) {
                if ((int)uStack_1a0 == 0) {
                  iVar10 = 0;
                }
                else {
                  ppuVar25 = *(undefined8 ***)(local_1a8 + unaff_RBP * 8);
                  if (ppuVar25 != (undefined8 **)0x0) {
                    ppppuVar15[10] = (undefined8 ***)ppuVar25[10];
                    goto LAB_143e1ff97;
                  }
                }
              }
              else {
                ppppuVar15[10] = pppuVar24;
                ppuVar6 = pppuVar24[9];
                if (pppuVar24[9] == (undefined8 **)0x0) {
                  pppuVar24 = pppuVar24 + 9;
                }
                else {
                  do {
                    ppuVar25 = ppuVar6;
                    ppuVar6 = (undefined8 **)ppuVar25[8];
                  } while ((undefined8 **)ppuVar25[8] != (undefined8 **)0x0);
LAB_143e1ff97:
                  pppuVar24 = (undefined8 ***)(ppuVar25 + 8);
                }
                *pppuVar24 = ppppuVar15;
              }
              if (iVar10 <= iVar9) {
                FUN_1418a89ce(&local_1a8,iVar9 + 1);
              }
              *(undefined8 *****)(local_1a8 + unaff_RBP * 8) = ppppuVar15;
              uVar28 = (uint)local_170;
LAB_143e1ffe0:
              pppuVar24 = (undefined8 ***)0x0;
            }
          } while (local_18c < uVar28);
        }
        pppppuVar1 = local_1d0;
        if (local_160._2_1_ == '\x01') {
          FUN_140d4cc24(local_1d0,0);
        }
        *(undefined1 *)(pppppuVar1 + 0xe) = 1;
        *(undefined4 *)(pppppuVar1 + 0xf) = local_160;
        *(undefined2 *)((longlong)pppppuVar1 + 0x7c) = local_15c;
        FUN_1401d7e14(pppppuVar1 + 0x10,&local_158);
        pcVar11 = local_1c0;
        pppppuVar1[0x16] = local_128;
        *(undefined4 *)(pppppuVar1 + 0x14) = (undefined4)local_138;
        *(undefined4 *)((longlong)pppppuVar1 + 0xa4) = local_138._4_4_;
        *(uint *)(pppppuVar1 + 0x15) = uStack_130;
        *(undefined4 *)((longlong)pppppuVar1 + 0xac) = uStack_12c;
        if (local_1a8 != 0) {
          FUN_1400020a8();
        }
        if (local_1d8[2] == '\x01') {
          FUN_140d4cc24(pppppuVar1,0);
        }
        uVar17 = CONCAT71((int7)(unaff_RBP >> 8),1);
        if (*local_1d8 == '\x01') {
          FUN_1401d7e14(pppppuVar1 + 0x1d,pcVar11);
          *(undefined1 *)(pppppuVar1 + 0x21) = 1;
        }
      }
      if (((char)uStack_130 == '\x01') && (local_128 != (undefined8 ****)0x0)) {
        (*(code *)**local_128)(local_128,1);
        local_128 = (undefined8 ****)0x0;
      }
      FUN_1401d9a90(&local_158);
      pppppppuVar20 = local_178;
      goto LAB_143e1fc01;
    }
  }
  if (*local_1d8 == '\x01') {
    FUN_1401d7e14(param_1 + 0x1d);
    uVar17 = *(ulonglong *)(param_2 + 0x10);
  }
  local_188 = (undefined8 *******)0x0;
  uStack_180 = 0;
  if (uVar17 != 0) {
    local_1b0 = local_1d8 + 8;
    local_1b8 = param_1 + 0x17;
    unaff_RBP = 0;
    lVar23 = 0;
    cVar8 = '\0';
    local_1c8 = 0;
    iVar9 = 0;
    do {
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        param_2 = *(char **)param_2;
      }
      local_1d9 = cVar8;
      if (unaff_RBP < uVar17) {
        puVar29 = &DAT_149eb5f2c;
        if (lVar23 != 0) {
          puVar29 = &DAT_14b424f8a;
        }
        memset(&local_160,0,0x100);
        lVar12 = 0;
        do {
          *(undefined1 *)((longlong)&local_160 + (ulonglong)(byte)puVar29[lVar12]) = 1;
          lVar12 = lVar12 + 1;
        } while (lVar23 * 2 + 1 != lVar12);
        if ((longlong)unaff_RBP < (longlong)uVar17) {
          lVar12 = unaff_RBP << 0x20;
          uVar19 = unaff_RBP;
          do {
            if (*(char *)((longlong)&local_160 + (ulonglong)(byte)param_2[uVar19]) != '\0') {
              if (lVar12 != -0x100000000) {
                uVar17 = uVar19;
                cVar8 = param_2[lVar12 >> 0x20];
                goto LAB_143e1f97c;
              }
              break;
            }
            lVar12 = lVar12 + 0x100000000;
            lVar5 = uVar19 + 1;
            uVar19 = uVar19 + 1;
          } while (param_2 + lVar5 < param_2 + uVar17);
        }
        cVar8 = '\0';
      }
      else {
        cVar8 = '\0';
      }
LAB_143e1f97c:
      param_2 = local_1c0;
      param_1 = local_1d0;
      local_1e8 = &local_1a8;
      FUN_1408f7a26(&local_160,local_1c0,unaff_RBP,(longlong)((int)uVar17 - iVar9));
      pcVar11 = local_1d8;
      if (local_1d9 == ']') {
        local_1c8 = (ulonglong)((int)local_1c8 - (uint)(0 < (int)local_1c8));
        if (lVar23 == 0) {
LAB_143e1fad0:
          FUN_141016694(param_1,&local_160,local_1d8);
          cVar7 = FUN_140d4c998(param_1,*(undefined2 *)(pcVar11 + 4),local_1b0);
          lVar23 = 1;
          if (cVar7 == '\0') {
            FUN_1401d9a90(&local_160);
            uVar17 = 0;
            pppppppuVar20 = local_188;
            goto LAB_143e1fc01;
          }
        }
        else {
          if (lStack_150 != 0) goto LAB_143e1f9e9;
          lVar23 = 1;
        }
      }
      else {
        if (lVar23 == 0) goto LAB_143e1fad0;
LAB_143e1f9e9:
        ppppppuVar13 = (undefined8 ******)FUN_14001cc68(0x68,0x10);
        ppppppuVar13[1] = (undefined8 *****)0x0;
        ppppppuVar13[2] = (undefined8 *****)0x0;
        ppppppuVar13[3] = (undefined8 *****)0x0;
        ppppppuVar13[4] = (undefined8 *****)0xf;
        ppppppuVar13[5] = (undefined8 *****)0x0;
        ppppppuVar13[6] = (undefined8 *****)0x0;
        *ppppppuVar13 = (undefined8 *****)&PTR_FUN_14b4257d8;
        *(undefined1 *)(ppppppuVar13 + 7) = 0;
        *(undefined2 *)((longlong)ppppppuVar13 + 0x3a) = 0;
        ppppppuVar13[8] = (undefined8 *****)0x0;
        ppppppuVar13[9] = (undefined8 *****)0x0;
        ppppppuVar13[10] = (undefined8 *****)0x0;
        ppppppuVar13[0xb] = param_1;
        *(undefined2 *)(ppppppuVar13 + 0xc) = 0;
        FUN_141016694(ppppppuVar13,&local_160,local_1d8);
        iVar9 = *(int *)(param_1 + 0x18);
        ppppppuVar14 = ppppppuVar13;
        if ((longlong)iVar9 != 0) {
          ppppppuVar14 = (undefined8 ******)param_1[0xd];
        }
        param_1[0xd] = ppppppuVar14;
        *(uint *)(param_1 + 0x18) = iVar9 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc4) < iVar9 + 1U) {
          FUN_140be38f6(local_1b8);
        }
        (*local_1b8)[iVar9] = ppppppuVar13;
        uVar19 = local_1c8;
        if ((int)uStack_180 == 0) {
          if (local_1d9 == '[') goto LAB_143e1fb2b;
        }
        else {
          ppppppuVar14 = local_188[(int)local_1c8];
          if (local_1d9 == '[') {
            if (ppppppuVar14 != (undefined8 ******)0x0) {
              ppppppuVar13[10] = ppppppuVar14;
              pppppuVar1 = ppppppuVar14[9];
              if (ppppppuVar14[9] == (undefined8 *****)0x0) {
                ppppppuVar14 = ppppppuVar14 + 9;
              }
              else {
                do {
                  pppppuVar21 = pppppuVar1;
                  pppppuVar1 = (undefined8 *****)pppppuVar21[8];
                } while (pppppuVar1 != (undefined8 *****)0x0);
                ppppppuVar14 = (undefined8 ******)(pppppuVar21 + 8);
              }
              *ppppppuVar14 = ppppppuVar13;
            }
LAB_143e1fb2b:
            uVar19 = (ulonglong)((int)local_1c8 + 1);
          }
          else if (ppppppuVar14 != (undefined8 ******)0x0) {
            ppppppuVar13[10] = ppppppuVar14[10];
            ppppppuVar14[8] = ppppppuVar13;
          }
        }
        *(short *)((longlong)ppppppuVar13 + 0x3a) = (short)uVar19;
        if ((int)uStack_180 <= (int)uVar19) {
          FUN_1418a89ce(&local_188);
        }
        local_188[(int)uVar19] = ppppppuVar13;
        local_1c8 = uVar19;
      }
      iVar9 = (int)uVar17 + 1;
      FUN_1401d9a90(&local_160);
      unaff_RBP = (ulonglong)iVar9;
      uVar17 = *(ulonglong *)(param_2 + 0x10);
    } while (unaff_RBP < uVar17);
  }
  if (local_1d8[2] == '\x01') {
    FUN_140d4cc24(param_1,0);
  }
  pcVar11 = local_1d8;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)local_1d8;
  *(undefined2 *)((longlong)param_1 + 0x7c) = *(undefined2 *)(local_1d8 + 4);
  FUN_1401d7e14(param_1 + 0x10,local_1d8 + 8);
  uVar2 = *(undefined4 *)(pcVar11 + 0x2c);
  uVar3 = *(undefined4 *)(pcVar11 + 0x30);
  uVar4 = *(undefined4 *)(pcVar11 + 0x34);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(pcVar11 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  param_1[0x16] = *(undefined8 *****)(pcVar11 + 0x38);
  uVar17 = CONCAT71((int7)(unaff_RBP >> 8),1);
  pppppppuVar20 = local_188;
LAB_143e1fc01:
  if (pppppppuVar20 != (undefined8 *******)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 143e20286 FUN_143e20286 body=6061 status=ok
// SIG undefined FUN_143e20286(void)

void FUN_143e20286(longlong param_1,undefined8 *param_2,char *param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 ****ppppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  undefined8 ****ppppuVar25;
  int iVar26;
  bool bVar27;
  undefined1 auStack_f8 [32];
  undefined8 ***local_d8;
  longlong local_c8;
  char *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 ***local_98;
  ulonglong local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 ***local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3[3] != '\x01') {
    if ((*param_3 == '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) goto LAB_143e203c5;
    if (param_3[2] == '\x01') {
      FUN_1408f6f98(param_1);
    }
    local_88 = (undefined8 ****)0x0;
    uStack_80 = 0;
    local_78 = (undefined8 ****)0x0;
    local_70 = 0xf;
    cVar4 = FUN_140eff84e(param_1,&local_88,param_3);
    if (cVar4 == '\0') {
      FUN_1401d7cf8(&local_88,&DAT_14b424f8e);
    }
    puVar11 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar11 = (undefined8 *)*param_2;
    }
    param_2[2] = 0;
    *(undefined1 *)puVar11 = 0;
    lVar16 = param_2[2];
    ppppuVar10 = (undefined8 ****)param_2[3];
    local_c8 = param_1;
    if (ppppuVar10 < local_78 + *(int *)(param_1 + 0xc0)) {
      FUN_140c1c900(param_2,(longlong)(local_78 + *(int *)(param_1 + 0xc0)) - lVar16);
      param_2[2] = lVar16;
      ppppuVar10 = (undefined8 ****)param_2[3];
    }
    ppppuVar25 = &local_88;
    if (0xf < local_70) {
      ppppuVar25 = (undefined8 ****)local_88;
    }
    if ((undefined8 ****)((longlong)ppppuVar10 - lVar16) < local_78) {
      local_d8 = local_78;
      FUN_140c91e84(param_2,local_78,local_78,ppppuVar25);
    }
    else {
      puVar1 = (undefined1 *)((longlong)local_78 + lVar16);
      param_2[2] = puVar1;
      puVar11 = param_2;
      if (&DAT_0000000f < ppppuVar10) {
        puVar11 = (undefined8 *)*param_2;
      }
      memmove((undefined1 *)(lVar16 + (longlong)puVar11),ppppuVar25,(size_t)local_78);
      *(undefined1 *)((longlong)puVar11 + (longlong)puVar1) = 0;
    }
    local_b8 = 0;
    uStack_b0 = 0;
    lVar16 = *(longlong *)(local_c8 + 0x68);
    if (lVar16 != 0) {
      iVar26 = 1;
      do {
        if (0 < iVar26) {
          uVar13 = param_2[2];
          if (param_2[3] == uVar13) {
            local_d8 = (undefined8 ***)&DAT_00000001;
            FUN_140c91e84(param_2,1);
          }
          else {
            param_2[2] = uVar13 + 1;
            puVar11 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar11 = (undefined8 *)*param_2;
            }
            *(undefined2 *)((longlong)puVar11 + uVar13) = 0x2c;
          }
        }
        local_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        local_98 = (undefined8 ****)0x0;
        local_90 = 0xf;
        cVar4 = FUN_140eff84e(lVar16,&local_a8,param_3);
        if (cVar4 != '\0') {
          puVar11 = &local_a8;
          if (0xf < local_90) {
            puVar11 = local_a8;
          }
          lVar18 = param_2[2];
          if ((undefined8 ****)(param_2[3] - lVar18) < local_98) {
            local_d8 = local_98;
            FUN_140c91e84(param_2,local_98);
          }
          else {
            puVar1 = (undefined1 *)(lVar18 + (longlong)local_98);
            param_2[2] = puVar1;
            puVar12 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar12 = (undefined8 *)*param_2;
            }
            memmove((void *)(lVar18 + (longlong)puVar12),puVar11,(size_t)local_98);
            *(undefined1 *)((longlong)puVar12 + (longlong)puVar1) = 0;
          }
        }
        if (*(longlong *)(lVar16 + 0x48) == 0) {
          iVar26 = iVar26 + 1;
          for (lVar16 = *(longlong *)(lVar16 + 0x40); lVar16 == 0;
              lVar16 = *(longlong *)(lVar16 + 0x40)) {
            if ((int)uStack_b0 < 1) {
              FUN_1401d9a90(&local_a8);
              goto LAB_143e2146c;
            }
            uVar13 = param_2[2];
            if (param_2[3] == uVar13) {
              local_d8 = (undefined8 ***)&DAT_00000001;
              FUN_140c91e84(param_2,1);
            }
            else {
              param_2[2] = uVar13 + 1;
              puVar11 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar11 = (undefined8 *)*param_2;
              }
              *(undefined2 *)((longlong)puVar11 + uVar13) = 0x5d;
            }
            lVar16 = *(longlong *)(local_b8 + -8 + (longlong)(int)uStack_b0 * 8);
            uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + -1);
            FUN_1418a8b78(&local_b8);
          }
        }
        else {
          uVar13 = param_2[2];
          if (param_2[3] == uVar13) {
            local_d8 = (undefined8 ***)&DAT_00000001;
            FUN_140c91e84(param_2,1);
          }
          else {
            param_2[2] = uVar13 + 1;
            puVar11 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar11 = (undefined8 *)*param_2;
            }
            *(undefined2 *)((longlong)puVar11 + uVar13) = 0x5b;
          }
          uVar13 = uStack_b0;
          lVar18 = (longlong)(int)uStack_b0;
          uVar5 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
          if (uStack_b0._4_4_ < uVar5) {
            FUN_140be38f6(&local_b8,uVar13 & 0xffffffff);
          }
          *(longlong *)(local_b8 + lVar18 * 8) = lVar16;
          lVar16 = *(longlong *)(lVar16 + 0x48);
          iVar26 = 0;
        }
        FUN_1401d9a90(&local_a8);
      } while (lVar16 != 0);
    }
LAB_143e2146c:
    lVar16 = local_c8;
    if (param_3[1] == '\x01') {
      *(undefined1 *)(local_c8 + 0x108) = 0;
      *(undefined4 *)(local_c8 + 0xe0) = 0;
      if (0x80 < *(uint *)(local_c8 + 0xe4)) {
        *(undefined4 *)(local_c8 + 0xe4) = 0x80;
        FUN_1446efbd8(local_c8 + 200,0);
      }
      puVar11 = (undefined8 *)(lVar16 + 0xe8);
      puVar12 = puVar11;
      if (0xf < *(ulonglong *)(lVar16 + 0x100)) {
        puVar12 = (undefined8 *)*puVar11;
      }
      *(undefined8 *)(lVar16 + 0xf8) = 0;
      *(undefined1 *)puVar12 = 0;
      FUN_1401d7e14(puVar11,param_2);
      *(undefined1 *)(lVar16 + 0x108) = 0;
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1401d9a90(&local_88);
    goto LAB_143e21671;
  }
  if (((*param_3 == '\0') && (*(char *)(param_1 + 0x108) == '\x01')) &&
     (*(longlong *)(param_1 + 0xf8) != 0)) {
LAB_143e203c5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(DAT_14c707940 ^ (ulonglong)auStack_f8 ^ (ulonglong)auStack_f8);
  }
  if (param_3[2] == '\x01') {
    FUN_1408f6f98(param_1);
  }
  uVar3 = *(undefined4 *)param_3;
  uStack_a0 = *(undefined8 *)(param_3 + 8);
  local_98 = *(undefined8 ****)(param_3 + 0x10);
  local_a8 = (undefined8 *)CONCAT44(8,uVar3);
  puVar11 = local_a8;
  local_78 = (undefined8 ****)0x0;
  local_70 = 0x8000000000;
  local_a8._0_1_ = (char)uVar3;
  local_a8 = puVar11;
  if (((char)local_a8 == '\0') && (iVar26 = *(int *)(param_1 + 0xe0), 0 < iVar26)) {
    if ((undefined8 ****)(param_1 + 200) != &local_88) {
      if ((int)(iVar26 + 0x1fU & 0xffffffe0) < 0x81) {
        local_70 = CONCAT44(0x80,iVar26);
      }
      else {
        local_70 = ((ulonglong)(iVar26 + 0x1fU) & 0xffffffe0) << 0x20;
        FUN_1446efbd8(&local_88);
        iVar26 = *(int *)(param_1 + 0xe0);
        local_70 = CONCAT44(local_70._4_4_,iVar26);
        if (iVar26 == 0) goto LAB_143e203a4;
      }
      ppppuVar10 = (undefined8 ****)(param_1 + 200);
      if (*(undefined8 *****)(param_1 + 0xd8) != (undefined8 ****)0x0) {
        ppppuVar10 = *(undefined8 *****)(param_1 + 0xd8);
      }
      ppppuVar25 = &local_88;
      if ((undefined8 ****)local_78 != (undefined8 ****)0x0) {
        ppppuVar25 = (undefined8 ****)local_78;
      }
      memcpy(ppppuVar25,ppppuVar10,(ulonglong)(iVar26 + 0x1fU >> 3 & 0xfffffffc));
    }
LAB_143e203a4:
    uVar5 = (uint)local_70;
    uVar24 = 8;
LAB_143e213c9:
    if ((0 < (int)(uVar5 % uVar24)) && (iVar26 = uVar24 - uVar5 % uVar24, 0 < iVar26)) {
      iVar6 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar6 = uVar5 - 1;
      }
      iVar23 = iVar26 + uVar5;
      iVar8 = iVar26 + uVar5 + -1;
      iVar7 = iVar26 + uVar5 + 0x1e;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      if (iVar7 >> 5 == iVar6 >> 5) {
        local_70 = CONCAT44(local_70._4_4_,iVar23);
      }
      else {
        if (local_70._4_4_ < iVar23) {
          uVar24 = uVar5;
          if (iVar23 + 0x1fU < 0xa0) {
            iVar6 = 0x80;
          }
          else {
            uVar22 = iVar23 + 0x1fU >> 5;
            if (local_70._4_4_ + 0x1fU < 0xa0) {
              uVar15 = 4;
              if (4 < uVar22) {
                uVar15 = uVar22;
              }
            }
            else {
              uVar15 = uVar22 + (uVar22 * 3 >> 3) + 0x10;
            }
            uVar13 = (ulonglong)(uVar15 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar9 = (uint)(uVar13 + 0xf);
                if (uVar15 < 0x1ffd) {
                  uVar13 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
                }
                else {
                  uVar14 = uVar13 + 0xf & 0xfffffffffffffff0;
                  if (uVar14 < 0x7ff1) {
                    bVar21 = (&DAT_14c841e00)[uVar9 >> 4];
                    uVar17 = 0x32;
                    if (0x32 < bVar21) {
                      uVar17 = (ulonglong)bVar21;
                    }
                    uVar20 = 0x32 - (ulonglong)bVar21;
                    do {
                      uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_143e218cb;
                      lVar16 = uVar17 + 1 + uVar20;
                      uVar20 = uVar20 - 1;
                    } while (lVar16 != 0x33);
                  }
                  uVar13 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar13 = (ulonglong)DAT_14c841df8;
                  }
                  uVar13 = -uVar13 & (uVar14 + uVar13) - 1;
                }
              }
              else {
                uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
                uVar24 = (uint)local_70;
              }
            }
LAB_143e218cb:
            iVar23 = (int)(uVar13 >> 2);
            iVar6 = -0x20;
            if ((int)uVar22 <= iVar23) {
              iVar6 = iVar23 << 5;
            }
          }
          local_70 = CONCAT44(iVar6,(uint)local_70);
          FUN_1446efbd8(&local_88,uVar24);
          iVar23 = (uint)local_70 + iVar26;
        }
        iVar6 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar6 = iVar23;
        }
        local_70 = CONCAT44(local_70._4_4_,iVar23);
        if (iVar23 % 0x20 != 0) {
          ppppuVar10 = (undefined8 ****)local_78;
          if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
            ppppuVar10 = &local_88;
          }
          bVar21 = -(char)(iVar23 % 0x20);
          *(uint *)((longlong)ppppuVar10 + (longlong)(iVar6 >> 5) * 4) =
               (uint)(*(int *)((longlong)ppppuVar10 + (longlong)(iVar6 >> 5) * 4) << (bVar21 & 0x1f)
                     ) >> (bVar21 & 0x1f);
        }
      }
      FUN_1447c6044(&local_88,uVar5,iVar26,0);
      uVar5 = (uint)local_70;
    }
  }
  else {
    local_a8._2_1_ = (char)((uint)uVar3 >> 0x10);
    bVar27 = local_a8._2_1_ == '\x01';
    if (bVar27) {
      FUN_1408f6f98(param_1);
    }
    if (0x80 < *(int *)(param_1 + 0xc0) * 9 + 9) {
      uVar5 = *(int *)(param_1 + 0xc0) * 9;
      uVar24 = uVar5 + 0x28 >> 5;
      uVar13 = (ulonglong)(uVar24 * 4);
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar22 = (uint)(uVar13 + 0xf);
          if (uVar5 < 0x3ff78) {
            uVar13 = (ulonglong)
                     (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
          }
          else {
            uVar14 = (ulonglong)(uVar22 & 0xfffffff0);
            if (uVar14 < 0x7ff1) {
              bVar21 = (&DAT_14c841e00)[uVar22 >> 4];
              uVar17 = 0x32;
              if (0x32 < bVar21) {
                uVar17 = (ulonglong)bVar21;
              }
              uVar20 = 0x32 - (ulonglong)bVar21;
              do {
                uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_143e217a6;
                lVar16 = uVar17 + 1 + uVar20;
                uVar20 = uVar20 - 1;
              } while (lVar16 != 0x33);
            }
            uVar13 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar13 = (ulonglong)DAT_14c841df8;
            }
            uVar13 = -uVar13 & (uVar14 + uVar13) - 1;
          }
        }
        else {
          uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
        }
      }
LAB_143e217a6:
      iVar6 = (int)(uVar13 >> 2);
      iVar26 = -0x20;
      if ((int)uVar24 <= iVar6) {
        iVar26 = iVar6 << 5;
      }
      local_70 = CONCAT44(iVar26,(uint)local_70);
      FUN_1446efbd8(&local_88,0);
    }
    local_c0 = param_3;
    FUN_140cde66a(param_1,&local_88,&local_a8);
    local_b8 = 0;
    uStack_b0 = 0;
    lVar16 = *(longlong *)(param_1 + 0x68);
    if (lVar16 != 0) {
      do {
        uVar13 = local_70;
        if ((uint)local_70 == 0) {
          iVar26 = -1;
        }
        else {
          iVar26 = (uint)local_70 + 0x1e;
          if (-1 < (int)((uint)local_70 + -1)) {
            iVar26 = (uint)local_70 + -1;
          }
          iVar26 = iVar26 >> 5;
        }
        iVar6 = (uint)local_70 + 1;
        iVar23 = (uint)local_70 + 0x1f;
        if (-1 < (int)(uint)local_70) {
          iVar23 = (uint)local_70;
        }
        if (iVar23 >> 5 == iVar26) {
          local_70 = CONCAT44(local_70._4_4_,iVar6);
        }
        else {
          if (local_70._4_4_ <= (int)(uint)local_70) {
            if ((uint)local_70 + 0x20 < 0xa0) {
              iVar6 = 0x80;
              iVar26 = (uint)local_70;
            }
            else {
              uVar5 = (uint)local_70 + 0x20 >> 5;
              if (local_70._4_4_ + 0x1fU < 0xa0) {
                uVar24 = 4;
                if (4 < uVar5) {
                  uVar24 = uVar5;
                }
              }
              else {
                uVar24 = uVar5 + (uVar5 * 3 >> 3) + 0x10;
              }
              uVar14 = (ulonglong)(uVar24 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar22 = (uint)(uVar14 + 0xf);
                  if (uVar24 < 0x1ffd) {
                    uVar14 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]];
                  }
                  else {
                    uVar17 = uVar14 + 0xf & 0xfffffffffffffff0;
                    if (uVar17 < 0x7ff1) {
                      bVar21 = (&DAT_14c841e00)[uVar22 >> 4];
                      uVar20 = 0x32;
                      if (0x32 < bVar21) {
                        uVar20 = (ulonglong)bVar21;
                      }
                      uVar19 = 0x32 - (ulonglong)bVar21;
                      do {
                        uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0) goto LAB_143e20f23;
                        lVar18 = uVar20 + 1 + uVar19;
                        uVar19 = uVar19 - 1;
                      } while (lVar18 != 0x33);
                    }
                    uVar14 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar14 = 0x10;
                    }
                    uVar14 = -uVar14 & (uVar17 + uVar14) - 1;
                  }
                }
                else {
                  uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
                }
              }
LAB_143e20f23:
              iVar7 = (int)(uVar14 >> 2);
              iVar6 = iVar7 << 5;
              iVar26 = (uint)local_70;
              if (iVar7 < (int)uVar5) {
                iVar6 = -0x20;
              }
            }
            local_70 = CONCAT44(iVar6,(uint)local_70);
            FUN_1446efbd8(&local_88,iVar26);
            iVar6 = (uint)local_70 + 1;
          }
          iVar26 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar26 = iVar6;
          }
          local_70 = CONCAT44(local_70._4_4_,iVar6);
          if (iVar6 % 0x20 != 0) {
            ppppuVar10 = (undefined8 ****)local_78;
            if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
              ppppuVar10 = &local_88;
            }
            bVar21 = -(char)(iVar6 % 0x20);
            *(uint *)((longlong)ppppuVar10 + (longlong)(iVar26 >> 5) * 4) =
                 (uint)(*(int *)((longlong)ppppuVar10 + (longlong)(iVar26 >> 5) * 4) <<
                       (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
          }
        }
        ppppuVar10 = (undefined8 ****)local_78;
        if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
          ppppuVar10 = &local_88;
        }
        puVar2 = (uint *)((longlong)ppppuVar10 + (longlong)(iVar23 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar13 & 0x1f);
        FUN_140cde66a(lVar16,&local_88,&local_a8);
        uVar13 = uStack_b0;
        if (*(longlong *)(lVar16 + 0x48) == 0) {
          for (lVar16 = *(longlong *)(lVar16 + 0x40); uVar13 = local_70, lVar16 == 0;
              lVar16 = *(longlong *)(lVar16 + 0x40)) {
            if ((int)uStack_b0 < 1) goto LAB_143e212f2;
            if ((uint)local_70 == 0) {
              iVar26 = -1;
            }
            else {
              iVar26 = (uint)local_70 + 0x1e;
              if (-1 < (int)((uint)local_70 + -1)) {
                iVar26 = (uint)local_70 + -1;
              }
              iVar26 = iVar26 >> 5;
            }
            iVar6 = (uint)local_70 + 1;
            iVar23 = (uint)local_70 + 0x1f;
            if (-1 < (int)(uint)local_70) {
              iVar23 = (uint)local_70;
            }
            if (iVar23 >> 5 == iVar26) {
              local_70._0_4_ = iVar6;
            }
            else {
              if (local_70._4_4_ <= (int)(uint)local_70) {
                if ((uint)local_70 + 0x20 < 0xa0) {
                  iVar6 = 0x80;
                  iVar26 = (uint)local_70;
                }
                else {
                  uVar5 = (uint)local_70 + 0x20 >> 5;
                  if (local_70._4_4_ + 0x1fU < 0xa0) {
                    uVar24 = 4;
                    if (4 < uVar5) {
                      uVar24 = uVar5;
                    }
                  }
                  else {
                    uVar24 = uVar5 + (uVar5 * 3 >> 3) + 0x10;
                  }
                  uVar14 = (ulonglong)(uVar24 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar22 = (uint)(uVar14 + 0xf);
                      if (uVar24 < 0x1ffd) {
                        uVar14 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]];
                      }
                      else {
                        uVar17 = uVar14 + 0xf & 0xfffffffffffffff0;
                        if (uVar17 < 0x7ff1) {
                          bVar21 = (&DAT_14c841e00)[uVar22 >> 4];
                          uVar20 = 0x32;
                          if (0x32 < bVar21) {
                            uVar20 = (ulonglong)bVar21;
                          }
                          uVar19 = 0x32 - (ulonglong)bVar21;
                          do {
                            uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0)
                            goto LAB_143e20b20;
                            lVar16 = uVar20 + 1 + uVar19;
                            uVar19 = uVar19 - 1;
                          } while (lVar16 != 0x33);
                        }
                        uVar14 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar14 = 0x10;
                        }
                        uVar14 = -uVar14 & (uVar17 + uVar14) - 1;
                      }
                    }
                    else {
                      uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
                    }
                  }
LAB_143e20b20:
                  iVar7 = (int)(uVar14 >> 2);
                  iVar6 = iVar7 << 5;
                  iVar26 = (uint)local_70;
                  if (iVar7 < (int)uVar5) {
                    iVar6 = -0x20;
                  }
                }
                local_70 = CONCAT44(iVar6,(uint)local_70);
                FUN_1446efbd8(&local_88,iVar26);
                iVar6 = (uint)local_70 + 1;
              }
              iVar26 = iVar6 + 0x1f;
              if (-1 < iVar6) {
                iVar26 = iVar6;
              }
              local_70._0_4_ = iVar6;
              if (iVar6 % 0x20 != 0) {
                ppppuVar10 = (undefined8 ****)local_78;
                if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
                  ppppuVar10 = &local_88;
                }
                bVar21 = -(char)(iVar6 % 0x20);
                *(uint *)((longlong)ppppuVar10 + (longlong)(iVar26 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppppuVar10 + (longlong)(iVar26 >> 5) * 4) <<
                           (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
              }
            }
            ppppuVar10 = (undefined8 ****)local_78;
            if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
              ppppuVar10 = &local_88;
            }
            bVar21 = (byte)uVar13 & 0x1f;
            puVar2 = (uint *)((longlong)ppppuVar10 + (longlong)(iVar23 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
            iVar26 = (uint)local_70;
            if ((uint)local_70 == 0) {
              iVar6 = -1;
            }
            else {
              iVar6 = (uint)local_70 + 0x1e;
              if (-1 < (int)((uint)local_70 + -1)) {
                iVar6 = (uint)local_70 + -1;
              }
              iVar6 = iVar6 >> 5;
            }
            iVar23 = (uint)local_70 + 1;
            iVar7 = (uint)local_70 + 0x1f;
            if (-1 < (int)(uint)local_70) {
              iVar7 = (uint)local_70;
            }
            if (iVar7 >> 5 == iVar6) {
              local_70 = CONCAT44(local_70._4_4_,iVar23);
            }
            else {
              if (local_70._4_4_ <= (int)(uint)local_70) {
                if ((uint)local_70 + 0x20 < 0xa0) {
                  local_70._4_4_ = 0x80;
                }
                else {
                  uVar5 = (uint)local_70 + 0x20 >> 5;
                  if (local_70._4_4_ + 0x1fU < 0xa0) {
                    uVar24 = 4;
                    if (4 < uVar5) {
                      uVar24 = uVar5;
                    }
                  }
                  else {
                    uVar24 = uVar5 + (uVar5 * 3 >> 3) + 0x10;
                  }
                  uVar13 = (ulonglong)(uVar24 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar22 = (uint)(uVar13 + 0xf);
                      if (uVar24 < 0x1ffd) {
                        uVar13 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]];
                      }
                      else {
                        uVar14 = uVar13 + 0xf & 0xfffffffffffffff0;
                        if (uVar14 < 0x7ff1) {
                          bVar21 = (&DAT_14c841e00)[uVar22 >> 4];
                          uVar17 = 0x32;
                          if (0x32 < bVar21) {
                            uVar17 = (ulonglong)bVar21;
                          }
                          uVar20 = 0x32 - (ulonglong)bVar21;
                          do {
                            uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0)
                            goto LAB_143e20bc6;
                            lVar16 = uVar17 + 1 + uVar20;
                            uVar20 = uVar20 - 1;
                          } while (lVar16 != 0x33);
                        }
                        uVar13 = (ulonglong)DAT_14c841df8;
                        if (DAT_14c841df8 < 0x11) {
                          uVar13 = 0x10;
                        }
                        uVar13 = -uVar13 & (uVar14 + uVar13) - 1;
                      }
                    }
                    else {
                      uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
                    }
                  }
LAB_143e20bc6:
                  iVar6 = (int)(uVar13 >> 2);
                  local_70._4_4_ = iVar6 << 5;
                  if (iVar6 < (int)uVar5) {
                    local_70._4_4_ = -0x20;
                  }
                }
                FUN_1446efbd8(&local_88,(uint)local_70);
                iVar23 = (uint)local_70 + 1;
              }
              iVar6 = iVar23 + 0x1f;
              if (-1 < iVar23) {
                iVar6 = iVar23;
              }
              local_70 = CONCAT44(local_70._4_4_,iVar23);
              if (iVar23 % 0x20 != 0) {
                ppppuVar10 = (undefined8 ****)local_78;
                if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
                  ppppuVar10 = &local_88;
                }
                bVar21 = -(char)(iVar23 % 0x20);
                *(uint *)((longlong)ppppuVar10 + (longlong)(iVar6 >> 5) * 4) =
                     (uint)(*(int *)((longlong)ppppuVar10 + (longlong)(iVar6 >> 5) * 4) <<
                           (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
              }
            }
            ppppuVar10 = (undefined8 ****)local_78;
            if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
              ppppuVar10 = &local_88;
            }
            bVar21 = (byte)iVar26 & 0x1f;
            puVar2 = (uint *)((longlong)ppppuVar10 + (longlong)(iVar7 >> 5) * 4);
            *puVar2 = *puVar2 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
            lVar16 = *(longlong *)(local_b8 + -8 + (longlong)(int)uStack_b0 * 8);
            uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + -1);
            FUN_1418a8b78(&local_b8);
          }
        }
        else {
          lVar18 = (longlong)(int)uStack_b0;
          uVar5 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
          if (uStack_b0._4_4_ < uVar5) {
            FUN_140be38f6(&local_b8,uVar13 & 0xffffffff);
          }
          uVar13 = local_70;
          *(longlong *)(local_b8 + lVar18 * 8) = lVar16;
          lVar16 = *(longlong *)(lVar16 + 0x48);
          if ((uint)local_70 == 0) {
            iVar26 = -1;
          }
          else {
            iVar26 = (uint)local_70 + 0x1e;
            if (-1 < (int)((uint)local_70 + -1)) {
              iVar26 = (uint)local_70 + -1;
            }
            iVar26 = iVar26 >> 5;
          }
          iVar6 = (uint)local_70 + 1;
          iVar23 = (uint)local_70 + 0x1f;
          if (-1 < (int)(uint)local_70) {
            iVar23 = (uint)local_70;
          }
          if (iVar23 >> 5 == iVar26) {
            local_70._0_4_ = iVar6;
          }
          else {
            if (local_70._4_4_ <= (int)(uint)local_70) {
              if ((uint)local_70 + 0x20 < 0xa0) {
                iVar6 = 0x80;
                iVar26 = (uint)local_70;
              }
              else {
                uVar5 = (uint)local_70 + 0x20 >> 5;
                if (local_70._4_4_ + 0x1fU < 0xa0) {
                  uVar24 = 4;
                  if (4 < uVar5) {
                    uVar24 = uVar5;
                  }
                }
                else {
                  uVar24 = uVar5 + (uVar5 * 3 >> 3) + 0x10;
                }
                uVar14 = (ulonglong)(uVar24 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar22 = (uint)(uVar14 + 0xf);
                    if (uVar24 < 0x1ffd) {
                      uVar14 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]];
                    }
                    else {
                      uVar17 = uVar14 + 0xf & 0xfffffffffffffff0;
                      if (uVar17 < 0x7ff1) {
                        bVar21 = (&DAT_14c841e00)[uVar22 >> 4];
                        uVar20 = 0x32;
                        if (0x32 < bVar21) {
                          uVar20 = (ulonglong)bVar21;
                        }
                        uVar19 = 0x32 - (ulonglong)bVar21;
                        do {
                          uVar14 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0)
                          goto LAB_143e20fc2;
                          lVar18 = uVar20 + 1 + uVar19;
                          uVar19 = uVar19 - 1;
                        } while (lVar18 != 0x33);
                      }
                      uVar14 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar14 = 0x10;
                      }
                      uVar14 = -uVar14 & (uVar17 + uVar14) - 1;
                    }
                  }
                  else {
                    uVar14 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar14,0);
                  }
                }
LAB_143e20fc2:
                iVar7 = (int)(uVar14 >> 2);
                iVar6 = iVar7 << 5;
                iVar26 = (uint)local_70;
                if (iVar7 < (int)uVar5) {
                  iVar6 = -0x20;
                }
              }
              local_70 = CONCAT44(iVar6,(uint)local_70);
              FUN_1446efbd8(&local_88,iVar26);
              iVar6 = (uint)local_70 + 1;
            }
            iVar26 = iVar6 + 0x1f;
            if (-1 < iVar6) {
              iVar26 = iVar6;
            }
            local_70._0_4_ = iVar6;
            if (iVar6 % 0x20 != 0) {
              ppppuVar10 = (undefined8 ****)local_78;
              if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
                ppppuVar10 = &local_88;
              }
              bVar21 = -(char)(iVar6 % 0x20);
              *(uint *)((longlong)ppppuVar10 + (longlong)(iVar26 >> 5) * 4) =
                   (uint)(*(int *)((longlong)ppppuVar10 + (longlong)(iVar26 >> 5) * 4) <<
                         (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
            }
          }
          ppppuVar10 = (undefined8 ****)local_78;
          if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
            ppppuVar10 = &local_88;
          }
          bVar21 = (byte)uVar13 & 0x1f;
          puVar2 = (uint *)((longlong)ppppuVar10 + (longlong)(iVar23 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
          iVar26 = (uint)local_70;
          if ((uint)local_70 == 0) {
            iVar6 = -1;
          }
          else {
            iVar6 = (uint)local_70 + 0x1e;
            if (-1 < (int)((uint)local_70 + -1)) {
              iVar6 = (uint)local_70 + -1;
            }
            iVar6 = iVar6 >> 5;
          }
          iVar23 = (uint)local_70 + 1;
          iVar7 = (uint)local_70 + 0x1f;
          if (-1 < (int)(uint)local_70) {
            iVar7 = (uint)local_70;
          }
          if (iVar7 >> 5 == iVar6) {
            local_70 = CONCAT44(local_70._4_4_,iVar23);
          }
          else {
            if (local_70._4_4_ <= (int)(uint)local_70) {
              if ((uint)local_70 + 0x20 < 0xa0) {
                local_70._4_4_ = 0x80;
              }
              else {
                uVar5 = (uint)local_70 + 0x20 >> 5;
                if (local_70._4_4_ + 0x1fU < 0xa0) {
                  uVar24 = 4;
                  if (4 < uVar5) {
                    uVar24 = uVar5;
                  }
                }
                else {
                  uVar24 = uVar5 + (uVar5 * 3 >> 3) + 0x10;
                }
                uVar13 = (ulonglong)(uVar24 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar22 = (uint)(uVar13 + 0xf);
                    if (uVar24 < 0x1ffd) {
                      uVar13 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar22 >> 4]];
                    }
                    else {
                      uVar14 = uVar13 + 0xf & 0xfffffffffffffff0;
                      if (uVar14 < 0x7ff1) {
                        bVar21 = (&DAT_14c841e00)[uVar22 >> 4];
                        uVar17 = 0x32;
                        if (0x32 < bVar21) {
                          uVar17 = (ulonglong)bVar21;
                        }
                        uVar20 = 0x32 - (ulonglong)bVar21;
                        do {
                          uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0)
                          goto LAB_143e21061;
                          lVar18 = uVar17 + 1 + uVar20;
                          uVar20 = uVar20 - 1;
                        } while (lVar18 != 0x33);
                      }
                      uVar13 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar13 = 0x10;
                      }
                      uVar13 = -uVar13 & (uVar14 + uVar13) - 1;
                    }
                  }
                  else {
                    uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
                  }
                }
LAB_143e21061:
                iVar6 = (int)(uVar13 >> 2);
                local_70._4_4_ = iVar6 << 5;
                if (iVar6 < (int)uVar5) {
                  local_70._4_4_ = -0x20;
                }
              }
              FUN_1446efbd8(&local_88,(uint)local_70);
              iVar23 = (uint)local_70 + 1;
            }
            iVar6 = iVar23 + 0x1f;
            if (-1 < iVar23) {
              iVar6 = iVar23;
            }
            local_70 = CONCAT44(local_70._4_4_,iVar23);
            if (iVar23 % 0x20 != 0) {
              ppppuVar10 = (undefined8 ****)local_78;
              if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
                ppppuVar10 = &local_88;
              }
              bVar21 = -(char)(iVar23 % 0x20);
              *(uint *)((longlong)ppppuVar10 + (longlong)(iVar6 >> 5) * 4) =
                   (uint)(*(int *)((longlong)ppppuVar10 + (longlong)(iVar6 >> 5) * 4) <<
                         (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
            }
          }
          ppppuVar10 = (undefined8 ****)local_78;
          if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
            ppppuVar10 = &local_88;
          }
          puVar2 = (uint *)((longlong)ppppuVar10 + (longlong)(iVar7 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar26 & 0x1f);
        }
      } while (lVar16 != 0);
    }
LAB_143e212f2:
    if (local_a8._1_1_ == '\x01') {
      *(undefined1 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0xe0) = 0;
      if (0x80 < *(uint *)(param_1 + 0xe4)) {
        *(undefined4 *)(param_1 + 0xe4) = 0x80;
        FUN_1446efbd8(param_1 + 200);
      }
      puVar11 = (undefined8 *)(param_1 + 0xe8);
      if (0xf < *(ulonglong *)(param_1 + 0x100)) {
        puVar11 = (undefined8 *)*puVar11;
      }
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined1 *)puVar11 = 0;
      ppppuVar10 = (undefined8 ****)(param_1 + 200);
      if (ppppuVar10 != &local_88) {
        uVar5 = (uint)local_70 + 0x1f & 0xffffffe0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if ((*(int *)(param_1 + 0xe4) < (int)uVar5) || (0x80 < *(int *)(param_1 + 0xe4))) {
          uVar24 = 0x80;
          if (0x80 < (int)uVar5) {
            uVar24 = uVar5;
          }
          *(uint *)(param_1 + 0xe4) = uVar24;
          FUN_1446efbd8(ppppuVar10);
        }
        *(uint *)(param_1 + 0xe0) = (uint)local_70;
        if ((uint)local_70 != 0) {
          ppppuVar25 = &local_88;
          if ((undefined8 ****)local_78 != (undefined8 ****)0x0) {
            ppppuVar25 = (undefined8 ****)local_78;
          }
          if (*(undefined8 *****)(param_1 + 0xd8) != (undefined8 ****)0x0) {
            ppppuVar10 = *(undefined8 *****)(param_1 + 0xd8);
          }
          memcpy(ppppuVar10,ppppuVar25,(ulonglong)((uint)local_70 + 0x1f >> 3 & 0xfffffffc));
        }
      }
    }
    param_3 = local_c0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    uVar5 = (uint)local_70;
    uVar24 = local_a8._4_4_;
    if (local_a8._4_4_ != 0) goto LAB_143e213c9;
  }
  uVar24 = uVar5 + 7;
  if (-1 < (int)uVar5) {
    uVar24 = uVar5;
  }
  iVar26 = ((uint)((int)uVar24 >> 3) >> 2) * 5;
  switch((int)uVar24 >> 3 & 3) {
  case 1:
    iVar26 = iVar26 + 2;
    break;
  case 2:
    iVar26 = iVar26 + 3;
    break;
  case 3:
    iVar26 = iVar26 + 4;
  }
  uVar13 = (ulonglong)(iVar26 + 3);
  lVar16 = uVar13 - param_2[2];
  if (uVar13 < (ulonglong)param_2[2] || lVar16 == 0) {
    puVar11 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar11 = (undefined8 *)*param_2;
    }
    param_2[2] = uVar13;
    *(undefined1 *)((longlong)puVar11 + uVar13) = 0;
  }
  else {
    FUN_14014a7b6(param_2,lVar16,0);
  }
  puVar11 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar11 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar11 = 0x40;
  puVar11 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar11 = (undefined8 *)*param_2;
  }
  *(undefined1 *)((longlong)puVar11 + 1) = 0x55;
  puVar11 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar11 = (undefined8 *)*param_2;
  }
  iVar26 = (uint)local_70 + 7;
  if (-1 < (int)(uint)local_70) {
    iVar26 = (uint)local_70;
  }
  ppppuVar10 = (undefined8 ****)local_78;
  if ((undefined8 ****)local_78 == (undefined8 ****)0x0) {
    ppppuVar10 = &local_88;
  }
  iVar26 = FUN_142b30a96(ppppuVar10,iVar26 >> 3,(longlong)puVar11 + 2);
  uVar13 = (ulonglong)(iVar26 + 3);
  lVar16 = uVar13 - param_2[2];
  if (uVar13 < (ulonglong)param_2[2] || lVar16 == 0) {
    puVar11 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar11 = (undefined8 *)*param_2;
    }
    param_2[2] = uVar13;
    *(undefined1 *)((longlong)puVar11 + uVar13) = 0;
  }
  else {
    FUN_14014a7b6(param_2,lVar16,0);
  }
  puVar11 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar11 = (undefined8 *)*param_2;
  }
  *(undefined1 *)((longlong)puVar11 + (ulonglong)(iVar26 + 2)) = 0;
  if (param_3[1] == '\x01') {
    *(undefined1 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (0x80 < *(uint *)(param_1 + 0xe4)) {
      *(undefined4 *)(param_1 + 0xe4) = 0x80;
      FUN_1446efbd8(param_1 + 200,0);
    }
    puVar11 = (undefined8 *)(param_1 + 0xe8);
    puVar12 = puVar11;
    if (0xf < *(ulonglong *)(param_1 + 0x100)) {
      puVar12 = (undefined8 *)*puVar11;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)puVar12 = 0;
    FUN_1401d7e14(puVar11,param_2);
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  if ((undefined8 ****)local_78 != (undefined8 ****)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_a0._2_1_ == '\x01') && ((undefined8 ****)local_98 != (undefined8 ****)0x0)) {
    (*(code *)**local_98)(local_98,1);
  }
LAB_143e21671:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e21a5a FUN_143e21a5a body=69 status=ok
// SIG undefined FUN_143e21a5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e21a5a(void)

{
  _DAT_14cb8a780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e21a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8a788,1);
  return;
}



// FUNCTION 143e21aa0 FUN_143e21aa0 body=30 status=ok
// SIG undefined FUN_143e21aa0(void)

void FUN_143e21aa0(longlong *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_2 != 0) {
    *param_1 = param_2;
    param_1[1] = *(longlong *)(param_2 + 0x68);
  }
  return;
}



// FUNCTION 143e21abe FUN_143e21abe body=22 status=ok
// SIG undefined FUN_143e21abe(void)

void FUN_143e21abe(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}



// FUNCTION 143e21ad4 FUN_143e21ad4 body=519 status=ok
// SIG undefined FUN_143e21ad4(void)

ulonglong FUN_143e21ad4(undefined8 param_1,longlong *param_2,char **param_3)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char *local_188;
  char *local_180;
  undefined8 *local_178;
  char local_170;
  char local_168 [256];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  int local_40 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_3 == (char **)0x0 || param_2 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1447715ec(&local_68,&DAT_14c9485f0);
    local_40[0] = -1;
    cVar2 = (**(code **)(*param_2 + 0x38))(param_2,param_3,&local_68);
    if ((cVar2 == '\0') || (plVar3 = (longlong *)FUN_140be360c(param_1), plVar3 == (longlong *)0x0))
    {
      uVar7 = 0;
    }
    else {
      if ((((int)local_68 != 0) && (local_68._4_4_ != 0)) && ((int)local_68 != DAT_14c948000)) {
        local_188 = local_168;
        local_170 = '\0';
        local_178 = &local_68;
        param_3 = &local_188;
        local_180 = local_188;
        FUN_144859fb0(local_178,param_3,1);
        *local_180 = '\0';
        pcVar1 = local_188;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        sVar4 = strlen(local_188);
        FUN_140cd1a74(&local_1a8,pcVar1,sVar4);
        (**(code **)(*plVar3 + 8))(plVar3);
        FUN_1401d7e14(plVar3 + 1,&local_1a8);
        FUN_1401d9a90(&local_1a8);
        if (local_170 == '\x01') {
          FUN_1400020a8(local_188);
        }
      }
      uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      if (-1 < (short)local_40[0]) {
        uVar5 = (local_40[0] >> 0x1f) + 2;
        (**(code **)(*plVar3 + 8))(plVar3);
        if (*(int *)((longlong)plVar3 + 0x34) < (int)uVar5) {
          FUN_1408f7a70(plVar3 + 5,uVar5);
        }
        uVar6 = 0;
        do {
          local_188 = (char *)CONCAT62(local_188._2_6_,
                                       *(undefined2 *)((longlong)local_40 + uVar6 * 2));
          FUN_1407e1732(plVar3,&local_188,uVar6 & 0xffffffff);
          uVar6 = uVar6 + 1;
        } while (uVar5 != uVar6);
      }
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 143e21cdc FUN_143e21cdc body=129 status=ok
// SIG undefined FUN_143e21cdc(void)

longlong * FUN_143e21cdc(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        bVar6 = *(longlong *)(*param_1 + (longlong)iVar5 * 0x20) == lVar1;
        plVar3 = (longlong *)CONCAT71((int7)((ulonglong)plVar3 >> 8),bVar6);
        if (bVar6) {
          return plVar3;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + *param_1 + 0x18);
      } while (iVar5 != -1);
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 143e21d5e FUN_143e21d5e body=209 status=ok
// SIG undefined FUN_143e21d5e(void)

bool FUN_143e21d5e(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *param_1 + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x20) == lVar1) goto LAB_143e21de0;
        iVar3 = *(int *)(lVar5 + 0x18);
      } while (iVar3 != -1);
    }
  }
  lVar5 = 0;
LAB_143e21de0:
  puVar7 = (undefined8 *)(lVar5 + 8);
  if (lVar5 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  if (puVar7 != (undefined8 *)0x0) {
    iVar3 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_4,*puVar7,iVar3);
    if (param_5 != '\0') {
      FUN_1467db386(param_1,*param_3);
    }
  }
  return puVar7 != (undefined8 *)0x0;
}



// FUNCTION 143e21e62 FUN_143e21e62 body=64 status=ok
// SIG undefined FUN_143e21e62(void)

uint * FUN_143e21e62(undefined8 param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_1447262c2(param_4);
  lVar3 = FUN_140a2fc5c(uVar2);
  if (lVar3 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)*(byte *)(lVar3 + 0xd68);
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar1;
  *(undefined1 *)(param_2 + 8) = 1;
  return param_2;
}



// FUNCTION 143e21ea2 FUN_143e21ea2 body=69 status=ok
// SIG undefined FUN_143e21ea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e21ea2(void)

{
  _DAT_14cb8a870 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e21ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8a878,1);
  return;
}



// FUNCTION 143e21ee7 FUN_143e21ee7 body=69 status=ok
// SIG undefined FUN_143e21ee7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143e21ee7(void)

{
  _DAT_14cb8a880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143e21f29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb8a888,1);
  return;
}



// FUNCTION 143e21f2c FUN_143e21f2c body=173 status=ok
// SIG undefined FUN_143e21f2c(void)

undefined8 FUN_143e21f2c(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [36];
  short local_14;
  undefined2 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((((param_1 == 0) || (lVar2 = FUN_1400f6f32(), lVar2 == 0)) ||
      (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 == 0)) ||
     ((param_2 < 0 || ((longlong)*(int *)(lVar2 + 0x10) == 0)))) {
LAB_143e21fbb:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 8) + lVar4);
      if (((lVar1 != 0) && (*(short *)(lVar1 + 4) < 0)) && (*(int *)(lVar1 + 0x50) == param_2)) {
        local_14 = *(short *)(lVar1 + 2);
        local_12 = *(undefined2 *)(lVar1 + 8);
        if (local_14 < 0) goto LAB_143e21fbb;
        uVar3 = FUN_140d1732e(lVar2,&local_14);
        break;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x10) * 8 != lVar4);
  }
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 143e21fda FUN_143e21fda body=41 status=ok
// SIG undefined FUN_143e21fda(void)

void FUN_143e21fda(void)

{
  DAT_14cb8a8e0 = 0;
  if (DAT_14cb8a8d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d677a0();
  return;
}



// FUNCTION 143e22008 FUN_143e22008 body=543 status=ok
// SIG undefined FUN_143e22008(void)

undefined8 FUN_143e22008(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((((*(byte *)(param_1 + 0x88) & 2) == 0) && (*(char *)(param_1 + 0xd4) != '\x01')) &&
      (lVar7 = FUN_141400eec(*param_2), lVar7 != 0)) &&
     (lVar7 = *(longlong *)(lVar7 + 0x11e8), lVar7 != 0)) {
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    cVar5 = FUN_14895ee02(param_1);
    if (((cVar5 != '\0') &&
        (lVar8 = FUN_14485c28e(*(longlong *)(param_1 + 0x90) + 0x68), uVar9 = local_90,
        uVar4 = local_98, lVar8 != 0)) &&
       ((*(longlong *)(lVar8 + 0xb68) == 0 &&
        ((*(longlong *)(lVar8 + 0xb70) == 0 && ((*(byte *)(lVar8 + 0x101) & 0x20) != 0)))))) {
      uVar2 = (undefined4)local_a0;
      uVar3 = local_a0._4_4_;
      local_c0 = &LAB_143e22228;
      local_b8 = 0;
      FUN_14895ee7e(local_b0,param_1);
      local_d0 = uVar4;
      local_d8 = uVar3;
      local_e0 = uVar2;
      local_e8 = &uStack_88;
      cVar5 = FUN_14880f526(lVar7,lVar8,local_b0,uVar9);
      if (cVar5 != '\0') {
        *(undefined1 *)(param_1 + 0xd4) = 1;
        uVar1 = *(uint *)(lVar7 + 0xc);
        *(uint *)(param_1 + 0xcc) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
        *(int *)(param_1 + 0xd0) = iVar6;
        uVar9 = CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
        goto LAB_143e22073;
      }
    }
  }
  uVar9 = 0;
LAB_143e22073:
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 143e2232c FUN_143e2232c body=792 status=ok
// SIG undefined FUN_143e2232c(void)

longlong FUN_143e2232c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
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
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_14108b142(param_1 + 8);
  if (lVar3 != 0) {
    cVar1 = *(char *)(lVar3 + 0x68);
    plVar4 = (longlong *)FUN_1447262c2(param_4);
    if (cVar1 == '\x01') {
      if (plVar4 != (longlong *)0x0) {
        if (DAT_14cb652c0 == 0) {
          local_90 = &local_70;
          local_70 = FUN_1449e2820;
          local_80 = FUN_14081d0ea;
          local_88 = FUN_1427b09ee;
          local_98 = &LAB_148715fe1;
          local_a0 = FUN_146508b0f;
          local_a8 = L"Engine";
          local_b0 = 0;
          local_b8 = 0x10004001;
          local_c0 = 8;
          local_c8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
        }
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb652c0);
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14cb652c0 == 0) {
            local_90 = &local_70;
            local_70 = FUN_1449e2820;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_1427b09ee;
            local_98 = &LAB_148715fe1;
            local_a0 = FUN_146508b0f;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10004001;
            local_c0 = 8;
            local_c8 = 0x28;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
          }
          plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb652c0);
          if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
            lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
            lVar7 = (**(code **)(*(longlong *)(lVar6 + 0x1a8) + 0x38))(lVar6 + 0x1a8,lVar3);
            lVar6 = lVar7 + 0x10;
            if (lVar7 == 0) {
              lVar6 = lVar3 + 0x30;
            }
            FUN_14034cca6(&local_70,lVar6);
            FUN_1447c3578(&local_70,param_2,param_4);
            goto LAB_143e224ae;
          }
        }
      }
    }
    else if (plVar4 != (longlong *)0x0) {
      lVar6 = FUN_144a82bde();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        FUN_14108b31e(plVar4,&local_70,lVar3);
        FUN_1447c3578(&local_70,param_2,param_4);
LAB_143e224ae:
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar2 != (code *)0x0) {
          ppppuVar8 = (undefined8 ****)local_68[0];
          if (local_50 < 0x19) {
            ppppuVar8 = local_68;
          }
          (*pcVar2)(ppppuVar8);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(local_68[0]);
        }
        goto LAB_143e2236b;
      }
    }
  }
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
LAB_143e2236b:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143e22646 FUN_143e22646 body=921 status=ok
// SIG undefined FUN_143e22646(void)

longlong * FUN_143e22646(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x28))(param_1,&local_58);
  lVar6 = local_58;
  if (local_58 == 0) goto LAB_143e2292e;
  bVar3 = *(byte *)(param_1 + 6);
  if (bVar3 - 1 < 2) {
    *(byte *)(local_58 + 0x50) = *(byte *)(local_58 + 0x50) & 0xfe | bVar3 == 2;
    lVar11 = param_1[8];
    if (lVar11 == 0) {
      uVar9 = FUN_14110242a();
      lVar11 = FUN_14477b664(uVar9);
      param_1[8] = lVar11;
    }
    lVar10 = param_1[9];
    if (lVar10 == 0) {
      if ((lVar11 != 0) && (param_1[7] != 0)) {
        plVar4 = *(longlong **)(lVar11 + 0xb8);
        if (plVar4 != (longlong *)0x0) {
          cVar8 = (**(code **)(*plVar4 + 0x108))(plVar4);
          if (cVar8 != '\0') {
            uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar10 = FUN_144aff482(uVar9,param_1 + 7);
            param_1[9] = lVar10;
            if (lVar10 != 0) goto LAB_143e2272a;
            goto LAB_143e22914;
          }
        }
        param_1[9] = 0;
      }
    }
    else {
LAB_143e2272a:
      (**(code **)(*(longlong *)*param_3 + 0x68))((longlong *)*param_3,lVar10);
      plVar4 = local_50;
      lVar11 = local_58;
      puVar13 = &LAB_1458828e2;
      if (bVar3 == 2) {
        puVar13 = &LAB_1489614be;
      }
      plVar5 = (longlong *)*param_3;
      if (local_50 == (longlong *)0x0) {
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        local_60 = 3;
        *local_68 = &PTR_LAB_149e06450;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_68[2] = lVar12;
        *local_68 = &PTR_FUN_14b426b70;
        local_68[3] = lVar11;
        local_68[4] = 0;
        local_68[5] = puVar13;
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,3,0x10);
        local_60 = 3;
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *local_68 = &PTR_LAB_149e06450;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar7 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar7 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar7;
        local_68[2] = lVar12;
        *local_68 = &PTR_FUN_14b426b70;
        local_68[3] = lVar11;
        local_68[4] = plVar4;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        local_68[5] = puVar13;
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
      (**(code **)(*plVar5 + 0x28))(plVar5,lVar10,&local_68);
      if (local_60 == 0) {
LAB_143e228e4:
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        local_60 = 0;
        goto LAB_143e228e4;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar4 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
  else if (bVar3 == 0) {
    *(byte *)(local_58 + 0x50) = *(byte *)(local_58 + 0x50) | 1;
  }
LAB_143e22914:
  *param_2 = local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
LAB_143e2292e:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if (lVar6 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143e22a02 FUN_143e22a02 body=345 status=ok
// SIG undefined FUN_143e22a02(void)

void FUN_143e22a02(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar11 = *(undefined8 **)(param_1 + 0x58);
  if (puVar11 == (undefined8 *)0x0) {
    local_5c = (undefined4)CONCAT71((int7)(local_48 >> 8),1);
LAB_143e22a5d:
    lVar12 = 0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uVar9 = (ulonglong)*(uint *)(puVar11 + 1);
    do {
      uVar8 = (uint)uVar9;
      if (uVar8 == 0) {
        local_5c = (undefined4)CONCAT71((int7)(uVar9 >> 8),1);
        goto LAB_143e22a5d;
      }
      LOCK();
      uVar3 = *(uint *)(puVar11 + 1);
      if (uVar8 == uVar3) {
        *(uint *)(puVar11 + 1) = uVar8 + 1;
      }
      else {
        uVar9 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar8 != uVar3);
    lVar12 = *(longlong *)(param_1 + 0x50);
    local_5c = 0;
  }
  iVar4 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x60);
    lVar10 = 0;
    do {
      if (lVar12 != 0) {
        local_58 = *(undefined8 *)(lVar5 + lVar10);
        plVar6 = *(longlong **)(lVar5 + 8 + lVar10);
        local_50 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          FUN_140f1ee8c(lVar12 + 0x30,&local_58);
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          FUN_140f1ee8c(lVar12 + 0x30,&local_58);
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
      }
      lVar7 = *(longlong *)(lVar5 + lVar10);
      if ((*(byte *)(lVar7 + 0x20) & 1) == 0) {
        *(byte *)(lVar7 + 0x20) = *(byte *)(lVar7 + 0x20) | 1;
        FUN_140834d9a(lVar7 + 8);
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar10);
  }
  if ((char)local_5c == '\0') {
    LOCK();
    piVar2 = (int *)(puVar11 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar11)(puVar11);
      LOCK();
      piVar2 = (int *)((longlong)puVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e22b76 FUN_143e22b76 body=423 status=ok
// SIG undefined FUN_143e22b76(void)

void FUN_143e22b76(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 unaff_R14;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar9 = *(undefined8 **)(param_1 + 0x58);
  uVar12 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  uVar7 = 0;
  if (puVar9 == (undefined8 *)0x0) {
LAB_143e22bc6:
    lVar11 = 0;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    iVar6 = *(int *)(puVar9 + 1);
    do {
      if (iVar6 == 0) goto LAB_143e22bc6;
      LOCK();
      iVar3 = *(int *)(puVar9 + 1);
      bVar13 = iVar6 == iVar3;
      if (bVar13) {
        *(int *)(puVar9 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar13);
    lVar11 = *(longlong *)(param_1 + 0x50);
    uVar12 = 0;
  }
  lVar8 = *(longlong *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar6 != 0) {
    local_64 = (uint)uVar12;
    lVar10 = 0;
    local_60 = param_1;
    do {
      lVar4 = *(longlong *)(lVar8 + lVar10);
      if ((*(byte *)(lVar4 + 0x20) & 1) != 0) {
        *(byte *)(lVar4 + 0x20) = *(byte *)(lVar4 + 0x20) & 0xfe;
        FUN_140834d9a(lVar4 + 8);
      }
      FUN_140ce01e8(lVar4 + 0x28,0);
      FUN_140d2f778(lVar4 + 0x28);
      if (lVar11 != 0) {
        local_58 = *(undefined8 *)(lVar8 + lVar10);
        plVar5 = *(longlong **)(lVar8 + 8 + lVar10);
        local_50 = plVar5;
        if (plVar5 == (longlong *)0x0) {
          FUN_140fb1b4e(lVar11 + 0x30);
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          FUN_140fb1b4e(lVar11 + 0x30);
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
      lVar10 = lVar10 + 0x10;
    } while ((longlong)iVar6 * 0x10 != lVar10);
    uVar7 = *(undefined4 *)(local_60 + 0x68);
    lVar8 = *(longlong *)(local_60 + 0x60);
    uVar12 = (ulonglong)local_64;
    param_1 = local_60;
  }
  FUN_1410ac1a1(lVar8,uVar7);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_14655e390(param_1 + 0x60);
  }
  if ((char)uVar12 == '\0') {
    LOCK();
    piVar1 = (int *)(puVar9 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar9)(puVar9);
      LOCK();
      piVar1 = (int *)((longlong)puVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e22d38 FUN_143e22d38 body=339 status=ok
// SIG undefined FUN_143e22d38(void)

void FUN_143e22d38(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = FUN_1412d7b64();
  puVar11 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar11 == (undefined8 *)0x0) {
    local_5c = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
LAB_143e22da1:
    lVar12 = 0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uVar9 = (ulonglong)*(uint *)(puVar11 + 1);
    do {
      uVar7 = (uint)uVar9;
      if (uVar7 == 0) {
        local_5c = (undefined4)CONCAT71((int7)(uVar9 >> 8),1);
        goto LAB_143e22da1;
      }
      LOCK();
      uVar3 = *(uint *)(puVar11 + 1);
      if (uVar7 == uVar3) {
        *(uint *)(puVar11 + 1) = uVar7 + 1;
      }
      else {
        uVar9 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar7 != uVar3);
    lVar12 = *(longlong *)(param_1 + 0x98);
    local_5c = 0;
  }
  iVar4 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xa8);
    lVar10 = 0;
    do {
      if (lVar12 != 0) {
        local_58 = *(undefined8 *)(lVar5 + lVar10);
        plVar6 = *(longlong **)(lVar5 + 8 + lVar10);
        local_50 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          FUN_140f1ee8c(lVar12 + 0x30,&local_58);
        }
        else {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          FUN_140f1ee8c(lVar12 + 0x30,&local_58);
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
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)iVar4 * 0x10 != lVar10);
  }
  if ((char)local_5c == '\0') {
    LOCK();
    piVar2 = (int *)(puVar11 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar11)(puVar11);
      LOCK();
      piVar2 = (int *)((longlong)puVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e22ea6 FUN_143e22ea6 body=427 status=ok
// SIG undefined FUN_143e22ea6(void)

void FUN_143e22ea6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 unaff_R14;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_88 [36];
  uint local_64;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar8 = *(undefined8 **)(param_1 + 0xa0);
  uVar11 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  uVar6 = 0;
  if (puVar8 == (undefined8 *)0x0) {
LAB_143e22efc:
    lVar10 = 0;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    iVar5 = *(int *)(puVar8 + 1);
    do {
      if (iVar5 == 0) goto LAB_143e22efc;
      LOCK();
      iVar3 = *(int *)(puVar8 + 1);
      bVar12 = iVar5 == iVar3;
      if (bVar12) {
        *(int *)(puVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar12);
    lVar10 = *(longlong *)(param_1 + 0x98);
    uVar11 = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0xa8);
  iVar5 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar5 != 0) {
    local_64 = (uint)uVar11;
    lVar9 = 0;
    local_60 = param_1;
    do {
      if (lVar10 != 0) {
        local_58 = *(undefined8 *)(lVar7 + lVar9);
        plVar4 = *(longlong **)(lVar7 + 8 + lVar9);
        local_50 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          FUN_140fb1b4e(lVar10 + 0x30,&local_58);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_140fb1b4e(lVar10 + 0x30,&local_58);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
        }
      }
      plVar4 = *(longlong **)(lVar7 + lVar9);
      if ((char)plVar4[0x49] != '\0') {
        *(undefined1 *)(plVar4 + 0x49) = 0;
        (**(code **)(*plVar4 + 8))();
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar5 * 0x10 != lVar9);
    uVar6 = *(undefined4 *)(local_60 + 0xb0);
    lVar7 = *(longlong *)(local_60 + 0xa8);
    uVar11 = (ulonglong)local_64;
    param_1 = local_60;
  }
  FUN_1410691c9(lVar7,uVar6);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1418a8cde(param_1 + 0xa8);
  }
  FUN_1412d7b64(param_1);
  if ((char)uVar11 == '\0') {
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar1 = (int *)((longlong)puVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143e2306c FUN_143e2306c body=49 status=ok
// SIG undefined FUN_143e2306c(void)

void FUN_143e2306c(void)

{
  FUN_140b47c46(DAT_14cb8aa78,DAT_14cb8aa80);
  if (DAT_14cb8aa78 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e2309d FUN_143e2309d body=49 status=ok
// SIG undefined FUN_143e2309d(void)

void FUN_143e2309d(void)

{
  FUN_140b47c46(DAT_14cb8aa90,DAT_14cb8aa98);
  if (DAT_14cb8aa90 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143e230ce FUN_143e230ce body=91 status=ok
// SIG undefined FUN_143e230ce(void)

void FUN_143e230ce(void)

{
  if (DAT_14cb8aad8 != 0) {
    if (DAT_14cb8aad0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb8aad0)(DAT_14cb8aad0,0);
    FUN_1446efa72(&DAT_14cb8aad0,0,0,0x10);
    DAT_14cb8aad8 = 0;
  }
  if (DAT_14cb8aad0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e23129 FUN_143e23129 body=91 status=ok
// SIG undefined FUN_143e23129(void)

void FUN_143e23129(void)

{
  if (DAT_14cb8ab20 != 0) {
    if (DAT_14cb8ab18 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb8ab18)(DAT_14cb8ab18,0);
    FUN_1446efa72(&DAT_14cb8ab18,0,0,0x10);
    DAT_14cb8ab20 = 0;
  }
  if (DAT_14cb8ab18 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143e231a6 FUN_143e231a6 body=299 status=ok
// SIG undefined FUN_143e231a6(void)

void FUN_143e231a6(longlong param_1,undefined8 param_2)

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
      FUN_148964290(param_2,&local_70,param_1);
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



// FUNCTION 143e232fa FUN_143e232fa body=282 status=ok
// SIG undefined FUN_143e232fa(void)

undefined8 * FUN_143e232fa(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143e232d2);
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



// FUNCTION 143e23414 FUN_143e23414 body=93 status=ok
// SIG undefined FUN_143e23414(void)

void FUN_143e23414(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143e231a6(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143e23467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143e23472 FUN_143e23472 body=299 status=ok
// SIG undefined FUN_143e23472(void)

void FUN_143e23472(longlong param_1,undefined8 param_2)

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
      FUN_148964718(param_2,&local_70,param_1);
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


