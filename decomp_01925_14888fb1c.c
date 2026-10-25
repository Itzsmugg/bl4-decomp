// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14888fb1c FUN_14888fb1c body=127 status=ok
// SIG undefined FUN_14888fb1c(void)

longlong * FUN_14888fb1c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_1405c60c4(param_2);
  FUN_1447325ac(uVar1,&local_18,1);
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x48);
    lVar3 = (longlong)*(int *)(param_1 + 0x50) * 0x30;
    do {
      if ((*plVar2 == local_18) && ((int)plVar2[1] == 0xa002)) goto LAB_14888fb7f;
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  plVar2 = (longlong *)0x0;
LAB_14888fb7f:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14888fb9c FUN_14888fb9c body=63 status=ok
// SIG undefined FUN_14888fb9c(void)

longlong FUN_14888fb9c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488a2b98(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1488a2b74(lVar2);
  return lVar2;
}



// FUNCTION 14888fbdc FUN_14888fbdc body=63 status=ok
// SIG undefined FUN_14888fbdc(void)

longlong FUN_14888fbdc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488a2c50(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1488a2c2c(lVar2);
  return lVar2;
}



// FUNCTION 14888fc1c FUN_14888fc1c body=264 status=ok
// SIG undefined FUN_14888fc1c(void)

void FUN_14888fc1c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  
  FUN_14888fd24(param_2,*(undefined4 *)(param_1 + 0x40));
  FUN_14888fd62(param_2 + 0x10,*(undefined4 *)(param_1 + 0x50));
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    piVar4 = (int *)(lVar2 + 8);
    do {
      plVar3 = (longlong *)FUN_14888fda0(param_2);
      if ((*plVar3 != *(longlong *)(piVar4 + -2)) || ((int)plVar3[1] != *piVar4)) {
        *plVar3 = *(longlong *)(piVar4 + -2);
        *(int *)(plVar3 + 1) = *piVar4;
        plVar3[2] = 0;
      }
      FUN_146a6959c(plVar3 + 4,piVar4 + 6);
      piVar5 = piVar4 + 10;
      piVar4 = piVar4 + 0xc;
    } while (piVar5 != (int *)((longlong)iVar1 * 0x30 + lVar2));
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    piVar4 = (int *)(lVar2 + 8);
    do {
      plVar3 = (longlong *)FUN_14888fde0(param_2 + 0x10);
      if ((*plVar3 != *(longlong *)(piVar4 + -2)) || ((int)plVar3[1] != *piVar4)) {
        *plVar3 = *(longlong *)(piVar4 + -2);
        *(int *)(plVar3 + 1) = *piVar4;
        plVar3[2] = 0;
      }
      FUN_1486ba45a(plVar3 + 4,piVar4 + 6);
      piVar5 = piVar4 + 10;
      piVar4 = piVar4 + 0xc;
    } while (piVar5 != (int *)((longlong)iVar1 * 0x30 + lVar2));
  }
  return;
}



// FUNCTION 14888fd24 FUN_14888fd24 body=61 status=ok
// SIG undefined FUN_14888fd24(void)

void FUN_14888fd24(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1488a2e68(param_1);
    return;
  }
  FUN_14889d3cb(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14888fd62 FUN_14888fd62 body=61 status=ok
// SIG undefined FUN_14888fd62(void)

void FUN_14888fd62(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1488a2f12(param_1);
    return;
  }
  FUN_14889d383(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14888fda0 FUN_14888fda0 body=63 status=ok
// SIG undefined FUN_14888fda0(void)

longlong FUN_14888fda0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488a2fe0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1488a2fbc(lVar2);
  return lVar2;
}



// FUNCTION 14888fde0 FUN_14888fde0 body=63 status=ok
// SIG undefined FUN_14888fde0(void)

longlong FUN_14888fde0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488a3098(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1488a3074(lVar2);
  return lVar2;
}



// FUNCTION 14888fe20 FUN_14888fe20 body=157 status=ok
// SIG undefined FUN_14888fe20(void)

void FUN_14888fe20(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(longlong *)(param_1 + 0x20) = lVar5;
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
    FUN_14888febe(param_1,*(undefined8 *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  plVar3 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014888fe5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14888febe FUN_14888febe body=644 status=ok
// SIG undefined FUN_14888febe(void)

void FUN_14888febe(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((longlong)*(int *)(param_2 + 0x20) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x18);
    plVar3 = plVar12 + (longlong)*(int *)(param_2 + 0x20) * 3;
    plVar14 = param_1 + 5;
    local_88 = param_1 + 7;
    local_80 = plVar14;
    do {
      plVar5 = (longlong *)*plVar12;
      plVar6 = (longlong *)plVar12[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
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
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
        iVar10 = *(int *)(param_1 + 6);
        *(uint *)(param_1 + 6) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0x34) < iVar10 + 1U) {
          FUN_1488a312c(plVar14,iVar10);
        }
        plVar1 = local_50;
        lVar7 = *plVar14;
        lVar13 = (longlong)iVar10 * 0x10;
        *(longlong **)(lVar7 + lVar13) = local_58;
        *(longlong **)(lVar7 + 8 + lVar13) = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_50 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*local_50)(local_50);
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
        plVar14 = local_80;
        puVar11 = (undefined8 *)(lVar7 + lVar13);
        uVar8 = *puVar11;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_60 = param_1[1];
        if (local_60 == 0) {
          local_60 = 0;
          local_68 = 0;
        }
        else {
          iVar10 = *(int *)(local_60 + 8);
          do {
            if (iVar10 == 0) {
              local_60 = 0;
              local_68 = 0;
              goto LAB_14889001e;
            }
            LOCK();
            iVar4 = *(int *)(local_60 + 8);
            bVar15 = iVar10 == iVar4;
            if (bVar15) {
              *(int *)(local_60 + 8) = iVar10 + 1;
              iVar4 = iVar10;
            }
            iVar10 = iVar4;
            UNLOCK();
          } while (!bVar15);
          local_68 = *param_1;
        }
LAB_14889001e:
        local_78 = *puVar11;
        local_70 = puVar11[1];
        if (local_70 != 0) {
          LOCK();
          *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
          UNLOCK();
        }
        local_58 = plVar5;
        local_50 = plVar6;
        FUN_14888e79e(uVar8,&local_78,&local_68,&local_58);
        plVar5 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        cVar9 = (**(code **)(*(longlong *)*puVar11 + 0x20))();
        if (cVar9 != '\0') {
          iVar10 = *(int *)(param_1 + 8);
          *(uint *)(param_1 + 8) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0x44) < iVar10 + 1U) {
            FUN_1488a312c(local_88,iVar10);
          }
          lVar7 = *local_88;
          *(undefined8 *)(lVar7 + (longlong)iVar10 * 0x10) = *puVar11;
          lVar13 = puVar11[1];
          *(longlong *)(lVar7 + 8 + (longlong)iVar10 * 0x10) = lVar13;
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      plVar12 = plVar12 + 3;
    } while (plVar12 != plVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148890144 FUN_148890144 body=42 status=ok
// SIG undefined FUN_148890144(void)

void FUN_148890144(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14889016e(&DAT_14cb80320);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b18d660;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



// FUNCTION 14889016e FUN_14889016e body=84 status=ok
// SIG undefined FUN_14889016e(void)

void FUN_14889016e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x500,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 5;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1488901c2 FUN_1488901c2 body=44 status=ok
// SIG undefined FUN_1488901c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488901c2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8032c = _DAT_14cb8032c + -1;
  *param_1 = DAT_14cb80320;
  DAT_14cb80320 = param_1;
  return;
}



// FUNCTION 1488901ee FUN_1488901ee body=42 status=ok
// SIG undefined FUN_1488901ee(void)

void FUN_1488901ee(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b18d660;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 148890218 FUN_148890218 body=167 status=ok
// SIG undefined FUN_148890218(void)

undefined8 FUN_148890218(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
  }
  FUN_1447325ac(puVar2,&local_38,1);
  local_60 = &local_30;
  local_30 = local_38;
  local_28 = 0xa004;
  local_20 = 0;
  local_48 = &local_60;
  local_58 = &local_40;
  local_50 = &LAB_143d7b0aa;
  cVar1 = FUN_1488953be(param_1);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = local_40;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488902c0 FUN_1488902c0 body=513 status=ok
// SIG undefined FUN_1488902c0(void)

void FUN_1488902c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_2;
  if ((longlong)(int)param_1[1] != 0) {
    plVar8 = (longlong *)*param_1;
    local_88 = plVar8 + (longlong)(int)param_1[1] * 6;
    do {
      if (*plVar8 == *local_80) {
        local_78 = plVar8[1];
        FUN_1446dcdd4(local_70,&local_78);
        if (DAT_14cb807c8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_144837462(DAT_14cb807c8,local_70);
        }
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_1488a1ed0(param_3,iVar4);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar4 * 8) = uVar7;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if ((longlong)(int)plVar8[5] != 0) {
          plVar9 = (longlong *)plVar8[4];
          plVar3 = plVar9 + (longlong)(int)plVar8[5] * 3;
          do {
            lVar5 = *plVar9;
            plVar6 = (longlong *)plVar9[1];
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
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
            if (lVar5 != 0) {
              local_78 = *(longlong *)(lVar5 + 8);
              FUN_1446dcdd4(local_70,&local_78);
              if (DAT_14cb807c8 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_144837462(DAT_14cb807c8,local_70);
              }
              iVar4 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
                FUN_1488a1ed0(param_3,iVar4);
              }
              *(undefined8 *)(*param_3 + (longlong)iVar4 * 8) = uVar7;
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
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
            plVar9 = plVar9 + 3;
          } while (plVar9 != plVar3);
        }
      }
      plVar8 = plVar8 + 6;
    } while (plVar8 != local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488904c2 FUN_1488904c2 body=439 status=ok
// SIG undefined FUN_1488904c2(void)

undefined8 FUN_1488904c2(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 1) == 0) {
LAB_1488905fd:
    uVar9 = 0;
  }
  else {
    plVar8 = (longlong *)*param_1;
    lVar11 = (longlong)*(int *)(param_1 + 1) * 0x30;
    uVar9 = 0;
    do {
      if (*plVar8 == *param_2) {
        if (plVar8 == (longlong *)0x0) goto LAB_1488905fd;
        lVar11 = plVar8[1];
        if ((longlong)(int)plVar8[5] == 0) goto LAB_1488905c1;
        lVar6 = plVar8[2];
        plVar12 = (longlong *)plVar8[4];
        plVar8 = plVar12 + (longlong)(int)plVar8[5] * 3;
        goto LAB_148890543;
      }
      plVar8 = plVar8 + 6;
      lVar11 = lVar11 + -0x30;
    } while (lVar11 != 0);
  }
  goto LAB_1488905ff;
  while( true ) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    plVar12 = plVar12 + 3;
    if (plVar12 == plVar8) break;
LAB_148890543:
    plVar3 = (longlong *)*plVar12;
    plVar4 = (longlong *)plVar12[1];
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
    if ((plVar3 != (longlong *)0x0) &&
       (local_70[0] = param_3, cVar7 = (**(code **)(*plVar3 + 0x10))(plVar3,local_70),
       cVar7 != (char)plVar3[4])) {
      lVar5 = plVar3[1];
      lVar10 = lVar5;
      if ((int)lVar6 == (int)plVar3[2]) {
        lVar10 = lVar11;
      }
      bVar13 = lVar11 != lVar5;
      lVar11 = lVar10;
      if (bVar13) {
        lVar11 = lVar5;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      break;
    }
  }
LAB_1488905c1:
  local_78 = lVar11;
  FUN_1446dcdd4(local_70);
  if (DAT_14cb807c8 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_144837462(DAT_14cb807c8,local_70);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1488905ff:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14889067a FUN_14889067a body=94 status=ok
// SIG undefined FUN_14889067a(void)

longlong * FUN_14889067a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  FUN_1488a31b2(plVar3);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1488906d8 FUN_1488906d8 body=722 status=ok
// SIG undefined FUN_1488906d8(void)

ulonglong FUN_1488906d8(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [8];
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  undefined8 local_80;
  undefined **local_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar7 = param_2;
  plVar4 = (longlong *)FUN_1407cbaec();
  uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  if ((longlong)(int)plVar4[2] != 0) {
    lVar9 = *plVar4;
    lVar10 = (longlong)(int)plVar4[2] * 0x10 + lVar9;
    do {
      local_90 = 0;
      local_88 = 0xa002;
      local_80 = 0;
      local_78 = &PTR_FUN_14b18a090;
      local_70 = 0;
      uStack_68 = 0;
      uVar5 = FUN_144a06846(lVar9,&DAT_14cb80400);
      uVar5 = FUN_144a7cdd6(uVar5,0);
      FUN_1446ddc76(&local_98,uVar5,1);
      if (local_90 != local_98) {
        local_80 = 0;
      }
      local_90 = local_98;
      if ((local_98 == 0) || (0xfffffffd < local_88 - 1U)) {
        local_78 = &PTR_FUN_14b18a090;
        FUN_144a65a1e(local_70,uStack_68 & 0xffffffff);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        uVar8 = 0;
        goto LAB_148890973;
      }
      puVar6 = (undefined8 *)FUN_144a06846(lVar9,&DAT_14cb80478);
      local_a8 = *puVar6;
      local_a0 = (longlong *)puVar6[1];
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
      }
      cVar3 = FUN_144a8220c(&local_a8);
      if (cVar3 != '\0') {
        cVar3 = FUN_144a79b3c(&local_a8);
        if (cVar3 != '\0') {
          plVar7 = (longlong *)FUN_1407cbaec(&local_a8);
          if ((longlong)(int)plVar7[2] != 0) {
            lVar12 = *plVar7;
            lVar11 = (longlong)(int)plVar7[2] << 4;
            do {
              uVar5 = FUN_144a7cdd6(lVar12,0);
              FUN_1446ddc76(local_c0,uVar5,1);
              local_b8 = 0;
              plStack_b0 = (longlong *)0x0;
              FUN_14888890e(&local_78);
              plVar7 = plStack_b0;
              if (plStack_b0 != (longlong *)0x0) {
                LOCK();
                plVar4 = plStack_b0 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*plStack_b0)(plStack_b0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              lVar12 = lVar12 + 0x10;
              lVar11 = lVar11 + -0x10;
            } while (lVar11 != 0);
          }
        }
      }
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1488a2fe0(param_2,iVar2);
      }
      plVar7 = (longlong *)((longlong)iVar2 * 0x30 + *param_2);
      *plVar7 = local_90;
      *(int *)(plVar7 + 1) = local_88;
      plVar7[2] = 0;
      FUN_1486bf370(plVar7 + 3,&local_78);
      plVar7 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      local_78 = &PTR_FUN_14b18a090;
      uVar8 = uStack_68 & 0xffffffff;
      FUN_144a65a1e(local_70,uVar8);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar10);
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  }
LAB_148890973:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488909ac FUN_1488909ac body=925 status=ok
// SIG undefined FUN_1488909ac(void)

ulonglong FUN_1488909ac(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_128 [40];
  longlong *local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined **local_98;
  longlong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar9 = param_2;
  plVar5 = (longlong *)FUN_1407cbaec();
  uVar8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
  if ((longlong)(int)plVar5[2] != 0) {
    lVar9 = *plVar5;
    lVar12 = (longlong)(int)plVar5[2] * 0x10 + lVar9;
    local_100 = (longlong *)(param_2 + 0x10);
    do {
      local_b0 = 0;
      local_a8 = 0xa002;
      local_a0 = 0;
      local_98 = &PTR_FUN_14b189ef0;
      local_90 = 0;
      uStack_88 = 0;
      uVar6 = FUN_144a06846(lVar9,&DAT_14cb80400);
      uVar6 = FUN_144a7cdd6(uVar6,0);
      FUN_1446ddc76(&local_b8,uVar6,1);
      if (local_b0 != local_b8) {
        local_a0 = 0;
      }
      local_b0 = local_b8;
      if ((local_b8 == 0) || (0xfffffffd < local_a8 - 1U)) {
        local_98 = &PTR_FUN_14b189ef0;
        FUN_1486ba411(local_90,uStack_88 & 0xffffffff);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        uVar8 = 0;
        goto LAB_148890ccf;
      }
      puVar7 = (undefined8 *)FUN_144a06846(lVar9,&DAT_14cb80478);
      local_c8 = *puVar7;
      local_c0 = (longlong *)puVar7[1];
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
        UNLOCK();
      }
      cVar4 = FUN_144a8220c(&local_c8);
      if (cVar4 != '\0') {
        cVar4 = FUN_144a79b3c(&local_c8);
        if (cVar4 != '\0') {
          plVar5 = (longlong *)FUN_1407cbaec(&local_c8);
          if ((longlong)(int)plVar5[2] != 0) {
            lVar10 = *plVar5;
            lVar11 = (longlong)(int)plVar5[2] << 4;
            do {
              uVar6 = FUN_144a06846(lVar10,&DAT_14cb804a0);
              uVar6 = FUN_144a7cdd6(uVar6,0);
              FUN_1446ddc76(local_e0,uVar6,1);
              local_d8 = 0;
              plStack_d0 = (longlong *)0x0;
              uVar6 = FUN_144a06846(lVar10,&DAT_14cb80518);
              fVar13 = (float)FUN_140b963dc(uVar6,0);
              uVar6 = FUN_144a06846(lVar10,&DAT_14cb804f0);
              fVar14 = (float)FUN_140b963dc(uVar6);
              uVar6 = FUN_144a06846(lVar10,&DAT_14cb804c8);
              fVar15 = (float)FUN_140b963dc(uVar6);
              local_f8 = (double)fVar15;
              local_f0 = (double)fVar14;
              local_e8 = (double)fVar13;
              FUN_148888772(&local_98,local_e0,&local_f8);
              plVar5 = plStack_d0;
              if (plStack_d0 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_d0 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_d0)(plStack_d0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar5 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
              }
              lVar10 = lVar10 + 0x10;
              lVar11 = lVar11 + -0x10;
            } while (lVar11 != 0);
          }
        }
      }
      iVar3 = *(int *)(param_2 + 0x18);
      *(uint *)(param_2 + 0x18) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x1c) < iVar3 + 1U) {
        FUN_1488a3098(local_100,iVar3);
      }
      plVar5 = (longlong *)((longlong)iVar3 * 0x30 + *local_100);
      *plVar5 = local_b0;
      *(int *)(plVar5 + 1) = local_a8;
      plVar5[2] = 0;
      FUN_1486bf498(plVar5 + 3,&local_98);
      plVar5 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      local_98 = &PTR_FUN_14b189ef0;
      uVar8 = uStack_88 & 0xffffffff;
      FUN_1486ba411(local_90,uVar8);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar12);
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  }
LAB_148890ccf:
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148890d4a FUN_148890d4a body=70 status=ok
// SIG undefined FUN_148890d4a(void)

void FUN_148890d4a(longlong *param_1)

{
  FUN_14889d383(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14889d3cb(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148890d90 FUN_148890d90 body=156 status=ok
// SIG undefined FUN_148890d90(void)

void FUN_148890d90(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144aa7a80(local_30,1,0);
  FUN_14709213c(local_30,DAT_14cb80868,param_2,0);
  FUN_14161210c(param_1,&DAT_14cb803d8,local_30);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148890e2e FUN_148890e2e body=1144 status=ok
// SIG undefined FUN_148890e2e(void)

void FUN_148890e2e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = param_2;
  FUN_144aa7a80(local_80,2,0);
  if ((longlong)(int)param_1[1] != 0) {
    plVar6 = (longlong *)*param_1;
    plVar7 = plVar6 + (longlong)(int)param_1[1] * 6;
    do {
      if ((*plVar6 != 0) && ((int)plVar6[1] - 1U < 0xfffffffe)) {
        FUN_144aa7a80(local_90,3,0);
        local_a8 = *plVar6;
        FUN_1446dcdd4(local_70,&local_a8);
        FUN_1488912a7(local_90,local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_144aa7a80(local_70,2,0);
        if ((longlong)(int)plVar6[5] != 0) {
          lVar4 = plVar6[4];
          lVar5 = (longlong)(int)plVar6[5] * 0x18;
          do {
            FUN_1410e4a6a(lVar4,&local_98);
            FUN_148891344(local_70,local_98);
            lVar4 = lVar4 + 0x18;
            lVar5 = lVar5 + -0x18;
          } while (lVar5 != 0);
        }
        FUN_14161210c(local_90,&DAT_14cb80478);
        FUN_14173818c(local_80,local_90);
        plVar3 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar3 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_88 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_88)(local_88);
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
      plVar6 = plVar6 + 6;
    } while (plVar6 != plVar7);
  }
  lVar4 = FUN_1407cbaec(local_80);
  if (0 < *(int *)(lVar4 + 0x10)) {
    FUN_14161210c(local_c8,&DAT_14cb80428,local_80);
  }
  FUN_144aa7a80(local_90,2,0);
  if ((longlong)(int)param_1[3] != 0) {
    plVar6 = (longlong *)param_1[2];
    plVar7 = plVar6 + (longlong)(int)param_1[3] * 6;
    do {
      if ((*plVar6 != 0) && ((int)plVar6[1] - 1U < 0xfffffffe)) {
        FUN_144aa7a80(&local_a8,3,0);
        local_b8 = *plVar6;
        FUN_1446dcdd4(local_70,&local_b8);
        FUN_1488912a7(&local_a8,local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_144aa7a80(local_70,2,0);
        if ((longlong)(int)plVar6[5] != 0) {
          lVar4 = plVar6[4];
          lVar5 = (longlong)(int)plVar6[5] * 0x30 + lVar4;
          do {
            FUN_144aa7a80(&local_b8,3,0);
            FUN_1410e4a6a(lVar4,&local_c0);
            FUN_1488913d8(&local_b8,local_c0);
            FUN_148891470(&local_b8,&DAT_14cb804c8,*(undefined8 *)(lVar4 + 0x18));
            FUN_148891470(&local_b8,&DAT_14cb804f0,*(undefined8 *)(lVar4 + 0x20));
            FUN_148891470(&local_b8,&DAT_14cb80518,*(undefined8 *)(lVar4 + 0x28));
            FUN_14173818c(local_70,&local_b8);
            plVar3 = local_b0;
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_b0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            lVar4 = lVar4 + 0x30;
          } while (lVar4 != lVar5);
        }
        FUN_14161210c(&local_a8,&DAT_14cb80478);
        FUN_14173818c(local_90,&local_a8);
        plVar3 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_68 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        plVar3 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_a0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_a0)(local_a0);
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
      plVar6 = plVar6 + 6;
    } while (plVar6 != plVar7);
  }
  lVar4 = FUN_1407cbaec(local_90);
  if (0 < *(int *)(lVar4 + 0x10)) {
    FUN_14161210c(local_c8,&DAT_14cb80450,local_90);
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_88 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_78 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488912a7 FUN_1488912a7 body=156 status=ok
// SIG undefined FUN_1488912a7(void)

void FUN_1488912a7(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144aa7a80(local_30,1,0);
  FUN_14709213c(local_30,DAT_14cb80848,param_2,0);
  FUN_14161210c(param_1,&DAT_14cb80400,local_30);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148891344 FUN_148891344 body=147 status=ok
// SIG undefined FUN_148891344(void)

void FUN_148891344(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  FUN_144aa7a80(local_38,1,0);
  FUN_1401269c0(local_38,&local_28);
  FUN_14173818c(param_1,local_38,0);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488913d8 FUN_1488913d8 body=151 status=ok
// SIG undefined FUN_1488913d8(void)

void FUN_1488913d8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  FUN_144aa7a80(local_38,1,0);
  FUN_1401269c0(local_38,&local_28);
  FUN_14161210c(param_1,&DAT_14cb804a0,local_38);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148891470 FUN_148891470 body=155 status=ok
// SIG undefined FUN_148891470(void)

void FUN_148891470(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144aa7a80(local_40,1,0);
  FUN_14709216a(local_40,param_3);
  FUN_14161210c(param_1,param_2,local_40);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889150c FUN_14889150c body=156 status=ok
// SIG undefined FUN_14889150c(void)

undefined8 FUN_14889150c(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (**(code **)(*param_1 + 0x180))();
  lVar3 = FUN_1400f6f32(uVar2);
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 != 0)) {
    lVar4 = FUN_140266114(param_1);
    if (lVar4 != 0) {
      lVar4 = FUN_144a7ba4c(lVar4);
      if (lVar4 != 0) {
        FUN_1409845a0(lVar3,local_24,lVar4);
        uVar1 = FUN_140b9fef0(lVar3,local_24,0);
        *param_2 = uVar1;
        uVar2 = 1;
        goto LAB_14889158a;
      }
    }
  }
  uVar2 = 0;
LAB_14889158a:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488915aa FUN_1488915aa body=17 status=ok
// SIG undefined FUN_1488915aa(void)

void FUN_1488915aa(longlong param_1)

{
  if (*(char *)(param_1 + 0x568) == '\0') {
    *(undefined1 *)(param_1 + 0x568) = 1;
  }
  return;
}



// FUNCTION 1488915bc FUN_1488915bc body=66 status=ok
// SIG undefined FUN_1488915bc(void)

void FUN_1488915bc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14142edae();
  iVar1 = *(int *)(param_1 + 0x560);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x558);
    lVar3 = 0;
    do {
      FUN_14888941c(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 1488915fe FUN_1488915fe body=612 status=ok
// SIG undefined FUN_1488915fe(void)

undefined8 * FUN_1488915fe(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  ulonglong *local_50;
  longlong **pplStack_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = param_3;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar4 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar7 != -1) {
      do {
        lVar5 = *plVar1 + (longlong)iVar7 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar7 * 0x20) == param_3) {
          if (lVar5 != 0) {
            puVar8 = (undefined8 *)(lVar5 + 8);
            goto LAB_1488916c2;
          }
          break;
        }
        iVar7 = *(int *)(lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  lVar5 = FUN_148890218(DAT_14cb80868,param_3);
  if (lVar5 != 0) {
    FUN_148891864(param_1 + -0x4a0,&local_88);
    plVar6 = (longlong *)FUN_14001cc68(0x80,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14b40d190;
    plVar2 = plVar6 + 2;
    local_50 = (ulonglong *)local_88;
    pplStack_48 = (longlong **)plStack_80;
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    FUN_1488a3f7c(plVar2,lVar5);
    local_78 = plVar2;
    local_70 = plVar6;
    FUN_1488a4026(&local_78,plVar2);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_50 = &local_58;
    pplStack_48 = &local_68;
    local_68 = plVar2;
    local_60 = plVar6;
    FUN_1488a40ce(plVar1,&local_3c);
    plVar2 = local_60;
    lVar5 = *plVar1;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar1 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    plVar1 = plStack_80;
    puVar8 = (undefined8 *)(lVar5 + (longlong)local_3c * 0x20 + 8);
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_14888f8d8(*puVar8);
    if (puVar8 != (undefined8 *)0x0) {
LAB_1488916c2:
      *param_2 = *puVar8;
      lVar5 = puVar8[1];
      param_2[1] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      goto LAB_1488916d9;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1488916d9:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148891864 FUN_148891864 body=201 status=ok
// SIG undefined FUN_148891864(void)

undefined8 * FUN_148891864(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_14889150c(param_1,local_1c);
  if (cVar3 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar5 = FUN_14888eb6a(uVar4,local_1c);
    if (lVar5 != 0) {
      FUN_14888ec58(lVar5,&local_30,local_1c);
      *param_2 = local_30;
      param_2[1] = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
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
      }
      goto LAB_148891893;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148891893:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889192e FUN_14889192e body=296 status=ok
// SIG undefined FUN_14889192e(void)

undefined8 * FUN_14889192e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar5 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_3 + 8);
  }
  FUN_1447325ac(puVar5,&local_20,1);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = (uint)((ulonglong)local_20 >> 0x10);
    uVar7 = (uint)local_20 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)local_20 >> 0x20) + ((uint)local_20 << 0x10 | uVar7) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*plVar6 == local_20) {
          if (((plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) &&
              (lVar1 = plVar6[1], lVar1 != 0)) &&
             (pcVar2 = *(code **)(lVar1 + 0x10), pcVar2 != (code *)0x0)) {
            plVar6 = (longlong *)(lVar1 + 0x30);
            if (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0) {
              plVar6 = *(longlong **)(lVar1 + 0x20);
            }
            uVar4 = (**(code **)(*plVar6 + 8))();
            (*pcVar2)(param_2,uVar4);
            goto LAB_148891976;
          }
          break;
        }
        iVar8 = (int)plVar6[2];
      } while (iVar8 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148891976:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148891a58 FUN_148891a58 body=82 status=ok
// SIG undefined FUN_148891a58(void)

void FUN_148891a58(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FUN_14888833e(*(longlong *)(param_1 + 0x548),param_2);
  }
  FUN_148889aee(param_1 + 0x558,param_2);
  FUN_143777d6c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148891aaa FUN_148891aaa body=32 status=ok
// SIG undefined FUN_148891aaa(void)

undefined8 * FUN_148891aaa(undefined8 *param_1)

{
  FUN_148891aca();
  *param_1 = &PTR_FUN_14b40bc80;
  return param_1;
}



// FUNCTION 148891aca FUN_148891aca body=148 status=ok
// SIG undefined FUN_148891aca(void)

undefined8 * FUN_148891aca(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b18a3f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_1 + 7) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_3c;
  *(undefined4 *)(param_1 + 8) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_34;
  *param_1 = &PTR_FUN_14b18a5d0;
  param_1[0xc] = &PTR_FUN_14b189ef0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148891b60 FUN_148891b60 body=329 status=ok
// SIG undefined FUN_148891b60(void)

void FUN_148891b60(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  dStack_40 = DAT_14c8464e8;
  plVar4 = (longlong *)param_4[0x28];
  if ((longlong *)param_4[0x28] == (longlong *)0x0) {
    plVar4 = param_4;
  }
  dVar7 = DAT_14c8464e0;
  if ((longlong)(int)param_4[0x29] != 0) {
    plVar5 = plVar4 + (longlong)(int)param_4[0x29] * 4;
    lVar1 = *(longlong *)(param_3 + 8);
    dVar8 = DAT_14c8464e8;
    dVar9 = DAT_14c8464f0;
    do {
      if (0.0001 <= ABS(*(float *)(plVar4 + 3))) {
        dVar10 = 0.0;
        if (*(int *)(param_3 + 0x10) != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(lVar1 + lVar6) == *plVar4) {
              dVar3 = (double)*(float *)(plVar4 + 3);
              dVar10 = *(double *)(lVar1 + 0x28 + lVar6) * dVar3;
              dVar2 = *(double *)(lVar1 + 0x20 + lVar6) * dVar3;
              dVar3 = dVar3 * *(double *)(lVar1 + 0x18 + lVar6);
              goto LAB_148891c52;
            }
            lVar6 = lVar6 + 0x30;
          } while ((longlong)*(int *)(param_3 + 0x10) * 0x30 != lVar6);
        }
        dVar2 = 0.0;
        dVar3 = 0.0;
LAB_148891c52:
        dVar7 = dVar7 + dVar3;
        dVar8 = dVar8 + dVar2;
        dVar9 = dVar9 + dVar10;
        local_48 = dVar7;
        dStack_40 = dVar8;
        local_38 = dVar9;
      }
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar5);
  }
  FUN_148891ce2(dVar7,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148891caa FUN_148891caa body=55 status=ok
// SIG undefined FUN_148891caa(void)

void FUN_148891caa(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14888ea02();
  }
  FUN_14888e56e(param_2,param_1,param_1 + 0x60,uVar1);
  return;
}



// FUNCTION 148891ce2 FUN_148891ce2 body=198 status=ok
// SIG undefined FUN_148891ce2(void)

void FUN_148891ce2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148891dc0(param_1,&local_38);
  lVar4 = FUN_148891e38(local_38);
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
  if (((lVar4 != 0) && (lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x48), lVar5 != 0)) &&
     ((*(longlong *)(lVar5 + 0x290) == 0 ||
      (cVar3 = FUN_148887e42(*(longlong *)(lVar5 + 0x290),lVar4), cVar3 == '\0')))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148891dc0 FUN_148891dc0 body=120 status=ok
// SIG undefined FUN_148891dc0(void)

undefined8 * FUN_148891dc0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_1464e7bd0();
  cVar4 = FUN_1448093f4(uVar6,uVar5);
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = uVar6;
      param_2[1] = plVar3;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_2;
    }
  }
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148891e38 FUN_148891e38 body=119 status=ok
// SIG undefined FUN_148891e38(void)

undefined8 FUN_148891e38(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_1 + 0x20);
  FUN_1446dcdd4(local_38);
  if (DAT_14cb807c8 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb807c8,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148891eb0 FUN_148891eb0 body=130 status=ok
// SIG undefined FUN_148891eb0(void)

void FUN_148891eb0(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148891dc0(param_1,&local_28);
  FUN_1486ba45a(param_1 + 0x68,local_28 + 0x40);
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



// FUNCTION 148891f44 FUN_148891f44 body=260 status=ok
// SIG undefined FUN_148891f44(void)

void FUN_148891f44(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != (longlong *)0x0) {
    FUN_148891dc0(param_1,&local_a8);
    lVar4 = FUN_148891e38(local_a8);
    plVar3 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        local_a8 = 0;
      }
      else {
        local_a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
      }
      local_a0 = (longlong *)0x0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      (**(code **)(*param_2 + 0x18))(param_2,&local_a8,param_1);
      FUN_14888e252(param_3,lVar4,&local_a8);
      FUN_14889204a(&local_a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889204a FUN_14889204a body=154 status=ok
// SIG undefined FUN_14889204a(void)

void FUN_14889204a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14889d413(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14889d442(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_14889d486(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488920e4 FUN_1488920e4 body=134 status=ok
// SIG undefined FUN_1488920e4(void)

void FUN_1488920e4(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148891eb0();
  FUN_14889217c(param_1,&local_28);
  uVar2 = FUN_1488921f4(local_28);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
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



// FUNCTION 14889217c FUN_14889217c body=120 status=ok
// SIG undefined FUN_14889217c(void)

undefined8 * FUN_14889217c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_1464e7cf6();
  cVar4 = FUN_1448093f4(uVar6,uVar5);
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = uVar6;
      param_2[1] = plVar3;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_2;
    }
  }
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1488921f4 FUN_1488921f4 body=175 status=ok
// SIG undefined FUN_1488921f4(void)

longlong * FUN_1488921f4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_1 + 0x50);
  FUN_1446dcdd4(local_40);
  if ((DAT_14cb80828 != 0) &&
     (plVar1 = (longlong *)FUN_144837462(DAT_14cb80828,local_40), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464e87cc();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_14889223c;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14889223c:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1488922a4 FUN_1488922a4 body=202 status=ok
// SIG undefined FUN_1488922a4(void)

void FUN_1488922a4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x88))();
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_a0 = param_2;
  FUN_148892370(param_1,&local_a0,param_3,param_4);
  (**(code **)(*param_1 + 0x78))(param_1,&local_a0);
  FUN_148891ce2(param_1,&local_48);
  (**(code **)(*param_1 + 0x90))(param_1);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148892370 FUN_148892370 body=962 status=ok
// SIG undefined FUN_148892370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148892370(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb80560) && (FUN_144b3d300(&DAT_14cb80560), DAT_14cb80560 == -1)) {
    _DAT_14cb80548 = -1.0;
    _DAT_14cb80550 = 1.0;
    _DAT_14cb80558 = 1.0;
    _Init_thread_footer(&DAT_14cb80560);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb80580) && (FUN_144b3d300(&DAT_14cb80580), DAT_14cb80580 == -1)) {
    _DAT_14cb80568 = 1.0;
    _DAT_14cb80570 = -1.0;
    _DAT_14cb80578 = 1.0;
    _Init_thread_footer(&DAT_14cb80580);
  }
  plVar8 = (longlong *)param_4[0x28];
  if ((longlong *)param_4[0x28] == (longlong *)0x0) {
    plVar8 = param_4;
  }
  if ((longlong)(int)param_4[0x29] != 0) {
    plVar7 = plVar8 + (longlong)(int)param_4[0x29] * 4;
    do {
      if (0.0001 <= ABS(*(float *)(plVar8 + 3))) {
        dVar2 = 0.0;
        if ((longlong)*(int *)(param_3 + 0x10) != 0) {
          lVar1 = *(longlong *)(param_3 + 8);
          lVar6 = 0;
          do {
            if (*(longlong *)(lVar1 + lVar6) == *plVar8) {
              dVar2 = (double)*(float *)(plVar8 + 3);
              dVar3 = *(double *)(lVar1 + 0x28 + lVar6) * dVar2;
              dVar4 = *(double *)(lVar1 + 0x20 + lVar6) * dVar2;
              dVar2 = dVar2 * *(double *)(lVar1 + 0x18 + lVar6);
              goto LAB_14889249b;
            }
            lVar6 = lVar6 + 0x30;
          } while ((longlong)*(int *)(param_3 + 0x10) * 0x30 != lVar6);
        }
        dVar4 = 0.0;
        dVar3 = 0.0;
LAB_14889249b:
        cVar5 = FUN_140230656(plVar8);
        if (cVar5 == '\0') {
          cVar5 = FUN_14171cc3c(plVar8);
          if (cVar5 == '\0') {
            *(double *)(param_2 + 8) = dVar2 + *(double *)(param_2 + 8);
            *(double *)(param_2 + 0x10) = dVar4 + *(double *)(param_2 + 0x10);
            *(double *)(param_2 + 0x18) = dVar3 + *(double *)(param_2 + 0x18);
          }
          else {
            cVar5 = (**(code **)(*param_1 + 0xa8))(param_1,param_2);
            if (cVar5 != '\0') {
              dVar2 = dVar2 * _DAT_14cb80548;
              dVar4 = dVar4 * _DAT_14cb80550;
              dVar3 = dVar3 * _DAT_14cb80558;
            }
            cVar5 = (**(code **)(*param_1 + 0xb0))(param_1,param_2);
            if (cVar5 != '\0') {
              dVar2 = dVar2 * _DAT_14cb80568;
              dVar4 = dVar4 * _DAT_14cb80570;
              dVar3 = dVar3 * _DAT_14cb80578;
            }
            (**(code **)(*param_1 + 0xb8))(param_1,&local_a8,param_2);
            *(double *)(param_2 + 0x20) = dVar2 * local_a8 + *(double *)(param_2 + 0x20);
            *(double *)(param_2 + 0x28) = dVar4 * local_a0 + *(double *)(param_2 + 0x28);
            *(double *)(param_2 + 0x30) = dVar3 * local_98 + *(double *)(param_2 + 0x30);
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x50) = 1;
          cVar5 = (**(code **)(*param_1 + 0x98))(param_1,param_2);
          if (cVar5 != '\0') {
            dVar2 = dVar2 * _DAT_14cb80548;
            dVar4 = dVar4 * _DAT_14cb80550;
            dVar3 = dVar3 * _DAT_14cb80558;
          }
          cVar5 = (**(code **)(*param_1 + 0xa0))(param_1,param_2);
          if (cVar5 != '\0') {
            dVar2 = dVar2 * _DAT_14cb80568;
            dVar4 = dVar4 * _DAT_14cb80570;
            dVar3 = dVar3 * _DAT_14cb80578;
          }
          *(double *)(param_2 + 0x38) = dVar2 + *(double *)(param_2 + 0x38);
          *(double *)(param_2 + 0x40) = dVar4 + *(double *)(param_2 + 0x40);
          *(double *)(param_2 + 0x48) = dVar3 + *(double *)(param_2 + 0x48);
        }
      }
      plVar8 = plVar8 + 4;
    } while (plVar8 != plVar7);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148892734 FUN_148892734 body=194 status=ok
// SIG undefined FUN_148892734(void)

undefined * FUN_148892734(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 == 0) {
    puVar2 = &DAT_14cb80588;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb80638) && (FUN_144b3d300(&DAT_14cb80638), DAT_14cb80638 == -1)) {
      puVar2 = &DAT_14cb80588;
      FUN_1486be2ec(&DAT_14cb80588);
      _Init_thread_footer(&DAT_14cb80638);
    }
  }
  else {
    if ((longlong)*(int *)(lVar1 + 0xd0) != 0) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 200) + lVar3) == *param_2) {
          lVar4 = *(longlong *)(lVar1 + 200) - lVar4;
          if (lVar4 != 0) {
            return (undefined *)(lVar4 + 8);
          }
          break;
        }
        lVar4 = lVar4 + -0xb8;
        lVar3 = lVar3 + 0xb8;
      } while ((longlong)*(int *)(lVar1 + 0xd0) * -0xb8 - lVar4 != 0);
    }
    puVar2 = (undefined *)(lVar1 + 0x18);
  }
  return puVar2;
}



// FUNCTION 1488927f6 FUN_1488927f6 body=187 status=ok
// SIG undefined FUN_1488927f6(void)

void FUN_1488927f6(longlong *param_1,longlong param_2)

{
  float fVar1;
  double dVar2;
  
  (**(code **)(*param_1 + 200))();
  fVar1 = (float)(**(code **)(*param_1 + 0xc0))(param_1,param_2);
  dVar2 = (double)fVar1;
  *(double *)(param_2 + 0x58) = dVar2 * *(double *)(param_2 + 0x38) + *(double *)(param_2 + 0x58);
  *(double *)(param_2 + 0x60) = *(double *)(param_2 + 0x40) * dVar2 + *(double *)(param_2 + 0x60);
  *(double *)(param_2 + 0x68) = *(double *)(param_2 + 0x48) * dVar2 + *(double *)(param_2 + 0x68);
  fVar1 = (float)(**(code **)(*param_1 + 0xc0))(param_1,param_2);
  dVar2 = (double)fVar1;
  *(double *)(param_2 + 0x58) =
       dVar2 * *(double *)(param_2 + 8) + *(double *)(param_2 + 0x58) + *(double *)(param_2 + 0x20);
  *(double *)(param_2 + 0x60) =
       *(double *)(param_2 + 0x10) * dVar2 + *(double *)(param_2 + 0x60) +
       *(double *)(param_2 + 0x28);
  *(double *)(param_2 + 0x68) =
       *(double *)(param_2 + 0x18) * dVar2 + *(double *)(param_2 + 0x68) +
       *(double *)(param_2 + 0x30);
  return;
}



// FUNCTION 1488928b2 FUN_1488928b2 body=476 status=ok
// SIG undefined FUN_1488928b2(void)

void FUN_1488928b2(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auStack_98 [44];
  float local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_2[10];
  *(char *)(param_1 + 0x14) = (char)lVar3;
  if ((char)lVar3 == '\x01') {
    param_1[0x17] = param_2[9];
    lVar3 = param_2[8];
    param_1[0x15] = param_2[7];
    param_1[0x16] = lVar3;
    uVar1 = *(undefined4 *)(*param_2 + 8);
    local_68 = (double)param_2[7];
    uStack_60 = (double)param_2[8];
    local_58 = (double)param_2[9];
    local_6c = (float)SQRT(local_58 * local_58 + local_68 * local_68 + uStack_60 * uStack_60);
    if (local_6c <= 1e-08) {
      local_58 = DAT_14c8464f0;
      local_68 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_60 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      dVar4 = (double)(1.0 / local_6c);
      local_58 = local_58 * dVar4;
      uStack_60 = uStack_60 * dVar4;
      local_68 = local_68 * dVar4;
    }
    FUN_148892a90(param_1,&local_6c);
    FUN_148892b40(param_1,&local_68);
    if (param_1[0x13] != 0) {
      (**(code **)(*param_1 + 0x80))(param_1,local_48);
      lVar3 = FUN_148892734(param_1,local_48);
      local_6c = powf(local_6c,*(float *)(lVar3 + 0x48));
    }
    FUN_148892d3a(param_1,&local_68,&local_6c,uVar1);
    FUN_148893088(param_1,&local_68,&local_6c);
    dVar4 = (double)local_6c;
    param_2[7] = (longlong)(dVar4 * local_68);
    param_2[8] = (longlong)(uStack_60 * dVar4);
    param_2[9] = (longlong)(local_58 * dVar4);
    param_1[0x1a] = param_2[9];
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x3c);
    lVar3 = param_2[8];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x44);
    *(int *)(param_1 + 0x18) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
    *(int *)(param_1 + 0x19) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar2;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148892a90 FUN_148892a90 body=174 status=ok
// SIG undefined FUN_148892a90(void)

void FUN_148892a90(longlong *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x13] != 0) {
    fVar4 = *param_2;
    (**(code **)(*param_1 + 0x80))(param_1,local_38);
    pfVar2 = (float *)FUN_148892734(param_1,local_38);
    fVar1 = *pfVar2;
    (**(code **)(*param_1 + 0x80))(param_1,local_38);
    lVar3 = FUN_148892734(param_1,local_38);
    fVar4 = (fVar4 - fVar1) * *(float *)(lVar3 + 8);
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *param_2 = fVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148892b40 FUN_148892b40 body=505 status=ok
// SIG undefined FUN_148892b40(void)

void FUN_148892b40(longlong *param_1,double *param_2)

{
  double dVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_98 [44];
  float local_6c;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[0x13] != 0) {
    dVar1 = (double)FUN_144afd35e(SUB84(param_2[1],0),*param_2);
    local_6c = 0.0;
    fVar3 = modff(((float)dVar1 + 3.926991) / 1.5707964,&local_6c);
    fVar4 = (fVar3 + -0.5) * 1.5707964;
    fVar5 = ABS(fVar4);
    (**(code **)(*param_1 + 0x80))(param_1,local_68);
    lVar2 = FUN_148892734(param_1,local_68);
    fVar3 = 0.0;
    if (*(float *)(lVar2 + 0xc) <= fVar5) {
      (**(code **)(*param_1 + 0x80))(param_1,local_68);
      lVar2 = FUN_148892734(param_1,local_68);
      fVar3 = fVar4;
      if (fVar5 < *(float *)(lVar2 + 0x10)) {
        (**(code **)(*param_1 + 0x80))(param_1,local_68);
        lVar2 = FUN_148892734(param_1,local_68);
        fVar3 = *(float *)(lVar2 + 0xc);
        (**(code **)(*param_1 + 0x80))(param_1,local_68);
        lVar2 = FUN_148892734(param_1,local_68);
        fVar3 = ((fVar5 - fVar3) * *(float *)(lVar2 + 0x14) * fVar5 + 0.0) *
                (float)(-(uint)(0.0 < fVar4) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar4) & -(uint)(fVar4 < 0.0) & 0xbf800000);
      }
    }
    fVar3 = (local_6c + -2.0) * 1.5707964 + fVar3;
    fVar4 = cosf(fVar3);
    *param_2 = (double)fVar4;
    fVar3 = sinf(fVar3);
    param_2[1] = (double)fVar3;
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148892d3a FUN_148892d3a body=845 status=ok
// SIG undefined FUN_148892d3a(void)

void FUN_148892d3a(longlong *param_1,double *param_2,float *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[0x13] != 0) {
    fVar10 = *param_3;
    (**(code **)(*param_1 + 0x80))(param_1,local_88);
    lVar4 = FUN_148892734(param_1,local_88);
    if (fVar10 < *(float *)(lVar4 + 0x18) || fVar10 == *(float *)(lVar4 + 0x18)) {
      *(undefined4 *)(param_1 + 0xf) = 0;
      (**(code **)(*param_1 + 0x80))(param_1,local_88);
      lVar4 = FUN_148892734(param_1,local_88);
      fVar10 = -*(float *)(lVar4 + 0x40);
    }
    else {
      fVar9 = (float)((double)param_1[0x12] * param_2[2] +
                     (double)param_1[0x10] * *param_2 + (double)param_1[0x11] * param_2[1]);
      fVar8 = *(float *)(param_1 + 0xf) + param_4;
      *(float *)(param_1 + 0xf) = fVar8;
      (**(code **)(*param_1 + 0x80))(param_1,local_88);
      lVar4 = FUN_148892734(param_1,local_88);
      fVar10 = 0.0;
      if (*(float *)(lVar4 + 0x1c) <= fVar8 && fVar8 != *(float *)(lVar4 + 0x1c)) {
        (**(code **)(*param_1 + 0x80))(param_1,local_88);
        lVar4 = FUN_148892734(param_1,local_88);
        fVar10 = *(float *)(lVar4 + 0x20);
        fVar8 = fVar9;
        if (1.0 <= fVar9) {
          fVar8 = 1.0;
        }
        fVar8 = acosf((float)(~-(uint)(fVar9 < -1.0) & (uint)fVar8 |
                             -(uint)(fVar9 < -1.0) & 0xbf800000));
        (**(code **)(*param_1 + 0x80))(param_1,local_88);
        lVar4 = FUN_148892734(param_1,local_88);
        fVar10 = fVar10 - fVar8 * *(float *)(lVar4 + 0x44);
      }
      if (fVar9 < 0.0) {
        param_1[0xf] = 0;
        fVar10 = 0.0;
      }
      param_1[0x12] = (longlong)param_2[2];
      dVar1 = param_2[1];
      param_1[0x10] = (longlong)*param_2;
      param_1[0x11] = (longlong)dVar1;
    }
    fVar10 = fVar10 * param_4 + *(float *)((longlong)param_1 + 0x7c);
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x7c) = fVar10;
    dVar2 = (double)*param_3;
    dVar1 = param_2[2];
    dVar6 = param_2[1];
    dVar7 = *param_2;
    (**(code **)(*param_1 + 0x80))(param_1,local_88);
    lVar4 = FUN_148892734(param_1,local_88);
    dVar3 = (double)*(float *)((longlong)param_1 + 0x7c);
    dVar5 = ((*(double *)(lVar4 + 0x38) - DAT_14c846520) * dVar3 + DAT_14c846520) * dVar1 * dVar2;
    dVar6 = ((*(double *)(lVar4 + 0x30) - DAT_14c846518) * dVar3 + DAT_14c846518) * dVar6 * dVar2;
    dVar1 = ((*(double *)(lVar4 + 0x28) - DAT_14c846510) * dVar3 + DAT_14c846510) * dVar2 * dVar7;
    fVar10 = (float)SQRT(dVar5 * dVar5 + dVar1 * dVar1 + dVar6 * dVar6);
    *param_3 = fVar10;
    if (fVar10 <= 1e-08) {
      param_2[2] = DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = dVar1;
    }
    else {
      dVar7 = (double)(1.0 / fVar10);
      *param_2 = dVar1 * dVar7;
      param_2[1] = dVar6 * dVar7;
      param_2[2] = dVar5 * dVar7;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148893088 FUN_148893088 body=319 status=ok
// SIG undefined FUN_148893088(void)

void FUN_148893088(longlong *param_1,double *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x13] != 0) {
    dVar4 = (double)*param_3;
    dVar1 = param_2[2];
    dVar2 = param_2[1];
    dVar3 = *param_2;
    (**(code **)(*param_1 + 0x80))(param_1,local_68);
    lVar9 = FUN_148892734(param_1,local_68);
    dVar1 = dVar1 * dVar4 * *(double *)(lVar9 + 0x60);
    dVar5 = dVar2 * dVar4 * *(double *)(lVar9 + 0x58);
    dVar2 = dVar4 * dVar3 * *(double *)(lVar9 + 0x50);
    fVar10 = (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar5 * dVar5);
    *param_3 = fVar10;
    if (fVar10 <= 1e-08) {
      param_2[2] = DAT_14c8464f0;
      uVar8 = DAT_14c8464e8._4_4_;
      uVar7 = (undefined4)DAT_14c8464e8;
      uVar6 = DAT_14c8464e0._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 4) = uVar6;
      *(undefined4 *)(param_2 + 1) = uVar7;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
    }
    else {
      dVar3 = (double)(1.0 / fVar10);
      *param_2 = dVar2 * dVar3;
      param_2[1] = dVar5 * dVar3;
      param_2[2] = dVar1 * dVar3;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488931c8 FUN_1488931c8 body=115 status=ok
// SIG undefined FUN_1488931c8(void)

void FUN_1488931c8(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_3 == '\x01') {
    if ((char)param_1[0x1f] == '\x01') {
      (**(code **)(*param_1 + 0x80))(param_1);
      lVar1 = 0x28;
      if ((char)param_1[0x1f] == '\x01') goto LAB_148893203;
    }
  }
  else if ((param_3 == '\0') && ((char)param_1[0x1f] == '\0')) {
    *(undefined1 *)(param_1 + 0x1f) = 1;
    uVar2 = FUN_147acf618(param_2);
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar2;
    lVar1 = 0x78;
LAB_148893203:
                    /* WARNING: Could not recover jumptable at 0x00014889320e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + lVar1))(param_1);
    return;
  }
  return;
}



// FUNCTION 14889323c FUN_14889323c body=58 status=ok
// SIG undefined FUN_14889323c(void)

void FUN_14889323c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14888ea02();
  }
  FUN_14888e3b0(param_2,param_1,param_1 + 0xe0,uVar1);
  return;
}



// FUNCTION 148893276 FUN_148893276 body=44 status=ok
// SIG undefined FUN_148893276(void)

void FUN_148893276(longlong *param_1)

{
  if ((char)param_1[0x1f] == '\x01') {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014889329e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



// FUNCTION 1488932a2 FUN_1488932a2 body=57 status=ok
// SIG undefined FUN_1488932a2(void)

void FUN_1488932a2(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  }
  FUN_14888e96c(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd;
  return;
}



// FUNCTION 1488932e8 FUN_1488932e8 body=148 status=ok
// SIG undefined FUN_1488932e8(void)

void FUN_1488932e8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14889339c(param_1,&local_30);
  lVar3 = FUN_1488904c2(local_30 + 0x38,param_2,param_1);
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
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889339c FUN_14889339c body=120 status=ok
// SIG undefined FUN_14889339c(void)

undefined8 * FUN_14889339c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_1464e7e1c();
  cVar4 = FUN_1448093f4(uVar6,uVar5);
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = uVar6;
      param_2[1] = plVar3;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_2;
    }
  }
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148893414 FUN_148893414 body=133 status=ok
// SIG undefined FUN_148893414(void)

void FUN_148893414(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14889339c(param_1,&local_28);
  FUN_146a6959c(param_1 + 0xe8,local_28 + 0x28);
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



// FUNCTION 1488934aa FUN_1488934aa body=666 status=ok
// SIG undefined FUN_1488934aa(void)

void FUN_1488934aa(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
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
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    local_f8 = param_3;
    FUN_14889339c(0,&local_f0);
    FUN_1488902c0(local_f0 + 0x38,&DAT_14cb80640,&local_78);
    plVar4 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar5 = local_78;
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        }
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
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
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        (**(code **)(*param_2 + 0x30))(param_2,&local_f0,param_1,&DAT_14cb80640);
        FUN_14888e252(local_f8,uVar3,&local_f0);
        FUN_14889204a(&local_f0);
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_14889339c(param_1,&local_f0);
    FUN_1488902c0(local_f0 + 0x38,&DAT_14cb80648,&local_78);
    plVar4 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar5 = local_78;
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        }
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
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
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        (**(code **)(*param_2 + 0x30))(param_2,&local_f0,param_1,&DAT_14cb80648);
        FUN_14888e252(local_f8,uVar3,&local_f0);
        FUN_14889204a(&local_f0);
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889375c FUN_14889375c body=184 status=ok
// SIG undefined FUN_14889375c(void)

undefined8 * FUN_14889375c(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b18a3f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_1 + 7) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_3c;
  *(undefined4 *)(param_1 + 8) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_34;
  *param_1 = &PTR_FUN_14b18b390;
  param_1[0xc] = &PTR_FUN_14b18a090;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &PTR_FUN_14b189ef0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148893824 FUN_148893824 body=164 status=ok
// SIG undefined FUN_148893824(void)

void FUN_148893824(longlong *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1[0x12] != 0) {
    switch(*(undefined1 *)((longlong)param_1 + 0xa4)) {
    case 0:
      if (param_3 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
        uVar2 = FUN_147acf618(param_2);
        *(undefined4 *)(param_1 + 0x13) = uVar2;
        cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
        if (cVar1 != '\0') {
          *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
        }
      }
      break;
    case 1:
      if (param_3 == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0xa4) = 2;
      }
      break;
    case 2:
      if (param_3 == '\0') {
        (**(code **)(*param_1 + 0x90))(param_1);
        *(undefined1 *)((longlong)param_1 + 0xa4) = 3;
      }
      break;
    case 3:
      if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001488938b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x28))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1488938c8 FUN_1488938c8 body=414 status=ok
// SIG undefined FUN_1488938c8(void)

void FUN_1488938c8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x90) == 0) goto LAB_148893a5e;
  bVar4 = *(byte *)(param_1 + 0xa4);
  if ((bVar4 == 0) || (bVar4 == 3)) {
LAB_148893905:
    if (3 < bVar4) goto LAB_148893a5e;
    switch(bVar4) {
    case 0:
      if (*param_3 == 0) goto LAB_148893a5e;
      *(longlong *)(param_1 + 0x9c) = *param_3;
      *(undefined1 *)(param_1 + 0xa4) = 1;
      break;
    case 1:
      if (*param_3 != 0) {
        if (*param_3 != *(longlong *)(param_1 + 0x9c)) {
LAB_148893995:
          *(undefined8 *)(param_1 + 0x98) = 0;
          *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        goto LAB_148893a5e;
      }
      *(undefined1 *)(param_1 + 0xa4) = 2;
      break;
    case 2:
      if (*param_3 != *(longlong *)(param_1 + 0x9c)) {
        if (*param_3 != 0) goto LAB_148893995;
        goto LAB_148893a5e;
      }
      FUN_148893a7e(param_1,&local_30);
      uVar3 = FUN_1488904c2(local_30 + 0x68,param_1 + 0x9c,param_1);
      FUN_143d71c2e(param_1,uVar3);
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
      goto LAB_148893a57;
    case 3:
      if (*param_3 != *(longlong *)(param_1 + 0x9c)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      goto LAB_148893a5e;
    }
    uVar5 = FUN_147acf618(param_2);
    *(undefined4 *)(param_1 + 0x98) = uVar5;
  }
  else {
    fVar6 = (float)FUN_147acf618(param_2);
    if (fVar6 - *(float *)(param_1 + 0x98) < *(float *)(*(longlong *)(param_1 + 0x90) + 0x18)) {
      bVar4 = *(byte *)(param_1 + 0xa4);
      goto LAB_148893905;
    }
LAB_148893a57:
    *(undefined1 *)(param_1 + 0xa4) = 3;
  }
LAB_148893a5e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148893a7e FUN_148893a7e body=120 status=ok
// SIG undefined FUN_148893a7e(void)

undefined8 * FUN_148893a7e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_1464e7f74();
  cVar4 = FUN_1448093f4(uVar6,uVar5);
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = uVar6;
      param_2[1] = plVar3;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_2;
    }
  }
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148893af6 FUN_148893af6 body=296 status=ok
// SIG undefined FUN_148893af6(void)

void FUN_148893af6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148893a7e(param_1,&local_28);
  FUN_146a6959c(param_1 + 0x68,local_28 + 0x28);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_148893a7e(param_1,&local_28);
  FUN_1486ba45a(param_1 + 0x80,local_28 + 0x40);
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
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = FUN_1464e7f74();
  cVar5 = FUN_1448093f4(uVar7,uVar6);
  if (cVar5 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
      uVar7 = FUN_148893c30(uVar7);
      *(undefined8 *)(param_1 + 0x90) = uVar7;
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(puVar4);
        LOCK();
        piVar2 = (int *)((longlong)puVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
      goto LAB_148893c11;
    }
  }
  uVar7 = FUN_148893c30(uVar7);
  *(undefined8 *)(param_1 + 0x90) = uVar7;
LAB_148893c11:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148893c30 FUN_148893c30 body=175 status=ok
// SIG undefined FUN_148893c30(void)

longlong * FUN_148893c30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(param_1 + 0x50);
  FUN_1446dcdd4(local_40);
  if ((DAT_14cb80828 != 0) &&
     (plVar1 = (longlong *)FUN_144837462(DAT_14cb80828,local_40), plVar1 != (longlong *)0x0)) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1464e8614();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_148893c78;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_148893c78:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 148893ce0 FUN_148893ce0 body=92 status=ok
// SIG undefined FUN_148893ce0(void)

void FUN_148893ce0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14888ea02();
  }
  FUN_14888e3b0(param_2,param_1,param_1 + 0x60,uVar1);
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14888ea02();
  }
  FUN_14888e56e(param_2,param_1,param_1 + 0x78,uVar1);
  return;
}



// FUNCTION 148893d3c FUN_148893d3c body=50 status=ok
// SIG undefined FUN_148893d3c(void)

void FUN_148893d3c(longlong *param_1)

{
  char cVar1;
  
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  }
  FUN_14888e96c(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd;
  return;
}



// FUNCTION 148893d7a FUN_148893d7a body=86 status=ok
// SIG undefined FUN_148893d7a(void)

void FUN_148893d7a(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  
  if ((*(char *)((longlong)param_1 + 0xa4) != '\0') &&
     (*(char *)((longlong)param_1 + 0xa4) != '\x03')) {
    fVar1 = (float)FUN_147acf618(param_2);
    if (*(float *)(param_1[0x12] + 0x18) <= fVar1 - *(float *)(param_1 + 0x13)) {
      (**(code **)(*param_1 + 0x98))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000148893dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148893df4 FUN_148893df4 body=32 status=ok
// SIG undefined FUN_148893df4(void)

undefined8 * FUN_148893df4(undefined8 *param_1)

{
  FUN_14889375c();
  *param_1 = &PTR_FUN_14b40bd20;
  return param_1;
}



// FUNCTION 148893ebc FUN_148893ebc body=1212 status=ok
// SIG undefined FUN_148893ebc(void)

void FUN_148893ebc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
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
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    local_f8 = param_3;
    FUN_148893a7e(0,&local_f0);
    FUN_1488902c0(local_f0 + 0x68,&DAT_14cb80650,&local_78);
    plVar4 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar5 = local_78;
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        }
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
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
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        (**(code **)(*param_2 + 0x10))(param_2,&local_f0,param_1,&DAT_14cb80650);
        FUN_14888e252(local_f8,uVar3,&local_f0);
        FUN_14889204a(&local_f0);
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_148893a7e(param_1,&local_f0);
    FUN_1488902c0(local_f0 + 0x68,&DAT_14cb80658,&local_78);
    plVar4 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar5 = local_78;
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        }
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
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
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        (**(code **)(*param_2 + 0x10))(param_2,&local_f0,param_1,&DAT_14cb80658);
        FUN_14888e252(local_f8,uVar3,&local_f0);
        FUN_14889204a(&local_f0);
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_148893a7e(param_1,&local_f0);
    FUN_1488902c0(local_f0 + 0x68,&DAT_14cb80660,&local_78);
    plVar4 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar5 = local_78;
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        }
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
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
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        (**(code **)(*param_2 + 0x10))(param_2,&local_f0,param_1,&DAT_14cb80660);
        FUN_14888e252(local_f8,uVar3,&local_f0);
        FUN_14889204a(&local_f0);
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_148893a7e(param_1,&local_f0);
    FUN_1488902c0(local_f0 + 0x68,&DAT_14cb80668,&local_78);
    plVar4 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar5 = local_78;
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        }
        uVar3 = *(undefined8 *)(lVar5 + lVar7);
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
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        (**(code **)(*param_2 + 0x10))(param_2,&local_f0,param_1,&DAT_14cb80668);
        FUN_14888e252(local_f8,uVar3,&local_f0);
        FUN_14889204a(&local_f0);
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889437a FUN_14889437a body=162 status=ok
// SIG undefined FUN_14889437a(void)

undefined8 * FUN_14889437a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xa002;
  param_1[3] = 0;
  param_1[4] = &PTR_FUN_14b18a090;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = &PTR_FUN_14b189ef0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xa006;
  puVar1 = param_1 + 0xd;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_14b40bdc0;
  FUN_1411786d8(puVar1,&DAT_14cb80650);
  FUN_1411786d8(puVar1,&DAT_14cb80658);
  FUN_1411786d8(puVar1,&DAT_14cb80660);
  FUN_1411786d8(puVar1,&DAT_14cb80668);
  return param_1;
}



// FUNCTION 14889441c FUN_14889441c body=30 status=ok
// SIG undefined FUN_14889441c(void)

void FUN_14889441c(longlong param_1)

{
  FUN_148893d3c();
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}



// FUNCTION 14889443a FUN_14889443a body=405 status=ok
// SIG undefined FUN_14889443a(void)

void FUN_14889443a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
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
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_148893ebc();
  if (param_2 != (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_148893a7e(param_1,&local_f0);
    FUN_1488902c0(local_f0 + 0x68,&DAT_14cb80670,&local_78);
    plVar4 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar5 = (longlong)(int)uStack_70;
    if (lVar5 != 0) {
      local_f8 = local_78;
      lVar6 = 0;
      do {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        }
        uVar3 = *(undefined8 *)(local_f8 + lVar6);
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
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        (**(code **)(*param_2 + 0x10))(param_2,&local_f0,param_1,&DAT_14cb80670);
        FUN_14888e252(param_3,uVar3,&local_f0);
        FUN_14889204a(&local_f0);
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488945dc FUN_1488945dc body=153 status=ok
// SIG undefined FUN_1488945dc(void)

bool FUN_1488945dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148893a7e(param_1,&local_30);
  lVar3 = FUN_1488904c2(local_30 + 0x68,param_1 + 0xa8,param_1);
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
  if (lVar3 != 0) {
    FUN_143d71c2e(param_1,lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148894676 FUN_148894676 body=153 status=ok
// SIG undefined FUN_148894676(void)

bool FUN_148894676(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148893a7e(param_1,&local_30);
  lVar3 = FUN_1488904c2(local_30 + 0x68,&DAT_14cb80670,param_1);
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
  if (lVar3 != 0) {
    FUN_143d71c2e(param_1,lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148894710 FUN_148894710 body=48 status=ok
// SIG undefined FUN_148894710(void)

undefined8 * FUN_148894710(undefined8 *param_1)

{
  FUN_14889437a();
  *param_1 = &PTR_FUN_14b40bde0;
  FUN_1411786d8(param_1 + 0xd,&DAT_14cb80670);
  return param_1;
}



// FUNCTION 148894740 FUN_148894740 body=65 status=ok
// SIG undefined FUN_148894740(void)

undefined8 * FUN_148894740(undefined8 *param_1)

{
  FUN_148894782();
  *param_1 = &PTR_FUN_14b18bd30;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 148894782 FUN_148894782 body=195 status=ok
// SIG undefined FUN_148894782(void)

undefined8 * FUN_148894782(undefined8 *param_1)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b18a3f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf8;
  FUN_1412e3d1e(&local_40);
  *(undefined4 *)(param_1 + 7) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_3c;
  *(undefined4 *)(param_1 + 8) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_34;
  *param_1 = &PTR_FUN_14b18b020;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x1c] = &PTR_FUN_14b18a090;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148894846 FUN_148894846 body=43 status=ok
// SIG undefined FUN_148894846(void)

void FUN_148894846(longlong *param_1)

{
  char cVar1;
  
  FUN_1488932e8(param_1,&DAT_14cb80640);
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  }
  return;
}



// FUNCTION 148894872 FUN_148894872 body=98 status=ok
// SIG undefined FUN_148894872(void)

void FUN_148894872(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  float fVar2;
  
  if (((char)param_1[0x1f] == '\x01') && ((char)param_1[0x28] == '\0')) {
    fVar2 = (float)FUN_147acf618(param_2);
    if (*(float *)((longlong)param_1 + 0x144) <= fVar2 - *(float *)((longlong)param_1 + 0xfc)) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_1488932e8(param_1,&DAT_14cb80678);
      cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
      }
    }
  }
  return;
}



// FUNCTION 1488948d4 FUN_1488948d4 body=64 status=ok
// SIG undefined FUN_1488948d4(void)

void FUN_1488948d4(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  }
  FUN_14888e96c(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd;
  return;
}



// FUNCTION 148894914 FUN_148894914 body=135 status=ok
// SIG undefined FUN_148894914(void)

void FUN_148894914(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148893414();
  FUN_1488949ac(param_1,&local_28);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(local_28 + 0x48);
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



// FUNCTION 1488949ac FUN_1488949ac body=120 status=ok
// SIG undefined FUN_1488949ac(void)

undefined8 * FUN_1488949ac(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = FUN_1464e82e0();
  cVar4 = FUN_1448093f4(uVar6,uVar5);
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = uVar6;
      param_2[1] = plVar3;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return param_2;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return param_2;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return param_2;
    }
  }
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148894a24 FUN_148894a24 body=407 status=ok
// SIG undefined FUN_148894a24(void)

void FUN_148894a24(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
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
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != (longlong *)0x0) {
    local_78 = 0;
    uStack_70 = 0;
    FUN_14889339c(0,&local_f0);
    FUN_1488902c0(local_f0 + 0x38,&DAT_14cb80678,&local_78);
    plVar4 = local_e8;
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar5 = (longlong)(int)uStack_70;
    if (lVar5 != 0) {
      local_f8 = local_78;
      lVar6 = 0;
      do {
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
        }
        uVar3 = *(undefined8 *)(local_f8 + lVar6);
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
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        (**(code **)(*param_2 + 0x28))(param_2,&local_f0,param_1,&DAT_14cb80678);
        FUN_14888e252(param_3,uVar3,&local_f0);
        FUN_14889204a(&local_f0);
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1488934aa(param_1,param_2,param_3);
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148894bdc FUN_148894bdc body=134 status=ok
// SIG undefined FUN_148894bdc(void)

undefined8 * FUN_148894bdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xa002;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b18b210;
  param_1[4] = &PTR_FUN_14b18a090;
  puVar1 = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1411786d8(puVar1,&DAT_14cb80640);
  FUN_1411786d8(puVar1,&DAT_14cb80648);
  *param_1 = &PTR_FUN_14b40be00;
  *(undefined4 *)(param_1 + 9) = 0x3f000000;
  FUN_1411786d8(puVar1,&DAT_14cb80678);
  return param_1;
}



// FUNCTION 148894c62 FUN_148894c62 body=64 status=ok
// SIG undefined FUN_148894c62(void)

undefined8 * FUN_148894c62(undefined8 *param_1)

{
  FUN_148894782();
  *param_1 = &PTR_FUN_14b40be30;
  param_1[0x20] = 0x3ecccccd3f800000;
  param_1[0x21] = 0x3ecccccd00000000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  return param_1;
}



// FUNCTION 148894ca2 FUN_148894ca2 body=59 status=ok
// SIG undefined FUN_148894ca2(void)

void FUN_148894ca2(longlong *param_1)

{
  char cVar1;
  
  *(int *)(param_1 + 0x23) = (int)param_1[0x20];
  FUN_1488932e8((int)param_1[0x20],&DAT_14cb80640);
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  }
  return;
}



// FUNCTION 148894cea FUN_148894cea body=75 status=ok
// SIG undefined FUN_148894cea(void)

void FUN_148894cea(longlong *param_1)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  }
  FUN_14888e96c(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfd;
  return;
}



// FUNCTION 148894d36 FUN_148894d36 body=178 status=ok
// SIG undefined FUN_148894d36(void)

void FUN_148894d36(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0xf8) != '\x01') {
    return;
  }
  fVar2 = (float)FUN_147acf618(param_2);
  fVar2 = fVar2 - *(float *)(param_1 + 0xfc);
  if (*(char *)(param_1 + 0x110) == '\0') {
    if (fVar2 < *(float *)(param_1 + 0x100)) {
      return;
    }
    *(undefined1 *)(param_1 + 0x110) = 1;
    *(float *)(param_1 + 0x118) = *(float *)(param_1 + 0x104);
    *(float *)(param_1 + 0x114) = fVar2 + *(float *)(param_1 + 0x104);
    puVar1 = &DAT_14cb80680;
  }
  else {
    if (fVar2 < *(float *)(param_1 + 0x114)) {
      return;
    }
    fVar4 = *(float *)(param_1 + 0x118) - *(float *)(param_1 + 0x108);
    fVar3 = *(float *)(param_1 + 0x10c);
    if (*(float *)(param_1 + 0x10c) <= fVar4) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x118) = fVar3;
    *(float *)(param_1 + 0x114) = fVar2 + fVar3;
    puVar1 = &DAT_14cb80688;
  }
  FUN_1488932e8(param_1,puVar1);
  return;
}



// FUNCTION 148894de8 FUN_148894de8 body=142 status=ok
// SIG undefined FUN_148894de8(void)

undefined8 * FUN_148894de8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xa002;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b18b210;
  param_1[4] = &PTR_FUN_14b18a090;
  puVar1 = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_1411786d8(puVar1,&DAT_14cb80640);
  FUN_1411786d8(puVar1,&DAT_14cb80648);
  *param_1 = &PTR_FUN_14b40bec0;
  FUN_1411786d8(puVar1,&DAT_14cb80680);
  FUN_1411786d8(puVar1,&DAT_14cb80688);
  return param_1;
}



// FUNCTION 148894e76 FUN_148894e76 body=32 status=ok
// SIG undefined FUN_148894e76(void)

undefined8 * FUN_148894e76(undefined8 *param_1)

{
  FUN_148894782();
  *param_1 = &PTR_FUN_14b40bee0;
  return param_1;
}



// FUNCTION 148894e96 FUN_148894e96 body=45 status=ok
// SIG undefined FUN_148894e96(void)

void FUN_148894e96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_148894ec4();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14b18c7d0;
  puVar1[3] = 0x3f0000003f000000;
  return;
}



// FUNCTION 148894ec4 FUN_148894ec4 body=101 status=ok
// SIG undefined FUN_148894ec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148894ec4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb80690;
  if (DAT_14cb80690 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x400,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 4;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb80690;
    _DAT_14cb80698 = _DAT_14cb80698 + 0x20;
  }
  DAT_14cb80690 = (undefined8 *)*puVar2;
  _DAT_14cb8069c = _DAT_14cb8069c + 1;
  return;
}



// FUNCTION 148894f2a FUN_148894f2a body=44 status=ok
// SIG undefined FUN_148894f2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148894f2a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8069c = _DAT_14cb8069c + -1;
  *param_1 = DAT_14cb80690;
  DAT_14cb80690 = param_1;
  return;
}



// FUNCTION 148894f56 FUN_148894f56 body=52 status=ok
// SIG undefined FUN_148894f56(void)

void FUN_148894f56(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b18c7d0;
  param_1[3] = 0x3f0000003f000000;
  return;
}



// FUNCTION 148894f8a FUN_148894f8a body=76 status=ok
// SIG undefined FUN_148894f8a(void)

undefined8 * FUN_148894f8a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_148894fd6();
  memset(puVar1 + 2,0,200);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b18cc20;
  FUN_1486be2ec(puVar1 + 3);
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  return puVar1;
}



// FUNCTION 148894fd6 FUN_148894fd6 body=113 status=ok
// SIG undefined FUN_148894fd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148894fd6(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb80720;
  if (DAT_14cb80720 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1b00,0);
    lVar4 = 0x1f;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x1b;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb80720;
    _DAT_14cb80728 = _DAT_14cb80728 + 0x20;
  }
  DAT_14cb80720 = (undefined8 *)*puVar2;
  _DAT_14cb8072c = _DAT_14cb8072c + 1;
  return;
}



// FUNCTION 148895048 FUN_148895048 body=44 status=ok
// SIG undefined FUN_148895048(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148895048(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8072c = _DAT_14cb8072c + -1;
  *param_1 = DAT_14cb80720;
  DAT_14cb80720 = param_1;
  return;
}



// FUNCTION 148895074 FUN_148895074 body=75 status=ok
// SIG undefined FUN_148895074(void)

void FUN_148895074(undefined8 *param_1)

{
  (**(code **)*param_1)();
  memset(param_1 + 2,0,200);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b18cc20;
  FUN_1486be2ec(param_1 + 3);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return;
}



// FUNCTION 1488950c0 FUN_1488950c0 body=403 status=ok
// SIG undefined FUN_1488950c0(void)

void FUN_1488950c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[0x1e];
  fVar3 = param_1[0x1f];
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *param_1 = fVar3;
  fVar2 = 1.0 - param_1[0x20];
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  param_1[1] = fVar2;
  param_1[2] = (float)(~-(uint)(fVar3 < fVar2) & 0x3f800000 |
                      (uint)(1.0 / (fVar2 - fVar3)) & -(uint)(fVar3 < fVar2));
  fVar3 = param_1[0x21] * 0.5 * 0.017453292;
  if (1.5707964 <= fVar3) {
    fVar3 = 1.5707964;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  param_1[3] = fVar3;
  fVar2 = param_1[0x22] * 0.5 * 0.017453292;
  if (1.5707964 <= fVar2) {
    fVar2 = 1.5707964;
  }
  fVar4 = fVar2;
  if (fVar2 <= fVar3) {
    fVar4 = fVar3;
  }
  param_1[4] = fVar4;
  param_1[5] = (float)(~-(uint)(fVar3 < fVar2) & 0x3f800000 |
                      (uint)(1.0 / (fVar4 - fVar3)) & -(uint)(fVar3 < fVar2));
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[0x12] = fVar1;
  fVar1 = param_1[0x23];
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[6] = fVar1;
  fVar1 = param_1[0x24];
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1[7] = fVar1;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0x26);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x28);
  param_1[0xe] = 0.0;
  param_1[0xf] = 1.875;
  param_1[8] = (float)(-(uint)(0.0 < param_1[0x25]) & (uint)(1.0 / param_1[0x25]));
  param_1[0x10] = (float)(-(uint)(0.0 < param_1[0x2a]) & (uint)(1.0 / param_1[0x2a]));
  param_1[0x11] =
       (float)(-(uint)(0.0 < param_1[0x2b]) & (uint)(1.0 / (param_1[0x2b] * 0.017453292)));
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x1c);
  param_1[0x18] = 0.0;
  param_1[0x19] = 1.875;
  return;
}



// FUNCTION 148895254 FUN_148895254 body=79 status=ok
// SIG undefined FUN_148895254(void)

void FUN_148895254(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1488950c0(param_1 + 0x18);
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xd0) * 0xb8;
    lVar1 = *(longlong *)(param_1 + 200) + 8;
    do {
      FUN_1488950c0(lVar1);
      lVar1 = lVar1 + 0xb8;
      lVar2 = lVar2 + -0xb8;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14889531c FUN_14889531c body=82 status=ok
// SIG undefined FUN_14889531c(void)

void FUN_14889531c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_145d110ee();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x00014889536a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1488953be FUN_1488953be body=684 status=ok
// SIG undefined FUN_1488953be(void)

undefined8 FUN_1488953be(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
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
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = (int)param_1[0x54];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar8) || (uStack_58 != plVar2)) {
      do {
        lVar6 = *local_88;
        lVar9 = (longlong)iStack_6c;
        lVar7 = *(longlong *)(lVar6 + 0x10 + lVar9 * 0x20);
        if ((lVar7 != 0) &&
           ((cVar4 = FUN_140dddae6(lVar7 + 0x48), cVar4 != '\0' &&
            (plVar3 = *(longlong **)(*(longlong *)(lVar6 + lVar9 * 0x20 + 0x10) + 0x30),
            plVar3 != (longlong *)0x0)))) {
          lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar7 = FUN_145cd8f96();
          if ((lVar7 != 0) &&
             (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) && (cVar4 = (*(code *)*param_2)(param_2[1],plVar3), cVar4 != '\0'))))
          goto LAB_1488955a7;
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar8) ||
               local_88 != plVar1);
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = (int)param_1[0x3e];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar8) || (uStack_58 != plVar2)) {
      do {
        plVar3 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if (plVar3 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar7 = FUN_145cd8f96();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30 && (cVar4 = (*(code *)*param_2)(param_2[1],plVar3), cVar4 != '\0'))))
          goto LAB_1488955a7;
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar8) ||
               local_88 != plVar1);
    }
  }
  uVar5 = 0;
LAB_148895637:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_1488955a7:
  uVar5 = 1;
  goto LAB_148895637;
}



// FUNCTION 1488956bc FUN_1488956bc body=118 status=ok
// SIG undefined FUN_1488956bc(void)

longlong * FUN_1488956bc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xb0);
  if (lVar4 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xa8);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar3;
      lVar5 = lVar5 + 0x18;
    } while (lVar4 * 0x18 != lVar5);
  }
  return param_2;
}



// FUNCTION 148895744 FUN_148895744 body=1 status=ok
// SIG undefined FUN_148895744(void)

void FUN_148895744(void)

{
  return;
}



// FUNCTION 148895746 FUN_148895746 body=249 status=ok
// SIG undefined FUN_148895746(void)

void FUN_148895746(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = *param_3;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_58 = 0;
  FUN_1400bbfae(local_40);
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if (cVar2 != '\0') {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x8400000) != 0) {
      local_78 = 0;
      goto LAB_148895801;
    }
  }
  FUN_14485c47a(&local_78,param_2);
LAB_148895801:
  FUN_148895944(param_1,&local_78,&local_50);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148895840 FUN_148895840 body=68 status=ok
// SIG undefined FUN_148895840(void)

undefined8 * FUN_148895840(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1406f625c(param_2);
  if (lVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(lVar1 + 0x148);
    lVar1 = *(longlong *)(lVar1 + 0x150);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_1;
}



// FUNCTION 148895884 FUN_148895884 body=160 status=ok
// SIG undefined FUN_148895884(void)

undefined8 FUN_148895884(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%ls::FGbxMomentManager",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148895926 FUN_148895926 body=30 status=ok
// SIG undefined FUN_148895926(void)

undefined8 FUN_148895926(undefined8 param_1,undefined8 param_2)

{
  FUN_14153f984();
  return param_2;
}



// FUNCTION 148895944 FUN_148895944 body=1163 status=ok
// SIG undefined FUN_148895944(void)

void FUN_148895944(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  void *pvVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  void *pvStack_80;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = (longlong *)*param_2;
  local_b8 = *(undefined4 *)(param_2 + 1);
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_b0 = *(undefined4 *)(param_2 + 2);
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0x14);
  local_a8 = (void *)0x0;
  local_a0 = *(int *)(param_2 + 4);
  lVar15 = (longlong)local_a0;
  pvVar3 = (void *)param_2[3];
  if (lVar15 == 0) {
    local_9c = 0;
    uStack_90 = (longlong *)param_2[1];
    uStack_88 = (longlong *)param_2[2];
    local_78 = 0;
    local_98 = local_c0;
LAB_1488959cc:
    pvStack_80 = (void *)0x0;
    local_74 = 0;
    pvStack_50 = (void *)0x0;
    local_c0 = local_98;
    local_70 = local_98;
  }
  else {
    FUN_1446dd670(&local_a8,local_a0,0);
    memcpy(local_a8,pvVar3,lVar15 * 2);
    pvVar3 = local_a8;
    local_78 = local_a0;
    lVar15 = (longlong)local_a0;
    local_98 = local_c0;
    uStack_90 = (longlong *)CONCAT44(uStack_b4,local_b8);
    uStack_88 = (longlong *)CONCAT44(uStack_ac,uStack_b0);
    pvStack_80 = (void *)0x0;
    if (lVar15 == 0) goto LAB_1488959cc;
    FUN_1446dd670(&pvStack_80,local_a0,0);
    memcpy(pvStack_80,pvVar3,lVar15 * 2);
    pvVar3 = pvStack_80;
    lVar15 = (longlong)local_78;
    local_70 = local_98;
    local_68 = uStack_90;
    plStack_60 = uStack_88;
    local_58 = (longlong *)0x0;
    pvStack_50 = (void *)CONCAT44(pvStack_50._4_4_,local_78);
    if (lVar15 != 0) {
      FUN_1446dd670(&local_58,local_78,0);
      memcpy(local_58,pvVar3,lVar15 * 2);
      goto LAB_148895a02;
    }
  }
  local_58 = (longlong *)0x0;
  pvStack_50 = (void *)((ulonglong)pvStack_50 & 0xffffffff);
  local_98 = local_70;
  local_68 = uStack_90;
  plStack_60 = uStack_88;
LAB_148895a02:
  uVar4 = (uint)((ulonglong)plStack_60 >> 0x10);
  uVar14 = (uint)plStack_60 & 0xffff;
  uVar6 = (uint)((ulonglong)local_68 >> 0x10);
  uVar13 = (uint)local_68 & 0xffff;
  uVar6 = ((uint)local_68 << 0x10 | uVar13) + (int)((ulonglong)local_68 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4);
  uVar7 = FUN_144a78877(0,(uVar6 >> 2) +
                          ((uint)plStack_60 << 0x10 | uVar14) + (int)((ulonglong)plStack_60 >> 0x20)
                          + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar14 >> 4) + uVar6 * 0x40 +
                          0x9e3779b9 ^ uVar6);
  iVar9 = (int)pvStack_50 + -1;
  plVar1 = local_58;
  if ((int)pvStack_50 == 0) {
    iVar9 = 0;
    plVar1 = (longlong *)&DAT_149dfb77a;
  }
  uVar8 = FUN_144a49b4a(iVar9,plVar1);
  uVar7 = FUN_144a78877(uVar7,uVar8);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  iVar9 = FUN_145d569f4((longlong *)(param_1 + 0xa8),uVar7,&local_98);
  if (iVar9 == -1) {
    lVar15 = 0;
  }
  else {
    lVar15 = (longlong)iVar9 * 0x50 + *(longlong *)(param_1 + 0xa8);
  }
  if (pvStack_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((lVar15 != 0) && (iVar9 = *(int *)(lVar15 + 0x40), (longlong)iVar9 != 0)) {
    lVar15 = *(longlong *)(lVar15 + 0x38);
    lVar12 = 0;
    do {
      if ((*param_3 == 0) ||
         ((*(int *)(lVar15 + 4 + lVar12) == *param_3 &&
          (*(int *)(lVar15 + 0xc + lVar12) == param_3[2])))) {
        *(undefined1 *)(lVar15 + 0x20 + lVar12) = 1;
      }
      lVar12 = lVar12 + 0x28;
    } while ((longlong)iVar9 * 0x28 != lVar12);
  }
  lVar15 = FUN_145d56936(param_2);
  if (lVar15 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    plVar2 = (longlong *)(param_1 + 0x40);
    local_98 = (longlong *)&DAT_100000000;
    uStack_88 = (longlong *)&DAT_ffffffff;
    pvStack_80 = (void *)((ulonglong)pvStack_80 & 0xffffffff00000000);
    local_c8 = param_2;
    uStack_90 = plVar2;
    if (*(int *)(param_1 + 0x58) == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_98);
      iVar9 = *(int *)(param_1 + 0x58);
    }
    local_58 = uStack_88;
    plVar5 = local_58;
    pvStack_50 = pvStack_80;
    local_68 = local_98;
    plStack_60 = uStack_90;
    local_58._4_4_ = (int)((ulonglong)uStack_88 >> 0x20);
    iVar10 = local_58._4_4_;
    local_70 = plVar1;
    if ((local_58._4_4_ != iVar9) || (param_2 = local_c8, local_58 = plVar5, uStack_90 != plVar2)) {
      do {
        local_58 = plVar5;
        lVar12 = *local_70;
        lVar11 = FUN_140999d24(*(undefined8 *)(lVar12 + 8 + (longlong)iVar10 * 0x20));
        if (lVar11 == lVar15) {
          lVar12 = *(longlong *)((longlong)iVar10 * 0x20 + lVar12 + 8);
          if ((*param_3 == 0) ||
             ((*(int *)(lVar12 + 0x160) == *param_3 && (*(int *)(lVar12 + 0x168) == param_3[2])))) {
            *(undefined1 *)(lVar12 + 0x180) = 1;
          }
        }
        local_58 = (longlong *)CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        param_2 = local_c8;
        iVar10 = local_58._4_4_;
        plVar5 = local_58;
      } while (local_70 != plVar1 || (plStack_60 != plVar2 || local_58._4_4_ != iVar9));
    }
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148895dd0 FUN_148895dd0 body=423 status=ok
// SIG undefined FUN_148895dd0(void)

void FUN_148895dd0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
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
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar5 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar8 * 0x20) == param_2) {
          if ((longlong *)(lVar5 + 8) != (longlong *)0x0 && lVar5 != 0) {
            *(undefined1 *)(*(longlong *)(lVar5 + 8) + 0x180) = 1;
            goto LAB_148895ee8;
          }
          break;
        }
        iVar8 = *(int *)(lVar5 + 0x18);
      } while (iVar8 != -1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar5 = param_1 + 0xb8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  uStack_38 = 0;
  uStack_48 = lVar5;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar8 = *(int *)(param_1 + 0xd0);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  uVar3 = local_60;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
  iVar4 = local_60._4_4_;
  local_78 = plVar1;
  if ((local_60._4_4_ != iVar8) || (local_60 = uVar3, uStack_48 != lVar5)) {
    do {
      local_60 = uVar3;
      lVar7 = (longlong)*(int *)(*local_78 + 0x40 + (longlong)iVar4 * 0x50);
      if (lVar7 != 0) {
        lVar2 = *(longlong *)(*local_78 + 0x38 + (longlong)iVar4 * 0x50);
        lVar6 = 0;
        do {
          if (*(uint *)(lVar2 + lVar6) == param_2) {
            *(undefined1 *)(lVar2 + 0x20 + lVar6) = 1;
            break;
          }
          lVar6 = lVar6 + 0x28;
        } while (lVar7 * 0x28 != lVar6);
      }
      local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
      FUN_1449c0562(&local_70);
      iVar4 = local_60._4_4_;
      uVar3 = local_60;
    } while (local_78 != plVar1 ||
             (CONCAT44(uStack_64,uStack_68) != lVar5 || local_60._4_4_ != iVar8));
  }
LAB_148895ee8:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148895f78 FUN_148895f78 body=154 status=ok
// SIG undefined FUN_148895f78(void)

undefined8 * FUN_148895f78(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x128);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14b1b50e0;
  _Dst = puVar1 + 2;
  memset(_Dst,0,0x118);
  FUN_141854e6e(_Dst);
  *param_1 = _Dst;
  param_1[1] = puVar1;
  DAT_14cb80960 = DAT_14cb80960 + 1;
  puVar1[0x14] = CONCAT44(DAT_14cb80960,*param_2);
  uVar2 = FUN_1464f0c42();
  FUN_1488960fc(_Dst,uVar2,0);
  return param_1;
}



// FUNCTION 148896018 FUN_148896018 body=120 status=ok
// SIG undefined FUN_148896018(void)

void FUN_148896018(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_1470e4c26();
  if (0 < *(int *)(param_1 + 0x30)) {
    uVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + uVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 8))();
        lVar3 = FUN_1464f0c42();
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          if (uVar4 == 0) {
            return;
          }
          FUN_1470e4ca4(param_1,uVar4 & 0xffffffff);
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 148896090 FUN_148896090 body=107 status=ok
// SIG undefined FUN_148896090(void)

longlong * FUN_148896090(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    uVar4 = (longlong)*(int *)(param_1 + 0x30) + 1;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + -0x10 + uVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
        lVar3 = FUN_1464ed396();
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          return plVar1;
        }
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  return (longlong *)0x0;
}



// FUNCTION 1488960fc FUN_1488960fc body=131 status=ok
// SIG undefined FUN_1488960fc(void)

longlong FUN_1488960fc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (lVar1 = FUN_1464ed396(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
    lVar1 = FUN_148896090(param_1);
    lVar2 = FUN_140c48046(param_1,param_2,param_3,0);
    if (lVar1 == 0 || lVar2 == 0) {
      return lVar2;
    }
    FUN_148896180(lVar1,lVar2);
    return lVar2;
  }
  return 0;
}



// FUNCTION 148896180 FUN_148896180 body=213 status=ok
// SIG undefined FUN_148896180(void)

void FUN_148896180(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14063f9b0(param_1,&local_30,0);
  iVar1 = *(int *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x34) < iVar1 + 1U) {
    FUN_1406f8fea((longlong *)(param_2 + 0x28),iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x28);
  lVar3 = (longlong)iVar1 * 0x20;
  *(longlong **)(lVar2 + lVar3) = param_1;
  *(undefined1 *)(lVar2 + 8 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0xc + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x14 + lVar3) = local_30;
  iVar1 = (int)param_1[6];
  *(uint *)(param_1 + 6) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar1 + 1U) {
    FUN_1406f8fea(param_1 + 5,iVar1);
  }
  lVar2 = param_1[5];
  lVar3 = (longlong)iVar1 * 0x20;
  *(longlong *)(lVar2 + lVar3) = param_2;
  *(undefined1 *)(lVar2 + 8 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0xc + lVar3) = local_30;
  *(undefined8 *)(lVar2 + 0x14 + lVar3) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014889624d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148896256 FUN_148896256 body=398 status=ok
// SIG undefined FUN_148896256(void)

longlong FUN_148896256(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  longlong local_a0 [2];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = FUN_148896090(param_1);
    lVar3 = FUN_140c48046(param_1,lVar1,param_2[2],0);
    lVar5 = 0;
    if (lVar3 != 0) {
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      FUN_1446e6d0e(local_90,lVar1);
      local_c8 = *(undefined8 *)(param_1 + 0x10);
      local_b0 = 1;
      local_c0 = CONCAT44(local_c0._4_4_,1);
      local_b8 = (longlong *)local_c8;
      FUN_1446df618(lVar1,&local_68,param_2,local_80);
      local_50 = *(undefined8 *)(lVar1 + 0x18);
      FUN_1400021e4(&local_50,local_a0);
      puVar4 = local_68;
      if ((int)uStack_60 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      local_b0 = 1;
      local_c0 = DAT_14c872be8;
      local_c8 = CONCAT44(local_c8._4_4_,1);
      local_b8 = local_a0;
      FUN_14115911a(lVar1,puVar4,lVar3,*(undefined8 *)(param_1 + 0x10));
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      if (lVar2 != 0) {
        FUN_148896180(lVar2,lVar3);
      }
      FUN_1448eac94(local_90);
      lVar5 = lVar3;
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1488963e6 FUN_1488963e6 body=110 status=ok
// SIG undefined FUN_1488963e6(void)

void FUN_1488963e6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_140bf8dc0();
  cVar1 = FUN_1448093f4(param_2,uVar2);
  if ((param_3 != 0) && (cVar1 != '\0')) {
    lVar3 = FUN_14589e8f4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000148896451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3,0);
      return;
    }
  }
  return;
}



// FUNCTION 148896472 FUN_148896472 body=336 status=ok
// SIG undefined FUN_148896472(void)

void FUN_148896472(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1470e4986();
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb809b0);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb809b8);
  FUN_144983130(lVar1 + 8,param_1 + 0xb8);
  FUN_140592d14(param_1 + 0xb8,&local_50);
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  FUN_140592d14(param_1 + 0x80,&local_60);
  puVar3 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar3 = local_60;
  }
  FUN_140002266(&local_40,L"%s -> %s",puVar3,puVar2);
  if ((longlong *)(param_2 + 8) == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_2 + 0x10) = (undefined4)local_38;
    *(undefined4 *)(param_2 + 0x14) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488965c4 FUN_1488965c4 body=47 status=ok
// SIG undefined FUN_1488965c4(void)

void FUN_1488965c4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar1 != param_3) {
    return;
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 148896610 FUN_148896610 body=1 status=ok
// SIG undefined FUN_148896610(void)

void FUN_148896610(void)

{
  return;
}



// FUNCTION 14889661a FUN_14889661a body=469 status=ok
// SIG undefined FUN_14889661a(void)

void FUN_14889661a(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  void **ppvVar5;
  void **ppvVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470e49a6();
  uVar3 = FUN_1486c7e5b();
  FUN_1401cfad2(uVar3,&local_50,*(undefined1 *)(param_1 + 0x50));
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb809c0);
  pvVar2 = local_50;
  ppvVar6 = (void **)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 8) {
    if (ppvVar6 != &local_50) {
      *(int *)(lVar4 + 0x48) = local_48;
      if (local_48 == 0 && *(int *)(lVar4 + 0x4c) == 0) {
        *(undefined4 *)(lVar4 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar6,local_48);
        if (local_48 != 0) {
          memcpy(*ppvVar6,pvVar2,(longlong)local_48 * 2);
        }
      }
    }
    goto LAB_1488967b5;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120))
  ;
  if (pcVar1 != (code *)0x0) {
    ppvVar5 = ppvVar6;
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      ppvVar5 = *(void ***)(lVar4 + 0x40);
    }
    (*pcVar1)(ppvVar5);
  }
  if (0x18 < *(ushort *)(lVar4 + 0x58)) {
    FUN_1400020a8(*ppvVar6);
  }
  pvVar2 = local_50;
  local_40 = (void *)0x0;
  local_38 = local_48;
  if ((longlong)local_48 == 0) {
    local_34 = 0;
    *(undefined2 *)(lVar4 + 0x58) = 0x10;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined4 *)(lVar4 + 0x48) = 0;
LAB_14889679d:
    *(undefined4 *)(lVar4 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_48,0);
    memcpy(local_40,pvVar2,(longlong)local_48 * 2);
    pvVar2 = local_40;
    lVar7 = (longlong)local_38;
    *(undefined2 *)(lVar4 + 0x58) = 0x10;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(int *)(lVar4 + 0x48) = local_38;
    if (lVar7 == 0) goto LAB_14889679d;
    FUN_1446dd670(ppvVar6,local_38,0);
    memcpy(*ppvVar6,pvVar2,lVar7 * 2);
  }
  *(undefined1 *)(lVar4 + 0x60) = 8;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
LAB_1488967b5:
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488967f0 FUN_1488967f0 body=19 status=ok
// SIG undefined FUN_1488967f0(void)

undefined1 FUN_1488967f0(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 0x68) == '\0') {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x180);
  }
  return uVar1;
}



// FUNCTION 148896804 FUN_148896804 body=32 status=ok
// SIG undefined FUN_148896804(void)

void FUN_148896804(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14122bd5e(*(undefined8 *)(param_1 + 0x48));
  FUN_14122bd00(param_1,uVar1);
  return;
}



// FUNCTION 148896832 FUN_148896832 body=405 status=ok
// SIG undefined FUN_148896832(void)

void FUN_148896832(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_1400020e8(param_2 + 8,L"Waiting On...",0xd);
    lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0x30);
    if (lVar7 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28);
      lVar9 = 0;
      do {
        if ((*(char *)(lVar2 + 8 + lVar9) == '\x02') &&
           (lVar5 = *(longlong *)(lVar2 + lVar9), lVar5 != 0)) {
          iVar1 = *(int *)(lVar5 + 0x18);
          if ((-1 < (longlong)iVar1) &&
             ((iVar1 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x78) &&
              (plVar3 = *(longlong **)
                         (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x70) + (longlong)iVar1 * 8)
              , plVar3 != (longlong *)0x0)))) {
            lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
            lVar6 = FUN_14063f846();
            if ((lVar6 != 0) &&
               (((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                 (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                  == lVar6 + 0x30)) && (cVar4 = FUN_14063f880(plVar3,param_1), cVar4 == '\0')))) {
              FUN_1400021e4(plVar3[9] + 0x10,&local_68);
              puVar8 = &DAT_149dfb77a;
              if (local_60 != 0) {
                puVar8 = local_68;
              }
              FUN_140002266(&local_58,L"\n%d - %s",*(undefined4 *)(plVar3[9] + 0x18),puVar8);
              iVar1 = local_50 + -1;
              if (local_50 == 0) {
                iVar1 = 0;
              }
              FUN_1400020e8(param_2 + 8,local_58,iVar1);
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
        lVar9 = lVar9 + 0x20;
      } while (lVar7 * 0x20 != lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488969c8 FUN_1488969c8 body=774 status=ok
// SIG undefined FUN_1488969c8(void)

void FUN_1488969c8(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88 [2];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined2 local_48;
  undefined1 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1470e4986();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb809f8) {
    FUN_144b3d300(&DAT_14cb809f8);
    if (DAT_14cb809f8 == -1) {
      FUN_1446f470e(&DAT_14cb809f0,L"Action",1);
      _Init_thread_footer(&DAT_14cb809f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80a04) {
    FUN_144b3d300(&DAT_14cb80a04);
    if (DAT_14cb80a04 == -1) {
      FUN_1446f470e(&DAT_14cb809fc,L"CinematicMode",1);
      _Init_thread_footer(&DAT_14cb80a04);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb80a10) {
    FUN_144b3d300(&DAT_14cb80a10);
    if (DAT_14cb80a10 == -1) {
      FUN_1446f470e(&DAT_14cb80a08,L"Reason",1);
      _Init_thread_footer(&DAT_14cb80a10);
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x80);
  uVar2 = FUN_1486c8069();
  FUN_1406f1d90(uVar2,local_88,uVar1);
  puVar3 = (undefined8 *)FUN_1447a1f4a(local_88);
  local_78 = (void *)0x0;
  local_70 = *(int *)(puVar3 + 1);
  lVar4 = (longlong)local_70;
  _Src = (void *)*puVar3;
  if (lVar4 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar4 * 2);
  }
  FUN_1470ed5e8(&local_68,&local_78);
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb809f0);
  FUN_1403719a4(lVar4 + 8,&local_68);
  FUN_144a2da94(&local_68);
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  local_a0 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = FUN_14477b664(*(undefined8 *)(param_1 + 0x90));
  local_98 = FUN_14477b664(uVar2);
  local_90 = *(undefined8 *)(param_1 + 0x98);
  FUN_148896d18(&local_68,&local_a0);
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb809fc);
  FUN_1403719a4(lVar4 + 8,&local_68);
  FUN_144a2da94(&local_68);
  local_60 = *(longlong *)(param_1 + 0xa4);
  if (*(longlong *)(param_1 + 0xa4) == 0) {
    local_60 = DAT_14cb809e8;
  }
  local_68 = 0;
  local_48 = 8;
  local_40 = 0x12;
  local_38 = 0x12;
  if ((DAT_14c9a9954 & 0x20) != 0) {
    local_38 = 0;
  }
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80a08);
  FUN_1403719a4(lVar4 + 8,&local_68);
  FUN_144a2da94(&local_68);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148896cd0 FUN_148896cd0 body=71 status=ok
// SIG undefined FUN_148896cd0(void)

undefined8 * FUN_148896cd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148896d18 FUN_148896d18 body=157 status=ok
// SIG undefined FUN_148896d18(void)

undefined8 * FUN_148896d18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  local_40 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_38 = FUN_14477b664(uVar1);
  local_30 = param_2[2];
  *(undefined2 *)(param_1 + 4) = 0x18;
  FUN_148896cd0(param_1 + 1,&local_40);
  *(undefined1 *)(param_1 + 5) = 0x1d;
  uVar2 = 0x1d;
  if ((DAT_14c9aa5b4 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148896db6 FUN_148896db6 body=123 status=ok
// SIG undefined FUN_148896db6(void)

void FUN_148896db6(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = FUN_1405f939e();
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x238))) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar5);
      if (lVar2 != 0) {
        lVar3 = FUN_1449f3324();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          FUN_1487c4d9a(lVar2);
        }
      }
      lVar5 = lVar5 + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar1 + 0x238));
  }
  return;
}



// FUNCTION 148896e32 FUN_148896e32 body=167 status=ok
// SIG undefined FUN_148896e32(void)

void FUN_148896e32(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x48);
  if ((*(char *)(lVar5 + 0xa0) == '\x01') && (*(char *)(lVar5 + 0x80) == '\0')) {
    puVar6 = &DAT_14cb809e8;
    if (*(longlong *)(lVar5 + 0xa4) != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa4);
    }
    FUN_14621c6a8(param_1,puVar6);
    lVar5 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x158);
      plVar4 = *(longlong **)(lVar5 + 0x160);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        FUN_14621c628(lVar3,puVar6);
      }
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
                    /* WARNING: Could not recover jumptable at 0x000148896ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x10))(plVar4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148896ee0 FUN_148896ee0 body=37 status=ok
// SIG undefined FUN_148896ee0(void)

void FUN_148896ee0(longlong param_1)

{
  FUN_1488a5aa8(*(longlong *)(param_1 + 0x40) + 0x148);
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 148896f0c FUN_148896f0c body=310 status=ok
// SIG undefined FUN_148896f0c(void)

void FUN_148896f0c(longlong param_1,longlong param_2)

{
  void *_Src;
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1470e4986();
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 0x88);
  lVar3 = (longlong)local_70;
  _Src = *(void **)(param_1 + 0x80);
  if (lVar3 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar3 * 2);
  }
  FUN_1470ed5e8(local_68,&local_78);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80a14);
  FUN_1403719a4(lVar3 + 8,local_68);
  FUN_144a2da94(local_68);
  FUN_144a787a6(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (0x14 < iVar2) {
    if (iVar1 - iVar2 != 0) {
      memmove((void *)(*(longlong *)(param_2 + 8) + 0x28),
              (void *)(*(longlong *)(param_2 + 8) + (ulonglong)(iVar2 - 0x14U) * 2 + 0x28),
              (longlong)(iVar1 - iVar2) * 2);
      iVar1 = *(int *)(param_2 + 0x10);
    }
    *(uint *)(param_2 + 0x10) = iVar1 - (iVar2 - 0x14U);
    FUN_1400020e8(param_2 + 8,&DAT_149e30fc2,3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148897052 FUN_148897052 body=306 status=ok
// SIG undefined FUN_148897052(void)

void FUN_148897052(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1470e4986();
  FUN_140592d14(param_1 + 0x80,&local_50);
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  FUN_1400021e4(&DAT_14cb80a1c,&local_60);
  puVar3 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar3 = local_60;
  }
  FUN_140002266(&local_40,L"%s: %s",puVar3,puVar2);
  if ((longlong *)(param_2 + 8) == &local_40) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_40;
    local_40 = 0;
    *(undefined4 *)(param_2 + 0x10) = (undefined4)local_38;
    *(undefined4 *)(param_2 + 0x14) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80a1c);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148897186 FUN_148897186 body=396 status=ok
// SIG undefined FUN_148897186(void)

void FUN_148897186(longlong param_1,longlong param_2)

{
  float *pfVar1;
  code *pcVar2;
  longlong lVar3;
  float *pfVar4;
  undefined2 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\0') {
    fVar7 = *(float *)(param_1 + 0x70);
    fVar6 = (float)FUN_141236616(param_1);
    fVar7 = fVar7 - fVar6;
    fVar6 = 0.0;
    if (0.0 <= fVar7) {
      fVar6 = fVar7;
    }
    FUN_1400021e4(&DAT_14cb80a1c,&local_60);
    puVar5 = local_60;
    if (local_58 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_50,L"%s: %0.03f",puVar5,(double)fVar6);
    if ((longlong *)(param_2 + 8) == &local_50) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_50;
      local_50 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_48;
      *(undefined4 *)(param_2 + 0x14) = local_48._4_4_;
      local_48 = 0;
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80a1c);
    pfVar1 = (float *)(lVar3 + 0x40);
    if (*(byte *)(lVar3 + 0x60) == 3) {
      *pfVar1 = fVar6;
    }
    else {
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar3 + 0x60) * 0x120));
      if (pcVar2 != (code *)0x0) {
        pfVar4 = pfVar1;
        if (0x18 < *(ushort *)(lVar3 + 0x58)) {
          pfVar4 = *(float **)(lVar3 + 0x40);
        }
        (*pcVar2)(pfVar4);
      }
      if (0x18 < *(ushort *)(lVar3 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar3 + 0x58) = 4;
      *(float *)(lVar3 + 0x40) = fVar6;
      *(undefined1 *)(lVar3 + 0x60) = 3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889731a FUN_14889731a body=227 status=ok
// SIG undefined FUN_14889731a(void)

void FUN_14889731a(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1470e4986();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400021e4(param_1 + 0x80,&local_40);
    puVar1 = local_40;
    if (local_38 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_30,L"Conv: %s",puVar1);
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
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_28;
      *(undefined4 *)(param_2 + 0x14) = local_28._4_4_;
      local_28 = 0;
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488973fe FUN_1488973fe body=344 status=ok
// SIG undefined FUN_1488973fe(void)

void FUN_1488973fe(longlong param_1,longlong param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1470e4986();
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80a2c);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 0xc0);
  lVar2 = (longlong)local_70;
  _Src = *(void **)(param_1 + 0xb8);
  if (lVar2 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar2 * 2);
  }
  FUN_1470ed5e8(local_68,&local_78);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80a24);
  FUN_1403719a4(lVar2 + 8,local_68);
  FUN_144a2da94(local_68);
  FUN_144a787a6(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (0x14 < iVar3) {
    if (iVar1 - iVar3 != 0) {
      memmove((void *)(*(longlong *)(param_2 + 8) + 0x28),
              (void *)(*(longlong *)(param_2 + 8) + (ulonglong)(iVar3 - 0x14U) * 2 + 0x28),
              (longlong)(iVar1 - iVar3) * 2);
      iVar1 = *(int *)(param_2 + 0x10);
    }
    *(uint *)(param_2 + 0x10) = iVar1 - (iVar3 - 0x14U);
    FUN_1400020e8(param_2 + 8,&DAT_149e30fc2,3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889770a FUN_14889770a body=294 status=ok
// SIG undefined FUN_14889770a(void)

void FUN_14889770a(longlong param_1,longlong param_2)

{
  float *pfVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\0') {
    fVar7 = *(float *)(param_1 + 0x70);
    fVar6 = (float)FUN_141236616(param_1);
    fVar7 = fVar7 - fVar6;
    fVar6 = 0.0;
    if (0.0 <= fVar7) {
      fVar6 = fVar7;
    }
    FUN_140002266(&local_50,L"\n%0.03f",(double)fVar6);
    iVar3 = local_48 + -1;
    if (local_48 == 0) {
      iVar3 = 0;
    }
    FUN_1400020e8(param_2 + 8,local_50,iVar3);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80a2c);
    pfVar1 = (float *)(lVar4 + 0x40);
    if (*(byte *)(lVar4 + 0x60) == 3) {
      *pfVar1 = fVar6;
    }
    else {
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
      if (pcVar2 != (code *)0x0) {
        pfVar5 = pfVar1;
        if (0x18 < *(ushort *)(lVar4 + 0x58)) {
          pfVar5 = *(float **)(lVar4 + 0x40);
        }
        (*pcVar2)(pfVar5);
      }
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar4 + 0x58) = 4;
      *(float *)(lVar4 + 0x40) = fVar6;
      *(undefined1 *)(lVar4 + 0x60) = 3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148897832 FUN_148897832 body=167 status=ok
// SIG undefined FUN_148897832(void)

undefined4 * FUN_148897832(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  
  *param_1 = *param_2;
  plVar1 = *(longlong **)(param_2 + 2);
  plVar2 = *(longlong **)(param_1 + 2);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 2) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[4] = param_2[4];
  param_1[6] = param_2[6];
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0xb) == '\x01') {
      uVar3 = param_2[8];
      uVar4 = param_2[9];
      uVar5 = param_2[10];
      param_1[7] = param_2[7];
      param_1[8] = uVar3;
      param_1[9] = uVar4;
      param_1[10] = uVar5;
      uVar9 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xb) != '\x01') goto LAB_14889789f;
      uVar9 = 0;
    }
    *(undefined1 *)(param_1 + 0xb) = uVar9;
  }
LAB_14889789f:
  FUN_1411f346e(param_1 + 0xc,param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x12);
  uVar7 = *(undefined8 *)(param_2 + 0x14);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  *(undefined8 *)(param_1 + 0x12) = uVar6;
  *(undefined8 *)(param_1 + 0x14) = uVar7;
  return param_1;
}



// FUNCTION 1488978da FUN_1488978da body=60 status=ok
// SIG undefined FUN_1488978da(void)

void FUN_1488978da(longlong param_1)

{
  float fVar1;
  
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    fVar1 = (float)FUN_141236616(param_1);
    if (fVar1 < *(float *)(param_1 + 0x70)) {
      return;
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 148897916 FUN_148897916 body=75 status=ok
// SIG undefined FUN_148897916(void)

void FUN_148897916(undefined4 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1405f939e();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1400f6f32(lVar1);
    if (plVar2 != (longlong *)0x0) {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))(plVar2);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148897957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x28))(plVar2,param_1,*(code **)(*plVar2 + 0x28));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14889797a FUN_14889797a body=302 status=ok
// SIG undefined FUN_14889797a(void)

void FUN_14889797a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1470e4986();
  if (*(longlong *)(param_1 + 0x88) != 0) {
    local_60 = *(longlong *)(param_1 + 0x90);
    if (local_60 == 0) {
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      FUN_1400021e4(&local_60,&local_58);
    }
    if ((longlong *)(param_2 + 8) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_58;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)uStack_50;
      *(undefined4 *)(param_2 + 0x14) = uStack_50._4_4_;
    }
    local_58 = *(longlong *)(param_1 + 0x90);
    if (local_58 == 0) {
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      FUN_1400021e4(&local_58,&local_78);
    }
    FUN_1470ed5e8(&local_58,&local_78);
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80a34);
    FUN_1403719a4(lVar1 + 8,&local_58);
    FUN_144a2da94(&local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148897aaa FUN_148897aaa body=325 status=ok
// SIG undefined FUN_148897aaa(void)

void FUN_148897aaa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Src;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar3 + 0x88) != 0) {
    lVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x40) + 0x48);
    if (lVar6 != 0) {
      lVar4 = *(longlong *)(lVar6 + 0x148);
      plVar5 = *(longlong **)(lVar6 + 0x150);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        local_40 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x168);
        local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x160);
        local_70 = *(undefined8 *)(lVar3 + 0x80);
        local_68 = *(undefined4 *)(lVar3 + 0x88);
        uStack_64 = *(undefined4 *)(lVar3 + 0x8c);
        uStack_60 = *(undefined4 *)(lVar3 + 0x90);
        uStack_5c = *(undefined4 *)(lVar3 + 0x94);
        local_58 = (void *)0x0;
        local_50 = *(int *)(lVar3 + 0xa0);
        lVar6 = (longlong)local_50;
        _Src = *(void **)(lVar3 + 0x98);
        if (lVar6 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,_Src,lVar6 * 2);
        }
        FUN_148895944(lVar4,&local_70,&local_48);
      }
      if (plVar5 != (longlong *)0x0) {
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
  }
  FUN_14097c15a(param_1);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148897bf6 FUN_148897bf6 body=148 status=ok
// SIG undefined FUN_148897bf6(void)

void FUN_148897bf6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1470e4986();
  local_70 = *(undefined8 *)(param_1 + 0x80);
  FUN_145715fae(local_68);
  FUN_1470edbe0(local_58,local_68);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80a3c);
  FUN_1403719a4(lVar1 + 8,local_58);
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148897c8c FUN_148897c8c body=1084 status=ok
// SIG undefined FUN_148897c8c(void)

void FUN_148897c8c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_130;
  uint local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8 [8];
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a1;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70;
  longlong *local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = FUN_1405f939e();
  if (lVar8 == 0) goto LAB_148897d88;
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar10 = *(longlong *)(lVar4 + 0x88);
  if (lVar10 == 0) {
    uVar9 = FUN_1407ee946();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(lVar4 + 0x88) = lVar10;
  }
  plVar2 = (longlong *)(lVar4 + 0x80);
  if (*(longlong *)(lVar4 + 0x90) == 0) {
    if ((lVar10 == 0) || (*plVar2 == 0)) goto LAB_148897d88;
    plVar6 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
      *(undefined8 *)(lVar4 + 0x90) = 0;
      goto LAB_148897d88;
    }
    uVar9 = (**(code **)(*plVar6 + 0x110))(plVar6);
    lVar10 = FUN_144aff482(uVar9,plVar2);
    *(longlong *)(lVar4 + 0x90) = lVar10;
    if (lVar10 == 0) goto LAB_148897d88;
  }
  cVar7 = FUN_144a8e0e6(lVar4 + 0xa8);
  if (cVar7 == '\0') {
    local_a1 = 2;
    local_b0 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_70);
    local_a0[0] = 0;
    local_78 = 0;
    FUN_144a7bf34(local_a0,&local_70,&local_b0,&local_a1);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    FUN_1447c3578(lVar4 + 0xa0,&local_70,local_a0);
    lVar10 = FUN_14030a32e(&local_70);
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar12 = &local_70;
      if (0x18 < local_58) {
        ppppuVar12 = (undefined8 ****)local_70;
      }
      (*pcVar5)(ppppuVar12);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70);
    }
    FUN_144a5ac3a(local_a0);
    if (lVar10 != 0) {
      lVar11 = *(longlong *)(lVar10 + 0x1c8);
      if (lVar11 == 0) {
        local_b8 = DAT_14c8464f0;
        local_c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_c8 = *(undefined8 *)(lVar11 + 0x260);
        uStack_c0 = *(undefined8 *)(lVar11 + 0x268);
        local_b8 = *(undefined8 *)(lVar11 + 0x270);
      }
      uVar3 = *(undefined4 *)(lVar4 + 0x98);
      lVar11 = *(longlong *)(lVar4 + 0x88);
      if (lVar11 == 0) {
        uVar9 = FUN_1407ee946();
        lVar11 = FUN_14477b664(uVar9);
        *(longlong *)(lVar4 + 0x88) = lVar11;
      }
      if (((*(longlong *)(lVar4 + 0x90) == 0) && (lVar11 != 0)) && (*plVar2 != 0)) {
        plVar6 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar6 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
          uVar9 = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0x110))(plVar6);
          uVar9 = FUN_144aff482(uVar9,plVar2);
        }
        *(undefined8 *)(lVar4 + 0x90) = uVar9;
      }
      FUN_144a79b68(local_e0);
      local_d8 = 0x7012;
      local_d0 = 0;
      local_100 = 0;
      local_108 = 0;
      local_110 = &local_c8;
      local_128 = local_128 & 0xffffff00;
      local_130 = 0;
      local_138 = 0;
      local_120 = CONCAT44(local_120._4_4_,0x3f800000);
      local_118 = lVar10;
      FUN_141884caa(lVar8,local_e0,uVar3,0);
      goto LAB_148897d88;
    }
  }
  uVar3 = *(undefined4 *)(lVar4 + 0x98);
  lVar10 = *(longlong *)(lVar4 + 0x88);
  if (lVar10 == 0) {
    uVar9 = FUN_1407ee946();
    lVar10 = FUN_14477b664(uVar9);
    *(longlong *)(lVar4 + 0x88) = lVar10;
  }
  if (((*(longlong *)(lVar4 + 0x90) == 0) && (lVar10 != 0)) && (*plVar2 != 0)) {
    plVar6 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar6 + 0x110))(plVar6);
      uVar9 = FUN_144aff482(uVar9,plVar2);
    }
    *(undefined8 *)(lVar4 + 0x90) = uVar9;
  }
  FUN_144a79b68(local_f8);
  local_f0 = 0x7012;
  local_e8 = 0;
  local_120 = 0;
  local_130 = 0;
  local_138 = 0;
  local_128 = 0x3f800000;
  FUN_140cab292(lVar8,local_f8,uVar3,0);
LAB_148897d88:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488980e4 FUN_1488980e4 body=182 status=ok
// SIG undefined FUN_1488980e4(void)

void FUN_1488980e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470e4986();
  FUN_140592d14(param_1 + 0x80,&local_30);
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
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80a44);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889819c FUN_14889819c body=94 status=ok
// SIG undefined FUN_14889819c(void)

void FUN_14889819c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb80a50;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = DAT_14cb80a58;
  return;
}



// FUNCTION 1488981fa FUN_1488981fa body=483 status=ok
// SIG undefined FUN_1488981fa(void)

void FUN_1488981fa(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 ***pppuVar10;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined1 local_a1;
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 **local_70;
  longlong *local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14889661a();
  uVar9 = 8;
  uVar8 = 0;
  pwVar7 = L" (false)";
  if (*(char *)(param_1 + 0x50) == '\x03') {
    lVar5 = *(longlong *)(param_1 + 0x48);
    local_a1 = 2;
    local_b0 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,&local_70);
    local_a0[0] = 0;
    local_78 = 0;
    FUN_144a7bf34(local_a0,&local_70,&local_b0,&local_a1);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    FUN_1447c3578(lVar5 + 0x80,&local_70,local_a0);
    cVar4 = FUN_144a7fca4(&local_70);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppuVar10 = &local_70;
      if (0x18 < local_58) {
        pppuVar10 = (undefined8 ***)local_70;
      }
      (*pcVar3)(pppuVar10);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70);
    }
    FUN_144a5ac3a(local_a0);
    uVar8 = 0;
    if (cVar4 != '\0') {
      uVar9 = 7;
      uVar8 = 1;
      pwVar7 = L" (true)";
    }
  }
  FUN_1400020e8(param_2 + 8,pwVar7,uVar9);
  lVar5 = FUN_1470e53c2(param_2,&DAT_14cb80a44);
  puVar2 = (undefined8 *)(lVar5 + 0x40);
  if (*(byte *)(lVar5 + 0x60) == 1) {
    *(undefined4 *)puVar2 = uVar8;
  }
  else {
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar5 + 0x60) * 0x120));
    if (pcVar3 != (code *)0x0) {
      puVar6 = puVar2;
      if (0x18 < *(ushort *)(lVar5 + 0x58)) {
        puVar6 = *(undefined8 **)(lVar5 + 0x40);
      }
      (*pcVar3)(puVar6);
    }
    if (0x18 < *(ushort *)(lVar5 + 0x58)) {
      FUN_1400020a8(*puVar2);
    }
    *(undefined2 *)(lVar5 + 0x58) = 4;
    *(undefined4 *)(lVar5 + 0x40) = uVar8;
    *(undefined1 *)(lVar5 + 0x60) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488983de FUN_1488983de body=301 status=ok
// SIG undefined FUN_1488983de(void)

void FUN_1488983de(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_89;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58;
  longlong *local_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_89 = 2;
  local_98 = FUN_144a7be76();
  FUN_144a7bec8(param_1,&local_58);
  local_88[0] = 0;
  local_60 = 0;
  FUN_144a7bf34(local_88,&local_58,&local_98,&local_89);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0x80,&local_58,local_88);
  bVar4 = FUN_144a7fca4(&local_58);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar5 = &local_58;
    if (0x18 < local_40) {
      pppuVar5 = (undefined8 ***)local_58;
    }
    (*pcVar3)(pppuVar5);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58);
  }
  FUN_144a5ac3a(local_88);
  FUN_14122bd00(param_1,bVar4 ^ 1);
  FUN_14097c15a(param_1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148898512 FUN_148898512 body=268 status=ok
// SIG undefined FUN_148898512(void)

void FUN_148898512(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470e4986();
  if (*(longlong *)(param_1 + 0x84) == 0) {
    FUN_140056680(&local_28,L"Mission");
  }
  else {
    FUN_1400021e4(param_1 + 0x84,&local_28);
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_14020fad6(&local_28,&DAT_14b40c392);
  }
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"CONV: %s",puVar1);
  if ((longlong *)(param_2 + 8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_30;
    *(undefined4 *)(param_2 + 0x14) = local_2c;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148898630 FUN_148898630 body=377 status=ok
// SIG undefined FUN_148898630(void)

void FUN_148898630(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1488987aa();
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80a60);
  FUN_144983130(lVar2 + 8,param_1 + 0x140);
  FUN_14044066a(&local_78,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_70);
  FUN_144a2da94(&local_78);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0x140,&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    FUN_140592d14(param_1 + 0x80,&local_98);
    puVar4 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar4 = local_98;
    }
    FUN_140002266(&local_78,L"%s -> %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
      *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
      local_70 = 0;
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488987aa FUN_1488987aa body=127 status=ok
// SIG undefined FUN_1488987aa(void)

void FUN_1488987aa(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_1470e4986();
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80a68);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80a70);
  FUN_144983130(lVar1 + 8,param_1 + 200);
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80a78);
  FUN_144983130(lVar1 + 8,param_1 + 0x100);
  return;
}



// FUNCTION 14889882a FUN_14889882a body=34 status=ok
// SIG undefined FUN_14889882a(void)

undefined8 FUN_14889882a(longlong param_1,undefined8 param_2)

{
  FUN_14034cca6(param_2,*(longlong *)(param_1 + 0x48) + 0x140);
  return param_2;
}



// FUNCTION 14889884c FUN_14889884c body=274 status=ok
// SIG undefined FUN_14889884c(void)

void FUN_14889884c(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1488987aa();
  FUN_14044066a(&local_68,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_60);
  FUN_144a2da94(&local_68);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0x80,&local_78);
    puVar2 = local_78;
    if (local_70 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_68,&DAT_149e0625e,puVar2);
    if ((longlong *)(param_2 + 8) == &local_68) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_60;
      *(undefined4 *)(param_2 + 0x14) = local_60._4_4_;
      local_60 = 0;
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148898960 FUN_148898960 body=82 status=ok
// SIG undefined FUN_148898960(void)

undefined8 FUN_148898960(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_145d4f736();
  local_18 = *(undefined8 *)(lVar1 + 0x38);
  FUN_140440628(param_2,&local_18,0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488989b4 FUN_1488989b4 body=39 status=ok
// SIG undefined FUN_1488989b4(void)

undefined8 * FUN_1488989b4(undefined8 *param_1)

{
  FUN_14601a14c();
  *param_1 = &PTR_FUN_14b40c4a0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  return param_1;
}



// FUNCTION 1488989e2 FUN_1488989e2 body=274 status=ok
// SIG undefined FUN_1488989e2(void)

void FUN_1488989e2(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1488987aa();
  FUN_14044066a(&local_68,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_60);
  FUN_144a2da94(&local_68);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0x80,&local_78);
    puVar2 = local_78;
    if (local_70 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_68,&DAT_149e0625e,puVar2);
    if ((longlong *)(param_2 + 8) == &local_68) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_60;
      *(undefined4 *)(param_2 + 0x14) = local_60._4_4_;
      local_60 = 0;
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148898af6 FUN_148898af6 body=82 status=ok
// SIG undefined FUN_148898af6(void)

undefined8 FUN_148898af6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_145d4f736();
  local_18 = *(undefined8 *)(lVar1 + 0x20);
  FUN_140440628(param_2,&local_18,0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148898b50 FUN_148898b50 body=197 status=ok
// SIG undefined FUN_148898b50(void)

void FUN_148898b50(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  code *pcVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) == '\x02') {
    fVar6 = *(float *)(param_1 + 0x140);
    if (0.0 < fVar6) {
      fVar5 = (float)FUN_141236616(param_1);
      fVar6 = fVar6 - fVar5;
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
      lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80a70);
      pfVar1 = (float *)(lVar3 + 0x40);
      if (*(byte *)(lVar3 + 0x60) == 3) {
        *pfVar1 = fVar5;
      }
      else {
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar3 + 0x60) * 0x120));
        if (pcVar2 != (code *)0x0) {
          pfVar4 = pfVar1;
          if (0x18 < *(ushort *)(lVar3 + 0x58)) {
            pfVar4 = *(float **)(lVar3 + 0x40);
          }
          (*pcVar2)(pfVar4);
        }
        if (0x18 < *(ushort *)(lVar3 + 0x58)) {
          FUN_1400020a8(*(undefined8 *)pfVar1);
        }
        *(undefined2 *)(lVar3 + 0x58) = 4;
        *(float *)(lVar3 + 0x40) = fVar5;
        *(undefined1 *)(lVar3 + 0x60) = 3;
      }
    }
  }
  return;
}



// FUNCTION 148898c16 FUN_148898c16 body=68 status=ok
// SIG undefined FUN_148898c16(void)

undefined8 FUN_148898c16(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x78);
    if (cVar1 != '\0') {
      lVar2 = FUN_144b397c8(*(undefined8 *)(param_1 + 0x80));
      uVar3 = FUN_14479d2ce(lVar2 + 0x158);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148898c5a FUN_148898c5a body=862 status=ok
// SIG undefined FUN_148898c5a(void)

void FUN_148898c5a(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *_Dst;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  undefined1 auStack_138 [40];
  undefined1 local_110 [4];
  undefined8 local_10c;
  undefined1 local_104 [4];
  undefined8 local_100;
  longlong local_f8;
  undefined1 local_e9;
  undefined1 local_e8 [72];
  undefined1 local_a0 [40];
  undefined4 local_78;
  undefined8 ***local_70;
  longlong *local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_1[0x10] == 0) goto LAB_148898c9b;
  cVar4 = FUN_144729dda(param_1 + 0xf);
  if (cVar4 == '\0') goto LAB_148898c9b;
  lVar5 = FUN_148898c16(param_1);
  if (lVar5 == 0) goto LAB_148898c9b;
  lVar2 = param_1[9];
  uVar6 = FUN_144b397c8(param_1[0x10]);
  if (param_2 == '\0') {
    if (*(char *)(lVar2 + 0xc0) != '\0') goto LAB_148898ec4;
  }
  else {
    (**(code **)(*param_1 + 0xb8))(param_1,local_e8);
    local_e9 = 2;
    local_f8 = lVar5;
    FUN_144a7bec8(param_1,&local_70);
    local_a0[0] = 0;
    local_78 = 0;
    FUN_144a7bf34(local_a0,&local_70,&local_f8,&local_e9);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    FUN_1447c3578(local_e8,&local_70,local_a0);
    _Dst = param_1 + 0x11;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
    if (pcVar3 != (code *)0x0) {
      plVar9 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x14)) {
        plVar9 = (longlong *)*_Dst;
      }
      (*pcVar3)(plVar9);
    }
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      FUN_1400020a8(*_Dst);
    }
    *(ushort *)(param_1 + 0x14) = local_58;
    if (local_58 < 0x19) {
      uVar8 = (ulonglong)((uint)local_50 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar8) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar8) == (code *)0x0) {
          memcpy(_Dst,&local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar8))(_Dst,&local_70);
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar8))(_Dst,&local_70);
      }
    }
    else {
      *_Dst = (longlong)local_70;
      local_70 = (undefined8 ****)0x0;
      local_58 = 0;
    }
    *(byte *)(param_1 + 0x15) = local_50;
    local_50 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppuVar10 = &local_70;
      if (0x18 < local_58) {
        ppppuVar10 = (undefined8 ****)local_70;
      }
      (*DAT_14c9a85d0)(ppppuVar10);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70);
    }
    FUN_144a5ac3a(local_a0);
    FUN_144a2da94(local_e8);
    if (*(char *)(lVar2 + 0xc0) != '\0') {
      local_104[0] = 0;
      local_100 = 0;
      FUN_14070d2c0(local_e8,_Dst,local_104,lVar5);
      FUN_14186f05e(param_1 + 0x1f,local_e8);
LAB_148898ec4:
      lVar7 = FUN_144a782da(uVar6,&DAT_14cb72618);
      if (lVar7 != 0) {
        FUN_1406ebff6(lVar7,2,param_1 + 0x1f);
      }
      if (param_2 == '\0') goto LAB_148898f24;
    }
    local_110[0] = 2;
    local_10c = 0;
    FUN_14070d2c0(local_e8,param_1 + 0x11,local_110,lVar5);
    FUN_14186f05e(param_1 + 0x16,local_e8);
  }
LAB_148898f24:
  lVar5 = FUN_144a782da(uVar6,lVar2 + 0xb8);
  if (lVar5 != 0) {
    FUN_1406ebff6(lVar5,2,param_1 + 0x16);
  }
LAB_148898c9b:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148898fba FUN_148898fba body=379 status=ok
// SIG undefined FUN_148898fba(void)

void FUN_148898fba(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_d8 [40];
  float local_b0;
  char local_ac;
  undefined1 local_a8 [112];
  char local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(char *)(param_1 + 0x68) == '\0') &&
      (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) != '\x01')) &&
     (*(longlong *)(param_1 + 0x80) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x78);
    if (cVar1 != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x48);
      lVar2 = FUN_144b397c8(*(undefined8 *)(param_1 + 0x80));
      lVar3 = FUN_14479d2ce(lVar2 + 0x158);
      if (lVar3 != 0) {
        FUN_148898c5a(param_1,*(undefined1 *)(lVar4 + 0x138));
        cVar1 = FUN_1456ca660(param_1 + 0xb0);
        if (cVar1 != '\0') {
          fVar5 = (float)FUN_141236616(param_1);
          if (*(float *)(param_1 + 0x140) <= fVar5) {
            FUN_14122bd00(param_1,0);
            if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x138) == '\0') goto LAB_148898fee;
          }
          else {
            lVar4 = FUN_144a782da(lVar2,lVar4 + 0xb8);
            if (lVar4 != 0) {
              FUN_14186d5a6(lVar4,local_a8,param_1 + 0xb0);
              if (local_38 == '\x01') {
                FUN_14056d7ae(lVar4,&local_b0);
                if ((local_ac == '\x01') && (local_b0 <= *(float *)(param_1 + 0x144) * 0.017453292))
                {
                  FUN_14122bd00(param_1,0);
                  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x138) == '\0') {
                    FUN_14097c15a(param_1);
                  }
                }
              }
            }
          }
          if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
      }
    }
  }
LAB_148898fee:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8);
}



// FUNCTION 148899156 FUN_148899156 body=231 status=ok
// SIG undefined FUN_148899156(void)

void FUN_148899156(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    cVar1 = FUN_144729dda((undefined8 *)(param_1 + 0x78));
    if (cVar1 != '\0') {
      uVar2 = FUN_144b397c8(*(undefined8 *)(param_1 + 0x80));
      lVar3 = FUN_144a782da(uVar2,lVar4 + 0xb8);
      if (lVar3 != 0) {
        FUN_140c82872(lVar3,2);
      }
      if (*(char *)(lVar4 + 0xc0) == '\x01') {
        uVar2 = FUN_144b397c8(*(undefined8 *)(param_1 + 0x80));
        lVar4 = FUN_144a782da(uVar2,&DAT_14cb72618);
        if (lVar4 != 0) {
          FUN_140c82872(lVar4,2);
        }
      }
      local_38 = 0;
      uStack_30 = 0;
      cVar1 = FUN_14493c216(&local_38,0);
      if (cVar1 == '\0') {
        uStack_30 = 0;
      }
      *(undefined8 *)(param_1 + 0x78) = local_38;
      *(undefined8 *)(param_1 + 0x80) = uStack_30;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889925e FUN_14889925e body=367 status=ok
// SIG undefined FUN_14889925e(void)

void FUN_14889925e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1470e4986();
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80a80);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80a88);
  FUN_144983130(lVar2 + 8,param_1 + 0xb8);
  cVar1 = FUN_144a8e0e6(param_1 + 0x88);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0xb8,&local_50);
    puVar3 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar3 = local_50;
    }
    FUN_140592d14(param_1 + 0x80,&local_60);
    puVar4 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar4 = local_60;
    }
    FUN_140002266(&local_40,L"%s Attacking %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_38;
      *(undefined4 *)(param_2 + 0x14) = local_38._4_4_;
      local_38 = 0;
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488993ce FUN_1488993ce body=482 status=ok
// SIG undefined FUN_1488993ce(void)

void FUN_1488993ce(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  void **ppvVar5;
  void **ppvVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) != '\x02') goto LAB_148899585;
  uVar3 = FUN_147f22960();
  FUN_1401cfad2(uVar3,&local_50,*(undefined1 *)(param_1 + 0x90));
  lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80a90);
  pvVar2 = local_50;
  ppvVar6 = (void **)(lVar4 + 0x40);
  if (*(byte *)(lVar4 + 0x60) == 8) {
    if (ppvVar6 != &local_50) {
      *(int *)(lVar4 + 0x48) = local_48;
      if (local_48 == 0 && *(int *)(lVar4 + 0x4c) == 0) {
        *(undefined4 *)(lVar4 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(ppvVar6,local_48);
        if (local_48 != 0) {
          memcpy(*ppvVar6,pvVar2,(longlong)local_48 * 2);
        }
      }
    }
  }
  else {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
    if (pcVar1 != (code *)0x0) {
      ppvVar5 = ppvVar6;
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        ppvVar5 = *(void ***)(lVar4 + 0x40);
      }
      (*pcVar1)(ppvVar5);
    }
    if (0x18 < *(ushort *)(lVar4 + 0x58)) {
      FUN_1400020a8(*ppvVar6);
    }
    pvVar2 = local_50;
    local_40 = (void *)0x0;
    local_38 = local_48;
    if ((longlong)local_48 == 0) {
      local_34 = 0;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined4 *)(lVar4 + 0x48) = 0;
LAB_14889955e:
      *(undefined4 *)(lVar4 + 0x4c) = 0;
    }
    else {
      FUN_1446dd670(&local_40,local_48,0);
      memcpy(local_40,pvVar2,(longlong)local_48 * 2);
      pvVar2 = local_40;
      lVar7 = (longlong)local_38;
      *(undefined2 *)(lVar4 + 0x58) = 0x10;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(int *)(lVar4 + 0x48) = local_38;
      if (lVar7 == 0) goto LAB_14889955e;
      FUN_1446dd670(ppvVar6,local_38,0);
      memcpy(*ppvVar6,pvVar2,lVar7 * 2);
    }
    *(undefined1 *)(lVar4 + 0x60) = 8;
    if (local_40 != (void *)0x0) {
      FUN_1400020a8(local_40);
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_148899585:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488995b2 FUN_1488995b2 body=450 status=ok
// SIG undefined FUN_1488995b2(void)

longlong * FUN_1488995b2(longlong *param_1,undefined8 param_2)

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
    *puVar4 = &PTR_LAB_14ac8c8d0;
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
    *puVar4 = &PTR_FUN_14b40d400;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_148899778;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14ac8c8d0;
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
    *puVar4 = &PTR_FUN_14b40d400;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_148899778;
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



// FUNCTION 148899778 FUN_148899778 body=299 status=ok
// SIG undefined FUN_148899778(void)

void FUN_148899778(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 auStack_60 [3];
  undefined2 local_48;
  undefined1 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar2 = (byte)*(undefined4 *)(param_1 + 0x90);
  if (bVar2 < param_4) {
    bVar2 = param_4;
  }
  *(byte *)(param_1 + 0x90) = bVar2;
  if (param_2 == 0 || param_4 != 0) {
    if (param_2 == 0) goto LAB_148899881;
  }
  else {
    lVar3 = FUN_14479d2ce(param_1 + 0x78);
    if (lVar3 != 0) {
      uVar4 = FUN_1402b804a(param_2);
      local_68 = 0;
      auStack_60[0] = 0;
      local_48 = 8;
      FUN_14485c47a(auStack_60,lVar3);
      local_40 = 7;
      local_38 = 7;
      if ((DAT_14c9a8cf4 & 0x20) != 0) {
        local_38 = 0;
      }
      FUN_1402b8062(uVar4,&DAT_14cb80a98,&local_68);
      FUN_144a2da94(&local_68);
    }
    bVar2 = *(byte *)(param_1 + 0x90);
  }
  if ((3 < bVar2) && (*(int *)(param_2 + 0x88) != 0)) {
    puVar1 = *(undefined8 **)(param_2 + 0x80);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_2 + 0x80),0,0,0x10);
      *(undefined4 *)(param_2 + 0x88) = 0;
    }
  }
LAB_148899881:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488998ce FUN_1488998ce body=106 status=ok
// SIG undefined FUN_1488998ce(void)

void FUN_1488998ce(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x90) < 4) && (*(longlong *)(param_1 + 0x88) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x80);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x88) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x20))();
      if (lVar2 != 0) {
        FUN_140356f00(lVar2,2,3);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



// FUNCTION 148899948 FUN_148899948 body=230 status=ok
// SIG undefined FUN_148899948(void)

void FUN_148899948(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = FUN_1405f939e();
  plVar4 = (longlong *)FUN_145838d74(uVar3);
  if (plVar4 != (longlong *)0x0) {
    local_28 = (longlong *)
               CONCAT44(local_28._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x168));
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x160);
    lVar5 = (**(code **)(*plVar4 + 8))(plVar4,&local_30);
    if (lVar5 != 0) {
      FUN_140d853aa(lVar5,&local_30,lVar2 + 0x80,0);
      if ((undefined8 *)(param_1 + 0x70) != &local_30) {
        *(undefined8 *)(param_1 + 0x70) = local_30;
        local_30 = 0;
        plVar4 = *(longlong **)(param_1 + 0x78);
        *(longlong **)(param_1 + 0x78) = local_28;
        local_28 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))();
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148899a30 FUN_148899a30 body=87 status=ok
// SIG undefined FUN_148899a30(void)

void FUN_148899a30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_143df53bc();
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
                    /* WARNING: Could not recover jumptable at 0x000148899a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148899a88 FUN_148899a88 body=138 status=ok
// SIG undefined FUN_148899a88(void)

void FUN_148899a88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  if (((*(char *)(param_1 + 0x68) == '\0') &&
      (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) != '\x01')) &&
     (plVar3 = *(longlong **)(param_1 + 0x78), plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    while (iVar6 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      if (bVar7) {
        if ((*(longlong *)(param_1 + 0x70) == 0) || (cVar5 = FUN_14891a3fe(), cVar5 == '\0')) {
          FUN_14097c15a(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x000148899b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 148899b18 FUN_148899b18 body=410 status=ok
// SIG undefined FUN_148899b18(void)

void FUN_148899b18(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1470e4986();
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80aa0);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80aa8);
  FUN_144983130(lVar2 + 8,param_1 + 0xb8);
  FUN_14044066a(&local_78,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_70);
  FUN_144a2da94(&local_78);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0xb8,&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    FUN_140592d14(param_1 + 0x80,&local_98);
    puVar4 = &DAT_149dfb77a;
    if (local_90 != 0) {
      puVar4 = local_98;
    }
    FUN_140002266(&local_78,L"%s -> %s",puVar4,puVar3);
    if ((longlong *)(param_2 + 8) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_70;
      *(undefined4 *)(param_2 + 0x14) = local_70._4_4_;
      local_70 = 0;
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148899cb4 FUN_148899cb4 body=216 status=ok
// SIG undefined FUN_148899cb4(void)

void FUN_148899cb4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14889661a();
  if (*(char *)(param_1 + 0x50) == '\x02') {
    uVar3 = FUN_147f22960();
    FUN_1414aa4be(uVar3,&local_20,*(undefined1 *)(param_1 + 0xc0));
    lVar4 = FUN_1470e53c2(param_2,&DAT_14cb80ab0);
    puVar1 = (undefined8 *)(lVar4 + 0x40);
    if (*(byte *)(lVar4 + 0x60) == 0x12) {
      *puVar1 = local_20;
    }
    else {
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar4 + 0x60) * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar5 = puVar1;
        if (0x18 < *(ushort *)(lVar4 + 0x58)) {
          puVar5 = *(undefined8 **)(lVar4 + 0x40);
        }
        (*pcVar2)(puVar5);
      }
      if (0x18 < *(ushort *)(lVar4 + 0x58)) {
        FUN_1400020a8(*puVar1);
      }
      *(undefined2 *)(lVar4 + 0x58) = 8;
      *(undefined8 *)(lVar4 + 0x40) = local_20;
      *(undefined1 *)(lVar4 + 0x60) = 0x12;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148899d8e FUN_148899d8e body=114 status=ok
// SIG undefined FUN_148899d8e(void)

void FUN_148899d8e(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  
  bVar2 = (byte)*(undefined4 *)(param_1 + 0xc0);
  if (bVar2 < param_4) {
    bVar2 = param_4;
  }
  *(byte *)(param_1 + 0xc0) = bVar2;
  if ((3 < bVar2 && param_2 != 0) && (*(int *)(param_2 + 0x88) != 0)) {
    puVar1 = *(undefined8 **)(param_2 + 0x80);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_2 + 0x80),0,0,0x10);
      *(undefined4 *)(param_2 + 0x88) = 0;
    }
  }
  return;
}



// FUNCTION 148899e2a FUN_148899e2a body=621 status=ok
// SIG undefined FUN_148899e2a(void)

void FUN_148899e2a(longlong param_1)

{
  byte bVar1;
  code *pcVar2;
  ushort uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  longlong *_Dst;
  uint uVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 ***local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(byte *)(param_1 + 0xc0) < 4) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
      (cVar4 = FUN_144729dda(param_1 + 0xa0), cVar4 != '\0')) &&
     ((*(longlong **)(param_1 + 0xa8) != (longlong *)0x0 &&
      (lVar5 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x20))(), lVar5 != 0)))) {
    FUN_140356f00(lVar5,2,4);
  }
  if (((*(longlong *)(param_1 + 0xb8) != 0) &&
      (cVar4 = FUN_144729dda(param_1 + 0xb0), cVar4 != '\0')) &&
     (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0)) {
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x28))();
    local_38 = 8;
    local_50[0] = (undefined8 ****)0x0;
    local_30 = 7;
    local_60 = DAT_14cb24270;
    local_58 = 0xffffffff;
    FUN_140af060e(uVar6,&local_60,local_50);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar10 = local_50;
      if (0x18 < local_38) {
        ppppuVar10 = (undefined8 ****)local_50[0];
      }
      (*pcVar2)(ppppuVar10);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(local_50[0]);
    }
  }
  _Dst = (longlong *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  bVar1 = *(byte *)(param_1 + 0x90);
  if (bVar1 == DAT_14c9ab188) {
    puVar9 = DAT_14c9ab168;
    if (DAT_14c9ab180 < 0x19) {
      puVar9 = &DAT_14c9ab168;
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar8 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
    if (pcVar2 == (code *)0x0) {
      memcpy(_Dst,puVar9,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar2)(_Dst);
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar7 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x88)) {
        plVar7 = (longlong *)*_Dst;
      }
      (*pcVar2)(plVar7);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      FUN_1400020a8(*_Dst);
    }
    uVar3 = DAT_14c9ab180;
    uVar11 = (uint)DAT_14c9ab188;
    *(ushort *)(param_1 + 0x88) = DAT_14c9ab180;
    if (uVar3 < 0x19) {
      puVar9 = &DAT_14c9ab168;
    }
    else {
      plVar7 = (longlong *)FUN_14001cc68(uVar3,0);
      *_Dst = (longlong)plVar7;
      puVar9 = DAT_14c9ab168;
      _Dst = plVar7;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar11 * 0x120));
    if (pcVar2 == (code *)0x0) {
      memcpy(_Dst,puVar9,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar11 * 0x120)))
      ;
    }
    else {
      (*pcVar2)(_Dst);
    }
    *(byte *)(param_1 + 0x90) = DAT_14c9ab188;
  }
  *(undefined1 *)(param_1 + 0xc0) = 1;
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889a09e FUN_14889a09e body=213 status=ok
// SIG undefined FUN_14889a09e(void)

void FUN_14889a09e(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1470e4986();
  FUN_1400021e4(param_1 + 0x80,&local_40);
  puVar1 = local_40;
  if (local_38 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,&DAT_149e0625e,puVar1);
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
    *(undefined4 *)(param_2 + 0x10) = (undefined4)local_28;
    *(undefined4 *)(param_2 + 0x14) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889a174 FUN_14889a174 body=129 status=ok
// SIG undefined FUN_14889a174(void)

void FUN_14889a174(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar1 + 0x80) != 0) {
    lVar3 = FUN_1405f939e(param_1);
    if (lVar3 != 0) {
      iVar2 = FUN_14490d72a(lVar3);
      if ((iVar2 != 3) && (lVar3 = *(longlong *)(lVar3 + 0x178), lVar3 != 0)) {
        lVar4 = FUN_14041aabe();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_1486b0f6a(lVar3,*(undefined8 *)(lVar1 + 0x80));
        }
      }
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 14889a1fc FUN_14889a1fc body=329 status=ok
// SIG undefined FUN_14889a1fc(void)

void FUN_14889a1fc(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1470e4986();
  FUN_1446f470e(&local_68,L"LevelSequenceActor",1);
  lVar2 = FUN_1470e53c2(param_2,&local_68);
  FUN_144983130(lVar2 + 8,param_1 + 0x80);
  FUN_14044066a(&local_68,0x11,7);
  cVar1 = FUN_144a43716(param_1 + 0x88,&local_60);
  FUN_144a2da94(&local_68);
  if (cVar1 == '\0') {
    FUN_140592d14(param_1 + 0x80,&local_78);
    puVar3 = local_78;
    if (local_70 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_68,&DAT_149e0625e,puVar3);
    if ((longlong *)(param_2 + 8) == &local_68) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_60;
      *(undefined4 *)(param_2 + 0x14) = local_60._4_4_;
      local_60 = 0;
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889a346 FUN_14889a346 body=219 status=ok
// SIG undefined FUN_14889a346(void)

void FUN_14889a346(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_58 = 0;
    cVar1 = FUN_140c58c2c(*(longlong *)(param_1 + 8),param_1 + 0x80,&local_50,&DAT_14cb8a5a8);
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14889a422(param_2);
      *puVar2 = CONCAT44(uStack_4c,CONCAT22(uStack_4e,local_50));
      *(undefined4 *)(puVar2 + 1) = uStack_48;
      FUN_1447715ec(puVar2 + 2,&local_40);
      *(undefined1 *)(puVar2 + 7) = 0;
      FUN_141881c66(puVar2 + 8,&DAT_14cb8a538);
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889a422 FUN_14889a422 body=64 status=ok
// SIG undefined FUN_14889a422(void)

longlong FUN_14889a422(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488a6598(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x70 + *param_1;
  FUN_1488a655d(lVar2,1);
  return lVar2;
}



// FUNCTION 14889a462 FUN_14889a462 body=196 status=ok
// SIG undefined FUN_14889a462(void)

void FUN_14889a462(longlong param_1)

{
  char cVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50 [2];
  undefined8 local_4c;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50[0] = 0;
  local_4c = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  cVar1 = FUN_140c589d6(*(undefined8 *)(param_1 + 0x40),*(longlong *)(param_1 + 0x48) + 0x80,
                        local_50,&DAT_14cb8a5a8);
  if (cVar1 != '\0') {
    local_60[0] = 0;
    local_5c = 0;
    local_54 = 0;
    FUN_144976b9c(local_60,DAT_14cb8a538);
    FUN_143d72bf2(*(undefined8 *)(param_1 + 0x40),local_50,local_60,0);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889a528 FUN_14889a528 body=385 status=ok
// SIG undefined FUN_14889a528(void)

void FUN_14889a528(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_89;
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58;
  longlong *local_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)(param_1 + 0x68) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  local_89 = 2;
  local_98 = FUN_144a7be76(param_1);
  FUN_144a7bec8(param_1,&local_58);
  local_88[0] = 0;
  local_60 = 0;
  FUN_144a7bf34(local_88,&local_58,&local_98,&local_89);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
  }
  FUN_1447c3578(lVar4 + 0x80,&local_58,local_88);
  lVar4 = FUN_14030a32e(&local_58);
  if (lVar4 == 0) {
LAB_14889a62b:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_141349952();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_14889a62b;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar2 != (code *)0x0) {
    pppuVar6 = &local_58;
    if (0x18 < local_40) {
      pppuVar6 = (undefined8 ***)local_58;
    }
    (*pcVar2)(pppuVar6);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58);
  }
  FUN_144a5ac3a(local_88);
  if (lVar4 != 0) {
    cVar3 = FUN_14598a0a0(lVar4);
    if (cVar3 == '\0') goto LAB_14889a697;
  }
  FUN_14097c15a(param_1);
LAB_14889a697:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889a6c8 FUN_14889a6c8 body=291 status=ok
// SIG undefined FUN_14889a6c8(void)

void FUN_14889a6c8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14889a7ec();
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80ab8);
  FUN_144983130(lVar1 + 8,param_1 + 0x1d8);
  if (*(char *)(param_1 + 0x210) == '\x01') {
    local_50 = *(undefined8 *)(param_1 + 0x218);
    local_58 = 0;
    local_38 = 8;
    local_30 = 0x12;
    local_28 = 0x12;
    if ((DAT_14c9a9954 & 0x20) != 0) {
      local_28 = 0;
    }
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80ac0);
    FUN_1403719a4(lVar1 + 8,&local_58);
    FUN_144a2da94(&local_58);
  }
  if (*(char *)(param_1 + 0x238) == '\x01') {
    local_50 = *(undefined8 *)(param_1 + 0x240);
    local_58 = 0;
    local_38 = 8;
    local_30 = 0x12;
    local_28 = 0x12;
    if ((DAT_14c9a9954 & 0x20) != 0) {
      local_28 = 0;
    }
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80ac8);
    FUN_1403719a4(lVar1 + 8,&local_58);
    FUN_144a2da94(&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889a7ec FUN_14889a7ec body=755 status=ok
// SIG undefined FUN_14889a7ec(void)

void FUN_14889a7ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1470e4986();
  if (*(char *)(param_1 + 0x80) == '\0') {
    if (*(longlong *)(param_1 + 200) != 0) {
      local_60 = *(undefined2 **)(param_1 + 0xd0);
      if (local_60 == (undefined2 *)0x0) {
        local_88 = (longlong *)0x0;
        uStack_80 = (undefined2 *)0x0;
      }
      else {
        FUN_1400021e4(&local_60,&local_88);
      }
      if ((longlong **)(param_2 + 8) == &local_88) {
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 8) != 0) {
          FUN_1400020a8();
        }
        *(longlong **)(param_2 + 8) = local_88;
        local_88 = (longlong *)0x0;
        *(undefined4 *)(param_2 + 0x10) = (undefined4)uStack_80;
        *(uint *)(param_2 + 0x14) = uStack_80._4_4_;
      }
    }
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb80be0);
    FUN_144983130(lVar6 + 8,param_1 + 0x180);
    plVar1 = (longlong *)(param_1 + 0x130);
    lVar6 = param_1 + 0x140;
    local_60 = (undefined2 *)0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar6;
    if (*(int *)(param_1 + 0x158) == 0) {
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar8 = *(int *)(param_1 + 0x158);
    }
    uStack_78 = (int)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar3 = local_70;
    uStack_80 = local_60;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar5 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar8) || (local_70 = local_50, uStack_58 != lVar6)) {
      do {
        local_70 = uVar3;
        lVar2 = *local_88;
        lVar7 = FUN_1470e53c2(param_2,lVar2 + (longlong)iVar5 * 0x48);
        FUN_144983130(lVar7 + 8,lVar2 + (longlong)iVar5 * 0x48 + 8);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_80._4_4_);
        FUN_1449c0562(&uStack_80);
        iVar5 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar6 || local_70._4_4_ != iVar8));
    }
  }
  else {
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb80be8);
    FUN_144983130(lVar6 + 8,param_1 + 0x88);
    cVar4 = FUN_144a8e0e6(param_1 + 0x90);
    if (cVar4 == '\0') {
      FUN_140592d14(param_1 + 0x88,&local_60);
      puVar9 = local_60;
      if ((int)uStack_58 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_88,&DAT_149e0625e,puVar9);
      if ((longlong **)(param_2 + 8) == &local_88) {
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 8) != 0) {
          FUN_1400020a8();
        }
        *(longlong **)(param_2 + 8) = local_88;
        local_88 = (longlong *)0x0;
        *(undefined4 *)(param_2 + 0x10) = (undefined4)uStack_80;
        *(uint *)(param_2 + 0x14) = uStack_80._4_4_;
        uStack_80 = (undefined2 *)0x0;
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  cVar4 = FUN_144a8e0e6(param_1 + 0x90);
  if (cVar4 != '\0') {
    FUN_14020fad6(param_2 + 0x28,
                  L"A Level Sequence Actor is now required.\nUse the \"Is Persistent\" property of the Level Sequence Actor\nto determine whether its sequence is persistent or transient."
                 );
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889aae0 FUN_14889aae0 body=327 status=ok
// SIG undefined FUN_14889aae0(void)

void FUN_14889aae0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x210) != '\x01') {
    lVar5 = FUN_145d4f736();
    lVar4 = *(longlong *)(lVar5 + 0x88);
    if (lVar4 == 0) {
      uVar3 = FUN_145cd7928();
      lVar4 = FUN_14477b664(uVar3);
      *(longlong *)(lVar5 + 0x88) = lVar4;
    }
    if (*(longlong *)(lVar5 + 0x90) != 0) {
      return;
    }
    if (lVar4 == 0) {
      return;
    }
    if (*(longlong *)(lVar5 + 0x80) != 0) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar3 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x80));
      }
      *(undefined8 *)(lVar5 + 0x90) = uVar3;
      return;
    }
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x220);
  if (lVar4 == 0) {
    uVar3 = FUN_145cd7928();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x220) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x218) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x218));
    }
    *(undefined8 *)(param_1 + 0x228) = uVar3;
    return;
  }
  return;
}



// FUNCTION 14889ac28 FUN_14889ac28 body=182 status=ok
// SIG undefined FUN_14889ac28(void)

void FUN_14889ac28(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  code *pcVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  FUN_14889acde();
  if (*(char *)(param_1 + 0x50) == '\x02') {
    fVar6 = *(float *)(param_1 + 0x1a4);
    fVar5 = (float)FUN_141236616(param_1);
    fVar6 = fVar6 - fVar5;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80ab8);
    pfVar1 = (float *)(lVar3 + 0x40);
    if (*(byte *)(lVar3 + 0x60) == 3) {
      *pfVar1 = fVar6;
    }
    else {
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar3 + 0x60) * 0x120));
      if (pcVar2 != (code *)0x0) {
        pfVar4 = pfVar1;
        if (0x18 < *(ushort *)(lVar3 + 0x58)) {
          pfVar4 = *(float **)(lVar3 + 0x40);
        }
        (*pcVar2)(pfVar4);
      }
      if (0x18 < *(ushort *)(lVar3 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)pfVar1);
      }
      *(undefined2 *)(lVar3 + 0x58) = 4;
      *(float *)(lVar3 + 0x40) = fVar6;
      *(undefined1 *)(lVar3 + 0x60) = 3;
    }
  }
  return;
}



// FUNCTION 14889acde FUN_14889acde body=605 status=ok
// SIG undefined FUN_14889acde(void)

void FUN_14889acde(longlong param_1,longlong param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  float *pfVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14889661a();
  if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 200) != 0) {
    lVar6 = FUN_14889be26(*(longlong *)(param_1 + 0x48) + 0xc0);
    pwVar9 = L" (loading)";
    if (lVar6 != 0) {
      lVar6 = FUN_14479d2ce(param_1 + 0xc4);
      if (lVar6 == 0) goto LAB_14889ad1e;
      cVar5 = FUN_1489507a2(lVar6);
      if (cVar5 == '\0') {
        cVar5 = FUN_1432dd8b8(lVar6);
        if (cVar5 == '\0') goto LAB_14889ad1e;
        pwVar9 = L" (playing)";
      }
    }
    FUN_1400020e8(param_2 + 8,pwVar9,10);
  }
LAB_14889ad1e:
  iVar3 = *(int *)(param_1 + 0x158);
  if (iVar3 != 0) {
    lVar6 = FUN_1470e53c2(param_2,&DAT_14cb80c08);
    piVar1 = (int *)(lVar6 + 0x40);
    if (*(byte *)(lVar6 + 0x60) == 2) {
      *piVar1 = iVar3;
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
      if (pcVar4 != (code *)0x0) {
        piVar7 = piVar1;
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          piVar7 = *(int **)(lVar6 + 0x40);
        }
        (*pcVar4)(piVar7);
      }
      if (0x18 < *(ushort *)(lVar6 + 0x58)) {
        FUN_1400020a8(*(undefined8 *)piVar1);
      }
      *(undefined2 *)(lVar6 + 0x58) = 4;
      *(int *)(lVar6 + 0x40) = iVar3;
      *(undefined1 *)(lVar6 + 0x60) = 2;
    }
    if (*(char *)(param_1 + 0x7c) == '\x01') {
      fVar12 = *(float *)(param_1 + 0x78);
      fVar11 = (float)FUN_141236616(param_1);
      fVar12 = fVar12 - fVar11;
      fVar11 = 0.0;
      if (0.0 <= fVar12) {
        fVar11 = fVar12;
      }
      FUN_1400021e4(&DAT_14cb80c10,&local_70);
      puVar10 = local_70;
      if (local_68 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_60,L"\n %s: %0.03f",puVar10,(double)fVar11);
      iVar3 = local_58 + -1;
      if (local_58 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_2 + 8,local_60,iVar3);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar6 = FUN_1470e53c2(param_2,&DAT_14cb80c10);
      pfVar2 = (float *)(lVar6 + 0x40);
      if (*(byte *)(lVar6 + 0x60) == 3) {
        *pfVar2 = fVar11;
      }
      else {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
        if (pcVar4 != (code *)0x0) {
          pfVar8 = pfVar2;
          if (0x18 < *(ushort *)(lVar6 + 0x58)) {
            pfVar8 = *(float **)(lVar6 + 0x40);
          }
          (*pcVar4)(pfVar8);
        }
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          FUN_1400020a8(*(undefined8 *)pfVar2);
        }
        *(undefined2 *)(lVar6 + 0x58) = 4;
        *(float *)(lVar6 + 0x40) = fVar11;
        *(undefined1 *)(lVar6 + 0x60) = 3;
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889af3c FUN_14889af3c body=57 status=ok
// SIG undefined FUN_14889af3c(void)

undefined8 FUN_14889af3c(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x80) == '\0') {
    lVar3 = FUN_14479d2ce(param_1 + 0xc4);
    if (lVar3 != 0) {
      cVar1 = FUN_1489507a2(lVar3);
      if (cVar1 == '\0') goto LAB_14889af4d;
    }
    uVar2 = 0;
  }
  else {
LAB_14889af4d:
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14889af7a FUN_14889af7a body=544 status=ok
// SIG undefined FUN_14889af7a(void)

void FUN_14889af7a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1470e4986();
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    FUN_140056680(&local_38,L"Mission");
  }
  else {
    FUN_1400021e4(param_1 + 0xa0,&local_38);
  }
  puVar7 = local_38;
  if (local_30 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_48,L"CONV: %s",puVar7);
  if ((longlong *)(param_2 + 8) == &local_48) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_48;
    local_48 = 0;
    *(int *)(param_2 + 0x10) = local_40;
    *(undefined4 *)(param_2 + 0x14) = local_3c;
  }
  lVar5 = *(longlong *)(param_1 + 0xf0);
  if (lVar5 == 0) {
    uVar4 = FUN_14043db3a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xf0) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    if (lVar5 == 0 || lVar6 == 0) goto LAB_14889b15e;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      goto LAB_14889b15e;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0xe8));
    *(longlong *)(param_1 + 0xf8) = lVar5;
    if (lVar5 == 0) goto LAB_14889b15e;
    lVar6 = *(longlong *)(param_1 + 0xe8);
  }
  local_60 = lVar6;
  FUN_1400021e4(&local_60,&local_58);
  puVar7 = local_58;
  if (local_50 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_48,L"\nONAMETAG: %s",puVar7);
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8((longlong *)(param_2 + 8),local_48,iVar2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14889b15e:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889b1a2 FUN_14889b1a2 body=66 status=ok
// SIG undefined FUN_14889b1a2(void)

void FUN_14889b1a2(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar1 = FUN_1405f939e(param_1);
    if (lVar1 != 0) {
      lVar1 = FUN_140115352(lVar1);
      if (lVar1 != 0) {
        FUN_14887b708(lVar1,*(undefined4 *)(param_1 + 0x70));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return;
}



// FUNCTION 14889b1e4 FUN_14889b1e4 body=245 status=ok
// SIG undefined FUN_14889b1e4(void)

void FUN_14889b1e4(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470e4986();
  if (*(longlong *)(param_1 + 0x98) == 0) {
    FUN_140056680(&local_28,L"Mission");
  }
  else {
    FUN_1400021e4(param_1 + 0x98,&local_28);
  }
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"CONV: %s",puVar1);
  if ((longlong *)(param_2 + 8) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 8) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 0x10) = local_30;
    *(undefined4 *)(param_2 + 0x14) = local_2c;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889b2da FUN_14889b2da body=246 status=ok
// SIG undefined FUN_14889b2da(void)

void FUN_14889b2da(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14063fa58();
  if ((*(char *)(param_1 + 0x90) == '\x01') && (0 < *(int *)(param_1 + 0x88))) {
    uVar2 = 0;
    do {
      if (uVar2 < 0x14) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = (&DAT_14cb80b20)[uVar2];
      }
      else {
        FUN_144a91fee(&local_48,"OnFinishedLine",uVar2 + 1 & 0xffffffff);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = local_48;
      }
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x88));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889b3d2 FUN_14889b3d2 body=395 status=ok
// SIG undefined FUN_14889b3d2(void)

void FUN_14889b3d2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  undefined2 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_58 = 0;
  uVar3 = FUN_1464ef088();
  FUN_14047320e(uVar3,param_2,&local_78,0);
  if ((int)uStack_70 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_70 & 0xffffffff);
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x8c) < (int)uStack_70) {
    FUN_1488a6628(plVar1);
  }
  if ((int)uStack_70 != 0) {
    lVar6 = (longlong)(int)uStack_70 * 0x18;
    lVar4 = local_78;
    do {
      iVar2 = *(int *)(param_1 + 0x88);
      *(uint *)(param_1 + 0x88) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x8c) < iVar2 + 1U) {
        FUN_1488a6694(plVar1,iVar2);
      }
      lVar5 = *plVar1;
      FUN_140862250(lVar5 + (longlong)iVar2 * 0x70,lVar4);
      lVar5 = (longlong)iVar2 * 0x70 + lVar5;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      FUN_14044066a(lVar5 + 0x20,0x11,7);
      lVar4 = lVar4 + 0x18;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      *(undefined8 *)(lVar5 + 0x60) = 0;
      *(undefined8 *)(lVar5 + 0x68) = 0;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x90) = (undefined1)local_68;
  *(undefined1 *)(param_1 + 0x91) = local_68._1_1_;
  *(undefined4 *)(param_1 + 0x94) = local_64;
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_5c,uStack_60);
  *(undefined1 *)(param_1 + 0xa0) = local_58;
  if (local_78 != 0) {
    FUN_1400020a8(local_78);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889b56c FUN_14889b56c body=224 status=ok
// SIG undefined FUN_14889b56c(void)

void FUN_14889b56c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) != '\x01')) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if ((*(char *)(lVar1 + 0xa0) == '\x01') && (*(int *)(param_1 + 0x70) < 0)) {
      FUN_143d76a48(param_1);
      return;
    }
    lVar3 = FUN_1405f939e(param_1);
    if ((lVar3 != 0) && (lVar3 = FUN_140115352(lVar3), lVar3 != 0)) {
      iVar5 = *(int *)(param_1 + 0x70);
      if ((-1 < (longlong)iVar5) && (iVar4 = *(int *)(param_1 + 0x80), iVar5 < iVar4)) {
        if ((*(int *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar5 * 4) < 1) ||
           (bVar2 = FUN_1406ee510(*(undefined8 *)(lVar3 + 0x48)), (bVar2 & 0xfd) != 1)) {
          if (*(char *)(lVar1 + 0x90) == '\0') {
            iVar5 = iVar5 + 1;
            *(int *)(param_1 + 0x70) = iVar5;
          }
          else {
            FUN_14122bd00(param_1,iVar5 + 2);
            iVar4 = *(int *)(param_1 + 0x70);
            iVar5 = iVar4 + 1;
            *(int *)(param_1 + 0x70) = iVar5;
            if (iVar4 < -1) goto LAB_14889b58a;
            iVar4 = *(int *)(param_1 + 0x80);
          }
          if (iVar4 <= iVar5) goto LAB_14889b58a;
        }
        return;
      }
    }
  }
LAB_14889b58a:
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 14889b64c FUN_14889b64c body=102 status=ok
// SIG undefined FUN_14889b64c(void)

void FUN_14889b64c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1405f939e();
  if ((lVar1 != 0) && (lVar1 = FUN_140115352(lVar1), lVar1 != 0)) {
    lVar2 = (longlong)*(int *)(param_1 + 0x70);
    if ((-1 < lVar2) && (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x80))) {
      do {
        FUN_14887b708(lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + lVar2 * 4));
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < *(int *)(param_1 + 0x80));
    }
  }
  FUN_14889b6b2(param_1);
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  return;
}



// FUNCTION 14889b6b2 FUN_14889b6b2 body=67 status=ok
// SIG undefined FUN_14889b6b2(void)

void FUN_14889b6b2(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x90) == '\x01') &&
     (iVar2 = *(int *)(param_1 + 0x70), -1 < iVar2)) {
    do {
      if (*(int *)(param_1 + 0x80) <= iVar2) {
        return;
      }
      FUN_14122bd00(param_1,iVar2 + 2);
      iVar1 = *(int *)(param_1 + 0x70);
      iVar2 = iVar1 + 1;
      *(int *)(param_1 + 0x70) = iVar2;
    } while (-2 < iVar1);
  }
  return;
}



// FUNCTION 14889b718 FUN_14889b718 body=336 status=ok
// SIG undefined FUN_14889b718(void)

void FUN_14889b718(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1470e4986();
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_60 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x18);
    FUN_1400021e4(&local_60,&local_58);
    if ((longlong *)(param_2 + 8) == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 8) = local_58;
      *(undefined4 *)(param_2 + 0x10) = (undefined4)local_50;
      *(undefined4 *)(param_2 + 0x14) = local_50._4_4_;
    }
    local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x18);
    local_58 = 0;
    local_38 = 8;
    local_30 = 0x12;
    local_28 = 0x12;
    if ((DAT_14c9a9954 & 0x20) != 0) {
      local_28 = 0;
    }
    lVar1 = FUN_1470e53c2(param_2,&DAT_14cb80bc0);
    FUN_1403719a4(lVar1 + 8,&local_58);
    FUN_144a2da94(&local_58);
    if ((longlong)*(int *)(param_1 + 0x90) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x88);
      lVar3 = (longlong)*(int *)(param_1 + 0x90) * 0x58;
      do {
        lVar2 = FUN_1470e53c2(param_2,lVar1 + 0x38);
        FUN_144983130(lVar2 + 8,lVar1);
        lVar1 = lVar1 + 0x58;
        lVar3 = lVar3 + -0x58;
      } while (lVar3 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889b86a FUN_14889b86a body=43 status=ok
// SIG undefined FUN_14889b86a(void)

void FUN_14889b86a(longlong param_1)

{
  FUN_14574e7dc(param_1 + 0x70);
  if (*(char *)(param_1 + 0x50) == '\x02') {
    FUN_14097c15a(param_1);
    return;
  }
  return;
}



// FUNCTION 14889b896 FUN_14889b896 body=85 status=ok
// SIG undefined FUN_14889b896(void)

void FUN_14889b896(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14889661a();
  iVar1 = *(int *)(param_1 + 0x1e8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1e0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1470e52c2(param_2,lVar3,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14889b900 FUN_14889b900 body=82 status=ok
// SIG undefined FUN_14889b900(void)

void FUN_14889b900(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    if ((*(char *)(param_1 + 0x68) != '\0') ||
       (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\x01')) {
      *(undefined1 *)(param_1 + 0x1f0) = 1;
    }
    FUN_14085474e(param_1 + 0x70);
    if (*(char *)(param_1 + 0x1dc) != '\x02') {
      return;
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 14889b95c FUN_14889b95c body=254 status=ok
// SIG undefined FUN_14889b95c(void)

void FUN_14889b95c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      local_68 = 0;
      cVar1 = FUN_140c58c2c(*(longlong *)(param_1 + 8),param_1 + 0x88,&local_58,&DAT_14cb8a5a8);
      if (cVar1 != '\0') {
        puVar2 = (undefined8 *)FUN_14889a422(param_2);
        *puVar2 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
        *(undefined4 *)(puVar2 + 1) = uStack_50;
        FUN_1447715ec(puVar2 + 2,&local_48);
        *(undefined1 *)(puVar2 + 7) = 0;
        puVar3 = &DAT_14cb8a538;
        if (*(char *)(param_1 + 0xe8) != '\0') {
          puVar3 = (undefined8 *)(param_1 + 0x1bc);
        }
        FUN_141881c66(puVar2 + 8,puVar3);
      }
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889ba5c FUN_14889ba5c body=32 status=ok
// SIG undefined FUN_14889ba5c(void)

void FUN_14889ba5c(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14122bd5e(*(undefined8 *)(param_1 + 0x48));
  FUN_14122bd00(param_1,uVar1);
  return;
}



// FUNCTION 14889ba7c FUN_14889ba7c body=450 status=ok
// SIG undefined FUN_14889ba7c(void)

longlong * FUN_14889ba7c(longlong *param_1,undefined8 param_2)

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
    *puVar4 = &PTR_LAB_14ac8c8d0;
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
    *puVar4 = &PTR_FUN_14b40d5c0;
    puVar4[3] = local_38;
    puVar4[4] = 0;
    puVar4[5] = FUN_14889bc42;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14ac8c8d0;
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
    *puVar4 = &PTR_FUN_14b40d5c0;
    puVar4[3] = local_38;
    puVar4[4] = local_30;
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_14889bc42;
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



// FUNCTION 14889bc42 FUN_14889bc42 body=207 status=ok
// SIG undefined FUN_14889bc42(void)

void FUN_14889bc42(longlong param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = FUN_14048b906(*param_3);
  if (((lVar2 != 0) && ((param_4 & 0xfd) == 4)) && (0 < *(int *)(param_1 + 0x158))) {
    uVar4 = 0;
    do {
      lVar6 = (ulonglong)uVar4 * 0x40;
      lVar5 = *(longlong *)(param_1 + 0x150) + lVar6;
      lVar3 = FUN_14479d2ce(lVar5);
      if (lVar3 == lVar2) {
        FUN_14889bd12(lVar5,0);
        iVar1 = *(int *)(param_1 + 0x158);
        if (~uVar4 + iVar1 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x150) + lVar6),
                  (void *)(*(longlong *)(param_1 + 0x150) + lVar6 + 0x40),
                  (longlong)(int)(~uVar4 + iVar1) << 6);
          iVar1 = *(int *)(param_1 + 0x158);
        }
        *(int *)(param_1 + 0x158) = iVar1 + -1;
        FUN_1488a6f5e((longlong *)(param_1 + 0x150));
        uVar4 = uVar4 - 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x158));
  }
  return;
}



// FUNCTION 14889bd12 FUN_14889bd12 body=272 status=ok
// SIG undefined FUN_14889bd12(void)

void FUN_14889bd12(longlong param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x10);
    }
    if (param_2 == '\x01' && plVar5 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar5 + 0x20))();
      if (lVar3 != 0) {
        FUN_140356f00(lVar3,2,4);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    bVar2 = FUN_144729dda(param_1 + 0x18);
    plVar5 = *(longlong **)(param_1 + 0x20);
    if ((plVar5 != (longlong *)0x0 & bVar2) == 1) {
      uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
      FUN_1402b8a4c(uVar4,&DAT_14cb24270);
      uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
      FUN_1402b8a4c(uVar4,&DAT_14cb80bf0);
      uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
      FUN_1402b8a4c(uVar4,&DAT_14cb80bf8);
    }
  }
  plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x30);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x938))(plVar5,2,*(undefined4 *)(param_1 + 0x38));
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar3 != 0) {
    FUN_1400bc8c2(lVar3 + 0x1218,&DAT_14cb80c00);
    return;
  }
  return;
}



// FUNCTION 14889be26 FUN_14889be26 body=197 status=ok
// SIG undefined FUN_14889be26(void)

longlong FUN_14889be26(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140861c56();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 14889befc FUN_14889befc body=219 status=ok
// SIG undefined FUN_14889befc(void)

void FUN_14889befc(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1470e4986();
  local_30 = *(longlong *)(param_1 + 0xe0);
  FUN_1400021e4(&local_30,&local_40);
  puVar1 = local_40;
  if (local_38 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,&DAT_149e0625e,puVar1);
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
    *(undefined4 *)(param_2 + 0x10) = (undefined4)local_28;
    *(undefined4 *)(param_2 + 0x14) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889bfd8 FUN_14889bfd8 body=1169 status=ok
// SIG undefined FUN_14889bfd8(void)

void FUN_14889bfd8(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 local_60;
  undefined1 local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1470e4986();
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80c18);
  local_c8 = param_1 + 0x88;
  FUN_144983130(lVar2 + 8,param_1 + 0x88);
  local_80 = (undefined2 *)0x0;
  local_60 = 4;
  local_78._0_4_ = (uint)*(byte *)(param_1 + 0x80);
  local_50 = (DAT_14c9a8634 & 0x20) == 0;
  local_58 = 1;
  lVar2 = FUN_1470e53c2(param_2,&DAT_14cb80c20);
  FUN_1403719a4(lVar2 + 8,&local_80);
  FUN_144a2da94(&local_80);
  lVar2 = param_1 + 0xc0;
  FUN_1489a5ae0(lVar2,local_90);
  FUN_1470ed5e8(&local_80,local_90);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80c28);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  local_80 = (undefined2 *)0x0;
  local_60 = 4;
  local_78._0_4_ = (uint)*(byte *)(param_1 + 0xd8);
  local_50 = (DAT_14c9a8634 & 0x20) == 0;
  local_58 = 1;
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80c30);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  FUN_1489a5ae0(param_1 + 0xe0,local_a0);
  FUN_1470ed5e8(&local_80,local_a0);
  lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80c38);
  FUN_1403719a4(lVar3 + 8,&local_80);
  FUN_144a2da94(&local_80);
  local_80 = (undefined2 *)0x0;
  local_60 = 4;
  local_78 = CONCAT44(local_78._4_4_,1);
  local_58 = 2;
  local_50 = (byte)~DAT_14c9a8754 >> 4 & 2;
  cVar1 = FUN_144a43716(param_1 + 0x100);
  FUN_144a2da94(&local_80);
  if (cVar1 == '\0') {
    lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80c40);
    FUN_144983130(lVar3 + 8,param_1 + 0xf8);
  }
  local_80 = (undefined2 *)0x0;
  local_60 = 4;
  local_78 = CONCAT44(local_78._4_4_,0x3f800000);
  local_58 = 3;
  local_50 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  cVar1 = FUN_144a43716(param_1 + 0x138);
  FUN_144a2da94(&local_80);
  if (cVar1 == '\0') {
    lVar3 = FUN_1470e53c2(param_2,&DAT_14cb80c48);
    FUN_144983130(lVar3 + 8,param_1 + 0x130);
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      FUN_1489a5ae0(lVar2,&local_b0);
      puVar5 = &DAT_149dfb77a;
      if (local_a8 != 0) {
        puVar5 = local_b0;
      }
      FUN_1489a5ae0(param_1 + 0xe0,&local_c0);
      puVar4 = &DAT_149dfb77a;
      if (local_b8 != 0) {
        puVar4 = local_c0;
      }
      FUN_140002266(&local_80,L"Host: %s ; Clients: %s",puVar4,puVar5);
      if ((undefined2 **)(param_2 + 8) == &local_80) goto LAB_14889c3d0;
LAB_14889c2bb:
      if (*(longlong *)(param_2 + 8) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(param_2 + 8) = local_80;
      local_80 = (undefined2 *)0x0;
      *(uint *)(param_2 + 0x10) = (uint)local_78;
      *(undefined4 *)(param_2 + 0x14) = local_78._4_4_;
      local_78 = 0;
      goto LAB_14889c2f1;
    }
    FUN_1489a5ae0(lVar2,&local_b0);
    puVar5 = local_b0;
    if (local_a8 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_80,L"All Players: %s",puVar5);
    local_c0 = local_80;
    if ((undefined2 **)(param_2 + 8) == &local_80) goto LAB_14889c2f1;
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined2 **)(param_2 + 8) = local_80;
    local_80 = (undefined2 *)0x0;
    *(uint *)(param_2 + 0x10) = (uint)local_78;
    *(undefined4 *)(param_2 + 0x14) = local_78._4_4_;
    local_78 = 0;
  }
  else {
    FUN_14044066a(&local_80,0x11,7);
    cVar1 = FUN_144a43716(param_1 + 0x90,&local_78);
    FUN_144a2da94(&local_80);
    if (cVar1 != '\0') goto LAB_14889c30a;
    FUN_1489a5ae0(lVar2,&local_b0);
    puVar5 = &DAT_149dfb77a;
    if (local_a8 != 0) {
      puVar5 = local_b0;
    }
    FUN_140592d14(local_c8,&local_c0);
    puVar4 = &DAT_149dfb77a;
    if (local_b8 != 0) {
      puVar4 = local_c0;
    }
    FUN_140002266(&local_80,L"%s: %s",puVar4,puVar5);
    if ((undefined2 **)(param_2 + 8) != &local_80) goto LAB_14889c2bb;
LAB_14889c3d0:
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
LAB_14889c2f1:
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14889c30a:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14889c46a FUN_14889c46a body=165 status=ok
// SIG undefined FUN_14889c46a(void)

undefined8 * FUN_14889c46a(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_14485c47a();
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    lVar2 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_1407ca880();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar2 != lVar3) goto LAB_14889c4db;
    }
  }
  lVar3 = 0;
LAB_14889c4db:
  FUN_1407be368(&local_28,lVar3);
  *(undefined4 *)(param_1 + 1) = local_28;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_24;
  *(undefined4 *)(param_1 + 2) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889c510 FUN_14889c510 body=568 status=ok
// SIG undefined FUN_14889c510(void)

undefined8 FUN_14889c510(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  undefined4 uVar9;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined1 local_f1;
  undefined1 local_f0 [40];
  undefined4 local_c8;
  undefined8 ***local_c0;
  longlong *local_b8;
  ushort local_a8;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar5 = FUN_144729dda(param_1 + 8);
    if (lVar6 != 0 && cVar5 == '\x01') {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))();
      cVar5 = FUN_1414d837c(uVar7,*(undefined1 *)(param_1 + 0x20));
      if (cVar5 != '\0') {
LAB_14889c587:
        uVar7 = 0;
        goto LAB_14889c71b;
      }
      iVar2 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = iVar2 + -1;
      if (0 < iVar2) {
        lVar3 = *(longlong *)(param_2 + 0x48);
        local_78 = 0;
        local_70 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_6c = 0xffffffff00000080;
        local_64 = 0;
        local_58 = 0;
        local_50 = 0;
        local_f1 = 2;
        local_100 = FUN_144a7be76(param_2);
        FUN_144a7bec8(param_2,&local_c0);
        local_f0[0] = 0;
        local_c8 = 0;
        FUN_144a7bf34(local_f0,&local_c0,&local_100,&local_f1);
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b8 + 0x10))();
          }
        }
        FUN_1447c3578(lVar3 + 0x130,&local_c0,local_f0);
        uVar9 = FUN_144a7ecd0(&local_c0);
        FUN_140dd04a4(&local_98,uVar9);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar8 = &local_c0;
          if (0x18 < local_a8) {
            ppppuVar8 = (undefined8 ****)local_c0;
          }
          (*pcVar4)(ppppuVar8);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(local_c0);
        }
        FUN_144a5ac3a(local_f0);
        cVar5 = FUN_14096df60(uVar7,lVar6,0,&local_98);
        *(char *)(param_1 + 0x20) = cVar5;
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(&local_98);
        if (cVar5 != '\0') goto LAB_14889c587;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar7 = 1;
LAB_14889c71b:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889c74a FUN_14889c74a body=70 status=ok
// SIG undefined FUN_14889c74a(void)

void FUN_14889c74a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))();
      FUN_140c4a7e8(uVar2,*(undefined1 *)(param_1 + 0x20),1);
      return;
    }
  }
  return;
}



// FUNCTION 14889c790 FUN_14889c790 body=338 status=ok
// SIG undefined FUN_14889c790(void)

void FUN_14889c790(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14889661a();
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar9 = 0x24;
    uVar8 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x70);
      FUN_140002266(&local_68,L"PlaybackState_%d",uVar8 & 0xffffffff);
      iVar4 = local_60 + -1;
      if (local_60 == 0) {
        iVar4 = 0;
      }
      FUN_1446f82e2(&local_50,iVar4,local_68,1);
      local_58 = local_50;
      uVar5 = FUN_1470e5326(param_2,&local_58);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)(lVar6 + lVar9);
      lVar6 = FUN_1470e53c2(uVar5,&DAT_14cb80c40);
      puVar1 = (undefined8 *)(lVar6 + 0x40);
      if (*(byte *)(lVar6 + 0x60) == 2) {
        *(undefined4 *)puVar1 = uVar2;
      }
      else {
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(lVar6 + 0x60) * 0x120));
        if (pcVar3 != (code *)0x0) {
          puVar7 = puVar1;
          if (0x18 < *(ushort *)(lVar6 + 0x58)) {
            puVar7 = *(undefined8 **)(lVar6 + 0x40);
          }
          (*pcVar3)(puVar7);
        }
        if (0x18 < *(ushort *)(lVar6 + 0x58)) {
          FUN_1400020a8(*puVar1);
        }
        *(undefined2 *)(lVar6 + 0x58) = 4;
        *(undefined4 *)(lVar6 + 0x40) = uVar2;
        *(undefined1 *)(lVar6 + 0x60) = 2;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x28;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_1 + 0x78));
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14889c8e4 FUN_14889c8e4 body=108 status=ok
// SIG undefined FUN_14889c8e4(void)

void FUN_14889c8e4(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((*(char *)(param_1 + 0x68) == '\0') &&
      (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) &&
     ((longlong)*(int *)(param_1 + 0x78) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    lVar4 = (longlong)*(int *)(param_1 + 0x78) * 0x28;
    bVar2 = 1;
    do {
      bVar1 = FUN_14889c510(lVar3,param_1);
      bVar2 = bVar2 & bVar1;
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    if (bVar2 == 0) {
      return;
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 14889c950 FUN_14889c950 body=93 status=ok
// SIG undefined FUN_14889c950(void)

void FUN_14889c950(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x70);
    lVar1 = (longlong)*(int *)(param_1 + 0x78) * 0x28;
    do {
      FUN_14889c74a(lVar2);
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_1488a7328(param_1 + 0x70,0);
    return;
  }
  return;
}



// FUNCTION 14889c9ae FUN_14889c9ae body=38 status=ok
// SIG undefined FUN_14889c9ae(void)

undefined8 FUN_14889c9ae(undefined8 param_1,int param_2)

{
  FUN_14888f7e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889c9d4 FUN_14889c9d4 body=38 status=ok
// SIG undefined FUN_14889c9d4(void)

undefined8 FUN_14889c9d4(undefined8 param_1,int param_2)

{
  FUN_1486bb9f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889ca00 FUN_14889ca00 body=38 status=ok
// SIG undefined FUN_14889ca00(void)

undefined8 FUN_14889ca00(undefined8 param_1,int param_2)

{
  FUN_1486bd056();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889ca2c FUN_14889ca2c body=38 status=ok
// SIG undefined FUN_14889ca2c(void)

undefined8 FUN_14889ca2c(undefined8 param_1,int param_2)

{
  FUN_1486bd214();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889ca58 FUN_14889ca58 body=131 status=ok
// SIG undefined FUN_14889ca58(void)

longlong * FUN_14889ca58(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xb8,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b40d6a0;
  FUN_14889375c(plVar3 + 2);
  plVar3[2] = (longlong)&PTR_FUN_14b40bd20;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14889cadc FUN_14889cadc body=38 status=ok
// SIG undefined FUN_14889cadc(void)

undefined8 FUN_14889cadc(undefined8 param_1,int param_2)

{
  FUN_1486bd214();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889cb08 FUN_14889cb08 body=158 status=ok
// SIG undefined FUN_14889cb08(void)

undefined8 * FUN_14889cb08(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xc0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b40d6c0;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0xb0);
  FUN_14889375c(plVar1);
  plVar3[2] = (longlong)&PTR_FUN_14b18b9d0;
  plVar3[0x17] = 0;
  *param_2 = plVar1;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14889cba6 FUN_14889cba6 body=38 status=ok
// SIG undefined FUN_14889cba6(void)

undefined8 FUN_14889cba6(undefined8 param_1,int param_2)

{
  FUN_1457deef4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889cbd2 FUN_14889cbd2 body=164 status=ok
// SIG undefined FUN_14889cbd2(void)

longlong * FUN_14889cbd2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x160,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b40d6e0;
  FUN_148894782(plVar3 + 2);
  plVar3[2] = (longlong)&PTR_FUN_14b18bd30;
  plVar3[0x22] = 0;
  plVar3[0x24] = 0;
  *(undefined4 *)((longlong)plVar3 + 0x154) = 0x3f000000;
  *(undefined1 *)(plVar3 + 0x2a) = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14889cc76 FUN_14889cc76 body=38 status=ok
// SIG undefined FUN_14889cc76(void)

undefined8 FUN_14889cc76(undefined8 param_1,int param_2)

{
  FUN_1486bda76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889cca2 FUN_14889cca2 body=38 status=ok
// SIG undefined FUN_14889cca2(void)

undefined8 FUN_14889cca2(undefined8 param_1,int param_2)

{
  FUN_1457deef4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889ccce FUN_14889ccce body=163 status=ok
// SIG undefined FUN_14889ccce(void)

longlong * FUN_14889ccce(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x130,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b40d700;
  FUN_148894782(plVar3 + 2);
  plVar3[2] = (longlong)&PTR_FUN_14b40be30;
  *(undefined4 *)(plVar3 + 0x22) = 0x3f800000;
  *(undefined4 *)((longlong)plVar3 + 0x114) = 0x3ecccccd;
  *(undefined4 *)(plVar3 + 0x23) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x11c) = 0x3ecccccd;
  *(undefined1 *)(plVar3 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x124) = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14889cd72 FUN_14889cd72 body=38 status=ok
// SIG undefined FUN_14889cd72(void)

undefined8 FUN_14889cd72(undefined8 param_1,int param_2)

{
  FUN_1486bda76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889cd9e FUN_14889cd9e body=38 status=ok
// SIG undefined FUN_14889cd9e(void)

undefined8 FUN_14889cd9e(undefined8 param_1,int param_2)

{
  FUN_145953380();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889cdc4 FUN_14889cdc4 body=45 status=ok
// SIG undefined FUN_14889cdc4(void)

longlong FUN_14889cdc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145953380(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889cdf2 FUN_14889cdf2 body=38 status=ok
// SIG undefined FUN_14889cdf2(void)

undefined8 FUN_14889cdf2(undefined8 param_1,int param_2)

{
  FUN_145d38eea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889ce1e FUN_14889ce1e body=38 status=ok
// SIG undefined FUN_14889ce1e(void)

undefined8 FUN_14889ce1e(undefined8 param_1,int param_2)

{
  FUN_14129efe4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889ce4a FUN_14889ce4a body=203 status=ok
// SIG undefined FUN_14889ce4a(void)

void FUN_14889ce4a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x140);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar5 = param_1;
  }
  iVar3 = *(int *)(param_1 + 0x148);
  lVar6 = (longlong)iVar3 * 0x20;
  if ((longlong)iVar3 != 0) {
    uVar7 = 0;
    do {
      if (*(longlong *)(lVar5 + uVar7) == *param_2) {
        fVar2 = *(float *)(lVar5 + 0x18 + uVar7);
        if ((fVar2 == *(float *)(param_2 + 3)) && (!NAN(fVar2) && !NAN(*(float *)(param_2 + 3)))) {
          if ((int)(~uVar7 >> 5) != 0) {
            return;
          }
          break;
        }
      }
      lVar1 = lVar5 + uVar7;
      uVar7 = uVar7 + 0x20;
    } while (lVar1 + 0x20 != lVar5 + lVar6);
  }
  *(uint *)(param_1 + 0x148) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14c) < iVar3 + 1U) {
    FUN_14889cf16(param_1);
    lVar4 = *(longlong *)(param_1 + 0x140);
  }
  if (lVar4 != 0) {
    param_1 = lVar4;
  }
  *(longlong *)(param_1 + lVar6) = *param_2;
  *(longlong *)(param_1 + 8 + lVar6) = param_2[1];
  *(longlong *)(param_1 + 0x10 + lVar6) = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *(int *)(param_1 + 0x18 + lVar6) = (int)param_2[3];
  return;
}



// FUNCTION 14889cf16 FUN_14889cf16 body=119 status=ok
// SIG undefined FUN_14889cf16(void)

void FUN_14889cf16(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x148);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x14c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14c) = iVar5;
    FUN_14889cf8e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14889cf8e FUN_14889cf8e body=141 status=ok
// SIG undefined FUN_14889cf8e(void)

void FUN_14889cf8e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x140);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x140,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x140),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x140,param_2,param_3,0x20);
  return;
}



// FUNCTION 14889d01c FUN_14889d01c body=70 status=ok
// SIG undefined FUN_14889d01c(void)

void FUN_14889d01c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x150) = &PTR_FUN_14b189ef0;
  FUN_1486ba411(*(undefined8 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  FUN_14889d062(param_1);
  return;
}



// FUNCTION 14889d062 FUN_14889d062 body=62 status=ok
// SIG undefined FUN_14889d062(void)

void FUN_14889d062(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar1 = param_1;
  }
  FUN_14889d0a0(lVar1,*(undefined4 *)(param_1 + 0x148));
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14889d0a0 FUN_14889d0a0 body=73 status=ok
// SIG undefined FUN_14889d0a0(void)

void FUN_14889d0a0(longlong param_1,int param_2)

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



// FUNCTION 14889d0ea FUN_14889d0ea body=80 status=ok
// SIG undefined FUN_14889d0ea(void)

void FUN_14889d0ea(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x58) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 5;
    return;
  }
  FUN_14889d13a(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar1 = param_1;
  }
  FUN_14889d19c(lVar1,param_2,param_3);
  return;
}



// FUNCTION 14889d13a FUN_14889d13a body=98 status=ok
// SIG undefined FUN_14889d13a(void)

void FUN_14889d13a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    if (param_2 < 6) {
      iVar3 = 5;
    }
    else {
      iVar2 = 0;
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar3 = (int)(uVar1 >> 4);
      if (iVar3 < (int)param_2) {
        iVar3 = 0x7fffffff;
      }
      else if (iVar3 < 1) goto LAB_14889d173;
    }
    iVar2 = iVar3;
    FUN_14889d1ca(param_1,0,iVar2);
  }
LAB_14889d173:
  *(int *)(param_1 + 0x5c) = iVar2;
  return;
}



// FUNCTION 14889d19c FUN_14889d19c body=45 status=ok
// SIG undefined FUN_14889d19c(void)

void FUN_14889d19c(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14889d1ca FUN_14889d1ca body=132 status=ok
// SIG undefined FUN_14889d1ca(void)

void FUN_14889d1ca(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,0x10);
  return;
}



// FUNCTION 14889d24e FUN_14889d24e body=53 status=ok
// SIG undefined FUN_14889d24e(void)

void FUN_14889d24e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar1 = param_1;
  }
  FUN_14889d283(lVar1,*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14889d283 FUN_14889d283 body=73 status=ok
// SIG undefined FUN_14889d283(void)

void FUN_14889d283(longlong param_1,int param_2)

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



// FUNCTION 14889d2cc FUN_14889d2cc body=29 status=ok
// SIG undefined FUN_14889d2cc(void)

undefined8 FUN_14889d2cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14889d2ee FUN_14889d2ee body=78 status=ok
// SIG undefined FUN_14889d2ee(void)

void FUN_14889d2ee(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_140230656(param_3 + 0x10);
  uVar1 = DAT_14cb0d2b0;
  if (cVar2 == '\0') {
    uVar3 = (**(code **)(*param_2 + 0x180))(param_2);
    FUN_147d80080(uVar1,uVar3);
    return;
  }
  FUN_14889d33c(param_2,param_3);
  return;
}



// FUNCTION 14889d33c FUN_14889d33c body=71 status=ok
// SIG undefined FUN_14889d33c(void)

longlong FUN_14889d33c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147d7ff08(DAT_14cb0d2b0,param_1,*(undefined4 *)(param_2 + 8));
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x30);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}


